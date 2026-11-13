#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83A540E0"))) PPC_WEAK_FUNC(sub_83A540E0);
PPC_FUNC_IMPL(__imp__sub_83A540E0) {
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
	// lis r10,-31741
	ctx.r10.s64 = -2080178176;
	// lwz r11,-10656(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10656);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,-10656(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10656, ctx.r11.u32);
	// bgt 0x83a54170
	if (cr0.gt) goto loc_83A54170;
	// bl 0x83a82cd8
	ctx.lr = 0x83A54108;
	sub_83A82CD8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a54154
	if (!cr6.eq) goto loc_83A54154;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83a82e08
	ctx.lr = 0x83A5411C;
	sub_83A82E08(ctx, base);
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r31,r11,-16772
	ctx.r31.s64 = ctx.r11.s64 + -16772;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a761b8
	ctx.lr = 0x83A54130;
	sub_83A761B8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a54154
	if (cr6.eq) goto loc_83A54154;
loc_83A54138:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83a75e98
	ctx.lr = 0x83A54140;
	sub_83A75E98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83a761b8
	ctx.lr = 0x83A5414C;
	sub_83A761B8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a54138
	if (!cr6.eq) goto loc_83A54138;
loc_83A54154:
	// lis r31,-31741
	ctx.r31.s64 = -2080178176;
	// lwz r3,-10732(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10732);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a54170
	if (cr6.eq) goto loc_83A54170;
	// bl 0x83a75c60
	ctx.lr = 0x83A54168;
	sub_83A75C60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-10732(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10732, ctx.r11.u32);
loc_83A54170:
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

__attribute__((alias("__imp__sub_83A54184"))) PPC_WEAK_FUNC(sub_83A54184);
PPC_FUNC_IMPL(__imp__sub_83A54184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A54188"))) PPC_WEAK_FUNC(sub_83A54188);
PPC_FUNC_IMPL(__imp__sub_83A54188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fdivs f13,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 / ctx.f2.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,3
	ctx.r10.s64 = 3;
	// lfs f0,-10804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10804);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// divwu r11,r9,r10
	ctx.r11.u32 = PPCDivide(ctx.r9.u32, ctx.r10.u32);
	// addi r8,r11,7
	ctx.r8.s64 = ctx.r11.s64 + 7;
	// rlwinm r3,r8,0,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A541B8"))) PPC_WEAK_FUNC(sub_83A541B8);
PPC_FUNC_IMPL(__imp__sub_83A541B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83A541C0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r24,r11,-16772
	ctx.r24.s64 = ctx.r11.s64 + -16772;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83a761b8
	ctx.lr = 0x83A541D8;
	sub_83A761B8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a542e8
	if (!cr6.eq) goto loc_83A542E8;
	// lis r25,-31741
	ctx.r25.s64 = -2080178176;
	// lwz r3,-10732(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -10732);
	// bl 0x83a75cd8
	ctx.lr = 0x83A541EC;
	sub_83A75CD8(ctx, base);
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// addi r31,r11,-10652
	ctx.r31.s64 = ctx.r11.s64 + -10652;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a542d4
	if (!cr6.gt) goto loc_83A542D4;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
loc_83A5420C:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a54244
	if (cr6.eq) goto loc_83A54244;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne cr6,0x83a54234
	if (!cr6.eq) goto loc_83A54234;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
loc_83A54234:
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r27.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_83A54244:
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x83a75cd8
	ctx.lr = 0x83A54250;
	sub_83A75CD8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A54264;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a5428c
	if (!cr6.eq) goto loc_83A5428C;
	// li r29,3
	ctx.r29.s64 = 3;
loc_83A54270:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A54284;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne 0x83a54270
	if (!cr0.eq) goto loc_83A54270;
loc_83A5428C:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x83a75d58
	ctx.lr = 0x83A54294;
	sub_83A75D58(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a542ac
	if (!cr6.eq) goto loc_83A542AC;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x83a542bc
	goto loc_83A542BC;
loc_83A542AC:
	// stw r27,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r27.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_83A542BC:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bne 0x83a5420c
	if (!cr0.eq) goto loc_83A5420C;
loc_83A542D4:
	// lwz r3,-10732(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -10732);
	// bl 0x83a75d58
	ctx.lr = 0x83A542DC;
	sub_83A75D58(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a761b8
	ctx.lr = 0x83A542E8;
	sub_83A761B8(ctx, base);
loc_83A542E8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A542F0"))) PPC_WEAK_FUNC(sub_83A542F0);
PPC_FUNC_IMPL(__imp__sub_83A542F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A542F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83A5431C;
	sub_831EA7A0(ctx, base);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// lwz r10,388(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 388);
	// lwz r11,384(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// divw r8,r11,r10
	ctx.r8.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// andc r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// twllei r10,0
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// twlgei r7,-1
	// ble cr6,0x83a5435c
	if (!cr6.gt) goto loc_83A5435C;
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// twllei r10,0
	// divwu r10,r11,r10
	ctx.r10.u32 = PPCDivide(ctx.r11.u32, ctx.r10.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x83a54360
	goto loc_83A54360;
loc_83A5435C:
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
loc_83A54360:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// lfs f0,24504(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24504);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lwz r10,416(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 416);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// bl 0x83a761e0
	ctx.lr = 0x83A5437C;
	sub_83A761E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a5438c
	if (cr6.eq) goto loc_83A5438C;
	// bl 0x83a763f8
	ctx.lr = 0x83A54388;
	sub_83A763F8(ctx, base);
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_83A5438C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A54394"))) PPC_WEAK_FUNC(sub_83A54394);
PPC_FUNC_IMPL(__imp__sub_83A54394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A54398"))) PPC_WEAK_FUNC(sub_83A54398);
PPC_FUNC_IMPL(__imp__sub_83A54398) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A543A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r3,336
	ctx.r31.s64 = ctx.r3.s64 + 336;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a54450
	if (cr6.eq) goto loc_83A54450;
	// lis r29,-31741
	ctx.r29.s64 = -2080178176;
	// lwz r3,-10732(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10732);
	// bl 0x83a75cd8
	ctx.lr = 0x83A543C8;
	sub_83A75CD8(ctx, base);
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// addi r11,r11,-10652
	ctx.r11.s64 = ctx.r11.s64 + -10652;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x83a543f4
	if (!cr6.eq) goto loc_83A543F4;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bne cr6,0x83a54434
	if (!cr6.eq) goto loc_83A54434;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x83a54430
	goto loc_83A54430;
loc_83A543F4:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a54434
	if (cr6.eq) goto loc_83A54434;
loc_83A543FC:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// beq cr6,0x83a54418
	if (cr6.eq) goto loc_83A54418;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83a543fc
	if (!cr6.eq) goto loc_83A543FC;
	// b 0x83a54434
	goto loc_83A54434;
loc_83A54418:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// bne cr6,0x83a54434
	if (!cr6.eq) goto loc_83A54434;
loc_83A54430:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_83A54434:
	// stw r28,340(r30)
	PPC_STORE_U32(ctx.r30.u32 + 340, ctx.r28.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// lwz r3,-10732(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10732);
	// bl 0x83a75d58
	ctx.lr = 0x83A54450;
	sub_83A75D58(ctx, base);
loc_83A54450:
	// lwz r3,424(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 424);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a54474
	if (cr6.eq) goto loc_83A54474;
	// bl 0x83102db0
	ctx.lr = 0x83A54460;
	sub_83102DB0(ctx, base);
	// lwz r4,428(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// bl 0x83a78a48
	ctx.lr = 0x83A5446C;
	sub_83A78A48(ctx, base);
	// stw r28,424(r30)
	PPC_STORE_U32(ctx.r30.u32 + 424, ctx.r28.u32);
	// stw r28,428(r30)
	PPC_STORE_U32(ctx.r30.u32 + 428, ctx.r28.u32);
loc_83A54474:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a54488
	if (cr6.eq) goto loc_83A54488;
	// bl 0x83a75c60
	ctx.lr = 0x83A54484;
	sub_83A75C60(ctx, base);
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
loc_83A54488:
	// addi r31,r30,256
	ctx.r31.s64 = ctx.r30.s64 + 256;
	// li r29,3
	ctx.r29.s64 = 3;
loc_83A54490:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a544a4
	if (cr6.eq) goto loc_83A544A4;
	// bl 0x83a7a230
	ctx.lr = 0x83A544A0;
	sub_83A7A230(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_83A544A4:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x83a54490
	if (!cr0.eq) goto loc_83A54490;
	// lwz r3,268(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a544c4
	if (cr6.eq) goto loc_83A544C4;
	// bl 0x83102db0
	ctx.lr = 0x83A544C0;
	sub_83102DB0(ctx, base);
	// stw r28,268(r30)
	PPC_STORE_U32(ctx.r30.u32 + 268, ctx.r28.u32);
loc_83A544C4:
	// lwz r4,368(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 368);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a544dc
	if (cr6.eq) goto loc_83A544DC;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// bl 0x83a78a48
	ctx.lr = 0x83A544D8;
	sub_83A78A48(ctx, base);
	// stw r28,368(r30)
	PPC_STORE_U32(ctx.r30.u32 + 368, ctx.r28.u32);
loc_83A544DC:
	// lwz r3,328(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a544f0
	if (cr6.eq) goto loc_83A544F0;
	// bl 0x83a9fe30
	ctx.lr = 0x83A544EC;
	sub_83A9FE30(ctx, base);
	// stw r28,328(r30)
	PPC_STORE_U32(ctx.r30.u32 + 328, ctx.r28.u32);
loc_83A544F0:
	// lwz r4,332(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a54508
	if (cr6.eq) goto loc_83A54508;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// bl 0x83a78a48
	ctx.lr = 0x83A54504;
	sub_83A78A48(ctx, base);
	// stw r28,332(r30)
	PPC_STORE_U32(ctx.r30.u32 + 332, ctx.r28.u32);
loc_83A54508:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A54510"))) PPC_WEAK_FUNC(sub_83A54510);
PPC_FUNC_IMPL(__imp__sub_83A54510) {
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
	// lwz r3,328(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a5455c
	if (cr6.eq) goto loc_83A5455C;
	// bl 0x83a9ff60
	ctx.lr = 0x83A5452C;
	sub_83A9FF60(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a5455c
	if (cr6.eq) goto loc_83A5455C;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x83a5455c
	if (cr6.eq) goto loc_83A5455C;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
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
loc_83A5455C:
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

__attribute__((alias("__imp__sub_83A54570"))) PPC_WEAK_FUNC(sub_83A54570);
PPC_FUNC_IMPL(__imp__sub_83A54570) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83A54578;
	__savegprlr_24(ctx, base);
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,424(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// std r4,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r4.u64);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x83a56f00
	ctx.lr = 0x83A545A4;
	sub_83A56F00(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x83a56f38
	ctx.lr = 0x83A545B4;
	sub_83A56F38(ctx, base);
	// extsw r10,r29
	ctx.r10.s64 = ctx.r29.s32;
	// lfd f0,216(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// ld r11,432(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 432);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// ld r24,88(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// ld r25,96(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// add r30,r11,r24
	ctx.r30.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r30,432(r31)
	PPC_STORE_U64(ctx.r31.u32 + 432, ctx.r30.u64);
	// std r25,440(r31)
	PPC_STORE_U64(ctx.r31.u32 + 440, ctx.r25.u64);
	// fdivs f31,f10,f9
	ctx.f31.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// bl 0x831ce710
	ctx.lr = 0x83A545F8;
	sub_831CE710(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// bl 0x831ce710
	ctx.lr = 0x83A54604;
	sub_831CE710(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// fdivs f0,f30,f8
	ctx.f0.f64 = double(float(ctx.f30.f64 / ctx.f8.f64));
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x83a54638
	if (!cr6.gt) goto loc_83A54638;
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// std r26,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r26.u64);
	// std r11,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r11.u64);
	// tdllei r11,0
	// ld r10,440(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 440);
	// mulld r9,r10,r26
	ctx.r9.s64 = ctx.r10.s64 * ctx.r26.s64;
	// divdu r8,r9,r11
	ctx.r8.u64 = PPCDivide(ctx.r9.u64, ctx.r11.u64);
	// std r8,432(r31)
	PPC_STORE_U64(ctx.r31.u32 + 432, ctx.r8.u64);
	// b 0x83a54670
	goto loc_83A54670;
loc_83A54638:
	// fsubs f13,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lfs f0,-15828(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15828);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x83a5465c
	if (!cr6.lt) goto loc_83A5465C;
	// std r30,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r30.u64);
	// ld r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 440);
	// std r11,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r11.u64);
	// b 0x83a54670
	goto loc_83A54670;
loc_83A5465C:
	// subf r11,r24,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r24.s64;
	// std r11,432(r31)
	PPC_STORE_U64(ctx.r31.u32 + 432, ctx.r11.u64);
	// std r11,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r11.u64);
	// ld r10,440(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 440);
	// std r10,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r10.u64);
loc_83A54670:
	// lwz r3,424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// bl 0x83a56ec8
	ctx.lr = 0x83A54678;
	sub_83A56EC8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A54688"))) PPC_WEAK_FUNC(sub_83A54688);
PPC_FUNC_IMPL(__imp__sub_83A54688) {
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
	// lwz r11,328(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a546e8
	if (cr6.eq) goto loc_83A546E8;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x83a75cd8
	ctx.lr = 0x83A546B0;
	sub_83A75CD8(ctx, base);
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a546c8
	if (!cr6.eq) goto loc_83A546C8;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// bl 0x83a9ff48
	ctx.lr = 0x83A546C8;
	sub_83A9FF48(ctx, base);
loc_83A546C8:
	// lwz r3,328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// bl 0x83a9ff10
	ctx.lr = 0x83A546D0;
	sub_83A9FF10(ctx, base);
	// lwz r3,424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// bl 0x83a56ec8
	ctx.lr = 0x83A546D8;
	sub_83A56EC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// std r11,360(r31)
	PPC_STORE_U64(ctx.r31.u32 + 360, ctx.r11.u64);
	// bl 0x83a75d58
	ctx.lr = 0x83A546E8;
	sub_83A75D58(ctx, base);
loc_83A546E8:
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

__attribute__((alias("__imp__sub_83A546FC"))) PPC_WEAK_FUNC(sub_83A546FC);
PPC_FUNC_IMPL(__imp__sub_83A546FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A54700"))) PPC_WEAK_FUNC(sub_83A54700);
PPC_FUNC_IMPL(__imp__sub_83A54700) {
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
	// lwz r11,328(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a5474c
	if (cr6.eq) goto loc_83A5474C;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x83a75cd8
	ctx.lr = 0x83A54728;
	sub_83A75CD8(ctx, base);
	// lwz r3,328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// bl 0x83a9ff20
	ctx.lr = 0x83A54730;
	sub_83A9FF20(ctx, base);
	// lwz r3,424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// bl 0x83a56f00
	ctx.lr = 0x83A54738;
	sub_83A56F00(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// std r11,360(r31)
	PPC_STORE_U64(ctx.r31.u32 + 360, ctx.r11.u64);
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// bl 0x83a75d58
	ctx.lr = 0x83A5474C;
	sub_83A75D58(ctx, base);
loc_83A5474C:
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

__attribute__((alias("__imp__sub_83A54760"))) PPC_WEAK_FUNC(sub_83A54760);
PPC_FUNC_IMPL(__imp__sub_83A54760) {
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
	// lwz r11,328(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a54804
	if (cr6.eq) goto loc_83A54804;
	// lwz r11,352(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// beq cr6,0x83a54804
	if (cr6.eq) goto loc_83A54804;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A547A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a54800
	if (!cr6.eq) goto loc_83A54800;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83a75cd8
	ctx.lr = 0x83A547B4;
	sub_83A75CD8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// bl 0x83a9ff48
	ctx.lr = 0x83A547C0;
	sub_83A9FF48(ctx, base);
	// lwz r3,424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x83a547f4
	if (!cr6.eq) goto loc_83A547F4;
	// bl 0x83a56f00
	ctx.lr = 0x83A547D0;
	sub_83A56F00(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// bl 0x83a56f38
	ctx.lr = 0x83A547E0;
	sub_83A56F38(ctx, base);
	// ld r11,432(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 432);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,432(r31)
	PPC_STORE_U64(ctx.r31.u32 + 432, ctx.r11.u64);
	// b 0x83a547f8
	goto loc_83A547F8;
loc_83A547F4:
	// bl 0x83a56ec8
	ctx.lr = 0x83A547F8;
	sub_83A56EC8(ctx, base);
loc_83A547F8:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83a75d58
	ctx.lr = 0x83A54800;
	sub_83A75D58(ctx, base);
loc_83A54800:
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
loc_83A54804:
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

__attribute__((alias("__imp__sub_83A5481C"))) PPC_WEAK_FUNC(sub_83A5481C);
PPC_FUNC_IMPL(__imp__sub_83A5481C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A54820"))) PPC_WEAK_FUNC(sub_83A54820);
PPC_FUNC_IMPL(__imp__sub_83A54820) {
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
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fsel f31,f1,f1,f0
	ctx.f31.f64 = ctx.f1.f64 >= 0.0 ? ctx.f1.f64 : ctx.f0.f64;
	// lfs f0,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x83a54858
	if (!cr6.gt) goto loc_83A54858;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_83A54858:
	// lwz r3,328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a5486c
	if (cr6.eq) goto loc_83A5486C;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83a9fff8
	ctx.lr = 0x83A5486C;
	sub_83A9FFF8(ctx, base);
loc_83A5486C:
	// stfs f31,392(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 392, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A54888"))) PPC_WEAK_FUNC(sub_83A54888);
PPC_FUNC_IMPL(__imp__sub_83A54888) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,328(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a5489c
	if (cr6.eq) goto loc_83A5489C;
	// b 0x82882338
	sub_82882338(ctx, base);
	return;
loc_83A5489C:
	// lfs f1,392(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 392);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A548A4"))) PPC_WEAK_FUNC(sub_83A548A4);
PPC_FUNC_IMPL(__imp__sub_83A548A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A548A8"))) PPC_WEAK_FUNC(sub_83A548A8);
PPC_FUNC_IMPL(__imp__sub_83A548A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A548B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,328(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a548fc
	if (cr6.eq) goto loc_83A548FC;
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f1,f10,f9
	ctx.f1.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// bl 0x83aa0028
	ctx.lr = 0x83A548FC;
	sub_83AA0028(ctx, base);
loc_83A548FC:
	// stw r29,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r29.u32);
	// stw r30,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5490C"))) PPC_WEAK_FUNC(sub_83A5490C);
PPC_FUNC_IMPL(__imp__sub_83A5490C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A54910"))) PPC_WEAK_FUNC(sub_83A54910);
PPC_FUNC_IMPL(__imp__sub_83A54910) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A5493C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a54954
	if (!cr6.eq) goto loc_83A54954;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// bl 0x83aa0010
	ctx.lr = 0x83A54950;
	sub_83AA0010(ctx, base);
	// stw r30,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r30.u32);
loc_83A54954:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A5496C"))) PPC_WEAK_FUNC(sub_83A5496C);
PPC_FUNC_IMPL(__imp__sub_83A5496C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A54970"))) PPC_WEAK_FUNC(sub_83A54970);
PPC_FUNC_IMPL(__imp__sub_83A54970) {
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
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A54994;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x83a549a4
	if (cr6.eq) goto loc_83A549A4;
	// lwz r3,344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
loc_83A549A4:
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

__attribute__((alias("__imp__sub_83A549B8"))) PPC_WEAK_FUNC(sub_83A549B8);
PPC_FUNC_IMPL(__imp__sub_83A549B8) {
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
	// lwz r3,328(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a549dc
	if (cr6.eq) goto loc_83A549DC;
	// bl 0x83aa01c0
	ctx.lr = 0x83A549DC;
	sub_83AA01C0(ctx, base);
loc_83A549DC:
	// li r4,192
	ctx.r4.s64 = 192;
	// addi r3,r31,452
	ctx.r3.s64 = ctx.r31.s64 + 452;
	// bl 0x831ea7a0
	ctx.lr = 0x83A549E8;
	sub_831EA7A0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83A54A04"))) PPC_WEAK_FUNC(sub_83A54A04);
PPC_FUNC_IMPL(__imp__sub_83A54A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A54A08"))) PPC_WEAK_FUNC(sub_83A54A08);
PPC_FUNC_IMPL(__imp__sub_83A54A08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A54A10;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,448(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 448);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a54a4c
	if (!cr6.eq) goto loc_83A54A4C;
	// lwz r3,328(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a54a44
	if (cr6.eq) goto loc_83A54A44;
	// bl 0x83aa01c0
	ctx.lr = 0x83A54A44;
	sub_83AA01C0(ctx, base);
loc_83A54A44:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
loc_83A54A4C:
	// lwz r3,328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a54a68
	if (cr6.eq) goto loc_83A54A68;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83aa00f8
	ctx.lr = 0x83A54A68;
	sub_83AA00F8(ctx, base);
loc_83A54A68:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r11,113
	ctx.r11.s64 = ctx.r11.s64 + 113;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f31,r10,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A54A88"))) PPC_WEAK_FUNC(sub_83A54A88);
PPC_FUNC_IMPL(__imp__sub_83A54A88) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x83a54b14
	if (cr6.lt) goto loc_83A54B14;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bgt cr6,0x83a54b14
	if (cr6.gt) goto loc_83A54B14;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,20056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x83a54adc
	if (cr6.lt) goto loc_83A54ADC;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x83a54ae0
	if (!cr6.gt) goto loc_83A54AE0;
loc_83A54ADC:
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f0.f64;
loc_83A54AE0:
	// lwz r3,328(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a54af8
	if (cr6.eq) goto loc_83A54AF8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83aa0040
	ctx.lr = 0x83A54AF8;
	sub_83AA0040(ctx, base);
loc_83A54AF8:
	// addi r11,r31,99
	ctx.r11.s64 = ctx.r31.s64 + 99;
	// addi r10,r31,101
	ctx.r10.s64 = ctx.r31.s64 + 101;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,1
	ctx.r7.s64 = 1;
	// stfsx f31,r9,r30
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r30.u32, temp.u32);
	// stwx r7,r8,r30
	PPC_STORE_U32(ctx.r8.u32 + ctx.r30.u32, ctx.r7.u32);
loc_83A54B14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A54B30"))) PPC_WEAK_FUNC(sub_83A54B30);
PPC_FUNC_IMPL(__imp__sub_83A54B30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x83a54b50
	if (cr6.lt) goto loc_83A54B50;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bgt cr6,0x83a54b50
	if (cr6.gt) goto loc_83A54B50;
	// addi r11,r4,99
	ctx.r11.s64 = ctx.r4.s64 + 99;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_83A54B50:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A54B5C"))) PPC_WEAK_FUNC(sub_83A54B5C);
PPC_FUNC_IMPL(__imp__sub_83A54B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A54B60"))) PPC_WEAK_FUNC(sub_83A54B60);
PPC_FUNC_IMPL(__imp__sub_83A54B60) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,328(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a54b98
	if (cr6.eq) goto loc_83A54B98;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x83aa0358
	ctx.lr = 0x83A54B98;
	sub_83AA0358(ctx, base);
loc_83A54B98:
	// addi r11,r31,161
	ctx.r11.s64 = ctx.r31.s64 + 161;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f31,r10,r30
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_83A54BC0"))) PPC_WEAK_FUNC(sub_83A54BC0);
PPC_FUNC_IMPL(__imp__sub_83A54BC0) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83a8ceb8
	ctx.lr = 0x83A54BEC;
	sub_83A8CEB8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a54c2c
	if (cr6.eq) goto loc_83A54C2C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a8cf30
	ctx.lr = 0x83A54BFC;
	sub_83A8CF30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,420(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// bl 0x83aa0f50
	ctx.lr = 0x83A54C08;
	sub_83AA0F50(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r9,92(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83A54C28;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83a54c3c
	goto loc_83A54C3C;
loc_83A54C2C:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-15824
	ctx.r4.s64 = ctx.r11.s64 + -15824;
	// bl 0x831ea3f0
	ctx.lr = 0x83A54C3C;
	sub_831EA3F0(ctx, base);
loc_83A54C3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A54C58"))) PPC_WEAK_FUNC(sub_83A54C58);
PPC_FUNC_IMPL(__imp__sub_83A54C58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A54C60;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// beq cr6,0x83a54d88
	if (cr6.eq) goto loc_83A54D88;
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// beq cr6,0x83a54d2c
	if (cr6.eq) goto loc_83A54D2C;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// beq cr6,0x83a54cc8
	if (cr6.eq) goto loc_83A54CC8;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a54db0
	if (cr6.eq) goto loc_83A54DB0;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f31,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
loc_83A54C9C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,328(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83aa00f8
	ctx.lr = 0x83A54CB0;
	sub_83AA00F8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x83a54c9c
	if (cr6.lt) goto loc_83A54C9C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A54CC8:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r3,328(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f31,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83aa00f8
	ctx.lr = 0x83A54CE4;
	sub_83AA00F8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,328(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83aa00f8
	ctx.lr = 0x83A54CF8;
	sub_83AA00F8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,328(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83aa00f8
	ctx.lr = 0x83A54D0C;
	sub_83AA00F8(ctx, base);
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,328(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83aa00f8
	ctx.lr = 0x83A54D20;
	sub_83AA00F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A54D2C:
	// lwz r11,404(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 404);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a54d44
	if (!cr6.eq) goto loc_83A54D44;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,20056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,396(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 396, temp.u32);
loc_83A54D44:
	// lwz r11,408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 408);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a54d5c
	if (!cr6.eq) goto loc_83A54D5C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,400(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 400, temp.u32);
loc_83A54D5C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f1,396(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,328(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// bl 0x83aa0040
	ctx.lr = 0x83A54D6C;
	sub_83AA0040(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f1,400(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,328(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// bl 0x83aa0040
	ctx.lr = 0x83A54D7C;
	sub_83AA0040(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A54D88:
	// lwz r11,404(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 404);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a54da0
	if (!cr6.eq) goto loc_83A54DA0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,396(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 396, temp.u32);
loc_83A54DA0:
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f1,396(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,328(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// bl 0x83aa0040
	ctx.lr = 0x83A54DB0;
	sub_83AA0040(ctx, base);
loc_83A54DB0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A54DBC"))) PPC_WEAK_FUNC(sub_83A54DBC);
PPC_FUNC_IMPL(__imp__sub_83A54DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A54DC0"))) PPC_WEAK_FUNC(sub_83A54DC0);
PPC_FUNC_IMPL(__imp__sub_83A54DC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A54DC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a54e08
	if (cr6.eq) goto loc_83A54E08;
	// addi r30,r3,452
	ctx.r30.s64 = ctx.r3.s64 + 452;
loc_83A54DE4:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r3,328(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 328);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83aa0138
	ctx.lr = 0x83A54DF8;
	sub_83AA0138(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// blt cr6,0x83a54de4
	if (cr6.lt) goto loc_83A54DE4;
loc_83A54E08:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A54E10"))) PPC_WEAK_FUNC(sub_83A54E10);
PPC_FUNC_IMPL(__imp__sub_83A54E10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	// srawi r11,r4,3
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 3;
	// clrlwi r10,r4,29
	ctx.r10.u64 = ctx.r4.u32 & 0x7;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// stw r10,412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 412, ctx.r10.u32);
	// stw r9,416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 416, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A54E28"))) PPC_WEAK_FUNC(sub_83A54E28);
PPC_FUNC_IMPL(__imp__sub_83A54E28) {
	PPC_FUNC_PROLOGUE();
	// stw r4,420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 420, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A54E30"))) PPC_WEAK_FUNC(sub_83A54E30);
PPC_FUNC_IMPL(__imp__sub_83A54E30) {
	PPC_FUNC_PROLOGUE();
	// b 0x83a540e0
	sub_83A540E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A54E34"))) PPC_WEAK_FUNC(sub_83A54E34);
PPC_FUNC_IMPL(__imp__sub_83A54E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A54E38"))) PPC_WEAK_FUNC(sub_83A54E38);
PPC_FUNC_IMPL(__imp__sub_83A54E38) {
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
	// lis r9,-31741
	ctx.r9.s64 = -2080178176;
	// lis r31,-31741
	ctx.r31.s64 = -2080178176;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,-10652
	ctx.r8.s64 = ctx.r9.s64 + -10652;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,-10652(r9)
	PPC_STORE_U32(ctx.r9.u32 + -10652, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-10656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10656);
	// lis r7,-31741
	ctx.r7.s64 = -2080178176;
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// addi r3,r7,-10728
	ctx.r3.s64 = ctx.r7.s64 + -10728;
	// stw r11,-10656(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10656, ctx.r11.u32);
	// bl 0x83a75be8
	ctx.lr = 0x83A54E88;
	sub_83A75BE8(ctx, base);
	// lis r6,-31741
	ctx.r6.s64 = -2080178176;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,-10732(r6)
	PPC_STORE_U32(ctx.r6.u32 + -10732, ctx.r3.u32);
	// bne cr6,0x83a54ebc
	if (!cr6.eq) goto loc_83A54EBC;
	// lwz r11,-10656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10656);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-10656(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10656, ctx.r11.u32);
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
loc_83A54EBC:
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-16772
	ctx.r3.s64 = ctx.r11.s64 + -16772;
	// bl 0x83a761b8
	ctx.lr = 0x83A54ECC;
	sub_83A761B8(ctx, base);
	// bl 0x83a82cd8
	ctx.lr = 0x83A54ED0;
	sub_83A82CD8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a54ee8
	if (!cr6.eq) goto loc_83A54EE8;
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,16824
	ctx.r3.s64 = ctx.r11.s64 + 16824;
	// bl 0x83a82e08
	ctx.lr = 0x83A54EE8;
	sub_83A82E08(ctx, base);
loc_83A54EE8:
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

__attribute__((alias("__imp__sub_83A54F00"))) PPC_WEAK_FUNC(sub_83A54F00);
PPC_FUNC_IMPL(__imp__sub_83A54F00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A54F08;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// ble cr6,0x83a54f50
	if (!cr6.gt) goto loc_83A54F50;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r11,-15560
	ctx.r4.s64 = ctx.r11.s64 + -15560;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x83A54F44;
	sub_831EA400(ctx, base);
loc_83A54F44:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83A54F50:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r11,-15588
	ctx.r5.s64 = ctx.r11.s64 + -15588;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83a78940
	ctx.lr = 0x83A54F68;
	sub_83A78940(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r3,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a54f44
	if (cr6.eq) goto loc_83A54F44;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r3,412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83aa0a28
	ctx.lr = 0x83A54F88;
	sub_83AA0A28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r3.u32);
	// bne cr6,0x83a54fb8
	if (!cr6.eq) goto loc_83A54FB8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-15712
	ctx.r4.s64 = ctx.r11.s64 + -15712;
	// bl 0x831ea3f0
	ctx.lr = 0x83A54FA4;
	sub_831EA3F0(ctx, base);
loc_83A54FA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a54398
	ctx.lr = 0x83A54FAC;
	sub_83A54398(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83A54FB8:
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// bl 0x83a7a000
	ctx.lr = 0x83A54FC0;
	sub_83A7A000(ctx, base);
	// lwz r11,412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r3,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r3.u32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83a54fe0
	if (!cr6.eq) goto loc_83A54FE0;
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_83A54FE0:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r3,328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r4,348(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// bl 0x83a9fea0
	ctx.lr = 0x83A54FF4;
	sub_83A9FEA0(ctx, base);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// bl 0x83aa0010
	ctx.lr = 0x83A55000;
	sub_83AA0010(ctx, base);
	// lwz r11,388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// lwz r10,384(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r3,328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f1,f10,f9
	ctx.f1.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// bl 0x83aa0028
	ctx.lr = 0x83A5503C;
	sub_83AA0028(ctx, base);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lfs f8,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// li r4,3
	ctx.r4.s64 = 3;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f7,88(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// lis r9,-32205
	ctx.r9.s64 = -2110586880;
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// lfs f0,-10804(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -10804);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,348(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// extsh r10,r27
	ctx.r10.s64 = ctx.r27.s16;
	// addi r5,r9,-15748
	ctx.r5.s64 = ctx.r9.s64 + -15748;
	// mullw r9,r10,r7
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// fdivs f4,f5,f8
	ctx.f4.f64 = double(float(ctx.f5.f64 / ctx.f8.f64));
	// li r6,8
	ctx.r6.s64 = 8;
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fctidz f2,f3
	ctx.f2.s64 = (ctx.f3.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f2,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f2.u64);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// divwu r11,r8,r4
	ctx.r11.u32 = PPCDivide(ctx.r8.u32, ctx.r4.u32);
	// addi r4,r11,7
	ctx.r4.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r4,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFF8;
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
	// stw r10,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r10.u32);
	// mullw r8,r10,r7
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// stw r8,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r8.u32);
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mullw r11,r9,r7
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83a78940
	ctx.lr = 0x83A550CC;
	sub_83A78940(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r3.u32);
	// beq cr6,0x83a54fa4
	if (cr6.eq) goto loc_83A54FA4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83A550E0;
	sub_831EA7A0(ctx, base);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// addi r29,r31,252
	ctx.r29.s64 = ctx.r31.s64 + 252;
	// addi r27,r31,88
	ctx.r27.s64 = ctx.r31.s64 + 88;
loc_83A550EC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83a7a1f0
	ctx.lr = 0x83A550F4;
	sub_83A7A1F0(ctx, base);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stb r26,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r26.u8);
	// lwz r9,348(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// ble cr6,0x83a55150
	if (!cr6.gt) goto loc_83A55150;
loc_83A55118:
	// lwz r11,380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r8,376(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// mullw r10,r11,r30
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// lwz r9,368(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mullw r11,r8,r28
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x83a7a240
	ctx.lr = 0x83A55140;
	sub_83A7A240(ctx, base);
	// lwz r7,348(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r7
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r7.u32, xer);
	// blt cr6,0x83a55118
	if (cr6.lt) goto loc_83A55118;
loc_83A55150:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r4,380(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// bl 0x83a7a2a0
	ctx.lr = 0x83A5515C;
	sub_83A7A2A0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzu r5,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// bl 0x83a7a0d8
	ctx.lr = 0x83A5516C;
	sub_83A7A0D8(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,56
	ctx.r27.s64 = ctx.r27.s64 + 56;
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(ctx.r28.u32, 3, xer);
	// blt cr6,0x83a550ec
	if (cr6.lt) goto loc_83A550EC;
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x83a75be8
	ctx.lr = 0x83A55188;
	sub_83A75BE8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lwz r4,344(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// lwz r3,328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// bl 0x83aa0010
	ctx.lr = 0x83A55198;
	sub_83AA0010(ctx, base);
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// lwz r4,348(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a551b4
	if (!cr6.eq) goto loc_83A551B4;
	// bl 0x83a54c58
	ctx.lr = 0x83A551B0;
	sub_83A54C58(ctx, base);
	// b 0x83a551b8
	goto loc_83A551B8;
loc_83A551B4:
	// bl 0x83a54dc0
	ctx.lr = 0x83A551B8;
	sub_83A54DC0(ctx, base);
loc_83A551B8:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r29,r31,640
	ctx.r29.s64 = ctx.r31.s64 + 640;
loc_83A551C0:
	// li r5,0
	ctx.r5.s64 = 0;
	// lfsu f1,4(r29)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r29.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f1.f64 = double(temp.f32);
	ctx.r29.u32 = ea;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// bl 0x83aa0358
	ctx.lr = 0x83A551D4;
	sub_83AA0358(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,8
	cr6.compare<uint32_t>(ctx.r30.u32, 8, xer);
	// blt cr6,0x83a551c0
	if (cr6.lt) goto loc_83A551C0;
	// lfs f1,392(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// bl 0x83a9fff8
	ctx.lr = 0x83A551EC;
	sub_83A9FFF8(ctx, base);
	// bl 0x839db810
	ctx.lr = 0x83A551F0;
	sub_839DB810(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-15780
	ctx.r5.s64 = ctx.r11.s64 + -15780;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x83a78940
	ctx.lr = 0x83A5520C;
	sub_83A78940(ctx, base);
	// stw r3,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83a56fb0
	ctx.lr = 0x83A55218;
	sub_83A56FB0(ctx, base);
	// li r10,1000
	ctx.r10.s64 = 1000;
	// stw r3,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r3.u32);
	// lis r30,-31741
	ctx.r30.s64 = -2080178176;
	// std r26,432(r31)
	PPC_STORE_U64(ctx.r31.u32 + 432, ctx.r26.u64);
	// std r10,440(r31)
	PPC_STORE_U64(ctx.r31.u32 + 440, ctx.r10.u64);
	// lwz r3,-10732(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10732);
	// bl 0x83a75cd8
	ctx.lr = 0x83A55234;
	sub_83A75CD8(ctx, base);
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// addi r11,r11,-10652
	ctx.r11.s64 = ctx.r11.s64 + -10652;
	// stw r31,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r31.u32);
	// stw r26,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r26.u32);
	// addi r10,r31,336
	ctx.r10.s64 = ctx.r31.s64 + 336;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83a5525c
	if (!cr6.eq) goto loc_83A5525C;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x83a55268
	goto loc_83A55268;
loc_83A5525C:
	// stw r26,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r26.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
loc_83A55268:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,-10732(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10732);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// bl 0x83a75d58
	ctx.lr = 0x83A55280;
	sub_83A75D58(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5528C"))) PPC_WEAK_FUNC(sub_83A5528C);
PPC_FUNC_IMPL(__imp__sub_83A5528C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A55290"))) PPC_WEAK_FUNC(sub_83A55290);
PPC_FUNC_IMPL(__imp__sub_83A55290) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x83a82cd8
	ctx.lr = 0x83A552AC;
	sub_83A82CD8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a552bc
	if (!cr6.eq) goto loc_83A552BC;
	// bl 0x83a83240
	ctx.lr = 0x83A552BC;
	sub_83A83240(ctx, base);
loc_83A552BC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a54398
	ctx.lr = 0x83A552C4;
	sub_83A54398(ctx, base);
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// bne cr6,0x83a552d0
	if (!cr6.eq) goto loc_83A552D0;
	// bl 0x83a83248
	ctx.lr = 0x83A552D0;
	sub_83A83248(ctx, base);
loc_83A552D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A552E8"))) PPC_WEAK_FUNC(sub_83A552E8);
PPC_FUNC_IMPL(__imp__sub_83A552E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A552F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,360(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 360);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// bne cr6,0x83a55320
	if (!cr6.eq) goto loc_83A55320;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// std r11,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// std r10,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r10.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A55320:
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a55344
	if (!cr6.eq) goto loc_83A55344;
	// ld r11,432(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 432);
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// ld r10,440(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 440);
	// std r10,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r10.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A55344:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x83a9ffb0
	ctx.lr = 0x83A55364;
	sub_83A9FFB0(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x83a54570
	ctx.lr = 0x83A5537C;
	sub_83A54570(ctx, base);
	// lwz r9,388(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// ld r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lwz r7,384(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// divdu r5,r8,r6
	ctx.r5.u64 = PPCDivide(ctx.r8.u64, ctx.r6.u64);
	// extsw r4,r7
	ctx.r4.s64 = ctx.r7.s32;
	// tdllei r6,0
	// mulld r3,r5,r4
	ctx.r3.s64 = ctx.r5.s64 * ctx.r4.s64;
	// std r3,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r3.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A553A8"))) PPC_WEAK_FUNC(sub_83A553A8);
PPC_FUNC_IMPL(__imp__sub_83A553A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lis r10,-31741
	ctx.r10.s64 = -2080178176;
	// addi r9,r11,-15928
	ctx.r9.s64 = ctx.r11.s64 + -15928;
	// stw r9,-10736(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10736, ctx.r9.u32);
	// b 0x83a54e38
	sub_83A54E38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A553BC"))) PPC_WEAK_FUNC(sub_83A553BC);
PPC_FUNC_IMPL(__imp__sub_83A553BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A553C0"))) PPC_WEAK_FUNC(sub_83A553C0);
PPC_FUNC_IMPL(__imp__sub_83A553C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A553C8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,-32205
	ctx.r9.s64 = -2110586880;
	// lis r8,-32205
	ctx.r8.s64 = -2110586880;
	// addi r7,r11,-21736
	ctx.r7.s64 = ctx.r11.s64 + -21736;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f31,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// addi r6,r9,-15480
	ctx.r6.s64 = ctx.r9.s64 + -15480;
	// stfs f31,392(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 392, temp.u32);
	// addi r5,r8,-15484
	ctx.r5.s64 = ctx.r8.s64 + -15484;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// li r4,72
	ctx.r4.s64 = 72;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r30.u32);
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// stw r30,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r30.u32);
	// stw r30,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// std r30,360(r31)
	PPC_STORE_U64(ctx.r31.u32 + 360, ctx.r30.u64);
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stw r30,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
	// stw r30,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r30.u32);
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// stw r11,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r11.u32);
	// stw r11,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r11.u32);
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// stw r30,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r30.u32);
	// stw r30,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r30.u32);
	// std r30,432(r31)
	PPC_STORE_U64(ctx.r31.u32 + 432, ctx.r30.u64);
	// std r11,440(r31)
	PPC_STORE_U64(ctx.r31.u32 + 440, ctx.r11.u64);
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// bl 0x831ea7a0
	ctx.lr = 0x83A55474;
	sub_831EA7A0(ctx, base);
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x831ea7a0
	ctx.lr = 0x83A55480;
	sub_831EA7A0(ctx, base);
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// li r4,56
	ctx.r4.s64 = 56;
	// bl 0x831ea7a0
	ctx.lr = 0x83A5548C;
	sub_831EA7A0(ctx, base);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x831ea7a0
	ctx.lr = 0x83A55498;
	sub_831EA7A0(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// li r4,168
	ctx.r4.s64 = 168;
	// bl 0x831ea7a0
	ctx.lr = 0x83A554A4;
	sub_831EA7A0(ctx, base);
	// addi r29,r31,452
	ctx.r29.s64 = ctx.r31.s64 + 452;
	// li r4,192
	ctx.r4.s64 = 192;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83A554B4;
	sub_831EA7A0(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83A554C0;
	sub_831EA7A0(ctx, base);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// stfs f31,644(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 644, temp.u32);
	// stw r30,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r30.u32);
	// stw r30,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,9008(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,396(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 396, temp.u32);
	// stfs f0,400(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A554EC"))) PPC_WEAK_FUNC(sub_83A554EC);
PPC_FUNC_IMPL(__imp__sub_83A554EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A554F0"))) PPC_WEAK_FUNC(sub_83A554F0);
PPC_FUNC_IMPL(__imp__sub_83A554F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x83a554f8
	sub_83A554F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A554F8"))) PPC_WEAK_FUNC(sub_83A554F8);
PPC_FUNC_IMPL(__imp__sub_83A554F8) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r9,r11,-21736
	ctx.r9.s64 = ctx.r11.s64 + -21736;
	// addi r8,r10,-10760
	ctx.r8.s64 = ctx.r10.s64 + -10760;
	// clrlwi r7,r4,31
	ctx.r7.u64 = ctx.r4.u32 & 0x1;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83a5553c
	if (cr6.eq) goto loc_83A5553C;
	// li r4,680
	ctx.r4.s64 = 680;
	// bl 0x83a79fb8
	ctx.lr = 0x83A55538;
	sub_83A79FB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83A5553C:
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

__attribute__((alias("__imp__sub_83A55550"))) PPC_WEAK_FUNC(sub_83A55550);
PPC_FUNC_IMPL(__imp__sub_83A55550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A55558;
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
	// bl 0x83a83240
	ctx.lr = 0x83A55570;
	sub_83A83240(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a54f00
	ctx.lr = 0x83A55584;
	sub_83A54F00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a83248
	ctx.lr = 0x83A5558C;
	sub_83A83248(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A55598"))) PPC_WEAK_FUNC(sub_83A55598);
PPC_FUNC_IMPL(__imp__sub_83A55598) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x83a555a0
	sub_83A555A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A555A0"))) PPC_WEAK_FUNC(sub_83A555A0);
PPC_FUNC_IMPL(__imp__sub_83A555A0) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r9,r11,-21736
	ctx.r9.s64 = ctx.r11.s64 + -21736;
	// addi r8,r10,-10760
	ctx.r8.s64 = ctx.r10.s64 + -10760;
	// clrlwi r7,r4,31
	ctx.r7.u64 = ctx.r4.u32 & 0x1;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83a555e4
	if (cr6.eq) goto loc_83A555E4;
	// li r4,688
	ctx.r4.s64 = 688;
	// bl 0x83a79fb8
	ctx.lr = 0x83A555E0;
	sub_83A79FB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83A555E4:
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

__attribute__((alias("__imp__sub_83A555F8"))) PPC_WEAK_FUNC(sub_83A555F8);
PPC_FUNC_IMPL(__imp__sub_83A555F8) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r11,-15260
	ctx.r5.s64 = ctx.r11.s64 + -15260;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r3,688
	ctx.r3.s64 = 688;
	// bl 0x83a79ff0
	ctx.lr = 0x83A55620;
	sub_83A79FF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a5566c
	if (cr6.eq) goto loc_83A5566C;
	// bl 0x83a553c0
	ctx.lr = 0x83A55630;
	sub_83A553C0(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// lis r9,-32205
	ctx.r9.s64 = -2110586880;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-15368
	ctx.r8.s64 = ctx.r10.s64 + -15368;
	// addi r7,r9,-15372
	ctx.r7.s64 = ctx.r9.s64 + -15372;
	// stw r11,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// stw r11,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r11.u32);
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
loc_83A5566C:
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

__attribute__((alias("__imp__sub_83A55684"))) PPC_WEAK_FUNC(sub_83A55684);
PPC_FUNC_IMPL(__imp__sub_83A55684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A55688"))) PPC_WEAK_FUNC(sub_83A55688);
PPC_FUNC_IMPL(__imp__sub_83A55688) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a556cc
	if (cr6.eq) goto loc_83A556CC;
loc_83A556B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83a75e98
	ctx.lr = 0x83A556BC;
	sub_83A75E98(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a556b4
	if (!cr6.eq) goto loc_83A556B4;
loc_83A556CC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a75dd8
	ctx.lr = 0x83A556D4;
	sub_83A75DD8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A556EC"))) PPC_WEAK_FUNC(sub_83A556EC);
PPC_FUNC_IMPL(__imp__sub_83A556EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A556F0"))) PPC_WEAK_FUNC(sub_83A556F0);
PPC_FUNC_IMPL(__imp__sub_83A556F0) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a55728
	if (cr6.eq) goto loc_83A55728;
loc_83A55710:
	// bl 0x83a46c88
	ctx.lr = 0x83A55714;
	sub_83A46C88(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83a75e98
	ctx.lr = 0x83A5571C;
	sub_83A75E98(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a55710
	if (!cr6.eq) goto loc_83A55710;
loc_83A55728:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83A55744"))) PPC_WEAK_FUNC(sub_83A55744);
PPC_FUNC_IMPL(__imp__sub_83A55744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A55748"))) PPC_WEAK_FUNC(sub_83A55748);
PPC_FUNC_IMPL(__imp__sub_83A55748) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A55750;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83a77b68
	ctx.lr = 0x83A55770;
	sub_83A77B68(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83A5577C;
	sub_831EA7A0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a77b78
	ctx.lr = 0x83A5578C;
	sub_83A77B78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a557b4
	if (!cr6.eq) goto loc_83A557B4;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,-15136
	ctx.r4.s64 = ctx.r11.s64 + -15136;
	// bl 0x831ea418
	ctx.lr = 0x83A557A8;
	sub_831EA418(ctx, base);
loc_83A557A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A557B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r4,72
	ctx.r4.s64 = 72;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a77b78
	ctx.lr = 0x83A557D0;
	sub_83A77B78(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// li r29,-1
	ctx.r29.s64 = -1;
	// beq cr6,0x83a557e0
	if (cr6.eq) goto loc_83A557E0;
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_83A557E0:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lis r10,-31835
	ctx.r10.s64 = -2086338560;
	// addi r8,r11,-15156
	ctx.r8.s64 = ctx.r11.s64 + -15156;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r10,22256
	ctx.r6.s64 = ctx.r10.s64 + 22256;
	// li r5,10240
	ctx.r5.s64 = 10240;
	// li r4,72
	ctx.r4.s64 = 72;
	// bl 0x83a75f60
	ctx.lr = 0x83A55804;
	sub_83A75F60(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a557a8
	if (cr6.eq) goto loc_83A557A8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83a75ea0
	ctx.lr = 0x83A55818;
	sub_83A75EA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a75ef8
	ctx.lr = 0x83A55824;
	sub_83A75EF8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83102db0
	ctx.lr = 0x83A5582C;
	sub_83102DB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A55838"))) PPC_WEAK_FUNC(sub_83A55838);
PPC_FUNC_IMPL(__imp__sub_83A55838) {
	PPC_FUNC_PROLOGUE();
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// stw r5,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A55844"))) PPC_WEAK_FUNC(sub_83A55844);
PPC_FUNC_IMPL(__imp__sub_83A55844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A55848"))) PPC_WEAK_FUNC(sub_83A55848);
PPC_FUNC_IMPL(__imp__sub_83A55848) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x83a58540
	sub_83A58540(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A55870"))) PPC_WEAK_FUNC(sub_83A55870);
PPC_FUNC_IMPL(__imp__sub_83A55870) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A55874"))) PPC_WEAK_FUNC(sub_83A55874);
PPC_FUNC_IMPL(__imp__sub_83A55874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A55878"))) PPC_WEAK_FUNC(sub_83A55878);
PPC_FUNC_IMPL(__imp__sub_83A55878) {
	PPC_FUNC_PROLOGUE();
	// b 0x83a58348
	sub_83A58348(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5587C"))) PPC_WEAK_FUNC(sub_83A5587C);
PPC_FUNC_IMPL(__imp__sub_83A5587C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A55880"))) PPC_WEAK_FUNC(sub_83A55880);
PPC_FUNC_IMPL(__imp__sub_83A55880) {
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
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// rlwinm r4,r11,6,0,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// bne cr6,0x83a558ac
	if (!cr6.eq) goto loc_83A558AC;
	// li r4,64
	ctx.r4.s64 = 64;
loc_83A558AC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83a7c0e8
	ctx.lr = 0x83A558B8;
	sub_83A7C0E8(ctx, base);
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A558CC"))) PPC_WEAK_FUNC(sub_83A558CC);
PPC_FUNC_IMPL(__imp__sub_83A558CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A558D0"))) PPC_WEAK_FUNC(sub_83A558D0);
PPC_FUNC_IMPL(__imp__sub_83A558D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A558D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cntlzw r5,r9
	ctx.r5.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lwz r10,4440(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4440);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addic r6,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// subfe r4,r6,r10
	temp.u8 = (~ctx.r6.u32 + ctx.r10.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// bl 0x83a58360
	ctx.lr = 0x83A55920;
	sub_83A58360(ctx, base);
	// lwz r10,4444(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4444);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r3,108
	ctx.r29.s64 = ctx.r3.s64 + 108;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r27,r10,2112
	ctx.r27.s64 = ctx.r10.s64 * 2112;
	// mullw r26,r9,r10
	ctx.r26.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// ble cr6,0x83a55978
	if (!cr6.gt) goto loc_83A55978;
	// li r28,1
	ctx.r28.s64 = 1;
loc_83A55948:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83a7bf58
	ctx.lr = 0x83A55964;
	sub_83A7BF58(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a55948
	if (cr6.lt) goto loc_83A55948;
loc_83A55978:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A55984"))) PPC_WEAK_FUNC(sub_83A55984);
PPC_FUNC_IMPL(__imp__sub_83A55984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A55988"))) PPC_WEAK_FUNC(sub_83A55988);
PPC_FUNC_IMPL(__imp__sub_83A55988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A55990;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a55a20
	if (cr6.eq) goto loc_83A55A20;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a55a20
	if (cr6.eq) goto loc_83A55A20;
	// rlwinm r26,r5,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r26,r3
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r3.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83a55a20
	if (cr6.eq) goto loc_83A55A20;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a559d4
	if (cr6.eq) goto loc_83A559D4;
	// bl 0x83a583e8
	ctx.lr = 0x83A559D0;
	sub_83A583E8(ctx, base);
	// stw r28,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
loc_83A559D4:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a55a10
	if (!cr6.gt) goto loc_83A55A10;
	// addi r31,r30,32
	ctx.r31.s64 = ctx.r30.s64 + 32;
loc_83A559E8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a559fc
	if (cr6.eq) goto loc_83A559FC;
	// bl 0x83a7bd40
	ctx.lr = 0x83A559F8;
	sub_83A7BD40(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_83A559FC:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a559e8
	if (cr6.lt) goto loc_83A559E8;
loc_83A55A10:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83a78a48
	ctx.lr = 0x83A55A1C;
	sub_83A78A48(ctx, base);
	// stwx r28,r26,r27
	PPC_STORE_U32(ctx.r26.u32 + ctx.r27.u32, ctx.r28.u32);
loc_83A55A20:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A55A28"))) PPC_WEAK_FUNC(sub_83A55A28);
PPC_FUNC_IMPL(__imp__sub_83A55A28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A55A30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a55af8
	if (cr6.eq) goto loc_83A55AF8;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a55af8
	if (cr6.eq) goto loc_83A55AF8;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// ble cr6,0x83a55a70
	if (!cr6.gt) goto loc_83A55A70;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-15052
	ctx.r4.s64 = ctx.r11.s64 + -15052;
	// bl 0x83a4f538
	ctx.lr = 0x83A55A70;
	sub_83A4F538(ctx, base);
loc_83A55A70:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a55af8
	if (cr6.eq) goto loc_83A55AF8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831f8200
	ctx.lr = 0x83A55A84;
	sub_831F8200(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// beq cr6,0x83a55a94
	if (cr6.eq) goto loc_83A55A94;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x83a55af8
	if (!cr6.eq) goto loc_83A55AF8;
loc_83A55A94:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x83a7bda0
	ctx.lr = 0x83A55AA0;
	sub_83A7BDA0(ctx, base);
	// lwz r11,4444(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4444);
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// divwu r29,r3,r11
	ctx.r29.u32 = PPCDivide(ctx.r3.u32, ctx.r11.u32);
	// twllei r11,0
	// ble cr6,0x83a55aec
	if (!cr6.gt) goto loc_83A55AEC;
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
loc_83A55ABC:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a7bda0
	ctx.lr = 0x83A55AC8;
	sub_83A7BDA0(ctx, base);
	// lwz r11,4444(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4444);
	// twllei r11,0
	// divwu r11,r3,r11
	ctx.r11.u32 = PPCDivide(ctx.r3.u32, ctx.r11.u32);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bge cr6,0x83a55ae0
	if (!cr6.lt) goto loc_83A55AE0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_83A55AE0:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x83a55abc
	if (!cr0.eq) goto loc_83A55ABC;
loc_83A55AEC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A55AF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A55B04"))) PPC_WEAK_FUNC(sub_83A55B04);
PPC_FUNC_IMPL(__imp__sub_83A55B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A55B08"))) PPC_WEAK_FUNC(sub_83A55B08);
PPC_FUNC_IMPL(__imp__sub_83A55B08) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a55b68
	if (cr6.eq) goto loc_83A55B68;
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a55b68
	if (cr6.eq) goto loc_83A55B68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a584e8
	ctx.lr = 0x83A55B34;
	sub_83A584E8(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x83a55b60
	if (!cr6.eq) goto loc_83A55B60;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-14944
	ctx.r4.s64 = ctx.r11.s64 + -14944;
	// bl 0x83a4f558
	ctx.lr = 0x83A55B4C;
	sub_83A4F558(ctx, base);
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
loc_83A55B60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a58518
	ctx.lr = 0x83A55B68;
	sub_83A58518(ctx, base);
loc_83A55B68:
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

__attribute__((alias("__imp__sub_83A55B7C"))) PPC_WEAK_FUNC(sub_83A55B7C);
PPC_FUNC_IMPL(__imp__sub_83A55B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A55B80"))) PPC_WEAK_FUNC(sub_83A55B80);
PPC_FUNC_IMPL(__imp__sub_83A55B80) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a55bf4
	if (cr6.eq) goto loc_83A55BF4;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a55bf4
	if (cr6.eq) goto loc_83A55BF4;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83a584e8
	ctx.lr = 0x83A55BAC;
	sub_83A584E8(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x83a55bcc
	if (cr6.eq) goto loc_83A55BCC;
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
loc_83A55BCC:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x83a7bda0
	ctx.lr = 0x83A55BD8;
	sub_83A7BDA0(ctx, base);
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83A55BF4:
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

__attribute__((alias("__imp__sub_83A55C0C"))) PPC_WEAK_FUNC(sub_83A55C0C);
PPC_FUNC_IMPL(__imp__sub_83A55C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A55C10"))) PPC_WEAK_FUNC(sub_83A55C10);
PPC_FUNC_IMPL(__imp__sub_83A55C10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A55C18;
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a55c5c
	if (cr6.eq) goto loc_83A55C5C;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a55c5c
	if (cr6.eq) goto loc_83A55C5C;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// ble cr6,0x83a55c68
	if (!cr6.gt) goto loc_83A55C68;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-14916
	ctx.r4.s64 = ctx.r11.s64 + -14916;
	// bl 0x83a4f538
	ctx.lr = 0x83A55C5C;
	sub_83A4F538(ctx, base);
loc_83A55C5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A55C60:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A55C68:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a55c5c
	if (cr6.eq) goto loc_83A55C5C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f8200
	ctx.lr = 0x83A55C7C;
	sub_831F8200(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// beq cr6,0x83a55c8c
	if (cr6.eq) goto loc_83A55C8C;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x83a55c5c
	if (!cr6.eq) goto loc_83A55C5C;
loc_83A55C8C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a55a28
	ctx.lr = 0x83A55C9C;
	sub_83A55A28(ctx, base);
	// cmplw cr6,r28,r3
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, xer);
	// bge cr6,0x83a55c60
	if (!cr6.lt) goto loc_83A55C60;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A55CB0"))) PPC_WEAK_FUNC(sub_83A55CB0);
PPC_FUNC_IMPL(__imp__sub_83A55CB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83A55CB8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a55d64
	if (!cr6.gt) goto loc_83A55D64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_83A55CDC:
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83a55d50
	if (cr6.eq) goto loc_83A55D50;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x83a55d50
	if (cr6.eq) goto loc_83A55D50;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a55d04
	if (cr6.eq) goto loc_83A55D04;
	// bl 0x83a583e8
	ctx.lr = 0x83A55D00;
	sub_83A583E8(ctx, base);
	// stw r28,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
loc_83A55D04:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a55d40
	if (!cr6.gt) goto loc_83A55D40;
	// addi r31,r30,32
	ctx.r31.s64 = ctx.r30.s64 + 32;
loc_83A55D18:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a55d2c
	if (cr6.eq) goto loc_83A55D2C;
	// bl 0x83a7bd40
	ctx.lr = 0x83A55D28;
	sub_83A7BD40(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_83A55D2C:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a55d18
	if (cr6.lt) goto loc_83A55D18;
loc_83A55D40:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83a78a48
	ctx.lr = 0x83A55D4C;
	sub_83A78A48(ctx, base);
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
loc_83A55D50:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, xer);
	// blt cr6,0x83a55cdc
	if (cr6.lt) goto loc_83A55CDC;
loc_83A55D64:
	// lwz r3,20(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a55d78
	if (cr6.eq) goto loc_83A55D78;
	// bl 0x83a7bd40
	ctx.lr = 0x83A55D74;
	sub_83A7BD40(ctx, base);
	// stw r28,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r28.u32);
loc_83A55D78:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83a78a48
	ctx.lr = 0x83A55D84;
	sub_83A78A48(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A55D8C"))) PPC_WEAK_FUNC(sub_83A55D8C);
PPC_FUNC_IMPL(__imp__sub_83A55D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A55D90"))) PPC_WEAK_FUNC(sub_83A55D90);
PPC_FUNC_IMPL(__imp__sub_83A55D90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x83A55D98;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r7,28
	ctx.r11.s64 = ctx.r7.s64 * 28;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r10,2456(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2456);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x83a55e18
	if (!cr6.gt) goto loc_83A55E18;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,-14704
	ctx.r5.s64 = ctx.r11.s64 + -14704;
	// li r4,104
	ctx.r4.s64 = 104;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a78940
	ctx.lr = 0x83A55DE0;
	sub_83A78940(ctx, base);
	// rlwinm r10,r23,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stwx r3,r10,r22
	PPC_STORE_U32(ctx.r10.u32 + ctx.r22.u32, ctx.r3.u32);
	// bne cr6,0x83a55e24
	if (!cr6.eq) goto loc_83A55E24;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83a55988
	ctx.lr = 0x83A55E04;
	sub_83A55988(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,-14752
	ctx.r4.s64 = ctx.r11.s64 + -14752;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83a4f538
	ctx.lr = 0x83A55E18;
	sub_83A4F538(ctx, base);
loc_83A55E18:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83A55E24:
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A55E34;
	sub_831CDCF0(ctx, base);
	// lis r11,16467
	ctx.r11.s64 = 1079181312;
	// li r24,0
	ctx.r24.s64 = 0;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// ori r10,r11,17985
	ctx.r10.u64 = ctx.r11.u64 | 17985;
	// stw r24,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r24.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r24,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r24.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// lwz r6,4440(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4440);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addic r8,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r8.s64 = ctx.r6.s64 + -1;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// subfe r6,r8,r6
	temp.u8 = (~ctx.r8.u32 + ctx.r6.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r5,r7,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x83a58550
	ctx.lr = 0x83A55EA8;
	sub_83A58550(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// bne cr6,0x83a55ee4
	if (!cr6.eq) goto loc_83A55EE4;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83a55988
	ctx.lr = 0x83A55EC4;
	sub_83A55988(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-14792
	ctx.r4.s64 = ctx.r11.s64 + -14792;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83a4f528
	ctx.lr = 0x83A55ED8;
	sub_83A4F528(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83A55EE4:
	// lwz r11,20(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20);
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// ble cr6,0x83a55f50
	if (!cr6.gt) goto loc_83A55F50;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
	// addi r26,r11,-14812
	ctx.r26.s64 = ctx.r11.s64 + -14812;
loc_83A55F08:
	// lwz r11,4444(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4444);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r6,4
	ctx.r6.s64 = 4;
	// mulli r5,r11,2112
	ctx.r5.s64 = ctx.r11.s64 * 2112;
	// mullw r4,r10,r11
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r11,r5,r4
	ctx.r11.u64 = ctx.r5.u64 + ctx.r4.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r11.u32);
	// bl 0x83a7bfb8
	ctx.lr = 0x83A55F30;
	sub_83A7BFB8(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a55fa8
	if (cr6.eq) goto loc_83A55FA8;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a55f08
	if (cr6.lt) goto loc_83A55F08;
loc_83A55F50:
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83a7a980
	ctx.lr = 0x83A55F5C;
	sub_83A7A980(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a55f90
	if (!cr6.gt) goto loc_83A55F90;
	// addi r29,r31,28
	ctx.r29.s64 = ctx.r31.s64 + 28;
loc_83A55F70:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwzu r5,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83a58478
	ctx.lr = 0x83A55F80;
	sub_83A58478(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a55f70
	if (cr6.lt) goto loc_83A55F70;
loc_83A55F90:
	// lwz r11,12(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r22)
	PPC_STORE_U32(ctx.r22.u32 + 12, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83A55FA8:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83a55988
	ctx.lr = 0x83A55FB8;
	sub_83A55988(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-14860
	ctx.r4.s64 = ctx.r11.s64 + -14860;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83a4f528
	ctx.lr = 0x83A55FCC;
	sub_83A4F528(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A55FD8"))) PPC_WEAK_FUNC(sub_83A55FD8);
PPC_FUNC_IMPL(__imp__sub_83A55FD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A55FE0;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a5600c
	if (cr6.eq) goto loc_83A5600C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r4,20(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// bl 0x83a51098
	ctx.lr = 0x83A5600C;
	sub_83A51098(ctx, base);
loc_83A5600C:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a560ec
	if (!cr6.gt) goto loc_83A560EC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// addi r26,r11,-14996
	ctx.r26.s64 = ctx.r11.s64 + -14996;
loc_83A5602C:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a56068
	if (cr6.eq) goto loc_83A56068;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83a56068
	if (cr6.eq) goto loc_83A56068;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r25,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r25.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a56060
	if (!cr6.eq) goto loc_83A56060;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a4f528
	ctx.lr = 0x83A56060;
	sub_83A4F528(ctx, base);
loc_83A56060:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83a58488
	ctx.lr = 0x83A56068;
	sub_83A58488(ctx, base);
loc_83A56068:
	// lwz r11,4488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4488);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a560d8
	if (!cr6.gt) goto loc_83A560D8;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a560d8
	if (cr6.eq) goto loc_83A560D8;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,1138
	ctx.r9.s64 = ctx.r11.s64 + 1138;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r11,2340
	ctx.r7.s64 = ctx.r11.s64 + 2340;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r10,r6,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// lwz r9,3612(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3612);
	// lwz r8,3608(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3608);
	// lwz r7,3616(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3616);
	// lhzx r6,r5,r31
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r31.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// bl 0x83a57d08
	ctx.lr = 0x83A560D8;
	sub_83A57D08(ctx, base);
loc_83A560D8:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, xer);
	// blt cr6,0x83a5602c
	if (cr6.lt) goto loc_83A5602C;
loc_83A560EC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A560F4"))) PPC_WEAK_FUNC(sub_83A560F4);
PPC_FUNC_IMPL(__imp__sub_83A560F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A560F8"))) PPC_WEAK_FUNC(sub_83A560F8);
PPC_FUNC_IMPL(__imp__sub_83A560F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A56100;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a5614c
	if (!cr6.gt) goto loc_83A5614C;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83A5611C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a56138
	if (cr6.eq) goto loc_83A56138;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a56138
	if (cr6.eq) goto loc_83A56138;
	// bl 0x83a584c0
	ctx.lr = 0x83A56138;
	sub_83A584C0(ctx, base);
loc_83A56138:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// blt cr6,0x83a5611c
	if (cr6.lt) goto loc_83A5611C;
loc_83A5614C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A56154"))) PPC_WEAK_FUNC(sub_83A56154);
PPC_FUNC_IMPL(__imp__sub_83A56154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A56158"))) PPC_WEAK_FUNC(sub_83A56158);
PPC_FUNC_IMPL(__imp__sub_83A56158) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A56160;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a561ec
	if (cr6.eq) goto loc_83A561EC;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a56180
	if (cr6.eq) goto loc_83A56180;
	// bl 0x83a7bd60
	ctx.lr = 0x83A56180;
	sub_83A7BD60(ctx, base);
loc_83A56180:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a561ec
	if (!cr6.gt) goto loc_83A561EC;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_83A56194:
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83a561d8
	if (cr6.eq) goto loc_83A561D8;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a561d8
	if (!cr6.gt) goto loc_83A561D8;
	// addi r31,r29,32
	ctx.r31.s64 = ctx.r29.s64 + 32;
loc_83A561B4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a561c4
	if (cr6.eq) goto loc_83A561C4;
	// bl 0x83a7bd60
	ctx.lr = 0x83A561C4;
	sub_83A7BD60(ctx, base);
loc_83A561C4:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a561b4
	if (cr6.lt) goto loc_83A561B4;
loc_83A561D8:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, xer);
	// blt cr6,0x83a56194
	if (cr6.lt) goto loc_83A56194;
loc_83A561EC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A561F4"))) PPC_WEAK_FUNC(sub_83A561F4);
PPC_FUNC_IMPL(__imp__sub_83A561F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A561F8"))) PPC_WEAK_FUNC(sub_83A561F8);
PPC_FUNC_IMPL(__imp__sub_83A561F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A56200;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a56254
	if (cr6.eq) goto loc_83A56254;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a56254
	if (!cr6.gt) goto loc_83A56254;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,1
	ctx.r28.s64 = 1;
loc_83A56228:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a56240
	if (cr6.eq) goto loc_83A56240;
	// stw r28,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r28.u32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x83a59b28
	ctx.lr = 0x83A56240;
	sub_83A59B28(ctx, base);
loc_83A56240:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// blt cr6,0x83a56228
	if (cr6.lt) goto loc_83A56228;
loc_83A56254:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5625C"))) PPC_WEAK_FUNC(sub_83A5625C);
PPC_FUNC_IMPL(__imp__sub_83A5625C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A56260"))) PPC_WEAK_FUNC(sub_83A56260);
PPC_FUNC_IMPL(__imp__sub_83A56260) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A56268;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83a562ac
	if (!cr6.gt) goto loc_83A562AC;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_83A5628C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplw cr6,r5,r7
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, xer);
	// beq cr6,0x83a562c4
	if (cr6.eq) goto loc_83A562C4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x83a5628c
	if (cr6.lt) goto loc_83A5628C;
loc_83A562AC:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a7bd90
	ctx.lr = 0x83A562B8;
	sub_83A7BD90(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83A562C4:
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r27,1
	ctx.r27.s64 = 1;
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// stw r11,100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 100, ctx.r11.u32);
	// bl 0x83a7bd80
	ctx.lr = 0x83A562E4;
	sub_83A7BD80(ctx, base);
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a56328
	if (cr6.eq) goto loc_83A56328;
	// lwz r29,12(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83a56328
	if (cr6.eq) goto loc_83A56328;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a584e8
	ctx.lr = 0x83A56304;
	sub_83A584E8(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x83a56320
	if (!cr6.eq) goto loc_83A56320;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-14944
	ctx.r4.s64 = ctx.r11.s64 + -14944;
	// bl 0x83a4f558
	ctx.lr = 0x83A5631C;
	sub_83A4F558(ctx, base);
	// b 0x83a56328
	goto loc_83A56328;
loc_83A56320:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a58518
	ctx.lr = 0x83A56328;
	sub_83A58518(ctx, base);
loc_83A56328:
	// lwzx r11,r30,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r30,r28
	PPC_STORE_U32(ctx.r30.u32 + ctx.r28.u32, ctx.r11.u32);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x83a56388
	if (!cr6.gt) goto loc_83A56388;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
loc_83A56350:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bge cr6,0x83a56360
	if (!cr6.lt) goto loc_83A56360;
	// li r27,2
	ctx.r27.s64 = 2;
loc_83A56360:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bge cr6,0x83a56384
	if (!cr6.lt) goto loc_83A56384;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// blt cr6,0x83a56350
	if (cr6.lt) goto loc_83A56350;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83A56384:
	// li r27,1
	ctx.r27.s64 = 1;
loc_83A56388:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A56394"))) PPC_WEAK_FUNC(sub_83A56394);
PPC_FUNC_IMPL(__imp__sub_83A56394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A56398"))) PPC_WEAK_FUNC(sub_83A56398);
PPC_FUNC_IMPL(__imp__sub_83A56398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A563A0;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// lwz r31,20(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x83a7bda0
	ctx.lr = 0x83A563D4;
	sub_83A7BDA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a5659c
	if (cr6.eq) goto loc_83A5659C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r26,1
	ctx.r26.s64 = 1;
	// lfs f31,-23580(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23580);
	ctx.f31.f64 = double(temp.f32);
loc_83A563EC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a7bd70
	ctx.lr = 0x83A56400;
	sub_83A7BD70(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r4,32
	cr6.compare<uint32_t>(ctx.r4.u32, 32, xer);
	// blt cr6,0x83a56588
	if (cr6.lt) goto loc_83A56588;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83a7a4f0
	ctx.lr = 0x83A56418;
	sub_83A7A4F0(ctx, base);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83a7a680
	ctx.lr = 0x83A56428;
	sub_83A7A680(ctx, base);
	// lbz r11,159(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 159);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83a5647c
	if (!cr6.eq) goto loc_83A5647C;
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a56578
	if (cr6.eq) goto loc_83A56578;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lbz r5,156(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 156);
	// lwz r3,32(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A56458;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83a56578
	if (cr6.eq) goto loc_83A56578;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a7bd80
	ctx.lr = 0x83A56470;
	sub_83A7BD80(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83A5647C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a56524
	if (!cr6.eq) goto loc_83A56524;
	// lwz r11,4488(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4488);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a56504
	if (!cr6.gt) goto loc_83A56504;
	// lwz r10,4508(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4508);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x83a56504
	if (cr6.eq) goto loc_83A56504;
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// std r9,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r9.u64);
	// lfd f11,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lwz r6,3552(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3552);
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r4,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r4.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// fcfid f6,f12
	ctx.f6.f64 = double(ctx.f12.s64);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// fmuls f3,f7,f31
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// fdivs f0,f3,f2
	ctx.f0.f64 = double(float(ctx.f3.f64 / ctx.f2.f64));
	// fdivs f1,f5,f4
	ctx.f1.f64 = double(float(ctx.f5.f64 / ctx.f4.f64));
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x83a56578
	if (cr6.lt) goto loc_83A56578;
	// stw r26,4508(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4508, ctx.r26.u32);
loc_83A56504:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lbz r5,156(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 156);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a56260
	ctx.lr = 0x83A56518;
	sub_83A56260(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83a565e8
	if (cr6.eq) goto loc_83A565E8;
	// b 0x83a56588
	goto loc_83A56588;
loc_83A56524:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x83a56578
	if (!cr6.eq) goto loc_83A56578;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lbz r8,156(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 156);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83a56578
	if (!cr6.gt) goto loc_83A56578;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_83A56544:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x83a56564
	if (!cr6.eq) goto loc_83A56564;
	// lwz r7,100(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// bne cr6,0x83a56564
	if (!cr6.eq) goto loc_83A56564;
	// stw r30,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r30.u32);
loc_83A56564:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// blt cr6,0x83a56544
	if (cr6.lt) goto loc_83A56544;
loc_83A56578:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a7bd90
	ctx.lr = 0x83A56588;
	sub_83A7BD90(ctx, base);
loc_83A56588:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a7bda0
	ctx.lr = 0x83A56594;
	sub_83A7BDA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a563ec
	if (!cr6.eq) goto loc_83A563EC;
loc_83A5659C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a7bda0
	ctx.lr = 0x83A565A8;
	sub_83A7BDA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a565e8
	if (!cr6.eq) goto loc_83A565E8;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a565e8
	if (!cr6.gt) goto loc_83A565E8;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_83A565C0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a565d4
	if (!cr6.eq) goto loc_83A565D4;
	// bl 0x83a55b08
	ctx.lr = 0x83A565D4;
	sub_83A55B08(ctx, base);
loc_83A565D4:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// blt cr6,0x83a565c0
	if (cr6.lt) goto loc_83A565C0;
loc_83A565E8:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A565F4"))) PPC_WEAK_FUNC(sub_83A565F4);
PPC_FUNC_IMPL(__imp__sub_83A565F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A565F8"))) PPC_WEAK_FUNC(sub_83A565F8);
PPC_FUNC_IMPL(__imp__sub_83A565F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A56600;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a566b0
	if (cr6.eq) goto loc_83A566B0;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a566b0
	if (!cr6.gt) goto loc_83A566B0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r26,60
	ctx.r26.s64 = 60;
	// lis r25,-31741
	ctx.r25.s64 = -2080178176;
loc_83A56630:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a5669c
	if (cr6.eq) goto loc_83A5669C;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83a5669c
	if (cr6.eq) goto loc_83A5669C;
	// lwz r11,-10640(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -10640);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a5669c
	if (cr6.eq) goto loc_83A5669C;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83a584e8
	ctx.lr = 0x83A56658;
	sub_83A584E8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a566bc
	if (cr6.eq) goto loc_83A566BC;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83a566bc
	if (cr6.eq) goto loc_83A566BC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4444(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4444);
	// divwu r9,r11,r26
	ctx.r9.u32 = PPCDivide(ctx.r11.u32, ctx.r26.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r31,r8,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x83a7bda0
	ctx.lr = 0x83A56688;
	sub_83A7BDA0(ctx, base);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// bge cr6,0x83a5669c
	if (!cr6.lt) goto loc_83A5669C;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a566bc
	if (cr6.eq) goto loc_83A566BC;
loc_83A5669C:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x83a56630
	if (cr6.lt) goto loc_83A56630;
loc_83A566B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83A566BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A566C8"))) PPC_WEAK_FUNC(sub_83A566C8);
PPC_FUNC_IMPL(__imp__sub_83A566C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A566D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a56744
	if (cr6.eq) goto loc_83A56744;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a56744
	if (!cr6.gt) goto loc_83A56744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83A566F8:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83a56730
	if (cr6.eq) goto loc_83A56730;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83a56730
	if (cr6.eq) goto loc_83A56730;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83a584e8
	ctx.lr = 0x83A56714;
	sub_83A584E8(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x83a56750
	if (!cr6.eq) goto loc_83A56750;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x83a7bda0
	ctx.lr = 0x83A56728;
	sub_83A7BDA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a56750
	if (!cr6.eq) goto loc_83A56750;
loc_83A56730:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x83a566f8
	if (cr6.lt) goto loc_83A566F8;
loc_83A56744:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83A56750:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5675C"))) PPC_WEAK_FUNC(sub_83A5675C);
PPC_FUNC_IMPL(__imp__sub_83A5675C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A56760"))) PPC_WEAK_FUNC(sub_83A56760);
PPC_FUNC_IMPL(__imp__sub_83A56760) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a56770
	if (!cr6.eq) goto loc_83A56770;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83A56770:
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// b 0x83a55b80
	sub_83A55B80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5677C"))) PPC_WEAK_FUNC(sub_83A5677C);
PPC_FUNC_IMPL(__imp__sub_83A5677C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A56780"))) PPC_WEAK_FUNC(sub_83A56780);
PPC_FUNC_IMPL(__imp__sub_83A56780) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a567f0
	if (cr6.eq) goto loc_83A567F0;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a567f0
	if (cr6.eq) goto loc_83A567F0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a567f0
	if (cr6.eq) goto loc_83A567F0;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x83a567cc
	if (!cr6.eq) goto loc_83A567CC;
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
loc_83A567CC:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x83a7bda0
	ctx.lr = 0x83A567D8;
	sub_83A7BDA0(ctx, base);
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
loc_83A567F0:
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

__attribute__((alias("__imp__sub_83A56804"))) PPC_WEAK_FUNC(sub_83A56804);
PPC_FUNC_IMPL(__imp__sub_83A56804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A56808"))) PPC_WEAK_FUNC(sub_83A56808);
PPC_FUNC_IMPL(__imp__sub_83A56808) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// b 0x83a55a28
	sub_83A55A28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A56820"))) PPC_WEAK_FUNC(sub_83A56820);
PPC_FUNC_IMPL(__imp__sub_83A56820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x83A56828;
	__savegprlr_18(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x83a56854
	if (!cr6.eq) goto loc_83A56854;
loc_83A56848:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_83A56854:
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83a55c10
	ctx.lr = 0x83A56868;
	sub_83A55C10(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a56848
	if (cr6.eq) goto loc_83A56848;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x83a568ac
	if (cr6.eq) goto loc_83A568AC;
	// clrlwi r10,r22,2
	ctx.r10.u64 = ctx.r22.u32 & 0x3FFFFFFF;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// rlwinm r9,r22,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a5689c
	if (cr6.eq) goto loc_83A5689C;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83A56894:
	// stwu r20,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r20.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83a56894
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A56894;
loc_83A5689C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r5,r9,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// bl 0x831cee08
	ctx.lr = 0x83A568AC;
	sub_831CEE08(ctx, base);
loc_83A568AC:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a56960
	if (cr6.eq) goto loc_83A56960;
loc_83A568B8:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x83a56954
	if (cr6.eq) goto loc_83A56954;
	// addi r26,r21,32
	ctx.r26.s64 = ctx.r21.s64 + 32;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
loc_83A568CC:
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// lwz r25,0(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,4444(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4444);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwzx r28,r31,r27
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// mullw r5,r28,r11
	ctx.r5.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r11.s32);
	// bl 0x83a7bd70
	ctx.lr = 0x83A568F0;
	sub_83A7BD70(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a56934
	if (cr6.eq) goto loc_83A56934;
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
	// lwz r10,4444(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4444);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// divwu r18,r11,r10
	ctx.r18.u32 = PPCDivide(ctx.r11.u32, ctx.r10.u32);
	// twllei r10,0
	// mullw r5,r10,r18
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r18.s32);
	// lwzx r29,r31,r30
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x83A56920;
	sub_831CE980(ctx, base);
	// rlwinm r11,r18,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r18,r28
	ctx.r9.s64 = ctx.r28.s64 - ctx.r18.s64;
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stwx r9,r31,r27
	PPC_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r9.u32);
	// stwx r8,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u32);
loc_83A56934:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83a7bd90
	ctx.lr = 0x83A56944;
	sub_83A7BD90(ctx, base);
	// addic. r23,r23,-1
	xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	cr0.compare<int32_t>(ctx.r23.s32, 0, xer);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x83a568cc
	if (!cr0.eq) goto loc_83A568CC;
loc_83A56954:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a568b8
	if (!cr6.eq) goto loc_83A568B8;
loc_83A56960:
	// stw r22,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r22.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stw r20,4(r19)
	PPC_STORE_U32(ctx.r19.u32 + 4, ctx.r20.u32);
	// lwz r11,3608(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 3608);
	// stw r11,8(r19)
	PPC_STORE_U32(ctx.r19.u32 + 8, ctx.r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5697C"))) PPC_WEAK_FUNC(sub_83A5697C);
PPC_FUNC_IMPL(__imp__sub_83A5697C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A56980"))) PPC_WEAK_FUNC(sub_83A56980);
PPC_FUNC_IMPL(__imp__sub_83A56980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x83A56988;
	__savegprlr_17(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r18,r8
	ctx.r18.u64 = ctx.r8.u64;
	// bl 0x83a55c10
	ctx.lr = 0x83A569A8;
	sub_83A55C10(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a569bc
	if (!cr6.eq) goto loc_83A569BC;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_83A569BC:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r19,0
	ctx.r19.s64 = 0;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// std r19,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r19.u64);
	// std r19,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r19.u64);
	// std r19,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r19.u64);
	// std r19,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r19.u64);
	// beq cr6,0x83a56a0c
	if (cr6.eq) goto loc_83A56A0C;
	// clrlwi r10,r22,2
	ctx.r10.u64 = ctx.r22.u32 & 0x3FFFFFFF;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// rlwinm r9,r22,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a569fc
	if (cr6.eq) goto loc_83A569FC;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83A569F4:
	// stwu r20,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r20.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83a569f4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A569F4;
loc_83A569FC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r5,r9,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// bl 0x831cee08
	ctx.lr = 0x83A56A0C;
	sub_831CEE08(ctx, base);
loc_83A56A0C:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a56ac0
	if (cr6.eq) goto loc_83A56AC0;
loc_83A56A18:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x83a56ab4
	if (cr6.eq) goto loc_83A56AB4;
	// addi r26,r21,32
	ctx.r26.s64 = ctx.r21.s64 + 32;
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
loc_83A56A2C:
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// lwz r25,0(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,4444(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4444);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwzx r28,r31,r27
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// mullw r5,r28,r11
	ctx.r5.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r11.s32);
	// bl 0x83a7bd70
	ctx.lr = 0x83A56A50;
	sub_83A7BD70(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a56a94
	if (cr6.eq) goto loc_83A56A94;
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
	// lwz r10,4444(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4444);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// divwu r17,r11,r10
	ctx.r17.u32 = PPCDivide(ctx.r11.u32, ctx.r10.u32);
	// twllei r10,0
	// mullw r5,r10,r17
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r17.s32);
	// lwzx r29,r31,r30
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x83A56A80;
	sub_831CE980(ctx, base);
	// rlwinm r11,r17,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r17,r28
	ctx.r9.s64 = ctx.r28.s64 - ctx.r17.s64;
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stwx r9,r31,r27
	PPC_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r9.u32);
	// stwx r8,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u32);
loc_83A56A94:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83a7bd90
	ctx.lr = 0x83A56AA4;
	sub_83A7BD90(ctx, base);
	// addic. r23,r23,-1
	xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	cr0.compare<int32_t>(ctx.r23.s32, 0, xer);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x83a56a2c
	if (!cr0.eq) goto loc_83A56A2C;
loc_83A56AB4:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a56a18
	if (!cr6.eq) goto loc_83A56A18;
loc_83A56AC0:
	// stw r22,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r22.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stw r20,4(r18)
	PPC_STORE_U32(ctx.r18.u32 + 4, ctx.r20.u32);
	// lwz r11,3608(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 3608);
	// stw r11,8(r18)
	PPC_STORE_U32(ctx.r18.u32 + 8, ctx.r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A56ADC"))) PPC_WEAK_FUNC(sub_83A56ADC);
PPC_FUNC_IMPL(__imp__sub_83A56ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A56AE0"))) PPC_WEAK_FUNC(sub_83A56AE0);
PPC_FUNC_IMPL(__imp__sub_83A56AE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A56AE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,-14584
	ctx.r5.s64 = ctx.r11.s64 + -14584;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a78940
	ctx.lr = 0x83A56B10;
	sub_83A78940(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a56b3c
	if (!cr6.eq) goto loc_83A56B3C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r4,r11,-14632
	ctx.r4.s64 = ctx.r11.s64 + -14632;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a4f538
	ctx.lr = 0x83A56B30;
	sub_83A4F538(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A56B3C:
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83A56B4C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83a56b4c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A56B4C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// rlwinm r5,r11,6,0,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// bne cr6,0x83a56b70
	if (!cr6.eq) goto loc_83A56B70;
	// li r5,64
	ctx.r5.s64 = 64;
loc_83A56B70:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a7c138
	ctx.lr = 0x83A56B7C;
	sub_83A7C138(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x83a56bac
	if (!cr6.eq) goto loc_83A56BAC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83a55cb0
	ctx.lr = 0x83A56B94;
	sub_83A55CB0(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-14676
	ctx.r4.s64 = ctx.r11.s64 + -14676;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a4f528
	ctx.lr = 0x83A56BA8;
	sub_83A4F528(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A56BAC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A56BB4"))) PPC_WEAK_FUNC(sub_83A56BB4);
PPC_FUNC_IMPL(__imp__sub_83A56BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A56BB8"))) PPC_WEAK_FUNC(sub_83A56BB8);
PPC_FUNC_IMPL(__imp__sub_83A56BB8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x83a56820
	sub_83A56820(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A56BDC"))) PPC_WEAK_FUNC(sub_83A56BDC);
PPC_FUNC_IMPL(__imp__sub_83A56BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A56BE0"))) PPC_WEAK_FUNC(sub_83A56BE0);
PPC_FUNC_IMPL(__imp__sub_83A56BE0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x83a56980
	sub_83A56980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A56C04"))) PPC_WEAK_FUNC(sub_83A56C04);
PPC_FUNC_IMPL(__imp__sub_83A56C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A56C08"))) PPC_WEAK_FUNC(sub_83A56C08);
PPC_FUNC_IMPL(__imp__sub_83A56C08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A56C10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r11,-10992
	ctx.r30.s64 = ctx.r11.s64 + -10992;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83a58660
	ctx.lr = 0x83A56C30;
	sub_83A58660(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a77b78
	ctx.lr = 0x83A56C44;
	sub_83A77B78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a56c58
	if (!cr6.eq) goto loc_83A56C58;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A56C58:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a58670
	ctx.lr = 0x83A56C68;
	sub_83A58670(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A56C74"))) PPC_WEAK_FUNC(sub_83A56C74);
PPC_FUNC_IMPL(__imp__sub_83A56C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A56C78"))) PPC_WEAK_FUNC(sub_83A56C78);
PPC_FUNC_IMPL(__imp__sub_83A56C78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis r11,520
	ctx.r11.s64 = 34078720;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// ori r5,r11,256
	ctx.r5.u64 = ctx.r11.u64 | 256;
	// bne cr6,0x83a56cb8
	if (!cr6.eq) goto loc_83A56CB8;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r31,r1,88
	ctx.r31.s64 = ctx.r1.s64 + 88;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_83A56CB8:
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// beq cr6,0x83a56cdc
	if (cr6.eq) goto loc_83A56CDC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-14552
	ctx.r4.s64 = ctx.r11.s64 + -14552;
	// bl 0x831ea410
	ctx.lr = 0x83A56CD4;
	sub_831EA410(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a56d20
	goto loc_83A56D20;
loc_83A56CDC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a56cfc
	if (!cr6.eq) goto loc_83A56CFC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,-14408
	ctx.r4.s64 = ctx.r11.s64 + -14408;
	// bl 0x831ea3f0
	ctx.lr = 0x83A56CF4;
	sub_831EA3F0(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
	// b 0x83a56d0c
	goto loc_83A56D0C;
loc_83A56CFC:
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// addi r4,r11,-10992
	ctx.r4.s64 = ctx.r11.s64 + -10992;
	// bl 0x83a58660
	ctx.lr = 0x83A56D08;
	sub_83A58660(ctx, base);
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
loc_83A56D0C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x83a466c0
	ctx.lr = 0x83A56D1C;
	sub_83A466C0(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_83A56D20:
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

__attribute__((alias("__imp__sub_83A56D38"))) PPC_WEAK_FUNC(sub_83A56D38);
PPC_FUNC_IMPL(__imp__sub_83A56D38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A56D40;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83a467f0
	ctx.lr = 0x83A56D54;
	sub_83A467F0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a56d74
	if (!cr6.eq) goto loc_83A56D74;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-14304
	ctx.r4.s64 = ctx.r11.s64 + -14304;
	// bl 0x831ea3f0
	ctx.lr = 0x83A56D6C;
	sub_831EA3F0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A56D74:
	// lis r11,520
	ctx.r11.s64 = 34078720;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// ori r5,r11,256
	ctx.r5.u64 = ctx.r11.u64 | 256;
	// bne cr6,0x83a56d9c
	if (!cr6.eq) goto loc_83A56D9C;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r28,r1,88
	ctx.r28.s64 = ctx.r1.s64 + 88;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_83A56D9C:
	// lwz r6,8(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// beq cr6,0x83a56dc0
	if (cr6.eq) goto loc_83A56DC0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-14552
	ctx.r4.s64 = ctx.r11.s64 + -14552;
	// bl 0x831ea410
	ctx.lr = 0x83A56DB8;
	sub_831EA410(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A56DC0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a56c78
	ctx.lr = 0x83A56DC8;
	sub_83A56C78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x83a56e70
	if (!cr6.gt) goto loc_83A56E70;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a56e18
	if (!cr6.eq) goto loc_83A56E18;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x83a56e18
	if (!cr6.eq) goto loc_83A56E18;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x83a46840
	ctx.lr = 0x83A56DEC;
	sub_83A46840(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a56e10
	if (!cr6.eq) goto loc_83A56E10;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,-14320
	ctx.r4.s64 = ctx.r11.s64 + -14320;
	// bl 0x831ea418
	ctx.lr = 0x83A56E08;
	sub_831EA418(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A56E10:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// b 0x83a56e30
	goto loc_83A56E30;
loc_83A56E18:
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, xer);
	// blt cr6,0x83a56e54
	if (cr6.lt) goto loc_83A56E54;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a56e54
	if (cr6.eq) goto loc_83A56E54;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83A56E30:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83A56E3C;
	sub_831EA7A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r31,r1,104
	ctx.r31.s64 = ctx.r1.s64 + 104;
	// bl 0x83a77b68
	ctx.lr = 0x83A56E50;
	sub_83A77B68(ctx, base);
	// b 0x83a56e78
	goto loc_83A56E78;
loc_83A56E54:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-14336
	ctx.r4.s64 = ctx.r11.s64 + -14336;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A56E68;
	sub_831EA418(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A56E70:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_83A56E78:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x83a46fc8
	ctx.lr = 0x83A56E94;
	sub_83A46FC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x83a56c08
	ctx.lr = 0x83A56EA0;
	sub_83A56C08(ctx, base);
	// lis r10,-31741
	ctx.r10.s64 = -2080178176;
	// addi r3,r10,-10992
	ctx.r3.s64 = ctx.r10.s64 + -10992;
	// bl 0x83a586b8
	ctx.lr = 0x83A56EAC;
	sub_83A586B8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a56ebc
	if (cr6.eq) goto loc_83A56EBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x83A56EBC;
	sub_83102DB0(ctx, base);
loc_83A56EBC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A56EC4"))) PPC_WEAK_FUNC(sub_83A56EC4);
PPC_FUNC_IMPL(__imp__sub_83A56EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A56EC8"))) PPC_WEAK_FUNC(sub_83A56EC8);
PPC_FUNC_IMPL(__imp__sub_83A56EC8) {
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
	// bl 0x832d30f8
	ctx.lr = 0x83A56EE0;
	sub_832D30F8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83A56F00"))) PPC_WEAK_FUNC(sub_83A56F00);
PPC_FUNC_IMPL(__imp__sub_83A56F00) {
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
	// bl 0x832d30f8
	ctx.lr = 0x83A56F18;
	sub_832D30F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83A56F38"))) PPC_WEAK_FUNC(sub_83A56F38);
PPC_FUNC_IMPL(__imp__sub_83A56F38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1000
	ctx.r11.s64 = 1000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r11,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x83a56f80
	if (!cr6.eq) goto loc_83A56F80;
	// bl 0x832d30f8
	ctx.lr = 0x83A56F6C;
	sub_832D30F8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r9,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r9.u64);
	// b 0x83a56f94
	goto loc_83A56F94;
loc_83A56F80:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r8,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r8.u64);
loc_83A56F94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A56FAC"))) PPC_WEAK_FUNC(sub_83A56FAC);
PPC_FUNC_IMPL(__imp__sub_83A56FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A56FB0"))) PPC_WEAK_FUNC(sub_83A56FB0);
PPC_FUNC_IMPL(__imp__sub_83A56FB0) {
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
	// bl 0x83a77b68
	ctx.lr = 0x83A56FC8;
	sub_83A77B68(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a77b78
	ctx.lr = 0x83A56FD8;
	sub_83A77B78(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83A56FE4;
	sub_831EA7A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83102db0
	ctx.lr = 0x83A56FEC;
	sub_83102DB0(ctx, base);
	// bl 0x832d30f8
	ctx.lr = 0x83A56FF0;
	sub_832D30F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x832d30f8
	ctx.lr = 0x83A57000;
	sub_832D30F8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83A57024"))) PPC_WEAK_FUNC(sub_83A57024);
PPC_FUNC_IMPL(__imp__sub_83A57024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A57028"))) PPC_WEAK_FUNC(sub_83A57028);
PPC_FUNC_IMPL(__imp__sub_83A57028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(ctx.r11.u32, 22, xer);
	// bgt cr6,0x83a5712c
	if (cr6.gt) goto loc_83A5712C;
	// lis r12,-31835
	ctx.r12.s64 = -2086338560;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,28752
	ctx.r12.s64 = ctx.r12.s64 + 28752;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83A570AC;
	case 1:
		goto loc_83A570B4;
	case 2:
		goto loc_83A570BC;
	case 3:
		goto loc_83A570C4;
	case 4:
		goto loc_83A570CC;
	case 5:
		goto loc_83A570D4;
	case 6:
		goto loc_83A570DC;
	case 7:
		goto loc_83A570E4;
	case 8:
		goto loc_83A570EC;
	case 9:
		goto loc_83A570F4;
	case 10:
		goto loc_83A5712C;
	case 11:
		goto loc_83A5712C;
	case 12:
		goto loc_83A5712C;
	case 13:
		goto loc_83A5712C;
	case 14:
		goto loc_83A5712C;
	case 15:
		goto loc_83A5712C;
	case 16:
		goto loc_83A5712C;
	case 17:
		goto loc_83A570FC;
	case 18:
		goto loc_83A57104;
	case 19:
		goto loc_83A5710C;
	case 20:
		goto loc_83A57114;
	case 21:
		goto loc_83A5711C;
	case 22:
		goto loc_83A57124;
	default:
		return;
	}
	// lwz r29,28844(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28844);
	// lwz r29,28852(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28852);
	// lwz r29,28860(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28860);
	// lwz r29,28868(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28868);
	// lwz r29,28876(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28876);
	// lwz r29,28884(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28884);
	// lwz r29,28892(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28892);
	// lwz r29,28900(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28900);
	// lwz r29,28908(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28908);
	// lwz r29,28916(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28916);
	// lwz r29,28972(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28972);
	// lwz r29,28972(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28972);
	// lwz r29,28972(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28972);
	// lwz r29,28972(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28972);
	// lwz r29,28972(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28972);
	// lwz r29,28972(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28972);
	// lwz r29,28972(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28972);
	// lwz r29,28924(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28924);
	// lwz r29,28932(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28932);
	// lwz r29,28940(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28940);
	// lwz r29,28948(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28948);
	// lwz r29,28956(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28956);
	// lwz r29,28964(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28964);
loc_83A570AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83A570B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83A570BC:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_83A570C4:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_83A570CC:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_83A570D4:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_83A570DC:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_83A570E4:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_83A570EC:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_83A570F4:
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
loc_83A570FC:
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
loc_83A57104:
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
loc_83A5710C:
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
loc_83A57114:
	// li r3,13
	ctx.r3.s64 = 13;
	// blr 
	return;
loc_83A5711C:
	// li r3,14
	ctx.r3.s64 = 14;
	// blr 
	return;
loc_83A57124:
	// li r3,15
	ctx.r3.s64 = 15;
	// blr 
	return;
loc_83A5712C:
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A57134"))) PPC_WEAK_FUNC(sub_83A57134);
PPC_FUNC_IMPL(__imp__sub_83A57134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A57138"))) PPC_WEAK_FUNC(sub_83A57138);
PPC_FUNC_IMPL(__imp__sub_83A57138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a57394
	if (cr6.eq) goto loc_83A57394;
loc_83A57144:
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(ctx.r11.u32, 22, xer);
	// bgt cr6,0x83a5724c
	if (cr6.gt) goto loc_83A5724C;
	// lis r12,-31835
	ctx.r12.s64 = -2086338560;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,29040
	ctx.r12.s64 = ctx.r12.s64 + 29040;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83A571CC;
	case 1:
		goto loc_83A571D4;
	case 2:
		goto loc_83A571DC;
	case 3:
		goto loc_83A571E4;
	case 4:
		goto loc_83A571EC;
	case 5:
		goto loc_83A571F4;
	case 6:
		goto loc_83A571FC;
	case 7:
		goto loc_83A57204;
	case 8:
		goto loc_83A5720C;
	case 9:
		goto loc_83A57214;
	case 10:
		goto loc_83A5724C;
	case 11:
		goto loc_83A5724C;
	case 12:
		goto loc_83A5724C;
	case 13:
		goto loc_83A5724C;
	case 14:
		goto loc_83A5724C;
	case 15:
		goto loc_83A5724C;
	case 16:
		goto loc_83A5724C;
	case 17:
		goto loc_83A5721C;
	case 18:
		goto loc_83A57224;
	case 19:
		goto loc_83A5722C;
	case 20:
		goto loc_83A57234;
	case 21:
		goto loc_83A5723C;
	case 22:
		goto loc_83A57244;
	default:
		return;
	}
	// lwz r29,29132(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29132);
	// lwz r29,29140(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29140);
	// lwz r29,29148(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29148);
	// lwz r29,29156(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29156);
	// lwz r29,29164(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29164);
	// lwz r29,29172(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29172);
	// lwz r29,29180(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29180);
	// lwz r29,29188(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29188);
	// lwz r29,29196(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29196);
	// lwz r29,29204(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29204);
	// lwz r29,29260(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29260);
	// lwz r29,29260(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29260);
	// lwz r29,29260(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29260);
	// lwz r29,29260(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29260);
	// lwz r29,29260(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29260);
	// lwz r29,29260(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29260);
	// lwz r29,29260(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29260);
	// lwz r29,29212(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29212);
	// lwz r29,29220(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29220);
	// lwz r29,29228(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29228);
	// lwz r29,29236(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29236);
	// lwz r29,29244(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29244);
	// lwz r29,29252(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29252);
loc_83A571CC:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x83a57250
	goto loc_83A57250;
loc_83A571D4:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x83a57250
	goto loc_83A57250;
loc_83A571DC:
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x83a57250
	goto loc_83A57250;
loc_83A571E4:
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x83a57250
	goto loc_83A57250;
loc_83A571EC:
	// li r10,4
	ctx.r10.s64 = 4;
	// b 0x83a57250
	goto loc_83A57250;
loc_83A571F4:
	// li r10,5
	ctx.r10.s64 = 5;
	// b 0x83a57250
	goto loc_83A57250;
loc_83A571FC:
	// li r10,6
	ctx.r10.s64 = 6;
	// b 0x83a57250
	goto loc_83A57250;
loc_83A57204:
	// li r10,7
	ctx.r10.s64 = 7;
	// b 0x83a57250
	goto loc_83A57250;
loc_83A5720C:
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x83a57250
	goto loc_83A57250;
loc_83A57214:
	// li r10,9
	ctx.r10.s64 = 9;
	// b 0x83a57250
	goto loc_83A57250;
loc_83A5721C:
	// li r10,10
	ctx.r10.s64 = 10;
	// b 0x83a57250
	goto loc_83A57250;
loc_83A57224:
	// li r10,11
	ctx.r10.s64 = 11;
	// b 0x83a57250
	goto loc_83A57250;
loc_83A5722C:
	// li r10,12
	ctx.r10.s64 = 12;
	// b 0x83a57250
	goto loc_83A57250;
loc_83A57234:
	// li r10,13
	ctx.r10.s64 = 13;
	// b 0x83a57250
	goto loc_83A57250;
loc_83A5723C:
	// li r10,14
	ctx.r10.s64 = 14;
	// b 0x83a57250
	goto loc_83A57250;
loc_83A57244:
	// li r10,15
	ctx.r10.s64 = 15;
	// b 0x83a57250
	goto loc_83A57250;
loc_83A5724C:
	// li r10,16
	ctx.r10.s64 = 16;
loc_83A57250:
	// lbz r11,1(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(ctx.r11.u32, 22, xer);
	// bgt cr6,0x83a57358
	if (cr6.gt) goto loc_83A57358;
	// lis r12,-31835
	ctx.r12.s64 = -2086338560;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,29308
	ctx.r12.s64 = ctx.r12.s64 + 29308;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83A572D8;
	case 1:
		goto loc_83A572E0;
	case 2:
		goto loc_83A572E8;
	case 3:
		goto loc_83A572F0;
	case 4:
		goto loc_83A572F8;
	case 5:
		goto loc_83A57300;
	case 6:
		goto loc_83A57308;
	case 7:
		goto loc_83A57310;
	case 8:
		goto loc_83A57318;
	case 9:
		goto loc_83A57320;
	case 10:
		goto loc_83A57358;
	case 11:
		goto loc_83A57358;
	case 12:
		goto loc_83A57358;
	case 13:
		goto loc_83A57358;
	case 14:
		goto loc_83A57358;
	case 15:
		goto loc_83A57358;
	case 16:
		goto loc_83A57358;
	case 17:
		goto loc_83A57328;
	case 18:
		goto loc_83A57330;
	case 19:
		goto loc_83A57338;
	case 20:
		goto loc_83A57340;
	case 21:
		goto loc_83A57348;
	case 22:
		goto loc_83A57350;
	default:
		return;
	}
	// lwz r29,29400(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29400);
	// lwz r29,29408(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29408);
	// lwz r29,29416(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29416);
	// lwz r29,29424(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29424);
	// lwz r29,29432(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29432);
	// lwz r29,29440(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29440);
	// lwz r29,29448(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29448);
	// lwz r29,29456(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29456);
	// lwz r29,29464(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29464);
	// lwz r29,29472(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29472);
	// lwz r29,29528(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29528);
	// lwz r29,29528(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29528);
	// lwz r29,29528(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29528);
	// lwz r29,29528(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29528);
	// lwz r29,29528(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29528);
	// lwz r29,29528(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29528);
	// lwz r29,29528(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29528);
	// lwz r29,29480(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29480);
	// lwz r29,29488(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29488);
	// lwz r29,29496(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29496);
	// lwz r29,29504(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29504);
	// lwz r29,29512(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29512);
	// lwz r29,29520(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29520);
loc_83A572D8:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83a5735c
	goto loc_83A5735C;
loc_83A572E0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83a5735c
	goto loc_83A5735C;
loc_83A572E8:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x83a5735c
	goto loc_83A5735C;
loc_83A572F0:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x83a5735c
	goto loc_83A5735C;
loc_83A572F8:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x83a5735c
	goto loc_83A5735C;
loc_83A57300:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x83a5735c
	goto loc_83A5735C;
loc_83A57308:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x83a5735c
	goto loc_83A5735C;
loc_83A57310:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x83a5735c
	goto loc_83A5735C;
loc_83A57318:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x83a5735c
	goto loc_83A5735C;
loc_83A57320:
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x83a5735c
	goto loc_83A5735C;
loc_83A57328:
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x83a5735c
	goto loc_83A5735C;
loc_83A57330:
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x83a5735c
	goto loc_83A5735C;
loc_83A57338:
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x83a5735c
	goto loc_83A5735C;
loc_83A57340:
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x83a5735c
	goto loc_83A5735C;
loc_83A57348:
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x83a5735c
	goto loc_83A5735C;
loc_83A57350:
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x83a5735c
	goto loc_83A5735C;
loc_83A57358:
	// li r11,16
	ctx.r11.s64 = 16;
loc_83A5735C:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,15
	cr6.compare<int32_t>(ctx.r10.s32, 15, xer);
	// bgt cr6,0x83a5739c
	if (cr6.gt) goto loc_83A5739C;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(ctx.r11.s32, 15, xer);
	// bgt cr6,0x83a5739c
	if (cr6.gt) goto loc_83A5739C;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// or r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 | ctx.r11.u64;
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// stbx r7,r9,r3
	PPC_STORE_U8(ctx.r9.u32 + ctx.r3.u32, ctx.r7.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// blt cr6,0x83a57144
	if (cr6.lt) goto loc_83A57144;
loc_83A57394:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83A5739C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A573A4"))) PPC_WEAK_FUNC(sub_83A573A4);
PPC_FUNC_IMPL(__imp__sub_83A573A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A573A8"))) PPC_WEAK_FUNC(sub_83A573A8);
PPC_FUNC_IMPL(__imp__sub_83A573A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x83A573B0;
	__savegprlr_20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// stw r6,44(r1)
	PPC_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// cmplwi cr6,r4,22
	cr6.compare<uint32_t>(ctx.r4.u32, 22, xer);
	// bge cr6,0x83a573c8
	if (!cr6.lt) goto loc_83A573C8;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_83A573C8:
	// li r8,77
	ctx.r8.s64 = 77;
	// lbz r10,36(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 36);
	// li r7,70
	ctx.r7.s64 = 70;
	// lbz r3,47(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 47);
	// li r6,83
	ctx.r6.s64 = 83;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lis r5,-32205
	ctx.r5.s64 = -2110586880;
	// stb r6,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
	// rlwinm r31,r10,28,4,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// addi r30,r5,-14244
	ctx.r30.s64 = ctx.r5.s64 + -14244;
	// lbz r9,37(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 37);
	// li r4,58
	ctx.r4.s64 = 58;
	// lbz r8,38(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 38);
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// lbz r7,39(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 39);
	// stb r4,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r4.u8);
	// rlwinm r22,r3,28,4,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r21,r3,28
	ctx.r21.u64 = ctx.r3.u32 & 0xF;
	// lbz r6,44(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 44);
	// rlwinm r29,r9,28,4,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// lbz r5,45(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 45);
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// lbz r4,46(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 46);
	// rlwinm r28,r8,28,4,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r8,r8,28
	ctx.r8.u64 = ctx.r8.u32 & 0xF;
	// rlwinm r27,r7,28,4,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	// rlwinm r26,r6,28,4,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r6,r6,28
	ctx.r6.u64 = ctx.r6.u32 & 0xF;
	// li r25,46
	ctx.r25.s64 = 46;
	// rlwinm r24,r5,28,4,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r5,r5,28
	ctx.r5.u64 = ctx.r5.u32 & 0xF;
	// rlwinm r23,r4,28,4,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r4,r4,28
	ctx.r4.u64 = ctx.r4.u32 & 0xF;
	// li r20,0
	ctx.r20.s64 = 0;
	// lbzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// stbu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r3.u8);
	ctx.r11.u32 = ea;
	// lbzx r3,r10,r30
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r30.u32);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stb r3,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r3.u8);
	// lbzx r31,r29,r30
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r30.u32);
	// addi r3,r10,9
	ctx.r3.s64 = ctx.r10.s64 + 9;
	// stb r31,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r31.u8);
	// lbzx r10,r9,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r30.u32);
	// stb r10,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r10.u8);
	// lbzx r9,r28,r30
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r30.u32);
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// lbzx r8,r8,r30
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r30.u32);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbzx r10,r27,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r30.u32);
	// stb r10,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r10.u8);
	// lbzx r9,r7,r30
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r30.u32);
	// stb r9,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r9.u8);
	// stb r25,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r25.u8);
	// lbzx r8,r26,r30
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r30.u32);
	// stb r8,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r8.u8);
	// lbzx r7,r6,r30
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r30.u32);
	// stb r7,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r7.u8);
	// lbzx r6,r24,r30
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r30.u32);
	// stb r6,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r6.u8);
	// lbzx r5,r5,r30
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r30.u32);
	// stb r5,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r5.u8);
	// lbzx r10,r23,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r30.u32);
	// stb r10,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r10.u8);
	// lbzx r9,r4,r30
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r30.u32);
	// stb r9,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r9.u8);
	// lbzx r8,r22,r30
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r22.u32 + ctx.r30.u32);
	// stb r8,15(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15, ctx.r8.u8);
	// lbzx r7,r21,r30
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r21.u32 + ctx.r30.u32);
	// stb r7,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r7.u8);
	// stb r20,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r20.u8);
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A574EC"))) PPC_WEAK_FUNC(sub_83A574EC);
PPC_FUNC_IMPL(__imp__sub_83A574EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A574F0"))) PPC_WEAK_FUNC(sub_83A574F0);
PPC_FUNC_IMPL(__imp__sub_83A574F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A574F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a57528
	if (cr6.eq) goto loc_83A57528;
loc_83A57518:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a57518
	if (!cr6.eq) goto loc_83A57518;
loc_83A57528:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(ctx.r11.u32, 22, xer);
	// beq cr6,0x83a57540
	if (cr6.eq) goto loc_83A57540;
loc_83A57534:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83A57540:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r11,-14228
	ctx.r10.s64 = ctx.r11.s64 + -14228;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// subf r10,r10,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r10.s64;
loc_83A57554:
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x83a57534
	if (!cr6.eq) goto loc_83A57534;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(ctx.r29.u32, 4, xer);
	// blt cr6,0x83a57554
	if (cr6.lt) goto loc_83A57554;
	// add r31,r29,r28
	ctx.r31.u64 = ctx.r29.u64 + ctx.r28.u64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83A5757C:
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// bl 0x83a57028
	ctx.lr = 0x83A57584;
	sub_83A57028(ctx, base);
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83a57028
	ctx.lr = 0x83A57594;
	sub_83A57028(ctx, base);
	// extsb r10,r25
	ctx.r10.s64 = ctx.r25.s8;
	// cmpwi cr6,r10,15
	cr6.compare<int32_t>(ctx.r10.s32, 15, xer);
	// bgt cr6,0x83a57534
	if (cr6.gt) goto loc_83A57534;
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(ctx.r11.s32, 15, xer);
	// bgt cr6,0x83a57534
	if (cr6.gt) goto loc_83A57534;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// or r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// stbx r7,r30,r9
	PPC_STORE_U8(ctx.r30.u32 + ctx.r9.u32, ctx.r7.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, xer);
	// blt cr6,0x83a5757c
	if (cr6.lt) goto loc_83A5757C;
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,46
	cr6.compare<uint32_t>(ctx.r10.u32, 46, xer);
	// bne cr6,0x83a57534
	if (!cr6.eq) goto loc_83A57534;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a57138
	ctx.lr = 0x83A575FC;
	sub_83A57138(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a57534
	if (cr6.eq) goto loc_83A57534;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// std r9,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r9.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A57620"))) PPC_WEAK_FUNC(sub_83A57620);
PPC_FUNC_IMPL(__imp__sub_83A57620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A5763C"))) PPC_WEAK_FUNC(sub_83A5763C);
PPC_FUNC_IMPL(__imp__sub_83A5763C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A57640"))) PPC_WEAK_FUNC(sub_83A57640);
PPC_FUNC_IMPL(__imp__sub_83A57640) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x83a574f0
	ctx.lr = 0x83A5766C;
	sub_83A574F0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a576a0
	if (!cr6.eq) goto loc_83A576A0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,2
	ctx.r10.s64 = 2;
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// std r9,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r9.u64);
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
loc_83A576A0:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83A576BC"))) PPC_WEAK_FUNC(sub_83A576BC);
PPC_FUNC_IMPL(__imp__sub_83A576BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A576C0"))) PPC_WEAK_FUNC(sub_83A576C0);
PPC_FUNC_IMPL(__imp__sub_83A576C0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// std r11,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r11.u64);
	// stw r9,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A576E4"))) PPC_WEAK_FUNC(sub_83A576E4);
PPC_FUNC_IMPL(__imp__sub_83A576E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A576E8"))) PPC_WEAK_FUNC(sub_83A576E8);
PPC_FUNC_IMPL(__imp__sub_83A576E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// cmpd cr6,r8,r10
	cr6.compare<int64_t>(ctx.r8.s64, ctx.r10.s64, xer);
	// ble cr6,0x83a57728
	if (!cr6.gt) goto loc_83A57728;
	// subf r30,r11,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_83A57728:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rotlwi r5,r30,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x83A5773C;
	sub_831CE980(ctx, base);
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// li r10,2
	ctx.r10.s64 = 2;
	// std r30,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r30.u64);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// std r9,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r9.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A5776C"))) PPC_WEAK_FUNC(sub_83A5776C);
PPC_FUNC_IMPL(__imp__sub_83A5776C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A57770"))) PPC_WEAK_FUNC(sub_83A57770);
PPC_FUNC_IMPL(__imp__sub_83A57770) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// extsw r3,r5
	ctx.r3.s64 = ctx.r5.s32;
	// blt cr6,0x83a577a4
	if (cr6.lt) goto loc_83A577A4;
	// beq cr6,0x83a57794
	if (cr6.eq) goto loc_83A57794;
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// std r10,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r10.u64);
	// blr 
	return;
loc_83A57794:
	// ld r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// std r10,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r10.u64);
	// blr 
	return;
loc_83A577A4:
	// std r4,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r4.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A577AC"))) PPC_WEAK_FUNC(sub_83A577AC);
PPC_FUNC_IMPL(__imp__sub_83A577AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A577B0"))) PPC_WEAK_FUNC(sub_83A577B0);
PPC_FUNC_IMPL(__imp__sub_83A577B0) {
	PPC_FUNC_PROLOGUE();
	// ld r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A577B8"))) PPC_WEAK_FUNC(sub_83A577B8);
PPC_FUNC_IMPL(__imp__sub_83A577B8) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// addi r9,r11,-21736
	ctx.r9.s64 = ctx.r11.s64 + -21736;
	// addi r8,r10,-20080
	ctx.r8.s64 = ctx.r10.s64 + -20080;
	// clrlwi r7,r4,31
	ctx.r7.u64 = ctx.r4.u32 & 0x1;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83a577fc
	if (cr6.eq) goto loc_83A577FC;
	// li r4,64
	ctx.r4.s64 = 64;
	// bl 0x83a79fb8
	ctx.lr = 0x83A577F8;
	sub_83A79FB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83A577FC:
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

__attribute__((alias("__imp__sub_83A57810"))) PPC_WEAK_FUNC(sub_83A57810);
PPC_FUNC_IMPL(__imp__sub_83A57810) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x83a577b8
	sub_83A577B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A57818"))) PPC_WEAK_FUNC(sub_83A57818);
PPC_FUNC_IMPL(__imp__sub_83A57818) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,-14172
	ctx.r5.s64 = ctx.r11.s64 + -14172;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x83a79ff0
	ctx.lr = 0x83A57844;
	sub_83A79FF0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a578cc
	if (cr6.eq) goto loc_83A578CC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// lis r9,-32205
	ctx.r9.s64 = -2110586880;
	// addi r8,r11,-21736
	ctx.r8.s64 = ctx.r11.s64 + -21736;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r10,-14216
	ctx.r7.s64 = ctx.r10.s64 + -14216;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// addi r6,r9,-14220
	ctx.r6.s64 = ctx.r9.s64 + -14220;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// std r11,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r11.u64);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r31.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// std r11,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r11.u64);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
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
loc_83A578CC:
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

__attribute__((alias("__imp__sub_83A578E4"))) PPC_WEAK_FUNC(sub_83A578E4);
PPC_FUNC_IMPL(__imp__sub_83A578E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A578E8"))) PPC_WEAK_FUNC(sub_83A578E8);
PPC_FUNC_IMPL(__imp__sub_83A578E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lis r10,-31741
	ctx.r10.s64 = -2080178176;
	// addi r9,r11,-14072
	ctx.r9.s64 = ctx.r11.s64 + -14072;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r9,-10636(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10636, ctx.r9.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A57914"))) PPC_WEAK_FUNC(sub_83A57914);
PPC_FUNC_IMPL(__imp__sub_83A57914) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A57918"))) PPC_WEAK_FUNC(sub_83A57918);
PPC_FUNC_IMPL(__imp__sub_83A57918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A57934"))) PPC_WEAK_FUNC(sub_83A57934);
PPC_FUNC_IMPL(__imp__sub_83A57934) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A57938"))) PPC_WEAK_FUNC(sub_83A57938);
PPC_FUNC_IMPL(__imp__sub_83A57938) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a57984
	if (cr6.eq) goto loc_83A57984;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a57984
	if (cr6.eq) goto loc_83A57984;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x83A57978;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83A57984:
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

__attribute__((alias("__imp__sub_83A57998"))) PPC_WEAK_FUNC(sub_83A57998);
PPC_FUNC_IMPL(__imp__sub_83A57998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A579A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a579f8
	if (cr6.eq) goto loc_83A579F8;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a579f8
	if (cr6.eq) goto loc_83A579F8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,-13964
	ctx.r5.s64 = ctx.r11.s64 + -13964;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a78940
	ctx.lr = 0x83A579DC;
	sub_83A78940(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a57a04
	if (!cr6.eq) goto loc_83A57A04;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,-13980
	ctx.r4.s64 = ctx.r11.s64 + -13980;
	// bl 0x831ea418
	ctx.lr = 0x83A579F8;
	sub_831EA418(ctx, base);
loc_83A579F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A57A04:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A57A18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a57a38
	if (!cr6.eq) goto loc_83A57A38;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a78a48
	ctx.lr = 0x83A57A2C;
	sub_83A78A48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A57A38:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A57A50"))) PPC_WEAK_FUNC(sub_83A57A50);
PPC_FUNC_IMPL(__imp__sub_83A57A50) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a57aa0
	if (cr6.eq) goto loc_83A57AA0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a57aa0
	if (cr6.eq) goto loc_83A57AA0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A57A88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x83a78a48
	ctx.lr = 0x83A57AA0;
	sub_83A78A48(ctx, base);
loc_83A57AA0:
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

__attribute__((alias("__imp__sub_83A57AB4"))) PPC_WEAK_FUNC(sub_83A57AB4);
PPC_FUNC_IMPL(__imp__sub_83A57AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A57AB8"))) PPC_WEAK_FUNC(sub_83A57AB8);
PPC_FUNC_IMPL(__imp__sub_83A57AB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A57AE4"))) PPC_WEAK_FUNC(sub_83A57AE4);
PPC_FUNC_IMPL(__imp__sub_83A57AE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A57AE8"))) PPC_WEAK_FUNC(sub_83A57AE8);
PPC_FUNC_IMPL(__imp__sub_83A57AE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A57B14"))) PPC_WEAK_FUNC(sub_83A57B14);
PPC_FUNC_IMPL(__imp__sub_83A57B14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A57B18"))) PPC_WEAK_FUNC(sub_83A57B18);
PPC_FUNC_IMPL(__imp__sub_83A57B18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A57B3C"))) PPC_WEAK_FUNC(sub_83A57B3C);
PPC_FUNC_IMPL(__imp__sub_83A57B3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A57B40"))) PPC_WEAK_FUNC(sub_83A57B40);
PPC_FUNC_IMPL(__imp__sub_83A57B40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A57B6C"))) PPC_WEAK_FUNC(sub_83A57B6C);
PPC_FUNC_IMPL(__imp__sub_83A57B6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A57B70"))) PPC_WEAK_FUNC(sub_83A57B70);
PPC_FUNC_IMPL(__imp__sub_83A57B70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A57B94"))) PPC_WEAK_FUNC(sub_83A57B94);
PPC_FUNC_IMPL(__imp__sub_83A57B94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A57B98"))) PPC_WEAK_FUNC(sub_83A57B98);
PPC_FUNC_IMPL(__imp__sub_83A57B98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A57BBC"))) PPC_WEAK_FUNC(sub_83A57BBC);
PPC_FUNC_IMPL(__imp__sub_83A57BBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A57BC0"))) PPC_WEAK_FUNC(sub_83A57BC0);
PPC_FUNC_IMPL(__imp__sub_83A57BC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A57BE4"))) PPC_WEAK_FUNC(sub_83A57BE4);
PPC_FUNC_IMPL(__imp__sub_83A57BE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A57BE8"))) PPC_WEAK_FUNC(sub_83A57BE8);
PPC_FUNC_IMPL(__imp__sub_83A57BE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A57C14"))) PPC_WEAK_FUNC(sub_83A57C14);
PPC_FUNC_IMPL(__imp__sub_83A57C14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A57C18"))) PPC_WEAK_FUNC(sub_83A57C18);
PPC_FUNC_IMPL(__imp__sub_83A57C18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A57C44"))) PPC_WEAK_FUNC(sub_83A57C44);
PPC_FUNC_IMPL(__imp__sub_83A57C44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A57C48"))) PPC_WEAK_FUNC(sub_83A57C48);
PPC_FUNC_IMPL(__imp__sub_83A57C48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,60(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A57C74"))) PPC_WEAK_FUNC(sub_83A57C74);
PPC_FUNC_IMPL(__imp__sub_83A57C74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A57C78"))) PPC_WEAK_FUNC(sub_83A57C78);
PPC_FUNC_IMPL(__imp__sub_83A57C78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,68(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A57CA4"))) PPC_WEAK_FUNC(sub_83A57CA4);
PPC_FUNC_IMPL(__imp__sub_83A57CA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A57CA8"))) PPC_WEAK_FUNC(sub_83A57CA8);
PPC_FUNC_IMPL(__imp__sub_83A57CA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,72(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A57CD4"))) PPC_WEAK_FUNC(sub_83A57CD4);
PPC_FUNC_IMPL(__imp__sub_83A57CD4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A57CD8"))) PPC_WEAK_FUNC(sub_83A57CD8);
PPC_FUNC_IMPL(__imp__sub_83A57CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A57D04"))) PPC_WEAK_FUNC(sub_83A57D04);
PPC_FUNC_IMPL(__imp__sub_83A57D04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A57D08"))) PPC_WEAK_FUNC(sub_83A57D08);
PPC_FUNC_IMPL(__imp__sub_83A57D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A57D2C"))) PPC_WEAK_FUNC(sub_83A57D2C);
PPC_FUNC_IMPL(__imp__sub_83A57D2C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A57D30"))) PPC_WEAK_FUNC(sub_83A57D30);
PPC_FUNC_IMPL(__imp__sub_83A57D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A57D54"))) PPC_WEAK_FUNC(sub_83A57D54);
PPC_FUNC_IMPL(__imp__sub_83A57D54) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A57D58"))) PPC_WEAK_FUNC(sub_83A57D58);
PPC_FUNC_IMPL(__imp__sub_83A57D58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A57D7C"))) PPC_WEAK_FUNC(sub_83A57D7C);
PPC_FUNC_IMPL(__imp__sub_83A57D7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A57D80"))) PPC_WEAK_FUNC(sub_83A57D80);
PPC_FUNC_IMPL(__imp__sub_83A57D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A57DA4"))) PPC_WEAK_FUNC(sub_83A57DA4);
PPC_FUNC_IMPL(__imp__sub_83A57DA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A57DA8"))) PPC_WEAK_FUNC(sub_83A57DA8);
PPC_FUNC_IMPL(__imp__sub_83A57DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A57DCC"))) PPC_WEAK_FUNC(sub_83A57DCC);
PPC_FUNC_IMPL(__imp__sub_83A57DCC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A57DD0"))) PPC_WEAK_FUNC(sub_83A57DD0);
PPC_FUNC_IMPL(__imp__sub_83A57DD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A57DF4"))) PPC_WEAK_FUNC(sub_83A57DF4);
PPC_FUNC_IMPL(__imp__sub_83A57DF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A57DF8"))) PPC_WEAK_FUNC(sub_83A57DF8);
PPC_FUNC_IMPL(__imp__sub_83A57DF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A57E1C"))) PPC_WEAK_FUNC(sub_83A57E1C);
PPC_FUNC_IMPL(__imp__sub_83A57E1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A57E20"))) PPC_WEAK_FUNC(sub_83A57E20);
PPC_FUNC_IMPL(__imp__sub_83A57E20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A57E44"))) PPC_WEAK_FUNC(sub_83A57E44);
PPC_FUNC_IMPL(__imp__sub_83A57E44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A57E48"))) PPC_WEAK_FUNC(sub_83A57E48);
PPC_FUNC_IMPL(__imp__sub_83A57E48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A57E6C"))) PPC_WEAK_FUNC(sub_83A57E6C);
PPC_FUNC_IMPL(__imp__sub_83A57E6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A57E70"))) PPC_WEAK_FUNC(sub_83A57E70);
PPC_FUNC_IMPL(__imp__sub_83A57E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A57E94"))) PPC_WEAK_FUNC(sub_83A57E94);
PPC_FUNC_IMPL(__imp__sub_83A57E94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A57E98"))) PPC_WEAK_FUNC(sub_83A57E98);
PPC_FUNC_IMPL(__imp__sub_83A57E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A57EBC"))) PPC_WEAK_FUNC(sub_83A57EBC);
PPC_FUNC_IMPL(__imp__sub_83A57EBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A57EC0"))) PPC_WEAK_FUNC(sub_83A57EC0);
PPC_FUNC_IMPL(__imp__sub_83A57EC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A57EE4"))) PPC_WEAK_FUNC(sub_83A57EE4);
PPC_FUNC_IMPL(__imp__sub_83A57EE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A57EE8"))) PPC_WEAK_FUNC(sub_83A57EE8);
PPC_FUNC_IMPL(__imp__sub_83A57EE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A57F04"))) PPC_WEAK_FUNC(sub_83A57F04);
PPC_FUNC_IMPL(__imp__sub_83A57F04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A57F08"))) PPC_WEAK_FUNC(sub_83A57F08);
PPC_FUNC_IMPL(__imp__sub_83A57F08) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a57f54
	if (cr6.eq) goto loc_83A57F54;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a57f54
	if (cr6.eq) goto loc_83A57F54;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x83A57F48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83A57F54:
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

__attribute__((alias("__imp__sub_83A57F68"))) PPC_WEAK_FUNC(sub_83A57F68);
PPC_FUNC_IMPL(__imp__sub_83A57F68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A57F70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a57fc8
	if (cr6.eq) goto loc_83A57FC8;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a57fc8
	if (cr6.eq) goto loc_83A57FC8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,-13860
	ctx.r5.s64 = ctx.r11.s64 + -13860;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a78940
	ctx.lr = 0x83A57FAC;
	sub_83A78940(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a57fd4
	if (!cr6.eq) goto loc_83A57FD4;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,-13876
	ctx.r4.s64 = ctx.r11.s64 + -13876;
	// bl 0x831ea418
	ctx.lr = 0x83A57FC8;
	sub_831EA418(ctx, base);
loc_83A57FC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A57FD4:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A57FE8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a58008
	if (!cr6.eq) goto loc_83A58008;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a78a48
	ctx.lr = 0x83A57FFC;
	sub_83A78A48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A58008:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A58020"))) PPC_WEAK_FUNC(sub_83A58020);
PPC_FUNC_IMPL(__imp__sub_83A58020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A58044"))) PPC_WEAK_FUNC(sub_83A58044);
PPC_FUNC_IMPL(__imp__sub_83A58044) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A58048"))) PPC_WEAK_FUNC(sub_83A58048);
PPC_FUNC_IMPL(__imp__sub_83A58048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a58074
	if (cr6.eq) goto loc_83A58074;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_83A58074:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A5807C"))) PPC_WEAK_FUNC(sub_83A5807C);
PPC_FUNC_IMPL(__imp__sub_83A5807C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A58080"))) PPC_WEAK_FUNC(sub_83A58080);
PPC_FUNC_IMPL(__imp__sub_83A58080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,64(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A580AC"))) PPC_WEAK_FUNC(sub_83A580AC);
PPC_FUNC_IMPL(__imp__sub_83A580AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A580B0"))) PPC_WEAK_FUNC(sub_83A580B0);
PPC_FUNC_IMPL(__imp__sub_83A580B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A580D4"))) PPC_WEAK_FUNC(sub_83A580D4);
PPC_FUNC_IMPL(__imp__sub_83A580D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A580D8"))) PPC_WEAK_FUNC(sub_83A580D8);
PPC_FUNC_IMPL(__imp__sub_83A580D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A580FC"))) PPC_WEAK_FUNC(sub_83A580FC);
PPC_FUNC_IMPL(__imp__sub_83A580FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A58100"))) PPC_WEAK_FUNC(sub_83A58100);
PPC_FUNC_IMPL(__imp__sub_83A58100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A58124"))) PPC_WEAK_FUNC(sub_83A58124);
PPC_FUNC_IMPL(__imp__sub_83A58124) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A58128"))) PPC_WEAK_FUNC(sub_83A58128);
PPC_FUNC_IMPL(__imp__sub_83A58128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83A58130;
	__savegprlr_23(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,2380(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2380);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,2384(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2384);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// lwz r7,4472(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4472);
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r6,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r26,8(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic r28,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r28.s64 = ctx.r7.s64 + -1;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r25,20(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subfe r28,r28,r7
	temp.u8 = (~ctx.r28.u32 + ctx.r7.u32 < ~ctx.r28.u32) | (~ctx.r28.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r28.u64 = ~ctx.r28.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r24,24(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r23,32(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r25,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// stw r24,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r24.u32);
	// stw r23,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r23.u32);
	// bne cr6,0x83a58200
	if (!cr6.eq) goto loc_83A58200;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a58200
	if (cr6.eq) goto loc_83A58200;
	// lwz r7,3388(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3388);
	// lwz r6,3392(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3392);
	// lwz r26,44(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r25,40(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mullw r24,r6,r7
	ctx.r24.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// cmplw cr6,r25,r24
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r24.u32, xer);
	// bge cr6,0x83a58200
	if (!cr6.lt) goto loc_83A58200;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,-13600
	ctx.r4.s64 = ctx.r11.s64 + -13600;
	// b 0x83a58330
	goto loc_83A58330;
loc_83A58200:
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mullw r6,r10,r11
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// blt cr6,0x83a58328
	if (cr6.lt) goto loc_83A58328;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mullw r10,r29,r3
	ctx.r10.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r3.s32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a58328
	if (cr6.lt) goto loc_83A58328;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mullw r10,r8,r9
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a58328
	if (cr6.lt) goto loc_83A58328;
	// lwz r11,80(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 80);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
	// stw r10,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r10.u32);
	// ble cr6,0x83a58278
	if (!cr6.gt) goto loc_83A58278;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r10,r1,284
	ctx.r10.s64 = ctx.r1.s64 + 284;
	// addi r11,r5,80
	ctx.r11.s64 = ctx.r5.s64 + 80;
loc_83A58254:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwzu r9,20(r11)
	ea = 20 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r7.u32);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// stwu r9,16(r10)
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83a58254
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A58254;
loc_83A58278:
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// lwz r3,4424(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4424);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83a57c78
	ctx.lr = 0x83A58288;
	sub_83A57C78(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a582ac
	if (!cr6.eq) goto loc_83A582AC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-13664
	ctx.r4.s64 = ctx.r11.s64 + -13664;
	// bl 0x83a4f528
	ctx.lr = 0x83A582A0;
	sub_83A4F528(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83A582AC:
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, xer);
	// bne cr6,0x83a58304
	if (!cr6.eq) goto loc_83A58304;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a5831c
	if (cr6.eq) goto loc_83A5831C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r10,24(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4472(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4472);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// bl 0x83a58080
	ctx.lr = 0x83A582E0;
	sub_83A58080(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a5831c
	if (!cr6.eq) goto loc_83A5831C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-13728
	ctx.r4.s64 = ctx.r11.s64 + -13728;
	// bl 0x83a4f528
	ctx.lr = 0x83A582F8;
	sub_83A4F528(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83A58304:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x83a5831c
	if (!cr6.eq) goto loc_83A5831C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_83A5831C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83A58328:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,-13772
	ctx.r4.s64 = ctx.r11.s64 + -13772;
loc_83A58330:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a4f538
	ctx.lr = 0x83A5833C;
	sub_83A4F538(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A58348"))) PPC_WEAK_FUNC(sub_83A58348);
PPC_FUNC_IMPL(__imp__sub_83A58348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lis r10,-31741
	ctx.r10.s64 = -2080178176;
	// addi r9,r11,-13488
	ctx.r9.s64 = ctx.r11.s64 + -13488;
	// stw r9,-10632(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10632, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A5835C"))) PPC_WEAK_FUNC(sub_83A5835C);
PPC_FUNC_IMPL(__imp__sub_83A5835C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A58360"))) PPC_WEAK_FUNC(sub_83A58360);
PPC_FUNC_IMPL(__imp__sub_83A58360) {
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
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a58388
	if (cr6.eq) goto loc_83A58388;
	// bl 0x83a58ea0
	ctx.lr = 0x83A58384;
	sub_83A58EA0(ctx, base);
	// b 0x83a5838c
	goto loc_83A5838C;
loc_83A58388:
	// bl 0x83a58710
	ctx.lr = 0x83A5838C;
	sub_83A58710(ctx, base);
loc_83A5838C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a583d0
	if (cr6.eq) goto loc_83A583D0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a583d0
	if (cr6.eq) goto loc_83A583D0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r10,23
	ctx.r11.s64 = ctx.r10.s64 + 23;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bctrl 
	ctx.lr = 0x83A583B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
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
loc_83A583D0:
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

__attribute__((alias("__imp__sub_83A583E8"))) PPC_WEAK_FUNC(sub_83A583E8);
PPC_FUNC_IMPL(__imp__sub_83A583E8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a58460
	if (cr6.eq) goto loc_83A58460;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a58460
	if (cr6.eq) goto loc_83A58460;
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a5842c
	if (cr6.eq) goto loc_83A5842C;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x83a78a48
	ctx.lr = 0x83A5842C;
	sub_83A78A48(ctx, base);
loc_83A5842C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a58450
	if (cr6.eq) goto loc_83A58450;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A5844C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_83A58450:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83a78a48
	ctx.lr = 0x83A58460;
	sub_83A78A48(ctx, base);
loc_83A58460:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A58478"))) PPC_WEAK_FUNC(sub_83A58478);
PPC_FUNC_IMPL(__imp__sub_83A58478) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A58488"))) PPC_WEAK_FUNC(sub_83A58488);
PPC_FUNC_IMPL(__imp__sub_83A58488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// lwz r8,28(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A584BC"))) PPC_WEAK_FUNC(sub_83A584BC);
PPC_FUNC_IMPL(__imp__sub_83A584BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A584C0"))) PPC_WEAK_FUNC(sub_83A584C0);
PPC_FUNC_IMPL(__imp__sub_83A584C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A584E4"))) PPC_WEAK_FUNC(sub_83A584E4);
PPC_FUNC_IMPL(__imp__sub_83A584E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A584E8"))) PPC_WEAK_FUNC(sub_83A584E8);
PPC_FUNC_IMPL(__imp__sub_83A584E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a5850c
	if (cr6.eq) goto loc_83A5850C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a5850c
	if (cr6.eq) goto loc_83A5850C;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_83A5850C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A58514"))) PPC_WEAK_FUNC(sub_83A58514);
PPC_FUNC_IMPL(__imp__sub_83A58514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A58518"))) PPC_WEAK_FUNC(sub_83A58518);
PPC_FUNC_IMPL(__imp__sub_83A58518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A5853C"))) PPC_WEAK_FUNC(sub_83A5853C);
PPC_FUNC_IMPL(__imp__sub_83A5853C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A58540"))) PPC_WEAK_FUNC(sub_83A58540);
PPC_FUNC_IMPL(__imp__sub_83A58540) {
	PPC_FUNC_PROLOGUE();
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// stw r5,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A5854C"))) PPC_WEAK_FUNC(sub_83A5854C);
PPC_FUNC_IMPL(__imp__sub_83A5854C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A58550"))) PPC_WEAK_FUNC(sub_83A58550);
PPC_FUNC_IMPL(__imp__sub_83A58550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A58558;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a58578
	if (cr6.eq) goto loc_83A58578;
	// bl 0x83a58ea0
	ctx.lr = 0x83A58574;
	sub_83A58EA0(ctx, base);
	// b 0x83a5857c
	goto loc_83A5857C;
loc_83A58578:
	// bl 0x83a58710
	ctx.lr = 0x83A5857C;
	sub_83A58710(ctx, base);
loc_83A5857C:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a58600
	if (cr6.eq) goto loc_83A58600;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a58600
	if (cr6.eq) goto loc_83A58600;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,-13384
	ctx.r5.s64 = ctx.r11.s64 + -13384;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a78940
	ctx.lr = 0x83A585AC;
	sub_83A78940(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a58600
	if (cr6.eq) goto loc_83A58600;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83A585C8:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83a585c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A585C8;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r10,-13396
	ctx.r5.s64 = ctx.r10.s64 + -13396;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a78940
	ctx.lr = 0x83A585EC;
	sub_83A78940(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a5860c
	if (!cr6.eq) goto loc_83A5860C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83A585FC:
	// bl 0x83a583e8
	ctx.lr = 0x83A58600;
	sub_83A583E8(ctx, base);
loc_83A58600:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83A5860C:
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r30,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A5862C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x83a585fc
	if (cr6.eq) goto loc_83A585FC;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A58650"))) PPC_WEAK_FUNC(sub_83A58650);
PPC_FUNC_IMPL(__imp__sub_83A58650) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x83a59530
	sub_83A59530(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5865C"))) PPC_WEAK_FUNC(sub_83A5865C);
PPC_FUNC_IMPL(__imp__sub_83A5865C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A58660"))) PPC_WEAK_FUNC(sub_83A58660);
PPC_FUNC_IMPL(__imp__sub_83A58660) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x83a595b8
	sub_83A595B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5866C"))) PPC_WEAK_FUNC(sub_83A5866C);
PPC_FUNC_IMPL(__imp__sub_83A5866C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A58670"))) PPC_WEAK_FUNC(sub_83A58670);
PPC_FUNC_IMPL(__imp__sub_83A58670) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// bl 0x83a5a328
	ctx.lr = 0x83A58690;
	sub_83A5A328(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83a586a0
	if (cr6.eq) goto loc_83A586A0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83A586A0:
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

__attribute__((alias("__imp__sub_83A586B4"))) PPC_WEAK_FUNC(sub_83A586B4);
PPC_FUNC_IMPL(__imp__sub_83A586B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A586B8"))) PPC_WEAK_FUNC(sub_83A586B8);
PPC_FUNC_IMPL(__imp__sub_83A586B8) {
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
	// bl 0x83a4d0c0
	ctx.lr = 0x83A586D0;
	sub_83A4D0C0(ctx, base);
	// addi r5,r3,32
	ctx.r5.s64 = ctx.r3.s64 + 32;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83a59740
	ctx.lr = 0x83A586E0;
	sub_83A59740(ctx, base);
	// bl 0x83a4c478
	ctx.lr = 0x83A586E4;
	sub_83A4C478(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a586f8
	if (!cr6.eq) goto loc_83A586F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a58650
	ctx.lr = 0x83A586F4;
	sub_83A58650(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x83A586F8;
	sub_83102DB0(ctx, base);
loc_83A586F8:
	// bl 0x83a4c430
	ctx.lr = 0x83A586FC;
	sub_83A4C430(ctx, base);
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

__attribute__((alias("__imp__sub_83A58710"))) PPC_WEAK_FUNC(sub_83A58710);
PPC_FUNC_IMPL(__imp__sub_83A58710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,-16768
	ctx.r3.s64 = ctx.r11.s64 + -16768;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A5871C"))) PPC_WEAK_FUNC(sub_83A5871C);
PPC_FUNC_IMPL(__imp__sub_83A5871C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A58720"))) PPC_WEAK_FUNC(sub_83A58720);
PPC_FUNC_IMPL(__imp__sub_83A58720) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x831cdcf0
	ctx.lr = 0x83A5874C;
	sub_831CDCF0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x83a587c8
	if (!cr6.eq) goto loc_83A587C8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a7c178
	ctx.lr = 0x83A58760;
	sub_83A7C178(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a587c8
	if (cr6.eq) goto loc_83A587C8;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// beq cr6,0x83a58784
	if (cr6.eq) goto loc_83A58784;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
loc_83A58784:
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83A587AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r7,108
	ctx.r3.s64 = ctx.r7.s64 + 108;
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
loc_83A587C8:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_83A587E0"))) PPC_WEAK_FUNC(sub_83A587E0);
PPC_FUNC_IMPL(__imp__sub_83A587E0) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a58850
	if (cr6.eq) goto loc_83A58850;
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a58824
	if (cr6.eq) goto loc_83A58824;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A58820;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
loc_83A58824:
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a58840
	if (cr6.eq) goto loc_83A58840;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83a78a48
	ctx.lr = 0x83A5883C;
	sub_83A78A48(ctx, base);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
loc_83A58840:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83a78a48
	ctx.lr = 0x83A58850;
	sub_83A78A48(ctx, base);
loc_83A58850:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A58868"))) PPC_WEAK_FUNC(sub_83A58868);
PPC_FUNC_IMPL(__imp__sub_83A58868) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A58874"))) PPC_WEAK_FUNC(sub_83A58874);
PPC_FUNC_IMPL(__imp__sub_83A58874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A58878"))) PPC_WEAK_FUNC(sub_83A58878);
PPC_FUNC_IMPL(__imp__sub_83A58878) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A58884"))) PPC_WEAK_FUNC(sub_83A58884);
PPC_FUNC_IMPL(__imp__sub_83A58884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A58888"))) PPC_WEAK_FUNC(sub_83A58888);
PPC_FUNC_IMPL(__imp__sub_83A58888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x83A58890;
	__savegprlr_20(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r24,8(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r20,4(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r21,8(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83a7bd70
	ctx.lr = 0x83A588C0;
	sub_83A7BD70(ctx, base);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a58ad4
	if (cr6.eq) goto loc_83A58AD4;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x83a7a4f0
	ctx.lr = 0x83A588D8;
	sub_83A7A4F0(ctx, base);
	// lbz r10,271(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 271);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a58ac4
	if (!cr6.eq) goto loc_83A58AC4;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x83a7a680
	ctx.lr = 0x83A588F4;
	sub_83A7A680(ctx, base);
	// lwz r11,88(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// li r10,1024
	ctx.r10.s64 = 1024;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// rlwinm r25,r11,10,0,21
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// beq cr6,0x83a5893c
	if (cr6.eq) goto loc_83A5893C;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_83A58918:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83a7bda0
	ctx.lr = 0x83A58924;
	sub_83A7BDA0(ctx, base);
	// cmplw cr6,r3,r25
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r25.u32, xer);
	// blt cr6,0x83a58a1c
	if (cr6.lt) goto loc_83A58A1C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r31,r24
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r24.u32, xer);
	// blt cr6,0x83a58918
	if (cr6.lt) goto loc_83A58918;
loc_83A5893C:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x83a589b0
	if (cr6.eq) goto loc_83A589B0;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// addi r31,r1,208
	ctx.r31.s64 = ctx.r1.s64 + 208;
	// subf r23,r11,r21
	ctx.r23.s64 = ctx.r21.s64 - ctx.r11.s64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83A58958:
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// add r29,r30,r11
	ctx.r29.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r23,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r29.u32);
	// bl 0x83a7bd70
	ctx.lr = 0x83A58974;
	sub_83A7BD70(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// blt cr6,0x83a58a00
	if (cr6.lt) goto loc_83A58A00;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// lwz r8,88(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// divwu r26,r11,r8
	ctx.r26.u32 = PPCDivide(ctx.r11.u32, ctx.r8.u32);
	// twllei r8,0
	// stwx r10,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r10.u32);
	// cmplw cr6,r28,r24
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// blt cr6,0x83a58958
	if (cr6.lt) goto loc_83A58958;
loc_83A589B0:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r3,76(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// ori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 | 1;
	// lwz r11,72(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bne cr6,0x83a58a34
	if (!cr6.eq) goto loc_83A58A34;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// li r7,0
	ctx.r7.s64 = 0;
	// bctrl 
	ctx.lr = 0x83A589FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83a58a44
	goto loc_83A58A44;
loc_83A58A00:
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r28,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r3,r9,r21
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r21.u32);
	// bl 0x83a7bd80
	ctx.lr = 0x83A58A1C;
	sub_83A7BD80(ctx, base);
loc_83A58A1C:
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83a7bd80
	ctx.lr = 0x83A58A2C;
	sub_83A7BD80(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_83A58A34:
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// li r7,0
	ctx.r7.s64 = 0;
	// bctrl 
	ctx.lr = 0x83A58A44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A58A44:
	// lwz r11,92(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,16(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,92(r27)
	PPC_STORE_U32(ctx.r27.u32 + 92, ctx.r11.u32);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x83a58a68
	if (!cr6.eq) goto loc_83A58A68;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,84(r27)
	PPC_STORE_U32(ctx.r27.u32 + 84, ctx.r11.u32);
loc_83A58A68:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x83a58ac4
	if (cr6.eq) goto loc_83A58AC4;
	// addi r31,r21,-4
	ctx.r31.s64 = ctx.r21.s64 + -4;
	// addi r29,r1,208
	ctx.r29.s64 = ctx.r1.s64 + 208;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_83A58A7C:
	// lwz r11,88(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mullw r4,r11,r10
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x83a7bdb0
	ctx.lr = 0x83A58A98;
	sub_83A7BDB0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83a7bd90
	ctx.lr = 0x83A58AA8;
	sub_83A7BD90(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzu r3,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// bl 0x83a7bd80
	ctx.lr = 0x83A58AB8;
	sub_83A7BD80(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x83a58a7c
	if (!cr0.eq) goto loc_83A58A7C;
loc_83A58AC4:
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83a7bd90
	ctx.lr = 0x83A58AD4;
	sub_83A7BD90(ctx, base);
loc_83A58AD4:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A58ADC"))) PPC_WEAK_FUNC(sub_83A58ADC);
PPC_FUNC_IMPL(__imp__sub_83A58ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A58AE0"))) PPC_WEAK_FUNC(sub_83A58AE0);
PPC_FUNC_IMPL(__imp__sub_83A58AE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A58AE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A58B24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a58b40
	if (cr6.eq) goto loc_83A58B40;
loc_83A58B2C:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A58B40:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,128
	ctx.r9.s64 = 128;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A58B78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a58b2c
	if (!cr6.eq) goto loc_83A58B2C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A58B8C"))) PPC_WEAK_FUNC(sub_83A58B8C);
PPC_FUNC_IMPL(__imp__sub_83A58B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A58B90"))) PPC_WEAK_FUNC(sub_83A58B90);
PPC_FUNC_IMPL(__imp__sub_83A58B90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A58B98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a58cac
	if (!cr6.eq) goto loc_83A58CAC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a7c178
	ctx.lr = 0x83A58BB8;
	sub_83A7C178(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a58cac
	if (cr6.eq) goto loc_83A58CAC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,-13360
	ctx.r5.s64 = ctx.r11.s64 + -13360;
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a78940
	ctx.lr = 0x83A58BDC;
	sub_83A78940(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a58cac
	if (cr6.eq) goto loc_83A58CAC;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83A58BF4;
	sub_831CDCF0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83a58c14
	if (!cr6.eq) goto loc_83A58C14;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// b 0x83a58c18
	goto loc_83A58C18;
loc_83A58C14:
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_83A58C18:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83A58C48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32205
	ctx.r7.s64 = -2110586880;
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r7,-13376
	ctx.r5.s64 = ctx.r7.s64 + -13376;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a78940
	ctx.lr = 0x83A58C60;
	sub_83A78940(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// bne cr6,0x83a58c78
	if (!cr6.eq) goto loc_83A58C78;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a78a48
	ctx.lr = 0x83A58C78;
	sub_83A78A48(ctx, base);
loc_83A58C78:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r6,r31,76
	ctx.r6.s64 = ctx.r31.s64 + 76;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A58C98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,76(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83a58cb8
	if (!cr6.eq) goto loc_83A58CB8;
	// bl 0x83a587e0
	ctx.lr = 0x83A58CAC;
	sub_83A587E0(ctx, base);
loc_83A58CAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A58CB8:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// stw r7,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A58CE0"))) PPC_WEAK_FUNC(sub_83A58CE0);
PPC_FUNC_IMPL(__imp__sub_83A58CE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A58CE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a7bd70
	ctx.lr = 0x83A58D0C;
	sub_83A7BD70(ctx, base);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a58da8
	if (cr6.eq) goto loc_83A58DA8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x83a7a4f0
	ctx.lr = 0x83A58D24;
	sub_83A7A4F0(ctx, base);
	// lbz r10,111(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 111);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a58d48
	if (cr6.eq) goto loc_83A58D48;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a7bd90
	ctx.lr = 0x83A58D40;
	sub_83A7BD90(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A58D48:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x83a7a680
	ctx.lr = 0x83A58D58;
	sub_83A7A680(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A58D70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a58ae0
	ctx.lr = 0x83A58D80;
	sub_83A58AE0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a58d90
	if (!cr6.eq) goto loc_83A58D90;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_83A58D90:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a7bd90
	ctx.lr = 0x83A58DA0;
	sub_83A7BD90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
loc_83A58DA8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A58DB0"))) PPC_WEAK_FUNC(sub_83A58DB0);
PPC_FUNC_IMPL(__imp__sub_83A58DB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A58DB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r30,16(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r29,20(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A58DDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a58ae0
	ctx.lr = 0x83A58DEC;
	sub_83A58AE0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a58e0c
	if (!cr6.eq) goto loc_83A58E0C;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A58E0C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

