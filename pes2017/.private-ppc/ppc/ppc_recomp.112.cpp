#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82A713F0"))) PPC_WEAK_FUNC(sub_82A713F0);
PPC_FUNC_IMPL(__imp__sub_82A713F0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83744a28
	ctx.lr = 0x82A71414;
	sub_83744A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a71468
	if (cr6.eq) goto loc_82A71468;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a71468
	if (cr6.eq) goto loc_82A71468;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82A7143C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a71468
	if (cr6.eq) goto loc_82A71468;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82a71468
	if (cr6.lt) goto loc_82A71468;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82a7146c
	if (!cr6.gt) goto loc_82A7146C;
loc_82A71468:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A7146C:
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

__attribute__((alias("__imp__sub_82A71484"))) PPC_WEAK_FUNC(sub_82A71484);
PPC_FUNC_IMPL(__imp__sub_82A71484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A71488"))) PPC_WEAK_FUNC(sub_82A71488);
PPC_FUNC_IMPL(__imp__sub_82A71488) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A71490;
	__savegprlr_28(ctx, base);
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
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A714B8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a71508
	if (cr6.eq) goto loc_82A71508;
	// bl 0x8308e078
	ctx.lr = 0x82A714C8;
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
	ctx.lr = 0x82A714E0;
	sub_82D253F8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stw r28,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
	// addi r9,r11,22528
	ctx.r9.s64 = ctx.r11.s64 + 22528;
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
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82A71508:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A71514"))) PPC_WEAK_FUNC(sub_82A71514);
PPC_FUNC_IMPL(__imp__sub_82A71514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A71518"))) PPC_WEAK_FUNC(sub_82A71518);
PPC_FUNC_IMPL(__imp__sub_82A71518) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r9,r11,22528
	ctx.r9.s64 = ctx.r11.s64 + 22528;
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
	ctx.lr = 0x82A71550;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a71568
	if (cr6.eq) goto loc_82A71568;
	// bl 0x82416268
	ctx.lr = 0x82A71564;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A71568:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A71580"))) PPC_WEAK_FUNC(sub_82A71580);
PPC_FUNC_IMPL(__imp__sub_82A71580) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a71590
	if (cr6.lt) goto loc_82A71590;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82A71590:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82a71488
	sub_82A71488(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A7159C"))) PPC_WEAK_FUNC(sub_82A7159C);
PPC_FUNC_IMPL(__imp__sub_82A7159C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A715A0"))) PPC_WEAK_FUNC(sub_82A715A0);
PPC_FUNC_IMPL(__imp__sub_82A715A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a715b0
	if (cr6.lt) goto loc_82A715B0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82A715B0:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82a71488
	sub_82A71488(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A715BC"))) PPC_WEAK_FUNC(sub_82A715BC);
PPC_FUNC_IMPL(__imp__sub_82A715BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A715C0"))) PPC_WEAK_FUNC(sub_82A715C0);
PPC_FUNC_IMPL(__imp__sub_82A715C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a715d0
	if (cr6.lt) goto loc_82A715D0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82A715D0:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x82a71488
	sub_82A71488(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A715DC"))) PPC_WEAK_FUNC(sub_82A715DC);
PPC_FUNC_IMPL(__imp__sub_82A715DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A715E0"))) PPC_WEAK_FUNC(sub_82A715E0);
PPC_FUNC_IMPL(__imp__sub_82A715E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A715E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r28,r11,22392
	ctx.r28.s64 = ctx.r11.s64 + 22392;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x82A71610;
	sub_82D2F6D8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a718f0
	if (cr6.eq) goto loc_82A718F0;
	// lwz r11,96(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82a71638
	if (cr6.lt) goto loc_82A71638;
	// beq cr6,0x82a7164c
	if (cr6.eq) goto loc_82A7164C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82a718b4
	if (!cr6.lt) goto loc_82A718B4;
loc_82A71638:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a71800
	if (!cr6.eq) goto loc_82A71800;
	// lis r4,42
	ctx.r4.s64 = 2752512;
	// ori r4,r4,62
	ctx.r4.u64 = ctx.r4.u64 | 62;
	// b 0x82a71808
	goto loc_82A71808;
loc_82A7164C:
	// bl 0x83763ef8
	ctx.lr = 0x82A71650;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a718b4
	if (cr6.eq) goto loc_82A718B4;
	// bl 0x83763ef8
	ctx.lr = 0x82A7165C;
	sub_83763EF8(ctx, base);
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a718b4
	if (cr6.eq) goto loc_82A718B4;
	// bl 0x83763ef8
	ctx.lr = 0x82A7166C;
	sub_83763EF8(ctx, base);
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82a718b4
	if (cr6.eq) goto loc_82A718B4;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// bl 0x83763ef8
	ctx.lr = 0x82A71684;
	sub_83763EF8(ctx, base);
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// lwz r30,92(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x83763ef8
	ctx.lr = 0x82A71690;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r30,5
	cr6.compare<uint32_t>(ctx.r30.u32, 5, xer);
	// bge cr6,0x82a71748
	if (!cr6.lt) goto loc_82A71748;
	// lwz r10,288(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// mulli r11,r30,132
	ctx.r11.s64 = ctx.r30.s64 * 132;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 65536;
	// addi r3,r3,1444
	ctx.r3.s64 = ctx.r3.s64 + 1444;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a71748
	if (cr6.eq) goto loc_82A71748;
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,26256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26256);
	// rlwinm r10,r11,14,0,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82a713f0
	ctx.lr = 0x82A716D4;
	sub_82A713F0(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a71724
	if (!cr6.eq) goto loc_82A71724;
	// clrlwi r11,r10,25
	ctx.r11.u64 = ctx.r10.u32 & 0x7F;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82a71748
	if (cr6.gt) goto loc_82A71748;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82a7170c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A7170C;
	// bdzf 4*cr6+eq,0x82a71714
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A71714;
	// bne cr6,0x82a7171c
	if (!cr6.eq) goto loc_82A7171C;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// b 0x82a71748
	goto loc_82A71748;
loc_82A7170C:
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x82a71748
	goto loc_82A71748;
loc_82A71714:
	// li r29,2
	ctx.r29.s64 = 2;
	// b 0x82a71748
	goto loc_82A71748;
loc_82A7171C:
	// li r29,3
	ctx.r29.s64 = 3;
	// b 0x82a71748
	goto loc_82A71748;
loc_82A71724:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a71748
	if (!cr6.eq) goto loc_82A71748;
	// clrlwi r11,r10,25
	ctx.r11.u64 = ctx.r10.u32 & 0x7F;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82a71744
	if (cr6.lt) goto loc_82A71744;
	// bne cr6,0x82a71748
	if (!cr6.eq) goto loc_82A71748;
	// li r29,5
	ctx.r29.s64 = 5;
	// b 0x82a71748
	goto loc_82A71748;
loc_82A71744:
	// li r29,4
	ctx.r29.s64 = 4;
loc_82A71748:
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r11,r28,-24
	ctx.r11.s64 = ctx.r28.s64 + -24;
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d04220
	ctx.lr = 0x82A7176C;
	sub_82D04220(ctx, base);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// lis r4,230
	ctx.r4.s64 = 15073280;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// ori r4,r4,52
	ctx.r4.u64 = ctx.r4.u64 | 52;
	// bl 0x82d04220
	ctx.lr = 0x82A71788;
	sub_82D04220(ctx, base);
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bge cr6,0x82a717a8
	if (!cr6.lt) goto loc_82A717A8;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
loc_82A717A8:
	// lis r4,230
	ctx.r4.s64 = 15073280;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// ori r4,r4,160
	ctx.r4.u64 = ctx.r4.u64 | 160;
	// bl 0x82d042a8
	ctx.lr = 0x82A717B8;
	sub_82D042A8(ctx, base);
	// addi r4,r28,32
	ctx.r4.s64 = ctx.r28.s64 + 32;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x825a1eb8
	ctx.lr = 0x82A717C8;
	sub_825A1EB8(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x825a1da8
	ctx.lr = 0x82A717DC;
	sub_825A1DA8(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x82A717E8;
	sub_82D2AAB0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82A717F0;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x82A717F8;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// b 0x82a718b0
	goto loc_82A718B0;
loc_82A71800:
	// lis r4,39
	ctx.r4.s64 = 2555904;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
loc_82A71808:
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// bl 0x82d04220
	ctx.lr = 0x82A71820;
	sub_82D04220(ctx, base);
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// lis r4,230
	ctx.r4.s64 = 15073280;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// ori r4,r4,52
	ctx.r4.u64 = ctx.r4.u64 | 52;
	// bl 0x82d04220
	ctx.lr = 0x82A7183C;
	sub_82D04220(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bge cr6,0x82a7185c
	if (!cr6.lt) goto loc_82A7185C;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
loc_82A7185C:
	// lis r4,230
	ctx.r4.s64 = 15073280;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,159
	ctx.r4.u64 = ctx.r4.u64 | 159;
	// bl 0x82d042a8
	ctx.lr = 0x82A7186C;
	sub_82D042A8(ctx, base);
	// addi r4,r28,28
	ctx.r4.s64 = ctx.r28.s64 + 28;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1eb8
	ctx.lr = 0x82A7187C;
	sub_825A1EB8(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1da8
	ctx.lr = 0x82A71890;
	sub_825A1DA8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x82A7189C;
	sub_82D2AAB0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82A718A4;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x82A718AC;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
loc_82A718B0:
	// bl 0x8387e8e0
	ctx.lr = 0x82A718B4;
	sub_8387E8E0(ctx, base);
loc_82A718B4:
	// addi r30,r28,-4
	ctx.r30.s64 = ctx.r28.s64 + -4;
loc_82A718B8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzu r5,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2a258
	ctx.lr = 0x82A718C8;
	sub_82D2A258(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x82a718b8
	if (cr6.lt) goto loc_82A718B8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19788
	ctx.lr = 0x82A718E4;
	sub_82D19788(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83103100
	ctx.lr = 0x82A718F0;
	sub_83103100(ctx, base);
loc_82A718F0:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A718F8"))) PPC_WEAK_FUNC(sub_82A718F8);
PPC_FUNC_IMPL(__imp__sub_82A718F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A71900;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,255(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 255);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a719a4
	if (!cr6.eq) goto loc_82A719A4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d19cd0
	ctx.lr = 0x82A7191C;
	sub_82D19CD0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,316(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A71938;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31778
	ctx.r9.s64 = -2082603008;
	// lwz r30,26396(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26396);
	// bl 0x83763ef8
	ctx.lr = 0x82A71944;
	sub_83763EF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a719a0
	if (cr6.eq) goto loc_82A719A0;
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,26348
	ctx.r4.s64 = ctx.r11.s64 + 26348;
	// bl 0x825a2298
	ctx.lr = 0x82A71960;
	sub_825A2298(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a71984
	if (cr6.eq) goto loc_82A71984;
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8376cab0
	ctx.lr = 0x82A71980;
	sub_8376CAB0(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82A71984:
	// lwz r10,288(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82a719a0
	if (cr6.eq) goto loc_82A719A0;
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,52(r10)
	PPC_STORE_U64(ctx.r10.u32 + 52, ctx.r11.u64);
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// stw r30,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r30.u32);
loc_82A719A0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82A719A4:
	// bl 0x82bde008
	ctx.lr = 0x82A719A8;
	sub_82BDE008(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A719B0"))) PPC_WEAK_FUNC(sub_82A719B0);
PPC_FUNC_IMPL(__imp__sub_82A719B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A719B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a71a30
	if (cr6.eq) goto loc_82A71A30;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d19d40
	ctx.lr = 0x82A719DC;
	sub_82D19D40(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r27,r3,r30
	ctx.r27.s64 = ctx.r30.s64 - ctx.r3.s64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,316(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A719FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d21408
	ctx.lr = 0x82A71A10;
	sub_82D21408(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,304(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 304);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A71A30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82A71A30:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A71A38"))) PPC_WEAK_FUNC(sub_82A71A38);
PPC_FUNC_IMPL(__imp__sub_82A71A38) {
	PPC_FUNC_PROLOGUE();
	// lis r3,32
	ctx.r3.s64 = 2097152;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A71A44"))) PPC_WEAK_FUNC(sub_82A71A44);
PPC_FUNC_IMPL(__imp__sub_82A71A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A71A48"))) PPC_WEAK_FUNC(sub_82A71A48);
PPC_FUNC_IMPL(__imp__sub_82A71A48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A71A50;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,96(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r9,100(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,96
	ctx.r30.s64 = ctx.r3.s64 + 96;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r29,r11,23128
	ctx.r29.s64 = ctx.r11.s64 + 23128;
	// srawi r6,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 2;
	// cmplwi cr6,r6,18
	cr6.compare<uint32_t>(ctx.r6.u32, 18, xer);
	// bge cr6,0x82a71aac
	if (!cr6.lt) goto loc_82A71AAC;
	// addi r5,r29,-24
	ctx.r5.s64 = ctx.r29.s64 + -24;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831d0b08
	ctx.lr = 0x82A71A8C;
	sub_831D0B08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82A71A94;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A71AAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82A71AAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82A71AB4;
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
	ctx.lr = 0x82A71ACC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a71b1c
	if (cr6.eq) goto loc_82A71B1C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r31,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r9.s32 >> 2;
	// cmplwi cr6,r31,18
	cr6.compare<uint32_t>(ctx.r31.u32, 18, xer);
	// bge cr6,0x82a71b1c
	if (!cr6.lt) goto loc_82A71B1C;
loc_82A71AF0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82A71AFC;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a71b10
	if (cr6.eq) goto loc_82A71B10;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82A71B10;
	sub_82D2AEC8(ctx, base);
loc_82A71B10:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,18
	cr6.compare<uint32_t>(ctx.r31.u32, 18, xer);
	// blt cr6,0x82a71af0
	if (cr6.lt) goto loc_82A71AF0;
loc_82A71B1C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A71B28"))) PPC_WEAK_FUNC(sub_82A71B28);
PPC_FUNC_IMPL(__imp__sub_82A71B28) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,23224
	ctx.r9.s64 = ctx.r11.s64 + 23224;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// lwz r4,264(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a71b70
	if (cr6.eq) goto loc_82A71B70;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82A71B70;
	sub_825952B8(ctx, base);
loc_82A71B70:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// bl 0x82bddf00
	ctx.lr = 0x82A71B88;
	sub_82BDDF00(ctx, base);
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

__attribute__((alias("__imp__sub_82A71B9C"))) PPC_WEAK_FUNC(sub_82A71B9C);
PPC_FUNC_IMPL(__imp__sub_82A71B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A71BA0"))) PPC_WEAK_FUNC(sub_82A71BA0);
PPC_FUNC_IMPL(__imp__sub_82A71BA0) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stb r11,255(r3)
	PPC_STORE_U8(ctx.r3.u32 + 255, ctx.r11.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r10,23548
	ctx.r5.s64 = ctx.r10.s64 + 23548;
	// b 0x82d20da8
	sub_82D20DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A71BB8"))) PPC_WEAK_FUNC(sub_82A71BB8);
PPC_FUNC_IMPL(__imp__sub_82A71BB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82A71BC0;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x83763ef8
	ctx.lr = 0x82A71BCC;
	sub_83763EF8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a71e9c
	if (cr6.eq) goto loc_82A71E9C;
	// lwz r10,288(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82a71e9c
	if (cr6.eq) goto loc_82A71E9C;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a71e9c
	if (cr6.eq) goto loc_82A71E9C;
	// lis r31,-31778
	ctx.r31.s64 = -2082603008;
	// lis r30,-31778
	ctx.r30.s64 = -2082603008;
	// addi r27,r23,264
	ctx.r27.s64 = ctx.r23.s64 + 264;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// ld r11,26348(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 26348);
	// std r11,52(r10)
	PPC_STORE_U64(ctx.r10.u32 + 52, ctx.r11.u64);
	// lwz r10,288(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// lwz r11,26396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26396);
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lwz r3,288(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// bl 0x83772388
	ctx.lr = 0x82A71C1C;
	sub_83772388(ctx, base);
	// lwz r8,268(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 268);
	// lwz r10,288(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 288);
	// lwz r11,264(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 264);
	// ld r28,26348(r31)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r31.u32 + 26348);
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// lwz r8,26396(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26396);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// srawi r6,r7,5
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 5;
	// std r28,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r28.u64);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// ble cr6,0x82a71c5c
	if (!cr6.gt) goto loc_82A71C5C;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r28,16(r11)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// std r28,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r28.u64);
loc_82A71C5C:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x8319fea0
	ctx.lr = 0x82A71C64;
	sub_8319FEA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r30,16
	ctx.r30.s64 = 1048576;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// rlwinm r29,r10,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// li r26,0
	ctx.r26.s64 = 0;
	// ori r24,r11,159
	ctx.r24.u64 = ctx.r11.u64 | 159;
loc_82A71C80:
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// sth r26,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r26.u16);
	// ld r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,72(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 72);
	// bl 0x8306ef60
	ctx.lr = 0x82A71C98;
	sub_8306EF60(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a71d64
	if (cr6.eq) goto loc_82A71D64;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a71cc4
	if (!cr6.eq) goto loc_82A71CC4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83767ef8
	ctx.lr = 0x82A71CB8;
	sub_83767EF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a71d64
	if (!cr6.eq) goto loc_82A71D64;
loc_82A71CC4:
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// subf r10,r6,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r6.s64;
	// srawi. r7,r10,5
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 5;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82a71d4c
	if (cr0.eq) goto loc_82A71D4C;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// cmplw cr6,r7,r26
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r26.u32, xer);
	// ble cr6,0x82a71e14
	if (!cr6.gt) goto loc_82A71E14;
loc_82A71CEC:
	// add r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 + ctx.r8.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a71d08
	if (!cr6.eq) goto loc_82A71D08;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82a71d28
	goto loc_82A71D28;
loc_82A71D08:
	// lhz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a71d20
	if (!cr6.eq) goto loc_82A71D20;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82a71d24
	if (cr6.eq) goto loc_82A71D24;
loc_82A71D20:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82A71D24:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A71D28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a71d48
	if (!cr6.eq) goto loc_82A71D48;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82a71cec
	if (cr6.gt) goto loc_82A71CEC;
	// b 0x82a71d4c
	goto loc_82A71D4C;
loc_82A71D48:
	// li r5,1
	ctx.r5.s64 = 1;
loc_82A71D4C:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a71d64
	if (!cr6.eq) goto loc_82A71D64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r23,96
	ctx.r3.s64 = ctx.r23.s64 + 96;
	// bl 0x835977d8
	ctx.lr = 0x82A71D64;
	sub_835977D8(ctx, base);
loc_82A71D64:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r24
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r24.u32, xer);
	// ble cr6,0x82a71c80
	if (!cr6.gt) goto loc_82A71C80;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82a71d8c
	if (cr6.lt) goto loc_82A71D8C;
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a71d90
	if (!cr6.gt) goto loc_82A71D90;
loc_82A71D8C:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82A71D90:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a71db0
	if (cr6.eq) goto loc_82A71DB0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,72(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 72);
	// bl 0x8306ef60
	ctx.lr = 0x82A71DA8;
	sub_8306EF60(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a71e90
	if (cr6.eq) goto loc_82A71E90;
loc_82A71DB0:
	// lis r31,16
	ctx.r31.s64 = 1048576;
loc_82A71DB4:
	// sth r26,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r26.u16);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lwz r3,72(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 72);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8306ef60
	ctx.lr = 0x82A71DCC;
	sub_8306EF60(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82a71e70
	if (!cr6.eq) goto loc_82A71E70;
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// subf r10,r6,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r6.s64;
	// srawi. r7,r10,5
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 5;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82a71e64
	if (cr0.eq) goto loc_82A71E64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// cmplw cr6,r7,r26
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r26.u32, xer);
	// ble cr6,0x82a71e84
	if (!cr6.gt) goto loc_82A71E84;
loc_82A71DF8:
	// add r11,r6,r9
	ctx.r11.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a71e20
	if (!cr6.eq) goto loc_82A71E20;
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82a71e40
	goto loc_82A71E40;
loc_82A71E14:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A71E20;
	sub_831CC188(ctx, base);
loc_82A71E20:
	// lhz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a71e38
	if (!cr6.eq) goto loc_82A71E38;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82a71e3c
	if (cr6.eq) goto loc_82A71E3C;
loc_82A71E38:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82A71E3C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A71E40:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a71e60
	if (!cr6.eq) goto loc_82A71E60;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bgt cr6,0x82a71df8
	if (cr6.gt) goto loc_82A71DF8;
	// b 0x82a71e64
	goto loc_82A71E64;
loc_82A71E60:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82A71E64:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a71e90
	if (cr6.eq) goto loc_82A71E90;
loc_82A71E70:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r24
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r24.u32, xer);
	// ble cr6,0x82a71db4
	if (!cr6.gt) goto loc_82A71DB4;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82A71E84:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A71E90;
	sub_831CC188(ctx, base);
loc_82A71E90:
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r23,96
	ctx.r3.s64 = ctx.r23.s64 + 96;
	// bl 0x835977d8
	ctx.lr = 0x82A71E9C;
	sub_835977D8(ctx, base);
loc_82A71E9C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A71EA4"))) PPC_WEAK_FUNC(sub_82A71EA4);
PPC_FUNC_IMPL(__imp__sub_82A71EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A71EA8"))) PPC_WEAK_FUNC(sub_82A71EA8);
PPC_FUNC_IMPL(__imp__sub_82A71EA8) {
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
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r7,26312(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26312);
	// bl 0x82bde0a8
	ctx.lr = 0x82A71ED4;
	sub_82BDE0A8(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r8,r10,23224
	ctx.r8.s64 = ctx.r10.s64 + 23224;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// bl 0x82a71bb8
	ctx.lr = 0x82A71F04;
	sub_82A71BB8(ctx, base);
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

__attribute__((alias("__imp__sub_82A71F1C"))) PPC_WEAK_FUNC(sub_82A71F1C);
PPC_FUNC_IMPL(__imp__sub_82A71F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A71F20"))) PPC_WEAK_FUNC(sub_82A71F20);
PPC_FUNC_IMPL(__imp__sub_82A71F20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82a71b28
	ctx.lr = 0x82A71F40;
	sub_82A71B28(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a71f58
	if (cr6.eq) goto loc_82A71F58;
	// bl 0x82416268
	ctx.lr = 0x82A71F54;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A71F58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A71F70"))) PPC_WEAK_FUNC(sub_82A71F70);
PPC_FUNC_IMPL(__imp__sub_82A71F70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A71F78;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a71f90
	if (cr6.lt) goto loc_82A71F90;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82a71f94
	goto loc_82A71F94;
loc_82A71F90:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82A71F94:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,280
	ctx.r4.s64 = 280;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,26396(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26396);
	// bl 0x82595718
	ctx.lr = 0x82A71FB8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a71fd8
	if (cr6.eq) goto loc_82A71FD8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a71ea8
	ctx.lr = 0x82A71FD0;
	sub_82A71EA8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A71FD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A71FE4"))) PPC_WEAK_FUNC(sub_82A71FE4);
PPC_FUNC_IMPL(__imp__sub_82A71FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A71FE8"))) PPC_WEAK_FUNC(sub_82A71FE8);
PPC_FUNC_IMPL(__imp__sub_82A71FE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x83763ef8
	ctx.lr = 0x82A72004;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82a72014
	if (!cr6.eq) goto loc_82A72014;
loc_82A7200C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a7205c
	goto loc_82A7205C;
loc_82A72014:
	// bl 0x83763ef8
	ctx.lr = 0x82A72018;
	sub_83763EF8(ctx, base);
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a7200c
	if (cr6.eq) goto loc_82A7200C;
	// lbz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a72058
	if (!cr6.eq) goto loc_82A72058;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82A72038;
	sub_82D1C1A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,32
	cr6.compare<uint32_t>(ctx.r3.u32, 32, xer);
	// bge cr6,0x82a72058
	if (!cr6.lt) goto loc_82A72058;
	// bl 0x83763ef8
	ctx.lr = 0x82A72048;
	sub_83763EF8(ctx, base);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// lwz r10,288(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// lbz r9,112(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 112);
	// stw r9,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r9.u32);
loc_82A72058:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82A7205C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A72074"))) PPC_WEAK_FUNC(sub_82A72074);
PPC_FUNC_IMPL(__imp__sub_82A72074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A72078"))) PPC_WEAK_FUNC(sub_82A72078);
PPC_FUNC_IMPL(__imp__sub_82A72078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A72080;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82d19bc0
	ctx.lr = 0x82A72094;
	sub_82D19BC0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a720a0
	if (cr6.eq) goto loc_82A720A0;
	// lwz r29,132(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
loc_82A720A0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82A720A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82A720AC;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82A720B4;
	sub_82D33DB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82A720BC;
	sub_82D33DB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a720e4
	if (cr6.eq) goto loc_82A720E4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// add r5,r30,r29
	ctx.r5.u64 = ctx.r30.u64 + ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A720E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82A720E4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,16
	cr6.compare<uint32_t>(ctx.r30.u32, 16, xer);
	// blt cr6,0x82a720a4
	if (cr6.lt) goto loc_82A720A4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A720F8"))) PPC_WEAK_FUNC(sub_82A720F8);
PPC_FUNC_IMPL(__imp__sub_82A720F8) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stb r11,160(r3)
	PPC_STORE_U8(ctx.r3.u32 + 160, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r10,24404
	ctx.r5.s64 = ctx.r10.s64 + 24404;
	// b 0x82d20da8
	sub_82D20DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A72110"))) PPC_WEAK_FUNC(sub_82A72110);
PPC_FUNC_IMPL(__imp__sub_82A72110) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83070638
	ctx.lr = 0x82A72134;
	sub_83070638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a72188
	if (cr6.eq) goto loc_82A72188;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a72188
	if (cr6.eq) goto loc_82A72188;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82A7215C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a72188
	if (cr6.eq) goto loc_82A72188;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82a72188
	if (cr6.lt) goto loc_82A72188;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82a7218c
	if (!cr6.gt) goto loc_82A7218C;
loc_82A72188:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A7218C:
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

__attribute__((alias("__imp__sub_82A721A4"))) PPC_WEAK_FUNC(sub_82A721A4);
PPC_FUNC_IMPL(__imp__sub_82A721A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A721A8"))) PPC_WEAK_FUNC(sub_82A721A8);
PPC_FUNC_IMPL(__imp__sub_82A721A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82a72248
	if (cr6.eq) goto loc_82A72248;
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
loc_82A721B4:
	// lwz r10,-12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r8,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r8.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,12(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// rlwimi r7,r6,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stw r7,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r7.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r3,r10,0,14,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFC0000);
	// stw r3,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r3.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r8.u32);
	// lwz r6,24(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwimi r7,r6,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r7.u32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwimi r3,r10,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// stw r3,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r3.u32);
	// lbz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// stb r9,28(r5)
	PPC_STORE_U8(ctx.r5.u32 + 28, ctx.r9.u8);
	// lbz r8,17(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// stb r8,29(r5)
	PPC_STORE_U8(ctx.r5.u32 + 29, ctx.r8.u8);
	// lbz r7,18(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stb r7,30(r5)
	PPC_STORE_U8(ctx.r5.u32 + 30, ctx.r7.u8);
	// addi r5,r5,32
	ctx.r5.s64 = ctx.r5.s64 + 32;
	// addi r6,r11,-12
	ctx.r6.s64 = ctx.r11.s64 + -12;
	// cmplw cr6,r6,r4
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, xer);
	// bne cr6,0x82a721b4
	if (!cr6.eq) goto loc_82A721B4;
loc_82A72248:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A72250"))) PPC_WEAK_FUNC(sub_82A72250);
PPC_FUNC_IMPL(__imp__sub_82A72250) {
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
	ctx.lr = 0x82A72258;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82A72264;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82A7226C;
	sub_82D33DB0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a724d8
	if (cr6.eq) goto loc_82A724D8;
	// bl 0x83763ef8
	ctx.lr = 0x82A7227C;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a724d8
	if (cr6.eq) goto loc_82A724D8;
	// bl 0x83763ef8
	ctx.lr = 0x82A72288;
	sub_83763EF8(ctx, base);
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a724d8
	if (cr6.eq) goto loc_82A724D8;
	// bl 0x83763ef8
	ctx.lr = 0x82A72298;
	sub_83763EF8(ctx, base);
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82a724d8
	if (cr6.eq) goto loc_82A724D8;
	// bl 0x83763ef8
	ctx.lr = 0x82A722AC;
	sub_83763EF8(ctx, base);
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// stw r11,148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 148, ctx.r11.u32);
	// bl 0x83763ef8
	ctx.lr = 0x82A722B8;
	sub_83763EF8(ctx, base);
	// lwz r3,288(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// bl 0x8376f740
	ctx.lr = 0x82A722C0;
	sub_8376F740(ctx, base);
	// bl 0x83763ef8
	ctx.lr = 0x82A722C4;
	sub_83763EF8(ctx, base);
	// addi r29,r30,96
	ctx.r29.s64 = ctx.r30.s64 + 96;
	// lwz r3,288(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83772388
	ctx.lr = 0x82A722D4;
	sub_83772388(ctx, base);
	// lwz r3,148(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// bl 0x8319fea0
	ctx.lr = 0x82A722DC;
	sub_8319FEA0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r26,1
	ctx.r26.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a722f8
	if (cr6.eq) goto loc_82A722F8;
	// stb r31,152(r30)
	PPC_STORE_U8(ctx.r30.u32 + 152, ctx.r31.u8);
	// b 0x82a722fc
	goto loc_82A722FC;
loc_82A722F8:
	// stb r26,152(r30)
	PPC_STORE_U8(ctx.r30.u32 + 152, ctx.r26.u8);
loc_82A722FC:
	// stb r31,144(r30)
	PPC_STORE_U8(ctx.r30.u32 + 144, ctx.r31.u8);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r10,r8,5
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 5;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82a723d4
	if (cr0.eq) goto loc_82A723D4;
	// lis r8,-31778
	ctx.r8.s64 = -2082603008;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r8,26560
	ctx.r6.s64 = ctx.r8.s64 + 26560;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// lwz r8,4(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// ble cr6,0x82a7248c
	if (!cr6.gt) goto loc_82A7248C;
loc_82A72330:
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82a7234c
	if (!cr6.eq) goto loc_82A7234C;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cntlzw r5,r11
	ctx.r5.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// b 0x82a72374
	goto loc_82A72374;
loc_82A7234C:
	// lhz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// lhz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// bne cr6,0x82a7236c
	if (!cr6.eq) goto loc_82A7236C;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// beq cr6,0x82a72370
	if (cr6.eq) goto loc_82A72370;
loc_82A7236C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82A72370:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A72374:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a72398
	if (!cr6.eq) goto loc_82A72398;
	// lbz r11,30(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 30);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a72398
	if (!cr6.eq) goto loc_82A72398;
	// lbz r11,29(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 29);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a723b4
	if (cr6.eq) goto loc_82A723B4;
loc_82A72398:
	// lbz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 144);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stb r9,112(r8)
	PPC_STORE_U8(ctx.r8.u32 + 112, ctx.r9.u8);
	// lbz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 144);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stb r5,144(r30)
	PPC_STORE_U8(ctx.r30.u32 + 144, ctx.r5.u8);
	// lwz r8,4(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
loc_82A723B4:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r5,5
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 5;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82a72330
	if (cr6.gt) goto loc_82A72330;
loc_82A723D4:
	// lbz r28,144(r30)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r30.u32 + 144);
loc_82A723D8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82A723E4;
	sub_82D33DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a72444
	if (cr6.eq) goto loc_82A72444;
	// subfc r11,r28,r31
	xer.ca = ctx.r31.u32 >= ctx.r28.u32;
	ctx.r11.s64 = ctx.r31.s64 - ctx.r28.s64;
	// li r5,2
	ctx.r5.s64 = 2;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r25,r9,31
	ctx.r25.u64 = ctx.r9.u32 & 0x1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82A72408;
	sub_82D2AEC8(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82A7241C;
	sub_82D2B608(ctx, base);
	// cmplw cr6,r28,r31
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r31.u32, xer);
	// ble cr6,0x82a72444
	if (!cr6.gt) goto loc_82A72444;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A72444;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82A72444:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,16
	cr6.compare<uint32_t>(ctx.r31.u32, 16, xer);
	// blt cr6,0x82a723d8
	if (cr6.lt) goto loc_82A723D8;
	// lbz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 144);
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// blt cr6,0x82a72498
	if (cr6.lt) goto loc_82A72498;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82A72464;
	sub_82D19A68(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r11,26464
	ctx.r10.s64 = ctx.r11.s64 + 26464;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// lwz r4,60(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A72484;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82A7248C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A72498;
	sub_831CC188(ctx, base);
loc_82A72498:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a724a4
	if (!cr6.eq) goto loc_82A724A4;
	// stb r26,144(r30)
	PPC_STORE_U8(ctx.r30.u32 + 144, ctx.r26.u8);
loc_82A724A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82A724AC;
	sub_82D19A68(ctx, base);
	// lbz r10,144(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 144);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-31778
	ctx.r9.s64 = -2082603008;
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// addi r11,r9,26464
	ctx.r11.s64 = ctx.r9.s64 + 26464;
	// li r5,1
	ctx.r5.s64 = 1;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,72(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// lwz r4,-4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82A724D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82A724D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A724E0"))) PPC_WEAK_FUNC(sub_82A724E0);
PPC_FUNC_IMPL(__imp__sub_82A724E0) {
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
	ctx.lr = 0x82A724FC;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r30,r11,24280
	ctx.r30.s64 = ctx.r11.s64 + 24280;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A7251C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a72530
	if (cr6.eq) goto loc_82A72530;
	// lis r4,32
	ctx.r4.s64 = 2097152;
	// ori r4,r4,74
	ctx.r4.u64 = ctx.r4.u64 | 74;
	// bl 0x82d303d0
	ctx.lr = 0x82A72530;
	sub_82D303D0(ctx, base);
loc_82A72530:
	// li r4,195
	ctx.r4.s64 = 195;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1a998
	ctx.lr = 0x82A7253C;
	sub_82D1A998(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82A7254C;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a72250
	ctx.lr = 0x82A72554;
	sub_82A72250(ctx, base);
	// lbz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 144);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a725cc
	if (cr6.lt) goto loc_82A725CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82A72568;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A72580;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r5,144(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 144);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20f50
	ctx.lr = 0x82A72598;
	sub_82D20F50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82A725A0;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A725B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a725cc
	if (cr6.eq) goto loc_82A725CC;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82A725CC;
	sub_82D2AEC8(ctx, base);
loc_82A725CC:
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

__attribute__((alias("__imp__sub_82A725E8"))) PPC_WEAK_FUNC(sub_82A725E8);
PPC_FUNC_IMPL(__imp__sub_82A725E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A725F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830706a8
	ctx.lr = 0x82A72604;
	sub_830706A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a7261c
	if (!cr6.eq) goto loc_82A7261C;
loc_82A72610:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A7261C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a72610
	if (cr6.eq) goto loc_82A72610;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,512
	cr6.compare<uint32_t>(ctx.r5.u32, 512, xer);
	// bgt cr6,0x82a72610
	if (cr6.gt) goto loc_82A72610;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82A72648;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a72674
	if (cr6.eq) goto loc_82A72674;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r10,-1(r9)
	PPC_STORE_U8(ctx.r9.u32 + -1, ctx.r10.u8);
	// bl 0x8259d6c0
	ctx.lr = 0x82A72674;
	sub_8259D6C0(ctx, base);
loc_82A72674:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A72680"))) PPC_WEAK_FUNC(sub_82A72680);
PPC_FUNC_IMPL(__imp__sub_82A72680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82A72688;
	__savegprlr_14(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r18,0
	ctx.r18.s64 = 0;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r17,r18
	ctx.r17.u64 = ctx.r18.u64;
	// bl 0x831156e8
	ctx.lr = 0x82A726A4;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a72f1c
	if (cr6.eq) goto loc_82A72F1C;
	// bl 0x831156e8
	ctx.lr = 0x82A726B0;
	sub_831156E8(ctx, base);
	// lwz r20,48(r3)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x83763ef8
	ctx.lr = 0x82A726B8;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a72f1c
	if (cr6.eq) goto loc_82A72F1C;
	// bl 0x83763ef8
	ctx.lr = 0x82A726C4;
	sub_83763EF8(ctx, base);
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a72f1c
	if (cr6.eq) goto loc_82A72F1C;
	// bl 0x83763ef8
	ctx.lr = 0x82A726D4;
	sub_83763EF8(ctx, base);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a72f1c
	if (cr6.eq) goto loc_82A72F1C;
	// bl 0x83763ef8
	ctx.lr = 0x82A726E4;
	sub_83763EF8(ctx, base);
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82a72f1c
	if (cr6.eq) goto loc_82A72F1C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82a72f1c
	if (cr6.eq) goto loc_82A72F1C;
	// lbz r11,144(r16)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r16.u32 + 144);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bge cr6,0x82a72f1c
	if (!cr6.lt) goto loc_82A72F1C;
	// add r10,r31,r16
	ctx.r10.u64 = ctx.r31.u64 + ctx.r16.u64;
	// lwz r11,96(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 96);
	// lwz r9,100(r16)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r16.u32 + 100);
	// addi r21,r16,96
	ctx.r21.s64 = ctx.r16.s64 + 96;
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lbz r24,112(r10)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r10.u32 + 112);
	// srawi r10,r7,5
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 5;
	// cmplw cr6,r10,r24
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, xer);
	// blt cr6,0x82a72f1c
	if (cr6.lt) goto loc_82A72F1C;
	// bgt cr6,0x82a7273c
	if (cr6.gt) goto loc_82A7273C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A7273C;
	sub_831CC188(ctx, base);
loc_82A7273C:
	// rlwinm r23,r24,5,0,26
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 5) & 0xFFFFFFE0;
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// addi r19,r10,26560
	ctx.r19.s64 = ctx.r10.s64 + 26560;
	// ld r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4);
	// lwz r10,4(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// bne cr6,0x82a72770
	if (!cr6.eq) goto loc_82A72770;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x82a72798
	goto loc_82A72798;
loc_82A72770:
	// lhz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// lhz r5,0(r19)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r19.u32 + 0);
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// bne cr6,0x82a72790
	if (!cr6.eq) goto loc_82A72790;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x82a72794
	if (cr6.eq) goto loc_82A72794;
loc_82A72790:
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
loc_82A72794:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_82A72798:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a72f1c
	if (!cr6.eq) goto loc_82A72F1C;
	// ld r22,16(r11)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// cmplwi cr6,r24,32
	cr6.compare<uint32_t>(ctx.r24.u32, 32, xer);
	// std r22,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r22.u64);
	// bge cr6,0x82a72f1c
	if (!cr6.lt) goto loc_82A72F1C;
	// mulli r11,r24,188
	ctx.r11.s64 = ctx.r24.s64 * 188;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addis r31,r11,81
	ctx.r31.s64 = ctx.r11.s64 + 5308416;
	// addi r31,r31,2112
	ctx.r31.s64 = ctx.r31.s64 + 2112;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82a72f1c
	if (cr6.eq) goto loc_82A72F1C;
	// li r14,43
	ctx.r14.s64 = 43;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r14,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r14.u32);
	// li r4,188
	ctx.r4.s64 = 188;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595718
	ctx.lr = 0x82A727E4;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a729d0
	if (cr6.eq) goto loc_82A729D0;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,116
	ctx.r3.s64 = ctx.r3.s64 + 116;
	// bl 0x831cdcf0
	ctx.lr = 0x82A72800;
	sub_831CDCF0(ctx, base);
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82A72810;
	sub_831CDCF0(ctx, base);
	// mr r15,r30
	ctx.r15.u64 = ctx.r30.u64;
	// bl 0x83763ef8
	ctx.lr = 0x82A72818;
	sub_83763EF8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// bl 0x8306ef60
	ctx.lr = 0x82A72824;
	sub_8306EF60(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82a72830
	if (!cr6.eq) goto loc_82A72830;
	// li r17,1
	ctx.r17.s64 = 1;
loc_82A72830:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x825a2298
	ctx.lr = 0x82A7283C;
	sub_825A2298(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a7285c
	if (cr6.eq) goto loc_82A7285C;
	// bl 0x83763ef8
	ctx.lr = 0x82A7284C;
	sub_83763EF8(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// bl 0x8306eeb0
	ctx.lr = 0x82A7285C;
	sub_8306EEB0(ctx, base);
loc_82A7285C:
	// lwz r3,148(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 148);
	// addi r29,r16,148
	ctx.r29.s64 = ctx.r16.s64 + 148;
	// bl 0x8319ff60
	ctx.lr = 0x82A72868;
	sub_8319FF60(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r30,r11,24400
	ctx.r30.s64 = ctx.r11.s64 + 24400;
	// addi r4,r30,-786
	ctx.r4.s64 = ctx.r30.s64 + -786;
	// bl 0x837b0c10
	ctx.lr = 0x82A7287C;
	sub_837B0C10(ctx, base);
	// li r5,106
	ctx.r5.s64 = 106;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a725e8
	ctx.lr = 0x82A7288C;
	sub_82A725E8(ctx, base);
	// stw r18,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a72110
	ctx.lr = 0x82A728A0;
	sub_82A72110(ctx, base);
	// stw r18,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r18.u32);
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a72110
	ctx.lr = 0x82A728B4;
	sub_82A72110(ctx, base);
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// addi r31,r28,100
	ctx.r31.s64 = ctx.r28.s64 + 100;
	// addi r4,r30,-112
	ctx.r4.s64 = ctx.r30.s64 + -112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A728D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,100(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r30,-92
	ctx.r4.s64 = ctx.r30.s64 + -92;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A728EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,100(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r30,-76
	ctx.r4.s64 = ctx.r30.s64 + -76;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82A72908;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,100(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r30,-64
	ctx.r4.s64 = ctx.r30.s64 + -64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A72924;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82a72944
	if (cr6.eq) goto loc_82A72944;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82A72944;
	sub_82D291E0(ctx, base);
loc_82A72944:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82a72958
	if (cr6.eq) goto loc_82A72958;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82d39310
	ctx.lr = 0x82A72958;
	sub_82D39310(ctx, base);
loc_82A72958:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82a729a8
	if (cr6.eq) goto loc_82A729A8;
	// li r5,2
	ctx.r5.s64 = 2;
	// lbz r4,152(r16)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r16.u32 + 152);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82A72970;
	sub_82D2AEC8(ctx, base);
	// lbz r11,152(r16)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r16.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a729a8
	if (cr6.eq) goto loc_82A729A8;
	// lwz r11,324(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 324);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// stw r18,104(r27)
	PPC_STORE_U32(ctx.r27.u32 + 104, ctx.r18.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a72994
	if (cr6.eq) goto loc_82A72994;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82A72994:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d329f8
	ctx.lr = 0x82A729A8;
	sub_82D329F8(ctx, base);
loc_82A729A8:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82a729fc
	if (cr6.eq) goto loc_82A729FC;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r4,260
	cr6.compare<uint32_t>(ctx.r4.u32, 260, xer);
	// bne cr6,0x82a729d8
	if (!cr6.eq) goto loc_82A729D8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82A729CC;
	sub_82D2AEC8(ctx, base);
	// b 0x82a729fc
	goto loc_82A729FC;
loc_82A729D0:
	// mr r15,r18
	ctx.r15.u64 = ctx.r18.u64;
	// b 0x82a7285c
	goto loc_82A7285C;
loc_82A729D8:
	// lwz r11,324(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 324);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// stw r18,104(r28)
	PPC_STORE_U32(ctx.r28.u32 + 104, ctx.r18.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a729f0
	if (cr6.eq) goto loc_82A729F0;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82A729F0:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d32b60
	ctx.lr = 0x82A729FC;
	sub_82D32B60(ctx, base);
loc_82A729FC:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,5
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// cmplw cr6,r8,r24
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r24.u32, xer);
	// bgt cr6,0x82a72a20
	if (cr6.gt) goto loc_82A72A20;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A72A20;
	sub_831CC188(ctx, base);
loc_82A72A20:
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lbz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a72aa0
	if (!cr6.eq) goto loc_82A72AA0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82a72a4c
	if (cr6.eq) goto loc_82A72A4C;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82A72A4C;
	sub_82D2B608(ctx, base);
loc_82A72A4C:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82a72a68
	if (cr6.eq) goto loc_82A72A68;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82A72A68;
	sub_82D2B608(ctx, base);
loc_82A72A68:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82a72a84
	if (cr6.eq) goto loc_82A72A84;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82A72A84;
	sub_82D2B608(ctx, base);
loc_82A72A84:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82a72aa0
	if (cr6.eq) goto loc_82A72AA0;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82A72AA0;
	sub_82D2B608(ctx, base);
loc_82A72AA0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82A72AA8;
	sub_8387E8E0(ctx, base);
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(ctx.r15.u32, 0, xer);
	// beq cr6,0x82a72f1c
	if (cr6.eq) goto loc_82A72F1C;
	// addi r4,r30,-785
	ctx.r4.s64 = ctx.r30.s64 + -785;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82A72ABC;
	sub_837B0C10(ctx, base);
	// lis r25,-31778
	ctx.r25.s64 = -2082603008;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// stw r18,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r18.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r18,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// mr r23,r18
	ctx.r23.u64 = ctx.r18.u64;
	// lwz r11,26608(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 26608);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825a2298
	ctx.lr = 0x82A72AE0;
	sub_825A2298(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a72af8
	if (!cr6.eq) goto loc_82A72AF8;
	// clrlwi r11,r17,24
	ctx.r11.u64 = ctx.r17.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a72ba4
	if (!cr6.eq) goto loc_82A72BA4;
loc_82A72AF8:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8311c080
	ctx.lr = 0x82A72B04;
	sub_8311C080(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a72b30
	if (cr6.eq) goto loc_82A72B30;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8311bf98
	ctx.lr = 0x82A72B1C;
	sub_8311BF98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// bl 0x8259d6c0
	ctx.lr = 0x82A72B2C;
	sub_8259D6C0(ctx, base);
	// b 0x82a72b40
	goto loc_82A72B40;
loc_82A72B30:
	// li r5,106
	ctx.r5.s64 = 106;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82a725e8
	ctx.lr = 0x82A72B40;
	sub_82A725E8(ctx, base);
loc_82A72B40:
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82a72110
	ctx.lr = 0x82A72B50;
	sub_82A72110(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8376cab0
	ctx.lr = 0x82A72B64;
	sub_8376CAB0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r11,r9,0,14,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0000);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r8,r11,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x82a72110
	ctx.lr = 0x82A72B94;
	sub_82A72110(ctx, base);
	// bl 0x83763ef8
	ctx.lr = 0x82A72B98;
	sub_83763EF8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x83767ef8
	ctx.lr = 0x82A72BA0;
	sub_83767EF8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
loc_82A72BA4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A72BBC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A72BD8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82A72BF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A72C10;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r31,108(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lhz r26,104(r1)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82a72c8c
	if (cr6.eq) goto loc_82A72C8C;
	// lwz r10,4(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a72c3c
	if (!cr6.eq) goto loc_82A72C3C;
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82a72c60
	goto loc_82A72C60;
loc_82A72C3C:
	// lhz r8,0(r19)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r19.u32 + 0);
	// clrlwi r9,r26,16
	ctx.r9.u64 = ctx.r26.u32 & 0xFFFF;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x82a72c58
	if (!cr6.eq) goto loc_82A72C58;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82a72c5c
	if (cr6.eq) goto loc_82A72C5C;
loc_82A72C58:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_82A72C5C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A72C60:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a72cac
	if (cr6.eq) goto loc_82A72CAC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259d6c0
	ctx.lr = 0x82A72C78;
	sub_8259D6C0(ctx, base);
loc_82A72C78:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82A72C8C;
	sub_82D291E0(ctx, base);
loc_82A72C8C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82a72d3c
	if (cr6.eq) goto loc_82A72D3C;
	// lwz r10,4(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a72ccc
	if (!cr6.eq) goto loc_82A72CCC;
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82a72cf0
	goto loc_82A72CF0;
loc_82A72CAC:
	// clrlwi r11,r17,24
	ctx.r11.u64 = ctx.r17.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a72c78
	if (cr6.eq) goto loc_82A72C78;
	// lis r4,33
	ctx.r4.s64 = 2162688;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,13
	ctx.r4.u64 = ctx.r4.u64 | 13;
	// bl 0x82d29598
	ctx.lr = 0x82A72CC8;
	sub_82D29598(ctx, base);
	// b 0x82a72c8c
	goto loc_82A72C8C;
loc_82A72CCC:
	// lhz r8,0(r19)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r19.u32 + 0);
	// clrlwi r9,r26,16
	ctx.r9.u64 = ctx.r26.u32 & 0xFFFF;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x82a72ce8
	if (!cr6.eq) goto loc_82A72CE8;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82a72cec
	if (cr6.eq) goto loc_82A72CEC;
loc_82A72CE8:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_82A72CEC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A72CF0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r5,2
	ctx.r5.s64 = 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq cr6,0x82a72d10
	if (cr6.eq) goto loc_82A72D10;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82A72D0C;
	sub_82D2AEC8(ctx, base);
	// b 0x82a72d3c
	goto loc_82A72D3C;
loc_82A72D10:
	// clrlwi r11,r17,24
	ctx.r11.u64 = ctx.r17.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a72d28
	if (cr6.eq) goto loc_82A72D28;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82A72D24;
	sub_82D2AEC8(ctx, base);
	// b 0x82a72d3c
	goto loc_82A72D3C;
loc_82A72D28:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82A72D30;
	sub_82D2AEC8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82d39310
	ctx.lr = 0x82A72D3C;
	sub_82D39310(ctx, base);
loc_82A72D3C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82a72e24
	if (cr6.eq) goto loc_82A72E24;
	// lwz r10,4(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a72d5c
	if (!cr6.eq) goto loc_82A72D5C;
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82a72d80
	goto loc_82A72D80;
loc_82A72D5C:
	// lhz r8,0(r19)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r19.u32 + 0);
	// clrlwi r9,r26,16
	ctx.r9.u64 = ctx.r26.u32 & 0xFFFF;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x82a72d78
	if (!cr6.eq) goto loc_82A72D78;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82a72d7c
	if (cr6.eq) goto loc_82A72D7C;
loc_82A72D78:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_82A72D7C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A72D80:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a72e14
	if (!cr6.eq) goto loc_82A72E14;
	// lbz r11,152(r16)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r16.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a72e14
	if (cr6.eq) goto loc_82A72E14;
	// lwz r11,26608(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 26608);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82a72dc4
	if (!cr6.eq) goto loc_82A72DC4;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a72dc8
	if (cr6.eq) goto loc_82A72DC8;
loc_82A72DC4:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_82A72DC8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a72e14
	if (!cr6.eq) goto loc_82A72E14;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82A72DE4;
	sub_82D2AEC8(ctx, base);
	// lwz r11,324(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 324);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// stw r18,104(r27)
	PPC_STORE_U32(ctx.r27.u32 + 104, ctx.r18.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a72dfc
	if (cr6.eq) goto loc_82A72DFC;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82A72DFC:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d329f8
	ctx.lr = 0x82A72E10;
	sub_82D329F8(ctx, base);
	// b 0x82a72e24
	goto loc_82A72E24;
loc_82A72E14:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82A72E24;
	sub_82D2AEC8(ctx, base);
loc_82A72E24:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x82a72ef4
	if (cr6.eq) goto loc_82A72EF4;
	// lwz r10,4(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a72e44
	if (!cr6.eq) goto loc_82A72E44;
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82a72e68
	goto loc_82A72E68;
loc_82A72E44:
	// lhz r8,0(r19)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r19.u32 + 0);
	// clrlwi r9,r26,16
	ctx.r9.u64 = ctx.r26.u32 & 0xFFFF;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x82a72e60
	if (!cr6.eq) goto loc_82A72E60;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82a72e64
	if (cr6.eq) goto loc_82A72E64;
loc_82A72E60:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_82A72E64:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A72E68:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r5,2
	ctx.r5.s64 = 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bne cr6,0x82a72e88
	if (!cr6.eq) goto loc_82A72E88;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,260
	cr6.compare<uint32_t>(ctx.r11.u32, 260, xer);
	// bne cr6,0x82a72e94
	if (!cr6.eq) goto loc_82A72E94;
loc_82A72E88:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82A72E90;
	sub_82D2AEC8(ctx, base);
	// b 0x82a72ef4
	goto loc_82A72EF4;
loc_82A72E94:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82A72E9C;
	sub_82D2AEC8(ctx, base);
	// lwz r11,324(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 324);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// stw r18,104(r24)
	PPC_STORE_U32(ctx.r24.u32 + 104, ctx.r18.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a72eb8
	if (cr6.eq) goto loc_82A72EB8;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82A72EB8:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d32b60
	ctx.lr = 0x82A72EC4;
	sub_82D32B60(ctx, base);
	// lbz r11,152(r16)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r16.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a72ee0
	if (cr6.eq) goto loc_82A72EE0;
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a72ee4
	if (!cr6.eq) goto loc_82A72EE4;
loc_82A72EE0:
	// li r4,1
	ctx.r4.s64 = 1;
loc_82A72EE4:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82A72EF4;
	sub_82D2B608(ctx, base);
loc_82A72EF4:
	// stw r14,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r14.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82595150
	ctx.lr = 0x82A72F04;
	sub_82595150(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82416268
	ctx.lr = 0x82A72F0C;
	sub_82416268(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82595170
	ctx.lr = 0x82A72F14;
	sub_82595170(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82A72F1C;
	sub_8387E8E0(ctx, base);
loc_82A72F1C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A72F24"))) PPC_WEAK_FUNC(sub_82A72F24);
PPC_FUNC_IMPL(__imp__sub_82A72F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A72F28"))) PPC_WEAK_FUNC(sub_82A72F28);
PPC_FUNC_IMPL(__imp__sub_82A72F28) {
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
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82a72f5c
	if (cr6.eq) goto loc_82A72F5C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82a721a8
	ctx.lr = 0x82A72F58;
	sub_82A721A8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_82A72F5C:
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

__attribute__((alias("__imp__sub_82A72F70"))) PPC_WEAK_FUNC(sub_82A72F70);
PPC_FUNC_IMPL(__imp__sub_82A72F70) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,24496
	ctx.r9.s64 = ctx.r11.s64 + 24496;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// lwz r4,96(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a72fb8
	if (cr6.eq) goto loc_82A72FB8;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82A72FB8;
	sub_825952B8(ctx, base);
loc_82A72FB8:
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
	ctx.lr = 0x82A72FD0;
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

__attribute__((alias("__imp__sub_82A72FE4"))) PPC_WEAK_FUNC(sub_82A72FE4);
PPC_FUNC_IMPL(__imp__sub_82A72FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A72FE8"))) PPC_WEAK_FUNC(sub_82A72FE8);
PPC_FUNC_IMPL(__imp__sub_82A72FE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A72FF0;
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
	ctx.lr = 0x82A73004;
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
	ctx.lr = 0x82A7301C;
	sub_82D253F8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,24496
	ctx.r9.s64 = ctx.r11.s64 + 24496;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// lis r6,-31778
	ctx.r6.s64 = -2082603008;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// addi r29,r31,96
	ctx.r29.s64 = ctx.r31.s64 + 96;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stb r30,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r30.u8);
	// lwz r11,26608(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 26608);
	// stb r30,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r30.u8);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stb r30,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r30.u8);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// lwz r4,26456(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 26456);
	// bl 0x82d20ae0
	ctx.lr = 0x82A73074;
	sub_82D20AE0(ctx, base);
	// lis r4,-31778
	ctx.r4.s64 = -2082603008;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,26460(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 26460);
	// bl 0x82d23390
	ctx.lr = 0x82A73088;
	sub_82D23390(ctx, base);
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82a730a8
	if (cr6.eq) goto loc_82A730A8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82a721a8
	ctx.lr = 0x82A730A4;
	sub_82A721A8(ctx, base);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
loc_82A730A8:
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r10,r31,112
	ctx.r10.s64 = ctx.r31.s64 + 112;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// li r11,255
	ctx.r11.s64 = 255;
loc_82A730B8:
	// stbx r11,r10,r30
	PPC_STORE_U8(ctx.r10.u32 + ctx.r30.u32, ctx.r11.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bdnz 0x82a730b8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A730B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A730D0"))) PPC_WEAK_FUNC(sub_82A730D0);
PPC_FUNC_IMPL(__imp__sub_82A730D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82a72f70
	ctx.lr = 0x82A730F0;
	sub_82A72F70(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a73108
	if (cr6.eq) goto loc_82A73108;
	// bl 0x82416268
	ctx.lr = 0x82A73104;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A73108:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A73120"))) PPC_WEAK_FUNC(sub_82A73120);
PPC_FUNC_IMPL(__imp__sub_82A73120) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x82a73148
	if (cr6.lt) goto loc_82A73148;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82a7314c
	goto loc_82A7314C;
loc_82A73148:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82A7314C:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,164
	ctx.r4.s64 = 164;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A73168;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a73180
	if (cr6.eq) goto loc_82A73180;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a72fe8
	ctx.lr = 0x82A7317C;
	sub_82A72FE8(ctx, base);
	// b 0x82a73184
	goto loc_82A73184;
loc_82A73180:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A73184:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A7319C"))) PPC_WEAK_FUNC(sub_82A7319C);
PPC_FUNC_IMPL(__imp__sub_82A7319C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A731A0"))) PPC_WEAK_FUNC(sub_82A731A0);
PPC_FUNC_IMPL(__imp__sub_82A731A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A731A8;
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
	ctx.lr = 0x82A731BC;
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
	ctx.lr = 0x82A731D4;
	sub_82D253F8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,25336
	ctx.r9.s64 = ctx.r11.s64 + 25336;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,26664(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 26664);
	// bl 0x82d20ae0
	ctx.lr = 0x82A731FC;
	sub_82D20AE0(ctx, base);
	// lis r6,-31778
	ctx.r6.s64 = -2082603008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,26668(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 26668);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d23390
	ctx.lr = 0x82A73210;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A7321C"))) PPC_WEAK_FUNC(sub_82A7321C);
PPC_FUNC_IMPL(__imp__sub_82A7321C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A73220"))) PPC_WEAK_FUNC(sub_82A73220);
PPC_FUNC_IMPL(__imp__sub_82A73220) {
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
	ctx.lr = 0x82A73238;
	sub_82D1C1A8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82a73260
	if (!cr6.eq) goto loc_82A73260;
	// bl 0x83763ef8
	ctx.lr = 0x82A73244;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a73260
	if (cr6.eq) goto loc_82A73260;
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a73260
	if (cr6.eq) goto loc_82A73260;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,65(r11)
	PPC_STORE_U8(ctx.r11.u32 + 65, ctx.r10.u8);
loc_82A73260:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1b890
	ctx.lr = 0x82A73268;
	sub_82D1B890(ctx, base);
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

__attribute__((alias("__imp__sub_82A7327C"))) PPC_WEAK_FUNC(sub_82A7327C);
PPC_FUNC_IMPL(__imp__sub_82A7327C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A73280"))) PPC_WEAK_FUNC(sub_82A73280);
PPC_FUNC_IMPL(__imp__sub_82A73280) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r9,r11,25336
	ctx.r9.s64 = ctx.r11.s64 + 25336;
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
	ctx.lr = 0x82A732B8;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a732d0
	if (cr6.eq) goto loc_82A732D0;
	// bl 0x82416268
	ctx.lr = 0x82A732CC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A732D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A732E8"))) PPC_WEAK_FUNC(sub_82A732E8);
PPC_FUNC_IMPL(__imp__sub_82A732E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x82a73310
	if (cr6.lt) goto loc_82A73310;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82a73314
	goto loc_82A73314;
loc_82A73310:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82A73314:
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
	ctx.lr = 0x82A73330;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a73348
	if (cr6.eq) goto loc_82A73348;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a731a0
	ctx.lr = 0x82A73344;
	sub_82A731A0(ctx, base);
	// b 0x82a7334c
	goto loc_82A7334C;
loc_82A73348:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A7334C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A73364"))) PPC_WEAK_FUNC(sub_82A73364);
PPC_FUNC_IMPL(__imp__sub_82A73364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A73368"))) PPC_WEAK_FUNC(sub_82A73368);
PPC_FUNC_IMPL(__imp__sub_82A73368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A73370;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x83763ef8
	ctx.lr = 0x82A73380;
	sub_83763EF8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82a73398
	if (!cr6.eq) goto loc_82A73398;
loc_82A7338C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82A73398:
	// lwz r11,288(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 288);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a7338c
	if (cr6.eq) goto loc_82A7338C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82a7338c
	if (cr6.eq) goto loc_82A7338C;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
	// addi r29,r10,25236
	ctx.r29.s64 = ctx.r10.s64 + 25236;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r29,-12
	ctx.r4.s64 = ctx.r29.s64 + -12;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A733D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82A733EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,288(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 288);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// addis r3,r5,1
	ctx.r3.s64 = ctx.r5.s64 + 65536;
	// addi r3,r3,652
	ctx.r3.s64 = ctx.r3.s64 + 652;
	// bl 0x82a68958
	ctx.lr = 0x82A73404;
	sub_82A68958(ctx, base);
	// cmplw cr6,r3,r27
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, xer);
	// ble cr6,0x82a7338c
	if (!cr6.gt) goto loc_82A7338C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82A7341C;
	sub_82D2AEC8(ctx, base);
	// lwz r11,288(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 288);
	// cmplwi cr6,r27,32
	cr6.compare<uint32_t>(ctx.r27.u32, 32, xer);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bge cr6,0x82a7338c
	if (!cr6.lt) goto loc_82A7338C;
	// mulli r10,r27,188
	ctx.r10.s64 = ctx.r27.s64 * 188;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r31,r11,81
	ctx.r31.s64 = ctx.r11.s64 + 5308416;
	// addi r31,r31,2112
	ctx.r31.s64 = ctx.r31.s64 + 2112;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82a7338c
	if (cr6.eq) goto loc_82A7338C;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// beq cr6,0x82a734c4
	if (cr6.eq) goto loc_82A734C4;
	// li r5,106
	ctx.r5.s64 = 106;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a725e8
	ctx.lr = 0x82A73470;
	sub_82A725E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a734c4
	if (cr6.eq) goto loc_82A734C4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82A7348C;
	sub_82D2AEC8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82a734a0
	if (!cr6.lt) goto loc_82A734A0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82A734A0:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82A734A8;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82A734BC;
	sub_82D291E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82A734C4;
	sub_8387E8E0(ctx, base);
loc_82A734C4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// beq cr6,0x82a73508
	if (cr6.eq) goto loc_82A73508;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a72110
	ctx.lr = 0x82A734E0;
	sub_82A72110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a73508
	if (cr6.eq) goto loc_82A73508;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82A734FC;
	sub_82D2AEC8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d39310
	ctx.lr = 0x82A73508;
	sub_82D39310(ctx, base);
loc_82A73508:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82A73510;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A7351C"))) PPC_WEAK_FUNC(sub_82A7351C);
PPC_FUNC_IMPL(__imp__sub_82A7351C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A73520"))) PPC_WEAK_FUNC(sub_82A73520);
PPC_FUNC_IMPL(__imp__sub_82A73520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82A73528;
	__savegprlr_22(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x83763ef8
	ctx.lr = 0x82A73534;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82a73548
	if (!cr6.eq) goto loc_82A73548;
loc_82A7353C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82A73548:
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a7353c
	if (cr6.eq) goto loc_82A7353C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82A7355C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r25,r11,25216
	ctx.r25.s64 = ctx.r11.s64 + 25216;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r25,-72
	ctx.r4.s64 = ctx.r25.s64 + -72;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A7357C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a735ac
	if (cr6.eq) goto loc_82A735AC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d30530
	ctx.lr = 0x82A73590;
	sub_82D30530(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2fc70
	ctx.lr = 0x82A7359C;
	sub_82D2FC70(ctx, base);
	// lis r4,120
	ctx.r4.s64 = 7864320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,87
	ctx.r4.u64 = ctx.r4.u64 | 87;
	// bl 0x82d303d0
	ctx.lr = 0x82A735AC;
	sub_82D303D0(ctx, base);
loc_82A735AC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82A735B4;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r25,-60
	ctx.r4.s64 = ctx.r25.s64 + -60;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A735CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a735e0
	if (cr6.eq) goto loc_82A735E0;
	// lis r4,230
	ctx.r4.s64 = 15073280;
	// ori r4,r4,131
	ctx.r4.u64 = ctx.r4.u64 | 131;
	// bl 0x82d39ab8
	ctx.lr = 0x82A735E0;
	sub_82D39AB8(ctx, base);
loc_82A735E0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82A735E8;
	sub_82D19A78(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d33db0
	ctx.lr = 0x82A735F0;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a73748
	if (cr6.eq) goto loc_82A73748;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82A7360C;
	sub_82D2AEC8(ctx, base);
	// addi r24,r31,100
	ctx.r24.s64 = ctx.r31.s64 + 100;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82dad028
	ctx.lr = 0x82A73618;
	sub_82DAD028(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a73714
	if (cr6.eq) goto loc_82A73714;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r22,2
	ctx.r22.s64 = 2;
loc_82A73634:
	// addi r5,r25,-52
	ctx.r5.s64 = ctx.r25.s64 + -52;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x831d0b08
	ctx.lr = 0x82A73648;
	sub_831D0B08(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
loc_82A7365C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a7365c
	if (!cr6.eq) goto loc_82A7365C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82A73684;
	sub_8259CC28(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82a73698
	if (!cr6.lt) goto loc_82A73698;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82A73698:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82A736A0;
	sub_82D2E228(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a736dc
	if (cr6.eq) goto loc_82A736DC;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a73368
	ctx.lr = 0x82A736BC;
	sub_82A73368(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a736dc
	if (!cr6.eq) goto loc_82A736DC;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82A736D8;
	sub_82D2AEC8(ctx, base);
	// b 0x82a736e0
	goto loc_82A736E0;
loc_82A736DC:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
loc_82A736E0:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a736fc
	if (cr6.lt) goto loc_82A736FC;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82A736FC;
	sub_825952B8(ctx, base);
loc_82A736FC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// blt cr6,0x82a73634
	if (cr6.lt) goto loc_82A73634;
loc_82A73714:
	// addi r5,r25,-40
	ctx.r5.s64 = ctx.r25.s64 + -40;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x831d0b08
	ctx.lr = 0x82A73728;
	sub_831D0B08(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82A73730;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A73748;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82A73748:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82A73750;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r25,-20
	ctx.r4.s64 = ctx.r25.s64 + -20;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A73768;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lfs f2,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82d1ebf8
	ctx.lr = 0x82A73788;
	sub_82D1EBF8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82A73790;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82A73798;
	sub_82D33DB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a73808
	if (cr6.eq) goto loc_82A73808;
	// lis r11,108
	ctx.r11.s64 = 7077888;
	// lis r10,108
	ctx.r10.s64 = 7077888;
	// ori r9,r11,6
	ctx.r9.u64 = ctx.r11.u64 | 6;
	// ori r8,r10,7
	ctx.r8.u64 = ctx.r10.u64 | 7;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r30,r1,88
	ctx.r30.s64 = ctx.r1.s64 + 88;
loc_82A737C4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82A737D0;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a737f8
	if (cr6.eq) goto loc_82A737F8;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A737F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d29598
	ctx.lr = 0x82A737F8;
	sub_82D29598(ctx, base);
loc_82A737F8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x82a737c4
	if (cr6.lt) goto loc_82A737C4;
loc_82A73808:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A73814"))) PPC_WEAK_FUNC(sub_82A73814);
PPC_FUNC_IMPL(__imp__sub_82A73814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A73818"))) PPC_WEAK_FUNC(sub_82A73818);
PPC_FUNC_IMPL(__imp__sub_82A73818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A73820;
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
	ctx.lr = 0x82A73834;
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
	ctx.lr = 0x82A7384C;
	sub_82D253F8(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r10,26048
	ctx.r8.s64 = ctx.r10.s64 + 26048;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r6,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r6.u8);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A73884"))) PPC_WEAK_FUNC(sub_82A73884);
PPC_FUNC_IMPL(__imp__sub_82A73884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A73888"))) PPC_WEAK_FUNC(sub_82A73888);
PPC_FUNC_IMPL(__imp__sub_82A73888) {
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
	// bl 0x83763ef8
	ctx.lr = 0x82A738A0;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82a738c0
	if (!cr6.eq) goto loc_82A738C0;
loc_82A738A8:
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
loc_82A738C0:
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a738a8
	if (cr6.eq) goto loc_82A738A8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// lwz r3,288(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// bl 0x83771dd8
	ctx.lr = 0x82A738DC;
	sub_83771DD8(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82a738ec
	if (!cr6.eq) goto loc_82A738EC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_82A738EC:
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

__attribute__((alias("__imp__sub_82A73904"))) PPC_WEAK_FUNC(sub_82A73904);
PPC_FUNC_IMPL(__imp__sub_82A73904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A73908"))) PPC_WEAK_FUNC(sub_82A73908);
PPC_FUNC_IMPL(__imp__sub_82A73908) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A73910;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82a73938
	if (cr6.lt) goto loc_82A73938;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stb r11,100(r3)
	PPC_STORE_U8(ctx.r3.u32 + 100, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A73938:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r30,r11,25896
	ctx.r30.s64 = ctx.r11.s64 + 25896;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x82A73954;
	sub_82D2FA90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a7397c
	if (cr6.eq) goto loc_82A7397C;
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// bl 0x82d2ada8
	ctx.lr = 0x82A73970;
	sub_82D2ADA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83103100
	ctx.lr = 0x82A7397C;
	sub_83103100(ctx, base);
loc_82A7397C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A73984"))) PPC_WEAK_FUNC(sub_82A73984);
PPC_FUNC_IMPL(__imp__sub_82A73984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A73988"))) PPC_WEAK_FUNC(sub_82A73988);
PPC_FUNC_IMPL(__imp__sub_82A73988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r9,r11,26048
	ctx.r9.s64 = ctx.r11.s64 + 26048;
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
	ctx.lr = 0x82A739C0;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a739d8
	if (cr6.eq) goto loc_82A739D8;
	// bl 0x82416268
	ctx.lr = 0x82A739D4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A739D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A739F0"))) PPC_WEAK_FUNC(sub_82A739F0);
PPC_FUNC_IMPL(__imp__sub_82A739F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x82a73a18
	if (cr6.lt) goto loc_82A73A18;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82a73a1c
	goto loc_82A73A1C;
loc_82A73A18:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82A73A1C:
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
	ctx.lr = 0x82A73A38;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a73a50
	if (cr6.eq) goto loc_82A73A50;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a73818
	ctx.lr = 0x82A73A4C;
	sub_82A73818(ctx, base);
	// b 0x82a73a54
	goto loc_82A73A54;
loc_82A73A50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A73A54:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A73A6C"))) PPC_WEAK_FUNC(sub_82A73A6C);
PPC_FUNC_IMPL(__imp__sub_82A73A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A73A70"))) PPC_WEAK_FUNC(sub_82A73A70);
PPC_FUNC_IMPL(__imp__sub_82A73A70) {
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
	// lwz r5,16(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r7,14
	ctx.r7.s64 = 14;
	// addi r6,r10,25944
	ctx.r6.s64 = ctx.r10.s64 + 25944;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x827a8810
	ctx.lr = 0x82A73AA4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82a73ab8
	if (!cr6.eq) goto loc_82A73AB8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r11.u8);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_82A73AB8:
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

__attribute__((alias("__imp__sub_82A73ACC"))) PPC_WEAK_FUNC(sub_82A73ACC);
PPC_FUNC_IMPL(__imp__sub_82A73ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A73AD0"))) PPC_WEAK_FUNC(sub_82A73AD0);
PPC_FUNC_IMPL(__imp__sub_82A73AD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a73b70
	if (!cr6.eq) goto loc_82A73B70;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,25936
	ctx.r31.s64 = ctx.r11.s64 + 25936;
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// bl 0x837b0c10
	ctx.lr = 0x82A73B08;
	sub_837B0C10(ctx, base);
	// bl 0x83763ef8
	ctx.lr = 0x82A73B0C;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a73b30
	if (cr6.eq) goto loc_82A73B30;
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// lbz r10,65(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 65);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a73b30
	if (cr6.eq) goto loc_82A73B30;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259d6c0
	ctx.lr = 0x82A73B30;
	sub_8259D6C0(ctx, base);
loc_82A73B30:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82a73b44
	if (!cr6.lt) goto loc_82A73B44;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_82A73B44:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82A73B50;
	sub_82D20DA8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a73b70
	if (cr6.lt) goto loc_82A73B70;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82A73B70;
	sub_825952B8(ctx, base);
loc_82A73B70:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82A73B8C"))) PPC_WEAK_FUNC(sub_82A73B8C);
PPC_FUNC_IMPL(__imp__sub_82A73B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A73B90"))) PPC_WEAK_FUNC(sub_82A73B90);
PPC_FUNC_IMPL(__imp__sub_82A73B90) {
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
	// bl 0x83763ef8
	ctx.lr = 0x82A73BA8;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a73c1c
	if (cr6.eq) goto loc_82A73C1C;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83763ef8
	ctx.lr = 0x82A73BB8;
	sub_83763EF8(ctx, base);
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// xor r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a73be0
	if (!cr6.eq) goto loc_82A73BE0;
	// xor r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a73be4
	if (cr6.eq) goto loc_82A73BE4;
loc_82A73BE0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A73BE4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a73c00
	if (!cr6.eq) goto loc_82A73C00;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,206(r3)
	PPC_STORE_U8(ctx.r3.u32 + 206, ctx.r11.u8);
	// stb r10,208(r3)
	PPC_STORE_U8(ctx.r3.u32 + 208, ctx.r10.u8);
loc_82A73C00:
	// stw r31,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r31.u32);
	// bl 0x83763ef8
	ctx.lr = 0x82A73C08;
	sub_83763EF8(ctx, base);
	// lwz r3,288(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a73c1c
	if (cr6.eq) goto loc_82A73C1C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83771f88
	ctx.lr = 0x82A73C1C;
	sub_83771F88(ctx, base);
loc_82A73C1C:
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

__attribute__((alias("__imp__sub_82A73C30"))) PPC_WEAK_FUNC(sub_82A73C30);
PPC_FUNC_IMPL(__imp__sub_82A73C30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r9,r11,26696
	ctx.r9.s64 = ctx.r11.s64 + 26696;
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
	// bl 0x82bdd1e8
	ctx.lr = 0x82A73C68;
	sub_82BDD1E8(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a73c80
	if (cr6.eq) goto loc_82A73C80;
	// bl 0x82416268
	ctx.lr = 0x82A73C7C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A73C80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A73C98"))) PPC_WEAK_FUNC(sub_82A73C98);
PPC_FUNC_IMPL(__imp__sub_82A73C98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82A73CA0;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// bl 0x8376e978
	ctx.lr = 0x82A73CC0;
	sub_8376E978(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r31,112(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82a73cec
	if (cr6.eq) goto loc_82A73CEC;
loc_82A73CD0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82b399d8
	ctx.lr = 0x82A73CDC;
	sub_82B399D8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82a73cd0
	if (!cr6.eq) goto loc_82A73CD0;
loc_82A73CEC:
	// bl 0x83763ef8
	ctx.lr = 0x82A73CF0;
	sub_83763EF8(ctx, base);
	// li r24,2
	ctx.r24.s64 = 2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a73e68
	if (cr6.eq) goto loc_82A73E68;
	// bl 0x83763ef8
	ctx.lr = 0x82A73D00;
	sub_83763EF8(ctx, base);
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a73e68
	if (cr6.eq) goto loc_82A73E68;
	// bl 0x83763ef8
	ctx.lr = 0x82A73D10;
	sub_83763EF8(ctx, base);
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a73e68
	if (cr6.eq) goto loc_82A73E68;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a70e48
	ctx.lr = 0x82A73D28;
	sub_82A70E48(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82b363e8
	ctx.lr = 0x82A73D38;
	sub_82B363E8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8319fea0
	ctx.lr = 0x82A73D40;
	sub_8319FEA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a73eac
	if (!cr6.eq) goto loc_82A73EAC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8319ff60
	ctx.lr = 0x82A73D54;
	sub_8319FF60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a73eac
	if (!cr6.eq) goto loc_82A73EAC;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// beq cr6,0x82a73e6c
	if (cr6.eq) goto loc_82A73E6C;
loc_82A73D74:
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// bl 0x83164e80
	ctx.lr = 0x82A73D8C;
	sub_83164E80(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi. r29,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq 0x82a73e38
	if (cr0.eq) goto loc_82A73E38;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82A73DA8:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// ble cr6,0x82a73e88
	if (!cr6.gt) goto loc_82A73E88;
	// lwzx r3,r4,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r30.u32);
	// bl 0x8319fea0
	ctx.lr = 0x82A73DC4;
	sub_8319FEA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a73dfc
	if (!cr6.eq) goto loc_82A73DFC;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// ble cr6,0x82a73e94
	if (!cr6.gt) goto loc_82A73E94;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x8319ff60
	ctx.lr = 0x82A73DF0;
	sub_8319FF60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a73e24
	if (cr6.eq) goto loc_82A73E24;
loc_82A73DFC:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// ble cr6,0x82a73ea0
	if (!cr6.gt) goto loc_82A73EA0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82b371c0
	ctx.lr = 0x82A73E24;
	sub_82B371C0(ctx, base);
loc_82A73E24:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x82a73da8
	if (cr6.lt) goto loc_82A73DA8;
loc_82A73E38:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a73e4c
	if (cr6.eq) goto loc_82A73E4C;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82A73E4C;
	sub_825952B8(ctx, base);
loc_82A73E4C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// bne cr6,0x82a73d74
	if (!cr6.eq) goto loc_82A73D74;
loc_82A73E68:
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82A73E6C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a73e80
	if (cr6.eq) goto loc_82A73E80;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x82A73E80;
	sub_825952B8(ctx, base);
loc_82A73E80:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82A73E88:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A73E94;
	sub_831CC188(ctx, base);
loc_82A73E94:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A73EA0;
	sub_831CC188(ctx, base);
loc_82A73EA0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A73EAC;
	sub_831CC188(ctx, base);
loc_82A73EAC:
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// beq cr6,0x82a73e6c
	if (cr6.eq) goto loc_82A73E6C;
loc_82A73EC0:
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// bl 0x83164e80
	ctx.lr = 0x82A73ED8;
	sub_83164E80(ctx, base);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi. r29,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq 0x82a73f68
	if (cr0.eq) goto loc_82A73F68;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82A73EF4:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// ble cr6,0x82a73f9c
	if (!cr6.gt) goto loc_82A73F9C;
	// lwzx r10,r4,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r30.u32);
	// add r11,r4,r30
	ctx.r11.u64 = ctx.r4.u64 + ctx.r30.u64;
	// xor r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r28.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82a73f34
	if (!cr6.eq) goto loc_82A73F34;
	// xor r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r28.u64;
	// clrlwi r9,r10,14
	ctx.r9.u64 = ctx.r10.u32 & 0x3FFFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a73f38
	if (cr6.eq) goto loc_82A73F38;
loc_82A73F34:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_82A73F38:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a73f58
	if (!cr6.eq) goto loc_82A73F58;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82b371c0
	ctx.lr = 0x82A73F54;
	sub_82B371C0(ctx, base);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_82A73F58:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x82a73ef4
	if (cr6.lt) goto loc_82A73EF4;
loc_82A73F68:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a73f7c
	if (cr6.eq) goto loc_82A73F7C;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x82A73F7C;
	sub_825952B8(ctx, base);
loc_82A73F7C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// bne cr6,0x82a73ec0
	if (!cr6.eq) goto loc_82A73EC0;
	// b 0x82a73e68
	goto loc_82A73E68;
loc_82A73F9C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A73FA8;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82A73FA8"))) PPC_WEAK_FUNC(sub_82A73FA8);
PPC_FUNC_IMPL(__imp__sub_82A73FA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A73FB0;
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
	ctx.lr = 0x82A73FD4;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a74024
	if (cr6.eq) goto loc_82A74024;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bdd188
	ctx.lr = 0x82A73FEC;
	sub_82BDD188(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32089
	ctx.r9.s64 = -2102984704;
	// addi r8,r11,26696
	ctx.r8.s64 = ctx.r11.s64 + 26696;
	// addi r7,r10,-17088
	ctx.r7.s64 = ctx.r10.s64 + -17088;
	// addi r6,r9,15248
	ctx.r6.s64 = ctx.r9.s64 + 15248;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r6,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r6.u32);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82a73c98
	ctx.lr = 0x82A74018;
	sub_82A73C98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A74024:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A74030"))) PPC_WEAK_FUNC(sub_82A74030);
PPC_FUNC_IMPL(__imp__sub_82A74030) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a74040
	if (cr6.lt) goto loc_82A74040;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82A74040:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82a73fa8
	sub_82A73FA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A74048"))) PPC_WEAK_FUNC(sub_82A74048);
PPC_FUNC_IMPL(__imp__sub_82A74048) {
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
	// lis r4,230
	ctx.r4.s64 = 15073280;
	// li r5,5
	ctx.r5.s64 = 5;
	// ori r4,r4,41
	ctx.r4.u64 = ctx.r4.u64 | 41;
	// bl 0x82d21730
	ctx.lr = 0x82A74064;
	sub_82D21730(ctx, base);
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

__attribute__((alias("__imp__sub_82A74078"))) PPC_WEAK_FUNC(sub_82A74078);
PPC_FUNC_IMPL(__imp__sub_82A74078) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a7409c
	if (!cr6.eq) goto loc_82A7409C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d20da8
	ctx.lr = 0x82A7409C;
	sub_82D20DA8(ctx, base);
loc_82A7409C:
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

__attribute__((alias("__imp__sub_82A740B0"))) PPC_WEAK_FUNC(sub_82A740B0);
PPC_FUNC_IMPL(__imp__sub_82A740B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A740B8;
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
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A740DC;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a74130
	if (cr6.eq) goto loc_82A74130;
	// bl 0x8308e078
	ctx.lr = 0x82A740EC;
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
	ctx.lr = 0x82A74104;
	sub_82D253F8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,27360
	ctx.r9.s64 = ctx.r11.s64 + 27360;
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
loc_82A74130:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A7413C"))) PPC_WEAK_FUNC(sub_82A7413C);
PPC_FUNC_IMPL(__imp__sub_82A7413C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A74140"))) PPC_WEAK_FUNC(sub_82A74140);
PPC_FUNC_IMPL(__imp__sub_82A74140) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r9,r11,27360
	ctx.r9.s64 = ctx.r11.s64 + 27360;
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
	ctx.lr = 0x82A74178;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a74190
	if (cr6.eq) goto loc_82A74190;
	// bl 0x82416268
	ctx.lr = 0x82A7418C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A74190:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A741A8"))) PPC_WEAK_FUNC(sub_82A741A8);
PPC_FUNC_IMPL(__imp__sub_82A741A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a741b8
	if (cr6.lt) goto loc_82A741B8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82A741B8:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82a740b0
	sub_82A740B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A741C4"))) PPC_WEAK_FUNC(sub_82A741C4);
PPC_FUNC_IMPL(__imp__sub_82A741C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A741C8"))) PPC_WEAK_FUNC(sub_82A741C8);
PPC_FUNC_IMPL(__imp__sub_82A741C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A741D0;
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
	ctx.lr = 0x82A741E8;
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
	ctx.lr = 0x82A74200;
	sub_82D253F8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stb r28,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r28.u8);
	// addi r9,r11,28000
	ctx.r9.s64 = ctx.r11.s64 + 28000;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// stw r7,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r6,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r6.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A74238"))) PPC_WEAK_FUNC(sub_82A74238);
PPC_FUNC_IMPL(__imp__sub_82A74238) {
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
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a7425c
	if (!cr6.eq) goto loc_82A7425C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lbz r4,104(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 104);
	// bl 0x82d20da8
	ctx.lr = 0x82A7425C;
	sub_82D20DA8(ctx, base);
loc_82A7425C:
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

__attribute__((alias("__imp__sub_82A74270"))) PPC_WEAK_FUNC(sub_82A74270);
PPC_FUNC_IMPL(__imp__sub_82A74270) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne cr6,0x82a7428c
	if (!cr6.eq) goto loc_82A7428C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r10,104(r3)
	PPC_STORE_U8(ctx.r3.u32 + 104, ctx.r10.u8);
	// b 0x82a7429c
	goto loc_82A7429C;
loc_82A7428C:
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// bne cr6,0x82a7429c
	if (!cr6.eq) goto loc_82A7429C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,104(r3)
	PPC_STORE_U8(ctx.r3.u32 + 104, ctx.r11.u8);
loc_82A7429C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stw r10,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A742B0"))) PPC_WEAK_FUNC(sub_82A742B0);
PPC_FUNC_IMPL(__imp__sub_82A742B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r9,r11,28000
	ctx.r9.s64 = ctx.r11.s64 + 28000;
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
	ctx.lr = 0x82A742E8;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a74300
	if (cr6.eq) goto loc_82A74300;
	// bl 0x82416268
	ctx.lr = 0x82A742FC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A74300:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A74318"))) PPC_WEAK_FUNC(sub_82A74318);
PPC_FUNC_IMPL(__imp__sub_82A74318) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x82a74340
	if (cr6.lt) goto loc_82A74340;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82a74344
	goto loc_82A74344;
loc_82A74340:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82A74344:
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
	ctx.lr = 0x82A74360;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a7437c
	if (cr6.eq) goto loc_82A7437C;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a741c8
	ctx.lr = 0x82A74378;
	sub_82A741C8(ctx, base);
	// b 0x82a74380
	goto loc_82A74380;
loc_82A7437C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A74380:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A74398"))) PPC_WEAK_FUNC(sub_82A74398);
PPC_FUNC_IMPL(__imp__sub_82A74398) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x82a743c0
	if (cr6.lt) goto loc_82A743C0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82a743c4
	goto loc_82A743C4;
loc_82A743C0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82A743C4:
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
	ctx.lr = 0x82A743E0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a743fc
	if (cr6.eq) goto loc_82A743FC;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a741c8
	ctx.lr = 0x82A743F8;
	sub_82A741C8(ctx, base);
	// b 0x82a74400
	goto loc_82A74400;
loc_82A743FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A74400:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A74418"))) PPC_WEAK_FUNC(sub_82A74418);
PPC_FUNC_IMPL(__imp__sub_82A74418) {
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
	// bl 0x83763ef8
	ctx.lr = 0x82A74430;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a74444
	if (cr6.eq) goto loc_82A74444;
	// bl 0x83763ef8
	ctx.lr = 0x82A7443C;
	sub_83763EF8(ctx, base);
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// stw r11,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r11.u32);
loc_82A74444:
	// lis r4,230
	ctx.r4.s64 = 15073280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,89
	ctx.r4.u64 = ctx.r4.u64 | 89;
	// bl 0x82d2ada8
	ctx.lr = 0x82A74454;
	sub_82D2ADA8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82A74464;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82A74474;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dd3a30
	ctx.lr = 0x82A7447C;
	sub_82DD3A30(ctx, base);
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

__attribute__((alias("__imp__sub_82A74490"))) PPC_WEAK_FUNC(sub_82A74490);
PPC_FUNC_IMPL(__imp__sub_82A74490) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d17b90
	ctx.lr = 0x82A744AC;
	sub_82D17B90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d29cb0
	ctx.lr = 0x82A744B4;
	sub_82D29CB0(ctx, base);
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

__attribute__((alias("__imp__sub_82A744C8"))) PPC_WEAK_FUNC(sub_82A744C8);
PPC_FUNC_IMPL(__imp__sub_82A744C8) {
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
	// bl 0x83763ef8
	ctx.lr = 0x82A744E0;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a74534
	if (cr6.eq) goto loc_82A74534;
	// bl 0x83763ef8
	ctx.lr = 0x82A744EC;
	sub_83763EF8(ctx, base);
	// lwz r3,288(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a74534
	if (cr6.eq) goto loc_82A74534;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lbz r5,65(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 65);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a74534
	if (cr6.eq) goto loc_82A74534;
	// lwz r4,584(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// bl 0x83770cb0
	ctx.lr = 0x82A74510;
	sub_83770CB0(ctx, base);
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,27336(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27336);
	// bl 0x82d20da8
	ctx.lr = 0x82A74524;
	sub_82D20DA8(ctx, base);
	// bl 0x83763ef8
	ctx.lr = 0x82A74528;
	sub_83763EF8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x837642c0
	ctx.lr = 0x82A74530;
	sub_837642C0(ctx, base);
	// b 0x82a7454c
	goto loc_82A7454C;
loc_82A74534:
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,27336
	ctx.r10.s64 = ctx.r11.s64 + 27336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82d20da8
	ctx.lr = 0x82A7454C;
	sub_82D20DA8(ctx, base);
loc_82A7454C:
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

__attribute__((alias("__imp__sub_82A74564"))) PPC_WEAK_FUNC(sub_82A74564);
PPC_FUNC_IMPL(__imp__sub_82A74564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A74568"))) PPC_WEAK_FUNC(sub_82A74568);
PPC_FUNC_IMPL(__imp__sub_82A74568) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A74570;
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
	// li r4,592
	ctx.r4.s64 = 592;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A74594;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a745e4
	if (cr6.eq) goto loc_82A745E4;
	// li r7,3
	ctx.r7.s64 = 3;
	// lbz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d2ed88
	ctx.lr = 0x82A745B4;
	sub_82D2ED88(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-31778
	ctx.r9.s64 = -2082603008;
	// addi r8,r11,28664
	ctx.r8.s64 = ctx.r11.s64 + 28664;
	// addi r7,r10,-17088
	ctx.r7.s64 = ctx.r10.s64 + -17088;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// lwz r11,27424(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27424);
	// stw r11,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A745E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A745F0"))) PPC_WEAK_FUNC(sub_82A745F0);
PPC_FUNC_IMPL(__imp__sub_82A745F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r9,r11,28664
	ctx.r9.s64 = ctx.r11.s64 + 28664;
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
	ctx.lr = 0x82A74628;
	sub_82D2EDE8(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a74640
	if (cr6.eq) goto loc_82A74640;
	// bl 0x82416268
	ctx.lr = 0x82A7463C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A74640:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A74658"))) PPC_WEAK_FUNC(sub_82A74658);
PPC_FUNC_IMPL(__imp__sub_82A74658) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a74668
	if (cr6.lt) goto loc_82A74668;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82A74668:
	// b 0x82a74568
	sub_82A74568(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A7466C"))) PPC_WEAK_FUNC(sub_82A7466C);
PPC_FUNC_IMPL(__imp__sub_82A7466C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A74670"))) PPC_WEAK_FUNC(sub_82A74670);
PPC_FUNC_IMPL(__imp__sub_82A74670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A74678;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82A74684;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82A7468C;
	sub_82D33DB0(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r27,r10,29264
	ctx.r27.s64 = ctx.r10.s64 + 29264;
	// addi r28,r11,27480
	ctx.r28.s64 = ctx.r11.s64 + 27480;
loc_82A746A8:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bdc948
	ctx.lr = 0x82A746BC;
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
	ctx.lr = 0x82A746D0;
	sub_82D233B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82A746DC;
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
	ctx.lr = 0x82A746F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a74708
	if (cr6.eq) goto loc_82A74708;
	// addi r11,r28,12
	ctx.r11.s64 = ctx.r28.s64 + 12;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82d29598
	ctx.lr = 0x82A74708;
	sub_82D29598(ctx, base);
loc_82A74708:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r30,12
	cr6.compare<uint32_t>(ctx.r30.u32, 12, xer);
	// blt cr6,0x82a746a8
	if (cr6.lt) goto loc_82A746A8;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A74724"))) PPC_WEAK_FUNC(sub_82A74724);
PPC_FUNC_IMPL(__imp__sub_82A74724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A74728"))) PPC_WEAK_FUNC(sub_82A74728);
PPC_FUNC_IMPL(__imp__sub_82A74728) {
	PPC_FUNC_PROLOGUE();
	// lis r3,38
	ctx.r3.s64 = 2490368;
	// ori r3,r3,102
	ctx.r3.u64 = ctx.r3.u64 | 102;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A74734"))) PPC_WEAK_FUNC(sub_82A74734);
PPC_FUNC_IMPL(__imp__sub_82A74734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A74738"))) PPC_WEAK_FUNC(sub_82A74738);
PPC_FUNC_IMPL(__imp__sub_82A74738) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A74740;
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
	// li r4,200
	ctx.r4.s64 = 200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A74764;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a747a4
	if (cr6.eq) goto loc_82A747A4;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bdc848
	ctx.lr = 0x82A74780;
	sub_82BDC848(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,29360
	ctx.r9.s64 = ctx.r11.s64 + 29360;
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
loc_82A747A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A747B0"))) PPC_WEAK_FUNC(sub_82A747B0);
PPC_FUNC_IMPL(__imp__sub_82A747B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r9,r11,29360
	ctx.r9.s64 = ctx.r11.s64 + 29360;
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
	ctx.lr = 0x82A747E8;
	sub_82BDC910(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a74800
	if (cr6.eq) goto loc_82A74800;
	// bl 0x82416268
	ctx.lr = 0x82A747FC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A74800:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A74818"))) PPC_WEAK_FUNC(sub_82A74818);
PPC_FUNC_IMPL(__imp__sub_82A74818) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a74828
	if (cr6.lt) goto loc_82A74828;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82A74828:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82a74738
	sub_82A74738(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A74830"))) PPC_WEAK_FUNC(sub_82A74830);
PPC_FUNC_IMPL(__imp__sub_82A74830) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A74838;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82a7485c
	if (!cr6.eq) goto loc_82A7485C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A7485C:
	// clrlwi r4,r30,24
	ctx.r4.u64 = ctx.r30.u32 & 0xFF;
	// bl 0x8306e6b8
	ctx.lr = 0x82A74864;
	sub_8306E6B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82a74878
	if (!cr6.eq) goto loc_82A74878;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82a74888
	goto loc_82A74888;
loc_82A74878:
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A74884;
	sub_831CE980(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
loc_82A74888:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837740f8
	ctx.lr = 0x82A74898;
	sub_837740F8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A748A0"))) PPC_WEAK_FUNC(sub_82A748A0);
PPC_FUNC_IMPL(__imp__sub_82A748A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A748A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a7497c
	if (!cr6.eq) goto loc_82A7497C;
	// bl 0x82d19a78
	ctx.lr = 0x82A748C0;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r30,r11,30156
	ctx.r30.s64 = ctx.r11.s64 + 30156;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A748E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a7497c
	if (cr6.eq) goto loc_82A7497C;
	// addi r4,r30,-44
	ctx.r4.s64 = ctx.r30.s64 + -44;
	// bl 0x82d3a058
	ctx.lr = 0x82A748F4;
	sub_82D3A058(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A74910;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a7497c
	if (cr6.eq) goto loc_82A7497C;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// addi r29,r11,100
	ctx.r29.s64 = ctx.r11.s64 + 100;
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A74938;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a74950
	if (cr6.eq) goto loc_82A74950;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82A74950;
	sub_82D2AEC8(ctx, base);
loc_82A74950:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A74968;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d39d50
	ctx.lr = 0x82A74974;
	sub_82D39D50(ctx, base);
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// bl 0x82d39cd0
	ctx.lr = 0x82A7497C;
	sub_82D39CD0(ctx, base);
loc_82A7497C:
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82a74a10
	if (cr6.lt) goto loc_82A74A10;
	// beq cr6,0x82a749e8
	if (cr6.eq) goto loc_82A749E8;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82a74a34
	if (!cr6.lt) goto loc_82A74A34;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a749d4
	if (cr6.eq) goto loc_82A749D4;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x82bdf720
	ctx.lr = 0x82A749AC;
	sub_82BDF720(ctx, base);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A749C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82A749D4;
	sub_82D2AEC8(ctx, base);
loc_82A749D4:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A749E8:
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x82bdf6a0
	ctx.lr = 0x82A749F0;
	sub_82BDF6A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a74a34
	if (cr6.eq) goto loc_82A74A34;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A74A10:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,152(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x82be0158
	ctx.lr = 0x82A74A20;
	sub_82BE0158(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a74a34
	if (cr6.eq) goto loc_82A74A34;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
loc_82A74A34:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A74A40"))) PPC_WEAK_FUNC(sub_82A74A40);
PPC_FUNC_IMPL(__imp__sub_82A74A40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r11,30168
	ctx.r3.s64 = ctx.r11.s64 + 30168;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x82A74A74;
	sub_82D2F6D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a74aac
	if (cr6.eq) goto loc_82A74AAC;
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
	ctx.lr = 0x82A74AA0;
	sub_82D2AC30(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x82A74AAC;
	sub_83103100(ctx, base);
loc_82A74AAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A74AC4"))) PPC_WEAK_FUNC(sub_82A74AC4);
PPC_FUNC_IMPL(__imp__sub_82A74AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A74AC8"))) PPC_WEAK_FUNC(sub_82A74AC8);
PPC_FUNC_IMPL(__imp__sub_82A74AC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// beq cr6,0x82a74b08
	if (cr6.eq) goto loc_82A74B08;
	// lwz r9,152(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x82a74b08
	if (cr6.eq) goto loc_82A74B08;
	// lwz r3,156(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r9,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r9.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82d2aec8
	sub_82D2AEC8(ctx, base);
	return;
loc_82A74B08:
	// lwz r9,152(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r3,156(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// li r10,2
	ctx.r10.s64 = 2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r10.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82d2aec8
	sub_82D2AEC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A74B34"))) PPC_WEAK_FUNC(sub_82A74B34);
PPC_FUNC_IMPL(__imp__sub_82A74B34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A74B38"))) PPC_WEAK_FUNC(sub_82A74B38);
PPC_FUNC_IMPL(__imp__sub_82A74B38) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83070868
	ctx.lr = 0x82A74B58;
	sub_83070868(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a74bb0
	if (cr6.eq) goto loc_82A74BB0;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a74bb0
	if (cr6.eq) goto loc_82A74BB0;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82a74bb0
	if (cr6.lt) goto loc_82A74BB0;
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82a74bb0
	if (cr6.gt) goto loc_82A74BB0;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82A74B9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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
loc_82A74BB0:
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
}

__attribute__((alias("__imp__sub_82A74BC8"))) PPC_WEAK_FUNC(sub_82A74BC8);
PPC_FUNC_IMPL(__imp__sub_82A74BC8) {
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
	// bl 0x82a74a40
	ctx.lr = 0x82A74BE0;
	sub_82A74A40(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82A74BFC"))) PPC_WEAK_FUNC(sub_82A74BFC);
PPC_FUNC_IMPL(__imp__sub_82A74BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A74C00"))) PPC_WEAK_FUNC(sub_82A74C00);
PPC_FUNC_IMPL(__imp__sub_82A74C00) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x830708d8
	ctx.lr = 0x82A74C24;
	sub_830708D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a74c38
	if (!cr6.eq) goto loc_82A74C38;
loc_82A74C30:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a74c6c
	goto loc_82A74C6C;
loc_82A74C38:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a74c30
	if (cr6.eq) goto loc_82A74C30;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82a74c5c
	if (cr6.lt) goto loc_82A74C5C;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82a74c60
	goto loc_82A74C60;
loc_82A74C5C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82A74C60:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A74C6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82A74C6C:
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

__attribute__((alias("__imp__sub_82A74C84"))) PPC_WEAK_FUNC(sub_82A74C84);
PPC_FUNC_IMPL(__imp__sub_82A74C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A74C88"))) PPC_WEAK_FUNC(sub_82A74C88);
PPC_FUNC_IMPL(__imp__sub_82A74C88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82A74C90;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x83763ef8
	ctx.lr = 0x82A74C9C;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a74d28
	if (cr6.eq) goto loc_82A74D28;
	// lwz r10,100(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 100);
	// addi r28,r26,96
	ctx.r28.s64 = ctx.r26.s64 + 96;
	// lwz r11,96(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// li r31,0
	ctx.r31.s64 = 0;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r10,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82a74d28
	if (cr0.eq) goto loc_82A74D28;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// ble cr6,0x82a74d34
	if (!cr6.gt) goto loc_82A74D34;
loc_82A74CD0:
	// lwz r10,112(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 112);
	// lwz r9,116(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 116);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r7,r8,7
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 7;
	// cmplw cr6,r7,r31
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, xer);
	// ble cr6,0x82a74d40
	if (!cr6.gt) goto loc_82A74D40;
	// lwzx r25,r30,r11
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// add r27,r29,r10
	ctx.r27.u64 = ctx.r29.u64 + ctx.r10.u64;
	// bl 0x83763ef8
	ctx.lr = 0x82A74CF4;
	sub_83763EF8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// clrlwi r5,r25,24
	ctx.r5.u64 = ctx.r25.u32 & 0xFF;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x83775b40
	ctx.lr = 0x82A74D04;
	sub_83775B40(ctx, base);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r29,r29,128
	ctx.r29.s64 = ctx.r29.s64 + 128;
	// srawi r10,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82a74cd0
	if (cr6.gt) goto loc_82A74CD0;
loc_82A74D28:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82A74D34:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A74D40;
	sub_831CC188(ctx, base);
loc_82A74D40:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A74D4C;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82A74D4C"))) PPC_WEAK_FUNC(sub_82A74D4C);
PPC_FUNC_IMPL(__imp__sub_82A74D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A74D50"))) PPC_WEAK_FUNC(sub_82A74D50);
PPC_FUNC_IMPL(__imp__sub_82A74D50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A74D58;
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
	// beq cr6,0x82a74d98
	if (cr6.eq) goto loc_82A74D98;
	// subf r30,r5,r3
	ctx.r30.s64 = ctx.r3.s64 - ctx.r5.s64;
loc_82A74D70:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82a74d88
	if (cr6.eq) goto loc_82A74D88;
	// add r4,r30,r31
	ctx.r4.u64 = ctx.r30.u64 + ctx.r31.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A74D88;
	sub_831CE980(ctx, base);
loc_82A74D88:
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x82a74d70
	if (!cr6.eq) goto loc_82A74D70;
loc_82A74D98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A74DA4"))) PPC_WEAK_FUNC(sub_82A74DA4);
PPC_FUNC_IMPL(__imp__sub_82A74DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A74DA8"))) PPC_WEAK_FUNC(sub_82A74DA8);
PPC_FUNC_IMPL(__imp__sub_82A74DA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A74DB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// beq cr6,0x82a74e00
	if (cr6.eq) goto loc_82A74E00;
	// lwz r29,4(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r29
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r29.u32, xer);
	// beq cr6,0x82a74dfc
	if (cr6.eq) goto loc_82A74DFC;
loc_82A74DDC:
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A74DEC;
	sub_831CE980(ctx, base);
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x82a74ddc
	if (!cr6.eq) goto loc_82A74DDC;
loc_82A74DFC:
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
loc_82A74E00:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A74E0C"))) PPC_WEAK_FUNC(sub_82A74E0C);
PPC_FUNC_IMPL(__imp__sub_82A74E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A74E10"))) PPC_WEAK_FUNC(sub_82A74E10);
PPC_FUNC_IMPL(__imp__sub_82A74E10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A74E18;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,511
	ctx.r11.s64 = 33488896;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82a74e3c
	if (!cr6.gt) goto loc_82A74E3C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82A74E3C;
	sub_831CC150(ctx, base);
loc_82A74E3C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,7
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 7;
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x82a74ec4
	if (!cr6.lt) goto loc_82A74EC4;
	// li r27,2
	ctx.r27.s64 = 2;
	// rlwinm r29,r4,7,0,24
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A74E70;
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
	// bl 0x82a74d50
	ctx.lr = 0x82A74E88;
	sub_82A74D50(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r28,r10,7
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r28.s64 = ctx.r10.s32 >> 7;
	// beq cr6,0x82a74eac
	if (cr6.eq) goto loc_82A74EAC;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82A74EAC;
	sub_825952B8(ctx, base);
loc_82A74EAC:
	// rlwinm r11,r28,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 7) & 0xFFFFFF80;
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
loc_82A74EC4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A74ECC"))) PPC_WEAK_FUNC(sub_82A74ECC);
PPC_FUNC_IMPL(__imp__sub_82A74ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A74ED0"))) PPC_WEAK_FUNC(sub_82A74ED0);
PPC_FUNC_IMPL(__imp__sub_82A74ED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A74ED8;
	__savegprlr_29(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830708d8
	ctx.lr = 0x82A74EEC;
	sub_830708D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a74f04
	if (!cr6.eq) goto loc_82A74F04;
loc_82A74EF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A74F04:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a74ef8
	if (cr6.eq) goto loc_82A74EF8;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,512
	cr6.compare<uint32_t>(ctx.r5.u32, 512, xer);
	// bgt cr6,0x82a74ef8
	if (cr6.gt) goto loc_82A74EF8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82A74F30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a74f5c
	if (cr6.eq) goto loc_82A74F5C;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r10,-1(r9)
	PPC_STORE_U8(ctx.r9.u32 + -1, ctx.r10.u8);
	// bl 0x8259d6c0
	ctx.lr = 0x82A74F5C;
	sub_8259D6C0(ctx, base);
loc_82A74F5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A74F68"))) PPC_WEAK_FUNC(sub_82A74F68);
PPC_FUNC_IMPL(__imp__sub_82A74F68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,511
	ctx.r10.s64 = 33488896;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r6,r4,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r4.s64;
	// srawi r10,r7,7
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 7;
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bge cr6,0x82a74f98
	if (!cr6.lt) goto loc_82A74F98;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82A74F98:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// srawi r11,r6,7
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 7;
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
	// blt cr6,0x82a74fc8
	if (cr6.lt) goto loc_82A74FC8;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82A74FC8:
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// bge cr6,0x82a74fd4
	if (!cr6.lt) goto loc_82A74FD4;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
loc_82A74FD4:
	// b 0x82a74e10
	sub_82A74E10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A74FD8"))) PPC_WEAK_FUNC(sub_82A74FD8);
PPC_FUNC_IMPL(__imp__sub_82A74FD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A74FDC"))) PPC_WEAK_FUNC(sub_82A74FDC);
PPC_FUNC_IMPL(__imp__sub_82A74FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A74FE0"))) PPC_WEAK_FUNC(sub_82A74FE0);
PPC_FUNC_IMPL(__imp__sub_82A74FE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A74FE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,30448
	ctx.r9.s64 = ctx.r11.s64 + 30448;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// li r29,2
	ctx.r29.s64 = 2;
	// lwz r4,112(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a75024
	if (cr6.eq) goto loc_82A75024;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82A75024;
	sub_825952B8(ctx, base);
loc_82A75024:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a7504c
	if (cr6.eq) goto loc_82A7504C;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82A7504C;
	sub_825952B8(ctx, base);
loc_82A7504C:
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// bl 0x82d25548
	ctx.lr = 0x82A75060;
	sub_82D25548(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A75068"))) PPC_WEAK_FUNC(sub_82A75068);
PPC_FUNC_IMPL(__imp__sub_82A75068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A75070;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a7512c
	if (cr6.eq) goto loc_82A7512C;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// addi r31,r3,112
	ctx.r31.s64 = ctx.r3.s64 + 112;
	// lwz r10,116(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,7
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 7;
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// ble cr6,0x82a7512c
	if (!cr6.gt) goto loc_82A7512C;
	// lwz r11,100(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r3,r4,100
	ctx.r3.s64 = ctx.r4.s64 + 100;
	// addi r4,r10,30092
	ctx.r4.s64 = ctx.r10.s64 + 30092;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A750B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a7512c
	if (cr6.eq) goto loc_82A7512C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// srawi r6,r7,7
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7F) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 7;
	// cmplw cr6,r6,r30
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r30.u32, xer);
	// bgt cr6,0x82a750fc
	if (cr6.gt) goto loc_82A750FC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A750FC;
	sub_831CC188(ctx, base);
loc_82A750FC:
	// rlwinm r10,r30,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 7) & 0xFFFFFF80;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a74ed0
	ctx.lr = 0x82A75110;
	sub_82A74ED0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82A75124;
	sub_82D291E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82A7512C;
	sub_8387E8E0(ctx, base);
loc_82A7512C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A75134"))) PPC_WEAK_FUNC(sub_82A75134);
PPC_FUNC_IMPL(__imp__sub_82A75134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A75138"))) PPC_WEAK_FUNC(sub_82A75138);
PPC_FUNC_IMPL(__imp__sub_82A75138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A75140;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82A75150;
	sub_82D19A78(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r29,r11,30328
	ctx.r29.s64 = ctx.r11.s64 + 30328;
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// bl 0x82d2f098
	ctx.lr = 0x82A75160;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a75210
	if (cr6.eq) goto loc_82A75210;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82A75170;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a75210
	if (cr6.eq) goto loc_82A75210;
	// lwz r11,112(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,116(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// srawi r6,r7,7
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7F) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 7;
	// cmplw cr6,r6,r30
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r30.u32, xer);
	// bgt cr6,0x82a751b4
	if (cr6.gt) goto loc_82A751B4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A751B4;
	sub_831CC188(ctx, base);
loc_82A751B4:
	// rlwinm r10,r30,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 7) & 0xFFFFFF80;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a74ed0
	ctx.lr = 0x82A751C8;
	sub_82A74ED0(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A751E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a75204
	if (cr6.eq) goto loc_82A75204;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82a751fc
	if (!cr6.lt) goto loc_82A751FC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82A751FC:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d3a900
	ctx.lr = 0x82A75204;
	sub_82D3A900(ctx, base);
loc_82A75204:
	// stw r30,128(r28)
	PPC_STORE_U32(ctx.r28.u32 + 128, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82A75210;
	sub_8387E8E0(ctx, base);
loc_82A75210:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A75218"))) PPC_WEAK_FUNC(sub_82A75218);
PPC_FUNC_IMPL(__imp__sub_82A75218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A75220;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82A75230;
	sub_82D19A78(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r28,r11,30348
	ctx.r28.s64 = ctx.r11.s64 + 30348;
	// addi r4,r28,-8
	ctx.r4.s64 = ctx.r28.s64 + -8;
	// bl 0x82d2f098
	ctx.lr = 0x82A75240;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a752ec
	if (cr6.eq) goto loc_82A752EC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82A75250;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a752ec
	if (cr6.eq) goto loc_82A752EC;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,116(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// srawi r6,r7,7
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7F) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 7;
	// cmplw cr6,r6,r29
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r29.u32, xer);
	// bgt cr6,0x82a75294
	if (cr6.gt) goto loc_82A75294;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A75294;
	sub_831CC188(ctx, base);
loc_82A75294:
	// rlwinm r10,r29,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 7) & 0xFFFFFF80;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a74ed0
	ctx.lr = 0x82A752A8;
	sub_82A74ED0(ctx, base);
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r3,r30,100
	ctx.r3.s64 = ctx.r30.s64 + 100;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A752C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a752e4
	if (cr6.eq) goto loc_82A752E4;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82a752dc
	if (!cr6.lt) goto loc_82A752DC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82A752DC:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d3a900
	ctx.lr = 0x82A752E4;
	sub_82D3A900(ctx, base);
loc_82A752E4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82A752EC;
	sub_8387E8E0(ctx, base);
loc_82A752EC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A752F4"))) PPC_WEAK_FUNC(sub_82A752F4);
PPC_FUNC_IMPL(__imp__sub_82A752F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A752F8"))) PPC_WEAK_FUNC(sub_82A752F8);
PPC_FUNC_IMPL(__imp__sub_82A752F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A75300;
	__savegprlr_27(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83763ef8
	ctx.lr = 0x82A7530C;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a75498
	if (cr6.eq) goto loc_82A75498;
	// lwz r9,96(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r10,100(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82a7533c
	if (cr6.gt) goto loc_82A7533C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A7533C;
	sub_831CC188(ctx, base);
loc_82A7533C:
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lwzx r31,r7,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A75358:
	// stdu r8,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82a75358
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A75358;
	// bl 0x83763ef8
	ctx.lr = 0x82A75364;
	sub_83763EF8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r29,r31,24
	ctx.r29.u64 = ctx.r31.u32 & 0xFF;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A75380;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// stb r28,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r28.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a74ed0
	ctx.lr = 0x82A753A0;
	sub_82A74ED0(ctx, base);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// lwz r9,116(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// addi r31,r30,112
	ctx.r31.s64 = ctx.r30.s64 + 112;
	// lwz r10,128(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r7,r8,7
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 7;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82a753cc
	if (cr6.gt) goto loc_82A753CC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A753CC;
	sub_831CC188(ctx, base);
loc_82A753CC:
	// rlwinm r10,r10,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a74c00
	ctx.lr = 0x82A753E0;
	sub_82A74C00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,128(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r7,r8,7
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 7;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82a75408
	if (cr6.gt) goto loc_82A75408;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A75408;
	sub_831CC188(ctx, base);
loc_82A75408:
	// rlwinm r10,r10,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a74b38
	ctx.lr = 0x82A7541C;
	sub_82A74B38(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,128(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r7,r8,7
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 7;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82a75444
	if (cr6.gt) goto loc_82A75444;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A75444;
	sub_831CC188(ctx, base);
loc_82A75444:
	// rlwinm r10,r10,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x83763ef8
	ctx.lr = 0x82A75450;
	sub_83763EF8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x83775b40
	ctx.lr = 0x82A75460;
	sub_83775B40(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a75480
	if (cr6.lt) goto loc_82A75480;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82A75480;
	sub_825952B8(ctx, base);
loc_82A75480:
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// stb r28,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r28.u8);
	// lwz r4,128(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// bl 0x82a75218
	ctx.lr = 0x82A75498;
	sub_82A75218(ctx, base);
loc_82A75498:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A754A0"))) PPC_WEAK_FUNC(sub_82A754A0);
PPC_FUNC_IMPL(__imp__sub_82A754A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bge cr6,0x82a754d8
	if (!cr6.lt) goto loc_82A754D8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82a754dc
	if (!cr6.gt) goto loc_82A754DC;
loc_82A754D8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A754DC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a75528
	if (cr6.eq) goto loc_82A75528;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r10,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// srawi r30,r8,7
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r30.s64 = ctx.r8.s32 >> 7;
	// bne cr6,0x82a7550c
	if (!cr6.eq) goto loc_82A7550C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a74f68
	ctx.lr = 0x82A7550C;
	sub_82A74F68(ctx, base);
loc_82A7550C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r30,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 7) & 0xFFFFFF80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a75558
	if (cr6.eq) goto loc_82A75558;
	// b 0x82a75550
	goto loc_82A75550;
loc_82A75528:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82a75540
	if (!cr6.eq) goto loc_82A75540;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a74f68
	ctx.lr = 0x82A75540;
	sub_82A74F68(ctx, base);
loc_82A75540:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a75558
	if (cr6.eq) goto loc_82A75558;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82A75550:
	// li r5,128
	ctx.r5.s64 = 128;
	// bl 0x831ce980
	ctx.lr = 0x82A75558;
	sub_831CE980(ctx, base);
loc_82A75558:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
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

__attribute__((alias("__imp__sub_82A7557C"))) PPC_WEAK_FUNC(sub_82A7557C);
PPC_FUNC_IMPL(__imp__sub_82A7557C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A75580"))) PPC_WEAK_FUNC(sub_82A75580);
PPC_FUNC_IMPL(__imp__sub_82A75580) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A75588;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8308e078
	ctx.lr = 0x82A7559C;
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
	ctx.lr = 0x82A755B4;
	sub_82D253F8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,30448
	ctx.r9.s64 = ctx.r11.s64 + 30448;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// lis r6,-31778
	ctx.r6.s64 = -2082603008;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// addi r29,r31,96
	ctx.r29.s64 = ctx.r31.s64 + 96;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r30,r31,112
	ctx.r30.s64 = ctx.r31.s64 + 112;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// addi r28,r6,27632
	ctx.r28.s64 = ctx.r6.s64 + 27632;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stb r11,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r11.u8);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stw r7,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r7.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// lwz r4,27632(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 27632);
	// bl 0x82d20ae0
	ctx.lr = 0x82A7562C;
	sub_82D20AE0(ctx, base);
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r5,30024
	ctx.r4.s64 = ctx.r5.s64 + 30024;
	// bl 0x82d20ae0
	ctx.lr = 0x82A7563C;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x82A7564C;
	sub_82D23390(ctx, base);
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r28,96(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplw cr6,r28,r4
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r4.u32, xer);
	// beq cr6,0x82a7567c
	if (cr6.eq) goto loc_82A7567C;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x831ce420
	ctx.lr = 0x82A75674;
	sub_831CE420(ctx, base);
	// add r10,r27,r28
	ctx.r10.u64 = ctx.r27.u64 + ctx.r28.u64;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
loc_82A7567C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82a74da8
	ctx.lr = 0x82A75690;
	sub_82A74DA8(ctx, base);
	// bl 0x82bdfa98
	ctx.lr = 0x82A75694;
	sub_82BDFA98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82a756b0
	if (cr6.eq) goto loc_82A756B0;
	// bl 0x83103100
	ctx.lr = 0x82A756AC;
	sub_83103100(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A756B0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A756B8"))) PPC_WEAK_FUNC(sub_82A756B8);
PPC_FUNC_IMPL(__imp__sub_82A756B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82a74fe0
	ctx.lr = 0x82A756D8;
	sub_82A74FE0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a756f0
	if (cr6.eq) goto loc_82A756F0;
	// bl 0x82416268
	ctx.lr = 0x82A756EC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A756F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A75708"))) PPC_WEAK_FUNC(sub_82A75708);
PPC_FUNC_IMPL(__imp__sub_82A75708) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// b 0x82a75138
	sub_82A75138(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A75710"))) PPC_WEAK_FUNC(sub_82A75710);
PPC_FUNC_IMPL(__imp__sub_82A75710) {
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
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a75744
	if (!cr6.eq) goto loc_82A75744;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82a7573c
	if (!cr6.eq) goto loc_82A7573C;
	// bl 0x82a752f8
	ctx.lr = 0x82A7573C;
	sub_82A752F8(ctx, base);
loc_82A7573C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a75754
	goto loc_82A75754;
loc_82A75744:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82a75758
	if (!cr6.eq) goto loc_82A75758;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
loc_82A75754:
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
loc_82A75758:
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

__attribute__((alias("__imp__sub_82A7576C"))) PPC_WEAK_FUNC(sub_82A7576C);
PPC_FUNC_IMPL(__imp__sub_82A7576C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A75770"))) PPC_WEAK_FUNC(sub_82A75770);
PPC_FUNC_IMPL(__imp__sub_82A75770) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82a75818
	if (!cr6.eq) goto loc_82A75818;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addis r11,r11,-264
	ctx.r11.s64 = ctx.r11.s64 + -17301504;
	// addic. r11,r11,-17
	xer.ca = ctx.r11.u32 > 16;
	ctx.r11.s64 = ctx.r11.s64 + -17;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x82a7580c
	if (!cr0.eq) goto loc_82A7580C;
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82a7580c
	if (!cr6.eq) goto loc_82A7580C;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d3aa80
	ctx.lr = 0x82A757BC;
	sub_82D3AA80(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r9,116(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r7,r8,7
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 7;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82a757e4
	if (cr6.gt) goto loc_82A757E4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A757E4;
	sub_831CC188(ctx, base);
loc_82A757E4:
	// rlwinm r10,r10,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a74c00
	ctx.lr = 0x82A757F8;
	sub_82A74C00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// bl 0x82a75218
	ctx.lr = 0x82A75804;
	sub_82A75218(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82A7580C;
	sub_8387E8E0(ctx, base);
loc_82A7580C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
loc_82A75818:
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
}

__attribute__((alias("__imp__sub_82A75830"))) PPC_WEAK_FUNC(sub_82A75830);
PPC_FUNC_IMPL(__imp__sub_82A75830) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A75838;
	__savegprlr_29(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a759c4
	if (!cr6.eq) goto loc_82A759C4;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r9,116(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// li r29,15
	ctx.r29.s64 = 15;
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// srawi r7,r8,7
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 7;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82a75888
	if (cr6.gt) goto loc_82A75888;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A75888;
	sub_831CC188(ctx, base);
loc_82A75888:
	// rlwinm r10,r10,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a74ed0
	ctx.lr = 0x82A7589C;
	sub_82A74ED0(ctx, base);
	// stw r29,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r29.u32);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// stb r31,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r31.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r29,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r29.u32);
	// addi r4,r11,30188
	ctx.r4.s64 = ctx.r11.s64 + 30188;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x837b0c10
	ctx.lr = 0x82A758C4;
	sub_837B0C10(ctx, base);
	// lis r4,42
	ctx.r4.s64 = 2752512;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ori r4,r4,51
	ctx.r4.u64 = ctx.r4.u64 | 51;
	// bl 0x82d042a8
	ctx.lr = 0x82A758D4;
	sub_82D042A8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82a758ec
	if (!cr6.lt) goto loc_82A758EC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82A758EC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82A758F0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a758f0
	if (!cr6.eq) goto loc_82A758F0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82A75914;
	sub_8259CC28(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8259cb28
	ctx.lr = 0x82A75928;
	sub_8259CB28(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,40
	ctx.r10.s64 = 40;
	// stw r31,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r31.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// stw r10,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r10.u32);
	// stb r11,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r11.u8);
	// bl 0x82d19638
	ctx.lr = 0x82A7594C;
	sub_82D19638(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82d3aef0
	ctx.lr = 0x82A75954;
	sub_82D3AEF0(ctx, base);
	// stw r3,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a75974
	if (cr6.eq) goto loc_82A75974;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x82d3ab00
	ctx.lr = 0x82A75968;
	sub_82D3AB00(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,132(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// bl 0x83103100
	ctx.lr = 0x82A75974;
	sub_83103100(ctx, base);
loc_82A75974:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a75994
	if (cr6.lt) goto loc_82A75994;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82A75994;
	sub_825952B8(ctx, base);
loc_82A75994:
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x8378e240
	ctx.lr = 0x82A759A8;
	sub_8378E240(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a759c4
	if (cr6.lt) goto loc_82A759C4;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82A759C4;
	sub_825952B8(ctx, base);
loc_82A759C4:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A759CC"))) PPC_WEAK_FUNC(sub_82A759CC);
PPC_FUNC_IMPL(__imp__sub_82A759CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A759D0"))) PPC_WEAK_FUNC(sub_82A759D0);
PPC_FUNC_IMPL(__imp__sub_82A759D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A759D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82A759E4;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r30,r11,30312
	ctx.r30.s64 = ctx.r11.s64 + 30312;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-120
	ctx.r4.s64 = ctx.r30.s64 + -120;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A75A04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a75a1c
	if (cr6.eq) goto loc_82A75A1C;
	// lis r4,42
	ctx.r4.s64 = 2752512;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,51
	ctx.r4.u64 = ctx.r4.u64 | 51;
	// bl 0x82d30340
	ctx.lr = 0x82A75A1C;
	sub_82D30340(ctx, base);
loc_82A75A1C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82A75A24;
	sub_82D19A78(ctx, base);
	// addi r4,r30,-108
	ctx.r4.s64 = ctx.r30.s64 + -108;
	// bl 0x82d2f098
	ctx.lr = 0x82A75A2C;
	sub_82D2F098(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a75c80
	if (cr6.eq) goto loc_82A75C80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-100
	ctx.r4.s64 = ctx.r30.s64 + -100;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A75A50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82A75A64;
	sub_82D2B608(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82A75A6C;
	sub_82D19A78(ctx, base);
	// addi r4,r30,-88
	ctx.r4.s64 = ctx.r30.s64 + -88;
	// bl 0x82d2f098
	ctx.lr = 0x82A75A74;
	sub_82D2F098(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a75c80
	if (cr6.eq) goto loc_82A75C80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-80
	ctx.r4.s64 = ctx.r30.s64 + -80;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A75A98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20f50
	ctx.lr = 0x82A75AB0;
	sub_82D20F50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82A75ABC;
	sub_82D33DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a75c80
	if (cr6.eq) goto loc_82A75C80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d21408
	ctx.lr = 0x82A75ADC;
	sub_82D21408(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r30,-64
	ctx.r4.s64 = ctx.r30.s64 + -64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A75AF8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82d17d90
	ctx.lr = 0x82A75AFC;
	sub_82D17D90(ctx, base);
	// addi r28,r29,100
	ctx.r28.s64 = ctx.r29.s64 + 100;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r30,-52
	ctx.r4.s64 = ctx.r30.s64 + -52;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A75B1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a75b30
	if (cr6.eq) goto loc_82A75B30;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,34
	ctx.r4.u64 = ctx.r4.u64 | 34;
	// bl 0x82d29598
	ctx.lr = 0x82A75B30;
	sub_82D29598(ctx, base);
loc_82A75B30:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,116(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// srawi r6,r7,7
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7F) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 7;
	// cmplw cr6,r6,r29
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r29.u32, xer);
	// bgt cr6,0x82a75b68
	if (cr6.gt) goto loc_82A75B68;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A75B68;
	sub_831CC188(ctx, base);
loc_82A75B68:
	// rlwinm r10,r29,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 7) & 0xFFFFFF80;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a74ed0
	ctx.lr = 0x82A75B7C;
	sub_82A74ED0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r30,-44
	ctx.r4.s64 = ctx.r30.s64 + -44;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A75B94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a75bb8
	if (cr6.eq) goto loc_82A75BB8;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82a75bb0
	if (!cr6.lt) goto loc_82A75BB0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82A75BB0:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d3a900
	ctx.lr = 0x82A75BB8;
	sub_82D3A900(ctx, base);
loc_82A75BB8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a75138
	ctx.lr = 0x82A75BC4;
	sub_82A75138(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r29
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, xer);
	// bgt cr6,0x82a75be8
	if (cr6.gt) goto loc_82A75BE8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A75BE8;
	sub_831CC188(ctx, base);
loc_82A75BE8:
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r4,r9,24
	ctx.r4.u64 = ctx.r9.u32 & 0xFF;
	// bl 0x82a74ac8
	ctx.lr = 0x82A75BFC;
	sub_82A74AC8(ctx, base);
	// stw r29,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82A75C08;
	sub_82D19A78(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r7,72(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82A75C20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82A75C28;
	sub_82D19A78(ctx, base);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,72(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A75C40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82A75C48;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A75C60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a75c78
	if (cr6.eq) goto loc_82A75C78;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82A75C78;
	sub_82D2B608(ctx, base);
loc_82A75C78:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82A75C80;
	sub_8387E8E0(ctx, base);
loc_82A75C80:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A75C88"))) PPC_WEAK_FUNC(sub_82A75C88);
PPC_FUNC_IMPL(__imp__sub_82A75C88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x82a75cb0
	if (cr6.lt) goto loc_82A75CB0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82a75cb4
	goto loc_82A75CB4;
loc_82A75CB0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82A75CB4:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,164
	ctx.r4.s64 = 164;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A75CD0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a75ce8
	if (cr6.eq) goto loc_82A75CE8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a75580
	ctx.lr = 0x82A75CE4;
	sub_82A75580(ctx, base);
	// b 0x82a75cec
	goto loc_82A75CEC;
loc_82A75CE8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A75CEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A75D04"))) PPC_WEAK_FUNC(sub_82A75D04);
PPC_FUNC_IMPL(__imp__sub_82A75D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A75D08"))) PPC_WEAK_FUNC(sub_82A75D08);
PPC_FUNC_IMPL(__imp__sub_82A75D08) {
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
	// bl 0x82a75830
	ctx.lr = 0x82A75D20;
	sub_82A75830(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82A75D3C"))) PPC_WEAK_FUNC(sub_82A75D3C);
PPC_FUNC_IMPL(__imp__sub_82A75D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A75D40"))) PPC_WEAK_FUNC(sub_82A75D40);
PPC_FUNC_IMPL(__imp__sub_82A75D40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82A75D48;
	__savegprlr_25(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82A75D54;
	sub_831156E8(ctx, base);
	// lis r11,236
	ctx.r11.s64 = 15466496;
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r10,r11,10656
	ctx.r10.u64 = ctx.r11.u64 | 10656;
	// lwzx r28,r29,r10
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// bl 0x83763ef8
	ctx.lr = 0x82A75D68;
	sub_83763EF8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a75e20
	if (cr6.eq) goto loc_82A75E20;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A75D88:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82a75d88
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A75D88;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82a75e20
	if (cr6.eq) goto loc_82A75E20;
loc_82A75D9C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83117e18
	ctx.lr = 0x82A75DA8;
	sub_83117E18(ctx, base);
	// clrlwi r31,r3,16
	ctx.r31.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x8311c448
	ctx.lr = 0x82A75DBC;
	sub_8311C448(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a75e14
	if (cr6.eq) goto loc_82A75E14;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x83124aa8
	ctx.lr = 0x82A75DD4;
	sub_83124AA8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a75e14
	if (cr6.eq) goto loc_82A75E14;
	// cmplwi cr6,r31,21
	cr6.compare<uint32_t>(ctx.r31.u32, 21, xer);
	// beq cr6,0x82a75e14
	if (cr6.eq) goto loc_82A75E14;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r27,96
	ctx.r3.s64 = ctx.r27.s64 + 96;
	// bl 0x835977d8
	ctx.lr = 0x82A75DF4;
	sub_835977D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82a74830
	ctx.lr = 0x82A75E08;
	sub_82A74830(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r27,112
	ctx.r3.s64 = ctx.r27.s64 + 112;
	// bl 0x82a754a0
	ctx.lr = 0x82A75E14;
	sub_82A754A0(ctx, base);
loc_82A75E14:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// blt cr6,0x82a75d9c
	if (cr6.lt) goto loc_82A75D9C;
loc_82A75E20:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A75E28"))) PPC_WEAK_FUNC(sub_82A75E28);
PPC_FUNC_IMPL(__imp__sub_82A75E28) {
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
	// bl 0x82d19a78
	ctx.lr = 0x82A75E40;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r11,30080
	ctx.r4.s64 = ctx.r11.s64 + 30080;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A75E5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a75e74
	if (cr6.eq) goto loc_82A75E74;
	// lis r4,42
	ctx.r4.s64 = 2752512;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,51
	ctx.r4.u64 = ctx.r4.u64 | 51;
	// bl 0x82d30340
	ctx.lr = 0x82A75E74;
	sub_82D30340(ctx, base);
loc_82A75E74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a75d40
	ctx.lr = 0x82A75E7C;
	sub_82A75D40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a759d0
	ctx.lr = 0x82A75E84;
	sub_82A759D0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82A75E94;
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
	ctx.lr = 0x82A75EA8;
	sub_82D20EB8(ctx, base);
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

__attribute__((alias("__imp__sub_82A75EC0"))) PPC_WEAK_FUNC(sub_82A75EC0);
PPC_FUNC_IMPL(__imp__sub_82A75EC0) {
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
	ctx.lr = 0x82A75ED8;
	sub_82D1C1A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17d80
	ctx.lr = 0x82A75EE4;
	sub_82D17D80(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19858
	ctx.lr = 0x82A75EF0;
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

__attribute__((alias("__imp__sub_82A75F04"))) PPC_WEAK_FUNC(sub_82A75F04);
PPC_FUNC_IMPL(__imp__sub_82A75F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A75F08"))) PPC_WEAK_FUNC(sub_82A75F08);
PPC_FUNC_IMPL(__imp__sub_82A75F08) {
	PPC_FUNC_PROLOGUE();
	// stw r6,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A75F10"))) PPC_WEAK_FUNC(sub_82A75F10);
PPC_FUNC_IMPL(__imp__sub_82A75F10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A75F18;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r11,31288
	ctx.r9.s64 = ctx.r11.s64 + 31288;
	// addi r8,r10,17980
	ctx.r8.s64 = ctx.r10.s64 + 17980;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// li r29,2
	ctx.r29.s64 = 2;
	// lwz r4,112(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a75f54
	if (cr6.eq) goto loc_82A75F54;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82A75F54;
	sub_825952B8(ctx, base);
loc_82A75F54:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a75f7c
	if (cr6.eq) goto loc_82A75F7C;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82A75F7C;
	sub_825952B8(ctx, base);
loc_82A75F7C:
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// bl 0x82d25548
	ctx.lr = 0x82A75F90;
	sub_82D25548(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A75F98"))) PPC_WEAK_FUNC(sub_82A75F98);
PPC_FUNC_IMPL(__imp__sub_82A75F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A75FA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a76060
	if (cr6.eq) goto loc_82A76060;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// addi r31,r3,112
	ctx.r31.s64 = ctx.r3.s64 + 112;
	// lwz r10,116(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,7
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 7;
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// ble cr6,0x82a76060
	if (!cr6.gt) goto loc_82A76060;
	// lwz r11,100(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r3,r4,100
	ctx.r3.s64 = ctx.r4.s64 + 100;
	// addi r4,r10,31084
	ctx.r4.s64 = ctx.r10.s64 + 31084;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A75FE8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a76060
	if (cr6.eq) goto loc_82A76060;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// srawi r6,r7,7
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7F) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 7;
	// cmplw cr6,r6,r30
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r30.u32, xer);
	// bgt cr6,0x82a7602c
	if (cr6.gt) goto loc_82A7602C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A7602C;
	sub_831CC188(ctx, base);
loc_82A7602C:
	// lis r9,-31778
	ctx.r9.s64 = -2082603008;
	// rlwinm r10,r30,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 7) & 0xFFFFFF80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,27784(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27784);
	// bl 0x82a74ed0
	ctx.lr = 0x82A76044;
	sub_82A74ED0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82A76058;
	sub_82D291E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82A76060;
	sub_8387E8E0(ctx, base);
loc_82A76060:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A76068"))) PPC_WEAK_FUNC(sub_82A76068);
PPC_FUNC_IMPL(__imp__sub_82A76068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82A76070;
	__savegprlr_21(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r10,96(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r31,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r9.s32 >> 2;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// bge cr6,0x82a76094
	if (!cr6.lt) goto loc_82A76094;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82A76094:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d20f50
	ctx.lr = 0x82A760AC;
	sub_82D20F50(ctx, base);
	// mr r21,r31
	ctx.r21.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,18
	cr6.compare<uint32_t>(ctx.r31.u32, 18, xer);
	// ble cr6,0x82a760bc
	if (!cr6.gt) goto loc_82A760BC;
	// li r21,18
	ctx.r21.s64 = 18;
loc_82A760BC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82A760C4;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r28,r11,31172
	ctx.r28.s64 = ctx.r11.s64 + 31172;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r28,-80
	ctx.r4.s64 = ctx.r28.s64 + -80;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A760E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a760fc
	if (cr6.eq) goto loc_82A760FC;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,34
	ctx.r4.u64 = ctx.r4.u64 | 34;
	// bl 0x82d30340
	ctx.lr = 0x82A760FC;
	sub_82D30340(ctx, base);
loc_82A760FC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82A76104;
	sub_82D19A78(ctx, base);
	// addi r4,r28,-68
	ctx.r4.s64 = ctx.r28.s64 + -68;
	// bl 0x82d2f098
	ctx.lr = 0x82A7610C;
	sub_82D2F098(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a762a8
	if (cr6.eq) goto loc_82A762A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r28,-60
	ctx.r4.s64 = ctx.r28.s64 + -60;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A76130;
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
	ctx.lr = 0x82A76144;
	sub_82D2B608(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82A7614C;
	sub_82D19A78(ctx, base);
	// addi r4,r28,-48
	ctx.r4.s64 = ctx.r28.s64 + -48;
	// bl 0x82d2f098
	ctx.lr = 0x82A76154;
	sub_82D2F098(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a762a8
	if (cr6.eq) goto loc_82A762A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r28,-40
	ctx.r4.s64 = ctx.r28.s64 + -40;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A76178;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// beq cr6,0x82a762a8
	if (cr6.eq) goto loc_82A762A8;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// li r23,15
	ctx.r23.s64 = 15;
	// lis r22,-31778
	ctx.r22.s64 = -2082603008;
loc_82A76194:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82A761A0;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a762a8
	if (cr6.eq) goto loc_82A762A8;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// addi r4,r28,-24
	ctx.r4.s64 = ctx.r28.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A761C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a76298
	if (cr6.eq) goto loc_82A76298;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d21408
	ctx.lr = 0x82A761E4;
	sub_82D21408(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r28,-8
	ctx.r4.s64 = ctx.r28.s64 + -8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A76200;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A76218;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a76298
	if (cr6.eq) goto loc_82A76298;
	// lwz r11,112(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 112);
	// lwz r10,116(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 116);
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// srawi r8,r9,7
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 7;
	// cmplw cr6,r8,r29
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, xer);
	// ble cr6,0x82a762b0
	if (!cr6.gt) goto loc_82A762B0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,27784(r22)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r22.u32 + 27784);
	// add r3,r26,r11
	ctx.r3.u64 = ctx.r26.u64 + ctx.r11.u64;
	// bl 0x82a74ed0
	ctx.lr = 0x82A76258;
	sub_82A74ED0(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82a7626c
	if (!cr6.lt) goto loc_82A7626C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82A7626C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82A76274;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82A76288;
	sub_82D291E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82A76290;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82A76298;
	sub_8387E8E0(ctx, base);
loc_82A76298:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r26,r26,128
	ctx.r26.s64 = ctx.r26.s64 + 128;
	// cmplw cr6,r29,r21
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r21.u32, xer);
	// blt cr6,0x82a76194
	if (cr6.lt) goto loc_82A76194;
loc_82A762A8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82A762B0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A762BC;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82A762BC"))) PPC_WEAK_FUNC(sub_82A762BC);
PPC_FUNC_IMPL(__imp__sub_82A762BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A762C0"))) PPC_WEAK_FUNC(sub_82A762C0);
PPC_FUNC_IMPL(__imp__sub_82A762C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A762C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x8308e078
	ctx.lr = 0x82A762DC;
	sub_8308E078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82A762F4;
	sub_82D253F8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r11,31288
	ctx.r9.s64 = ctx.r11.s64 + 31288;
	// addi r8,r10,17980
	ctx.r8.s64 = ctx.r10.s64 + 17980;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// addi r29,r31,96
	ctx.r29.s64 = ctx.r31.s64 + 96;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// addi r30,r31,112
	ctx.r30.s64 = ctx.r31.s64 + 112;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r28,r7,27776
	ctx.r28.s64 = ctx.r7.s64 + 27776;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// lwz r4,27776(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 27776);
	// bl 0x82d20ae0
	ctx.lr = 0x82A76348;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x82A76358;
	sub_82D23390(ctx, base);
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r28,96(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplw cr6,r28,r4
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r4.u32, xer);
	// beq cr6,0x82a76388
	if (cr6.eq) goto loc_82A76388;
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
	ctx.lr = 0x82A76380;
	sub_831CE420(ctx, base);
	// add r10,r26,r28
	ctx.r10.u64 = ctx.r26.u64 + ctx.r28.u64;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
loc_82A76388:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82a74da8
	ctx.lr = 0x82A7639C;
	sub_82A74DA8(ctx, base);
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a763c4
	if (!cr6.eq) goto loc_82A763C4;
	// bl 0x83763ef8
	ctx.lr = 0x82A763AC;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a763c4
	if (cr6.eq) goto loc_82A763C4;
	// bl 0x83763ef8
	ctx.lr = 0x82A763B8;
	sub_83763EF8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// bl 0x8376eb58
	ctx.lr = 0x82A763C4;
	sub_8376EB58(ctx, base);
loc_82A763C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A763D0"))) PPC_WEAK_FUNC(sub_82A763D0);
PPC_FUNC_IMPL(__imp__sub_82A763D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82a75f10
	ctx.lr = 0x82A763F0;
	sub_82A75F10(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a76408
	if (cr6.eq) goto loc_82A76408;
	// bl 0x82416268
	ctx.lr = 0x82A76404;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A76408:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A76420"))) PPC_WEAK_FUNC(sub_82A76420);
PPC_FUNC_IMPL(__imp__sub_82A76420) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x82a76448
	if (cr6.lt) goto loc_82A76448;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82a7644c
	goto loc_82A7644C;
loc_82A76448:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82A7644C:
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
	ctx.lr = 0x82A76468;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a76480
	if (cr6.eq) goto loc_82A76480;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a762c0
	ctx.lr = 0x82A7647C;
	sub_82A762C0(ctx, base);
	// b 0x82a76484
	goto loc_82A76484;
loc_82A76480:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A76484:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A7649C"))) PPC_WEAK_FUNC(sub_82A7649C);
PPC_FUNC_IMPL(__imp__sub_82A7649C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A764A0"))) PPC_WEAK_FUNC(sub_82A764A0);
PPC_FUNC_IMPL(__imp__sub_82A764A0) {
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
	// bl 0x83763ef8
	ctx.lr = 0x82A764B8;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a764f0
	if (cr6.eq) goto loc_82A764F0;
	// bl 0x83763ef8
	ctx.lr = 0x82A764C4;
	sub_83763EF8(ctx, base);
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// bl 0x8376eaa0
	ctx.lr = 0x82A764CC;
	sub_8376EAA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a764f0
	if (!cr6.eq) goto loc_82A764F0;
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
loc_82A764F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82A764F8;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r11,31072
	ctx.r4.s64 = ctx.r11.s64 + 31072;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A76514;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a7652c
	if (cr6.eq) goto loc_82A7652C;
	// lis r4,42
	ctx.r4.s64 = 2752512;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,51
	ctx.r4.u64 = ctx.r4.u64 | 51;
	// bl 0x82d30340
	ctx.lr = 0x82A7652C;
	sub_82D30340(ctx, base);
loc_82A7652C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a75d40
	ctx.lr = 0x82A76534;
	sub_82A75D40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a76068
	ctx.lr = 0x82A7653C;
	sub_82A76068(ctx, base);
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

__attribute__((alias("__imp__sub_82A76554"))) PPC_WEAK_FUNC(sub_82A76554);
PPC_FUNC_IMPL(__imp__sub_82A76554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A76558"))) PPC_WEAK_FUNC(sub_82A76558);
PPC_FUNC_IMPL(__imp__sub_82A76558) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8373f5f8
	ctx.lr = 0x82A7657C;
	sub_8373F5F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a765d0
	if (cr6.eq) goto loc_82A765D0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a765d0
	if (cr6.eq) goto loc_82A765D0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82A765A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a765d0
	if (cr6.eq) goto loc_82A765D0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82a765d0
	if (cr6.lt) goto loc_82A765D0;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82a765d4
	if (!cr6.gt) goto loc_82A765D4;
loc_82A765D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A765D4:
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

__attribute__((alias("__imp__sub_82A765EC"))) PPC_WEAK_FUNC(sub_82A765EC);
PPC_FUNC_IMPL(__imp__sub_82A765EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A765F0"))) PPC_WEAK_FUNC(sub_82A765F0);
PPC_FUNC_IMPL(__imp__sub_82A765F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r9,r11,31944
	ctx.r9.s64 = ctx.r11.s64 + 31944;
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
	// bl 0x82be0430
	ctx.lr = 0x82A76628;
	sub_82BE0430(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a76640
	if (cr6.eq) goto loc_82A76640;
	// bl 0x82416268
	ctx.lr = 0x82A7663C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A76640:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A76658"))) PPC_WEAK_FUNC(sub_82A76658);
PPC_FUNC_IMPL(__imp__sub_82A76658) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A76660;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x83763ef8
	ctx.lr = 0x82A7666C;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a76700
	if (cr6.eq) goto loc_82A76700;
	// bl 0x83763ef8
	ctx.lr = 0x82A76678;
	sub_83763EF8(ctx, base);
	// ld r31,160(r3)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r3.u32 + 160);
	// addi r28,r27,108
	ctx.r28.s64 = ctx.r27.s64 + 108;
	// bl 0x83763ef8
	ctx.lr = 0x82A76684;
	sub_83763EF8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83777e50
	ctx.lr = 0x82A76690;
	sub_83777E50(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r26,r27,180
	ctx.r26.s64 = ctx.r27.s64 + 180;
	// addi r11,r11,31848
	ctx.r11.s64 = ctx.r11.s64 + 31848;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
	// li r31,3
	ctx.r31.s64 = 3;
loc_82A766A8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwzu r5,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a76558
	ctx.lr = 0x82A766B8;
	sub_82A76558(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82a766a8
	if (!cr0.eq) goto loc_82A766A8;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,184(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 184);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r9,r11,10,16,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFC00;
	// lwz r8,188(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 188);
	// rlwinm r7,r10,2,24,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFC;
	// rlwinm r6,r8,2,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFC;
	// or r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 | ctx.r6.u64;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// ori r8,r9,255
	ctx.r8.u64 = ctx.r9.u64 | 255;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x82be0600
	ctx.lr = 0x82A76700;
	sub_82BE0600(ctx, base);
loc_82A76700:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A7670C"))) PPC_WEAK_FUNC(sub_82A7670C);
PPC_FUNC_IMPL(__imp__sub_82A7670C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A76710"))) PPC_WEAK_FUNC(sub_82A76710);
PPC_FUNC_IMPL(__imp__sub_82A76710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82A76718;
	__savegprlr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// addi r28,r3,108
	ctx.r28.s64 = ctx.r3.s64 + 108;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r24,r10,31848
	ctx.r24.s64 = ctx.r10.s64 + 31848;
loc_82A76748:
	// lwzx r30,r11,r24
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// blt cr6,0x82a76778
	if (cr6.lt) goto loc_82A76778;
	// beq cr6,0x82a76770
	if (cr6.eq) goto loc_82A76770;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// blt cr6,0x82a76768
	if (cr6.lt) goto loc_82A76768;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// b 0x82a7677c
	goto loc_82A7677C;
loc_82A76768:
	// clrlwi r31,r21,24
	ctx.r31.u64 = ctx.r21.u32 & 0xFF;
	// b 0x82a7677c
	goto loc_82A7677C;
loc_82A76770:
	// clrlwi r31,r22,24
	ctx.r31.u64 = ctx.r22.u32 & 0xFF;
	// b 0x82a7677c
	goto loc_82A7677C;
loc_82A76778:
	// clrlwi r31,r23,24
	ctx.r31.u64 = ctx.r23.u32 & 0xFF;
loc_82A7677C:
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8373f5f8
	ctx.lr = 0x82A76790;
	sub_8373F5F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a767e4
	if (cr6.eq) goto loc_82A767E4;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a767e4
	if (cr6.eq) goto loc_82A767E4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82A767B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a767e4
	if (cr6.eq) goto loc_82A767E4;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82a767e4
	if (cr6.lt) goto loc_82A767E4;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a767e8
	if (!cr6.gt) goto loc_82A767E8;
loc_82A767E4:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82A767E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a76820
	if (cr6.eq) goto loc_82A76820;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x82a76820
	if (cr6.eq) goto loc_82A76820;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825a10c0
	ctx.lr = 0x82A76810;
	sub_825A10C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83744c18
	ctx.lr = 0x82A76818;
	sub_83744C18(ctx, base);
	// or r27,r3,r27
	ctx.r27.u64 = ctx.r3.u64 | ctx.r27.u64;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82A76820:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x82a76748
	if (cr6.lt) goto loc_82A76748;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a768b4
	if (cr6.eq) goto loc_82A768B4;
	// bl 0x83763ef8
	ctx.lr = 0x82A76840;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a76868
	if (cr6.eq) goto loc_82A76868;
	// bl 0x83763ef8
	ctx.lr = 0x82A7684C;
	sub_83763EF8(ctx, base);
	// ld r30,160(r3)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r3.u32 + 160);
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x83763ef8
	ctx.lr = 0x82A76858;
	sub_83763EF8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x83777d88
	ctx.lr = 0x82A76868;
	sub_83777D88(ctx, base);
loc_82A76868:
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// lwz r11,-30536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30536);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a76888
	if (cr6.eq) goto loc_82A76888;
	// addi r3,r11,72
	ctx.r3.s64 = ctx.r11.s64 + 72;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A76888;
	sub_831CE980(ctx, base);
loc_82A76888:
	// bl 0x82bda618
	ctx.lr = 0x82A7688C;
	sub_82BDA618(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a768b4
	if (cr6.eq) goto loc_82A768B4;
	// addi r3,r3,216
	ctx.r3.s64 = ctx.r3.s64 + 216;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A768A8;
	sub_831CE980(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bdaec0
	ctx.lr = 0x82A768B4;
	sub_82BDAEC0(ctx, base);
loc_82A768B4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A768BC"))) PPC_WEAK_FUNC(sub_82A768BC);
PPC_FUNC_IMPL(__imp__sub_82A768BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A768C0"))) PPC_WEAK_FUNC(sub_82A768C0);
PPC_FUNC_IMPL(__imp__sub_82A768C0) {
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
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82be02f8
	ctx.lr = 0x82A768E0;
	sub_82BE02F8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r30,r31,108
	ctx.r30.s64 = ctx.r31.s64 + 108;
	// addi r9,r11,31944
	ctx.r9.s64 = ctx.r11.s64 + 31944;
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
	ctx.lr = 0x82A7690C;
	sub_831CDCF0(ctx, base);
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82A7691C;
	sub_831CDCF0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,180
	ctx.r10.s64 = ctx.r31.s64 + 180;
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A7694C"))) PPC_WEAK_FUNC(sub_82A7694C);
PPC_FUNC_IMPL(__imp__sub_82A7694C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A76950"))) PPC_WEAK_FUNC(sub_82A76950);
PPC_FUNC_IMPL(__imp__sub_82A76950) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// lwz r10,184(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// lwz r9,180(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r4,r9,24
	ctx.r4.u64 = ctx.r9.u32 & 0xFF;
	// b 0x82a76710
	sub_82A76710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A7696C"))) PPC_WEAK_FUNC(sub_82A7696C);
PPC_FUNC_IMPL(__imp__sub_82A7696C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A76970"))) PPC_WEAK_FUNC(sub_82A76970);
PPC_FUNC_IMPL(__imp__sub_82A76970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x82a76998
	if (cr6.lt) goto loc_82A76998;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82a7699c
	goto loc_82A7699C;
loc_82A76998:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82A7699C:
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
	ctx.lr = 0x82A769B8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a769d0
	if (cr6.eq) goto loc_82A769D0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a768c0
	ctx.lr = 0x82A769CC;
	sub_82A768C0(ctx, base);
	// b 0x82a769d4
	goto loc_82A769D4;
loc_82A769D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A769D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A769EC"))) PPC_WEAK_FUNC(sub_82A769EC);
PPC_FUNC_IMPL(__imp__sub_82A769EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A769F0"))) PPC_WEAK_FUNC(sub_82A769F0);
PPC_FUNC_IMPL(__imp__sub_82A769F0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// rlwinm r6,r11,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r5,r10,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r4,r9,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x82a76710
	sub_82A76710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A76A0C"))) PPC_WEAK_FUNC(sub_82A76A0C);
PPC_FUNC_IMPL(__imp__sub_82A76A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A76A10"))) PPC_WEAK_FUNC(sub_82A76A10);
PPC_FUNC_IMPL(__imp__sub_82A76A10) {
	PPC_FUNC_PROLOGUE();
	// lis r3,35
	ctx.r3.s64 = 2293760;
	// ori r3,r3,391
	ctx.r3.u64 = ctx.r3.u64 | 391;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A76A1C"))) PPC_WEAK_FUNC(sub_82A76A1C);
PPC_FUNC_IMPL(__imp__sub_82A76A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A76A20"))) PPC_WEAK_FUNC(sub_82A76A20);
PPC_FUNC_IMPL(__imp__sub_82A76A20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A76A28;
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
	// li r4,200
	ctx.r4.s64 = 200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A76A4C;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a76a88
	if (cr6.eq) goto loc_82A76A88;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82be0ce0
	ctx.lr = 0x82A76A64;
	sub_82BE0CE0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,32600
	ctx.r9.s64 = ctx.r11.s64 + 32600;
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
loc_82A76A88:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A76A94"))) PPC_WEAK_FUNC(sub_82A76A94);
PPC_FUNC_IMPL(__imp__sub_82A76A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A76A98"))) PPC_WEAK_FUNC(sub_82A76A98);
PPC_FUNC_IMPL(__imp__sub_82A76A98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r9,r11,32600
	ctx.r9.s64 = ctx.r11.s64 + 32600;
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
	// bl 0x82be0948
	ctx.lr = 0x82A76AD0;
	sub_82BE0948(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a76ae8
	if (cr6.eq) goto loc_82A76AE8;
	// bl 0x82416268
	ctx.lr = 0x82A76AE4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A76AE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A76B00"))) PPC_WEAK_FUNC(sub_82A76B00);
PPC_FUNC_IMPL(__imp__sub_82A76B00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a76b10
	if (cr6.lt) goto loc_82A76B10;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82A76B10:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82a76a20
	sub_82A76A20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A76B18"))) PPC_WEAK_FUNC(sub_82A76B18);
PPC_FUNC_IMPL(__imp__sub_82A76B18) {
	PPC_FUNC_PROLOGUE();
	// li r3,97
	ctx.r3.s64 = 97;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A76B20"))) PPC_WEAK_FUNC(sub_82A76B20);
PPC_FUNC_IMPL(__imp__sub_82A76B20) {
	PPC_FUNC_PROLOGUE();
	// lis r3,35
	ctx.r3.s64 = 2293760;
	// ori r3,r3,388
	ctx.r3.u64 = ctx.r3.u64 | 388;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A76B2C"))) PPC_WEAK_FUNC(sub_82A76B2C);
PPC_FUNC_IMPL(__imp__sub_82A76B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A76B30"))) PPC_WEAK_FUNC(sub_82A76B30);
PPC_FUNC_IMPL(__imp__sub_82A76B30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A76B38;
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
	// li r4,200
	ctx.r4.s64 = 200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A76B5C;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a76b98
	if (cr6.eq) goto loc_82A76B98;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82be0ce0
	ctx.lr = 0x82A76B74;
	sub_82BE0CE0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-32248
	ctx.r9.s64 = ctx.r11.s64 + -32248;
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
loc_82A76B98:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A76BA4"))) PPC_WEAK_FUNC(sub_82A76BA4);
PPC_FUNC_IMPL(__imp__sub_82A76BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A76BA8"))) PPC_WEAK_FUNC(sub_82A76BA8);
PPC_FUNC_IMPL(__imp__sub_82A76BA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r9,r11,-32248
	ctx.r9.s64 = ctx.r11.s64 + -32248;
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
	// bl 0x82be0948
	ctx.lr = 0x82A76BE0;
	sub_82BE0948(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a76bf8
	if (cr6.eq) goto loc_82A76BF8;
	// bl 0x82416268
	ctx.lr = 0x82A76BF4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A76BF8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A76C10"))) PPC_WEAK_FUNC(sub_82A76C10);
PPC_FUNC_IMPL(__imp__sub_82A76C10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a76c20
	if (cr6.lt) goto loc_82A76C20;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82A76C20:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82a76b30
	sub_82A76B30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A76C28"))) PPC_WEAK_FUNC(sub_82A76C28);
PPC_FUNC_IMPL(__imp__sub_82A76C28) {
	PPC_FUNC_PROLOGUE();
	// li r3,96
	ctx.r3.s64 = 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A76C30"))) PPC_WEAK_FUNC(sub_82A76C30);
PPC_FUNC_IMPL(__imp__sub_82A76C30) {
	PPC_FUNC_PROLOGUE();
	// lis r3,35
	ctx.r3.s64 = 2293760;
	// ori r3,r3,387
	ctx.r3.u64 = ctx.r3.u64 | 387;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A76C3C"))) PPC_WEAK_FUNC(sub_82A76C3C);
PPC_FUNC_IMPL(__imp__sub_82A76C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A76C40"))) PPC_WEAK_FUNC(sub_82A76C40);
PPC_FUNC_IMPL(__imp__sub_82A76C40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A76C48;
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
	// li r4,200
	ctx.r4.s64 = 200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A76C6C;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a76ca8
	if (cr6.eq) goto loc_82A76CA8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82be0ce0
	ctx.lr = 0x82A76C84;
	sub_82BE0CE0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-31560
	ctx.r9.s64 = ctx.r11.s64 + -31560;
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
loc_82A76CA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A76CB4"))) PPC_WEAK_FUNC(sub_82A76CB4);
PPC_FUNC_IMPL(__imp__sub_82A76CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A76CB8"))) PPC_WEAK_FUNC(sub_82A76CB8);
PPC_FUNC_IMPL(__imp__sub_82A76CB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r9,r11,-31560
	ctx.r9.s64 = ctx.r11.s64 + -31560;
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
	// bl 0x82be0948
	ctx.lr = 0x82A76CF0;
	sub_82BE0948(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a76d08
	if (cr6.eq) goto loc_82A76D08;
	// bl 0x82416268
	ctx.lr = 0x82A76D04;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A76D08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A76D20"))) PPC_WEAK_FUNC(sub_82A76D20);
PPC_FUNC_IMPL(__imp__sub_82A76D20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a76d30
	if (cr6.lt) goto loc_82A76D30;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82A76D30:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82a76c40
	sub_82A76C40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A76D38"))) PPC_WEAK_FUNC(sub_82A76D38);
PPC_FUNC_IMPL(__imp__sub_82A76D38) {
	PPC_FUNC_PROLOGUE();
	// lis r3,35
	ctx.r3.s64 = 2293760;
	// ori r3,r3,385
	ctx.r3.u64 = ctx.r3.u64 | 385;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A76D44"))) PPC_WEAK_FUNC(sub_82A76D44);
PPC_FUNC_IMPL(__imp__sub_82A76D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A76D48"))) PPC_WEAK_FUNC(sub_82A76D48);
PPC_FUNC_IMPL(__imp__sub_82A76D48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A76D50;
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
	// li r4,200
	ctx.r4.s64 = 200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A76D74;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a76db0
	if (cr6.eq) goto loc_82A76DB0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82be0ce0
	ctx.lr = 0x82A76D8C;
	sub_82BE0CE0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-30864
	ctx.r9.s64 = ctx.r11.s64 + -30864;
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
loc_82A76DB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A76DBC"))) PPC_WEAK_FUNC(sub_82A76DBC);
PPC_FUNC_IMPL(__imp__sub_82A76DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A76DC0"))) PPC_WEAK_FUNC(sub_82A76DC0);
PPC_FUNC_IMPL(__imp__sub_82A76DC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r9,r11,-30864
	ctx.r9.s64 = ctx.r11.s64 + -30864;
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
	// bl 0x82be0948
	ctx.lr = 0x82A76DF8;
	sub_82BE0948(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a76e10
	if (cr6.eq) goto loc_82A76E10;
	// bl 0x82416268
	ctx.lr = 0x82A76E0C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A76E10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A76E28"))) PPC_WEAK_FUNC(sub_82A76E28);
PPC_FUNC_IMPL(__imp__sub_82A76E28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a76e38
	if (cr6.lt) goto loc_82A76E38;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82A76E38:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82a76d48
	sub_82A76D48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A76E40"))) PPC_WEAK_FUNC(sub_82A76E40);
PPC_FUNC_IMPL(__imp__sub_82A76E40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r9,r11,-30168
	ctx.r9.s64 = ctx.r11.s64 + -30168;
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
	// bl 0x82be0430
	ctx.lr = 0x82A76E78;
	sub_82BE0430(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a76e90
	if (cr6.eq) goto loc_82A76E90;
	// bl 0x82416268
	ctx.lr = 0x82A76E8C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A76E90:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A76EA8"))) PPC_WEAK_FUNC(sub_82A76EA8);
PPC_FUNC_IMPL(__imp__sub_82A76EA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x83763ef8
	ctx.lr = 0x82A76EC4;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a76f0c
	if (cr6.eq) goto loc_82A76F0C;
	// addi r31,r30,108
	ctx.r31.s64 = ctx.r30.s64 + 108;
	// ld r5,160(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 160);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83777e50
	ctx.lr = 0x82A76EDC;
	sub_83777E50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,118
	ctx.r5.s64 = 118;
	// addi r4,r30,180
	ctx.r4.s64 = ctx.r30.s64 + 180;
	// bl 0x82a76558
	ctx.lr = 0x82A76EEC;
	sub_82A76558(ctx, base);
	// li r5,118
	ctx.r5.s64 = 118;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83740288
	ctx.lr = 0x82A76EFC;
	sub_83740288(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82be0600
	ctx.lr = 0x82A76F08;
	sub_82BE0600(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82A76F0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A76F24"))) PPC_WEAK_FUNC(sub_82A76F24);
PPC_FUNC_IMPL(__imp__sub_82A76F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A76F28"))) PPC_WEAK_FUNC(sub_82A76F28);
PPC_FUNC_IMPL(__imp__sub_82A76F28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A76F30;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r3,108
	ctx.r31.s64 = ctx.r3.s64 + 108;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,118
	ctx.r5.s64 = 118;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a76558
	ctx.lr = 0x82A76F54;
	sub_82A76558(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a76f80
	if (cr6.eq) goto loc_82A76F80;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x82a76f80
	if (cr6.eq) goto loc_82A76F80;
	// li r5,118
	ctx.r5.s64 = 118;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a10c0
	ctx.lr = 0x82A76F7C;
	sub_825A10C0(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
loc_82A76F80:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a76ff0
	if (cr6.eq) goto loc_82A76FF0;
	// bl 0x83763ef8
	ctx.lr = 0x82A76F90;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a76fa8
	if (cr6.eq) goto loc_82A76FA8;
	// li r6,1
	ctx.r6.s64 = 1;
	// ld r5,160(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 160);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83777d88
	ctx.lr = 0x82A76FA8;
	sub_83777D88(ctx, base);
loc_82A76FA8:
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// lwz r11,-30536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30536);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a76fc8
	if (cr6.eq) goto loc_82A76FC8;
	// addi r3,r11,72
	ctx.r3.s64 = ctx.r11.s64 + 72;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A76FC8;
	sub_831CE980(ctx, base);
loc_82A76FC8:
	// bl 0x82bda618
	ctx.lr = 0x82A76FCC;
	sub_82BDA618(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a76ff0
	if (cr6.eq) goto loc_82A76FF0;
	// addi r3,r3,216
	ctx.r3.s64 = ctx.r3.s64 + 216;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A76FE8;
	sub_831CE980(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bdb138
	ctx.lr = 0x82A76FF0;
	sub_82BDB138(ctx, base);
loc_82A76FF0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A76FF8"))) PPC_WEAK_FUNC(sub_82A76FF8);
PPC_FUNC_IMPL(__imp__sub_82A76FF8) {
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
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82be02f8
	ctx.lr = 0x82A77018;
	sub_82BE02F8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r30,r31,108
	ctx.r30.s64 = ctx.r31.s64 + 108;
	// addi r9,r11,-30168
	ctx.r9.s64 = ctx.r11.s64 + -30168;
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
	ctx.lr = 0x82A77044;
	sub_831CDCF0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r7,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82A7705C;
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

__attribute__((alias("__imp__sub_82A77078"))) PPC_WEAK_FUNC(sub_82A77078);
PPC_FUNC_IMPL(__imp__sub_82A77078) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x82A77094;
	sub_82BE05E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be0618
	ctx.lr = 0x82A770A0;
	sub_82BE0618(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82a770ac
	if (!cr6.eq) goto loc_82A770AC;
	// lwz r30,180(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
loc_82A770AC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a76f28
	ctx.lr = 0x82A770B8;
	sub_82A76F28(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A770D0"))) PPC_WEAK_FUNC(sub_82A770D0);
PPC_FUNC_IMPL(__imp__sub_82A770D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,180(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// b 0x82a76f28
	sub_82A76F28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A770D8"))) PPC_WEAK_FUNC(sub_82A770D8);
PPC_FUNC_IMPL(__imp__sub_82A770D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x82a77100
	if (cr6.lt) goto loc_82A77100;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82a77104
	goto loc_82A77104;
loc_82A77100:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82A77104:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,184
	ctx.r4.s64 = 184;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A77120;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a77138
	if (cr6.eq) goto loc_82A77138;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a76ff8
	ctx.lr = 0x82A77134;
	sub_82A76FF8(ctx, base);
	// b 0x82a7713c
	goto loc_82A7713C;
loc_82A77138:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A7713C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A77154"))) PPC_WEAK_FUNC(sub_82A77154);
PPC_FUNC_IMPL(__imp__sub_82A77154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A77158"))) PPC_WEAK_FUNC(sub_82A77158);
PPC_FUNC_IMPL(__imp__sub_82A77158) {
	PPC_FUNC_PROLOGUE();
	// li r3,86
	ctx.r3.s64 = 86;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A77160"))) PPC_WEAK_FUNC(sub_82A77160);
PPC_FUNC_IMPL(__imp__sub_82A77160) {
	PPC_FUNC_PROLOGUE();
	// lis r3,35
	ctx.r3.s64 = 2293760;
	// ori r3,r3,297
	ctx.r3.u64 = ctx.r3.u64 | 297;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A7716C"))) PPC_WEAK_FUNC(sub_82A7716C);
PPC_FUNC_IMPL(__imp__sub_82A7716C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A77170"))) PPC_WEAK_FUNC(sub_82A77170);
PPC_FUNC_IMPL(__imp__sub_82A77170) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A77178;
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
	// li r4,200
	ctx.r4.s64 = 200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A7719C;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a771d8
	if (cr6.eq) goto loc_82A771D8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82be0ce0
	ctx.lr = 0x82A771B4;
	sub_82BE0CE0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-29512
	ctx.r9.s64 = ctx.r11.s64 + -29512;
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
loc_82A771D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A771E4"))) PPC_WEAK_FUNC(sub_82A771E4);
PPC_FUNC_IMPL(__imp__sub_82A771E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A771E8"))) PPC_WEAK_FUNC(sub_82A771E8);
PPC_FUNC_IMPL(__imp__sub_82A771E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r9,r11,-29512
	ctx.r9.s64 = ctx.r11.s64 + -29512;
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
	// bl 0x82be0948
	ctx.lr = 0x82A77220;
	sub_82BE0948(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a77238
	if (cr6.eq) goto loc_82A77238;
	// bl 0x82416268
	ctx.lr = 0x82A77234;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A77238:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A77250"))) PPC_WEAK_FUNC(sub_82A77250);
PPC_FUNC_IMPL(__imp__sub_82A77250) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a77260
	if (cr6.lt) goto loc_82A77260;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82A77260:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82a77170
	sub_82A77170(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A77268"))) PPC_WEAK_FUNC(sub_82A77268);
PPC_FUNC_IMPL(__imp__sub_82A77268) {
	PPC_FUNC_PROLOGUE();
	// li r3,85
	ctx.r3.s64 = 85;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A77270"))) PPC_WEAK_FUNC(sub_82A77270);
PPC_FUNC_IMPL(__imp__sub_82A77270) {
	PPC_FUNC_PROLOGUE();
	// lis r3,35
	ctx.r3.s64 = 2293760;
	// ori r3,r3,381
	ctx.r3.u64 = ctx.r3.u64 | 381;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A7727C"))) PPC_WEAK_FUNC(sub_82A7727C);
PPC_FUNC_IMPL(__imp__sub_82A7727C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A77280"))) PPC_WEAK_FUNC(sub_82A77280);
PPC_FUNC_IMPL(__imp__sub_82A77280) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A77288;
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
	// li r4,200
	ctx.r4.s64 = 200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A772AC;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a772e8
	if (cr6.eq) goto loc_82A772E8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82be0ce0
	ctx.lr = 0x82A772C4;
	sub_82BE0CE0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-28824
	ctx.r9.s64 = ctx.r11.s64 + -28824;
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
loc_82A772E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A772F4"))) PPC_WEAK_FUNC(sub_82A772F4);
PPC_FUNC_IMPL(__imp__sub_82A772F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A772F8"))) PPC_WEAK_FUNC(sub_82A772F8);
PPC_FUNC_IMPL(__imp__sub_82A772F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r9,r11,-28824
	ctx.r9.s64 = ctx.r11.s64 + -28824;
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
	// bl 0x82be0948
	ctx.lr = 0x82A77330;
	sub_82BE0948(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a77348
	if (cr6.eq) goto loc_82A77348;
	// bl 0x82416268
	ctx.lr = 0x82A77344;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A77348:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A77360"))) PPC_WEAK_FUNC(sub_82A77360);
PPC_FUNC_IMPL(__imp__sub_82A77360) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a77370
	if (cr6.lt) goto loc_82A77370;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82A77370:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82a77280
	sub_82A77280(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A77378"))) PPC_WEAK_FUNC(sub_82A77378);
PPC_FUNC_IMPL(__imp__sub_82A77378) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r9,r11,-28120
	ctx.r9.s64 = ctx.r11.s64 + -28120;
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
	// bl 0x82be0430
	ctx.lr = 0x82A773B0;
	sub_82BE0430(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a773c8
	if (cr6.eq) goto loc_82A773C8;
	// bl 0x82416268
	ctx.lr = 0x82A773C4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A773C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A773E0"))) PPC_WEAK_FUNC(sub_82A773E0);
PPC_FUNC_IMPL(__imp__sub_82A773E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A773E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x83763ef8
	ctx.lr = 0x82A773F4;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a77498
	if (cr6.eq) goto loc_82A77498;
	// bl 0x83763ef8
	ctx.lr = 0x82A77400;
	sub_83763EF8(ctx, base);
	// ld r31,160(r3)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r3.u32 + 160);
	// addi r29,r26,108
	ctx.r29.s64 = ctx.r26.s64 + 108;
	// bl 0x83763ef8
	ctx.lr = 0x82A7740C;
	sub_83763EF8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83777e50
	ctx.lr = 0x82A77418;
	sub_83777E50(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r11,r11,-28216
	ctx.r11.s64 = ctx.r11.s64 + -28216;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// addi r28,r26,180
	ctx.r28.s64 = ctx.r26.s64 + 180;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_82A77430:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzu r5,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x82a76558
	ctx.lr = 0x82A77444;
	sub_82A76558(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stbx r10,r28,r31
	PPC_STORE_U8(ctx.r28.u32 + ctx.r31.u32, ctx.r10.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x82a77430
	if (cr6.lt) goto loc_82A77430;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lbz r10,181(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 181);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// rlwinm r9,r11,10,16,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFC00;
	// lbz r8,182(r26)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r26.u32 + 182);
	// rlwinm r7,r10,2,24,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFC;
	// rlwinm r6,r8,2,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFC;
	// or r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 | ctx.r6.u64;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// ori r8,r9,255
	ctx.r8.u64 = ctx.r9.u64 | 255;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// bl 0x82be0600
	ctx.lr = 0x82A77498;
	sub_82BE0600(ctx, base);
loc_82A77498:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A774A4"))) PPC_WEAK_FUNC(sub_82A774A4);
PPC_FUNC_IMPL(__imp__sub_82A774A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A774A8"))) PPC_WEAK_FUNC(sub_82A774A8);
PPC_FUNC_IMPL(__imp__sub_82A774A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82A774B0;
	__savegprlr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// addi r28,r3,108
	ctx.r28.s64 = ctx.r3.s64 + 108;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r24,r10,-28216
	ctx.r24.s64 = ctx.r10.s64 + -28216;
loc_82A774E0:
	// lwzx r30,r11,r24
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// blt cr6,0x82a77510
	if (cr6.lt) goto loc_82A77510;
	// beq cr6,0x82a77508
	if (cr6.eq) goto loc_82A77508;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// blt cr6,0x82a77500
	if (cr6.lt) goto loc_82A77500;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// b 0x82a77514
	goto loc_82A77514;
loc_82A77500:
	// clrlwi r31,r21,24
	ctx.r31.u64 = ctx.r21.u32 & 0xFF;
	// b 0x82a77514
	goto loc_82A77514;
loc_82A77508:
	// clrlwi r31,r22,24
	ctx.r31.u64 = ctx.r22.u32 & 0xFF;
	// b 0x82a77514
	goto loc_82A77514;
loc_82A77510:
	// clrlwi r31,r23,24
	ctx.r31.u64 = ctx.r23.u32 & 0xFF;
loc_82A77514:
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8373f5f8
	ctx.lr = 0x82A77528;
	sub_8373F5F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a7757c
	if (cr6.eq) goto loc_82A7757C;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a7757c
	if (cr6.eq) goto loc_82A7757C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82A77550;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a7757c
	if (cr6.eq) goto loc_82A7757C;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82a7757c
	if (cr6.lt) goto loc_82A7757C;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a77580
	if (!cr6.gt) goto loc_82A77580;
loc_82A7757C:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82A77580:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a775b8
	if (cr6.eq) goto loc_82A775B8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x82a775b8
	if (cr6.eq) goto loc_82A775B8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825a10c0
	ctx.lr = 0x82A775A8;
	sub_825A10C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83744c18
	ctx.lr = 0x82A775B0;
	sub_83744C18(ctx, base);
	// or r27,r3,r27
	ctx.r27.u64 = ctx.r3.u64 | ctx.r27.u64;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82A775B8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x82a774e0
	if (cr6.lt) goto loc_82A774E0;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a77664
	if (cr6.eq) goto loc_82A77664;
	// bl 0x83763ef8
	ctx.lr = 0x82A775D8;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a77600
	if (cr6.eq) goto loc_82A77600;
	// bl 0x83763ef8
	ctx.lr = 0x82A775E4;
	sub_83763EF8(ctx, base);
	// ld r30,160(r3)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r3.u32 + 160);
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x83763ef8
	ctx.lr = 0x82A775F0;
	sub_83763EF8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x83777d88
	ctx.lr = 0x82A77600;
	sub_83777D88(ctx, base);
loc_82A77600:
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// lwz r11,-30536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30536);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a77620
	if (cr6.eq) goto loc_82A77620;
	// addi r3,r11,72
	ctx.r3.s64 = ctx.r11.s64 + 72;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A77620;
	sub_831CE980(ctx, base);
loc_82A77620:
	// bl 0x82bda618
	ctx.lr = 0x82A77624;
	sub_82BDA618(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a77664
	if (cr6.eq) goto loc_82A77664;
	// addi r3,r3,216
	ctx.r3.s64 = ctx.r3.s64 + 216;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A77640;
	sub_831CE980(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd9db8
	ctx.lr = 0x82A7764C;
	sub_82BD9DB8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bdaec0
	ctx.lr = 0x82A77658;
	sub_82BDAEC0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd9db8
	ctx.lr = 0x82A77664;
	sub_82BD9DB8(ctx, base);
loc_82A77664:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A7766C"))) PPC_WEAK_FUNC(sub_82A7766C);
PPC_FUNC_IMPL(__imp__sub_82A7766C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A77670"))) PPC_WEAK_FUNC(sub_82A77670);
PPC_FUNC_IMPL(__imp__sub_82A77670) {
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
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82be02f8
	ctx.lr = 0x82A77690;
	sub_82BE02F8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r30,r31,108
	ctx.r30.s64 = ctx.r31.s64 + 108;
	// addi r9,r11,-28120
	ctx.r9.s64 = ctx.r11.s64 + -28120;
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
	ctx.lr = 0x82A776BC;
	sub_831CDCF0(ctx, base);
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82A776CC;
	sub_831CDCF0(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r31,180
	ctx.r9.s64 = ctx.r31.s64 + 180;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A776E0:
	// stbx r8,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82a776e0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A776E0;
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

__attribute__((alias("__imp__sub_82A77708"))) PPC_WEAK_FUNC(sub_82A77708);
PPC_FUNC_IMPL(__imp__sub_82A77708) {
	PPC_FUNC_PROLOGUE();
	// lbz r6,182(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 182);
	// lbz r5,181(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 181);
	// lbz r4,180(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 180);
	// b 0x82a774a8
	sub_82A774A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A77718"))) PPC_WEAK_FUNC(sub_82A77718);
PPC_FUNC_IMPL(__imp__sub_82A77718) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x82a77740
	if (cr6.lt) goto loc_82A77740;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82a77744
	goto loc_82A77744;
loc_82A77740:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82A77744:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,184
	ctx.r4.s64 = 184;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A77760;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a77778
	if (cr6.eq) goto loc_82A77778;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a77670
	ctx.lr = 0x82A77774;
	sub_82A77670(ctx, base);
	// b 0x82a7777c
	goto loc_82A7777C;
loc_82A77778:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A7777C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A77794"))) PPC_WEAK_FUNC(sub_82A77794);
PPC_FUNC_IMPL(__imp__sub_82A77794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A77798"))) PPC_WEAK_FUNC(sub_82A77798);
PPC_FUNC_IMPL(__imp__sub_82A77798) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// rlwinm r6,r11,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r5,r10,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r4,r9,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x82a774a8
	sub_82A774A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A777B4"))) PPC_WEAK_FUNC(sub_82A777B4);
PPC_FUNC_IMPL(__imp__sub_82A777B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A777B8"))) PPC_WEAK_FUNC(sub_82A777B8);
PPC_FUNC_IMPL(__imp__sub_82A777B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,90
	ctx.r3.s64 = 90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A777C0"))) PPC_WEAK_FUNC(sub_82A777C0);
PPC_FUNC_IMPL(__imp__sub_82A777C0) {
	PPC_FUNC_PROLOGUE();
	// lis r3,35
	ctx.r3.s64 = 2293760;
	// ori r3,r3,427
	ctx.r3.u64 = ctx.r3.u64 | 427;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A777CC"))) PPC_WEAK_FUNC(sub_82A777CC);
PPC_FUNC_IMPL(__imp__sub_82A777CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A777D0"))) PPC_WEAK_FUNC(sub_82A777D0);
PPC_FUNC_IMPL(__imp__sub_82A777D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A777D8;
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
	// li r4,200
	ctx.r4.s64 = 200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A777FC;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a77838
	if (cr6.eq) goto loc_82A77838;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82be0ce0
	ctx.lr = 0x82A77814;
	sub_82BE0CE0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-27464
	ctx.r9.s64 = ctx.r11.s64 + -27464;
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
loc_82A77838:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A77844"))) PPC_WEAK_FUNC(sub_82A77844);
PPC_FUNC_IMPL(__imp__sub_82A77844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A77848"))) PPC_WEAK_FUNC(sub_82A77848);
PPC_FUNC_IMPL(__imp__sub_82A77848) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r9,r11,-27464
	ctx.r9.s64 = ctx.r11.s64 + -27464;
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
	// bl 0x82be0948
	ctx.lr = 0x82A77880;
	sub_82BE0948(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a77898
	if (cr6.eq) goto loc_82A77898;
	// bl 0x82416268
	ctx.lr = 0x82A77894;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A77898:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A778B0"))) PPC_WEAK_FUNC(sub_82A778B0);
PPC_FUNC_IMPL(__imp__sub_82A778B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a778c0
	if (cr6.lt) goto loc_82A778C0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82A778C0:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82a777d0
	sub_82A777D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A778C8"))) PPC_WEAK_FUNC(sub_82A778C8);
PPC_FUNC_IMPL(__imp__sub_82A778C8) {
	PPC_FUNC_PROLOGUE();
	// lis r3,35
	ctx.r3.s64 = 2293760;
	// ori r3,r3,366
	ctx.r3.u64 = ctx.r3.u64 | 366;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A778D4"))) PPC_WEAK_FUNC(sub_82A778D4);
PPC_FUNC_IMPL(__imp__sub_82A778D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A778D8"))) PPC_WEAK_FUNC(sub_82A778D8);
PPC_FUNC_IMPL(__imp__sub_82A778D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A778E0;
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
	// li r4,200
	ctx.r4.s64 = 200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A77904;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a77940
	if (cr6.eq) goto loc_82A77940;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82be0ce0
	ctx.lr = 0x82A7791C;
	sub_82BE0CE0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-26776
	ctx.r9.s64 = ctx.r11.s64 + -26776;
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
loc_82A77940:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A7794C"))) PPC_WEAK_FUNC(sub_82A7794C);
PPC_FUNC_IMPL(__imp__sub_82A7794C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A77950"))) PPC_WEAK_FUNC(sub_82A77950);
PPC_FUNC_IMPL(__imp__sub_82A77950) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r9,r11,-26776
	ctx.r9.s64 = ctx.r11.s64 + -26776;
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
	// bl 0x82be0948
	ctx.lr = 0x82A77988;
	sub_82BE0948(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a779a0
	if (cr6.eq) goto loc_82A779A0;
	// bl 0x82416268
	ctx.lr = 0x82A7799C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A779A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A779B8"))) PPC_WEAK_FUNC(sub_82A779B8);
PPC_FUNC_IMPL(__imp__sub_82A779B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a779c8
	if (cr6.lt) goto loc_82A779C8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82A779C8:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82a778d8
	sub_82A778D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A779D0"))) PPC_WEAK_FUNC(sub_82A779D0);
PPC_FUNC_IMPL(__imp__sub_82A779D0) {
	PPC_FUNC_PROLOGUE();
	// lis r3,35
	ctx.r3.s64 = 2293760;
	// ori r3,r3,207
	ctx.r3.u64 = ctx.r3.u64 | 207;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A779DC"))) PPC_WEAK_FUNC(sub_82A779DC);
PPC_FUNC_IMPL(__imp__sub_82A779DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A779E0"))) PPC_WEAK_FUNC(sub_82A779E0);
PPC_FUNC_IMPL(__imp__sub_82A779E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A779E8;
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
	// li r4,200
	ctx.r4.s64 = 200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A77A0C;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a77a48
	if (cr6.eq) goto loc_82A77A48;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82be0ce0
	ctx.lr = 0x82A77A24;
	sub_82BE0CE0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-26088
	ctx.r9.s64 = ctx.r11.s64 + -26088;
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
loc_82A77A48:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A77A54"))) PPC_WEAK_FUNC(sub_82A77A54);
PPC_FUNC_IMPL(__imp__sub_82A77A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A77A58"))) PPC_WEAK_FUNC(sub_82A77A58);
PPC_FUNC_IMPL(__imp__sub_82A77A58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r9,r11,-26088
	ctx.r9.s64 = ctx.r11.s64 + -26088;
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
	// bl 0x82be0948
	ctx.lr = 0x82A77A90;
	sub_82BE0948(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a77aa8
	if (cr6.eq) goto loc_82A77AA8;
	// bl 0x82416268
	ctx.lr = 0x82A77AA4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A77AA8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

