#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82ABC2A8"))) PPC_WEAK_FUNC(sub_82ABC2A8);
PPC_FUNC_IMPL(__imp__sub_82ABC2A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82ABC2B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-2352(r1)
	ea = -2352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82bfb928
	ctx.lr = 0x82ABC2C0;
	sub_82BFB928(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abc340
	if (cr6.eq) goto loc_82ABC340;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a8dc38
	ctx.lr = 0x82ABC2D0;
	sub_82A8DC38(ctx, base);
	// bl 0x82bfb928
	ctx.lr = 0x82ABC2D4;
	sub_82BFB928(ctx, base);
	// lwz r31,29088(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29088);
	// bl 0x82bfb928
	ctx.lr = 0x82ABC2DC;
	sub_82BFB928(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,1200
	ctx.r3.s64 = ctx.r1.s64 + 1200;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x82bfba88
	ctx.lr = 0x82ABC2F0;
	sub_82BFBA88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a8dd48
	ctx.lr = 0x82ABC2FC;
	sub_82A8DD48(ctx, base);
	// addi r3,r1,1200
	ctx.r3.s64 = ctx.r1.s64 + 1200;
	// bl 0x82a8d878
	ctx.lr = 0x82ABC304;
	sub_82A8D878(ctx, base);
	// addi r11,r30,1044
	ctx.r11.s64 = ctx.r30.s64 + 1044;
	// addi r10,r1,1124
	ctx.r10.s64 = ctx.r1.s64 + 1124;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_82ABC310:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82abc330
	if (!cr0.eq) goto loc_82ABC330;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x82abc310
	if (!cr6.eq) goto loc_82ABC310;
loc_82ABC330:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82abc34c
	if (!cr6.eq) goto loc_82ABC34C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a8d878
	ctx.lr = 0x82ABC340;
	sub_82A8D878(ctx, base);
loc_82ABC340:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2352
	ctx.r1.s64 = ctx.r1.s64 + 2352;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82ABC34C:
	// bl 0x82bfb928
	ctx.lr = 0x82ABC350;
	sub_82BFB928(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r31,21
	cr6.compare<uint32_t>(ctx.r31.u32, 21, xer);
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// bge cr6,0x82abc36c
	if (!cr6.lt) goto loc_82ABC36C;
	// addi r11,r31,7274
	ctx.r11.s64 = ctx.r31.s64 + 7274;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r10,r3
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f1.f64 = double(temp.f32);
loc_82ABC36C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bfa108
	ctx.lr = 0x82ABC374;
	sub_82BFA108(ctx, base);
	// stb r3,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r3.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a8d878
	ctx.lr = 0x82ABC380;
	sub_82A8D878(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2352
	ctx.r1.s64 = ctx.r1.s64 + 2352;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABC38C"))) PPC_WEAK_FUNC(sub_82ABC38C);
PPC_FUNC_IMPL(__imp__sub_82ABC38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABC390"))) PPC_WEAK_FUNC(sub_82ABC390);
PPC_FUNC_IMPL(__imp__sub_82ABC390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82ABC398;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82ABC3A4;
	sub_82D1C1A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82bfb928
	ctx.lr = 0x82ABC3AC;
	sub_82BFB928(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abc3c4
	if (cr6.eq) goto loc_82ABC3C4;
	// cmplwi cr6,r30,21
	cr6.compare<uint32_t>(ctx.r30.u32, 21, xer);
	// bge cr6,0x82abc3c4
	if (!cr6.lt) goto loc_82ABC3C4;
	// bl 0x82bfb928
	ctx.lr = 0x82ABC3C0;
	sub_82BFB928(ctx, base);
	// stw r30,29088(r3)
	PPC_STORE_U32(ctx.r3.u32 + 29088, ctx.r30.u32);
loc_82ABC3C4:
	// lwz r11,744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r29,740(r31)
	PPC_STORE_U8(ctx.r31.u32 + 740, ctx.r29.u8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82abc3e8
	if (!cr6.gt) goto loc_82ABC3E8;
	// bl 0x82d1b890
	ctx.lr = 0x82ABC3E0;
	sub_82D1B890(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82ABC3E8:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d199d0
	ctx.lr = 0x82ABC3F0;
	sub_82D199D0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r30,r11,24399
	ctx.r30.s64 = ctx.r11.s64 + 24399;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r30,305
	ctx.r3.s64 = ctx.r30.s64 + 305;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2ee48
	ctx.lr = 0x82ABC40C;
	sub_82D2EE48(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r3.u32);
	// beq cr6,0x82abc474
	if (cr6.eq) goto loc_82ABC474;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d199d0
	ctx.lr = 0x82ABC420;
	sub_82D199D0(ctx, base);
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// lwz r3,736(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// ori r4,r4,184
	ctx.r4.u64 = ctx.r4.u64 | 184;
	// bl 0x82d2ada8
	ctx.lr = 0x82ABC430;
	sub_82D2ADA8(ctx, base);
	// lwz r3,736(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// addi r5,r30,-1
	ctx.r5.s64 = ctx.r30.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ABC44C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,736(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,92(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82ABC468;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,736(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// bl 0x83103100
	ctx.lr = 0x82ABC474;
	sub_83103100(ctx, base);
loc_82ABC474:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d17b90
	ctx.lr = 0x82ABC47C;
	sub_82D17B90(ctx, base);
	// stb r29,743(r31)
	PPC_STORE_U8(ctx.r31.u32 + 743, ctx.r29.u8);
	// stw r29,732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 732, ctx.r29.u32);
	// stw r29,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABC490"))) PPC_WEAK_FUNC(sub_82ABC490);
PPC_FUNC_IMPL(__imp__sub_82ABC490) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x83763ef8
	ctx.lr = 0x82ABC4B0;
	sub_83763EF8(ctx, base);
	// lwz r3,168(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// cmplwi cr6,r30,12
	cr6.compare<uint32_t>(ctx.r30.u32, 12, xer);
	// bne cr6,0x82abc4d0
	if (!cr6.eq) goto loc_82ABC4D0;
	// bl 0x8319fea0
	ctx.lr = 0x82ABC4C0;
	sub_8319FEA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82abc4d4
	if (!cr6.eq) goto loc_82ABC4D4;
loc_82ABC4D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82ABC4D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABC4EC"))) PPC_WEAK_FUNC(sub_82ABC4EC);
PPC_FUNC_IMPL(__imp__sub_82ABC4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABC4F0"))) PPC_WEAK_FUNC(sub_82ABC4F0);
PPC_FUNC_IMPL(__imp__sub_82ABC4F0) {
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
	// bl 0x830ee9a8
	ctx.lr = 0x82ABC504;
	sub_830EE9A8(ctx, base);
	// bl 0x82bfb928
	ctx.lr = 0x82ABC508;
	sub_82BFB928(ctx, base);
	// lwz r31,29196(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29196);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82abc54c
	if (cr6.eq) goto loc_82ABC54C;
	// li r11,27
	ctx.r11.s64 = 27;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82ABC528;
	sub_82595150(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310eff8
	ctx.lr = 0x82ABC530;
	sub_8310EFF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82ABC538;
	sub_82416268(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82ABC540;
	sub_82595170(ctx, base);
	// bl 0x82bfb928
	ctx.lr = 0x82ABC544;
	sub_82BFB928(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,29196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 29196, ctx.r10.u32);
loc_82ABC54C:
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

__attribute__((alias("__imp__sub_82ABC564"))) PPC_WEAK_FUNC(sub_82ABC564);
PPC_FUNC_IMPL(__imp__sub_82ABC564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABC568"))) PPC_WEAK_FUNC(sub_82ABC568);
PPC_FUNC_IMPL(__imp__sub_82ABC568) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82ABC570;
	__savegprlr_29(ctx, base);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x830ee9a8
	ctx.lr = 0x82ABC57C;
	sub_830EE9A8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,741(r29)
	PPC_STORE_U8(ctx.r29.u32 + 741, ctx.r11.u8);
	// bl 0x83763ef8
	ctx.lr = 0x82ABC588;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abc628
	if (cr6.eq) goto loc_82ABC628;
	// bl 0x83763ef8
	ctx.lr = 0x82ABC594;
	sub_83763EF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,480
	ctx.r5.s64 = 480;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,168(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// bl 0x831cdcf0
	ctx.lr = 0x82ABC5AC;
	sub_831CDCF0(ctx, base);
	// bl 0x83763ef8
	ctx.lr = 0x82ABC5B0;
	sub_83763EF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abc5e0
	if (cr6.eq) goto loc_82ABC5E0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8306e988
	ctx.lr = 0x82ABC5CC;
	sub_8306E988(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83773c28
	ctx.lr = 0x82ABC5E0;
	sub_83773C28(ctx, base);
loc_82ABC5E0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,9
	ctx.r5.s64 = 9;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a70db0
	ctx.lr = 0x82ABC5F8;
	sub_82A70DB0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82abc628
	if (cr6.eq) goto loc_82ABC628;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82abc628
	if (cr6.eq) goto loc_82ABC628;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r11,24080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24080);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82abc628
	if (cr6.eq) goto loc_82ABC628;
	// li r3,185
	ctx.r3.s64 = 185;
	// bl 0x82d84728
	ctx.lr = 0x82ABC628;
	sub_82D84728(ctx, base);
loc_82ABC628:
	// bl 0x82d26ed8
	ctx.lr = 0x82ABC62C;
	sub_82D26ED8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abc64c
	if (cr6.eq) goto loc_82ABC64C;
	// bl 0x82d26ed8
	ctx.lr = 0x82ABC638;
	sub_82D26ED8(ctx, base);
	// li r4,1000
	ctx.r4.s64 = 1000;
	// bl 0x82d26960
	ctx.lr = 0x82ABC640;
	sub_82D26960(ctx, base);
	// bl 0x82d26ed8
	ctx.lr = 0x82ABC644;
	sub_82D26ED8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d26900
	ctx.lr = 0x82ABC64C;
	sub_82D26900(ctx, base);
loc_82ABC64C:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19858
	ctx.lr = 0x82ABC658;
	sub_82D19858(ctx, base);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABC660"))) PPC_WEAK_FUNC(sub_82ABC660);
PPC_FUNC_IMPL(__imp__sub_82ABC660) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x828eda90
	ctx.lr = 0x82ABC69C;
	sub_828EDA90(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82abc6e4
	if (cr6.eq) goto loc_82ABC6E4;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82abc6e0
	if (cr6.eq) goto loc_82ABC6E0;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82ABC6C4:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82abc6d4
	if (cr6.eq) goto loc_82ABC6D4;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
loc_82ABC6D4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82abc6c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82ABC6C4;
loc_82ABC6E0:
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_82ABC6E4:
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

__attribute__((alias("__imp__sub_82ABC700"))) PPC_WEAK_FUNC(sub_82ABC700);
PPC_FUNC_IMPL(__imp__sub_82ABC700) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82ABC708;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82abc774
	if (!cr6.eq) goto loc_82ABC774;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r28.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r5,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r5.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82ABC73C;
	sub_8259CB28(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82abc75c
	if (cr6.lt) goto loc_82ABC75C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82ABC75C;
	sub_825952B8(ctx, base);
loc_82ABC75C:
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82ABC774:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82abc78c
	if (!cr6.eq) goto loc_82ABC78C;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x82abc7d0
	goto loc_82ABC7D0;
loc_82ABC78C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82d282b8
	ctx.lr = 0x82ABC7A8;
	sub_82D282B8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835d31b0
	ctx.lr = 0x82ABC7B0;
	sub_835D31B0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82d05020
	ctx.lr = 0x82ABC7C8;
	sub_82D05020(ctx, base);
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
loc_82ABC7D0:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
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
	ctx.lr = 0x82ABC7F0;
	sub_8259CB28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8387e8e0
	ctx.lr = 0x82ABC7F8;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABC804"))) PPC_WEAK_FUNC(sub_82ABC804);
PPC_FUNC_IMPL(__imp__sub_82ABC804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABC808"))) PPC_WEAK_FUNC(sub_82ABC808);
PPC_FUNC_IMPL(__imp__sub_82ABC808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82ABC810;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// bl 0x82abc660
	ctx.lr = 0x82ABC830;
	sub_82ABC660(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// li r28,-1
	ctx.r28.s64 = -1;
	// stw r27,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// stb r29,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r29.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// bl 0x8259cb28
	ctx.lr = 0x82ABC85C;
	sub_8259CB28(ctx, base);
	// lbz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 48);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// li r5,992
	ctx.r5.s64 = 992;
	// stb r10,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r10.u8);
	// lbz r9,49(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 49);
	// stb r9,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r9.u8);
	// bl 0x831ce980
	ctx.lr = 0x82ABC87C;
	sub_831CE980(ctx, base);
	// lwz r8,1044(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1044);
	// addi r11,r31,1044
	ctx.r11.s64 = ctx.r31.s64 + 1044;
	// addi r3,r31,1060
	ctx.r3.s64 = ctx.r31.s64 + 1060;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r8,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r8.u32);
	// addi r4,r30,1060
	ctx.r4.s64 = ctx.r30.s64 + 1060;
	// lwz r7,1048(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1048);
	// stw r7,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r7.u32);
	// lwz r11,1052(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1052);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// lwz r10,1056(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1056);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r27,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r27.u32);
	// stw r29,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r29.u32);
	// stb r29,1060(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1060, ctx.r29.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82ABC8C0;
	sub_8259CB28(ctx, base);
	// stw r27,1108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1108, ctx.r27.u32);
	// stw r29,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r29.u32);
	// addi r3,r31,1088
	ctx.r3.s64 = ctx.r31.s64 + 1088;
	// stb r29,1088(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1088, ctx.r29.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,1088
	ctx.r4.s64 = ctx.r30.s64 + 1088;
	// bl 0x8259cb28
	ctx.lr = 0x82ABC8E0;
	sub_8259CB28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABC8EC"))) PPC_WEAK_FUNC(sub_82ABC8EC);
PPC_FUNC_IMPL(__imp__sub_82ABC8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABC8F0"))) PPC_WEAK_FUNC(sub_82ABC8F0);
PPC_FUNC_IMPL(__imp__sub_82ABC8F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82ABC8F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82d19bc0
	ctx.lr = 0x82ABC918;
	sub_82D19BC0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abc924
	if (cr6.eq) goto loc_82ABC924;
	// lwz r31,132(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
loc_82ABC924:
	// subf r31,r31,r28
	ctx.r31.s64 = ctx.r28.s64 - ctx.r31.s64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82abcc24
	if (cr6.eq) goto loc_82ABCC24;
	// cmplwi cr6,r28,21
	cr6.compare<uint32_t>(ctx.r28.u32, 21, xer);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// blt cr6,0x82abc950
	if (cr6.lt) goto loc_82ABC950;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82ABC948;
	sub_82D2AEC8(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82ABC950:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82ABC958;
	sub_82D2AEC8(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d21408
	ctx.lr = 0x82ABC96C;
	sub_82D21408(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r31,r11,24367
	ctx.r31.s64 = ctx.r11.s64 + 24367;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,285
	ctx.r4.s64 = ctx.r31.s64 + 285;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d233b0
	ctx.lr = 0x82ABC988;
	sub_82D233B0(ctx, base);
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// addi r30,r27,100
	ctx.r30.s64 = ctx.r27.s64 + 100;
	// addi r4,r31,293
	ctx.r4.s64 = ctx.r31.s64 + 293;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ABC9A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abcaa4
	if (cr6.eq) goto loc_82ABCAA4;
	// addi r4,r31,-1
	ctx.r4.s64 = ctx.r31.s64 + -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82ABC9BC;
	sub_837B0C10(ctx, base);
	// cmplwi cr6,r28,9
	cr6.compare<uint32_t>(ctx.r28.u32, 9, xer);
	// bgt cr6,0x82abca1c
	if (cr6.gt) goto loc_82ABCA1C;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-12800
	ctx.r9.s64 = ctx.r11.s64 + -12800;
	// addi r5,r28,1
	ctx.r5.s64 = ctx.r28.s64 + 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82d042a8
	ctx.lr = 0x82ABC9E0;
	sub_82D042A8(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x82abc9f4
	if (!cr6.lt) goto loc_82ABC9F4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82ABC9F4:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82ABC9FC;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82ABCA10;
	sub_82D291E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82ABCA18;
	sub_8387E8E0(ctx, base);
	// b 0x82abca9c
	goto loc_82ABCA9C;
loc_82ABCA1C:
	// cmplwi cr6,r28,13
	cr6.compare<uint32_t>(ctx.r28.u32, 13, xer);
	// blt cr6,0x82abca84
	if (cr6.lt) goto loc_82ABCA84;
	// cmplwi cr6,r28,17
	cr6.compare<uint32_t>(ctx.r28.u32, 17, xer);
	// bgt cr6,0x82abca84
	if (cr6.gt) goto loc_82ABCA84;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-12800
	ctx.r9.s64 = ctx.r11.s64 + -12800;
	// addi r5,r28,-12
	ctx.r5.s64 = ctx.r28.s64 + -12;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82d042a8
	ctx.lr = 0x82ABCA48;
	sub_82D042A8(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x82abca5c
	if (!cr6.lt) goto loc_82ABCA5C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82ABCA5C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82ABCA64;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82ABCA78;
	sub_82D291E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82ABCA80;
	sub_8387E8E0(ctx, base);
	// b 0x82abca9c
	goto loc_82ABCA9C;
loc_82ABCA84:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-12800
	ctx.r9.s64 = ctx.r11.s64 + -12800;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82d29598
	ctx.lr = 0x82ABCA9C;
	sub_82D29598(ctx, base);
loc_82ABCA9C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82ABCAA4;
	sub_8387E8E0(ctx, base);
loc_82ABCAA4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,309
	ctx.r4.s64 = ctx.r31.s64 + 309;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ABCABC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abcc24
	if (cr6.eq) goto loc_82ABCC24;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82ABCAD4;
	sub_837B0C10(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82be41b8
	ctx.lr = 0x82ABCAE0;
	sub_82BE41B8(ctx, base);
	// bl 0x83763ef8
	ctx.lr = 0x82ABCAE4;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abcb68
	if (cr6.eq) goto loc_82ABCB68;
	// bl 0x83763ef8
	ctx.lr = 0x82ABCAF0;
	sub_83763EF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82abc490
	ctx.lr = 0x82ABCB08;
	sub_82ABC490(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82abcb1c
	if (cr6.eq) goto loc_82ABCB1C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82abcb38
	goto loc_82ABCB38;
loc_82ABCB1C:
	// bl 0x83763ef8
	ctx.lr = 0x82ABCB20;
	sub_83763EF8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x83777268
	ctx.lr = 0x82ABCB2C;
	sub_83777268(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r4,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82ABCB38:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82ABCB48;
	sub_82D2B608(ctx, base);
	// bl 0x83763ef8
	ctx.lr = 0x82ABCB4C;
	sub_83763EF8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x83776910
	ctx.lr = 0x82ABCB5C;
	sub_83776910(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r25,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r25.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82ABCB68:
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82abcbe8
	if (cr6.eq) goto loc_82ABCBE8;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8292a3f8
	ctx.lr = 0x82ABCB80;
	sub_8292A3F8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82abc700
	ctx.lr = 0x82ABCB94;
	sub_82ABC700(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82abcba8
	if (cr6.lt) goto loc_82ABCBA8;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82abcbac
	goto loc_82ABCBAC;
loc_82ABCBA8:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82ABCBAC:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82ABCBB4;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82ABCBC8;
	sub_82D291E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82ABCBD0;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82ABCBD8;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82ABCBE0;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82ABCBE8:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x82abcc14
	if (!cr6.eq) goto loc_82ABCC14;
	// ori r4,r4,164
	ctx.r4.u64 = ctx.r4.u64 | 164;
	// bl 0x82d29598
	ctx.lr = 0x82ABCC04;
	sub_82D29598(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82ABCC0C;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82ABCC14:
	// ori r4,r4,12
	ctx.r4.u64 = ctx.r4.u64 | 12;
	// bl 0x82d29598
	ctx.lr = 0x82ABCC1C;
	sub_82D29598(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82ABCC24;
	sub_8387E8E0(ctx, base);
loc_82ABCC24:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABCC2C"))) PPC_WEAK_FUNC(sub_82ABCC2C);
PPC_FUNC_IMPL(__imp__sub_82ABCC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABCC30"))) PPC_WEAK_FUNC(sub_82ABCC30);
PPC_FUNC_IMPL(__imp__sub_82ABCC30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82ABCC38;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d19cd0
	ctx.lr = 0x82ABCC44;
	sub_82D19CD0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82ABCC50;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r11,24397
	ctx.r31.s64 = ctx.r11.s64 + 24397;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,295
	ctx.r4.s64 = ctx.r31.s64 + 295;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ABCC70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abcca0
	if (cr6.eq) goto loc_82ABCCA0;
	// cmplwi cr6,r29,21
	cr6.compare<uint32_t>(ctx.r29.u32, 21, xer);
	// bge cr6,0x82abcc98
	if (!cr6.lt) goto loc_82ABCC98;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-12712
	ctx.r9.s64 = ctx.r11.s64 + -12712;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82d39ab8
	ctx.lr = 0x82ABCC94;
	sub_82D39AB8(ctx, base);
	// b 0x82abcca0
	goto loc_82ABCCA0;
loc_82ABCC98:
	// addi r4,r31,303
	ctx.r4.s64 = ctx.r31.s64 + 303;
	// bl 0x82d39bf8
	ctx.lr = 0x82ABCCA0;
	sub_82D39BF8(ctx, base);
loc_82ABCCA0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82ABCCC4;
	sub_8259CC28(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82be41b8
	ctx.lr = 0x82ABCCD0;
	sub_82BE41B8(ctx, base);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r4,2
	ctx.r4.s64 = 2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82abcd04
	if (cr6.eq) goto loc_82ABCD04;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d19788
	ctx.lr = 0x82ABCCEC;
	sub_82D19788(ctx, base);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r5,r5,74
	ctx.r5.u64 = ctx.r5.u64 | 74;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82ABCD00;
	sub_82D20EB8(ctx, base);
	// b 0x82abcd0c
	goto loc_82ABCD0C;
loc_82ABCD04:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d19788
	ctx.lr = 0x82ABCD0C;
	sub_82D19788(ctx, base);
loc_82ABCD0C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82abcd2c
	if (cr6.lt) goto loc_82ABCD2C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82ABCD2C;
	sub_825952B8(ctx, base);
loc_82ABCD2C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABCD34"))) PPC_WEAK_FUNC(sub_82ABCD34);
PPC_FUNC_IMPL(__imp__sub_82ABCD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABCD38"))) PPC_WEAK_FUNC(sub_82ABCD38);
PPC_FUNC_IMPL(__imp__sub_82ABCD38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82ABCD40;
	__savegprlr_29(ctx, base);
	// stwu r1,-1248(r1)
	ea = -1248 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82ABCD4C;
	sub_82D1C1A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83763ef8
	ctx.lr = 0x82ABCD54;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abcdb8
	if (cr6.eq) goto loc_82ABCDB8;
	// bl 0x83763ef8
	ctx.lr = 0x82ABCD60;
	sub_83763EF8(ctx, base);
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x83763ef8
	ctx.lr = 0x82ABCD6C;
	sub_83763EF8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x83776c58
	ctx.lr = 0x82ABCD78;
	sub_83776C58(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a8dc38
	ctx.lr = 0x82ABCD80;
	sub_82A8DC38(ctx, base);
	// bl 0x82bfb928
	ctx.lr = 0x82ABCD84;
	sub_82BFB928(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x82bfba10
	ctx.lr = 0x82ABCD94;
	sub_82BFBA10(ctx, base);
	// bl 0x83763ef8
	ctx.lr = 0x82ABCD98;
	sub_83763EF8(ctx, base);
	// bl 0x83772938
	ctx.lr = 0x82ABCD9C;
	sub_83772938(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d35198
	ctx.lr = 0x82ABCDA4;
	sub_82D35198(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82d37bb8
	ctx.lr = 0x82ABCDB0;
	sub_82D37BB8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a8d878
	ctx.lr = 0x82ABCDB8;
	sub_82A8D878(ctx, base);
loc_82ABCDB8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82ABCDC0;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82ABCDC8;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abce24
	if (cr6.eq) goto loc_82ABCE24;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19d40
	ctx.lr = 0x82ABCDE0;
	sub_82D19D40(ctx, base);
	// subf r4,r3,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r3.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82ABCDEC;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abce24
	if (cr6.eq) goto loc_82ABCE24;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r10,24724
	ctx.r4.s64 = ctx.r10.s64 + 24724;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82ABCE10;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abce24
	if (cr6.eq) goto loc_82ABCE24;
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// ori r4,r4,164
	ctx.r4.u64 = ctx.r4.u64 | 164;
	// bl 0x82d29598
	ctx.lr = 0x82ABCE24;
	sub_82D29598(ctx, base);
loc_82ABCE24:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82ABCE34;
	sub_82D19788(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19858
	ctx.lr = 0x82ABCE40;
	sub_82D19858(ctx, base);
	// addi r1,r1,1248
	ctx.r1.s64 = ctx.r1.s64 + 1248;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABCE48"))) PPC_WEAK_FUNC(sub_82ABCE48);
PPC_FUNC_IMPL(__imp__sub_82ABCE48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82abc8f0
	sub_82ABC8F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABCE54"))) PPC_WEAK_FUNC(sub_82ABCE54);
PPC_FUNC_IMPL(__imp__sub_82ABCE54) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABCE58"))) PPC_WEAK_FUNC(sub_82ABCE58);
PPC_FUNC_IMPL(__imp__sub_82ABCE58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82abce90
	if (cr6.eq) goto loc_82ABCE90;
loc_82ABCE7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a8d878
	ctx.lr = 0x82ABCE84;
	sub_82A8D878(ctx, base);
	// addi r31,r31,1116
	ctx.r31.s64 = ctx.r31.s64 + 1116;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82abce7c
	if (!cr6.eq) goto loc_82ABCE7C;
loc_82ABCE90:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABCEA8"))) PPC_WEAK_FUNC(sub_82ABCEA8);
PPC_FUNC_IMPL(__imp__sub_82ABCEA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82ABCEB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82abcf74
	if (cr6.eq) goto loc_82ABCF74;
	// addi r31,r3,20
	ctx.r31.s64 = ctx.r3.s64 + 20;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_82ABCECC:
	// lbz r11,-20(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -20);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// bl 0x828eeb48
	ctx.lr = 0x82ABCEE0;
	sub_828EEB48(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// bl 0x8259cb28
	ctx.lr = 0x82ABCEF4;
	sub_8259CB28(ctx, base);
	// lbz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// li r5,992
	ctx.r5.s64 = 992;
	// stb r10,48(r30)
	PPC_STORE_U8(ctx.r30.u32 + 48, ctx.r10.u8);
	// lbz r9,29(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 29);
	// stb r9,49(r30)
	PPC_STORE_U8(ctx.r30.u32 + 49, ctx.r9.u8);
	// bl 0x831ce980
	ctx.lr = 0x82ABCF14;
	sub_831CE980(ctx, base);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,1024
	ctx.r9.s64 = ctx.r31.s64 + 1024;
	// addi r8,r30,1044
	ctx.r8.s64 = ctx.r30.s64 + 1044;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82ABCF28:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82abcf28
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82ABCF28;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,1040
	ctx.r4.s64 = ctx.r31.s64 + 1040;
	// addi r3,r30,1060
	ctx.r3.s64 = ctx.r30.s64 + 1060;
	// bl 0x8259cb28
	ctx.lr = 0x82ABCF4C;
	sub_8259CB28(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,1068
	ctx.r4.s64 = ctx.r31.s64 + 1068;
	// addi r3,r30,1088
	ctx.r3.s64 = ctx.r30.s64 + 1088;
	// bl 0x8259cb28
	ctx.lr = 0x82ABCF60;
	sub_8259CB28(ctx, base);
	// addi r31,r31,1116
	ctx.r31.s64 = ctx.r31.s64 + 1116;
	// addi r30,r30,1116
	ctx.r30.s64 = ctx.r30.s64 + 1116;
	// addi r11,r31,-20
	ctx.r11.s64 = ctx.r31.s64 + -20;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x82abcecc
	if (!cr6.eq) goto loc_82ABCECC;
loc_82ABCF74:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABCF80"))) PPC_WEAK_FUNC(sub_82ABCF80);
PPC_FUNC_IMPL(__imp__sub_82ABCF80) {
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
	// beq cr6,0x82abcfc0
	if (cr6.eq) goto loc_82ABCFC0;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82abce58
	ctx.lr = 0x82ABCFAC;
	sub_82ABCE58(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82ABCFC0;
	sub_825952B8(ctx, base);
loc_82ABCFC0:
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

__attribute__((alias("__imp__sub_82ABCFE4"))) PPC_WEAK_FUNC(sub_82ABCFE4);
PPC_FUNC_IMPL(__imp__sub_82ABCFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABCFE8"))) PPC_WEAK_FUNC(sub_82ABCFE8);
PPC_FUNC_IMPL(__imp__sub_82ABCFE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,29200(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29200);
	// addi r31,r3,29200
	ctx.r31.s64 = ctx.r3.s64 + 29200;
	// lwz r4,29204(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29204);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82abd030
	if (cr6.eq) goto loc_82ABD030;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82abcea8
	ctx.lr = 0x82ABD01C;
	sub_82ABCEA8(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82abce58
	ctx.lr = 0x82ABD02C;
	sub_82ABCE58(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82ABD030:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABD048"))) PPC_WEAK_FUNC(sub_82ABD048);
PPC_FUNC_IMPL(__imp__sub_82ABD048) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82ABD050;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r9,r11,24832
	ctx.r9.s64 = ctx.r11.s64 + 24832;
	// addi r8,r10,24824
	ctx.r8.s64 = ctx.r10.s64 + 24824;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// bl 0x82d35198
	ctx.lr = 0x82ABD074;
	sub_82D35198(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d36760
	ctx.lr = 0x82ABD080;
	sub_82D36760(ctx, base);
	// lwz r4,716(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 716);
	// li r27,2
	ctx.r27.s64 = 2;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82abd09c
	if (cr6.eq) goto loc_82ABD09C;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82ABD09C;
	sub_825952B8(ctx, base);
loc_82ABD09C:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r28,700
	ctx.r31.s64 = ctx.r28.s64 + 700;
	// stw r30,716(r28)
	PPC_STORE_U32(ctx.r28.u32 + 716, ctx.r30.u32);
	// stw r30,720(r28)
	PPC_STORE_U32(ctx.r28.u32 + 720, ctx.r30.u32);
	// stw r30,724(r28)
	PPC_STORE_U32(ctx.r28.u32 + 724, ctx.r30.u32);
	// lwz r3,700(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 700);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abd0d8
	if (cr6.eq) goto loc_82ABD0D8;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82abce58
	ctx.lr = 0x82ABD0C8;
	sub_82ABCE58(ctx, base);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82ABD0D8;
	sub_825952B8(ctx, base);
loc_82ABD0D8:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r29,r28,684
	ctx.r29.s64 = ctx.r28.s64 + 684;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lwz r3,684(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 684);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abd110
	if (cr6.eq) goto loc_82ABD110;
	// addi r5,r29,12
	ctx.r5.s64 = ctx.r29.s64 + 12;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82abce58
	ctx.lr = 0x82ABD100;
	sub_82ABCE58(ctx, base);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82ABD110;
	sub_825952B8(ctx, base);
loc_82ABD110:
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// bl 0x82d25548
	ctx.lr = 0x82ABD124;
	sub_82D25548(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABD12C"))) PPC_WEAK_FUNC(sub_82ABD12C);
PPC_FUNC_IMPL(__imp__sub_82ABD12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABD130"))) PPC_WEAK_FUNC(sub_82ABD130);
PPC_FUNC_IMPL(__imp__sub_82ABD130) {
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
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82ABD15C;
	sub_82595718(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abd178
	if (cr6.eq) goto loc_82ABD178;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r10,r11,25120
	ctx.r10.s64 = ctx.r11.s64 + 25120;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82abd17c
	goto loc_82ABD17C;
loc_82ABD178:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82ABD17C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83878e28
	ctx.lr = 0x82ABD198;
	sub_83878E28(ctx, base);
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

__attribute__((alias("__imp__sub_82ABD1B0"))) PPC_WEAK_FUNC(sub_82ABD1B0);
PPC_FUNC_IMPL(__imp__sub_82ABD1B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82ABD1B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82bfb928
	ctx.lr = 0x82ABD1C4;
	sub_82BFB928(ctx, base);
	// lwz r3,29196(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29196);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,676(r28)
	PPC_STORE_U32(ctx.r28.u32 + 676, ctx.r3.u32);
	// beq cr6,0x82abd284
	if (cr6.eq) goto loc_82ABD284;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82abd1ec
	if (cr6.eq) goto loc_82ABD1EC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82ABD1EC:
	// bl 0x8310ed98
	ctx.lr = 0x82ABD1F0;
	sub_8310ED98(ctx, base);
	// lwz r11,676(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 676);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82abd23c
	if (cr6.eq) goto loc_82ABD23C;
	// li r11,27
	ctx.r11.s64 = 27;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82ABD214;
	sub_82595150(ctx, base);
	// lwz r31,676(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 676);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82abd230
	if (cr6.eq) goto loc_82ABD230;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310eff8
	ctx.lr = 0x82ABD228;
	sub_8310EFF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82ABD230;
	sub_82416268(ctx, base);
loc_82ABD230:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82ABD238;
	sub_82595170(ctx, base);
	// stw r30,676(r28)
	PPC_STORE_U32(ctx.r28.u32 + 676, ctx.r30.u32);
loc_82ABD23C:
	// bl 0x82bfb928
	ctx.lr = 0x82ABD240;
	sub_82BFB928(ctx, base);
	// stw r30,29196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 29196, ctx.r30.u32);
	// bl 0x82bfb928
	ctx.lr = 0x82ABD248;
	sub_82BFB928(ctx, base);
	// bl 0x82abcfe8
	ctx.lr = 0x82ABD24C;
	sub_82ABCFE8(ctx, base);
	// bl 0x82bfb928
	ctx.lr = 0x82ABD250;
	sub_82BFB928(ctx, base);
	// addi r30,r3,29216
	ctx.r30.s64 = ctx.r3.s64 + 29216;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x82abd284
	if (cr6.eq) goto loc_82ABD284;
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
	ctx.lr = 0x82ABD27C;
	sub_831CE420(ctx, base);
	// add r10,r29,r31
	ctx.r10.u64 = ctx.r29.u64 + ctx.r31.u64;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_82ABD284:
	// lbz r11,741(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 741);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82abd294
	if (cr6.eq) goto loc_82ABD294;
	// bl 0x830ee9a8
	ctx.lr = 0x82ABD294;
	sub_830EE9A8(ctx, base);
loc_82ABD294:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABD2A0"))) PPC_WEAK_FUNC(sub_82ABD2A0);
PPC_FUNC_IMPL(__imp__sub_82ABD2A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82ABD2A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,58
	ctx.r11.s64 = 3801088;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,47449
	ctx.r10.u64 = ctx.r11.u64 | 47449;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82abd2cc
	if (!cr6.gt) goto loc_82ABD2CC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82ABD2CC;
	sub_831CC150(ctx, base);
loc_82ABD2CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r24,1116
	ctx.r24.s64 = 1116;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r24
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r24.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x82abd388
	if (!cr6.lt) goto loc_82ABD388;
	// li r25,2
	ctx.r25.s64 = 2;
	// mulli r26,r4,1116
	ctx.r26.s64 = ctx.r4.s64 * 1116;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82ABD304;
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
	// beq cr6,0x82abd340
	if (cr6.eq) goto loc_82ABD340;
loc_82ABD31C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82abd330
	if (cr6.eq) goto loc_82ABD330;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82abc808
	ctx.lr = 0x82ABD330;
	sub_82ABC808(ctx, base);
loc_82ABD330:
	// addi r30,r30,1116
	ctx.r30.s64 = ctx.r30.s64 + 1116;
	// addi r29,r29,1116
	ctx.r29.s64 = ctx.r29.s64 + 1116;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// bne cr6,0x82abd31c
	if (!cr6.eq) goto loc_82ABD31C;
loc_82ABD340:
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
	// beq cr6,0x82abd370
	if (cr6.eq) goto loc_82ABD370;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// bl 0x82abce58
	ctx.lr = 0x82ABD360;
	sub_82ABCE58(ctx, base);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82ABD370;
	sub_825952B8(ctx, base);
loc_82ABD370:
	// mulli r11,r30,1116
	ctx.r11.s64 = ctx.r30.s64 * 1116;
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
loc_82ABD388:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABD390"))) PPC_WEAK_FUNC(sub_82ABD390);
PPC_FUNC_IMPL(__imp__sub_82ABD390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82ABD398;
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
	ctx.lr = 0x82ABD3AC;
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
	ctx.lr = 0x82ABD3C4;
	sub_82D253F8(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,24832
	ctx.r8.s64 = ctx.r10.s64 + 24832;
	// addi r7,r9,24824
	ctx.r7.s64 = ctx.r9.s64 + 24824;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// li r5,572
	ctx.r5.s64 = 572;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r11.u32);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// stw r11,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r11.u32);
	// addi r30,r31,684
	ctx.r30.s64 = ctx.r31.s64 + 684;
	// stw r11,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r11.u32);
	// addi r29,r31,700
	ctx.r29.s64 = ctx.r31.s64 + 700;
	// stw r11,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r11.u32);
	// addi r28,r31,716
	ctx.r28.s64 = ctx.r31.s64 + 716;
	// stw r11,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r11.u32);
	// stw r11,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r11.u32);
	// stw r11,700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 700, ctx.r11.u32);
	// stw r11,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r11.u32);
	// stw r11,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r11.u32);
	// stw r11,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r11.u32);
	// stw r11,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r11.u32);
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// stw r11,732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 732, ctx.r11.u32);
	// stw r11,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r11.u32);
	// stb r11,740(r31)
	PPC_STORE_U8(ctx.r31.u32 + 740, ctx.r11.u8);
	// stb r11,741(r31)
	PPC_STORE_U8(ctx.r31.u32 + 741, ctx.r11.u8);
	// stb r11,742(r31)
	PPC_STORE_U8(ctx.r31.u32 + 742, ctx.r11.u8);
	// stb r11,743(r31)
	PPC_STORE_U8(ctx.r31.u32 + 743, ctx.r11.u8);
	// stw r11,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r11.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x82ABD44C;
	sub_831CDCF0(ctx, base);
	// lwz r4,688(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// lwz r5,684(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82abd47c
	if (cr6.eq) goto loc_82ABD47C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82abcea8
	ctx.lr = 0x82ABD468;
	sub_82ABCEA8(ctx, base);
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82abce58
	ctx.lr = 0x82ABD478;
	sub_82ABCE58(ctx, base);
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
loc_82ABD47C:
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82abd4ac
	if (cr6.eq) goto loc_82ABD4AC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82abcea8
	ctx.lr = 0x82ABD498;
	sub_82ABCEA8(ctx, base);
	// addi r5,r29,12
	ctx.r5.s64 = ctx.r29.s64 + 12;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82abce58
	ctx.lr = 0x82ABD4A8;
	sub_82ABCE58(ctx, base);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
loc_82ABD4AC:
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x82abd4dc
	if (cr6.eq) goto loc_82ABD4DC;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831ce420
	ctx.lr = 0x82ABD4D4;
	sub_831CE420(ctx, base);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
loc_82ABD4DC:
	// lis r30,-31777
	ctx.r30.s64 = -2082537472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r30,-12628
	ctx.r11.s64 = ctx.r30.s64 + -12628;
	// lwz r4,-88(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -88);
	// bl 0x82d20ae0
	ctx.lr = 0x82ABD4F0;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,-12628(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12628);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d23390
	ctx.lr = 0x82ABD500;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199f0
	ctx.lr = 0x82ABD508;
	sub_82D199F0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82abd5bc
	if (!cr6.eq) goto loc_82ABD5BC;
	// bl 0x830ee9a0
	ctx.lr = 0x82ABD518;
	sub_830EE9A0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199d0
	ctx.lr = 0x82ABD524;
	sub_82D199D0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r30,r11,24335
	ctx.r30.s64 = ctx.r11.s64 + 24335;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r30,285
	ctx.r3.s64 = ctx.r30.s64 + 285;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2ee48
	ctx.lr = 0x82ABD540;
	sub_82D2EE48(ctx, base);
	// stw r3,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abd5a8
	if (cr6.eq) goto loc_82ABD5A8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d199d0
	ctx.lr = 0x82ABD554;
	sub_82D199D0(ctx, base);
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// lwz r3,736(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// ori r4,r4,184
	ctx.r4.u64 = ctx.r4.u64 | 184;
	// bl 0x82d2ada8
	ctx.lr = 0x82ABD564;
	sub_82D2ADA8(ctx, base);
	// lwz r3,736(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// addi r5,r30,-1
	ctx.r5.s64 = ctx.r30.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ABD580;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,736(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,92(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82ABD59C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,736(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// bl 0x83103100
	ctx.lr = 0x82ABD5A8;
	sub_83103100(ctx, base);
loc_82ABD5A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d17b90
	ctx.lr = 0x82ABD5B0;
	sub_82D17B90(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17d80
	ctx.lr = 0x82ABD5BC;
	sub_82D17D80(ctx, base);
loc_82ABD5BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABD5C8"))) PPC_WEAK_FUNC(sub_82ABD5C8);
PPC_FUNC_IMPL(__imp__sub_82ABD5C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82abd048
	ctx.lr = 0x82ABD5E8;
	sub_82ABD048(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82abd600
	if (cr6.eq) goto loc_82ABD600;
	// bl 0x82416268
	ctx.lr = 0x82ABD5FC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82ABD600:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABD618"))) PPC_WEAK_FUNC(sub_82ABD618);
PPC_FUNC_IMPL(__imp__sub_82ABD618) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,58
	ctx.r10.s64 = 3801088;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,1116
	ctx.r9.s64 = 1116;
	// ori r8,r10,47449
	ctx.r8.u64 = ctx.r10.u64 | 47449;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x82abd64c
	if (!cr6.lt) goto loc_82ABD64C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82ABD64C:
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
	// blt cr6,0x82abd67c
	if (cr6.lt) goto loc_82ABD67C;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82ABD67C:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82abd688
	if (!cr6.lt) goto loc_82ABD688;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82ABD688:
	// b 0x82abd2a0
	sub_82ABD2A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABD68C"))) PPC_WEAK_FUNC(sub_82ABD68C);
PPC_FUNC_IMPL(__imp__sub_82ABD68C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABD690"))) PPC_WEAK_FUNC(sub_82ABD690);
PPC_FUNC_IMPL(__imp__sub_82ABD690) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x82abd6b8
	if (cr6.lt) goto loc_82ABD6B8;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82abd6bc
	goto loc_82ABD6BC;
loc_82ABD6B8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82ABD6BC:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,748
	ctx.r4.s64 = 748;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82ABD6D8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abd6f0
	if (cr6.eq) goto loc_82ABD6F0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82abd390
	ctx.lr = 0x82ABD6EC;
	sub_82ABD390(ctx, base);
	// b 0x82abd6f4
	goto loc_82ABD6F4;
loc_82ABD6F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82ABD6F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABD70C"))) PPC_WEAK_FUNC(sub_82ABD70C);
PPC_FUNC_IMPL(__imp__sub_82ABD70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABD710"))) PPC_WEAK_FUNC(sub_82ABD710);
PPC_FUNC_IMPL(__imp__sub_82ABD710) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bge cr6,0x82abd748
	if (!cr6.lt) goto loc_82ABD748;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82abd74c
	if (!cr6.gt) goto loc_82ABD74C;
loc_82ABD748:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82ABD74C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82abd79c
	if (cr6.eq) goto loc_82ABD79C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,1116
	ctx.r9.s64 = 1116;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x82abd780
	if (!cr6.eq) goto loc_82ABD780;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82abd618
	ctx.lr = 0x82ABD780;
	sub_82ABD618(ctx, base);
loc_82ABD780:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abd7c8
	if (cr6.eq) goto loc_82ABD7C8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,1116
	ctx.r11.s64 = ctx.r30.s64 * 1116;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82abd7c4
	goto loc_82ABD7C4;
loc_82ABD79C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82abd7b4
	if (!cr6.eq) goto loc_82ABD7B4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82abd618
	ctx.lr = 0x82ABD7B4;
	sub_82ABD618(ctx, base);
loc_82ABD7B4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abd7c8
	if (cr6.eq) goto loc_82ABD7C8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82ABD7C4:
	// bl 0x82abc808
	ctx.lr = 0x82ABD7C8;
	sub_82ABC808(ctx, base);
loc_82ABD7C8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1116
	ctx.r11.s64 = ctx.r11.s64 + 1116;
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

__attribute__((alias("__imp__sub_82ABD7EC"))) PPC_WEAK_FUNC(sub_82ABD7EC);
PPC_FUNC_IMPL(__imp__sub_82ABD7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABD7F0"))) PPC_WEAK_FUNC(sub_82ABD7F0);
PPC_FUNC_IMPL(__imp__sub_82ABD7F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82ABD7F8;
	__savegprlr_24(ctx, base);
	// stwu r1,-1296(r1)
	ea = -1296 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,676(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 676);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,64(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// lwz r10,68(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82abd81c
	if (!cr6.eq) goto loc_82ABD81C;
	// li r26,0
	ctx.r26.s64 = 0;
	// b 0x82abd834
	goto loc_82ABD834;
loc_82ABD81C:
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// li r10,644
	ctx.r10.s64 = 644;
	// divw r26,r11,r10
	ctx.r26.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// cmplwi cr6,r26,50
	cr6.compare<uint32_t>(ctx.r26.u32, 50, xer);
	// ble cr6,0x82abd834
	if (!cr6.gt) goto loc_82ABD834;
	// li r26,50
	ctx.r26.s64 = 50;
loc_82ABD834:
	// lwz r5,700(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 700);
	// addi r28,r29,700
	ctx.r28.s64 = ctx.r29.s64 + 700;
	// lwz r4,704(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 704);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82abd868
	if (cr6.eq) goto loc_82ABD868;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82abcea8
	ctx.lr = 0x82ABD854;
	sub_82ABCEA8(ctx, base);
	// addi r5,r28,12
	ctx.r5.s64 = ctx.r28.s64 + 12;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82abce58
	ctx.lr = 0x82ABD864;
	sub_82ABCE58(ctx, base);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82ABD868:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82abd958
	if (cr6.eq) goto loc_82ABD958;
	// li r24,2
	ctx.r24.s64 = 2;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r25,10
	ctx.r25.s64 = 10;
loc_82ABD880:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a8dc38
	ctx.lr = 0x82ABD888;
	sub_82A8DC38(ctx, base);
	// addi r5,r1,1140
	ctx.r5.s64 = ctx.r1.s64 + 1140;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,676(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 676);
	// bl 0x8310e3e0
	ctx.lr = 0x82ABD898;
	sub_8310E3E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82abd950
	if (cr6.eq) goto loc_82ABD950;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_82ABD8A8:
	// stb r24,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r24.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x833eab80
	ctx.lr = 0x82ABD8B8;
	sub_833EAB80(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x82abd8a8
	if (!cr0.eq) goto loc_82ABD8A8;
	// lwz r11,676(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 676);
	// stb r27,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, ctx.r27.u8);
	// stb r27,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r27.u8);
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// stb r25,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r25.u8);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82abd8e4
	if (cr6.lt) goto loc_82ABD8E4;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82ABD8E4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82ABD8E8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82abd8e8
	if (!cr6.eq) goto loc_82ABD8E8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82ABD90C;
	sub_8259CC28(ctx, base);
	// addi r5,r1,1156
	ctx.r5.s64 = ctx.r1.s64 + 1156;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,676(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 676);
	// bl 0x8310ea90
	ctx.lr = 0x82ABD91C;
	sub_8310EA90(ctx, base);
	// addi r5,r1,1184
	ctx.r5.s64 = ctx.r1.s64 + 1184;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,676(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 676);
	// bl 0x8310eb08
	ctx.lr = 0x82ABD92C;
	sub_8310EB08(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82abd710
	ctx.lr = 0x82ABD938;
	sub_82ABD710(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a8d878
	ctx.lr = 0x82ABD940;
	sub_82A8D878(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, xer);
	// blt cr6,0x82abd880
	if (cr6.lt) goto loc_82ABD880;
	// b 0x82abd958
	goto loc_82ABD958;
loc_82ABD950:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a8d878
	ctx.lr = 0x82ABD958;
	sub_82A8D878(ctx, base);
loc_82ABD958:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r10,1116
	ctx.r10.s64 = 1116;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r29,716
	ctx.r3.s64 = ctx.r29.s64 + 716;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r11,r8,r10
	ctx.r11.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// bl 0x835977d8
	ctx.lr = 0x82ABD980;
	sub_835977D8(ctx, base);
	// addi r1,r1,1296
	ctx.r1.s64 = ctx.r1.s64 + 1296;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABD988"))) PPC_WEAK_FUNC(sub_82ABD988);
PPC_FUNC_IMPL(__imp__sub_82ABD988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82ABD990;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r27,1116
	ctx.r27.s64 = 1116;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// li r31,0
	ctx.r31.s64 = 0;
	// divw. r10,r9,r27
	ctx.r10.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82abd9f0
	if (cr0.eq) goto loc_82ABD9F0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// ble cr6,0x82abd9f8
	if (!cr6.gt) goto loc_82ABD9F8;
loc_82ABD9C4:
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r3,r28,684
	ctx.r3.s64 = ctx.r28.s64 + 684;
	// bl 0x82abd710
	ctx.lr = 0x82ABD9D0;
	sub_82ABD710(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,1116
	ctx.r29.s64 = ctx.r29.s64 + 1116;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r9,r27
	ctx.r10.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82abd9c4
	if (cr6.gt) goto loc_82ABD9C4;
loc_82ABD9F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82ABD9F8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82ABDA04;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82ABDA04"))) PPC_WEAK_FUNC(sub_82ABDA04);
PPC_FUNC_IMPL(__imp__sub_82ABDA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABDA08"))) PPC_WEAK_FUNC(sub_82ABDA08);
PPC_FUNC_IMPL(__imp__sub_82ABDA08) {
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
	// lwz r11,676(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 676);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82abda68
	if (!cr6.eq) goto loc_82ABDA68;
	// bl 0x830ef250
	ctx.lr = 0x82ABDA34;
	sub_830EF250(ctx, base);
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,656
	ctx.r4.s64 = 656;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82ABDA4C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abda5c
	if (cr6.eq) goto loc_82ABDA5C;
	// bl 0x8310ef60
	ctx.lr = 0x82ABDA58;
	sub_8310EF60(ctx, base);
	// b 0x82abda60
	goto loc_82ABDA60;
loc_82ABDA5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82ABDA60:
	// stw r3,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r3.u32);
	// stw r30,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r30.u32);
loc_82ABDA68:
	// lwz r11,680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x82abdb10
	if (cr6.gt) goto loc_82ABDB10;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82abdb10
	if (cr6.eq) goto loc_82ABDB10;
	// bdz 0x82abda98
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82ABDA98;
	// bdz 0x82abdaa8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82ABDAA8;
	// bdz 0x82abdb2c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82ABDB2C;
	// bdz 0x82abdbc4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82ABDBC4;
	// bdz 0x82abdc28
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82ABDC28;
	// b 0x82abdc48
	goto loc_82ABDC48;
loc_82ABDA98:
	// lwz r3,676(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	// bl 0x8310f9e0
	ctx.lr = 0x82ABDAA0;
	sub_8310F9E0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82abdb0c
	goto loc_82ABDB0C;
loc_82ABDAA8:
	// lwz r3,676(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82abdb10
	if (!cr6.eq) goto loc_82ABDB10;
	// stw r11,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r11.u32);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82abdaf8
	if (cr6.eq) goto loc_82ABDAF8;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// li r10,644
	ctx.r10.s64 = 644;
	// divw r11,r11,r10
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// cmplwi cr6,r11,50
	cr6.compare<uint32_t>(ctx.r11.u32, 50, xer);
	// bgt cr6,0x82abdae8
	if (cr6.gt) goto loc_82ABDAE8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82abdaf8
	if (cr6.eq) goto loc_82ABDAF8;
loc_82ABDAE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82abd7f0
	ctx.lr = 0x82ABDAF0;
	sub_82ABD7F0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82abdb0c
	goto loc_82ABDB0C;
loc_82ABDAF8:
	// bl 0x8310e458
	ctx.lr = 0x82ABDAFC;
	sub_8310E458(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
loc_82ABDB04:
	// bne cr6,0x82abdb10
	if (!cr6.eq) goto loc_82ABDB10;
	// li r11,5
	ctx.r11.s64 = 5;
loc_82ABDB0C:
	// stw r11,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r11.u32);
loc_82ABDB10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82ABDB14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82ABDB2C:
	// lwz r11,704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// li r9,1116
	ctx.r9.s64 = 1116;
	// lwz r8,700(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// lwz r10,672(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// divw r6,r7,r9
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bge cr6,0x82abdbbc
	if (!cr6.lt) goto loc_82ABDBBC;
	// mulli r10,r10,1116
	ctx.r10.s64 = ctx.r10.s64 * 1116;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,49(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82abdbac
	if (!cr6.eq) goto loc_82ABDBAC;
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
	// lwz r3,676(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	// addi r4,r11,1044
	ctx.r4.s64 = ctx.r11.s64 + 1044;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8310e498
	ctx.lr = 0x82ABDB78;
	sub_8310E498(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82abdbac
	if (cr6.eq) goto loc_82ABDBAC;
	// lwz r10,672(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// mulli r10,r10,1116
	ctx.r10.s64 = ctx.r10.s64 * 1116;
	// lwz r3,676(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r11,60
	ctx.r5.s64 = ctx.r11.s64 + 60;
	// bl 0x8310e548
	ctx.lr = 0x82ABDBA4;
	sub_8310E548(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r9,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r9.u32);
loc_82ABDBAC:
	// lwz r11,672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r11.u32);
	// b 0x82abdb10
	goto loc_82ABDB10;
loc_82ABDBBC:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82abdb0c
	goto loc_82ABDB0C;
loc_82ABDBC4:
	// lwz r11,676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82abdb10
	if (!cr6.eq) goto loc_82ABDB10;
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r10,672(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// li r9,1116
	ctx.r9.s64 = 1116;
	// stw r11,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r11.u32);
	// addi r4,r31,700
	ctx.r4.s64 = ctx.r31.s64 + 700;
	// lwz r8,704(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// lwz r7,700(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// divw r11,r6,r9
	ctx.r11.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// ble cr6,0x82abdb10
	if (!cr6.gt) goto loc_82ABDB10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82abd988
	ctx.lr = 0x82ABDC0C;
	sub_82ABD988(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r3,676(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	// stw r11,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r11.u32);
	// bl 0x8310e458
	ctx.lr = 0x82ABDC1C;
	sub_8310E458(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// b 0x82abdb04
	goto loc_82ABDB04;
loc_82ABDC28:
	// lwz r3,676(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82abdb10
	if (!cr6.eq) goto loc_82ABDB10;
	// bl 0x8310ed98
	ctx.lr = 0x82ABDC3C;
	sub_8310ED98(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// stb r30,742(r31)
	PPC_STORE_U8(ctx.r31.u32 + 742, ctx.r30.u8);
	// b 0x82abdb0c
	goto loc_82ABDB0C;
loc_82ABDC48:
	// bl 0x82bfb928
	ctx.lr = 0x82ABDC4C;
	sub_82BFB928(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abdc94
	if (cr6.eq) goto loc_82ABDC94;
	// lwz r30,676(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	// bl 0x82bfb928
	ctx.lr = 0x82ABDC5C;
	sub_82BFB928(ctx, base);
	// stw r30,29196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 29196, ctx.r30.u32);
	// addi r30,r31,684
	ctx.r30.s64 = ctx.r31.s64 + 684;
	// bl 0x82bfb928
	ctx.lr = 0x82ABDC68;
	sub_82BFB928(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bfc450
	ctx.lr = 0x82ABDC70;
	sub_82BFC450(ctx, base);
	// bl 0x82bfb928
	ctx.lr = 0x82ABDC74;
	sub_82BFB928(ctx, base);
	// addi r4,r31,716
	ctx.r4.s64 = ctx.r31.s64 + 716;
	// bl 0x82bfc0d8
	ctx.lr = 0x82ABDC7C;
	sub_82BFC0D8(ctx, base);
	// lwz r31,676(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	// bl 0x82bfb928
	ctx.lr = 0x82ABDC84;
	sub_82BFB928(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x82bfbee8
	ctx.lr = 0x82ABDC94;
	sub_82BFBEE8(ctx, base);
loc_82ABDC94:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82abdb14
	goto loc_82ABDB14;
}

__attribute__((alias("__imp__sub_82ABDC9C"))) PPC_WEAK_FUNC(sub_82ABDC9C);
PPC_FUNC_IMPL(__imp__sub_82ABDC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABDCA0"))) PPC_WEAK_FUNC(sub_82ABDCA0);
PPC_FUNC_IMPL(__imp__sub_82ABDCA0) {
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
	// lwz r11,732(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 732);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82abdd94
	if (cr6.gt) goto loc_82ABDD94;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82abdcf8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82ABDCF8;
	// bdzf 4*cr6+eq,0x82abdd04
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82ABDD04;
	// bne cr6,0x82abdd24
	if (!cr6.eq) goto loc_82ABDD24;
	// bl 0x830ee9b0
	ctx.lr = 0x82ABDCE0;
	sub_830EE9B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82abdd94
	if (!cr6.eq) goto loc_82ABDD94;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 732, ctx.r11.u32);
	// b 0x82abdd94
	goto loc_82ABDD94;
loc_82ABDCF8:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 732, ctx.r11.u32);
	// b 0x82abdd94
	goto loc_82ABDD94;
loc_82ABDD04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82abda08
	ctx.lr = 0x82ABDD0C;
	sub_82ABDA08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82abdd94
	if (cr6.eq) goto loc_82ABDD94;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 732, ctx.r11.u32);
	// b 0x82abdd94
	goto loc_82ABDD94;
loc_82ABDD24:
	// lwz r11,736(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82abdd70
	if (cr6.eq) goto loc_82ABDD70;
	// bl 0x82d26ed8
	ctx.lr = 0x82ABDD34;
	sub_82D26ED8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abdd94
	if (cr6.eq) goto loc_82ABDD94;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d26960
	ctx.lr = 0x82ABDD44;
	sub_82D26960(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d17b90
	ctx.lr = 0x82ABDD4C;
	sub_82D17B90(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199d0
	ctx.lr = 0x82ABDD58;
	sub_82D199D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,736(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// bl 0x82d199d0
	ctx.lr = 0x82ABDD64;
	sub_82D199D0(ctx, base);
	// lwz r3,736(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// bl 0x82d29e18
	ctx.lr = 0x82ABDD6C;
	sub_82D29E18(ctx, base);
	// stw r30,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r30.u32);
loc_82ABDD70:
	// lwz r11,704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// li r10,1116
	ctx.r10.s64 = 1116;
	// lwz r9,700(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r4,r8,r10
	ctx.r4.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// stw r4,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r4.u32);
	// bl 0x82d17d80
	ctx.lr = 0x82ABDD90;
	sub_82D17D80(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_82ABDD94:
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

__attribute__((alias("__imp__sub_82ABDDB0"))) PPC_WEAK_FUNC(sub_82ABDDB0);
PPC_FUNC_IMPL(__imp__sub_82ABDDB0) {
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
	// lbz r11,743(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 743);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82abddf0
	if (cr6.eq) goto loc_82ABDDF0;
	// bl 0x82abdca0
	ctx.lr = 0x82ABDDD4;
	sub_82ABDCA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82abddf0
	if (!cr6.eq) goto loc_82ABDDF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1b890
	ctx.lr = 0x82ABDDE8;
	sub_82D1B890(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,743(r31)
	PPC_STORE_U8(ctx.r31.u32 + 743, ctx.r11.u8);
loc_82ABDDF0:
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

__attribute__((alias("__imp__sub_82ABDE08"))) PPC_WEAK_FUNC(sub_82ABDE08);
PPC_FUNC_IMPL(__imp__sub_82ABDE08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82ABDE10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// bl 0x82d199f0
	ctx.lr = 0x82ABDE20;
	sub_82D199F0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82abdfd8
	if (cr6.eq) goto loc_82ABDFD8;
	// bl 0x82bfb928
	ctx.lr = 0x82ABDE30;
	sub_82BFB928(ctx, base);
	// lwz r11,29196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29196);
	// stw r11,676(r29)
	PPC_STORE_U32(ctx.r29.u32 + 676, ctx.r11.u32);
	// bl 0x82d17d90
	ctx.lr = 0x82ABDE3C;
	sub_82D17D90(ctx, base);
	// stw r3,744(r29)
	PPC_STORE_U32(ctx.r29.u32 + 744, ctx.r3.u32);
loc_82ABDE40:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19788
	ctx.lr = 0x82ABDE50;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19788
	ctx.lr = 0x82ABDE60;
	sub_82D19788(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82ABDE68;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,24640
	ctx.r4.s64 = ctx.r11.s64 + 24640;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82ABDE84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abe020
	if (cr6.eq) goto loc_82ABE020;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d30530
	ctx.lr = 0x82ABDE98;
	sub_82D30530(ctx, base);
	// lis r4,34
	ctx.r4.s64 = 2228224;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,12
	ctx.r4.u64 = ctx.r4.u64 | 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d30340
	ctx.lr = 0x82ABDEAC;
	sub_82D30340(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d30530
	ctx.lr = 0x82ABDEB8;
	sub_82D30530(ctx, base);
	// bl 0x83763ef8
	ctx.lr = 0x82ABDEBC;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abe020
	if (cr6.eq) goto loc_82ABE020;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r10,168(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// lwz r11,-12544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12544);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82abdef4
	if (!cr6.eq) goto loc_82ABDEF4;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82abdef8
	if (cr6.eq) goto loc_82ABDEF8;
loc_82ABDEF4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82ABDEF8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82abdfbc
	if (!cr6.eq) goto loc_82ABDFBC;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r11,-12572(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12572);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82abdf30
	if (!cr6.eq) goto loc_82ABDF30;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82abdf34
	if (cr6.eq) goto loc_82ABDF34;
loc_82ABDF30:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82ABDF34:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82abdfbc
	if (!cr6.eq) goto loc_82ABDFBC;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r11,-12580(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12580);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82abdf6c
	if (!cr6.eq) goto loc_82ABDF6C;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82abdf70
	if (cr6.eq) goto loc_82ABDF70;
loc_82ABDF6C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82ABDF70:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82abdfbc
	if (!cr6.eq) goto loc_82ABDFBC;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r11,-12576(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12576);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82abdfa8
	if (!cr6.eq) goto loc_82ABDFA8;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82abdfac
	if (cr6.eq) goto loc_82ABDFAC;
loc_82ABDFA8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82ABDFAC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82abdfc0
	if (cr6.eq) goto loc_82ABDFC0;
loc_82ABDFBC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82ABDFC0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82abdff8
	if (cr6.eq) goto loc_82ABDFF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be3b40
	ctx.lr = 0x82ABDFD4;
	sub_82BE3B40(ctx, base);
	// b 0x82abe010
	goto loc_82ABE010;
loc_82ABDFD8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82abdca0
	ctx.lr = 0x82ABDFE0;
	sub_82ABDCA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82abde40
	if (!cr6.eq) goto loc_82ABDE40;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82ABDFF8:
	// lhz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 176);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82abe010
	if (cr6.eq) goto loc_82ABE010;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be39f0
	ctx.lr = 0x82ABE010;
	sub_82BE39F0(ctx, base);
loc_82ABE010:
	// lis r4,34
	ctx.r4.s64 = 2228224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,12
	ctx.r4.u64 = ctx.r4.u64 | 12;
	// bl 0x82d303d0
	ctx.lr = 0x82ABE020;
	sub_82D303D0(ctx, base);
loc_82ABE020:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82ABE028;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82ABE030;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82ABE038:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82ABE044;
	sub_82D33DB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abe05c
	if (cr6.eq) goto loc_82ABE05C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82abc8f0
	ctx.lr = 0x82ABE05C;
	sub_82ABC8F0(ctx, base);
loc_82ABE05C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// ble cr6,0x82abe038
	if (!cr6.gt) goto loc_82ABE038;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,21
	ctx.r5.s64 = 21;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d20f50
	ctx.lr = 0x82ABE080;
	sub_82D20F50(ctx, base);
	// bl 0x83763ef8
	ctx.lr = 0x82ABE084;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abe0bc
	if (cr6.eq) goto loc_82ABE0BC;
	// bl 0x82d35198
	ctx.lr = 0x82ABE090;
	sub_82D35198(ctx, base);
	// lis r5,38
	ctx.r5.s64 = 2490368;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,156
	ctx.r5.u64 = ctx.r5.u64 | 156;
	// bl 0x82d36ab8
	ctx.lr = 0x82ABE0A0;
	sub_82D36AB8(ctx, base);
	// bl 0x83763ef8
	ctx.lr = 0x82ABE0A4;
	sub_83763EF8(ctx, base);
	// bl 0x83772938
	ctx.lr = 0x82ABE0A8;
	sub_83772938(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d35198
	ctx.lr = 0x82ABE0B0;
	sub_82D35198(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82d37bb8
	ctx.lr = 0x82ABE0BC;
	sub_82D37BB8(ctx, base);
loc_82ABE0BC:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19788
	ctx.lr = 0x82ABE0CC;
	sub_82D19788(ctx, base);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r5,r5,74
	ctx.r5.u64 = ctx.r5.u64 | 74;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82ABE0E0;
	sub_82D20EB8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABE0EC"))) PPC_WEAK_FUNC(sub_82ABE0EC);
PPC_FUNC_IMPL(__imp__sub_82ABE0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABE0F0"))) PPC_WEAK_FUNC(sub_82ABE0F0);
PPC_FUNC_IMPL(__imp__sub_82ABE0F0) {
	PPC_FUNC_PROLOGUE();
	// lis r3,38
	ctx.r3.s64 = 2490368;
	// ori r3,r3,155
	ctx.r3.u64 = ctx.r3.u64 | 155;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABE0FC"))) PPC_WEAK_FUNC(sub_82ABE0FC);
PPC_FUNC_IMPL(__imp__sub_82ABE0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABE100"))) PPC_WEAK_FUNC(sub_82ABE100);
PPC_FUNC_IMPL(__imp__sub_82ABE100) {
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
	// lis r10,-31762
	ctx.r10.s64 = -2081554432;
	// lwz r11,10836(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10836);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82abe160
	if (!cr6.eq) goto loc_82ABE160;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31762
	ctx.r9.s64 = -2081554432;
	// stw r11,10836(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10836, ctx.r11.u32);
	// addi r31,r9,10832
	ctx.r31.s64 = ctx.r9.s64 + 10832;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824eecc0
	ctx.lr = 0x82ABE13C;
	sub_824EECC0(ctx, base);
	// lis r8,-31791
	ctx.r8.s64 = -2083454976;
	// addi r3,r8,-13200
	ctx.r3.s64 = ctx.r8.s64 + -13200;
	// bl 0x831cdcc8
	ctx.lr = 0x82ABE148;
	sub_831CDCC8(ctx, base);
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
loc_82ABE160:
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,10832
	ctx.r3.s64 = ctx.r11.s64 + 10832;
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

__attribute__((alias("__imp__sub_82ABE17C"))) PPC_WEAK_FUNC(sub_82ABE17C);
PPC_FUNC_IMPL(__imp__sub_82ABE17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABE180"))) PPC_WEAK_FUNC(sub_82ABE180);
PPC_FUNC_IMPL(__imp__sub_82ABE180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82ABE188;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82d19bc0
	ctx.lr = 0x82ABE1A4;
	sub_82D19BC0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abe1b0
	if (cr6.eq) goto loc_82ABE1B0;
	// lwz r30,132(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
loc_82ABE1B0:
	// subf r30,r30,r28
	ctx.r30.s64 = ctx.r28.s64 - ctx.r30.s64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bdc948
	ctx.lr = 0x82ABE1C8;
	sub_82BDC948(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r30,r11,25408
	ctx.r30.s64 = ctx.r11.s64 + 25408;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d233b0
	ctx.lr = 0x82ABE1E4;
	sub_82D233B0(ctx, base);
	// lwz r10,100(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// addi r3,r29,100
	ctx.r3.s64 = ctx.r29.s64 + 100;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82ABE1FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abe258
	if (cr6.eq) goto loc_82ABE258;
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// mulli r11,r28,28
	ctx.r11.s64 = ctx.r28.s64 * 28;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82ABE220;
	sub_82D291E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835d31b0
	ctx.lr = 0x82ABE228;
	sub_835D31B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abe258
	if (cr6.eq) goto loc_82ABE258;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,-13648(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13648);
	// cmpwi cr6,r11,19
	cr6.compare<int32_t>(ctx.r11.s32, 19, xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// beq cr6,0x82abe254
	if (cr6.eq) goto loc_82ABE254;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82ABE254:
	// bctrl 
	ctx.lr = 0x82ABE258;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82ABE258:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABE260"))) PPC_WEAK_FUNC(sub_82ABE260);
PPC_FUNC_IMPL(__imp__sub_82ABE260) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82ABE268;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// bl 0x82d17d90
	ctx.lr = 0x82ABE284;
	sub_82D17D90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82ABE290;
	sub_82D1C1A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830efe48
	ctx.lr = 0x82ABE2A0;
	sub_830EFE48(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830efe70
	ctx.lr = 0x82ABE2AC;
	sub_830EFE70(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x830ef9d8
	ctx.lr = 0x82ABE2B4;
	sub_830EF9D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x82abe348
	if (cr6.eq) goto loc_82ABE348;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82abe348
	if (cr6.eq) goto loc_82ABE348;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bge cr6,0x82abe33c
	if (!cr6.lt) goto loc_82ABE33C;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stb r31,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r31.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r31.u8);
	// bl 0x830f00a8
	ctx.lr = 0x82ABE300;
	sub_830F00A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82abe334
	if (!cr6.eq) goto loc_82ABE334;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82abe31c
	if (!cr6.lt) goto loc_82ABE31C;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
loc_82ABE31C:
	// bl 0x830e9ae0
	ctx.lr = 0x82ABE320;
	sub_830E9AE0(ctx, base);
	// clrlwi r31,r3,16
	ctx.r31.u64 = ctx.r3.u32 & 0xFFFF;
	// bl 0x82abe100
	ctx.lr = 0x82ABE328;
	sub_82ABE100(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,31
	ctx.r5.s64 = 31;
	// bl 0x82c0fb38
	ctx.lr = 0x82ABE334;
	sub_82C0FB38(ctx, base);
loc_82ABE334:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837e41d8
	ctx.lr = 0x82ABE33C;
	sub_837E41D8(ctx, base);
loc_82ABE33C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82ABE348:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABE354"))) PPC_WEAK_FUNC(sub_82ABE354);
PPC_FUNC_IMPL(__imp__sub_82ABE354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABE358"))) PPC_WEAK_FUNC(sub_82ABE358);
PPC_FUNC_IMPL(__imp__sub_82ABE358) {
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
	// lbz r11,224(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 224);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82abe374
	if (cr6.eq) goto loc_82ABE374;
	// bl 0x82abe260
	ctx.lr = 0x82ABE374;
	sub_82ABE260(ctx, base);
loc_82ABE374:
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

__attribute__((alias("__imp__sub_82ABE388"))) PPC_WEAK_FUNC(sub_82ABE388);
PPC_FUNC_IMPL(__imp__sub_82ABE388) {
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
	// lwz r11,200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82abe3e0
	if (cr6.lt) goto loc_82ABE3E0;
	// bne cr6,0x82abe46c
	if (!cr6.eq) goto loc_82ABE46C;
	// ld r3,216(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 216);
	// bl 0x830ee460
	ctx.lr = 0x82ABE3B4;
	sub_830EE460(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82abe470
	if (!cr6.eq) goto loc_82ABE470;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
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
loc_82ABE3E0:
	// cmpwi cr6,r4,5
	cr6.compare<int32_t>(ctx.r4.s32, 5, xer);
	// bne cr6,0x82abe46c
	if (!cr6.eq) goto loc_82ABE46C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82ABE3F0;
	sub_82D1C1A8(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bge cr6,0x82abe46c
	if (!cr6.lt) goto loc_82ABE46C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stb r11,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r11.u8);
	// bl 0x830f00a8
	ctx.lr = 0x82ABE42C;
	sub_830F00A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82abe464
	if (!cr6.eq) goto loc_82ABE464;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82abe448
	if (!cr6.lt) goto loc_82ABE448;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
loc_82ABE448:
	// addi r4,r31,216
	ctx.r4.s64 = ctx.r31.s64 + 216;
	// bl 0x830ee440
	ctx.lr = 0x82ABE450;
	sub_830EE440(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19858
	ctx.lr = 0x82ABE464;
	sub_82D19858(ctx, base);
loc_82ABE464:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837e41d8
	ctx.lr = 0x82ABE46C;
	sub_837E41D8(ctx, base);
loc_82ABE46C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82ABE470:
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

__attribute__((alias("__imp__sub_82ABE484"))) PPC_WEAK_FUNC(sub_82ABE484);
PPC_FUNC_IMPL(__imp__sub_82ABE484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABE488"))) PPC_WEAK_FUNC(sub_82ABE488);
PPC_FUNC_IMPL(__imp__sub_82ABE488) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,25504
	ctx.r9.s64 = ctx.r11.s64 + 25504;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r31,r3,228
	ctx.r31.s64 = ctx.r3.s64 + 228;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// lwz r3,228(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abe4ec
	if (cr6.eq) goto loc_82ABE4EC;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x838adab0
	ctx.lr = 0x82ABE4D8;
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
	ctx.lr = 0x82ABE4EC;
	sub_825952B8(ctx, base);
loc_82ABE4EC:
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
	// bl 0x82bdc910
	ctx.lr = 0x82ABE504;
	sub_82BDC910(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABE51C"))) PPC_WEAK_FUNC(sub_82ABE51C);
PPC_FUNC_IMPL(__imp__sub_82ABE51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABE520"))) PPC_WEAK_FUNC(sub_82ABE520);
PPC_FUNC_IMPL(__imp__sub_82ABE520) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82abe488
	ctx.lr = 0x82ABE540;
	sub_82ABE488(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82abe558
	if (cr6.eq) goto loc_82ABE558;
	// bl 0x82416268
	ctx.lr = 0x82ABE554;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82ABE558:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABE570"))) PPC_WEAK_FUNC(sub_82ABE570);
PPC_FUNC_IMPL(__imp__sub_82ABE570) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82ABE578;
	__savegprlr_24(ctx, base);
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r24,1
	ctx.r24.s64 = 1;
	// bl 0x830efe48
	ctx.lr = 0x82ABE5A8;
	sub_830EFE48(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830efe70
	ctx.lr = 0x82ABE5B4;
	sub_830EFE70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830ef9d8
	ctx.lr = 0x82ABE5BC;
	sub_830EF9D8(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x82abe73c
	if (cr6.eq) goto loc_82ABE73C;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82abe73c
	if (cr6.eq) goto loc_82ABE73C;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
	// stw r9,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r9.u32);
	// bl 0x8291fd60
	ctx.lr = 0x82ABE5EC;
	sub_8291FD60(ctx, base);
	// li r5,480
	ctx.r5.s64 = 480;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x831cdcf0
	ctx.lr = 0x82ABE5FC;
	sub_831CDCF0(ctx, base);
	// bl 0x82abe100
	ctx.lr = 0x82ABE600;
	sub_82ABE100(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82c0faa0
	ctx.lr = 0x82ABE60C;
	sub_82C0FAA0(ctx, base);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r5,31
	ctx.r5.s64 = 31;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82a70db0
	ctx.lr = 0x82ABE620;
	sub_82A70DB0(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r10,208(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// li r27,15
	ctx.r27.s64 = 15;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r25,-1
	ctx.r25.s64 = -1;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82abe6ec
	if (!cr6.lt) goto loc_82ABE6EC;
loc_82ABE644:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bge cr6,0x82abe6d4
	if (!cr6.lt) goto loc_82ABE6D4;
	// stw r27,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r27.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r30,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r30.u8);
	// stw r27,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r27.u32);
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stb r30,196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 196, ctx.r30.u8);
	// bl 0x830f00a8
	ctx.lr = 0x82ABE674;
	sub_830F00A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82abe6cc
	if (!cr6.eq) goto loc_82ABE6CC;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82ABE69C;
	sub_8259CB28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8291fdc8
	ctx.lr = 0x82ABE6A8;
	sub_8291FDC8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82abe6c4
	if (!cr6.eq) goto loc_82ABE6C4;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// subf r26,r11,r10
	ctx.r26.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82ABE6C4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82ABE6CC;
	sub_8387E8E0(ctx, base);
loc_82ABE6CC:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837e41d8
	ctx.lr = 0x82ABE6D4;
	sub_837E41D8(ctx, base);
loc_82ABE6D4:
	// lwz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x82abe644
	if (cr6.lt) goto loc_82ABE644;
loc_82ABE6EC:
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x82ABE70C;
	sub_8259CB28(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d22d48
	ctx.lr = 0x82ABE71C;
	sub_82D22D48(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r6,r24
	ctx.r3.u64 = ctx.r6.u64 & ctx.r24.u64;
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82ABE73C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABE748"))) PPC_WEAK_FUNC(sub_82ABE748);
PPC_FUNC_IMPL(__imp__sub_82ABE748) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bdc848
	ctx.lr = 0x82ABE768;
	sub_82BDC848(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,25504
	ctx.r8.s64 = ctx.r10.s64 + 25504;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// addi r30,r31,228
	ctx.r30.s64 = ctx.r31.s64 + 228;
	// stw r6,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r6.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// std r11,216(r31)
	PPC_STORE_U64(ctx.r31.u32 + 216, ctx.r11.u64);
	// stb r11,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r11.u8);
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// bl 0x82d17d90
	ctx.lr = 0x82ABE7B4;
	sub_82D17D90(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82abe570
	ctx.lr = 0x82ABE7C4;
	sub_82ABE570(ctx, base);
	// lwz r5,228(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r4,232(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// bne cr6,0x82abe820
	if (!cr6.eq) goto loc_82ABE820;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,25182
	ctx.r4.s64 = ctx.r11.s64 + 25182;
	// bl 0x837b0c10
	ctx.lr = 0x82ABE7E4;
	sub_837B0C10(ctx, base);
	// lis r4,990
	ctx.r4.s64 = 64880640;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,180
	ctx.r4.u64 = ctx.r4.u64 | 180;
	// bl 0x82d04220
	ctx.lr = 0x82ABE7F4;
	sub_82D04220(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8291fdc8
	ctx.lr = 0x82ABE800;
	sub_8291FDC8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82abe820
	if (cr6.lt) goto loc_82ABE820;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82ABE820;
	sub_825952B8(ctx, base);
loc_82ABE820:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82ABE83C"))) PPC_WEAK_FUNC(sub_82ABE83C);
PPC_FUNC_IMPL(__imp__sub_82ABE83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABE840"))) PPC_WEAK_FUNC(sub_82ABE840);
PPC_FUNC_IMPL(__imp__sub_82ABE840) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x82abe868
	if (cr6.lt) goto loc_82ABE868;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82abe86c
	goto loc_82ABE86C;
loc_82ABE868:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82ABE86C:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,248
	ctx.r4.s64 = 248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82ABE888;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abe8a0
	if (cr6.eq) goto loc_82ABE8A0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82abe748
	ctx.lr = 0x82ABE89C;
	sub_82ABE748(ctx, base);
	// b 0x82abe8a4
	goto loc_82ABE8A4;
loc_82ABE8A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82ABE8A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABE8BC"))) PPC_WEAK_FUNC(sub_82ABE8BC);
PPC_FUNC_IMPL(__imp__sub_82ABE8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABE8C0"))) PPC_WEAK_FUNC(sub_82ABE8C0);
PPC_FUNC_IMPL(__imp__sub_82ABE8C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,216(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABE8CC"))) PPC_WEAK_FUNC(sub_82ABE8CC);
PPC_FUNC_IMPL(__imp__sub_82ABE8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABE8D0"))) PPC_WEAK_FUNC(sub_82ABE8D0);
PPC_FUNC_IMPL(__imp__sub_82ABE8D0) {
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
	// bl 0x82bdccb8
	ctx.lr = 0x82ABE8E8;
	sub_82BDCCB8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82ABE904"))) PPC_WEAK_FUNC(sub_82ABE904);
PPC_FUNC_IMPL(__imp__sub_82ABE904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABE908"))) PPC_WEAK_FUNC(sub_82ABE908);
PPC_FUNC_IMPL(__imp__sub_82ABE908) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// li r10,28
	ctx.r10.s64 = 28;
	// lwz r9,200(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r3,r8,r10
	ctx.r3.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABE920"))) PPC_WEAK_FUNC(sub_82ABE920);
PPC_FUNC_IMPL(__imp__sub_82ABE920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82ABE928;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82d19bc0
	ctx.lr = 0x82ABE944;
	sub_82D19BC0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abe950
	if (cr6.eq) goto loc_82ABE950;
	// lwz r28,132(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
loc_82ABE950:
	// lwz r10,100(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r29,100
	ctx.r3.s64 = ctx.r29.s64 + 100;
	// addi r29,r11,26128
	ctx.r29.s64 = ctx.r11.s64 + 26128;
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82ABE970;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abe9d4
	if (cr6.eq) goto loc_82ABE9D4;
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mulli r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 * 28;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82ABE990;
	sub_82D291E0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// subf r5,r28,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r28.s64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bdc948
	ctx.lr = 0x82ABE9A4;
	sub_82BDC948(ctx, base);
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x82abe9c0
	if (cr6.eq) goto loc_82ABE9C0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x82abe9c4
	if (!cr6.eq) goto loc_82ABE9C4;
loc_82ABE9C0:
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
loc_82ABE9C4:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d233b0
	ctx.lr = 0x82ABE9D4;
	sub_82D233B0(ctx, base);
loc_82ABE9D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABE9DC"))) PPC_WEAK_FUNC(sub_82ABE9DC);
PPC_FUNC_IMPL(__imp__sub_82ABE9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABE9E0"))) PPC_WEAK_FUNC(sub_82ABE9E0);
PPC_FUNC_IMPL(__imp__sub_82ABE9E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82ABE9E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,220(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 220);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82abeabc
	if (cr6.eq) goto loc_82ABEABC;
	// bl 0x82d1c1a8
	ctx.lr = 0x82ABEA00;
	sub_82D1C1A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,480
	ctx.r5.s64 = 480;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831cdcf0
	ctx.lr = 0x82ABEA14;
	sub_831CDCF0(ctx, base);
	// bl 0x83763ef8
	ctx.lr = 0x82ABEA18;
	sub_83763EF8(ctx, base);
	// lwz r30,168(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// bl 0x83763ef8
	ctx.lr = 0x82ABEA20;
	sub_83763EF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abea50
	if (cr6.eq) goto loc_82ABEA50;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8306e988
	ctx.lr = 0x82ABEA3C;
	sub_8306E988(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83773c28
	ctx.lr = 0x82ABEA50;
	sub_83773C28(ctx, base);
loc_82ABEA50:
	// li r4,31
	ctx.r4.s64 = 31;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ab2f88
	ctx.lr = 0x82ABEA5C;
	sub_82AB2F88(ctx, base);
	// lwz r11,216(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 216);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x82abea88
	if (!cr6.eq) goto loc_82ABEA88;
	// bl 0x82abe100
	ctx.lr = 0x82ABEA70;
	sub_82ABE100(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,31
	ctx.r5.s64 = 31;
	// bl 0x82c0fb38
	ctx.lr = 0x82ABEA7C;
	sub_82C0FB38(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82ABEA88:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x82abeab0
	if (!cr6.eq) goto loc_82ABEAB0;
	// bl 0x82abe100
	ctx.lr = 0x82ABEA98;
	sub_82ABE100(ctx, base);
	// addi r4,r31,-1
	ctx.r4.s64 = ctx.r31.s64 + -1;
	// li r5,31
	ctx.r5.s64 = 31;
	// bl 0x82c0fb38
	ctx.lr = 0x82ABEAA4;
	sub_82C0FB38(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82ABEAB0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d17d80
	ctx.lr = 0x82ABEABC;
	sub_82D17D80(ctx, base);
loc_82ABEABC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABEAC8"))) PPC_WEAK_FUNC(sub_82ABEAC8);
PPC_FUNC_IMPL(__imp__sub_82ABEAC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,28
	ctx.r9.s64 = 28;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// lwz r8,200(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// divw r6,r7,r9
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// mulli r11,r5,28
	ctx.r11.s64 = ctx.r5.s64 * 28;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8259cb28
	sub_8259CB28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABEB04"))) PPC_WEAK_FUNC(sub_82ABEB04);
PPC_FUNC_IMPL(__imp__sub_82ABEB04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABEB08"))) PPC_WEAK_FUNC(sub_82ABEB08);
PPC_FUNC_IMPL(__imp__sub_82ABEB08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,26224
	ctx.r9.s64 = ctx.r11.s64 + 26224;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r31,r3,200
	ctx.r31.s64 = ctx.r3.s64 + 200;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// lwz r3,200(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abeb6c
	if (cr6.eq) goto loc_82ABEB6C;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x838adab0
	ctx.lr = 0x82ABEB58;
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
	ctx.lr = 0x82ABEB6C;
	sub_825952B8(ctx, base);
loc_82ABEB6C:
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
	// bl 0x82bdc910
	ctx.lr = 0x82ABEB84;
	sub_82BDC910(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABEB9C"))) PPC_WEAK_FUNC(sub_82ABEB9C);
PPC_FUNC_IMPL(__imp__sub_82ABEB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABEBA0"))) PPC_WEAK_FUNC(sub_82ABEBA0);
PPC_FUNC_IMPL(__imp__sub_82ABEBA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82ABEBA8;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82bdc848
	ctx.lr = 0x82ABEBB8;
	sub_82BDC848(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,26224
	ctx.r9.s64 = ctx.r11.s64 + 26224;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r9,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r9.u32);
	// stw r8,72(r26)
	PPC_STORE_U32(ctx.r26.u32 + 72, ctx.r8.u32);
	// addi r30,r26,200
	ctx.r30.s64 = ctx.r26.s64 + 200;
	// stw r31,200(r26)
	PPC_STORE_U32(ctx.r26.u32 + 200, ctx.r31.u32);
	// addi r27,r26,216
	ctx.r27.s64 = ctx.r26.s64 + 216;
	// stw r31,204(r26)
	PPC_STORE_U32(ctx.r26.u32 + 204, ctx.r31.u32);
	// stw r31,208(r26)
	PPC_STORE_U32(ctx.r26.u32 + 208, ctx.r31.u32);
	// stw r31,216(r26)
	PPC_STORE_U32(ctx.r26.u32 + 216, ctx.r31.u32);
	// stb r31,220(r26)
	PPC_STORE_U8(ctx.r26.u32 + 220, ctx.r31.u8);
	// lwz r4,204(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 204);
	// lwz r5,200(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 200);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82abec24
	if (cr6.eq) goto loc_82ABEC24;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83915a50
	ctx.lr = 0x82ABEC0C;
	sub_83915A50(ctx, base);
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x838adab0
	ctx.lr = 0x82ABEC20;
	sub_838ADAB0(ctx, base);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
loc_82ABEC24:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830ef998
	ctx.lr = 0x82ABEC2C;
	sub_830EF998(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r25,2
	ctx.r25.s64 = 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82abecd4
	if (!cr6.gt) goto loc_82ABECD4;
loc_82ABEC44:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830efe28
	ctx.lr = 0x82ABEC50;
	sub_830EFE28(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82be2738
	ctx.lr = 0x82ABEC58;
	sub_82BE2738(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_82ABEC6C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82abec6c
	if (!cr6.eq) goto loc_82ABEC6C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82ABEC90;
	sub_8259CC28(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8291fdc8
	ctx.lr = 0x82ABEC9C;
	sub_8291FDC8(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82abecb8
	if (cr6.lt) goto loc_82ABECB8;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82ABECB8;
	sub_825952B8(ctx, base);
loc_82ABECB8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x82abec44
	if (cr6.lt) goto loc_82ABEC44;
loc_82ABECD4:
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r4,r11,25894
	ctx.r4.s64 = ctx.r11.s64 + 25894;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82ABECF4;
	sub_8259CC28(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82abed0c
	if (!cr6.lt) goto loc_82ABED0C;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_82ABED0C:
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lis r4,990
	ctx.r4.s64 = 64880640;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,180
	ctx.r4.u64 = ctx.r4.u64 | 180;
	// bl 0x82d04220
	ctx.lr = 0x82ABED20;
	sub_82D04220(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8291fdc8
	ctx.lr = 0x82ABED2C;
	sub_8291FDC8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bge cr6,0x82abed44
	if (!cr6.lt) goto loc_82ABED44;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_82ABED44:
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,11
	ctx.r4.u64 = ctx.r4.u64 | 11;
	// bl 0x82d04220
	ctx.lr = 0x82ABED58;
	sub_82D04220(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8291fdc8
	ctx.lr = 0x82ABED64;
	sub_8291FDC8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82abed80
	if (cr6.lt) goto loc_82ABED80;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82ABED80;
	sub_825952B8(ctx, base);
loc_82ABED80:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABED8C"))) PPC_WEAK_FUNC(sub_82ABED8C);
PPC_FUNC_IMPL(__imp__sub_82ABED8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABED90"))) PPC_WEAK_FUNC(sub_82ABED90);
PPC_FUNC_IMPL(__imp__sub_82ABED90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82abeb08
	ctx.lr = 0x82ABEDB0;
	sub_82ABEB08(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82abedc8
	if (cr6.eq) goto loc_82ABEDC8;
	// bl 0x82416268
	ctx.lr = 0x82ABEDC4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82ABEDC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABEDE0"))) PPC_WEAK_FUNC(sub_82ABEDE0);
PPC_FUNC_IMPL(__imp__sub_82ABEDE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x82abee08
	if (cr6.lt) goto loc_82ABEE08;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82abee0c
	goto loc_82ABEE0C;
loc_82ABEE08:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82ABEE0C:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,224
	ctx.r4.s64 = 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82ABEE28;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abee40
	if (cr6.eq) goto loc_82ABEE40;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82abeba0
	ctx.lr = 0x82ABEE3C;
	sub_82ABEBA0(ctx, base);
	// b 0x82abee44
	goto loc_82ABEE44;
loc_82ABEE40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82ABEE44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABEE5C"))) PPC_WEAK_FUNC(sub_82ABEE5C);
PPC_FUNC_IMPL(__imp__sub_82ABEE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABEE60"))) PPC_WEAK_FUNC(sub_82ABEE60);
PPC_FUNC_IMPL(__imp__sub_82ABEE60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r11,27052
	ctx.r3.s64 = ctx.r11.s64 + 27052;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x82ABEE94;
	sub_82D2F6D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abeecc
	if (cr6.eq) goto loc_82ABEECC;
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
	ctx.lr = 0x82ABEEC0;
	sub_82D2AC30(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x82ABEECC;
	sub_83103100(ctx, base);
loc_82ABEECC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABEEE4"))) PPC_WEAK_FUNC(sub_82ABEEE4);
PPC_FUNC_IMPL(__imp__sub_82ABEEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABEEE8"))) PPC_WEAK_FUNC(sub_82ABEEE8);
PPC_FUNC_IMPL(__imp__sub_82ABEEE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r11,27072
	ctx.r3.s64 = ctx.r11.s64 + 27072;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2ee48
	ctx.lr = 0x82ABEF18;
	sub_82D2EE48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abef3c
	if (cr6.eq) goto loc_82ABEF3C;
	// lis r4,229
	ctx.r4.s64 = 15007744;
	// ori r4,r4,51
	ctx.r4.u64 = ctx.r4.u64 | 51;
	// bl 0x82d2ada8
	ctx.lr = 0x82ABEF30;
	sub_82D2ADA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x82ABEF3C;
	sub_83103100(ctx, base);
loc_82ABEF3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABEF54"))) PPC_WEAK_FUNC(sub_82ABEF54);
PPC_FUNC_IMPL(__imp__sub_82ABEF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABEF58"))) PPC_WEAK_FUNC(sub_82ABEF58);
PPC_FUNC_IMPL(__imp__sub_82ABEF58) {
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
	// bl 0x830efd90
	ctx.lr = 0x82ABEF68;
	sub_830EFD90(ctx, base);
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

__attribute__((alias("__imp__sub_82ABEF7C"))) PPC_WEAK_FUNC(sub_82ABEF7C);
PPC_FUNC_IMPL(__imp__sub_82ABEF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABEF80"))) PPC_WEAK_FUNC(sub_82ABEF80);
PPC_FUNC_IMPL(__imp__sub_82ABEF80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r9,r11,27208
	ctx.r9.s64 = ctx.r11.s64 + 27208;
	// addi r8,r10,27204
	ctx.r8.s64 = ctx.r10.s64 + 27204;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d25548
	ctx.lr = 0x82ABEFB8;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82abefd0
	if (cr6.eq) goto loc_82ABEFD0;
	// bl 0x82416268
	ctx.lr = 0x82ABEFCC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82ABEFD0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABEFE8"))) PPC_WEAK_FUNC(sub_82ABEFE8);
PPC_FUNC_IMPL(__imp__sub_82ABEFE8) {
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
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82abf028
	if (cr6.eq) goto loc_82ABF028;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82abf05c
	if (!cr6.eq) goto loc_82ABF05C;
	// li r3,2
	ctx.r3.s64 = 2;
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
loc_82ABF028:
	// cmpwi cr6,r4,5
	cr6.compare<int32_t>(ctx.r4.s32, 5, xer);
	// bne cr6,0x82abf040
	if (!cr6.eq) goto loc_82ABF040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82abee60
	ctx.lr = 0x82ABF038;
	sub_82ABEE60(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82abf04c
	goto loc_82ABF04C;
loc_82ABF040:
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bne cr6,0x82abf05c
	if (!cr6.eq) goto loc_82ABF05C;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82ABF04C:
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19858
	ctx.lr = 0x82ABF05C;
	sub_82D19858(ctx, base);
loc_82ABF05C:
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

__attribute__((alias("__imp__sub_82ABF074"))) PPC_WEAK_FUNC(sub_82ABF074);
PPC_FUNC_IMPL(__imp__sub_82ABF074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABF078"))) PPC_WEAK_FUNC(sub_82ABF078);
PPC_FUNC_IMPL(__imp__sub_82ABF078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82ABF080;
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
	// bl 0x8308e078
	ctx.lr = 0x82ABF094;
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
	ctx.lr = 0x82ABF0AC;
	sub_82D253F8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
	// addi r9,r11,27208
	ctx.r9.s64 = ctx.r11.s64 + 27208;
	// addi r8,r10,27204
	ctx.r8.s64 = ctx.r10.s64 + 27204;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// li r5,480
	ctx.r5.s64 = 480;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x82ABF0E0;
	sub_831CDCF0(ctx, base);
	// addi r29,r31,580
	ctx.r29.s64 = ctx.r31.s64 + 580;
	// li r5,480
	ctx.r5.s64 = 480;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x82ABF0F4;
	sub_831CDCF0(ctx, base);
	// lis r28,-31777
	ctx.r28.s64 = -2082537472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r28,-12176
	ctx.r6.s64 = ctx.r28.s64 + -12176;
	// lwz r4,-4(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + -4);
	// bl 0x82d20ae0
	ctx.lr = 0x82ABF108;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-12176(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + -12176);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d23390
	ctx.lr = 0x82ABF118;
	sub_82D23390(ctx, base);
	// li r5,480
	ctx.r5.s64 = 480;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82ABF128;
	sub_831CDCF0(ctx, base);
	// li r5,480
	ctx.r5.s64 = 480;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82ABF138;
	sub_831CDCF0(ctx, base);
	// bl 0x830efe98
	ctx.lr = 0x82ABF13C;
	sub_830EFE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABF148"))) PPC_WEAK_FUNC(sub_82ABF148);
PPC_FUNC_IMPL(__imp__sub_82ABF148) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x82abf170
	if (cr6.lt) goto loc_82ABF170;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82abf174
	goto loc_82ABF174;
loc_82ABF170:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82ABF174:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,1060
	ctx.r4.s64 = 1060;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82ABF190;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abf1a8
	if (cr6.eq) goto loc_82ABF1A8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82abf078
	ctx.lr = 0x82ABF1A4;
	sub_82ABF078(ctx, base);
	// b 0x82abf1ac
	goto loc_82ABF1AC;
loc_82ABF1A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82ABF1AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABF1C4"))) PPC_WEAK_FUNC(sub_82ABF1C4);
PPC_FUNC_IMPL(__imp__sub_82ABF1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABF1C8"))) PPC_WEAK_FUNC(sub_82ABF1C8);
PPC_FUNC_IMPL(__imp__sub_82ABF1C8) {
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
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82ABF1F4;
	sub_82595718(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abf210
	if (cr6.eq) goto loc_82ABF210;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r10,r11,27496
	ctx.r10.s64 = ctx.r11.s64 + 27496;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82abf214
	goto loc_82ABF214;
loc_82ABF210:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82ABF214:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83878e28
	ctx.lr = 0x82ABF230;
	sub_83878E28(ctx, base);
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

__attribute__((alias("__imp__sub_82ABF248"))) PPC_WEAK_FUNC(sub_82ABF248);
PPC_FUNC_IMPL(__imp__sub_82ABF248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82ABF250;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82ABF25C;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82ABF264;
	sub_82D33DB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82ABF270;
	sub_82D33DB0(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r28,r11,27020
	ctx.r28.s64 = ctx.r11.s64 + 27020;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r28,-12
	ctx.r4.s64 = ctx.r28.s64 + -12;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ABF290;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r27,15
	ctx.r27.s64 = 15;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r25,2
	ctx.r25.s64 = 2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abf304
	if (cr6.eq) goto loc_82ABF304;
	// bl 0x82d3a1c8
	ctx.lr = 0x82ABF2AC;
	sub_82D3A1C8(ctx, base);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82ABF2CC;
	sub_8259CB28(ctx, base);
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r30,100
	ctx.r3.s64 = ctx.r30.s64 + 100;
	// bl 0x82ab4630
	ctx.lr = 0x82ABF2DC;
	sub_82AB4630(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82abf2f8
	if (cr6.lt) goto loc_82ABF2F8;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82ABF2F8;
	sub_825952B8(ctx, base);
loc_82ABF2F8:
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
loc_82ABF304:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82ABF310;
	sub_82D33DB0(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ABF328;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abf38c
	if (cr6.eq) goto loc_82ABF38C;
	// bl 0x82d3a1c8
	ctx.lr = 0x82ABF334;
	sub_82D3A1C8(ctx, base);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x82ABF354;
	sub_8259CB28(ctx, base);
	// li r5,37
	ctx.r5.s64 = 37;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r30,100
	ctx.r3.s64 = ctx.r30.s64 + 100;
	// bl 0x82ab4630
	ctx.lr = 0x82ABF364;
	sub_82AB4630(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82abf380
	if (cr6.lt) goto loc_82ABF380;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82ABF380;
	sub_825952B8(ctx, base);
loc_82ABF380:
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_82ABF38C:
	// bl 0x83763ef8
	ctx.lr = 0x82ABF390;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abf3b8
	if (cr6.eq) goto loc_82ABF3B8;
	// bl 0x83763ef8
	ctx.lr = 0x82ABF39C;
	sub_83763EF8(ctx, base);
	// lwz r29,168(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x83763ef8
	ctx.lr = 0x82ABF3A8;
	sub_83763EF8(ctx, base);
	// addi r4,r30,100
	ctx.r4.s64 = ctx.r30.s64 + 100;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x83775270
	ctx.lr = 0x82ABF3B8;
	sub_83775270(ctx, base);
loc_82ABF3B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABF3C4"))) PPC_WEAK_FUNC(sub_82ABF3C4);
PPC_FUNC_IMPL(__imp__sub_82ABF3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ABF3C8"))) PPC_WEAK_FUNC(sub_82ABF3C8);
PPC_FUNC_IMPL(__imp__sub_82ABF3C8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addis r11,r11,-264
	ctx.r11.s64 = ctx.r11.s64 + -17301504;
	// addic. r11,r11,-17
	xer.ca = ctx.r11.u32 > 16;
	ctx.r11.s64 = ctx.r11.s64 + -17;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82abf410
	if (cr0.eq) goto loc_82ABF410;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82abf49c
	if (!cr6.eq) goto loc_82ABF49C;
	// bl 0x82d1c1a8
	ctx.lr = 0x82ABF3FC;
	sub_82D1C1A8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82abf49c
	if (!cr6.eq) goto loc_82ABF49C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82abeee8
	ctx.lr = 0x82ABF40C;
	sub_82ABEEE8(ctx, base);
	// b 0x82abf49c
	goto loc_82ABF49C;
loc_82ABF410:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82ABF418;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82ABF420;
	sub_82D33DB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82ABF428;
	sub_82D33DB0(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r11,27108
	ctx.r31.s64 = ctx.r11.s64 + 27108;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ABF448;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abf49c
	if (cr6.eq) goto loc_82ABF49C;
	// bl 0x82d3a1c8
	ctx.lr = 0x82ABF454;
	sub_82D3A1C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8292a3f8
	ctx.lr = 0x82ABF460;
	sub_8292A3F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82ABF468;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ABF480;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abf494
	if (cr6.eq) goto loc_82ABF494;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d2fde0
	ctx.lr = 0x82ABF494;
	sub_82D2FDE0(ctx, base);
loc_82ABF494:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82ABF49C;
	sub_8387E8E0(ctx, base);
loc_82ABF49C:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82ABF4B8"))) PPC_WEAK_FUNC(sub_82ABF4B8);
PPC_FUNC_IMPL(__imp__sub_82ABF4B8) {
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
	ctx.lr = 0x82ABF4C0;
	__savegprlr_22(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r31,188(r1)
	PPC_STORE_U8(ctx.r1.u32 + 188, ctx.r31.u8);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stb r31,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r31.u8);
	// li r5,36
	ctx.r5.s64 = 36;
	// stw r31,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r31.u32);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// stb r31,260(r1)
	PPC_STORE_U8(ctx.r1.u32 + 260, ctx.r31.u8);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// stw r28,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r28.u32);
	// stw r28,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r28.u32);
	// stw r28,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r28.u32);
	// stw r28,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r28.u32);
	// bl 0x8306c890
	ctx.lr = 0x82ABF514;
	sub_8306C890(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,332(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// li r5,36
	ctx.r5.s64 = 36;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// and r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 & ctx.r10.u64;
	// stw r6,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r6.u32);
	// bl 0x82ab4a90
	ctx.lr = 0x82ABF540;
	sub_82AB4A90(ctx, base);
	// lis r5,38
	ctx.r5.s64 = 2490368;
	// stw r31,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r31.u32);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// ori r4,r5,2
	ctx.r4.u64 = ctx.r5.u64 | 2;
	// stw r4,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r4.u32);
	// bl 0x82d042a8
	ctx.lr = 0x82ABF558;
	sub_82D042A8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,37
	ctx.r5.s64 = 37;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// bl 0x8306c890
	ctx.lr = 0x82ABF568;
	sub_8306C890(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,332(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// li r29,1
	ctx.r29.s64 = 1;
	// subfic r11,r4,0
	xer.ca = ctx.r4.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r4.s64;
	// stw r29,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r29.u32);
	// li r5,37
	ctx.r5.s64 = 37;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r4,r1,260
	ctx.r4.s64 = ctx.r1.s64 + 260;
	// and r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 & ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r8,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r8.u32);
	// bl 0x82ab4a90
	ctx.lr = 0x82ABF598;
	sub_82AB4A90(ctx, base);
	// lis r7,-32066
	ctx.r7.s64 = -2101477376;
	// lis r6,38
	ctx.r6.s64 = 2490368;
	// addi r5,r7,9896
	ctx.r5.s64 = ctx.r7.s64 + 9896;
	// ori r4,r6,4
	ctx.r4.u64 = ctx.r6.u64 | 4;
	// stw r5,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r5.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r4,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r4.u32);
	// bl 0x82d042a8
	ctx.lr = 0x82ABF5B8;
	sub_82D042A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82ABF5C0;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82ABF5C8;
	sub_82D33DB0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// addi r30,r1,244
	ctx.r30.s64 = ctx.r1.s64 + 244;
	// li r23,-1
	ctx.r23.s64 = -1;
	// li r22,2
	ctx.r22.s64 = 2;
	// addi r25,r11,26996
	ctx.r25.s64 = ctx.r11.s64 + 26996;
loc_82ABF5E4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82ABF5F0;
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
	ctx.lr = 0x82ABF608;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abf704
	if (cr6.eq) goto loc_82ABF704;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
	// stb r31,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r31.u8);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82ABF648;
	sub_8259CB28(ctx, base);
	// lwz r10,-8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82abf65c
	if (cr6.lt) goto loc_82ABF65C;
	// lwz r4,-28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28);
	// b 0x82abf660
	goto loc_82ABF660;
loc_82ABF65C:
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
loc_82ABF660:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82ABF664:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82abf664
	if (!cr6.eq) goto loc_82ABF664;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82ABF688;
	sub_8259CC28(ctx, base);
	// lwz r10,-60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -60);
	// lwz r9,-64(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -64);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r8,-68(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -68);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stb r29,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r29.u8);
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// stw r8,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r8.u32);
	// bl 0x82d3a988
	ctx.lr = 0x82ABF6B4;
	sub_82D3A988(ctx, base);
	// lwz r7,148(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82abf6d0
	if (cr6.lt) goto loc_82ABF6D0;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82ABF6D0;
	sub_825952B8(ctx, base);
loc_82ABF6D0:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x82abf6f8
	if (cr6.lt) goto loc_82ABF6F8;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x825952b8
	ctx.lr = 0x82ABF6F8;
	sub_825952B8(ctx, base);
loc_82ABF6F8:
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stb r31,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r31.u8);
loc_82ABF704:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r30,r30,72
	ctx.r30.s64 = ctx.r30.s64 + 72;
	// cmplwi cr6,r26,2
	cr6.compare<uint32_t>(ctx.r26.u32, 2, xer);
	// blt cr6,0x82abf5e4
	if (cr6.lt) goto loc_82ABF5E4;
	// addi r30,r1,380
	ctx.r30.s64 = ctx.r1.s64 + 380;
loc_82ABF718:
	// lwzu r11,-72(r30)
	ea = -72 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82abf734
	if (cr6.lt) goto loc_82ABF734;
	// lwz r4,-20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -20);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// bl 0x825952b8
	ctx.lr = 0x82ABF734;
	sub_825952B8(ctx, base);
loc_82ABF734:
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stw r31,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r31.u32);
	// stb r31,-20(r30)
	PPC_STORE_U8(ctx.r30.u32 + -20, ctx.r31.u8);
	// lwz r11,-28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82abf75c
	if (cr6.lt) goto loc_82ABF75C;
	// lwz r4,-48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -48);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// bl 0x825952b8
	ctx.lr = 0x82ABF75C;
	sub_825952B8(ctx, base);
loc_82ABF75C:
	// stw r28,-28(r30)
	PPC_STORE_U32(ctx.r30.u32 + -28, ctx.r28.u32);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r31,-32(r30)
	PPC_STORE_U32(ctx.r30.u32 + -32, ctx.r31.u32);
	// stb r31,-48(r30)
	PPC_STORE_U8(ctx.r30.u32 + -48, ctx.r31.u8);
	// bge 0x82abf718
	if (!cr0.lt) goto loc_82ABF718;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABF778"))) PPC_WEAK_FUNC(sub_82ABF778);
PPC_FUNC_IMPL(__imp__sub_82ABF778) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82ABF780;
	__savegprlr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,31
	ctx.r5.s64 = 31;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a70db0
	ctx.lr = 0x82ABF79C;
	sub_82A70DB0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// stb r31,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r31.u8);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// stb r31,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r31.u8);
	// bl 0x830e9bf8
	ctx.lr = 0x82ABF7DC;
	sub_830E9BF8(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82abf7f4
	if (!cr6.lt) goto loc_82ABF7F4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_82ABF7F4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830efb28
	ctx.lr = 0x82ABF7FC;
	sub_830EFB28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82abf834
	if (!cr6.eq) goto loc_82ABF834;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82ABF80C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82abf80c
	if (!cr6.eq) goto loc_82ABF80C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82ABF830;
	sub_8259CC28(ctx, base);
	// b 0x82abf86c
	goto loc_82ABF86C;
loc_82ABF834:
	// li r4,31
	ctx.r4.s64 = 31;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ab2f88
	ctx.lr = 0x82ABF840;
	sub_82AB2F88(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82abf860
	if (!cr6.eq) goto loc_82ABF860;
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// ori r4,r4,11
	ctx.r4.u64 = ctx.r4.u64 | 11;
	// b 0x82abf868
	goto loc_82ABF868;
loc_82ABF860:
	// lis r4,990
	ctx.r4.s64 = 64880640;
	// ori r4,r4,180
	ctx.r4.u64 = ctx.r4.u64 | 180;
loc_82ABF868:
	// bl 0x82d04220
	ctx.lr = 0x82ABF86C;
	sub_82D04220(ctx, base);
loc_82ABF86C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837e41d8
	ctx.lr = 0x82ABF874;
	sub_837E41D8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82abf894
	if (cr6.lt) goto loc_82ABF894;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82ABF894;
	sub_825952B8(ctx, base);
loc_82ABF894:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABF8A0"))) PPC_WEAK_FUNC(sub_82ABF8A0);
PPC_FUNC_IMPL(__imp__sub_82ABF8A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82ABF8A8;
	__savegprlr_20(ctx, base);
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x830ef8e8
	ctx.lr = 0x82ABF8B4;
	sub_830EF8E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82abf8cc
	if (cr6.eq) goto loc_82ABF8CC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82ABF8CC:
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,255
	ctx.r10.s64 = 255;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82ABF8E8;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r27,r11,26988
	ctx.r27.s64 = ctx.r11.s64 + 26988;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r27,-56
	ctx.r4.s64 = ctx.r27.s64 + -56;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82ABF908;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abf920
	if (cr6.eq) goto loc_82ABF920;
	// lis r4,38
	ctx.r4.s64 = 2490368;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82d303d0
	ctx.lr = 0x82ABF920;
	sub_82D303D0(ctx, base);
loc_82ABF920:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d1ed60
	ctx.lr = 0x82ABF930;
	sub_82D1ED60(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82ABF938;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r27,-44
	ctx.r4.s64 = ctx.r27.s64 + -44;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ABF950;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r21,0
	ctx.r21.s64 = 0;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// addi r22,r11,-12216
	ctx.r22.s64 = ctx.r11.s64 + -12216;
loc_82ABF964:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82ABF96C;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82ABF974;
	sub_82D33DB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82ABF97C;
	sub_82D33DB0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r22,12
	ctx.r11.s64 = ctx.r22.s64 + 12;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82ABF998;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r4,r31,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// bl 0x82d21408
	ctx.lr = 0x82ABF9B0;
	sub_82D21408(ctx, base);
	// addi r7,r22,24
	ctx.r7.s64 = ctx.r22.s64 + 24;
	// lwzx r4,r31,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82abf9d0
	if (cr6.eq) goto loc_82ABF9D0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d233b0
	ctx.lr = 0x82ABF9D0;
	sub_82D233B0(ctx, base);
loc_82ABF9D0:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r31,12
	cr6.compare<uint32_t>(ctx.r31.u32, 12, xer);
	// blt cr6,0x82abf964
	if (cr6.lt) goto loc_82ABF964;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82ABF9E8;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r27,-28
	ctx.r4.s64 = ctx.r27.s64 + -28;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ABFA00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82ABFA08;
	sub_82D19A78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d33db0
	ctx.lr = 0x82ABFA10;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abfa24
	if (cr6.eq) goto loc_82ABFA24;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82ABFA24;
	sub_82D2AEC8(ctx, base);
loc_82ABFA24:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82ABFA2C;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82ABFA34;
	sub_82D33DB0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x83763ef8
	ctx.lr = 0x82ABFA3C;
	sub_83763EF8(ctx, base);
	// lwz r31,168(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// addi r24,r29,100
	ctx.r24.s64 = ctx.r29.s64 + 100;
	// bl 0x83763ef8
	ctx.lr = 0x82ABFA48;
	sub_83763EF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abfa78
	if (cr6.eq) goto loc_82ABFA78;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8306e988
	ctx.lr = 0x82ABFA64;
	sub_8306E988(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83773c28
	ctx.lr = 0x82ABFA78;
	sub_83773C28(ctx, base);
loc_82ABFA78:
	// bl 0x83763ef8
	ctx.lr = 0x82ABFA7C;
	sub_83763EF8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r29,580
	ctx.r4.s64 = ctx.r29.s64 + 580;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ABFA94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// li r25,15
	ctx.r25.s64 = 15;
	// li r23,2
	ctx.r23.s64 = 2;
	// lis r30,-31762
	ctx.r30.s64 = -2081554432;
	// addi r31,r11,10832
	ctx.r31.s64 = ctx.r11.s64 + 10832;
loc_82ABFAAC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82ABFAB8;
	sub_82D33DB0(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ABFAD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abfae4
	if (cr6.eq) goto loc_82ABFAE4;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r22
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// bl 0x82d29598
	ctx.lr = 0x82ABFAE4;
	sub_82D29598(ctx, base);
loc_82ABFAE4:
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// bne cr6,0x82abfbc8
	if (!cr6.eq) goto loc_82ABFBC8;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// addi r4,r27,-374
	ctx.r4.s64 = ctx.r27.s64 + -374;
	// stw r21,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r21.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r21,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r21.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82ABFB08;
	sub_8259CC28(ctx, base);
	// li r5,480
	ctx.r5.s64 = 480;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x831cdcf0
	ctx.lr = 0x82ABFB18;
	sub_831CDCF0(ctx, base);
	// lwz r11,10836(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10836);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82abfb44
	if (!cr6.eq) goto loc_82ABFB44;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,10836(r30)
	PPC_STORE_U32(ctx.r30.u32 + 10836, ctx.r11.u32);
	// bl 0x824eecc0
	ctx.lr = 0x82ABFB38;
	sub_824EECC0(ctx, base);
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13200
	ctx.r3.s64 = ctx.r11.s64 + -13200;
	// bl 0x831cdcc8
	ctx.lr = 0x82ABFB44;
	sub_831CDCC8(ctx, base);
loc_82ABFB44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x82c0faa0
	ctx.lr = 0x82ABFB54;
	sub_82C0FAA0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82abf778
	ctx.lr = 0x82ABFB64;
	sub_82ABF778(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82ABFB70;
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
	ctx.lr = 0x82ABFB88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abfba0
	if (cr6.eq) goto loc_82ABFBA0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82d291e0
	ctx.lr = 0x82ABFBA0;
	sub_82D291E0(ctx, base);
loc_82ABFBA0:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82abfbbc
	if (cr6.lt) goto loc_82ABFBBC;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82ABFBBC;
	sub_825952B8(ctx, base);
loc_82ABFBBC:
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// stw r21,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r21.u32);
	// stb r21,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r21.u8);
loc_82ABFBC8:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(ctx.r28.u32, 3, xer);
	// blt cr6,0x82abfaac
	if (cr6.lt) goto loc_82ABFAAC;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82abf4b8
	ctx.lr = 0x82ABFBE0;
	sub_82ABF4B8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19788
	ctx.lr = 0x82ABFBF0;
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
	ctx.lr = 0x82ABFC04;
	sub_82D20EB8(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82be3b40
	ctx.lr = 0x82ABFC0C;
	sub_82BE3B40(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABFC18"))) PPC_WEAK_FUNC(sub_82ABFC18);
PPC_FUNC_IMPL(__imp__sub_82ABFC18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82ABFC20;
	__savegprlr_26(ctx, base);
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82abfd98
	if (!cr6.eq) goto loc_82ABFD98;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82abfd94
	if (!cr6.eq) goto loc_82ABFD94;
	// addi r27,r3,580
	ctx.r27.s64 = ctx.r3.s64 + 580;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82abf4b8
	ctx.lr = 0x82ABFC4C;
	sub_82ABF4B8(ctx, base);
	// li r5,480
	ctx.r5.s64 = 480;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x831cdcf0
	ctx.lr = 0x82ABFC60;
	sub_831CDCF0(ctx, base);
	// bl 0x82abe100
	ctx.lr = 0x82ABFC64;
	sub_82ABE100(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82c0faa0
	ctx.lr = 0x82ABFC70;
	sub_82C0FAA0(ctx, base);
	// li r5,31
	ctx.r5.s64 = 31;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82a70db0
	ctx.lr = 0x82ABFC80;
	sub_82A70DB0(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82abe100
	ctx.lr = 0x82ABFC88;
	sub_82ABE100(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,31
	ctx.r5.s64 = 31;
	// bl 0x82c0fb38
	ctx.lr = 0x82ABFC94;
	sub_82C0FB38(ctx, base);
	// addi r29,r31,100
	ctx.r29.s64 = ctx.r31.s64 + 100;
	// li r5,31
	ctx.r5.s64 = 31;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a9bc48
	ctx.lr = 0x82ABFCA8;
	sub_82A9BC48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r30,r11,26646
	ctx.r30.s64 = ctx.r11.s64 + 26646;
	// addi r4,r30,-31
	ctx.r4.s64 = ctx.r30.s64 + -31;
	// bl 0x837b0c10
	ctx.lr = 0x82ABFCBC;
	sub_837B0C10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82ABFCC4;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82ABFCCC;
	sub_82D33DB0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d33db0
	ctx.lr = 0x82ABFCD4;
	sub_82D33DB0(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,386
	ctx.r4.s64 = ctx.r30.s64 + 386;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ABFCEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82abf778
	ctx.lr = 0x82ABFD00;
	sub_82ABF778(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82abfd1c
	if (cr6.eq) goto loc_82ABFD1C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82ABFD1C;
	sub_82D291E0(ctx, base);
loc_82ABFD1C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a9bc48
	ctx.lr = 0x82ABFD2C;
	sub_82A9BC48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82ABFD34;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,394
	ctx.r4.s64 = ctx.r30.s64 + 394;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ABFD4C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82abfd8c
	if (cr6.eq) goto loc_82ABFD8C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82ABFD64;
	sub_837B0C10(ctx, base);
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ab4a90
	ctx.lr = 0x82ABFD74;
	sub_82AB4A90(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2fde0
	ctx.lr = 0x82ABFD84;
	sub_82D2FDE0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82ABFD8C;
	sub_8387E8E0(ctx, base);
loc_82ABFD8C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82ABFD94;
	sub_8387E8E0(ctx, base);
loc_82ABFD94:
	// stw r26,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r26.u32);
loc_82ABFD98:
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ABFDA0"))) PPC_WEAK_FUNC(sub_82ABFDA0);
PPC_FUNC_IMPL(__imp__sub_82ABFDA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r10,11
	ctx.r10.s64 = 11;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r7,r3,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82ABFDB0:
	// lbzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82abfdb0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82ABFDB0;
	// li r9,11
	ctx.r9.s64 = 11;
	// addi r10,r4,9
	ctx.r10.s64 = ctx.r4.s64 + 9;
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82ABFDD0:
	// lbzx r8,r11,r7
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// lbzu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// stb r9,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r9.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x82abfdd0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82ABFDD0;
	// li r10,11
	ctx.r10.s64 = 11;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r4,33
	ctx.r9.s64 = ctx.r4.s64 + 33;
	// addi r8,r3,33
	ctx.r8.s64 = ctx.r3.s64 + 33;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82ABFDFC:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82abfdfc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82ABFDFC;
	// li r9,11
	ctx.r9.s64 = 11;
	// addi r10,r4,42
	ctx.r10.s64 = ctx.r4.s64 + 42;
	// addi r11,r3,45
	ctx.r11.s64 = ctx.r3.s64 + 45;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82ABFE1C:
	// lbzx r8,r7,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// lbzu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// stb r9,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r9.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x82abfe1c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82ABFE1C;
	// li r10,11
	ctx.r10.s64 = 11;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r4,66
	ctx.r9.s64 = ctx.r4.s64 + 66;
	// addi r8,r3,66
	ctx.r8.s64 = ctx.r3.s64 + 66;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82ABFE48:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82abfe48
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82ABFE48;
	// li r9,11
	ctx.r9.s64 = 11;
	// addi r10,r4,75
	ctx.r10.s64 = ctx.r4.s64 + 75;
	// addi r11,r3,78
	ctx.r11.s64 = ctx.r3.s64 + 78;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82ABFE68:
	// lbzx r8,r7,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// lbzu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// stb r9,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r9.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x82abfe68
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82ABFE68;
	// lbz r7,99(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 99);
	// li r10,11
	ctx.r10.s64 = 11;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r4,145
	ctx.r9.s64 = ctx.r4.s64 + 145;
	// addi r8,r3,145
	ctx.r8.s64 = ctx.r3.s64 + 145;
	// stb r7,99(r3)
	PPC_STORE_U8(ctx.r3.u32 + 99, ctx.r7.u8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lbz r6,100(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 100);
	// stb r6,100(r3)
	PPC_STORE_U8(ctx.r3.u32 + 100, ctx.r6.u8);
	// lbz r5,101(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 101);
	// stb r5,101(r3)
	PPC_STORE_U8(ctx.r3.u32 + 101, ctx.r5.u8);
	// lbz r10,102(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 102);
	// stb r10,102(r3)
	PPC_STORE_U8(ctx.r3.u32 + 102, ctx.r10.u8);
	// lbz r7,103(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 103);
	// stb r7,103(r3)
	PPC_STORE_U8(ctx.r3.u32 + 103, ctx.r7.u8);
	// lbz r6,104(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 104);
	// stb r6,104(r3)
	PPC_STORE_U8(ctx.r3.u32 + 104, ctx.r6.u8);
	// lbz r5,105(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 105);
	// stb r5,105(r3)
	PPC_STORE_U8(ctx.r3.u32 + 105, ctx.r5.u8);
	// lwz r10,108(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// stw r10,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// lwz r7,112(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// stw r7,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r7.u32);
	// lwz r6,116(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	// stw r6,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r6.u32);
	// lwz r5,120(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// stw r5,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r5.u32);
	// lwz r10,124(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	// stw r10,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r10.u32);
	// lwz r7,128(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	// stw r7,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r7.u32);
	// lwz r6,132(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	// stw r6,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r6.u32);
	// lwz r5,136(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 136);
	// stw r5,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r5.u32);
	// lbz r10,140(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 140);
	// stb r10,140(r3)
	PPC_STORE_U8(ctx.r3.u32 + 140, ctx.r10.u8);
	// lbz r7,141(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 141);
	// stb r7,141(r3)
	PPC_STORE_U8(ctx.r3.u32 + 141, ctx.r7.u8);
	// lbz r6,142(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 142);
	// stb r6,142(r3)
	PPC_STORE_U8(ctx.r3.u32 + 142, ctx.r6.u8);
	// lbz r5,143(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 143);
	// stb r5,143(r3)
	PPC_STORE_U8(ctx.r3.u32 + 143, ctx.r5.u8);
	// lbz r10,144(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// stb r10,144(r3)
	PPC_STORE_U8(ctx.r3.u32 + 144, ctx.r10.u8);
loc_82ABFF34:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82abff34
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82ABFF34;
	// lbz r11,156(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 156);
	// stb r11,156(r3)
	PPC_STORE_U8(ctx.r3.u32 + 156, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABFF50"))) PPC_WEAK_FUNC(sub_82ABFF50);
PPC_FUNC_IMPL(__imp__sub_82ABFF50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// bge cr6,0x82abff70
	if (!cr6.lt) goto loc_82ABFF70;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,832
	ctx.r3.s64 = ctx.r11.s64 + 832;
	// blr 
	return;
loc_82ABFF70:
	// addi r3,r3,832
	ctx.r3.s64 = ctx.r3.s64 + 832;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ABFF78"))) PPC_WEAK_FUNC(sub_82ABFF78);
PPC_FUNC_IMPL(__imp__sub_82ABFF78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// subf r3,r3,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r31,3
	ctx.r31.s64 = 3;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
loc_82ABFFA4:
	// li r8,11
	ctx.r8.s64 = 11;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82ABFFB8:
	// lbzx r8,r9,r5
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82abffb8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82ABFFB8;
	// li r7,11
	ctx.r7.s64 = 11;
	// addi r8,r10,9
	ctx.r8.s64 = ctx.r10.s64 + 9;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_82ABFFD8:
	// lbzx r6,r5,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// lbzu r7,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stb r6,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r6.u8);
	// stb r7,-1(r9)
	PPC_STORE_U8(ctx.r9.u32 + -1, ctx.r7.u8);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bdnz 0x82abffd8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82ABFFD8;
	// li r8,11
	ctx.r8.s64 = 11;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r10,33
	ctx.r7.s64 = ctx.r10.s64 + 33;
	// addi r6,r11,33
	ctx.r6.s64 = ctx.r11.s64 + 33;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82AC0004:
	// lbzx r8,r7,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// stbx r8,r6,r9
	PPC_STORE_U8(ctx.r6.u32 + ctx.r9.u32, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82ac0004
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82AC0004;
	// li r7,11
	ctx.r7.s64 = 11;
	// addi r8,r10,42
	ctx.r8.s64 = ctx.r10.s64 + 42;
	// addi r9,r11,45
	ctx.r9.s64 = ctx.r11.s64 + 45;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_82AC0024:
	// lbzx r6,r5,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// lbzu r7,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stb r6,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r6.u8);
	// stb r7,-1(r9)
	PPC_STORE_U8(ctx.r9.u32 + -1, ctx.r7.u8);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bdnz 0x82ac0024
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82AC0024;
	// li r8,11
	ctx.r8.s64 = 11;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r10,66
	ctx.r7.s64 = ctx.r10.s64 + 66;
	// addi r6,r11,66
	ctx.r6.s64 = ctx.r11.s64 + 66;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82AC0050:
	// lbzx r8,r7,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// stbx r8,r6,r9
	PPC_STORE_U8(ctx.r6.u32 + ctx.r9.u32, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82ac0050
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82AC0050;
	// li r7,11
	ctx.r7.s64 = 11;
	// addi r8,r10,75
	ctx.r8.s64 = ctx.r10.s64 + 75;
	// addi r9,r11,78
	ctx.r9.s64 = ctx.r11.s64 + 78;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_82AC0070:
	// lbzx r6,r5,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// lbzu r7,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stb r6,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r6.u8);
	// stb r7,-1(r9)
	PPC_STORE_U8(ctx.r9.u32 + -1, ctx.r7.u8);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bdnz 0x82ac0070
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82AC0070;
	// lbz r5,99(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 99);
	// li r8,11
	ctx.r8.s64 = 11;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r10,145
	ctx.r7.s64 = ctx.r10.s64 + 145;
	// addi r6,r11,145
	ctx.r6.s64 = ctx.r11.s64 + 145;
	// stb r5,99(r11)
	PPC_STORE_U8(ctx.r11.u32 + 99, ctx.r5.u8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// lbz r8,100(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 100);
	// stb r8,100(r11)
	PPC_STORE_U8(ctx.r11.u32 + 100, ctx.r8.u8);
	// lbz r5,101(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 101);
	// stb r5,101(r11)
	PPC_STORE_U8(ctx.r11.u32 + 101, ctx.r5.u8);
	// lbz r8,102(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 102);
	// stb r8,102(r11)
	PPC_STORE_U8(ctx.r11.u32 + 102, ctx.r8.u8);
	// lbz r5,103(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 103);
	// stb r5,103(r11)
	PPC_STORE_U8(ctx.r11.u32 + 103, ctx.r5.u8);
	// lbz r8,104(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 104);
	// stb r8,104(r11)
	PPC_STORE_U8(ctx.r11.u32 + 104, ctx.r8.u8);
	// lbz r5,105(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 105);
	// stb r5,105(r11)
	PPC_STORE_U8(ctx.r11.u32 + 105, ctx.r5.u8);
	// lwz r8,108(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// stw r8,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r8.u32);
	// lwz r5,112(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// stw r5,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r5.u32);
	// lwz r8,116(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// stw r8,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r8.u32);
	// lwz r5,120(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// stw r5,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r5.u32);
	// lwz r8,124(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// stw r8,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r8.u32);
	// lwz r5,128(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// stw r5,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r5.u32);
	// lwz r8,132(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// stw r8,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r8.u32);
	// lwz r5,136(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 136);
	// stw r5,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r5.u32);
	// lbz r8,140(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 140);
	// stb r8,140(r11)
	PPC_STORE_U8(ctx.r11.u32 + 140, ctx.r8.u8);
	// lbz r5,141(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 141);
	// stb r5,141(r11)
	PPC_STORE_U8(ctx.r11.u32 + 141, ctx.r5.u8);
	// lbz r8,142(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 142);
	// stb r8,142(r11)
	PPC_STORE_U8(ctx.r11.u32 + 142, ctx.r8.u8);
	// lbz r5,143(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 143);
	// stb r5,143(r11)
	PPC_STORE_U8(ctx.r11.u32 + 143, ctx.r5.u8);
	// lbz r8,144(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 144);
	// stb r8,144(r11)
	PPC_STORE_U8(ctx.r11.u32 + 144, ctx.r8.u8);
loc_82AC013C:
	// lbzx r8,r7,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// stbx r8,r6,r9
	PPC_STORE_U8(ctx.r6.u32 + ctx.r9.u32, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82ac013c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82AC013C;
	// lbz r10,156(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 156);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// stb r10,156(r11)
	PPC_STORE_U8(ctx.r11.u32 + 156, ctx.r10.u8);
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
	// bne 0x82abffa4
	if (!cr0.eq) goto loc_82ABFFA4;
	// addi r4,r4,484
	ctx.r4.s64 = ctx.r4.s64 + 484;
	// addi r3,r30,484
	ctx.r3.s64 = ctx.r30.s64 + 484;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x82AC0170;
	sub_831CE980(ctx, base);
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

__attribute__((alias("__imp__sub_82AC018C"))) PPC_WEAK_FUNC(sub_82AC018C);
PPC_FUNC_IMPL(__imp__sub_82AC018C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC0190"))) PPC_WEAK_FUNC(sub_82AC0190);
PPC_FUNC_IMPL(__imp__sub_82AC0190) {
	PPC_FUNC_PROLOGUE();
	// lis r3,32
	ctx.r3.s64 = 2097152;
	// ori r3,r3,39
	ctx.r3.u64 = ctx.r3.u64 | 39;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC019C"))) PPC_WEAK_FUNC(sub_82AC019C);
PPC_FUNC_IMPL(__imp__sub_82AC019C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC01A0"))) PPC_WEAK_FUNC(sub_82AC01A0);
PPC_FUNC_IMPL(__imp__sub_82AC01A0) {
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
	// lwz r11,200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82ac0220
	if (cr6.eq) goto loc_82AC0220;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82ac0218
	if (!cr6.eq) goto loc_82AC0218;
	// lwz r3,208(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac01f0
	if (cr6.eq) goto loc_82AC01F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AC01EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
loc_82AC01F0:
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82AC01FC;
	sub_82D1C1A8(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-12036
	ctx.r9.s64 = ctx.r11.s64 + -12036;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82d20da8
	ctx.lr = 0x82AC0218;
	sub_82D20DA8(ctx, base);
loc_82AC0218:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ac0244
	goto loc_82AC0244;
loc_82AC0220:
	// bl 0x830ee9a8
	ctx.lr = 0x82AC0224;
	sub_830EE9A8(ctx, base);
	// bl 0x839a04b8
	ctx.lr = 0x82AC0228;
	sub_839A04B8(ctx, base);
	// bl 0x83763ef8
	ctx.lr = 0x82AC022C;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac0240
	if (cr6.eq) goto loc_82AC0240;
	// bl 0x83763ef8
	ctx.lr = 0x82AC0238;
	sub_83763EF8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,210(r3)
	PPC_STORE_U8(ctx.r3.u32 + 210, ctx.r11.u8);
loc_82AC0240:
	// li r3,2
	ctx.r3.s64 = 2;
loc_82AC0244:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC025C"))) PPC_WEAK_FUNC(sub_82AC025C);
PPC_FUNC_IMPL(__imp__sub_82AC025C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC0260"))) PPC_WEAK_FUNC(sub_82AC0260);
PPC_FUNC_IMPL(__imp__sub_82AC0260) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x82AC027C;
	sub_82D1C1A8(ctx, base);
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// bne cr6,0x82ac02dc
	if (!cr6.eq) goto loc_82AC02DC;
	// bl 0x831156e8
	ctx.lr = 0x82AC0288;
	sub_831156E8(ctx, base);
	// bl 0x83763ef8
	ctx.lr = 0x82AC028C;
	sub_83763EF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac02bc
	if (cr6.eq) goto loc_82AC02BC;
	// bl 0x83763ef8
	ctx.lr = 0x82AC029C;
	sub_83763EF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,168(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// bl 0x8376c548
	ctx.lr = 0x82AC02AC;
	sub_8376C548(ctx, base);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// sth r10,180(r30)
	PPC_STORE_U16(ctx.r30.u32 + 180, ctx.r10.u16);
	// stw r9,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r9.u32);
loc_82AC02BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1b890
	ctx.lr = 0x82AC02C4;
	sub_82D1B890(ctx, base);
loc_82AC02C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82AC02DC:
	// cmplwi cr6,r3,10
	cr6.compare<uint32_t>(ctx.r3.u32, 10, xer);
	// bne cr6,0x82ac02bc
	if (!cr6.eq) goto loc_82AC02BC;
	// bl 0x82d9c090
	ctx.lr = 0x82AC02E8;
	sub_82D9C090(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r3.u32);
	// beq cr6,0x82ac02bc
	if (cr6.eq) goto loc_82AC02BC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199d0
	ctx.lr = 0x82AC0300;
	sub_82D199D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,208(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// bl 0x83103100
	ctx.lr = 0x82AC030C;
	sub_83103100(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// b 0x82ac02c4
	goto loc_82AC02C4;
}

__attribute__((alias("__imp__sub_82AC0318"))) PPC_WEAK_FUNC(sub_82AC0318);
PPC_FUNC_IMPL(__imp__sub_82AC0318) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r11.u32);
	// b 0x82a7c5d0
	sub_82A7C5D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC0324"))) PPC_WEAK_FUNC(sub_82AC0324);
PPC_FUNC_IMPL(__imp__sub_82AC0324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC0328"))) PPC_WEAK_FUNC(sub_82AC0328);
PPC_FUNC_IMPL(__imp__sub_82AC0328) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82ac0370
	if (cr6.lt) goto loc_82AC0370;
	// beq cr6,0x82ac0358
	if (cr6.eq) goto loc_82AC0358;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r5,66(r11)
	PPC_STORE_U8(ctx.r11.u32 + 66, ctx.r5.u8);
	// blr 
	return;
loc_82AC0358:
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r5,33(r11)
	PPC_STORE_U8(ctx.r11.u32 + 33, ctx.r5.u8);
	// blr 
	return;
loc_82AC0370:
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// stbx r5,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC0384"))) PPC_WEAK_FUNC(sub_82AC0384);
PPC_FUNC_IMPL(__imp__sub_82AC0384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC0388"))) PPC_WEAK_FUNC(sub_82AC0388);
PPC_FUNC_IMPL(__imp__sub_82AC0388) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82ac03f8
	if (cr6.lt) goto loc_82AC03F8;
	// beq cr6,0x82ac03cc
	if (cr6.eq) goto loc_82AC03CC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r9,1(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// lbz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,77
	ctx.r10.s64 = ctx.r11.s64 + 77;
	// stb r8,77(r11)
	PPC_STORE_U8(ctx.r11.u32 + 77, ctx.r8.u8);
	// stb r9,78(r11)
	PPC_STORE_U8(ctx.r11.u32 + 78, ctx.r9.u8);
	// blr 
	return;
loc_82AC03CC:
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r11,22
	ctx.r11.s64 = ctx.r11.s64 + 22;
	// lbz r10,1(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// blr 
	return;
loc_82AC03F8:
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r9,1(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// lbz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,11
	ctx.r10.s64 = ctx.r11.s64 + 11;
	// stb r8,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r8.u8);
	// stb r9,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC0424"))) PPC_WEAK_FUNC(sub_82AC0424);
PPC_FUNC_IMPL(__imp__sub_82AC0424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC0428"))) PPC_WEAK_FUNC(sub_82AC0428);
PPC_FUNC_IMPL(__imp__sub_82AC0428) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r11,28008
	ctx.r9.s64 = ctx.r11.s64 + 28008;
	// addi r8,r10,17980
	ctx.r8.s64 = ctx.r10.s64 + 17980;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82bdc910
	ctx.lr = 0x82AC0460;
	sub_82BDC910(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82ac0478
	if (cr6.eq) goto loc_82AC0478;
	// bl 0x82416268
	ctx.lr = 0x82AC0474;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AC0478:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC0490"))) PPC_WEAK_FUNC(sub_82AC0490);
PPC_FUNC_IMPL(__imp__sub_82AC0490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82AC0498;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83763ef8
	ctx.lr = 0x82AC04A4;
	sub_83763EF8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ac04bc
	if (!cr6.eq) goto loc_82AC04BC;
loc_82AC04B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82AC04BC:
	// addi r3,r25,84
	ctx.r3.s64 = ctx.r25.s64 + 84;
	// bl 0x8376eaa0
	ctx.lr = 0x82AC04C4;
	sub_8376EAA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac04b0
	if (cr6.eq) goto loc_82AC04B0;
	// bl 0x8378cba8
	ctx.lr = 0x82AC04D4;
	sub_8378CBA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac04f4
	if (cr6.eq) goto loc_82AC04F4;
	// bl 0x8378cba8
	ctx.lr = 0x82AC04E0;
	sub_8378CBA8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8378cc08
	ctx.lr = 0x82AC04E8;
	sub_8378CC08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac04b0
	if (cr6.eq) goto loc_82AC04B0;
loc_82AC04F4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AC0508;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bdca08
	ctx.lr = 0x82AC0518;
	sub_82BDCA08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AC0520;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82AC0528;
	sub_82D33DB0(ctx, base);
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x82ac07a4
	if (cr6.eq) goto loc_82AC07A4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// addi r22,r11,27916
	ctx.r22.s64 = ctx.r11.s64 + 27916;
	// addi r29,r10,-12036
	ctx.r29.s64 = ctx.r10.s64 + -12036;
loc_82AC054C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bdc948
	ctx.lr = 0x82AC0560;
	sub_82BDC948(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82AC056C;
	sub_82D33DB0(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AC0584;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac059c
	if (cr6.eq) goto loc_82AC059C;
	// addi r11,r29,44
	ctx.r11.s64 = ctx.r29.s64 + 44;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d29598
	ctx.lr = 0x82AC059C;
	sub_82D29598(ctx, base);
loc_82AC059C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82AC05A8;
	sub_82D33DB0(ctx, base);
	// lwz r27,168(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + 168);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82AC05B4;
	sub_831156E8(ctx, base);
	// lwz r20,48(r3)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8311c148
	ctx.lr = 0x82AC05C4;
	sub_8311C148(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// ld r4,504(r26)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r26.u32 + 504);
	// bl 0x8311c260
	ctx.lr = 0x82AC05D4;
	sub_8311C260(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82ac0798
	if (cr6.eq) goto loc_82AC0798;
	// cmplwi cr6,r28,8
	cr6.compare<uint32_t>(ctx.r28.u32, 8, xer);
	// bgt cr6,0x82ac076c
	if (cr6.gt) goto loc_82AC076C;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x82ac06a0
	if (cr6.eq) goto loc_82AC06A0;
	// bdz 0x82ac06a0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82AC06A0;
	// bdz 0x82ac064c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82AC064C;
	// bdz 0x82ac068c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82AC068C;
	// bdz 0x82ac06e8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82AC06E8;
	// bdz 0x82ac0708
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82AC0708;
	// bdz 0x82ac076c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82AC076C;
	// bdz 0x82ac0728
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82AC0728;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8319fea0
	ctx.lr = 0x82AC0614;
	sub_8319FEA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r6,2
	ctx.r6.s64 = 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82ac0638
	if (cr6.eq) goto loc_82AC0638;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82AC0634;
	sub_82D2B608(ctx, base);
	// b 0x82ac0798
	goto loc_82AC0798;
loc_82AC0638:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2b608
	ctx.lr = 0x82AC0640;
	sub_82D2B608(ctx, base);
	// lwz r4,32(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// li r6,8
	ctx.r6.s64 = 8;
	// b 0x82ac078c
	goto loc_82AC078C;
loc_82AC064C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8319ff60
	ctx.lr = 0x82AC0654;
	sub_8319FF60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r6,2
	ctx.r6.s64 = 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82ac0678
	if (cr6.eq) goto loc_82AC0678;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82AC0674;
	sub_82D2B608(ctx, base);
	// b 0x82ac0798
	goto loc_82AC0798;
loc_82AC0678:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2b608
	ctx.lr = 0x82AC0680;
	sub_82D2B608(ctx, base);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r6,2
	ctx.r6.s64 = 2;
	// b 0x82ac078c
	goto loc_82AC078C;
loc_82AC068C:
	// stw r23,196(r25)
	PPC_STORE_U32(ctx.r25.u32 + 196, ctx.r23.u32);
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r23,200(r25)
	PPC_STORE_U32(ctx.r25.u32 + 200, ctx.r23.u32);
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// b 0x82ac078c
	goto loc_82AC078C;
loc_82AC06A0:
	// bl 0x831156e8
	ctx.lr = 0x82AC06A4;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac076c
	if (cr6.eq) goto loc_82AC076C;
	// lwz r11,796(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 796);
	// rlwinm r10,r11,0,16,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000;
	// cmplwi cr6,r10,8192
	cr6.compare<uint32_t>(ctx.r10.u32, 8192, xer);
	// beq cr6,0x82ac06d0
	if (cr6.eq) goto loc_82AC06D0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8319ff60
	ctx.lr = 0x82AC06C4;
	sub_8319FF60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac076c
	if (cr6.eq) goto loc_82AC076C;
loc_82AC06D0:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82AC06E4;
	sub_82D2B608(ctx, base);
	// b 0x82ac0798
	goto loc_82AC0798;
loc_82AC06E8:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82AC06FC;
	sub_82D2B608(ctx, base);
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r6,4
	ctx.r6.s64 = 4;
	// b 0x82ac078c
	goto loc_82AC078C;
loc_82AC0708:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82AC071C;
	sub_82D2B608(ctx, base);
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// li r6,5
	ctx.r6.s64 = 5;
	// b 0x82ac078c
	goto loc_82AC078C;
loc_82AC0728:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8376cd48
	ctx.lr = 0x82AC0734;
	sub_8376CD48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r6,2
	ctx.r6.s64 = 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82ac0758
	if (cr6.eq) goto loc_82AC0758;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82AC0754;
	sub_82D2B608(ctx, base);
	// b 0x82ac0798
	goto loc_82AC0798;
loc_82AC0758:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2b608
	ctx.lr = 0x82AC0760;
	sub_82D2B608(ctx, base);
	// lwz r4,28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// li r6,7
	ctx.r6.s64 = 7;
	// b 0x82ac078c
	goto loc_82AC078C;
loc_82AC076C:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82AC0780;
	sub_82D2B608(ctx, base);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
loc_82AC078C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d233b0
	ctx.lr = 0x82AC0798;
	sub_82D233B0(ctx, base);
loc_82AC0798:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r21
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r21.u32, xer);
	// blt cr6,0x82ac054c
	if (cr6.lt) goto loc_82AC054C;
loc_82AC07A4:
	// lbz r11,210(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 210);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac07d8
	if (cr6.eq) goto loc_82AC07D8;
	// bl 0x83763ef8
	ctx.lr = 0x82AC07B4;
	sub_83763EF8(ctx, base);
	// lwz r29,168(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// bl 0x8399f8b8
	ctx.lr = 0x82AC07BC;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac07d8
	if (cr6.eq) goto loc_82AC07D8;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// bl 0x83763ef8
	ctx.lr = 0x82AC07CC;
	sub_83763EF8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x837670a0
	ctx.lr = 0x82AC07D8;
	sub_837670A0(ctx, base);
loc_82AC07D8:
	// li r4,205
	ctx.r4.s64 = 205;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d1a998
	ctx.lr = 0x82AC07E4;
	sub_82D1A998(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82AC07F4;
	sub_82D19788(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC0800"))) PPC_WEAK_FUNC(sub_82AC0800);
PPC_FUNC_IMPL(__imp__sub_82AC0800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82AC0808;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82AC081C;
	sub_831CDCF0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r9,5
	ctx.r9.s64 = 5;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// li r8,2
	ctx.r8.s64 = 2;
loc_82AC082C:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82ac0850
	if (cr6.eq) goto loc_82AC0850;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x82ac0850
	if (cr6.eq) goto loc_82AC0850;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bge cr6,0x82ac0884
	if (!cr6.lt) goto loc_82AC0884;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r9,140(r10)
	PPC_STORE_U8(ctx.r10.u32 + 140, ctx.r9.u8);
	// b 0x82ac0884
	goto loc_82AC0884;
loc_82AC0850:
	// li r10,11
	ctx.r10.s64 = 11;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82ac0864
	if (cr6.eq) goto loc_82AC0864;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x82ac0868
	if (!cr6.eq) goto loc_82AC0868;
loc_82AC0864:
	// li r10,4
	ctx.r10.s64 = 4;
loc_82AC0868:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// ble cr6,0x82ac0884
	if (!cr6.gt) goto loc_82AC0884;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bge cr6,0x82ac0884
	if (!cr6.lt) goto loc_82AC0884;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r8,140(r10)
	PPC_STORE_U8(ctx.r10.u32 + 140, ctx.r8.u8);
loc_82AC0884:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// blt cr6,0x82ac082c
	if (cr6.lt) goto loc_82AC082C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// add r10,r29,r31
	ctx.r10.u64 = ctx.r29.u64 + ctx.r31.u64;
	// li r9,255
	ctx.r9.s64 = 255;
loc_82AC08A0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,145(r10)
	PPC_STORE_U8(ctx.r10.u32 + 145, ctx.r9.u8);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// blt cr6,0x82ac08a0
	if (cr6.lt) goto loc_82AC08A0;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stb r29,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r29.u8);
	// addi r11,r31,116
	ctx.r11.s64 = ctx.r31.s64 + 116;
	// clrlwi r8,r9,8
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFFFF;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82AC08D8:
	// std r10,-8(r11)
	PPC_STORE_U64(ctx.r11.u32 + -8, ctx.r10.u64);
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82ac08d8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82AC08D8;
	// lis r7,-31762
	ctx.r7.s64 = -2081554432;
	// stb r29,156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 156, ctx.r29.u8);
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r11,r11,11944
	ctx.r11.s64 = ctx.r11.s64 + 11944;
	// lwz r10,11968(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11968);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ac09bc
	if (!cr6.eq) goto loc_82AC09BC;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r10,11968(r7)
	PPC_STORE_U32(ctx.r7.u32 + 11968, ctx.r10.u32);
	// li r8,52
	ctx.r8.s64 = 52;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// li r10,10
	ctx.r10.s64 = 10;
	// li r9,63
	ctx.r9.s64 = 63;
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// stb r10,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// li r8,10
	ctx.r8.s64 = 10;
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// li r10,41
	ctx.r10.s64 = 41;
	// li r9,12
	ctx.r9.s64 = 12;
	// stb r8,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r8.u8);
	// stb r10,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r10.u8);
	// li r8,89
	ctx.r8.s64 = 89;
	// stb r9,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r9.u8);
	// li r10,12
	ctx.r10.s64 = 12;
	// li r9,15
	ctx.r9.s64 = 15;
	// stb r8,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r8.u8);
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// li r8,18
	ctx.r8.s64 = 18;
	// stb r9,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r9.u8);
	// li r10,64
	ctx.r10.s64 = 64;
	// li r9,18
	ctx.r9.s64 = 18;
	// stb r8,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r8.u8);
	// stb r10,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r10.u8);
	// li r8,40
	ctx.r8.s64 = 40;
	// stb r9,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r9.u8);
	// li r10,30
	ctx.r10.s64 = 30;
	// li r9,86
	ctx.r9.s64 = 86;
	// stb r8,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r8.u8);
	// stb r10,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r10.u8);
	// li r8,30
	ctx.r8.s64 = 30;
	// stb r9,15(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15, ctx.r9.u8);
	// li r10,18
	ctx.r10.s64 = 18;
	// li r9,32
	ctx.r9.s64 = 32;
	// stb r8,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r8.u8);
	// stb r10,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r10.u8);
	// li r8,52
	ctx.r8.s64 = 52;
	// stb r9,18(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18, ctx.r9.u8);
	// li r10,43
	ctx.r10.s64 = 43;
	// li r9,52
	ctx.r9.s64 = 52;
	// stb r8,19(r11)
	PPC_STORE_U8(ctx.r11.u32 + 19, ctx.r8.u8);
	// stb r10,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r10.u8);
	// stb r9,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r9.u8);
loc_82AC09BC:
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r30,r10,28344
	ctx.r30.s64 = ctx.r10.s64 + 28344;
loc_82AC09C8:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
loc_82AC09D8:
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// blt cr6,0x82ac0a24
	if (cr6.lt) goto loc_82AC0A24;
	// beq cr6,0x82ac0a0c
	if (cr6.eq) goto loc_82AC0A0C;
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// bge cr6,0x82ac0a34
	if (!cr6.lt) goto loc_82AC0A34;
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x82ac0a34
	if (!cr6.lt) goto loc_82AC0A34;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stb r8,66(r10)
	PPC_STORE_U8(ctx.r10.u32 + 66, ctx.r8.u8);
	// b 0x82ac0a34
	goto loc_82AC0A34;
loc_82AC0A0C:
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x82ac0a34
	if (!cr6.lt) goto loc_82AC0A34;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stb r8,33(r10)
	PPC_STORE_U8(ctx.r10.u32 + 33, ctx.r8.u8);
	// b 0x82ac0a34
	goto loc_82AC0A34;
loc_82AC0A24:
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x82ac0a34
	if (!cr6.lt) goto loc_82AC0A34;
	// stbx r8,r10,r31
	PPC_STORE_U8(ctx.r10.u32 + ctx.r31.u32, ctx.r8.u8);
loc_82AC0A34:
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// blt cr6,0x82ac0aa0
	if (cr6.lt) goto loc_82AC0AA0;
	// beq cr6,0x82ac0a74
	if (cr6.eq) goto loc_82AC0A74;
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// bge cr6,0x82ac0ac8
	if (!cr6.lt) goto loc_82AC0AC8;
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x82ac0ac8
	if (!cr6.lt) goto loc_82AC0AC8;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// lbz r28,0(r9)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r8,r10,77
	ctx.r8.s64 = ctx.r10.s64 + 77;
	// stb r28,77(r10)
	PPC_STORE_U8(ctx.r10.u32 + 77, ctx.r28.u8);
	// stb r7,78(r10)
	PPC_STORE_U8(ctx.r10.u32 + 78, ctx.r7.u8);
	// b 0x82ac0ac8
	goto loc_82AC0AC8;
loc_82AC0A74:
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x82ac0ac8
	if (!cr6.lt) goto loc_82AC0AC8;
	// addi r10,r10,22
	ctx.r10.s64 = ctx.r10.s64 + 22;
	// lbz r8,1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// b 0x82ac0ac8
	goto loc_82AC0AC8;
loc_82AC0AA0:
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x82ac0ac8
	if (!cr6.lt) goto loc_82AC0AC8;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// lbz r28,0(r9)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r8,r10,11
	ctx.r8.s64 = ctx.r10.s64 + 11;
	// stb r28,11(r10)
	PPC_STORE_U8(ctx.r10.u32 + 11, ctx.r28.u8);
	// stb r7,12(r10)
	PPC_STORE_U8(ctx.r10.u32 + 12, ctx.r7.u8);
loc_82AC0AC8:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplwi cr6,r6,11
	cr6.compare<uint32_t>(ctx.r6.u32, 11, xer);
	// blt cr6,0x82ac09d8
	if (cr6.lt) goto loc_82AC09D8;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// blt cr6,0x82ac09c8
	if (cr6.lt) goto loc_82AC09C8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC0AF0"))) PPC_WEAK_FUNC(sub_82AC0AF0);
PPC_FUNC_IMPL(__imp__sub_82AC0AF0) {
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
	// li r11,11
	ctx.r11.s64 = 11;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r3,10
	ctx.r10.s64 = ctx.r3.s64 + 10;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AC0B14:
	// stb r11,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r11.u8);
	// stbu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82ac0b14
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82AC0B14;
	// li r9,11
	ctx.r9.s64 = 11;
	// addi r10,r31,43
	ctx.r10.s64 = ctx.r31.s64 + 43;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82AC0B2C:
	// stb r11,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r11.u8);
	// stbu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82ac0b2c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82AC0B2C;
	// li r9,11
	ctx.r9.s64 = 11;
	// addi r10,r31,76
	ctx.r10.s64 = ctx.r31.s64 + 76;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82AC0B44:
	// stb r11,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r11.u8);
	// stbu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82ac0b44
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82AC0B44;
	// stb r11,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r11.u8);
	// stb r11,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r11.u8);
	// stb r11,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r11.u8);
	// stb r11,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r11.u8);
	// stb r11,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
	// stb r11,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r11.u8);
	// stb r11,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r11.u8);
	// bl 0x82ac0800
	ctx.lr = 0x82AC0B78;
	sub_82AC0800(ctx, base);
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

__attribute__((alias("__imp__sub_82AC0B90"))) PPC_WEAK_FUNC(sub_82AC0B90);
PPC_FUNC_IMPL(__imp__sub_82AC0B90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82AC0B98;
	__savegprlr_28(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8399f8b8
	ctx.lr = 0x82AC0BA0;
	sub_8399F8B8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac0c44
	if (cr6.eq) goto loc_82AC0C44;
	// bl 0x83763ef8
	ctx.lr = 0x82AC0BB0;
	sub_83763EF8(ctx, base);
	// lwz r29,168(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// addi r30,r1,84
	ctx.r30.s64 = ctx.r1.s64 + 84;
	// li r31,2
	ctx.r31.s64 = 2;
loc_82AC0BBC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ac0af0
	ctx.lr = 0x82AC0BC4;
	sub_82AC0AF0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,160
	ctx.r30.s64 = ctx.r30.s64 + 160;
	// bge 0x82ac0bbc
	if (!cr0.lt) goto loc_82AC0BBC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x839a0ad8
	ctx.lr = 0x82AC0BD8;
	sub_839A0AD8(ctx, base);
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// bl 0x83763ef8
	ctx.lr = 0x82AC0BE0;
	sub_83763EF8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83766f98
	ctx.lr = 0x82AC0BEC;
	sub_83766F98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac0c20
	if (cr6.eq) goto loc_82AC0C20;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x839a1aa8
	ctx.lr = 0x82AC0C10;
	sub_839A1AA8(ctx, base);
	// stw r29,4112(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4112, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// bl 0x82abff78
	ctx.lr = 0x82AC0C20;
	sub_82ABFF78(ctx, base);
loc_82AC0C20:
	// bl 0x831156e8
	ctx.lr = 0x82AC0C24;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac0c44
	if (cr6.eq) goto loc_82AC0C44;
	// bl 0x831156e8
	ctx.lr = 0x82AC0C30;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r8,r11,35265
	ctx.r8.u64 = ctx.r11.u64 | 35265;
	// stbx r9,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u8);
loc_82AC0C44:
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC0C4C"))) PPC_WEAK_FUNC(sub_82AC0C4C);
PPC_FUNC_IMPL(__imp__sub_82AC0C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC0C50"))) PPC_WEAK_FUNC(sub_82AC0C50);
PPC_FUNC_IMPL(__imp__sub_82AC0C50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82bdc848
	ctx.lr = 0x82AC0C74;
	sub_82BDC848(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r11,28008
	ctx.r9.s64 = ctx.r11.s64 + 28008;
	// addi r8,r10,17980
	ctx.r8.s64 = ctx.r10.s64 + 17980;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// stw r7,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r7.u32);
	// bl 0x83763ef8
	ctx.lr = 0x82AC0C98;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac0d24
	if (cr6.eq) goto loc_82AC0D24;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ac0cbc
	if (!cr6.eq) goto loc_82AC0CBC;
	// bl 0x83763ef8
	ctx.lr = 0x82AC0CB0;
	sub_83763EF8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// bl 0x8376eb58
	ctx.lr = 0x82AC0CBC;
	sub_8376EB58(ctx, base);
loc_82AC0CBC:
	// bl 0x830ee9a0
	ctx.lr = 0x82AC0CC0;
	sub_830EE9A0(ctx, base);
	// bl 0x8399f8b8
	ctx.lr = 0x82AC0CC4;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ac0cd0
	if (!cr6.eq) goto loc_82AC0CD0;
	// bl 0x839a1610
	ctx.lr = 0x82AC0CD0;
	sub_839A1610(ctx, base);
loc_82AC0CD0:
	// bl 0x83763ef8
	ctx.lr = 0x82AC0CD4;
	sub_83763EF8(ctx, base);
	// lbz r11,210(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 210);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ac0cf4
	if (!cr6.eq) goto loc_82AC0CF4;
	// bl 0x83763ef8
	ctx.lr = 0x82AC0CE4;
	sub_83763EF8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,210(r3)
	PPC_STORE_U8(ctx.r3.u32 + 210, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ac0b90
	ctx.lr = 0x82AC0CF4;
	sub_82AC0B90(ctx, base);
loc_82AC0CF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199f0
	ctx.lr = 0x82AC0CFC;
	sub_82D199F0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,27896
	ctx.r3.s64 = ctx.r11.s64 + 27896;
	// bl 0x82c05ef8
	ctx.lr = 0x82AC0D0C;
	sub_82C05EF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82ac0d28
	if (cr6.eq) goto loc_82AC0D28;
	// bl 0x82d23788
	ctx.lr = 0x82AC0D24;
	sub_82D23788(ctx, base);
loc_82AC0D24:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AC0D28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC0D40"))) PPC_WEAK_FUNC(sub_82AC0D40);
PPC_FUNC_IMPL(__imp__sub_82AC0D40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x82ac0d68
	if (cr6.lt) goto loc_82AC0D68;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ac0d6c
	goto loc_82AC0D6C;
loc_82AC0D68:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82AC0D6C:
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
	ctx.lr = 0x82AC0D88;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac0da0
	if (cr6.eq) goto loc_82AC0DA0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ac0c50
	ctx.lr = 0x82AC0D9C;
	sub_82AC0C50(ctx, base);
	// b 0x82ac0da4
	goto loc_82AC0DA4;
loc_82AC0DA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AC0DA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC0DBC"))) PPC_WEAK_FUNC(sub_82AC0DBC);
PPC_FUNC_IMPL(__imp__sub_82AC0DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC0DC0"))) PPC_WEAK_FUNC(sub_82AC0DC0);
PPC_FUNC_IMPL(__imp__sub_82AC0DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r3,32
	ctx.r3.s64 = 2097152;
	// ori r3,r3,59
	ctx.r3.u64 = ctx.r3.u64 | 59;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC0DCC"))) PPC_WEAK_FUNC(sub_82AC0DCC);
PPC_FUNC_IMPL(__imp__sub_82AC0DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC0DD0"))) PPC_WEAK_FUNC(sub_82AC0DD0);
PPC_FUNC_IMPL(__imp__sub_82AC0DD0) {
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
	// bl 0x82f00728
	ctx.lr = 0x82AC0DE0;
	sub_82F00728(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac0df4
	if (cr6.eq) goto loc_82AC0DF4;
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// addi r3,r3,19032
	ctx.r3.s64 = ctx.r3.s64 + 19032;
	// bl 0x831a0e40
	ctx.lr = 0x82AC0DF4;
	sub_831A0E40(ctx, base);
loc_82AC0DF4:
	// bl 0x83763ef8
	ctx.lr = 0x82AC0DF8;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac0e0c
	if (cr6.eq) goto loc_82AC0E0C;
	// bl 0x83763ef8
	ctx.lr = 0x82AC0E04;
	sub_83763EF8(ctx, base);
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// bl 0x8376ea18
	ctx.lr = 0x82AC0E0C;
	sub_8376EA18(ctx, base);
loc_82AC0E0C:
	// bl 0x82d14ce8
	ctx.lr = 0x82AC0E10;
	sub_82D14CE8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac0e24
	if (cr6.eq) goto loc_82AC0E24;
	// bl 0x82d14ce8
	ctx.lr = 0x82AC0E1C;
	sub_82D14CE8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d12e58
	ctx.lr = 0x82AC0E24;
	sub_82D12E58(ctx, base);
loc_82AC0E24:
	// bl 0x82d26640
	ctx.lr = 0x82AC0E28;
	sub_82D26640(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac0e38
	if (cr6.eq) goto loc_82AC0E38;
	// bl 0x82d26640
	ctx.lr = 0x82AC0E34;
	sub_82D26640(ctx, base);
	// bl 0x82d25ab8
	ctx.lr = 0x82AC0E38;
	sub_82D25AB8(ctx, base);
loc_82AC0E38:
	// bl 0x82bda660
	ctx.lr = 0x82AC0E3C;
	sub_82BDA660(ctx, base);
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

__attribute__((alias("__imp__sub_82AC0E50"))) PPC_WEAK_FUNC(sub_82AC0E50);
PPC_FUNC_IMPL(__imp__sub_82AC0E50) {
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
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bne cr6,0x82ac0ec4
	if (!cr6.eq) goto loc_82AC0EC4;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82ac0ebc
	if (!cr6.eq) goto loc_82AC0EBC;
	// bl 0x82f00728
	ctx.lr = 0x82AC0E7C;
	sub_82F00728(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac0e90
	if (cr6.eq) goto loc_82AC0E90;
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// addi r3,r3,19032
	ctx.r3.s64 = ctx.r3.s64 + 19032;
	// bl 0x831a0e40
	ctx.lr = 0x82AC0E90;
	sub_831A0E40(ctx, base);
loc_82AC0E90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AC0E98;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x82d2b608
	ctx.lr = 0x82AC0EA8;
	sub_82D2B608(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199d0
	ctx.lr = 0x82AC0EB4;
	sub_82D199D0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82ac0ec0
	goto loc_82AC0EC0;
loc_82AC0EBC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82AC0EC0:
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
loc_82AC0EC4:
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

__attribute__((alias("__imp__sub_82AC0ED8"))) PPC_WEAK_FUNC(sub_82AC0ED8);
PPC_FUNC_IMPL(__imp__sub_82AC0ED8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,249
	ctx.r11.s64 = 16318464;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// ori r9,r11,65
	ctx.r9.u64 = ctx.r11.u64 | 65;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r10,28812
	ctx.r3.s64 = ctx.r10.s64 + 28812;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x82AC0F18;
	sub_82D2F6D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac0f3c
	if (cr6.eq) goto loc_82AC0F3C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d2ac30
	ctx.lr = 0x82AC0F30;
	sub_82D2AC30(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x82AC0F3C;
	sub_83103100(ctx, base);
loc_82AC0F3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC0F54"))) PPC_WEAK_FUNC(sub_82AC0F54);
PPC_FUNC_IMPL(__imp__sub_82AC0F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC0F58"))) PPC_WEAK_FUNC(sub_82AC0F58);
PPC_FUNC_IMPL(__imp__sub_82AC0F58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82bdc848
	ctx.lr = 0x82AC0F7C;
	sub_82BDC848(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r9,r11,28920
	ctx.r9.s64 = ctx.r11.s64 + 28920;
	// addi r8,r10,28916
	ctx.r8.s64 = ctx.r10.s64 + 28916;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r8,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r8.u32);
	// stw r7,200(r30)
	PPC_STORE_U32(ctx.r30.u32 + 200, ctx.r7.u32);
	// bl 0x83763ef8
	ctx.lr = 0x82AC0FA0;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac0fc0
	if (cr6.eq) goto loc_82AC0FC0;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ac0fc0
	if (!cr6.eq) goto loc_82AC0FC0;
	// bl 0x83763ef8
	ctx.lr = 0x82AC0FB8;
	sub_83763EF8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x837642c0
	ctx.lr = 0x82AC0FC0;
	sub_837642C0(ctx, base);
loc_82AC0FC0:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ac1088
	if (!cr6.eq) goto loc_82AC1088;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-31777
	ctx.r8.s64 = -2082537472;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// oris r7,r10,65532
	ctx.r7.u64 = ctx.r10.u64 | 4294705152;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// oris r4,r9,65532
	ctx.r4.u64 = ctx.r9.u64 | 4294705152;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r11,-11696(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11696);
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
	// li r9,13
	ctx.r9.s64 = 13;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// or r7,r3,r4
	ctx.r7.u64 = ctx.r3.u64 | ctx.r4.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// or r6,r11,r4
	ctx.r6.u64 = ctx.r11.u64 | ctx.r4.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stb r8,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r8.u8);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// bl 0x831156e8
	ctx.lr = 0x82AC104C;
	sub_831156E8(ctx, base);
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r5,0
	ctx.r5.s64 = 0;
	// addis r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 131072;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,-20656
	ctx.r3.s64 = ctx.r3.s64 + -20656;
	// bl 0x83126148
	ctx.lr = 0x82AC1064;
	sub_83126148(ctx, base);
	// bl 0x8399f8b8
	ctx.lr = 0x82AC1068;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ac1074
	if (!cr6.eq) goto loc_82AC1074;
	// bl 0x839a1610
	ctx.lr = 0x82AC1074;
	sub_839A1610(ctx, base);
loc_82AC1074:
	// bl 0x8399f8b8
	ctx.lr = 0x82AC1078;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac1088
	if (cr6.eq) goto loc_82AC1088;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82AC1088:
	// bl 0x82d14ce8
	ctx.lr = 0x82AC108C;
	sub_82D14CE8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82ac10b8
	if (cr6.eq) goto loc_82AC10B8;
	// bl 0x82d199f0
	ctx.lr = 0x82AC109C;
	sub_82D199F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ac10b4
	if (!cr6.eq) goto loc_82AC10B4;
	// bl 0x82d14ce8
	ctx.lr = 0x82AC10AC;
	sub_82D14CE8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d12e58
	ctx.lr = 0x82AC10B4;
	sub_82D12E58(ctx, base);
loc_82AC10B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82AC10B8:
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

__attribute__((alias("__imp__sub_82AC10D0"))) PPC_WEAK_FUNC(sub_82AC10D0);
PPC_FUNC_IMPL(__imp__sub_82AC10D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r9,r11,28920
	ctx.r9.s64 = ctx.r11.s64 + 28920;
	// addi r8,r10,28916
	ctx.r8.s64 = ctx.r10.s64 + 28916;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82bdc910
	ctx.lr = 0x82AC1108;
	sub_82BDC910(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82ac1120
	if (cr6.eq) goto loc_82AC1120;
	// bl 0x82416268
	ctx.lr = 0x82AC111C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AC1120:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC1138"))) PPC_WEAK_FUNC(sub_82AC1138);
PPC_FUNC_IMPL(__imp__sub_82AC1138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82AC1140;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AC1158;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AC1164;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82AC116C;
	sub_82D33DB0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82ac11fc
	if (cr6.eq) goto loc_82AC11FC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r11,28768
	ctx.r28.s64 = ctx.r11.s64 + 28768;
	// addi r27,r10,-11812
	ctx.r27.s64 = ctx.r10.s64 + -11812;
loc_82AC1190:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bdc948
	ctx.lr = 0x82AC11A4;
	sub_82BDC948(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r4,r29,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d233b0
	ctx.lr = 0x82AC11B8;
	sub_82D233B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82AC11C4;
	sub_82D33DB0(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r28,36
	ctx.r4.s64 = ctx.r28.s64 + 36;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AC11DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac11ec
	if (cr6.eq) goto loc_82AC11EC;
	// lwzx r4,r29,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// bl 0x82d29598
	ctx.lr = 0x82AC11EC;
	sub_82D29598(ctx, base);
loc_82AC11EC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r31,r25
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, xer);
	// blt cr6,0x82ac1190
	if (cr6.lt) goto loc_82AC1190;
loc_82AC11FC:
	// li r4,197
	ctx.r4.s64 = 197;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d1a998
	ctx.lr = 0x82AC1208;
	sub_82D1A998(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82AC1218;
	sub_82D19788(ctx, base);
	// bl 0x82bfc3c8
	ctx.lr = 0x82AC121C;
	sub_82BFC3C8(ctx, base);
	// bl 0x83763ef8
	ctx.lr = 0x82AC1220;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac12f0
	if (cr6.eq) goto loc_82AC12F0;
	// bl 0x83763ef8
	ctx.lr = 0x82AC122C;
	sub_83763EF8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// sth r11,176(r3)
	PPC_STORE_U16(ctx.r3.u32 + 176, ctx.r11.u16);
	// lwz r31,-11696(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11696);
	// bl 0x83763ef8
	ctx.lr = 0x82AC1240;
	sub_83763EF8(ctx, base);
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// li r30,1
	ctx.r30.s64 = 1;
	// xor r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82ac126c
	if (!cr6.eq) goto loc_82AC126C;
	// xor r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ac1270
	if (cr6.eq) goto loc_82AC1270;
loc_82AC126C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AC1270:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ac1284
	if (!cr6.eq) goto loc_82AC1284;
	// stb r30,206(r3)
	PPC_STORE_U8(ctx.r3.u32 + 206, ctx.r30.u8);
	// stb r11,208(r3)
	PPC_STORE_U8(ctx.r3.u32 + 208, ctx.r11.u8);
loc_82AC1284:
	// stw r31,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r31.u32);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// ld r31,-11744(r11)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r11.u32 + -11744);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// bl 0x83763ef8
	ctx.lr = 0x82AC1298;
	sub_83763EF8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ac12b4
	if (!cr6.eq) goto loc_82AC12B4;
	// lwz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82ac12dc
	goto loc_82AC12DC;
loc_82AC12B4:
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r9,160(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 160);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x82ac12d4
	if (!cr6.eq) goto loc_82AC12D4;
	// lwz r10,164(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// beq cr6,0x82ac12d8
	if (cr6.eq) goto loc_82AC12D8;
loc_82AC12D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AC12D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82AC12DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ac12ec
	if (!cr6.eq) goto loc_82AC12EC;
	// stb r30,205(r3)
	PPC_STORE_U8(ctx.r3.u32 + 205, ctx.r30.u8);
loc_82AC12EC:
	// std r31,160(r3)
	PPC_STORE_U64(ctx.r3.u32 + 160, ctx.r31.u64);
loc_82AC12F0:
	// lis r10,-31762
	ctx.r10.s64 = -2081554432;
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r31,r11,-31368
	ctx.r31.s64 = ctx.r11.s64 + -31368;
	// lwz r11,-31360(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31360);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ac1328
	if (!cr6.eq) goto loc_82AC1328;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-31360(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31360, ctx.r11.u32);
	// bl 0x82bf5c10
	ctx.lr = 0x82AC131C;
	sub_82BF5C10(ctx, base);
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
	// bl 0x831cdcc8
	ctx.lr = 0x82AC1328;
	sub_831CDCC8(ctx, base);
loc_82AC1328:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC1344"))) PPC_WEAK_FUNC(sub_82AC1344);
PPC_FUNC_IMPL(__imp__sub_82AC1344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1348"))) PPC_WEAK_FUNC(sub_82AC1348);
PPC_FUNC_IMPL(__imp__sub_82AC1348) {
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
	// bl 0x82ac0ed8
	ctx.lr = 0x82AC1360;
	sub_82AC0ED8(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82AC137C"))) PPC_WEAK_FUNC(sub_82AC137C);
PPC_FUNC_IMPL(__imp__sub_82AC137C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1380"))) PPC_WEAK_FUNC(sub_82AC1380);
PPC_FUNC_IMPL(__imp__sub_82AC1380) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x82ac13a8
	if (cr6.lt) goto loc_82AC13A8;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ac13ac
	goto loc_82AC13AC;
loc_82AC13A8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82AC13AC:
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
	ctx.lr = 0x82AC13C8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac13e0
	if (cr6.eq) goto loc_82AC13E0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ac0f58
	ctx.lr = 0x82AC13DC;
	sub_82AC0F58(ctx, base);
	// b 0x82ac13e4
	goto loc_82AC13E4;
loc_82AC13E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AC13E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC13FC"))) PPC_WEAK_FUNC(sub_82AC13FC);
PPC_FUNC_IMPL(__imp__sub_82AC13FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1400"))) PPC_WEAK_FUNC(sub_82AC1400);
PPC_FUNC_IMPL(__imp__sub_82AC1400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82AC1408;
	__savegprlr_14(ctx, base);
	// stwu r1,-1280(r1)
	ea = -1280 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x83763ef8
	ctx.lr = 0x82AC1410;
	sub_83763EF8(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac1940
	if (cr6.eq) goto loc_82AC1940;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82ac1940
	if (cr6.eq) goto loc_82AC1940;
	// bl 0x831156e8
	ctx.lr = 0x82AC142C;
	sub_831156E8(ctx, base);
	// lwz r14,48(r3)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x82AC1434;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r16,0
	ctx.r16.s64 = 0;
	// addis r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 65536;
	// li r5,104
	ctx.r5.s64 = 104;
	// stw r16,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r16.u32);
	// addi r28,r28,32692
	ctx.r28.s64 = ctx.r28.s64 + 32692;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,532
	ctx.r3.s64 = ctx.r1.s64 + 532;
	// mr r20,r16
	ctx.r20.u64 = ctx.r16.u64;
	// addi r15,r28,11480
	ctx.r15.s64 = ctx.r28.s64 + 11480;
	// bl 0x831cdcf0
	ctx.lr = 0x82AC1460;
	sub_831CDCF0(ctx, base);
	// lis r10,95
	ctx.r10.s64 = 6225920;
	// mr r21,r16
	ctx.r21.u64 = ctx.r16.u64;
	// ori r9,r10,60640
	ctx.r9.u64 = ctx.r10.u64 | 60640;
	// mr r22,r16
	ctx.r22.u64 = ctx.r16.u64;
	// mr r23,r16
	ctx.r23.u64 = ctx.r16.u64;
	// mr r24,r16
	ctx.r24.u64 = ctx.r16.u64;
	// mr r25,r16
	ctx.r25.u64 = ctx.r16.u64;
	// lwzx r26,r14,r9
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r14.u32 + ctx.r9.u32);
	// mr r27,r16
	ctx.r27.u64 = ctx.r16.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82ac17a4
	if (cr6.eq) goto loc_82AC17A4;
	// addis r19,r14,72
	ctx.r19.s64 = ctx.r14.s64 + 4718592;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// addi r19,r19,7136
	ctx.r19.s64 = ctx.r19.s64 + 7136;
	// ori r18,r11,58144
	ctx.r18.u64 = ctx.r11.u64 | 58144;
loc_82AC149C:
	// cmplwi cr6,r27,653
	cr6.compare<uint32_t>(ctx.r27.u32, 653, xer);
	// add r29,r14,r18
	ctx.r29.u64 = ctx.r14.u64 + ctx.r18.u64;
	// bge cr6,0x82ac14ac
	if (!cr6.lt) goto loc_82AC14AC;
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
loc_82AC14AC:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,480
	ctx.r5.s64 = 480;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x82AC14C4;
	sub_831CDCF0(ctx, base);
	// lwz r3,72(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac14f0
	if (cr6.eq) goto loc_82AC14F0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,640
	ctx.r4.s64 = ctx.r1.s64 + 640;
	// bl 0x8306e988
	ctx.lr = 0x82AC14DC;
	sub_8306E988(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,640
	ctx.r4.s64 = ctx.r1.s64 + 640;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83773c28
	ctx.lr = 0x82AC14F0;
	sub_83773C28(ctx, base);
loc_82AC14F0:
	// stw r16,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r16.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x82a70db0
	ctx.lr = 0x82AC1504;
	sub_82A70DB0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac1514
	if (cr6.eq) goto loc_82AC1514;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
loc_82AC1514:
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// addi r31,r1,528
	ctx.r31.s64 = ctx.r1.s64 + 528;
loc_82AC151C:
	// bl 0x83763ef8
	ctx.lr = 0x82AC1520;
	sub_83763EF8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x83776910
	ctx.lr = 0x82AC1530;
	sub_83776910(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac1548
	if (cr6.eq) goto loc_82AC1548;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82AC1548:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,21
	cr6.compare<uint32_t>(ctx.r30.u32, 21, xer);
	// blt cr6,0x82ac151c
	if (cr6.lt) goto loc_82AC151C;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x8306c7a0
	ctx.lr = 0x82AC1568;
	sub_8306C7A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac1590
	if (cr6.eq) goto loc_82AC1590;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac1590
	if (cr6.eq) goto loc_82AC1590;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bctrl 
	ctx.lr = 0x82AC1590;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82AC1590:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac15a0
	if (cr6.eq) goto loc_82AC15A0;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
loc_82AC15A0:
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x8306c7a0
	ctx.lr = 0x82AC15B0;
	sub_8306C7A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac15d8
	if (cr6.eq) goto loc_82AC15D8;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac15d8
	if (cr6.eq) goto loc_82AC15D8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bctrl 
	ctx.lr = 0x82AC15D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82AC15D8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac15e8
	if (cr6.eq) goto loc_82AC15E8;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
loc_82AC15E8:
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x8306c7a0
	ctx.lr = 0x82AC15F8;
	sub_8306C7A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac1620
	if (cr6.eq) goto loc_82AC1620;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac1620
	if (cr6.eq) goto loc_82AC1620;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bctrl 
	ctx.lr = 0x82AC1620;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82AC1620:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac1630
	if (cr6.eq) goto loc_82AC1630;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
loc_82AC1630:
	// li r5,31
	ctx.r5.s64 = 31;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x8306c7a0
	ctx.lr = 0x82AC1640;
	sub_8306C7A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac1668
	if (cr6.eq) goto loc_82AC1668;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac1668
	if (cr6.eq) goto loc_82AC1668;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bctrl 
	ctx.lr = 0x82AC1668;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82AC1668:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac1678
	if (cr6.eq) goto loc_82AC1678;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
loc_82AC1678:
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r1,168
	ctx.r11.s64 = ctx.r1.s64 + 168;
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82AC1688:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82ac1688
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82AC1688;
	// lwz r3,72(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 72);
	// ld r31,504(r29)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r29.u32 + 504);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac16dc
	if (cr6.eq) goto loc_82AC16DC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8306e5a8
	ctx.lr = 0x82AC16A8;
	sub_8306E5A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ac16bc
	if (!cr6.eq) goto loc_82AC16BC;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// b 0x82ac16cc
	goto loc_82AC16CC;
loc_82AC16BC:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// li r5,88
	ctx.r5.s64 = 88;
	// bl 0x831ce980
	ctx.lr = 0x82AC16C8;
	sub_831CE980(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
loc_82AC16CC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83773d08
	ctx.lr = 0x82AC16DC;
	sub_83773D08(ctx, base);
loc_82AC16DC:
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83071e38
	ctx.lr = 0x82AC16EC;
	sub_83071E38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac1714
	if (cr6.eq) goto loc_82AC1714;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac1714
	if (cr6.eq) goto loc_82AC1714;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bctrl 
	ctx.lr = 0x82AC1714;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82AC1714:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83071e38
	ctx.lr = 0x82AC1724;
	sub_83071E38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac174c
	if (cr6.eq) goto loc_82AC174C;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac174c
	if (cr6.eq) goto loc_82AC174C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bctrl 
	ctx.lr = 0x82AC174C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82AC174C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac175c
	if (cr6.eq) goto loc_82AC175C;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_82AC175C:
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83071e38
	ctx.lr = 0x82AC176C;
	sub_83071E38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac1794
	if (cr6.eq) goto loc_82AC1794;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac1794
	if (cr6.eq) goto loc_82AC1794;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bctrl 
	ctx.lr = 0x82AC1794;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82AC1794:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r19,r19,1312
	ctx.r19.s64 = ctx.r19.s64 + 1312;
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, xer);
	// blt cr6,0x82ac149c
	if (cr6.lt) goto loc_82AC149C;
loc_82AC17A4:
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// stb r20,11604(r28)
	PPC_STORE_U8(ctx.r28.u32 + 11604, ctx.r20.u8);
	// stb r24,11607(r28)
	PPC_STORE_U8(ctx.r28.u32 + 11607, ctx.r24.u8);
	// li r3,2
	ctx.r3.s64 = 2;
	// ori r9,r11,60648
	ctx.r9.u64 = ctx.r11.u64 | 60648;
	// sth r25,10(r15)
	PPC_STORE_U16(ctx.r15.u32 + 10, ctx.r25.u16);
	// sth r21,14(r15)
	PPC_STORE_U16(ctx.r15.u32 + 14, ctx.r21.u16);
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r22,18(r15)
	PPC_STORE_U16(ctx.r15.u32 + 18, ctx.r22.u16);
	// li r10,4
	ctx.r10.s64 = 4;
	// sth r23,20(r15)
	PPC_STORE_U16(ctx.r15.u32 + 20, ctx.r23.u16);
	// mr r25,r16
	ctx.r25.u64 = ctx.r16.u64;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
	// lwzx r27,r14,r9
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r14.u32 + ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// beq cr6,0x82ac1934
	if (cr6.eq) goto loc_82AC1934;
	// addis r26,r14,85
	ctx.r26.s64 = ctx.r14.s64 + 5570560;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// addi r26,r26,11904
	ctx.r26.s64 = ctx.r26.s64 + 11904;
	// ori r24,r11,59456
	ctx.r24.u64 = ctx.r11.u64 | 59456;
loc_82AC1808:
	// cmplwi cr6,r28,300
	cr6.compare<uint32_t>(ctx.r28.u32, 300, xer);
	// add r11,r14,r24
	ctx.r11.u64 = ctx.r14.u64 + ctx.r24.u64;
	// bge cr6,0x82ac1818
	if (!cr6.lt) goto loc_82AC1818;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82AC1818:
	// li r9,15
	ctx.r9.s64 = 15;
	// lwz r31,88(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// addi r11,r1,264
	ctx.r11.s64 = ctx.r1.s64 + 264;
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82AC182C:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82ac182c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82AC182C;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r11,r1,392
	ctx.r11.s64 = ctx.r1.s64 + 392;
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82AC1848:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82ac1848
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82AC1848;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83775ad8
	ctx.lr = 0x82AC1864;
	sub_83775AD8(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AC1880;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
loc_82AC1888:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83071998
	ctx.lr = 0x82AC189C;
	sub_83071998(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac18c4
	if (cr6.eq) goto loc_82AC18C4;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac18c4
	if (cr6.eq) goto loc_82AC18C4;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bctrl 
	ctx.lr = 0x82AC18C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82AC18C4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x83071998
	ctx.lr = 0x82AC18D4;
	sub_83071998(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac18fc
	if (cr6.eq) goto loc_82AC18FC;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac18fc
	if (cr6.eq) goto loc_82AC18FC;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bctrl 
	ctx.lr = 0x82AC18FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82AC18FC:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ac1920
	if (!cr6.eq) goto loc_82AC1920;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(ctx.r29.u32, 4, xer);
	// blt cr6,0x82ac1888
	if (cr6.lt) goto loc_82AC1888;
	// b 0x82ac1924
	goto loc_82AC1924;
loc_82AC1920:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_82AC1924:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r26,r26,548
	ctx.r26.s64 = ctx.r26.s64 + 548;
	// cmplw cr6,r28,r27
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, xer);
	// blt cr6,0x82ac1808
	if (cr6.lt) goto loc_82AC1808;
loc_82AC1934:
	// stb r25,26(r15)
	PPC_STORE_U8(ctx.r15.u32 + 26, ctx.r25.u8);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x83102db0
	ctx.lr = 0x82AC1940;
	sub_83102DB0(ctx, base);
loc_82AC1940:
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC1948"))) PPC_WEAK_FUNC(sub_82AC1948);
PPC_FUNC_IMPL(__imp__sub_82AC1948) {
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
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac19c0
	if (cr6.eq) goto loc_82AC19C0;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x82ac19b4
	if (cr6.eq) goto loc_82AC19B4;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bne cr6,0x82ac19dc
	if (!cr6.eq) goto loc_82AC19DC;
	// bl 0x8399f8b8
	ctx.lr = 0x82AC197C;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac1988
	if (cr6.eq) goto loc_82AC1988;
	// bl 0x839a04b8
	ctx.lr = 0x82AC1988;
	sub_839A04B8(ctx, base);
loc_82AC1988:
	// bl 0x82bfb8d8
	ctx.lr = 0x82AC198C;
	sub_82BFB8D8(ctx, base);
	// bl 0x8377de00
	ctx.lr = 0x82AC1990;
	sub_8377DE00(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82AC1994;
	sub_831156E8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,102(r3)
	PPC_STORE_U8(ctx.r3.u32 + 102, ctx.r11.u8);
	// li r3,2
	ctx.r3.s64 = 2;
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
loc_82AC19B4:
	// bl 0x82ac1400
	ctx.lr = 0x82AC19B8;
	sub_82AC1400(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82ac19d8
	goto loc_82AC19D8;
loc_82AC19C0:
	// bl 0x82bda618
	ctx.lr = 0x82AC19C4;
	sub_82BDA618(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ac19d4
	if (!cr6.eq) goto loc_82AC19D4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bdc5e8
	ctx.lr = 0x82AC19D4;
	sub_82BDC5E8(ctx, base);
loc_82AC19D4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82AC19D8:
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
loc_82AC19DC:
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

__attribute__((alias("__imp__sub_82AC19F4"))) PPC_WEAK_FUNC(sub_82AC19F4);
PPC_FUNC_IMPL(__imp__sub_82AC19F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC19F8"))) PPC_WEAK_FUNC(sub_82AC19F8);
PPC_FUNC_IMPL(__imp__sub_82AC19F8) {
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
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82AC1A24;
	sub_82595718(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac1a40
	if (cr6.eq) goto loc_82AC1A40;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r10,r11,29256
	ctx.r10.s64 = ctx.r11.s64 + 29256;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82ac1a44
	goto loc_82AC1A44;
loc_82AC1A40:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82AC1A44:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83878e28
	ctx.lr = 0x82AC1A60;
	sub_83878E28(ctx, base);
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

__attribute__((alias("__imp__sub_82AC1A78"))) PPC_WEAK_FUNC(sub_82AC1A78);
PPC_FUNC_IMPL(__imp__sub_82AC1A78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// li r11,10
	ctx.r11.s64 = 10;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r10,884
	ctx.r10.s64 = ctx.r10.s64 + 884;
	// lwz r8,-11420(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11420);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// rlwinm r9,r8,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0x3FFF;
loc_82AC1A98:
	// lwz r11,-48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -48);
	// rlwinm r7,r11,14,18,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ac1abc
	if (!cr6.eq) goto loc_82AC1ABC;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// clrlwi r7,r11,14
	ctx.r7.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82ac1ac0
	if (cr6.eq) goto loc_82AC1AC0;
loc_82AC1ABC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AC1AC0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ac1ad0
	if (!cr6.eq) goto loc_82AC1AD0;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82AC1AD0:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r11,14,18,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ac1af4
	if (!cr6.eq) goto loc_82AC1AF4;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// clrlwi r7,r11,14
	ctx.r7.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82ac1af8
	if (cr6.eq) goto loc_82AC1AF8;
loc_82AC1AF4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AC1AF8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ac1b08
	if (!cr6.eq) goto loc_82AC1B08;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82AC1B08:
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// rlwinm r7,r11,14,18,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ac1b2c
	if (!cr6.eq) goto loc_82AC1B2C;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// clrlwi r7,r11,14
	ctx.r7.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82ac1b30
	if (cr6.eq) goto loc_82AC1B30;
loc_82AC1B2C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AC1B30:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ac1b40
	if (!cr6.eq) goto loc_82AC1B40;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82AC1B40:
	// lwz r11,96(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// rlwinm r7,r11,14,18,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ac1b64
	if (!cr6.eq) goto loc_82AC1B64;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// clrlwi r7,r11,14
	ctx.r7.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82ac1b68
	if (cr6.eq) goto loc_82AC1B68;
loc_82AC1B64:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AC1B68:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ac1b78
	if (!cr6.eq) goto loc_82AC1B78;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82AC1B78:
	// lwz r11,144(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	// rlwinm r7,r11,14,18,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ac1b9c
	if (!cr6.eq) goto loc_82AC1B9C;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// clrlwi r7,r11,14
	ctx.r7.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82ac1ba0
	if (cr6.eq) goto loc_82AC1BA0;
loc_82AC1B9C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AC1BA0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ac1bb0
	if (!cr6.eq) goto loc_82AC1BB0;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82AC1BB0:
	// lwz r11,192(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	// rlwinm r7,r11,14,18,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ac1bd4
	if (!cr6.eq) goto loc_82AC1BD4;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// clrlwi r7,r11,14
	ctx.r7.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82ac1bd8
	if (cr6.eq) goto loc_82AC1BD8;
loc_82AC1BD4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AC1BD8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ac1be8
	if (!cr6.eq) goto loc_82AC1BE8;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82AC1BE8:
	// addi r10,r10,288
	ctx.r10.s64 = ctx.r10.s64 + 288;
	// bdnz 0x82ac1a98
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82AC1A98;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC1BF4"))) PPC_WEAK_FUNC(sub_82AC1BF4);
PPC_FUNC_IMPL(__imp__sub_82AC1BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1BF8"))) PPC_WEAK_FUNC(sub_82AC1BF8);
PPC_FUNC_IMPL(__imp__sub_82AC1BF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,-11420(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11420);
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r9,r11,276
	ctx.r9.s64 = ctx.r11.s64 + 276;
	// lwz r11,276(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// xor r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r6,r7,0,0,13
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82ac1c40
	if (!cr6.eq) goto loc_82AC1C40;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ac1c44
	if (cr6.eq) goto loc_82AC1C44;
loc_82AC1C40:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AC1C44:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC1C54"))) PPC_WEAK_FUNC(sub_82AC1C54);
PPC_FUNC_IMPL(__imp__sub_82AC1C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1C58"))) PPC_WEAK_FUNC(sub_82AC1C58);
PPC_FUNC_IMPL(__imp__sub_82AC1C58) {
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
	// bl 0x82d14ce8
	ctx.lr = 0x82AC1C68;
	sub_82D14CE8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d13048
	ctx.lr = 0x82AC1C70;
	sub_82D13048(ctx, base);
	// bl 0x82d26ed8
	ctx.lr = 0x82AC1C74;
	sub_82D26ED8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d26900
	ctx.lr = 0x82AC1C7C;
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

__attribute__((alias("__imp__sub_82AC1C90"))) PPC_WEAK_FUNC(sub_82AC1C90);
PPC_FUNC_IMPL(__imp__sub_82AC1C90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,30188
	ctx.r5.s64 = ctx.r11.s64 + 30188;
	// b 0x82d20da8
	sub_82D20DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC1CA0"))) PPC_WEAK_FUNC(sub_82AC1CA0);
PPC_FUNC_IMPL(__imp__sub_82AC1CA0) {
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
	ctx.lr = 0x82AC1CB0;
	sub_831156E8(ctx, base);
	// lis r11,222
	ctx.r11.s64 = 14548992;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r8,-31777
	ctx.r8.s64 = -2082537472;
	// ori r7,r11,26664
	ctx.r7.u64 = ctx.r11.u64 | 26664;
	// lwz r10,-11420(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11420);
	// lwzx r11,r9,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// xor r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r5,r6,0,0,13
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82ac1cec
	if (!cr6.eq) goto loc_82AC1CEC;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ac1cf0
	if (cr6.eq) goto loc_82AC1CF0;
loc_82AC1CEC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AC1CF0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC1D0C"))) PPC_WEAK_FUNC(sub_82AC1D0C);
PPC_FUNC_IMPL(__imp__sub_82AC1D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1D10"))) PPC_WEAK_FUNC(sub_82AC1D10);
PPC_FUNC_IMPL(__imp__sub_82AC1D10) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ac1dcc
	if (cr6.eq) goto loc_82AC1DCC;
	// lwz r11,48(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ac1dcc
	if (!cr6.eq) goto loc_82AC1DCC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82AC1D54;
	sub_82D291E0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82AC1D64;
	sub_82D2AEC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AC1D8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lfs f0,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lwz r5,84(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 84);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bctrl 
	ctx.lr = 0x82AC1DC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r31,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r31.u32);
loc_82AC1DCC:
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

__attribute__((alias("__imp__sub_82AC1DE4"))) PPC_WEAK_FUNC(sub_82AC1DE4);
PPC_FUNC_IMPL(__imp__sub_82AC1DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1DE8"))) PPC_WEAK_FUNC(sub_82AC1DE8);
PPC_FUNC_IMPL(__imp__sub_82AC1DE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82AC1DF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ac1ef8
	if (cr6.eq) goto loc_82AC1EF8;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lwz r11,88(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 88);
	// addi r30,r5,88
	ctx.r30.s64 = ctx.r5.s64 + 88;
	// lwz r10,-11420(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11420);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82ac1e38
	if (!cr6.eq) goto loc_82AC1E38;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ac1e3c
	if (cr6.eq) goto loc_82AC1E3C;
loc_82AC1E38:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AC1E3C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r5,2
	ctx.r5.s64 = 2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r28,r10,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82AC1E58;
	sub_82D2AEC8(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82ac1e90
	if (cr6.eq) goto loc_82AC1E90;
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82ac1e7c
	if (cr6.eq) goto loc_82AC1E7C;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82AC1E7C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d329f8
	ctx.lr = 0x82AC1E90;
	sub_82D329F8(ctx, base);
loc_82AC1E90:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AC1EB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,32(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lfs f0,84(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lwz r5,84(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 84);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bctrl 
	ctx.lr = 0x82AC1EF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r31,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r31.u32);
loc_82AC1EF8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC1F00"))) PPC_WEAK_FUNC(sub_82AC1F00);
PPC_FUNC_IMPL(__imp__sub_82AC1F00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// addi r4,r3,124
	ctx.r4.s64 = ctx.r3.s64 + 124;
	// li r3,92
	ctx.r3.s64 = 92;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r3
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r3.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82ac1f2c
	if (!cr0.eq) goto loc_82AC1F2C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// b 0x831cc188
	sub_831CC188(ctx, base);
	return;
loc_82AC1F2C:
	// li r9,360
	ctx.r9.s64 = 360;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// divw r9,r7,r3
	ctx.r9.s32 = PPCDivide(ctx.r7.s32, ctx.r3.s32);
	// addic. r5,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r5.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82AC1F54:
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x82ac1fac
	if (!cr6.gt) goto loc_82AC1FAC;
	// add r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// lwz r5,40(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// lwz r9,36(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// ble cr6,0x82ac1fb8
	if (!cr6.gt) goto loc_82AC1FB8;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r9,r6,360
	ctx.r9.s64 = ctx.r6.s64 + 360;
	// addi r8,r8,92
	ctx.r8.s64 = ctx.r8.s64 + 92;
	// stw r9,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r9.u32);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r5,r11,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r11.s64;
	// divw r9,r5,r3
	ctx.r9.s32 = PPCDivide(ctx.r5.s32, ctx.r3.s32);
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// blt cr6,0x82ac1f54
	if (cr6.lt) goto loc_82AC1F54;
	// blr 
	return;
loc_82AC1FAC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// b 0x831cc188
	sub_831CC188(ctx, base);
	return;
loc_82AC1FB8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// b 0x831cc188
	sub_831CC188(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC1FC4"))) PPC_WEAK_FUNC(sub_82AC1FC4);
PPC_FUNC_IMPL(__imp__sub_82AC1FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC1FC8"))) PPC_WEAK_FUNC(sub_82AC1FC8);
PPC_FUNC_IMPL(__imp__sub_82AC1FC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,96(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// lwz r8,104(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf. r11,r10,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble 0x82ac1ff8
	if (!cr0.gt) goto loc_82AC1FF8;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82AC1FF8:
	// lwz r6,128(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 128);
	// li r7,92
	ctx.r7.s64 = 92;
	// lwz r11,124(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 124);
	// subf r5,r11,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r11.s64;
	// divw r6,r5,r7
	ctx.r6.s32 = PPCDivide(ctx.r5.s32, ctx.r7.s32);
	// addi r4,r6,255
	ctx.r4.s64 = ctx.r6.s64 + 255;
	// clrlwi r7,r4,24
	ctx.r7.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// bgt cr6,0x82ac2028
	if (cr6.gt) goto loc_82AC2028;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AC2028;
	sub_831CC188(ctx, base);
loc_82AC2028:
	// mulli r7,r7,92
	ctx.r7.s64 = ctx.r7.s64 * 92;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lwz r6,36(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lfs f13,84(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f0,-11416(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -11416);
	ctx.f0.f64 = double(temp.f32);
	// subf r6,r10,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r10.s64;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// add r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 + ctx.r8.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, xer);
	// bge cr6,0x82ac2090
	if (!cr6.lt) goto loc_82AC2090;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82AC2090:
	// subf r11,r10,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r10.s64;
	// stw r11,104(r9)
	PPC_STORE_U32(ctx.r9.u32 + 104, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC20A8"))) PPC_WEAK_FUNC(sub_82AC20A8);
PPC_FUNC_IMPL(__imp__sub_82AC20A8) {
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
	ctx.lr = 0x82AC20B0;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// li r28,92
	ctx.r28.s64 = 92;
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r31,r3,124
	ctx.r31.s64 = ctx.r3.s64 + 124;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// li r30,0
	ctx.r30.s64 = 0;
	// divw. r10,r9,r28
	ctx.r10.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82ac228c
	if (cr0.eq) goto loc_82AC228C;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,-92
	ctx.r27.s64 = -92;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// lfs f31,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// ble cr6,0x82ac2298
	if (!cr6.gt) goto loc_82AC2298;
loc_82AC20F4:
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,104(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 104);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r28
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r28.s32);
	// cmplw cr6,r7,r30
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, xer);
	// ble cr6,0x82ac22a4
	if (!cr6.gt) goto loc_82AC22A4;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ac21ac
	if (cr6.eq) goto loc_82AC21AC;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AC2150;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r28
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r28.s32);
	// cmplw cr6,r7,r30
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, xer);
	// ble cr6,0x82ac22b0
	if (!cr6.gt) goto loc_82AC22B0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f12,84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,84(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 84);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82AC21AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82AC21AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// ble cr6,0x82ac22bc
	if (!cr6.gt) goto loc_82AC22BC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ac2268
	if (cr6.eq) goto loc_82AC2268;
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AC21F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r10,r8,r28
	ctx.r10.s32 = PPCDivide(ctx.r8.s32, ctx.r28.s32);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// ble cr6,0x82ac22c8
	if (!cr6.gt) goto loc_82AC22C8;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// beq cr6,0x82ac2250
	if (cr6.eq) goto loc_82AC2250;
	// addi r8,r30,-1
	ctx.r8.s64 = ctx.r30.s64 + -1;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// ble cr6,0x82ac22d4
	if (!cr6.gt) goto loc_82AC22D4;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lfs f13,84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_82AC2250:
	// lwz r3,52(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AC2268;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82AC2268:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r27,r27,92
	ctx.r27.s64 = ctx.r27.s64 + 92;
	// addi r29,r29,92
	ctx.r29.s64 = ctx.r29.s64 + 92;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r9,r28
	ctx.r10.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// bgt cr6,0x82ac20f4
	if (cr6.gt) goto loc_82AC20F4;
loc_82AC228C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82AC2298:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AC22A4;
	sub_831CC188(ctx, base);
loc_82AC22A4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AC22B0;
	sub_831CC188(ctx, base);
loc_82AC22B0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AC22BC;
	sub_831CC188(ctx, base);
loc_82AC22BC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AC22C8;
	sub_831CC188(ctx, base);
loc_82AC22C8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AC22D4;
	sub_831CC188(ctx, base);
loc_82AC22D4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AC22E0;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82AC22E0"))) PPC_WEAK_FUNC(sub_82AC22E0);
PPC_FUNC_IMPL(__imp__sub_82AC22E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82AC22E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r11,-11632
	ctx.r28.s64 = ctx.r11.s64 + -11632;
loc_82AC2300:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82AC2308;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r4,r11,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AC2324;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d2aff8
	ctx.lr = 0x82AC232C;
	sub_82D2AFF8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82ac233c
	if (!cr6.eq) goto loc_82AC233C;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_82AC233C:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r30,32
	cr6.compare<uint32_t>(ctx.r30.u32, 32, xer);
	// blt cr6,0x82ac2300
	if (cr6.lt) goto loc_82AC2300;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x82ac23d8
	if (!cr6.eq) goto loc_82AC23D8;
	// lwz r9,124(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 124);
	// li r11,92
	ctx.r11.s64 = 92;
	// lwz r10,128(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw. r8,r8,r11
	ctx.r8.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82ac23d8
	if (cr0.eq) goto loc_82AC23D8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AC2370:
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// ble cr6,0x82ac23a8
	if (!cr6.gt) goto loc_82AC23A8;
	// mulli r10,r11,92
	ctx.r10.s64 = ctx.r11.s64 * 92;
	// add r31,r10,r9
	ctx.r31.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac23b4
	if (!cr6.eq) goto loc_82AC23B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x82ac2370
	if (cr6.lt) goto loc_82AC2370;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82AC23A8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AC23B4;
	sub_831CC188(ctx, base);
loc_82AC23B4:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac23d8
	if (cr6.eq) goto loc_82AC23D8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82AC23D0;
	sub_82D2AEC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_82AC23D8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC23E4"))) PPC_WEAK_FUNC(sub_82AC23E4);
PPC_FUNC_IMPL(__imp__sub_82AC23E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC23E8"))) PPC_WEAK_FUNC(sub_82AC23E8);
PPC_FUNC_IMPL(__imp__sub_82AC23E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82AC23F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,-11368
	ctx.r29.s64 = ctx.r11.s64 + -11368;
loc_82AC2408:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82AC2410;
	sub_82D19A68(ctx, base);
	// mulli r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 * 28;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ac242c
	if (cr6.lt) goto loc_82AC242C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82AC242C:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AC2440;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d2aff8
	ctx.lr = 0x82AC2448;
	sub_82D2AFF8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82ac2474
	if (cr6.eq) goto loc_82AC2474;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// blt cr6,0x82ac2408
	if (cr6.lt) goto loc_82AC2408;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82AC2474:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC2480"))) PPC_WEAK_FUNC(sub_82AC2480);
PPC_FUNC_IMPL(__imp__sub_82AC2480) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82AC2488;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// li r27,92
	ctx.r27.s64 = 92;
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r30,r3,124
	ctx.r30.s64 = ctx.r3.s64 + 124;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// divw. r10,r9,r27
	ctx.r10.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82ac2664
	if (cr0.eq) goto loc_82AC2664;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// lis r23,-31777
	ctx.r23.s64 = -2082537472;
	// cmplw cr6,r10,r24
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, xer);
	// ble cr6,0x82ac266c
	if (!cr6.gt) goto loc_82AC266C;
loc_82AC24C4:
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lfs f0,84(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmpwi cr6,r9,-360
	cr6.compare<int32_t>(ctx.r9.s32, -360, xer);
	// bge cr6,0x82ac24f8
	if (!cr6.lt) goto loc_82AC24F8;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// b 0x82ac250c
	goto loc_82AC250C;
loc_82AC24F8:
	// li r9,720
	ctx.r9.s64 = 720;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// srawi r7,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// subfc r6,r10,r9
	xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// adde r10,r8,r7
	temp.u8 = (ctx.r8.u32 + ctx.r7.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82AC250C:
	// lbz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 44);
	// clrlwi r26,r10,24
	ctx.r26.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r9,r26
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, xer);
	// beq cr6,0x82ac2644
	if (cr6.eq) goto loc_82AC2644;
	// stb r10,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r10.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r8,r29
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, xer);
	// ble cr6,0x82ac2678
	if (!cr6.gt) goto loc_82AC2678;
	// add r31,r28,r11
	ctx.r31.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r10,-11420(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + -11420);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82ac2568
	if (!cr6.eq) goto loc_82AC2568;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ac256c
	if (cr6.eq) goto loc_82AC256C;
loc_82AC2568:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82AC256C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ac25d0
	if (!cr6.eq) goto loc_82AC25D0;
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(ctx.r26.u32, 1, xer);
	// bne cr6,0x82ac25b4
	if (!cr6.eq) goto loc_82AC25B4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82ac23e8
	ctx.lr = 0x82AC2588;
	sub_82AC23E8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r8,r29
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, xer);
	// ble cr6,0x82ac2684
	if (!cr6.gt) goto loc_82AC2684;
	// add r5,r28,r11
	ctx.r5.u64 = ctx.r28.u64 + ctx.r11.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82ac1de8
	ctx.lr = 0x82AC25B0;
	sub_82AC1DE8(ctx, base);
	// b 0x82ac25d0
	goto loc_82AC25D0;
loc_82AC25B4:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac25d0
	if (cr6.eq) goto loc_82AC25D0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82AC25CC;
	sub_82D2AEC8(ctx, base);
	// stw r24,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r24.u32);
loc_82AC25D0:
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(ctx.r26.u32, 1, xer);
	// bne cr6,0x82ac260c
	if (!cr6.eq) goto loc_82AC260C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82ac22e0
	ctx.lr = 0x82AC25E0;
	sub_82AC22E0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r8,r29
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, xer);
	// ble cr6,0x82ac2690
	if (!cr6.gt) goto loc_82AC2690;
	// add r5,r28,r11
	ctx.r5.u64 = ctx.r28.u64 + ctx.r11.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82ac1d10
	ctx.lr = 0x82AC2608;
	sub_82AC1D10(ctx, base);
	// b 0x82ac2644
	goto loc_82AC2644;
loc_82AC260C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r8,r29
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, xer);
	// ble cr6,0x82ac269c
	if (!cr6.gt) goto loc_82AC269C;
	// add r31,r28,r11
	ctx.r31.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac2644
	if (cr6.eq) goto loc_82AC2644;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82AC2640;
	sub_82D2AEC8(ctx, base);
	// stw r24,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r24.u32);
loc_82AC2644:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r28,r28,92
	ctx.r28.s64 = ctx.r28.s64 + 92;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r9,r27
	ctx.r10.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, xer);
	// bgt cr6,0x82ac24c4
	if (cr6.gt) goto loc_82AC24C4;
loc_82AC2664:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82AC266C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AC2678;
	sub_831CC188(ctx, base);
loc_82AC2678:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AC2684;
	sub_831CC188(ctx, base);
loc_82AC2684:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AC2690;
	sub_831CC188(ctx, base);
loc_82AC2690:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AC269C;
	sub_831CC188(ctx, base);
loc_82AC269C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AC26A8;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82AC26A8"))) PPC_WEAK_FUNC(sub_82AC26A8);
PPC_FUNC_IMPL(__imp__sub_82AC26A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82ac1fc8
	ctx.lr = 0x82AC26C4;
	sub_82AC1FC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac26ec
	if (cr6.eq) goto loc_82AC26EC;
	// ld r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 112);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// bgt cr6,0x82ac26ec
	if (cr6.gt) goto loc_82AC26EC;
	// bl 0x83a7d958
	ctx.lr = 0x82AC26E0;
	sub_83A7D958(ctx, base);
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// bl 0x83524138
	ctx.lr = 0x82AC26E8;
	sub_83524138(ctx, base);
	// std r3,112(r31)
	PPC_STORE_U64(ctx.r31.u32 + 112, ctx.r3.u64);
loc_82AC26EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ac20a8
	ctx.lr = 0x82AC26F4;
	sub_82AC20A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ac2480
	ctx.lr = 0x82AC26FC;
	sub_82AC2480(ctx, base);
	// ld r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 112);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// beq cr6,0x82ac272c
	if (cr6.eq) goto loc_82AC272C;
	// bl 0x83a7d958
	ctx.lr = 0x82AC2710;
	sub_83A7D958(ctx, base);
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// bl 0x83524138
	ctx.lr = 0x82AC2718;
	sub_83524138(ctx, base);
	// ld r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 112);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpldi cr6,r10,6000
	cr6.compare<uint64_t>(ctx.r10.u64, 6000, xer);
	// bgt cr6,0x82ac2730
	if (cr6.gt) goto loc_82AC2730;
loc_82AC272C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82AC2730:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac2750
	if (cr6.eq) goto loc_82AC2750;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,30196
	ctx.r5.s64 = ctx.r11.s64 + 30196;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82AC2750;
	sub_82D20DA8(ctx, base);
loc_82AC2750:
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC276C"))) PPC_WEAK_FUNC(sub_82AC276C);
PPC_FUNC_IMPL(__imp__sub_82AC276C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC2770"))) PPC_WEAK_FUNC(sub_82AC2770);
PPC_FUNC_IMPL(__imp__sub_82AC2770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82AC2778;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// li r28,-1
	ctx.r28.s64 = -1;
	// stw r27,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r29.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82AC27A8;
	sub_8259CB28(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,56
	ctx.r4.s64 = ctx.r30.s64 + 56;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// lwz r8,40(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// lbz r7,44(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 44);
	// stb r7,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r7.u8);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r27,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r27.u32);
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// stb r29,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r29.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82AC2800;
	sub_8259CB28(ctx, base);
	// lfs f0,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lwz r9,88(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC281C"))) PPC_WEAK_FUNC(sub_82AC281C);
PPC_FUNC_IMPL(__imp__sub_82AC281C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC2820"))) PPC_WEAK_FUNC(sub_82AC2820);
PPC_FUNC_IMPL(__imp__sub_82AC2820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82AC2828;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r27.u8);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bl 0x831156e8
	ctx.lr = 0x82AC2854;
	sub_831156E8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r4,59
	ctx.r4.s64 = 3866624;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,22
	ctx.r4.u64 = ctx.r4.u64 | 22;
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bl 0x82d042a8
	ctx.lr = 0x82AC286C;
	sub_82D042A8(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82ac2880
	if (!cr6.lt) goto loc_82AC2880;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82AC2880:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC2884:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac2884
	if (!cr6.eq) goto loc_82AC2884;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC28A8;
	sub_825A1EB8(ctx, base);
	// addis r10,r31,222
	ctx.r10.s64 = ctx.r31.s64 + 14548992;
	// li r11,60
	ctx.r11.s64 = 60;
	// addi r10,r10,26340
	ctx.r10.s64 = ctx.r10.s64 + 26340;
	// lis r6,-31777
	ctx.r6.s64 = -2082537472;
	// addi r4,r10,836
	ctx.r4.s64 = ctx.r10.s64 + 836;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// lwz r9,-11420(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + -11420);
loc_82AC28CC:
	// cmplwi cr6,r3,60
	cr6.compare<uint32_t>(ctx.r3.u32, 60, xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// bge cr6,0x82ac28dc
	if (!cr6.lt) goto loc_82AC28DC;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82AC28DC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac2924
	if (cr6.eq) goto loc_82AC2924;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ori r30,r30,1
	ctx.r30.u64 = ctx.r30.u64 | 1;
	// xor r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// rlwinm r7,r8,0,0,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82ac2910
	if (!cr6.eq) goto loc_82AC2910;
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// clrlwi r8,r10,14
	ctx.r8.u64 = ctx.r10.u32 & 0x3FFFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82ac2914
	if (cr6.eq) goto loc_82AC2914;
loc_82AC2910:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_82AC2914:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x82ac2928
	if (cr6.eq) goto loc_82AC2928;
loc_82AC2924:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_82AC2928:
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82ac293c
	if (cr6.eq) goto loc_82AC293C;
	// rlwinm r30,r30,0,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
loc_82AC293C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ac2988
	if (cr6.eq) goto loc_82AC2988;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,152(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 152);
	// rlwinm r9,r9,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// lwz r8,156(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 156);
	// lwz r7,160(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 160);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,152(r28)
	PPC_STORE_U32(ctx.r28.u32 + 152, ctx.r10.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r9,24,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFF;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r8,156(r28)
	PPC_STORE_U32(ctx.r28.u32 + 156, ctx.r8.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r11,r11,22,22,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x3FF;
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r10,160(r28)
	PPC_STORE_U32(ctx.r28.u32 + 160, ctx.r10.u32);
	// lwz r9,-11420(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + -11420);
loc_82AC2988:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r5,r5,48
	ctx.r5.s64 = ctx.r5.s64 + 48;
	// bdnz 0x82ac28cc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82AC28CC;
	// li r31,3
	ctx.r31.s64 = 3;
	// lis r30,-31777
	ctx.r30.s64 = -2082537472;
loc_82AC299C:
	// lwz r4,-11504(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC29A4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac29a4
	if (!cr6.eq) goto loc_82AC29A4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC29C8;
	sub_825A1EB8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82ac299c
	if (!cr0.eq) goto loc_82AC299C;
	// lis r4,641
	ctx.r4.s64 = 42008576;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,183
	ctx.r4.u64 = ctx.r4.u64 | 183;
	// bl 0x82d042a8
	ctx.lr = 0x82AC29E0;
	sub_82D042A8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ac29f4
	if (!cr6.lt) goto loc_82AC29F4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82AC29F4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC29F8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac29f8
	if (!cr6.eq) goto loc_82AC29F8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC2A1C;
	sub_825A1EB8(ctx, base);
	// lwz r4,-11504(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC2A24:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac2a24
	if (!cr6.eq) goto loc_82AC2A24;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC2A48;
	sub_825A1EB8(ctx, base);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,152(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 152);
	// bl 0x82d042a8
	ctx.lr = 0x82AC2A58;
	sub_82D042A8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82ac2a6c
	if (!cr6.lt) goto loc_82AC2A6C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82AC2A6C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC2A70:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac2a70
	if (!cr6.eq) goto loc_82AC2A70;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC2A94;
	sub_825A1EB8(ctx, base);
	// lwz r4,-11504(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC2A9C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac2a9c
	if (!cr6.eq) goto loc_82AC2A9C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC2AC0;
	sub_825A1EB8(ctx, base);
	// lwz r4,-11504(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC2AC8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac2ac8
	if (!cr6.eq) goto loc_82AC2AC8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC2AEC;
	sub_825A1EB8(ctx, base);
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,46
	ctx.r4.u64 = ctx.r4.u64 | 46;
	// bl 0x82d042a8
	ctx.lr = 0x82AC2AFC;
	sub_82D042A8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82ac2b10
	if (!cr6.lt) goto loc_82AC2B10;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82AC2B10:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC2B14:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac2b14
	if (!cr6.eq) goto loc_82AC2B14;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC2B38;
	sub_825A1EB8(ctx, base);
	// lwz r4,-11504(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC2B40:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac2b40
	if (!cr6.eq) goto loc_82AC2B40;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC2B64;
	sub_825A1EB8(ctx, base);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,156(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 156);
	// bl 0x82d042a8
	ctx.lr = 0x82AC2B74;
	sub_82D042A8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82ac2b88
	if (!cr6.lt) goto loc_82AC2B88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82AC2B88:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC2B8C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac2b8c
	if (!cr6.eq) goto loc_82AC2B8C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC2BB0;
	sub_825A1EB8(ctx, base);
	// lwz r4,-11504(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC2BB8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac2bb8
	if (!cr6.eq) goto loc_82AC2BB8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC2BDC;
	sub_825A1EB8(ctx, base);
	// lwz r4,-11504(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC2BE4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac2be4
	if (!cr6.eq) goto loc_82AC2BE4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC2C08;
	sub_825A1EB8(ctx, base);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,26
	ctx.r4.u64 = ctx.r4.u64 | 26;
	// bl 0x82d042a8
	ctx.lr = 0x82AC2C18;
	sub_82D042A8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82ac2c2c
	if (!cr6.lt) goto loc_82AC2C2C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82AC2C2C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC2C30:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac2c30
	if (!cr6.eq) goto loc_82AC2C30;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC2C54;
	sub_825A1EB8(ctx, base);
	// lwz r4,-11504(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC2C5C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac2c5c
	if (!cr6.eq) goto loc_82AC2C5C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC2C80;
	sub_825A1EB8(ctx, base);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,160(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 160);
	// bl 0x82d042a8
	ctx.lr = 0x82AC2C90;
	sub_82D042A8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82ac2ca4
	if (!cr6.lt) goto loc_82AC2CA4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82AC2CA4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC2CA8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac2ca8
	if (!cr6.eq) goto loc_82AC2CA8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC2CCC;
	sub_825A1EB8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ac2cec
	if (cr6.lt) goto loc_82AC2CEC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82AC2CEC;
	sub_825952B8(ctx, base);
loc_82AC2CEC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC2CF4"))) PPC_WEAK_FUNC(sub_82AC2CF4);
PPC_FUNC_IMPL(__imp__sub_82AC2CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC2CF8"))) PPC_WEAK_FUNC(sub_82AC2CF8);
PPC_FUNC_IMPL(__imp__sub_82AC2CF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82AC2D00;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bl 0x831156e8
	ctx.lr = 0x82AC2D24;
	sub_831156E8(ctx, base);
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r30,r9,222
	ctx.r30.s64 = ctx.r9.s64 + 14548992;
	// addi r30,r30,26340
	ctx.r30.s64 = ctx.r30.s64 + 26340;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ac1a78
	ctx.lr = 0x82AC2D38;
	sub_82AC1A78(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(ctx.r11.u32, 60, xer);
	// blt cr6,0x82ac2d4c
	if (cr6.lt) goto loc_82AC2D4C;
	// addi r11,r30,836
	ctx.r11.s64 = ctx.r30.s64 + 836;
	// b 0x82ac2d60
	goto loc_82AC2D60;
loc_82AC2D4C:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,836
	ctx.r11.s64 = ctx.r11.s64 + 836;
loc_82AC2D60:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,263
	ctx.r4.u64 = ctx.r4.u64 | 263;
	// rlwinm r5,r11,22,21,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x7FF;
	// bl 0x82d042a8
	ctx.lr = 0x82AC2D78;
	sub_82D042A8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82ac2d8c
	if (!cr6.lt) goto loc_82AC2D8C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82AC2D8C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC2D90:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac2d90
	if (!cr6.eq) goto loc_82AC2D90;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC2DB4;
	sub_825A1EB8(ctx, base);
	// lis r29,-31777
	ctx.r29.s64 = -2082537472;
	// lwz r4,-11504(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC2DC0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac2dc0
	if (!cr6.eq) goto loc_82AC2DC0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC2DE4;
	sub_825A1EB8(ctx, base);
	// lis r4,641
	ctx.r4.s64 = 42008576;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,72
	ctx.r4.u64 = ctx.r4.u64 | 72;
	// bl 0x82d042a8
	ctx.lr = 0x82AC2DF4;
	sub_82D042A8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82ac2e08
	if (!cr6.lt) goto loc_82AC2E08;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82AC2E08:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC2E0C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac2e0c
	if (!cr6.eq) goto loc_82AC2E0C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC2E30;
	sub_825A1EB8(ctx, base);
	// li r30,3
	ctx.r30.s64 = 3;
loc_82AC2E34:
	// lwz r4,-11504(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC2E3C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac2e3c
	if (!cr6.eq) goto loc_82AC2E3C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC2E60;
	sub_825A1EB8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x82ac2e34
	if (!cr0.eq) goto loc_82AC2E34;
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,347
	ctx.r4.u64 = ctx.r4.u64 | 347;
	// bl 0x82d042a8
	ctx.lr = 0x82AC2E78;
	sub_82D042A8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ac2e8c
	if (!cr6.lt) goto loc_82AC2E8C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82AC2E8C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC2E90:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac2e90
	if (!cr6.eq) goto loc_82AC2E90;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC2EB4;
	sub_825A1EB8(ctx, base);
	// lwz r4,-11504(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC2EBC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac2ebc
	if (!cr6.eq) goto loc_82AC2EBC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC2EE0;
	sub_825A1EB8(ctx, base);
	// lwz r4,-11504(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC2EE8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac2ee8
	if (!cr6.eq) goto loc_82AC2EE8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC2F0C;
	sub_825A1EB8(ctx, base);
	// lis r4,641
	ctx.r4.s64 = 42008576;
	// lwz r10,164(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,152(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 152);
	// ori r4,r4,183
	ctx.r4.u64 = ctx.r4.u64 | 183;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82d042a8
	ctx.lr = 0x82AC2F28;
	sub_82D042A8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82ac2f3c
	if (!cr6.lt) goto loc_82AC2F3C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82AC2F3C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC2F40:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac2f40
	if (!cr6.eq) goto loc_82AC2F40;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC2F64;
	sub_825A1EB8(ctx, base);
	// lwz r4,-11504(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC2F6C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac2f6c
	if (!cr6.eq) goto loc_82AC2F6C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC2F90;
	sub_825A1EB8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82AC2FA0;
	sub_82D042A8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82ac2fb4
	if (!cr6.lt) goto loc_82AC2FB4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82AC2FB4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC2FB8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac2fb8
	if (!cr6.eq) goto loc_82AC2FB8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC2FDC;
	sub_825A1EB8(ctx, base);
	// lwz r4,-11504(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC2FE4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac2fe4
	if (!cr6.eq) goto loc_82AC2FE4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC3008;
	sub_825A1EB8(ctx, base);
	// lwz r4,-11504(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC3010:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac3010
	if (!cr6.eq) goto loc_82AC3010;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC3034;
	sub_825A1EB8(ctx, base);
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// lwz r10,168(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 168);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,156(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 156);
	// ori r4,r4,46
	ctx.r4.u64 = ctx.r4.u64 | 46;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82d042a8
	ctx.lr = 0x82AC3050;
	sub_82D042A8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82ac3064
	if (!cr6.lt) goto loc_82AC3064;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82AC3064:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC3068:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac3068
	if (!cr6.eq) goto loc_82AC3068;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC308C;
	sub_825A1EB8(ctx, base);
	// lwz r4,-11504(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC3094:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac3094
	if (!cr6.eq) goto loc_82AC3094;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC30B8;
	sub_825A1EB8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82AC30C8;
	sub_82D042A8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82ac30dc
	if (!cr6.lt) goto loc_82AC30DC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82AC30DC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC30E0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac30e0
	if (!cr6.eq) goto loc_82AC30E0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC3104;
	sub_825A1EB8(ctx, base);
	// lwz r4,-11504(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC310C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac310c
	if (!cr6.eq) goto loc_82AC310C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC3130;
	sub_825A1EB8(ctx, base);
	// lwz r4,-11504(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC3138:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac3138
	if (!cr6.eq) goto loc_82AC3138;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC315C;
	sub_825A1EB8(ctx, base);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// lwz r11,172(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,160(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 160);
	// ori r4,r4,26
	ctx.r4.u64 = ctx.r4.u64 | 26;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82d042a8
	ctx.lr = 0x82AC3178;
	sub_82D042A8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82ac318c
	if (!cr6.lt) goto loc_82AC318C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82AC318C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC3190:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac3190
	if (!cr6.eq) goto loc_82AC3190;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC31B4;
	sub_825A1EB8(ctx, base);
	// lwz r4,-11504(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC31BC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac31bc
	if (!cr6.eq) goto loc_82AC31BC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC31E0;
	sub_825A1EB8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82AC31F0;
	sub_82D042A8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82ac3204
	if (!cr6.lt) goto loc_82AC3204;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82AC3204:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC3208:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac3208
	if (!cr6.eq) goto loc_82AC3208;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC322C;
	sub_825A1EB8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ac324c
	if (cr6.lt) goto loc_82AC324C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82AC324C;
	sub_825952B8(ctx, base);
loc_82AC324C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC3254"))) PPC_WEAK_FUNC(sub_82AC3254);
PPC_FUNC_IMPL(__imp__sub_82AC3254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC3258"))) PPC_WEAK_FUNC(sub_82AC3258);
PPC_FUNC_IMPL(__imp__sub_82AC3258) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82AC3260;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ac32e0
	if (cr6.eq) goto loc_82AC32E0;
	// addi r31,r3,56
	ctx.r31.s64 = ctx.r3.s64 + 56;
	// li r28,2
	ctx.r28.s64 = 2;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82AC3280:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ac329c
	if (cr6.lt) goto loc_82AC329C;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82AC329C;
	sub_825952B8(ctx, base);
loc_82AC329C:
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// lwz r11,-36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ac32c4
	if (cr6.lt) goto loc_82AC32C4;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,-56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -56);
	// bl 0x825952b8
	ctx.lr = 0x82AC32C4;
	sub_825952B8(ctx, base);
loc_82AC32C4:
	// stw r29,-36(r31)
	PPC_STORE_U32(ctx.r31.u32 + -36, ctx.r29.u32);
	// stw r30,-40(r31)
	PPC_STORE_U32(ctx.r31.u32 + -40, ctx.r30.u32);
	// stb r30,-56(r31)
	PPC_STORE_U8(ctx.r31.u32 + -56, ctx.r30.u8);
	// addi r31,r31,92
	ctx.r31.s64 = ctx.r31.s64 + 92;
	// addi r11,r31,-56
	ctx.r11.s64 = ctx.r31.s64 + -56;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bne cr6,0x82ac3280
	if (!cr6.eq) goto loc_82AC3280;
loc_82AC32E0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC32E8"))) PPC_WEAK_FUNC(sub_82AC32E8);
PPC_FUNC_IMPL(__imp__sub_82AC32E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82AC32F0;
	__savegprlr_24(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82AC32FC;
	sub_831156E8(ctx, base);
	// lwz r27,48(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r26,0
	ctx.r26.s64 = 0;
	// addis r9,r27,222
	ctx.r9.s64 = ctx.r27.s64 + 14548992;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r9,r9,26340
	ctx.r9.s64 = ctx.r9.s64 + 26340;
	// addi r10,r9,260
	ctx.r10.s64 = ctx.r9.s64 + 260;
loc_82AC3314:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82ac3338
	if (cr6.eq) goto loc_82AC3338;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// blt cr6,0x82ac3314
	if (cr6.lt) goto loc_82AC3314;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82AC3338:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r29,r11,260
	ctx.r29.s64 = ctx.r11.s64 + 260;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82ac3678
	if (cr6.eq) goto loc_82AC3678;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r24,r11,30208
	ctx.r24.s64 = ctx.r11.s64 + 30208;
	// addi r4,r24,-862
	ctx.r4.s64 = ctx.r24.s64 + -862;
	// bl 0x837b0c10
	ctx.lr = 0x82AC3368;
	sub_837B0C10(ctx, base);
	// lis r4,641
	ctx.r4.s64 = 42008576;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ori r4,r4,62
	ctx.r4.u64 = ctx.r4.u64 | 62;
	// bl 0x82d04220
	ctx.lr = 0x82AC3378;
	sub_82D04220(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ac338c
	if (!cr6.lt) goto loc_82AC338C;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82AC338C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC3390:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac3390
	if (!cr6.eq) goto loc_82AC3390;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC33B4;
	sub_825A1EB8(ctx, base);
	// lis r30,-31777
	ctx.r30.s64 = -2082537472;
	// lwz r4,-11504(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC33C0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac33c0
	if (!cr6.eq) goto loc_82AC33C0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC33E4;
	sub_825A1EB8(ctx, base);
	// li r25,15
	ctx.r25.s64 = 15;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r26,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r26.u8);
	// ori r4,r4,554
	ctx.r4.u64 = ctx.r4.u64 | 554;
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82d042a8
	ctx.lr = 0x82AC340C;
	sub_82D042A8(ctx, base);
	// lwz r4,-11504(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC3414:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac3414
	if (!cr6.eq) goto loc_82AC3414;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC3438;
	sub_825A1EB8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82ac344c
	if (!cr6.lt) goto loc_82AC344C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82AC344C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC3450:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac3450
	if (!cr6.eq) goto loc_82AC3450;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC3474;
	sub_825A1EB8(ctx, base);
	// lwz r4,-11504(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC347C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac347c
	if (!cr6.eq) goto loc_82AC347C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC34A0;
	sub_825A1EB8(ctx, base);
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lhz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 12);
	// bl 0x8311c338
	ctx.lr = 0x82AC34B0;
	sub_8311C338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83125548
	ctx.lr = 0x82AC34C0;
	sub_83125548(ctx, base);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ac34d4
	if (cr6.lt) goto loc_82AC34D4;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ac34d8
	goto loc_82AC34D8;
loc_82AC34D4:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82AC34D8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC34DC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac34dc
	if (!cr6.eq) goto loc_82AC34DC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC3500;
	sub_825A1EB8(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r28,2
	ctx.r28.s64 = 2;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ac3520
	if (cr6.lt) goto loc_82AC3520;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82AC3520;
	sub_825952B8(ctx, base);
loc_82AC3520:
	// lwz r4,-11504(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11504);
	// stw r25,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r25.u32);
	// stw r26,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r26.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r26,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r26.u8);
loc_82AC3534:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac3534
	if (!cr6.eq) goto loc_82AC3534;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC3558;
	sub_825A1EB8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x8311c148
	ctx.lr = 0x82AC3564;
	sub_8311C148(ctx, base);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC356C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac356c
	if (!cr6.eq) goto loc_82AC356C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC3590;
	sub_825A1EB8(ctx, base);
	// addi r4,r24,-4
	ctx.r4.s64 = ctx.r24.s64 + -4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1eb8
	ctx.lr = 0x82AC35A0;
	sub_825A1EB8(ctx, base);
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,54
	ctx.r4.u64 = ctx.r4.u64 | 54;
	// bl 0x82d042a8
	ctx.lr = 0x82AC35B0;
	sub_82D042A8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82ac35c4
	if (!cr6.lt) goto loc_82AC35C4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82AC35C4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC35C8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac35c8
	if (!cr6.eq) goto loc_82AC35C8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC35EC;
	sub_825A1EB8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1eb8
	ctx.lr = 0x82AC35FC;
	sub_825A1EB8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x8311c148
	ctx.lr = 0x82AC3608;
	sub_8311C148(ctx, base);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC3610:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac3610
	if (!cr6.eq) goto loc_82AC3610;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC3634;
	sub_825A1EB8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ac3650
	if (cr6.lt) goto loc_82AC3650;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82AC3650;
	sub_825952B8(ctx, base);
loc_82AC3650:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r26,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r26.u8);
	// blt cr6,0x82ac3678
	if (cr6.lt) goto loc_82AC3678;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82AC3678;
	sub_825952B8(ctx, base);
loc_82AC3678:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC3680"))) PPC_WEAK_FUNC(sub_82AC3680);
PPC_FUNC_IMPL(__imp__sub_82AC3680) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82AC3688;
	__savegprlr_24(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82AC3694;
	sub_831156E8(ctx, base);
	// lwz r27,48(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r26,0
	ctx.r26.s64 = 0;
	// addis r9,r27,222
	ctx.r9.s64 = ctx.r27.s64 + 14548992;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r9,r9,26340
	ctx.r9.s64 = ctx.r9.s64 + 26340;
	// addi r10,r9,260
	ctx.r10.s64 = ctx.r9.s64 + 260;
loc_82AC36AC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// beq cr6,0x82ac36d0
	if (cr6.eq) goto loc_82AC36D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// blt cr6,0x82ac36ac
	if (cr6.lt) goto loc_82AC36AC;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82AC36D0:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r29,r11,260
	ctx.r29.s64 = ctx.r11.s64 + 260;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82ac3a10
	if (cr6.eq) goto loc_82AC3A10;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r24,r11,30216
	ctx.r24.s64 = ctx.r11.s64 + 30216;
	// addi r4,r24,-869
	ctx.r4.s64 = ctx.r24.s64 + -869;
	// bl 0x837b0c10
	ctx.lr = 0x82AC3700;
	sub_837B0C10(ctx, base);
	// lis r4,660
	ctx.r4.s64 = 43253760;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ori r4,r4,190
	ctx.r4.u64 = ctx.r4.u64 | 190;
	// bl 0x82d04220
	ctx.lr = 0x82AC3710;
	sub_82D04220(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ac3724
	if (!cr6.lt) goto loc_82AC3724;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82AC3724:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC3728:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac3728
	if (!cr6.eq) goto loc_82AC3728;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC374C;
	sub_825A1EB8(ctx, base);
	// lis r30,-31777
	ctx.r30.s64 = -2082537472;
	// lwz r4,-11504(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC3758:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac3758
	if (!cr6.eq) goto loc_82AC3758;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC377C;
	sub_825A1EB8(ctx, base);
	// li r25,15
	ctx.r25.s64 = 15;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r26,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r26.u8);
	// ori r4,r4,554
	ctx.r4.u64 = ctx.r4.u64 | 554;
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82d042a8
	ctx.lr = 0x82AC37A4;
	sub_82D042A8(ctx, base);
	// lwz r4,-11504(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC37AC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac37ac
	if (!cr6.eq) goto loc_82AC37AC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC37D0;
	sub_825A1EB8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82ac37e4
	if (!cr6.lt) goto loc_82AC37E4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82AC37E4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC37E8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac37e8
	if (!cr6.eq) goto loc_82AC37E8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC380C;
	sub_825A1EB8(ctx, base);
	// lwz r4,-11504(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC3814:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac3814
	if (!cr6.eq) goto loc_82AC3814;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC3838;
	sub_825A1EB8(ctx, base);
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lhz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 12);
	// bl 0x8311c338
	ctx.lr = 0x82AC3848;
	sub_8311C338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83125548
	ctx.lr = 0x82AC3858;
	sub_83125548(ctx, base);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ac386c
	if (cr6.lt) goto loc_82AC386C;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ac3870
	goto loc_82AC3870;
loc_82AC386C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82AC3870:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC3874:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac3874
	if (!cr6.eq) goto loc_82AC3874;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC3898;
	sub_825A1EB8(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r28,2
	ctx.r28.s64 = 2;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ac38b8
	if (cr6.lt) goto loc_82AC38B8;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82AC38B8;
	sub_825952B8(ctx, base);
loc_82AC38B8:
	// lwz r4,-11504(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11504);
	// stw r25,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r25.u32);
	// stw r26,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r26.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r26,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r26.u8);
loc_82AC38CC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac38cc
	if (!cr6.eq) goto loc_82AC38CC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC38F0;
	sub_825A1EB8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x8311c148
	ctx.lr = 0x82AC38FC;
	sub_8311C148(ctx, base);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC3904:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac3904
	if (!cr6.eq) goto loc_82AC3904;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC3928;
	sub_825A1EB8(ctx, base);
	// addi r4,r24,-4
	ctx.r4.s64 = ctx.r24.s64 + -4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1eb8
	ctx.lr = 0x82AC3938;
	sub_825A1EB8(ctx, base);
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,54
	ctx.r4.u64 = ctx.r4.u64 | 54;
	// bl 0x82d042a8
	ctx.lr = 0x82AC3948;
	sub_82D042A8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82ac395c
	if (!cr6.lt) goto loc_82AC395C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82AC395C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC3960:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac3960
	if (!cr6.eq) goto loc_82AC3960;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC3984;
	sub_825A1EB8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1eb8
	ctx.lr = 0x82AC3994;
	sub_825A1EB8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x8311c148
	ctx.lr = 0x82AC39A0;
	sub_8311C148(ctx, base);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC39A8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac39a8
	if (!cr6.eq) goto loc_82AC39A8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC39CC;
	sub_825A1EB8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ac39e8
	if (cr6.lt) goto loc_82AC39E8;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82AC39E8;
	sub_825952B8(ctx, base);
loc_82AC39E8:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r26,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r26.u8);
	// blt cr6,0x82ac3a10
	if (cr6.lt) goto loc_82AC3A10;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82AC3A10;
	sub_825952B8(ctx, base);
loc_82AC3A10:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC3A18"))) PPC_WEAK_FUNC(sub_82AC3A18);
PPC_FUNC_IMPL(__imp__sub_82AC3A18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82AC3A20;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82AC3A2C;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r10,r11,222
	ctx.r10.s64 = ctx.r11.s64 + 14548992;
	// addic. r10,r10,26340
	xer.ca = ctx.r10.u32 > 4294940955;
	ctx.r10.s64 = ctx.r10.s64 + 26340;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82ac3d0c
	if (cr0.eq) goto loc_82AC3D0C;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r25,r11,29460
	ctx.r25.s64 = ctx.r11.s64 + 29460;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r26,r10,356
	ctx.r26.s64 = ctx.r10.s64 + 356;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
loc_82AC3A58:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82AC3A64:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r5,r9
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, xer);
	// beq cr6,0x82ac3aa4
	if (cr6.eq) goto loc_82AC3AA4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,60
	cr6.compare<uint32_t>(ctx.r10.u32, 60, xer);
	// blt cr6,0x82ac3a64
	if (cr6.lt) goto loc_82AC3A64;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82AC3A84:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ac3aac
	if (!cr6.eq) goto loc_82AC3AAC;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82ac3a58
	if (cr6.lt) goto loc_82AC3A58;
	// b 0x82ac3ab0
	goto loc_82AC3AB0;
loc_82AC3AA4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82ac3a84
	goto loc_82AC3A84;
loc_82AC3AAC:
	// li r6,1
	ctx.r6.s64 = 1;
loc_82AC3AB0:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ac3b00
	if (!cr6.eq) goto loc_82AC3B00;
	// li r31,7
	ctx.r31.s64 = 7;
	// lis r30,-31777
	ctx.r30.s64 = -2082537472;
loc_82AC3AC4:
	// lwz r4,-11504(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC3ACC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac3acc
	if (!cr6.eq) goto loc_82AC3ACC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC3AF0;
	sub_825A1EB8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82ac3ac4
	if (!cr0.eq) goto loc_82AC3AC4;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82AC3B00:
	// li r31,8
	ctx.r31.s64 = 8;
	// lis r27,-31777
	ctx.r27.s64 = -2082537472;
loc_82AC3B08:
	// lwz r4,-11504(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC3B10:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac3b10
	if (!cr6.eq) goto loc_82AC3B10;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC3B34;
	sub_825A1EB8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82ac3b08
	if (!cr0.eq) goto loc_82AC3B08;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// stb r24,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r24.u8);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,29377
	ctx.r4.s64 = ctx.r10.s64 + 29377;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82AC3B60;
	sub_8259CC28(ctx, base);
	// lis r4,600
	ctx.r4.s64 = 39321600;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82d042a8
	ctx.lr = 0x82AC3B70;
	sub_82D042A8(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82ac3b84
	if (!cr6.lt) goto loc_82AC3B84;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82AC3B84:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC3B88:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac3b88
	if (!cr6.eq) goto loc_82AC3B88;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC3BAC;
	sub_825A1EB8(ctx, base);
	// li r31,5
	ctx.r31.s64 = 5;
loc_82AC3BB0:
	// lwz r4,-11504(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC3BB8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac3bb8
	if (!cr6.eq) goto loc_82AC3BB8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC3BDC;
	sub_825A1EB8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82ac3bb0
	if (!cr0.eq) goto loc_82AC3BB0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// addi r29,r11,30304
	ctx.r29.s64 = ctx.r11.s64 + 30304;
loc_82AC3BF0:
	// lwzx r9,r30,r25
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82AC3BFC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// beq cr6,0x82ac3d14
	if (cr6.eq) goto loc_82AC3D14;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,60
	cr6.compare<uint32_t>(ctx.r10.u32, 60, xer);
	// blt cr6,0x82ac3bfc
	if (cr6.lt) goto loc_82AC3BFC;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82AC3C1C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac3ca8
	if (cr6.eq) goto loc_82AC3CA8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwzx r4,r30,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// bl 0x82d042a8
	ctx.lr = 0x82AC3C34;
	sub_82D042A8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ac3c48
	if (!cr6.lt) goto loc_82AC3C48;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82AC3C48:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC3C4C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac3c4c
	if (!cr6.eq) goto loc_82AC3C4C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC3C70;
	sub_825A1EB8(ctx, base);
	// li r31,5
	ctx.r31.s64 = 5;
loc_82AC3C74:
	// lwz r4,-11504(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC3C7C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac3c7c
	if (!cr6.eq) goto loc_82AC3C7C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC3CA0;
	sub_825A1EB8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82ac3c74
	if (!cr0.eq) goto loc_82AC3C74;
loc_82AC3CA8:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r30,16
	cr6.compare<uint32_t>(ctx.r30.u32, 16, xer);
	// blt cr6,0x82ac3bf0
	if (cr6.lt) goto loc_82AC3BF0;
	// li r31,7
	ctx.r31.s64 = 7;
loc_82AC3CB8:
	// lwz r4,-11504(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC3CC0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac3cc0
	if (!cr6.eq) goto loc_82AC3CC0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC3CE4;
	sub_825A1EB8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82ac3cb8
	if (!cr0.eq) goto loc_82AC3CB8;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ac3d0c
	if (cr6.lt) goto loc_82AC3D0C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82AC3D0C;
	sub_825952B8(ctx, base);
loc_82AC3D0C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82AC3D14:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82ac3c1c
	goto loc_82AC3C1C;
}

__attribute__((alias("__imp__sub_82AC3D1C"))) PPC_WEAK_FUNC(sub_82AC3D1C);
PPC_FUNC_IMPL(__imp__sub_82AC3D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC3D20"))) PPC_WEAK_FUNC(sub_82AC3D20);
PPC_FUNC_IMPL(__imp__sub_82AC3D20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82AC3D28;
	__savegprlr_27(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82d04828
	ctx.lr = 0x82AC3D40;
	sub_82D04828(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82AC3D48;
	sub_82D19A68(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,144(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r8,r9,-11632
	ctx.r8.s64 = ctx.r9.s64 + -11632;
	// rlwinm r7,r10,2,25,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x7C;
	// lwz r6,100(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwzx r4,r7,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82AC3D74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d28370
	ctx.lr = 0x82AC3D80;
	sub_82D28370(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d06fa0
	ctx.lr = 0x82AC3D8C;
	sub_82D06FA0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d047a8
	ctx.lr = 0x82AC3D94;
	sub_82D047A8(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lfs f0,204(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stw r30,40(r27)
	PPC_STORE_U32(ctx.r27.u32 + 40, ctx.r30.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stfiwx f13,r27,r4
	PPC_STORE_U32(ctx.r27.u32 + ctx.r4.u32, ctx.f13.u32);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
loc_82AC3DC0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac3dc0
	if (!cr6.eq) goto loc_82AC3DC0;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82AC3DE8;
	sub_8259CC28(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82AC3DFC;
	sub_82D291E0(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ac3e1c
	if (cr6.lt) goto loc_82AC3E1C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82AC3E1C;
	sub_825952B8(ctx, base);
loc_82AC3E1C:
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// bl 0x82d04b60
	ctx.lr = 0x82AC3E30;
	sub_82D04B60(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC3E38"))) PPC_WEAK_FUNC(sub_82AC3E38);
PPC_FUNC_IMPL(__imp__sub_82AC3E38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82AC3E40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r29,r3,24
	ctx.r29.s64 = ctx.r3.s64 + 24;
	// li r28,10
	ctx.r28.s64 = 10;
loc_82AC3E50:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82ac3f04
	if (cr6.eq) goto loc_82AC3F04;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ac3e78
	if (!cr6.lt) goto loc_82AC3E78;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82ac3e7c
	if (!cr6.gt) goto loc_82AC3E7C;
loc_82AC3E78:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AC3E7C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac3ecc
	if (cr6.eq) goto loc_82AC3ECC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r11,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// srawi r30,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r8.s32 >> 1;
	// bne cr6,0x82ac3eac
	if (!cr6.eq) goto loc_82AC3EAC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aa3dd0
	ctx.lr = 0x82AC3EAC;
	sub_82AA3DD0(ctx, base);
loc_82AC3EAC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac3ef8
	if (cr6.eq) goto loc_82AC3EF8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// b 0x82ac3ef8
	goto loc_82AC3EF8;
loc_82AC3ECC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x82ac3ee4
	if (!cr6.eq) goto loc_82AC3EE4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aa3dd0
	ctx.lr = 0x82AC3EE4;
	sub_82AA3DD0(ctx, base);
loc_82AC3EE4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac3ef8
	if (cr6.eq) goto loc_82AC3EF8;
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
loc_82AC3EF8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82AC3F04:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// bne 0x82ac3e50
	if (!cr0.eq) goto loc_82AC3E50;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC3F18"))) PPC_WEAK_FUNC(sub_82AC3F18);
PPC_FUNC_IMPL(__imp__sub_82AC3F18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82AC3F20;
	__savegprlr_23(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,15
	ctx.r24.s64 = 15;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stb r25,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r25.u8);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x831156e8
	ctx.lr = 0x82AC3F48;
	sub_831156E8(ctx, base);
	// lwz r23,48(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r11,140(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// addis r10,r23,222
	ctx.r10.s64 = ctx.r23.s64 + 14548992;
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(ctx.r11.u32, 60, xer);
	// addi r10,r10,26340
	ctx.r10.s64 = ctx.r10.s64 + 26340;
	// blt cr6,0x82ac3f68
	if (cr6.lt) goto loc_82AC3F68;
	// addi r29,r10,836
	ctx.r29.s64 = ctx.r10.s64 + 836;
	// b 0x82ac3f7c
	goto loc_82AC3F7C;
loc_82AC3F68:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r29,r11,836
	ctx.r29.s64 = ctx.r11.s64 + 836;
loc_82AC3F7C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x82ac3fac
	if (!cr6.eq) goto loc_82AC3FAC;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ac46e8
	if (cr6.lt) goto loc_82AC46E8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82AC3FA4;
	sub_825952B8(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82AC3FAC:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8311c148
	ctx.lr = 0x82AC3FB8;
	sub_8311C148(ctx, base);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC3FC0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac3fc0
	if (!cr6.eq) goto loc_82AC3FC0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC3FE4;
	sub_825A1EB8(ctx, base);
	// lis r26,-31777
	ctx.r26.s64 = -2082537472;
	// lwz r4,-11504(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC3FF0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac3ff0
	if (!cr6.eq) goto loc_82AC3FF0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC4014;
	sub_825A1EB8(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r24,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r24.u32);
	// stw r25,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r25.u32);
	// stb r25,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r25.u8);
	// stw r24,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r24.u32);
	// stw r25,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r25.u32);
	// stb r25,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r25.u8);
	// stw r10,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r10.u32);
	// lbz r3,44(r29)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// bl 0x82ac8c80
	ctx.lr = 0x82AC403C;
	sub_82AC8C80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82d042a8
	ctx.lr = 0x82AC4048;
	sub_82D042A8(ctx, base);
	// lbz r3,45(r29)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + 45);
	// stw r24,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r24.u32);
	// stw r25,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r25.u32);
	// stb r25,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r25.u8);
	// bl 0x82ac8c80
	ctx.lr = 0x82AC405C;
	sub_82AC8C80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82d042a8
	ctx.lr = 0x82AC4068;
	sub_82D042A8(ctx, base);
	// lwz r9,212(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r8,192(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82ac407c
	if (!cr6.lt) goto loc_82AC407C;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
loc_82AC407C:
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r6,224(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ac4090
	if (!cr6.lt) goto loc_82AC4090;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
loc_82AC4090:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r7,r11,22,21,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x7FF;
	// rlwinm r5,r11,11,21,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x7FF;
	// ori r4,r4,597
	ctx.r4.u64 = ctx.r4.u64 | 597;
	// bl 0x82d042a8
	ctx.lr = 0x82AC40AC;
	sub_82D042A8(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82ac40c0
	if (!cr6.lt) goto loc_82AC40C0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_82AC40C0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC40C4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac40c4
	if (!cr6.eq) goto loc_82AC40C4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC40E8;
	sub_825A1EB8(ctx, base);
	// lwz r4,-11504(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC40F0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac40f0
	if (!cr6.eq) goto loc_82AC40F0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC4114;
	sub_825A1EB8(ctx, base);
	// lwz r4,-11504(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC411C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac411c
	if (!cr6.eq) goto loc_82AC411C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC4140;
	sub_825A1EB8(ctx, base);
	// lis r4,641
	ctx.r4.s64 = 42008576;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,183
	ctx.r4.u64 = ctx.r4.u64 | 183;
	// bl 0x82d042a8
	ctx.lr = 0x82AC4150;
	sub_82D042A8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82ac4164
	if (!cr6.lt) goto loc_82AC4164;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82AC4164:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC4168:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac4168
	if (!cr6.eq) goto loc_82AC4168;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC418C;
	sub_825A1EB8(ctx, base);
	// lwz r4,-11504(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC4194:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac4194
	if (!cr6.eq) goto loc_82AC4194;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC41B8;
	sub_825A1EB8(ctx, base);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r5,r10,12,20,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// bl 0x82d042a8
	ctx.lr = 0x82AC41CC;
	sub_82D042A8(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82ac41e0
	if (!cr6.lt) goto loc_82AC41E0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82AC41E0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC41E4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac41e4
	if (!cr6.eq) goto loc_82AC41E4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC4208;
	sub_825A1EB8(ctx, base);
	// lwz r4,-11504(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC4210:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac4210
	if (!cr6.eq) goto loc_82AC4210;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC4234;
	sub_825A1EB8(ctx, base);
	// lwz r4,-11504(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC423C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac423c
	if (!cr6.eq) goto loc_82AC423C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC4260;
	sub_825A1EB8(ctx, base);
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,46
	ctx.r4.u64 = ctx.r4.u64 | 46;
	// bl 0x82d042a8
	ctx.lr = 0x82AC4270;
	sub_82D042A8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82ac4284
	if (!cr6.lt) goto loc_82AC4284;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82AC4284:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC4288:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac4288
	if (!cr6.eq) goto loc_82AC4288;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC42AC;
	sub_825A1EB8(ctx, base);
	// lwz r4,-11504(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC42B4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac42b4
	if (!cr6.eq) goto loc_82AC42B4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC42D8;
	sub_825A1EB8(ctx, base);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r5,r10,24,20,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFF;
	// bl 0x82d042a8
	ctx.lr = 0x82AC42EC;
	sub_82D042A8(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82ac4300
	if (!cr6.lt) goto loc_82AC4300;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82AC4300:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC4304:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac4304
	if (!cr6.eq) goto loc_82AC4304;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC4328;
	sub_825A1EB8(ctx, base);
	// lwz r4,-11504(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC4330:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac4330
	if (!cr6.eq) goto loc_82AC4330;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC4354;
	sub_825A1EB8(ctx, base);
	// lwz r4,-11504(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC435C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac435c
	if (!cr6.eq) goto loc_82AC435C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC4380;
	sub_825A1EB8(ctx, base);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,26
	ctx.r4.u64 = ctx.r4.u64 | 26;
	// bl 0x82d042a8
	ctx.lr = 0x82AC4390;
	sub_82D042A8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82ac43a4
	if (!cr6.lt) goto loc_82AC43A4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82AC43A4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC43A8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac43a8
	if (!cr6.eq) goto loc_82AC43A8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC43CC;
	sub_825A1EB8(ctx, base);
	// lwz r4,-11504(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC43D4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac43d4
	if (!cr6.eq) goto loc_82AC43D4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC43F8;
	sub_825A1EB8(ctx, base);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r5,r10,22,22,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x3FF;
	// bl 0x82d042a8
	ctx.lr = 0x82AC440C;
	sub_82D042A8(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82ac4420
	if (!cr6.lt) goto loc_82AC4420;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82AC4420:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC4424:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac4424
	if (!cr6.eq) goto loc_82AC4424;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC4448;
	sub_825A1EB8(ctx, base);
	// lwz r4,-11504(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC4450:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac4450
	if (!cr6.eq) goto loc_82AC4450;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC4474;
	sub_825A1EB8(ctx, base);
	// lwz r4,-11504(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC447C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac447c
	if (!cr6.eq) goto loc_82AC447C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC44A0;
	sub_825A1EB8(ctx, base);
	// stw r25,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r25.u32);
	// stw r25,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r25.u32);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// stw r25,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r25.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ac3e38
	ctx.lr = 0x82AC44B8;
	sub_82AC3E38(ctx, base);
	// lwz r28,256(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r30,260(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, xer);
	// beq cr6,0x82ac4540
	if (cr6.eq) goto loc_82AC4540;
	// lis r4,641
	ctx.r4.s64 = 42008576;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,247
	ctx.r4.u64 = ctx.r4.u64 | 247;
	// bl 0x82d042a8
	ctx.lr = 0x82AC44D8;
	sub_82D042A8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ac44ec
	if (!cr6.lt) goto loc_82AC44EC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82AC44EC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC44F0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac44f0
	if (!cr6.eq) goto loc_82AC44F0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC4514;
	sub_825A1EB8(ctx, base);
	// lwz r4,-11504(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC451C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac451c
	if (!cr6.eq) goto loc_82AC451C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC4540;
	sub_825A1EB8(ctx, base);
loc_82AC4540:
	// subf r11,r28,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r28.s64;
	// li r27,2
	ctx.r27.s64 = 2;
	// srawi. r11,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82ac463c
	if (cr0.eq) goto loc_82AC463C;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82AC4558:
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lhz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// bl 0x8311c338
	ctx.lr = 0x82AC4568;
	sub_8311C338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83125548
	ctx.lr = 0x82AC4578;
	sub_83125548(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ac458c
	if (cr6.lt) goto loc_82AC458C;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ac4590
	goto loc_82AC4590;
loc_82AC458C:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82AC4590:
	// lis r4,279
	ctx.r4.s64 = 18284544;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,775
	ctx.r4.u64 = ctx.r4.u64 | 775;
	// bl 0x82d042a8
	ctx.lr = 0x82AC45A0;
	sub_82D042A8(ctx, base);
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ac45bc
	if (cr6.lt) goto loc_82AC45BC;
	// stw r27,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r27.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x825952b8
	ctx.lr = 0x82AC45BC;
	sub_825952B8(ctx, base);
loc_82AC45BC:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r24,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r24.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r25,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r25.u32);
	// stb r25,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r25.u8);
	// bge cr6,0x82ac45dc
	if (!cr6.lt) goto loc_82AC45DC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82AC45DC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC45E0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac45e0
	if (!cr6.eq) goto loc_82AC45E0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC4604;
	sub_825A1EB8(ctx, base);
	// lwz r4,-11504(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC460C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac460c
	if (!cr6.eq) goto loc_82AC460C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC4630;
	sub_825A1EB8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// bne 0x82ac4558
	if (!cr0.eq) goto loc_82AC4558;
loc_82AC463C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82ac4654
	if (cr6.eq) goto loc_82AC4654;
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x825952b8
	ctx.lr = 0x82AC4654;
	sub_825952B8(ctx, base);
loc_82AC4654:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ac4670
	if (cr6.lt) goto loc_82AC4670;
	// stw r27,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r27.u32);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x82AC4670;
	sub_825952B8(ctx, base);
loc_82AC4670:
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// stw r24,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r24.u32);
	// stw r25,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r25.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r25,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r25.u8);
	// blt cr6,0x82ac4698
	if (cr6.lt) goto loc_82AC4698;
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x82AC4698;
	sub_825952B8(ctx, base);
loc_82AC4698:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r24,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r24.u32);
	// stw r25,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r25.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r25,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r25.u8);
	// blt cr6,0x82ac46c0
	if (cr6.lt) goto loc_82AC46C0;
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82AC46C0;
	sub_825952B8(ctx, base);
loc_82AC46C0:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r24,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r24.u32);
	// stw r25,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r25.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r25,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r25.u8);
	// blt cr6,0x82ac46e8
	if (cr6.lt) goto loc_82AC46E8;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82AC46E8;
	sub_825952B8(ctx, base);
loc_82AC46E8:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC46F0"))) PPC_WEAK_FUNC(sub_82AC46F0);
PPC_FUNC_IMPL(__imp__sub_82AC46F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82AC46F8;
	__savegprlr_23(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r23,15
	ctx.r23.s64 = 15;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stb r25,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r25.u8);
	// bl 0x831156e8
	ctx.lr = 0x82AC471C;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r4,59
	ctx.r4.s64 = 3866624;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,22
	ctx.r4.u64 = ctx.r4.u64 | 22;
	// lwz r24,48(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82d042a8
	ctx.lr = 0x82AC4734;
	sub_82D042A8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82ac4748
	if (!cr6.lt) goto loc_82AC4748;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82AC4748:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC474C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac474c
	if (!cr6.eq) goto loc_82AC474C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC4770;
	sub_825A1EB8(ctx, base);
	// addis r11,r24,222
	ctx.r11.s64 = ctx.r24.s64 + 14548992;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,26340
	ctx.r11.s64 = ctx.r11.s64 + 26340;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r4,r11,3716
	ctx.r4.s64 = ctx.r11.s64 + 3716;
	// bl 0x831ce980
	ctx.lr = 0x82AC4788;
	sub_831CE980(ctx, base);
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r11,-11420(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11420);
	// xor r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r7,r8,0,0,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82ac47b8
	if (!cr6.eq) goto loc_82AC47B8;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ac47bc
	if (cr6.eq) goto loc_82AC47BC;
loc_82AC47B8:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82AC47BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ac4800
	if (!cr6.eq) goto loc_82AC4800;
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r6,208(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// lwz r10,164(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// rlwinm r8,r11,24,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFF;
	// lwz r11,168(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 168);
	// lwz r7,172(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// rlwinm r6,r6,22,22,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 22) & 0x3FF;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stw r5,164(r29)
	PPC_STORE_U32(ctx.r29.u32 + 164, ctx.r5.u32);
	// stw r4,168(r29)
	PPC_STORE_U32(ctx.r29.u32 + 168, ctx.r4.u32);
	// stw r3,172(r29)
	PPC_STORE_U32(ctx.r29.u32 + 172, ctx.r3.u32);
loc_82AC4800:
	// li r31,3
	ctx.r31.s64 = 3;
	// lis r26,-31777
	ctx.r26.s64 = -2082537472;
loc_82AC4808:
	// lwz r4,-11504(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC4810:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac4810
	if (!cr6.eq) goto loc_82AC4810;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC4834;
	sub_825A1EB8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82ac4808
	if (!cr0.eq) goto loc_82AC4808;
	// lis r4,641
	ctx.r4.s64 = 42008576;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,183
	ctx.r4.u64 = ctx.r4.u64 | 183;
	// bl 0x82d042a8
	ctx.lr = 0x82AC484C;
	sub_82D042A8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ac4860
	if (!cr6.lt) goto loc_82AC4860;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82AC4860:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC4864:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac4864
	if (!cr6.eq) goto loc_82AC4864;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC4888;
	sub_825A1EB8(ctx, base);
	// lwz r4,-11504(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC4890:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac4890
	if (!cr6.eq) goto loc_82AC4890;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC48B4;
	sub_825A1EB8(ctx, base);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,164(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// bl 0x82d042a8
	ctx.lr = 0x82AC48C4;
	sub_82D042A8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82ac48d8
	if (!cr6.lt) goto loc_82AC48D8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82AC48D8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC48DC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac48dc
	if (!cr6.eq) goto loc_82AC48DC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC4900;
	sub_825A1EB8(ctx, base);
	// lwz r4,-11504(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC4908:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac4908
	if (!cr6.eq) goto loc_82AC4908;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC492C;
	sub_825A1EB8(ctx, base);
	// lwz r4,-11504(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC4934:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac4934
	if (!cr6.eq) goto loc_82AC4934;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC4958;
	sub_825A1EB8(ctx, base);
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,46
	ctx.r4.u64 = ctx.r4.u64 | 46;
	// bl 0x82d042a8
	ctx.lr = 0x82AC4968;
	sub_82D042A8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82ac497c
	if (!cr6.lt) goto loc_82AC497C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82AC497C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC4980:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac4980
	if (!cr6.eq) goto loc_82AC4980;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC49A4;
	sub_825A1EB8(ctx, base);
	// lwz r4,-11504(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC49AC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac49ac
	if (!cr6.eq) goto loc_82AC49AC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC49D0;
	sub_825A1EB8(ctx, base);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,168(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 168);
	// bl 0x82d042a8
	ctx.lr = 0x82AC49E0;
	sub_82D042A8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82ac49f4
	if (!cr6.lt) goto loc_82AC49F4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82AC49F4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC49F8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac49f8
	if (!cr6.eq) goto loc_82AC49F8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC4A1C;
	sub_825A1EB8(ctx, base);
	// lwz r4,-11504(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC4A24:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac4a24
	if (!cr6.eq) goto loc_82AC4A24;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC4A48;
	sub_825A1EB8(ctx, base);
	// lwz r4,-11504(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC4A50:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac4a50
	if (!cr6.eq) goto loc_82AC4A50;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC4A74;
	sub_825A1EB8(ctx, base);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,26
	ctx.r4.u64 = ctx.r4.u64 | 26;
	// bl 0x82d042a8
	ctx.lr = 0x82AC4A84;
	sub_82D042A8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82ac4a98
	if (!cr6.lt) goto loc_82AC4A98;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82AC4A98:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC4A9C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac4a9c
	if (!cr6.eq) goto loc_82AC4A9C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC4AC0;
	sub_825A1EB8(ctx, base);
	// lwz r4,-11504(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC4AC8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac4ac8
	if (!cr6.eq) goto loc_82AC4AC8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC4AEC;
	sub_825A1EB8(ctx, base);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,172(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// bl 0x82d042a8
	ctx.lr = 0x82AC4AFC;
	sub_82D042A8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82ac4b10
	if (!cr6.lt) goto loc_82AC4B10;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82AC4B10:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC4B14:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac4b14
	if (!cr6.eq) goto loc_82AC4B14;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC4B38;
	sub_825A1EB8(ctx, base);
	// lwz r4,-11504(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC4B40:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac4b40
	if (!cr6.eq) goto loc_82AC4B40;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC4B64;
	sub_825A1EB8(ctx, base);
	// lwz r4,-11504(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC4B6C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac4b6c
	if (!cr6.eq) goto loc_82AC4B6C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC4B90;
	sub_825A1EB8(ctx, base);
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// stw r25,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r25.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r25,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r25.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82ac3e38
	ctx.lr = 0x82AC4BA8;
	sub_82AC3E38(ctx, base);
	// lwz r27,144(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r31,148(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplw cr6,r27,r31
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r31.u32, xer);
	// beq cr6,0x82ac4c30
	if (cr6.eq) goto loc_82AC4C30;
	// lis r4,641
	ctx.r4.s64 = 42008576;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,247
	ctx.r4.u64 = ctx.r4.u64 | 247;
	// bl 0x82d042a8
	ctx.lr = 0x82AC4BC8;
	sub_82D042A8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ac4bdc
	if (!cr6.lt) goto loc_82AC4BDC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82AC4BDC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC4BE0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac4be0
	if (!cr6.eq) goto loc_82AC4BE0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC4C04;
	sub_825A1EB8(ctx, base);
	// lwz r4,-11504(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC4C0C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac4c0c
	if (!cr6.eq) goto loc_82AC4C0C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC4C30;
	sub_825A1EB8(ctx, base);
loc_82AC4C30:
	// subf r11,r27,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r27.s64;
	// li r28,2
	ctx.r28.s64 = 2;
	// srawi. r11,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82ac4d2c
	if (cr0.eq) goto loc_82AC4D2C;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82AC4C48:
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// bl 0x8311c338
	ctx.lr = 0x82AC4C58;
	sub_8311C338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83125548
	ctx.lr = 0x82AC4C68;
	sub_83125548(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ac4c7c
	if (cr6.lt) goto loc_82AC4C7C;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ac4c80
	goto loc_82AC4C80;
loc_82AC4C7C:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82AC4C80:
	// lis r4,279
	ctx.r4.s64 = 18284544;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,775
	ctx.r4.u64 = ctx.r4.u64 | 775;
	// bl 0x82d042a8
	ctx.lr = 0x82AC4C90;
	sub_82D042A8(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ac4cac
	if (cr6.lt) goto loc_82AC4CAC;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82AC4CAC;
	sub_825952B8(ctx, base);
loc_82AC4CAC:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r23,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r23.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r25,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r25.u32);
	// stb r25,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r25.u8);
	// bge cr6,0x82ac4ccc
	if (!cr6.lt) goto loc_82AC4CCC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82AC4CCC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC4CD0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac4cd0
	if (!cr6.eq) goto loc_82AC4CD0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC4CF4;
	sub_825A1EB8(ctx, base);
	// lwz r4,-11504(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC4CFC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac4cfc
	if (!cr6.eq) goto loc_82AC4CFC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC4D20;
	sub_825A1EB8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// bne 0x82ac4c48
	if (!cr0.eq) goto loc_82AC4C48;
loc_82AC4D2C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82ac4d44
	if (cr6.eq) goto loc_82AC4D44;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825952b8
	ctx.lr = 0x82AC4D44;
	sub_825952B8(ctx, base);
loc_82AC4D44:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ac4d60
	if (cr6.lt) goto loc_82AC4D60;
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82AC4D60;
	sub_825952B8(ctx, base);
loc_82AC4D60:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC4D68"))) PPC_WEAK_FUNC(sub_82AC4D68);
PPC_FUNC_IMPL(__imp__sub_82AC4D68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82AC4D70;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x831156e8
	ctx.lr = 0x82AC4D88;
	sub_831156E8(ctx, base);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r27,-31777
	ctx.r27.s64 = -2082537472;
	// cmplwi cr6,r31,9
	cr6.compare<uint32_t>(ctx.r31.u32, 9, xer);
	// bgt cr6,0x82ac5154
	if (cr6.gt) goto loc_82AC5154;
	// lis r12,-32084
	ctx.r12.s64 = -2102657024;
	// rlwinm r0,r31,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,19888
	ctx.r12.s64 = ctx.r12.s64 + 19888;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r31.u32) {
	case 0:
		goto loc_82AC4DD8;
	case 1:
		goto loc_82AC4E18;
	case 2:
		goto loc_82AC4EBC;
	case 3:
		goto loc_82AC4F50;
	case 4:
		goto loc_82AC4F70;
	case 5:
		goto loc_82AC4FB8;
	case 6:
		goto loc_82AC506C;
	case 7:
		goto loc_82AC50DC;
	case 8:
		goto loc_82AC5138;
	case 9:
		goto loc_82AC5148;
	default:
		return;
	}
	// lwz r21,19928(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + 19928);
	// lwz r21,19992(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + 19992);
	// lwz r21,20156(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + 20156);
	// lwz r21,20304(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + 20304);
	// lwz r21,20336(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + 20336);
	// lwz r21,20408(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + 20408);
	// lwz r21,20588(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + 20588);
	// lwz r21,20700(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + 20700);
	// lwz r21,20792(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + 20792);
	// lwz r21,20808(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + 20808);
loc_82AC4DD8:
	// lis r11,228
	ctx.r11.s64 = 14942208;
	// ori r10,r11,42280
	ctx.r10.u64 = ctx.r11.u64 | 42280;
	// ldx r4,r3,r10
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + ctx.r10.u32);
	// bl 0x8311bf98
	ctx.lr = 0x82AC4DE8;
	sub_8311BF98(ctx, base);
	// addi r4,r3,56
	ctx.r4.s64 = ctx.r3.s64 + 56;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC4DF0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac4df0
	if (!cr6.eq) goto loc_82AC4DF0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82AC4E14;
	sub_8259CC28(ctx, base);
	// b 0x82ac5154
	goto loc_82AC5154;
loc_82AC4E18:
	// li r31,12
	ctx.r31.s64 = 12;
loc_82AC4E1C:
	// lwz r4,-11504(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC4E24:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac4e24
	if (!cr6.eq) goto loc_82AC4E24;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC4E48;
	sub_825A1EB8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82ac4e1c
	if (!cr0.eq) goto loc_82AC4E1C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,29315
	ctx.r11.s64 = ctx.r11.s64 + 29315;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x837b0c10
	ctx.lr = 0x82AC4E64;
	sub_837B0C10(ctx, base);
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,170
	ctx.r4.u64 = ctx.r4.u64 | 170;
	// bl 0x82d04220
	ctx.lr = 0x82AC4E74;
	sub_82D04220(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82ac4e88
	if (!cr6.lt) goto loc_82AC4E88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82AC4E88:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC4E8C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac4e8c
	if (!cr6.eq) goto loc_82AC4E8C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC4EB0;
	sub_825A1EB8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82AC4EB8;
	sub_8387E8E0(ctx, base);
	// b 0x82ac5154
	goto loc_82AC5154;
loc_82AC4EBC:
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// ori r10,r11,46613
	ctx.r10.u64 = ctx.r11.u64 | 46613;
	// lbzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ac5154
	if (!cr6.eq) goto loc_82AC5154;
	// li r31,8
	ctx.r31.s64 = 8;
loc_82AC4ED4:
	// lwz r4,-11504(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC4EDC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac4edc
	if (!cr6.eq) goto loc_82AC4EDC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC4F00;
	sub_825A1EB8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82ac4ed4
	if (!cr0.eq) goto loc_82AC4ED4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ac32e8
	ctx.lr = 0x82AC4F14;
	sub_82AC32E8(ctx, base);
	// li r31,8
	ctx.r31.s64 = 8;
loc_82AC4F18:
	// lwz r4,-11504(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC4F20:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac4f20
	if (!cr6.eq) goto loc_82AC4F20;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC4F44;
	sub_825A1EB8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82ac4f18
	if (!cr0.eq) goto loc_82AC4F18;
	// b 0x82ac5154
	goto loc_82AC5154;
loc_82AC4F50:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ac3f18
	ctx.lr = 0x82AC4F60;
	sub_82AC3F18(ctx, base);
	// lwz r11,140(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 140);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,140(r28)
	PPC_STORE_U32(ctx.r28.u32 + 140, ctx.r11.u32);
	// b 0x82ac5154
	goto loc_82AC5154;
loc_82AC4F70:
	// li r31,8
	ctx.r31.s64 = 8;
loc_82AC4F74:
	// lwz r4,-11504(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC4F7C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac4f7c
	if (!cr6.eq) goto loc_82AC4F7C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC4FA0;
	sub_825A1EB8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82ac4f74
	if (!cr0.eq) goto loc_82AC4F74;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ac2820
	ctx.lr = 0x82AC4FB4;
	sub_82AC2820(ctx, base);
	// b 0x82ac5154
	goto loc_82AC5154;
loc_82AC4FB8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ac1ca0
	ctx.lr = 0x82AC4FC0;
	sub_82AC1CA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac5154
	if (cr6.eq) goto loc_82AC5154;
	// li r31,8
	ctx.r31.s64 = 8;
loc_82AC4FD0:
	// lwz r4,-11504(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC4FD8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac4fd8
	if (!cr6.eq) goto loc_82AC4FD8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC4FFC;
	sub_825A1EB8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82ac4fd0
	if (!cr0.eq) goto loc_82AC4FD0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,29315
	ctx.r4.s64 = ctx.r11.s64 + 29315;
	// bl 0x837b0c10
	ctx.lr = 0x82AC5014;
	sub_837B0C10(ctx, base);
	// lis r4,641
	ctx.r4.s64 = 42008576;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ori r4,r4,28
	ctx.r4.u64 = ctx.r4.u64 | 28;
	// bl 0x82d04220
	ctx.lr = 0x82AC5024;
	sub_82D04220(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82ac5038
	if (!cr6.lt) goto loc_82AC5038;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_82AC5038:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC503C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac503c
	if (!cr6.eq) goto loc_82AC503C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC5060;
	sub_825A1EB8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82AC5068;
	sub_8387E8E0(ctx, base);
	// b 0x82ac5154
	goto loc_82AC5154;
loc_82AC506C:
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// ori r10,r11,46613
	ctx.r10.u64 = ctx.r11.u64 | 46613;
	// lbzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ac5154
	if (!cr6.eq) goto loc_82AC5154;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ac1ca0
	ctx.lr = 0x82AC5088;
	sub_82AC1CA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac5154
	if (cr6.eq) goto loc_82AC5154;
	// li r31,8
	ctx.r31.s64 = 8;
loc_82AC5098:
	// lwz r4,-11504(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC50A0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac50a0
	if (!cr6.eq) goto loc_82AC50A0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC50C4;
	sub_825A1EB8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82ac5098
	if (!cr0.eq) goto loc_82AC5098;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ac3680
	ctx.lr = 0x82AC50D8;
	sub_82AC3680(ctx, base);
	// b 0x82ac5154
	goto loc_82AC5154;
loc_82AC50DC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ac1ca0
	ctx.lr = 0x82AC50E4;
	sub_82AC1CA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac5154
	if (cr6.eq) goto loc_82AC5154;
	// li r31,8
	ctx.r31.s64 = 8;
loc_82AC50F4:
	// lwz r4,-11504(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC50FC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac50fc
	if (!cr6.eq) goto loc_82AC50FC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC5120;
	sub_825A1EB8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82ac50f4
	if (!cr0.eq) goto loc_82AC50F4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ac46f0
	ctx.lr = 0x82AC5134;
	sub_82AC46F0(ctx, base);
	// b 0x82ac5154
	goto loc_82AC5154;
loc_82AC5138:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ac3a18
	ctx.lr = 0x82AC5144;
	sub_82AC3A18(ctx, base);
	// b 0x82ac5154
	goto loc_82AC5154;
loc_82AC5148:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ac2cf8
	ctx.lr = 0x82AC5154;
	sub_82AC2CF8(ctx, base);
loc_82AC5154:
	// lwz r4,-11504(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11504);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC515C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac515c
	if (!cr6.eq) goto loc_82AC515C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82AC5180;
	sub_825A1EB8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC5188"))) PPC_WEAK_FUNC(sub_82AC5188);
PPC_FUNC_IMPL(__imp__sub_82AC5188) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82AC5190;
	__savegprlr_29(ctx, base);
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
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// addi r4,r3,140
	ctx.r4.s64 = ctx.r3.s64 + 140;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ac4d68
	ctx.lr = 0x82AC51C8;
	sub_82AC4D68(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82AC51DC;
	sub_8259CB28(ctx, base);
	// lwz r6,140(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,-8340(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8340);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,84(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 84, temp.u32);
	// bge cr6,0x82ac5214
	if (!cr6.lt) goto loc_82AC5214;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_82AC5214:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ac3d20
	ctx.lr = 0x82AC5224;
	sub_82AC3D20(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// blt cr6,0x82ac5250
	if (cr6.lt) goto loc_82AC5250;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82AC5250;
	sub_825952B8(ctx, base);
loc_82AC5250:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC5258"))) PPC_WEAK_FUNC(sub_82AC5258);
PPC_FUNC_IMPL(__imp__sub_82AC5258) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82AC5260;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,712
	ctx.r11.s64 = 46661632;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,22795
	ctx.r10.u64 = ctx.r11.u64 | 22795;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82ac5284
	if (!cr6.gt) goto loc_82AC5284;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82AC5284;
	sub_831CC150(ctx, base);
loc_82AC5284:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r24,92
	ctx.r24.s64 = 92;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r24
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r24.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x82ac5344
	if (!cr6.lt) goto loc_82AC5344;
	// li r25,2
	ctx.r25.s64 = 2;
	// mulli r26,r4,92
	ctx.r26.s64 = ctx.r4.s64 * 92;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82AC52BC;
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
	// beq cr6,0x82ac52f8
	if (cr6.eq) goto loc_82AC52F8;
loc_82AC52D4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82ac52e8
	if (cr6.eq) goto loc_82AC52E8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ac2770
	ctx.lr = 0x82AC52E8;
	sub_82AC2770(ctx, base);
loc_82AC52E8:
	// addi r30,r30,92
	ctx.r30.s64 = ctx.r30.s64 + 92;
	// addi r29,r29,92
	ctx.r29.s64 = ctx.r29.s64 + 92;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// bne cr6,0x82ac52d4
	if (!cr6.eq) goto loc_82AC52D4;
loc_82AC52F8:
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
	// beq cr6,0x82ac532c
	if (cr6.eq) goto loc_82AC532C;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82ac3258
	ctx.lr = 0x82AC531C;
	sub_82AC3258(ctx, base);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82AC532C;
	sub_825952B8(ctx, base);
loc_82AC532C:
	// mulli r11,r30,92
	ctx.r11.s64 = ctx.r30.s64 * 92;
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
loc_82AC5344:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC534C"))) PPC_WEAK_FUNC(sub_82AC534C);
PPC_FUNC_IMPL(__imp__sub_82AC534C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC5350"))) PPC_WEAK_FUNC(sub_82AC5350);
PPC_FUNC_IMPL(__imp__sub_82AC5350) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,712
	ctx.r10.s64 = 46661632;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,92
	ctx.r9.s64 = 92;
	// ori r8,r10,22795
	ctx.r8.u64 = ctx.r10.u64 | 22795;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ac5384
	if (!cr6.lt) goto loc_82AC5384;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82AC5384:
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
	// blt cr6,0x82ac53b4
	if (cr6.lt) goto loc_82AC53B4;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82AC53B4:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ac53c0
	if (!cr6.lt) goto loc_82AC53C0;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82AC53C0:
	// b 0x82ac5258
	sub_82AC5258(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC53C4"))) PPC_WEAK_FUNC(sub_82AC53C4);
PPC_FUNC_IMPL(__imp__sub_82AC53C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC53C8"))) PPC_WEAK_FUNC(sub_82AC53C8);
PPC_FUNC_IMPL(__imp__sub_82AC53C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82AC53D0;
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
	ctx.lr = 0x82AC53E4;
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
	ctx.lr = 0x82AC53FC;
	sub_82D253F8(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r10,30320
	ctx.r7.s64 = ctx.r10.s64 + 30320;
	// addi r6,r9,-17088
	ctx.r6.s64 = ctx.r9.s64 + -17088;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r4,40
	ctx.r4.s64 = 40;
	// stw r6,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r6.u32);
	// li r3,-216
	ctx.r3.s64 = -216;
	// stw r5,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r5.u32);
	// stw r4,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r4.u32);
	// lfs f0,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// lis r30,-31777
	ctx.r30.s64 = -2082537472;
	// std r11,112(r31)
	PPC_STORE_U64(ctx.r31.u32 + 112, ctx.r11.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// addi r10,r30,-11640
	ctx.r10.s64 = ctx.r30.s64 + -11640;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82d20ae0
	ctx.lr = 0x82AC5488;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,-11640(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11640);
	// bl 0x82d23390
	ctx.lr = 0x82AC5498;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC54A4"))) PPC_WEAK_FUNC(sub_82AC54A4);
PPC_FUNC_IMPL(__imp__sub_82AC54A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC54A8"))) PPC_WEAK_FUNC(sub_82AC54A8);
PPC_FUNC_IMPL(__imp__sub_82AC54A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,30320
	ctx.r9.s64 = ctx.r11.s64 + 30320;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r31,r3,124
	ctx.r31.s64 = ctx.r3.s64 + 124;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// lwz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac550c
	if (cr6.eq) goto loc_82AC550C;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82ac3258
	ctx.lr = 0x82AC54F8;
	sub_82AC3258(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82AC550C;
	sub_825952B8(ctx, base);
loc_82AC550C:
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
	ctx.lr = 0x82AC5524;
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

__attribute__((alias("__imp__sub_82AC553C"))) PPC_WEAK_FUNC(sub_82AC553C);
PPC_FUNC_IMPL(__imp__sub_82AC553C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC5540"))) PPC_WEAK_FUNC(sub_82AC5540);
PPC_FUNC_IMPL(__imp__sub_82AC5540) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82ac54a8
	ctx.lr = 0x82AC5560;
	sub_82AC54A8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac5578
	if (cr6.eq) goto loc_82AC5578;
	// bl 0x82416268
	ctx.lr = 0x82AC5574;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AC5578:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC5590"))) PPC_WEAK_FUNC(sub_82AC5590);
PPC_FUNC_IMPL(__imp__sub_82AC5590) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bge cr6,0x82ac55c8
	if (!cr6.lt) goto loc_82AC55C8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82ac55cc
	if (!cr6.gt) goto loc_82AC55CC;
loc_82AC55C8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82AC55CC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ac561c
	if (cr6.eq) goto loc_82AC561C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,92
	ctx.r9.s64 = 92;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x82ac5600
	if (!cr6.eq) goto loc_82AC5600;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ac5350
	ctx.lr = 0x82AC5600;
	sub_82AC5350(ctx, base);
loc_82AC5600:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac5648
	if (cr6.eq) goto loc_82AC5648;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,92
	ctx.r11.s64 = ctx.r30.s64 * 92;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82ac5644
	goto loc_82AC5644;
loc_82AC561C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ac5634
	if (!cr6.eq) goto loc_82AC5634;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ac5350
	ctx.lr = 0x82AC5634;
	sub_82AC5350(ctx, base);
loc_82AC5634:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac5648
	if (cr6.eq) goto loc_82AC5648;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82AC5644:
	// bl 0x82ac2770
	ctx.lr = 0x82AC5648;
	sub_82AC2770(ctx, base);
loc_82AC5648:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,92
	ctx.r11.s64 = ctx.r11.s64 + 92;
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

__attribute__((alias("__imp__sub_82AC566C"))) PPC_WEAK_FUNC(sub_82AC566C);
PPC_FUNC_IMPL(__imp__sub_82AC566C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC5670"))) PPC_WEAK_FUNC(sub_82AC5670);
PPC_FUNC_IMPL(__imp__sub_82AC5670) {
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
	ctx.lr = 0x82AC5678;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82AC5688;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r3,r11,222
	ctx.r3.s64 = ctx.r11.s64 + 14548992;
	// addi r3,r3,26340
	ctx.r3.s64 = ctx.r3.s64 + 26340;
	// bl 0x82ac1a78
	ctx.lr = 0x82AC5698;
	sub_82AC1A78(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// lfs f31,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// li r28,15
	ctx.r28.s64 = 15;
	// li r22,2
	ctx.r22.s64 = 2;
	// lis r24,-31777
	ctx.r24.s64 = -2082537472;
	// addi r25,r11,-22544
	ctx.r25.s64 = ctx.r11.s64 + -22544;
loc_82AC56C0:
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82AC56DC;
	sub_8259CC28(ctx, base);
	// lwz r11,-11420(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -11420);
	// stfs f31,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// cmplwi cr6,r27,3
	cr6.compare<uint32_t>(ctx.r27.u32, 3, xer);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stb r31,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r31.u8);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stw r28,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r28.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stb r31,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r31.u8);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// bne cr6,0x82ac5750
	if (!cr6.eq) goto loc_82AC5750;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x82ac5788
	if (cr6.eq) goto loc_82AC5788;
	// addi r29,r26,124
	ctx.r29.s64 = ctx.r26.s64 + 124;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_82AC5728:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ac5188
	ctx.lr = 0x82AC5738;
	sub_82AC5188(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ac5590
	ctx.lr = 0x82AC5744;
	sub_82AC5590(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x82ac5728
	if (!cr0.eq) goto loc_82AC5728;
	// b 0x82ac576c
	goto loc_82AC576C;
loc_82AC5750:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ac5188
	ctx.lr = 0x82AC5760;
	sub_82AC5188(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r26,124
	ctx.r3.s64 = ctx.r26.s64 + 124;
	// bl 0x82ac5590
	ctx.lr = 0x82AC576C;
	sub_82AC5590(ctx, base);
loc_82AC576C:
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ac5788
	if (cr6.lt) goto loc_82AC5788;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x825952b8
	ctx.lr = 0x82AC5788;
	sub_825952B8(ctx, base);
loc_82AC5788:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r28,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r28.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r31.u8);
	// blt cr6,0x82ac57b0
	if (cr6.lt) goto loc_82AC57B0;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82AC57B0;
	sub_825952B8(ctx, base);
loc_82AC57B0:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r27,10
	cr6.compare<uint32_t>(ctx.r27.u32, 10, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x82ac56c0
	if (cr6.lt) goto loc_82AC56C0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ac1f00
	ctx.lr = 0x82AC57D0;
	sub_82AC1F00(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82AC57D8;
	sub_82D19A68(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r30,r3,100
	ctx.r30.s64 = ctx.r3.s64 + 100;
	// addi r11,r11,-11632
	ctx.r11.s64 = ctx.r11.s64 + -11632;
	// li r31,32
	ctx.r31.s64 = 32;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_82AC57EC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzu r4,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AC5804;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82AC5810;
	sub_82D2AEC8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82ac57ec
	if (!cr0.eq) goto loc_82AC57EC;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// li r29,5
	ctx.r29.s64 = 5;
	// addi r31,r11,-11368
	ctx.r31.s64 = ctx.r11.s64 + -11368;
loc_82AC5824:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ac5838
	if (cr6.lt) goto loc_82AC5838;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82ac583c
	goto loc_82AC583C;
loc_82AC5838:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82AC583C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AC5850;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82AC585C;
	sub_82D2AEC8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// bne 0x82ac5824
	if (!cr0.eq) goto loc_82AC5824;
	// lwz r11,108(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 108);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,360
	ctx.r11.s64 = ctx.r11.s64 + 360;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,108(r26)
	PPC_STORE_U32(ctx.r26.u32 + 108, ctx.r11.u32);
	// bl 0x82d19788
	ctx.lr = 0x82AC5884;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19788
	ctx.lr = 0x82AC5894;
	sub_82D19788(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83102db0
	ctx.lr = 0x82AC58A0;
	sub_83102DB0(ctx, base);
	// bl 0x82d14ce8
	ctx.lr = 0x82AC58A4;
	sub_82D14CE8(ctx, base);
	// bl 0x82d130b8
	ctx.lr = 0x82AC58A8;
	sub_82D130B8(ctx, base);
	// bl 0x82d26640
	ctx.lr = 0x82AC58AC;
	sub_82D26640(ctx, base);
	// bl 0x82d25ab8
	ctx.lr = 0x82AC58B0;
	sub_82D25AB8(ctx, base);
	// bl 0x82d26ed8
	ctx.lr = 0x82AC58B4;
	sub_82D26ED8(ctx, base);
	// li r4,23
	ctx.r4.s64 = 23;
	// bl 0x82d26900
	ctx.lr = 0x82AC58BC;
	sub_82D26900(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC58CC"))) PPC_WEAK_FUNC(sub_82AC58CC);
PPC_FUNC_IMPL(__imp__sub_82AC58CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC58D0"))) PPC_WEAK_FUNC(sub_82AC58D0);
PPC_FUNC_IMPL(__imp__sub_82AC58D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x82ac58f8
	if (cr6.lt) goto loc_82AC58F8;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ac58fc
	goto loc_82AC58FC;
loc_82AC58F8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82AC58FC:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,176
	ctx.r4.s64 = 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82AC5918;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac5934
	if (cr6.eq) goto loc_82AC5934;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ac53c8
	ctx.lr = 0x82AC592C;
	sub_82AC53C8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ac5938
	if (!cr6.eq) goto loc_82AC5938;
loc_82AC5934:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AC5938:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC5950"))) PPC_WEAK_FUNC(sub_82AC5950);
PPC_FUNC_IMPL(__imp__sub_82AC5950) {
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
	ctx.lr = 0x82AC5968;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lbz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// addis r10,r11,229
	ctx.r10.s64 = ctx.r11.s64 + 15007744;
	// addis r3,r11,222
	ctx.r3.s64 = ctx.r11.s64 + 14548992;
	// addi r10,r10,-23256
	ctx.r10.s64 = ctx.r10.s64 + -23256;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r3,r3,26344
	ctx.r3.s64 = ctx.r3.s64 + 26344;
	// bne cr6,0x82ac5994
	if (!cr6.eq) goto loc_82AC5994;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x82AC5994;
	sub_8311BF98(ctx, base);
loc_82AC5994:
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

__attribute__((alias("__imp__sub_82AC59A8"))) PPC_WEAK_FUNC(sub_82AC59A8);
PPC_FUNC_IMPL(__imp__sub_82AC59A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x82AC59C0;
	sub_831156E8(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x82AC59C8;
	sub_831156E8(ctx, base);
	// lwz r30,52(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x830ff290
	ctx.lr = 0x82AC59D0;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// beq cr6,0x82ac5a04
	if (cr6.eq) goto loc_82AC5A04;
	// addis r3,r30,5
	ctx.r3.s64 = ctx.r30.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123778
	ctx.lr = 0x82AC59E8;
	sub_83123778(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c338
	ctx.lr = 0x82AC59F4;
	sub_8311C338(ctx, base);
	// lwz r11,520(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82ac5a08
	if (cr6.eq) goto loc_82AC5A08;
loc_82AC5A04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AC5A08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC5A20"))) PPC_WEAK_FUNC(sub_82AC5A20);
PPC_FUNC_IMPL(__imp__sub_82AC5A20) {
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
	// bl 0x830ff290
	ctx.lr = 0x82AC5A38;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// bne cr6,0x82ac5a58
	if (!cr6.eq) goto loc_82AC5A58;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AC5A58;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82AC5A58:
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

__attribute__((alias("__imp__sub_82AC5A70"))) PPC_WEAK_FUNC(sub_82AC5A70);
PPC_FUNC_IMPL(__imp__sub_82AC5A70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82AC5A78;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ac5aa0
	if (!cr6.eq) goto loc_82AC5AA0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,31160
	ctx.r3.s64 = ctx.r11.s64 + 31160;
	// bl 0x82c00618
	ctx.lr = 0x82AC5A9C;
	sub_82C00618(ctx, base);
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
loc_82AC5AA0:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac5e34
	if (cr6.eq) goto loc_82AC5E34;
	// bl 0x831156e8
	ctx.lr = 0x82AC5AB0;
	sub_831156E8(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r26,48(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r24,1
	ctx.r24.s64 = 1;
	// addi r29,r11,-11172
	ctx.r29.s64 = ctx.r11.s64 + -11172;
	// addi r27,r31,100
	ctx.r27.s64 = ctx.r31.s64 + 100;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ac5ae4
	if (!cr6.eq) goto loc_82AC5AE4;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82ac5b0c
	goto loc_82AC5B0C;
loc_82AC5AE4:
	// lhz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lhz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x82ac5b04
	if (!cr6.eq) goto loc_82AC5B04;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// beq cr6,0x82ac5b08
	if (cr6.eq) goto loc_82AC5B08;
loc_82AC5B04:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82AC5B08:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82AC5B0C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ac5e34
	if (!cr6.eq) goto loc_82AC5E34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x83103100
	ctx.lr = 0x82AC5B24;
	sub_83103100(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// bl 0x82bff970
	ctx.lr = 0x82AC5B38;
	sub_82BFF970(ctx, base);
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// li r30,108
	ctx.r30.s64 = 108;
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r30
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82ac5b60
	if (!cr0.eq) goto loc_82AC5B60;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AC5B60;
	sub_831CC188(ctx, base);
loc_82AC5B60:
	// li r10,21
	ctx.r10.s64 = 21;
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw. r7,r8,r30
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82ac5b8c
	if (!cr0.eq) goto loc_82AC5B8C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AC5B8C;
	sub_831CC188(ctx, base);
loc_82AC5B8C:
	// stw r24,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r24.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// li r4,31
	ctx.r4.s64 = 31;
	// bl 0x82a942d8
	ctx.lr = 0x82AC5BA4;
	sub_82A942D8(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r8,r9,r30
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82ac5bc8
	if (!cr0.eq) goto loc_82AC5BC8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AC5BC8;
	sub_831CC188(ctx, base);
loc_82AC5BC8:
	// stw r25,104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 104, ctx.r25.u32);
	// addis r28,r26,236
	ctx.r28.s64 = ctx.r26.s64 + 15466496;
	// addi r28,r28,5128
	ctx.r28.s64 = ctx.r28.s64 + 5128;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82ac5c40
	if (!cr6.eq) goto loc_82AC5C40;
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// sth r25,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r25.u16);
	// ori r9,r11,186
	ctx.r9.u64 = ctx.r11.u64 | 186;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r8,80(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// divw. r6,r7,r30
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x82ac5c14
	if (!cr0.eq) goto loc_82AC5C14;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AC5C14;
	sub_831CC188(ctx, base);
loc_82AC5C14:
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,60(r11)
	PPC_STORE_U64(ctx.r11.u32 + 60, ctx.r10.u64);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw. r7,r8,r30
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82ac5ca8
	if (!cr0.eq) goto loc_82AC5CA8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AC5C40;
	sub_831CC188(ctx, base);
loc_82AC5C40:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825a2298
	ctx.lr = 0x82AC5C4C;
	sub_825A2298(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac5cac
	if (cr6.eq) goto loc_82AC5CAC;
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// ld r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r7,r8,r30
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82ac5c80
	if (!cr0.eq) goto loc_82AC5C80;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AC5C80;
	sub_831CC188(ctx, base);
loc_82AC5C80:
	// std r9,60(r11)
	PPC_STORE_U64(ctx.r11.u32 + 60, ctx.r9.u64);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r8,r9,r30
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82ac5ca8
	if (!cr0.eq) goto loc_82AC5CA8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AC5CA8;
	sub_831CC188(ctx, base);
loc_82AC5CA8:
	// stw r25,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, ctx.r25.u32);
loc_82AC5CAC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82ac5cf0
	if (!cr6.eq) goto loc_82AC5CF0;
	// lis r11,222
	ctx.r11.s64 = 14548992;
	// ori r10,r11,26340
	ctx.r10.u64 = ctx.r11.u64 | 26340;
	// lwzx r9,r26,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82ac5d44
	if (!cr6.eq) goto loc_82AC5D44;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r8,r9,r30
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82ac5d40
	if (!cr0.eq) goto loc_82AC5D40;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AC5CF0;
	sub_831CC188(ctx, base);
loc_82AC5CF0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ld r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x82AC5CFC;
	sub_8311BF98(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83120738
	ctx.lr = 0x82AC5D10;
	sub_83120738(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ac5d44
	if (!cr6.eq) goto loc_82AC5D44;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r8,r9,r30
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82ac5d40
	if (!cr0.eq) goto loc_82AC5D40;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AC5D40;
	sub_831CC188(ctx, base);
loc_82AC5D40:
	// stb r24,72(r10)
	PPC_STORE_U8(ctx.r10.u32 + 72, ctx.r24.u8);
loc_82AC5D44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ac59a8
	ctx.lr = 0x82AC5D4C;
	sub_82AC59A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r8,r9,r30
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82ac5d84
	if (cr6.eq) goto loc_82AC5D84;
	// bne 0x82ac5d7c
	if (!cr0.eq) goto loc_82AC5D7C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AC5D7C;
	sub_831CC188(ctx, base);
loc_82AC5D7C:
	// stw r24,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r24.u32);
	// b 0x82ac5d98
	goto loc_82AC5D98;
loc_82AC5D84:
	// bne 0x82ac5d94
	if (!cr0.eq) goto loc_82AC5D94;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AC5D94;
	sub_831CC188(ctx, base);
loc_82AC5D94:
	// stw r25,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r25.u32);
loc_82AC5D98:
	// bl 0x83763ef8
	ctx.lr = 0x82AC5D9C;
	sub_83763EF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x830ff290
	ctx.lr = 0x82AC5DA4;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ac5e00
	if (!cr6.eq) goto loc_82AC5E00;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82ac5e00
	if (cr6.eq) goto loc_82AC5E00;
	// lbz r11,209(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 209);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac5e00
	if (cr6.eq) goto loc_82AC5E00;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r8,r9,r30
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82ac5de8
	if (!cr0.eq) goto loc_82AC5DE8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AC5DE8;
	sub_831CC188(ctx, base);
loc_82AC5DE8:
	// stb r24,96(r10)
	PPC_STORE_U8(ctx.r10.u32 + 96, ctx.r24.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82bff800
	ctx.lr = 0x82AC5DF8;
	sub_82BFF800(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82AC5E00:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r8,r9,r30
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82ac5e24
	if (!cr0.eq) goto loc_82AC5E24;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AC5E24;
	sub_831CC188(ctx, base);
loc_82AC5E24:
	// stb r25,96(r10)
	PPC_STORE_U8(ctx.r10.u32 + 96, ctx.r25.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82bff800
	ctx.lr = 0x82AC5E34;
	sub_82BFF800(ctx, base);
loc_82AC5E34:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC5E3C"))) PPC_WEAK_FUNC(sub_82AC5E3C);
PPC_FUNC_IMPL(__imp__sub_82AC5E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC5E40"))) PPC_WEAK_FUNC(sub_82AC5E40);
PPC_FUNC_IMPL(__imp__sub_82AC5E40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,99(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 99);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ac5e68
	if (!cr6.eq) goto loc_82AC5E68;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// lwz r10,124(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	// addi r8,r11,255
	ctx.r8.s64 = ctx.r11.s64 + 255;
	// stb r8,99(r3)
	PPC_STORE_U8(ctx.r3.u32 + 99, ctx.r8.u8);
	// b 0x82ac5e70
	goto loc_82AC5E70;
loc_82AC5E68:
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stb r11,99(r3)
	PPC_STORE_U8(ctx.r3.u32 + 99, ctx.r11.u8);
loc_82AC5E70:
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// lwz r10,124(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// lbz r9,99(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 99);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// blt cr6,0x82ac5e94
	if (cr6.lt) goto loc_82AC5E94;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,99(r3)
	PPC_STORE_U8(ctx.r3.u32 + 99, ctx.r11.u8);
loc_82AC5E94:
	// b 0x82b011c8
	sub_82B011C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC5E98"))) PPC_WEAK_FUNC(sub_82AC5E98);
PPC_FUNC_IMPL(__imp__sub_82AC5E98) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,31264
	ctx.r9.s64 = ctx.r11.s64 + 31264;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// lwz r4,124(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ac5ee0
	if (cr6.eq) goto loc_82AC5EE0;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82AC5EE0;
	sub_825952B8(ctx, base);
loc_82AC5EE0:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// bl 0x82c0fc10
	ctx.lr = 0x82AC5EF8;
	sub_82C0FC10(ctx, base);
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

__attribute__((alias("__imp__sub_82AC5F0C"))) PPC_WEAK_FUNC(sub_82AC5F0C);
PPC_FUNC_IMPL(__imp__sub_82AC5F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC5F10"))) PPC_WEAK_FUNC(sub_82AC5F10);
PPC_FUNC_IMPL(__imp__sub_82AC5F10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82ac5e98
	ctx.lr = 0x82AC5F30;
	sub_82AC5E98(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac5f48
	if (cr6.eq) goto loc_82AC5F48;
	// bl 0x82416268
	ctx.lr = 0x82AC5F44;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AC5F48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC5F60"))) PPC_WEAK_FUNC(sub_82AC5F60);
PPC_FUNC_IMPL(__imp__sub_82AC5F60) {
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
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac6010
	if (cr6.eq) goto loc_82AC6010;
	// lbz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac6010
	if (cr6.eq) goto loc_82AC6010;
	// bl 0x82d19a78
	ctx.lr = 0x82AC5F94;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-11212(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11212);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AC5FB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac6010
	if (cr6.eq) goto loc_82AC6010;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a946c0
	ctx.lr = 0x82AC5FCC;
	sub_82A946C0(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ac5fe0
	if (cr6.lt) goto loc_82AC5FE0;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ac5fe4
	goto loc_82AC5FE4;
loc_82AC5FE0:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82AC5FE4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AC5FFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82AC6004;
	sub_8387E8E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83545640
	ctx.lr = 0x82AC6010;
	sub_83545640(ctx, base);
loc_82AC6010:
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

__attribute__((alias("__imp__sub_82AC6028"))) PPC_WEAK_FUNC(sub_82AC6028);
PPC_FUNC_IMPL(__imp__sub_82AC6028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82AC6030;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8378cba8
	ctx.lr = 0x82AC603C;
	sub_8378CBA8(ctx, base);
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x8378cc08
	ctx.lr = 0x82AC6044;
	sub_8378CC08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ac605c
	if (!cr6.eq) goto loc_82AC605C;
loc_82AC6050:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82AC605C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AC6070;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac6050
	if (cr6.eq) goto loc_82AC6050;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lbz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
	// bne cr6,0x82ac60c8
	if (!cr6.eq) goto loc_82AC60C8;
	// bl 0x830ff290
	ctx.lr = 0x82AC609C;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// beq cr6,0x82ac60c8
	if (cr6.eq) goto loc_82AC60C8;
	// lbz r11,97(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 97);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// bne cr6,0x82ac60c4
	if (!cr6.eq) goto loc_82AC60C4;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82AC60C4:
	// bl 0x82d19788
	ctx.lr = 0x82AC60C8;
	sub_82D19788(ctx, base);
loc_82AC60C8:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82AC60D8;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82AC60E8;
	sub_82D19788(ctx, base);
	// lbz r4,98(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 98);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82a16f00
	ctx.lr = 0x82AC60F4;
	sub_82A16F00(ctx, base);
	// ld r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 44);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x82be53d8
	ctx.lr = 0x82AC610C;
	sub_82BE53D8(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r30,r31,124
	ctx.r30.s64 = ctx.r31.s64 + 124;
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82ac6130
	if (!cr0.eq) goto loc_82AC6130;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AC6130;
	sub_831CC188(ctx, base);
loc_82AC6130:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82ac6174
	if (cr6.gt) goto loc_82AC6174;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82ac615c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82AC615C;
	// bdzf 4*cr6+eq,0x82ac6164
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82AC6164;
	// bne cr6,0x82ac616c
	if (!cr6.eq) goto loc_82AC616C;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82ac6178
	goto loc_82AC6178;
loc_82AC615C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82ac6178
	goto loc_82AC6178;
loc_82AC6164:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ac6178
	goto loc_82AC6178;
loc_82AC616C:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82ac6178
	goto loc_82AC6178;
loc_82AC6174:
	// li r11,8
	ctx.r11.s64 = 8;
loc_82AC6178:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82be5388
	ctx.lr = 0x82AC618C;
	sub_82BE5388(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r5,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 2;
	// bl 0x82be5308
	ctx.lr = 0x82AC61A8;
	sub_82BE5308(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r4,44(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 44);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x82c12cb8
	ctx.lr = 0x82AC61B8;
	sub_82C12CB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c10c08
	ctx.lr = 0x82AC61C8;
	sub_82C10C08(ctx, base);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac621c
	if (cr6.eq) goto loc_82AC621C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r5,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 2;
	// srawi r11,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x82c0fe20
	ctx.lr = 0x82AC61F8;
	sub_82C0FE20(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// ld r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 100);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x82c106e0
	ctx.lr = 0x82AC6208;
	sub_82C106E0(ctx, base);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x82d19a68
	ctx.lr = 0x82AC6210;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82AC621C;
	sub_82D2AEC8(ctx, base);
loc_82AC621C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82AC6224;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-11208(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11208);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AC6240;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac6324
	if (cr6.eq) goto loc_82AC6324;
	// bl 0x830ff290
	ctx.lr = 0x82AC6250;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// beq cr6,0x82ac6324
	if (cr6.eq) goto loc_82AC6324;
	// bl 0x831156e8
	ctx.lr = 0x82AC6260;
	sub_831156E8(ctx, base);
	// lis r11,236
	ctx.r11.s64 = 15466496;
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r10,r11,5128
	ctx.r10.u64 = ctx.r11.u64 | 5128;
	// lwzx r9,r29,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82ac6290
	if (!cr6.eq) goto loc_82AC6290;
	// addis r4,r29,222
	ctx.r4.s64 = ctx.r29.s64 + 14548992;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r4,26400
	ctx.r4.s64 = ctx.r4.s64 + 26400;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d30138
	ctx.lr = 0x82AC628C;
	sub_82D30138(ctx, base);
	// b 0x82ac6324
	goto loc_82AC6324;
loc_82AC6290:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82ac59a8
	ctx.lr = 0x82AC62A0;
	sub_82AC59A8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ac62b0
	if (cr6.eq) goto loc_82AC62B0;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
loc_82AC62B0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831235b8
	ctx.lr = 0x82AC62C0;
	sub_831235B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8311c148
	ctx.lr = 0x82AC62D0;
	sub_8311C148(ctx, base);
	// lis r10,-31758
	ctx.r10.s64 = -2081292288;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-13896(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13896);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82ac6304
	if (!cr6.eq) goto loc_82AC6304;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// beq cr6,0x82ac6300
	if (cr6.eq) goto loc_82AC6300;
	// stb r27,57(r11)
	PPC_STORE_U8(ctx.r11.u32 + 57, ctx.r27.u8);
	// lwz r11,-13896(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13896);
loc_82AC6300:
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
loc_82AC6304:
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82AC6310;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82a990c8
	ctx.lr = 0x82AC631C;
	sub_82A990C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82AC6324;
	sub_8387E8E0(ctx, base);
loc_82AC6324:
	// bl 0x830ff290
	ctx.lr = 0x82AC6328;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// bne cr6,0x82ac6348
	if (!cr6.eq) goto loc_82AC6348;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AC6348;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82AC6348:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ac5a70
	ctx.lr = 0x82AC6350;
	sub_82AC5A70(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC635C"))) PPC_WEAK_FUNC(sub_82AC635C);
PPC_FUNC_IMPL(__imp__sub_82AC635C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC6360"))) PPC_WEAK_FUNC(sub_82AC6360);
PPC_FUNC_IMPL(__imp__sub_82AC6360) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82AC6368;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x82c0fbb8
	ctx.lr = 0x82AC637C;
	sub_82C0FBB8(ctx, base);
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// stb r30,97(r31)
	PPC_STORE_U8(ctx.r31.u32 + 97, ctx.r30.u8);
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// stb r29,98(r31)
	PPC_STORE_U8(ctx.r31.u32 + 98, ctx.r29.u8);
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// addi r6,r9,31264
	ctx.r6.s64 = ctx.r9.s64 + 31264;
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
	// addi r5,r8,-17088
	ctx.r5.s64 = ctx.r8.s64 + -17088;
	// stb r11,99(r31)
	PPC_STORE_U8(ctx.r31.u32 + 99, ctx.r11.u8);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r27,r10,-11228
	ctx.r27.s64 = ctx.r10.s64 + -11228;
	// stw r5,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r31,124
	ctx.r30.s64 = ctx.r31.s64 + 124;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// ld r10,-11172(r7)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r7.u32 + -11172);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// std r10,100(r31)
	PPC_STORE_U64(ctx.r31.u32 + 100, ctx.r10.u64);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// bl 0x82d20ae0
	ctx.lr = 0x82AC63E0;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x82AC63F0;
	sub_82D23390(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82AC63F4;
	sub_831156E8(ctx, base);
	// lis r4,236
	ctx.r4.s64 = 15466496;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r11,r4,5128
	ctx.r11.u64 = ctx.r4.u64 | 5128;
	// lwzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ac6414
	if (!cr6.eq) goto loc_82AC6414;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
loc_82AC6414:
	// bl 0x830ff290
	ctx.lr = 0x82AC6418;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// bne cr6,0x82ac6450
	if (!cr6.eq) goto loc_82AC6450;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r29,3
	ctx.r29.s64 = 3;
	// addi r26,r11,31140
	ctx.r26.s64 = ctx.r11.s64 + 31140;
	// addi r28,r26,-224
	ctx.r28.s64 = ctx.r26.s64 + -224;
loc_82AC6434:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835977d8
	ctx.lr = 0x82AC6440;
	sub_835977D8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x82ac6434
	if (!cr0.eq) goto loc_82AC6434;
	// b 0x82ac64a8
	goto loc_82AC64A8;
loc_82AC6450:
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r26,r11,31140
	ctx.r26.s64 = ctx.r11.s64 + 31140;
	// beq cr6,0x82ac6488
	if (cr6.eq) goto loc_82AC6488;
	// li r29,3
	ctx.r29.s64 = 3;
	// addi r28,r26,-256
	ctx.r28.s64 = ctx.r26.s64 + -256;
loc_82AC646C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835977d8
	ctx.lr = 0x82AC6478;
	sub_835977D8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x82ac646c
	if (!cr0.eq) goto loc_82AC646C;
	// b 0x82ac64a8
	goto loc_82AC64A8;
loc_82AC6488:
	// li r29,5
	ctx.r29.s64 = 5;
	// addi r28,r26,-244
	ctx.r28.s64 = ctx.r26.s64 + -244;
loc_82AC6490:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835977d8
	ctx.lr = 0x82AC649C;
	sub_835977D8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x82ac6490
	if (!cr0.eq) goto loc_82AC6490;
loc_82AC64A8:
	// bl 0x830ff290
	ctx.lr = 0x82AC64AC;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// beq cr6,0x82ac64e0
	if (cr6.eq) goto loc_82AC64E0;
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ac64e0
	if (!cr6.eq) goto loc_82AC64E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199f0
	ctx.lr = 0x82AC64CC;
	sub_82D199F0(ctx, base);
	// addi r11,r26,-56
	ctx.r11.s64 = ctx.r26.s64 + -56;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82c0fea0
	ctx.lr = 0x82AC64DC;
	sub_82C0FEA0(ctx, base);
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
loc_82AC64E0:
	// bl 0x830ff290
	ctx.lr = 0x82AC64E4;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// bne cr6,0x82ac6504
	if (!cr6.eq) goto loc_82AC6504;
	// bl 0x82d199f0
	ctx.lr = 0x82AC64F8;
	sub_82D199F0(ctx, base);
	// addi r11,r26,-40
	ctx.r11.s64 = ctx.r26.s64 + -40;
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x82ac6510
	goto loc_82AC6510;
loc_82AC6504:
	// bl 0x82d199f0
	ctx.lr = 0x82AC6508;
	sub_82D199F0(ctx, base);
	// addi r11,r26,-20
	ctx.r11.s64 = ctx.r26.s64 + -20;
	// li r5,3
	ctx.r5.s64 = 3;
loc_82AC6510:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82c10e90
	ctx.lr = 0x82AC651C;
	sub_82C10E90(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199f0
	ctx.lr = 0x82AC6528;
	sub_82D199F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82be5db0
	ctx.lr = 0x82AC6538;
	sub_82BE5DB0(ctx, base);
	// lwz r6,116(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82ac6558
	if (cr6.eq) goto loc_82AC6558;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x82d23900
	ctx.lr = 0x82AC6558;
	sub_82D23900(ctx, base);
loc_82AC6558:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r6,112(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82d23900
	ctx.lr = 0x82AC656C;
	sub_82D23900(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,12(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r6,108(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x82d23900
	ctx.lr = 0x82AC6580;
	sub_82D23900(ctx, base);
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac65b0
	if (cr6.eq) goto loc_82AC65B0;
	// bl 0x830ff290
	ctx.lr = 0x82AC6590;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82AC6594;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82ac65b4
	if (!cr6.eq) goto loc_82AC65B4;
	// lis r4,631
	ctx.r4.s64 = 41353216;
	// li r5,5
	ctx.r5.s64 = 5;
	// ori r4,r4,584
	ctx.r4.u64 = ctx.r4.u64 | 584;
	// bl 0x82d21730
	ctx.lr = 0x82AC65B0;
	sub_82D21730(ctx, base);
loc_82AC65B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AC65B4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC65BC"))) PPC_WEAK_FUNC(sub_82AC65BC);
PPC_FUNC_IMPL(__imp__sub_82AC65BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC65C0"))) PPC_WEAK_FUNC(sub_82AC65C0);
PPC_FUNC_IMPL(__imp__sub_82AC65C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x82ac65e8
	if (cr6.lt) goto loc_82AC65E8;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ac65ec
	goto loc_82AC65EC;
loc_82AC65E8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82AC65EC:
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
	ctx.lr = 0x82AC6608;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac662c
	if (cr6.eq) goto loc_82AC662C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ac6360
	ctx.lr = 0x82AC6624;
	sub_82AC6360(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ac6630
	if (!cr6.eq) goto loc_82AC6630;
loc_82AC662C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AC6630:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC6648"))) PPC_WEAK_FUNC(sub_82AC6648);
PPC_FUNC_IMPL(__imp__sub_82AC6648) {
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
	// blt cr6,0x82ac666c
	if (cr6.lt) goto loc_82AC666C;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ac6670
	goto loc_82AC6670;
loc_82AC666C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82AC6670:
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,140
	ctx.r4.s64 = 140;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82AC6688;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac66b0
	if (cr6.eq) goto loc_82AC66B0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82ac6360
	ctx.lr = 0x82AC66A4;
	sub_82AC6360(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ac66c8
	if (!cr6.eq) goto loc_82AC66C8;
loc_82AC66B0:
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
loc_82AC66C8:
	// bl 0x82d26ed8
	ctx.lr = 0x82AC66CC;
	sub_82D26ED8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d26900
	ctx.lr = 0x82AC66D4;
	sub_82D26900(ctx, base);
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

__attribute__((alias("__imp__sub_82AC66EC"))) PPC_WEAK_FUNC(sub_82AC66EC);
PPC_FUNC_IMPL(__imp__sub_82AC66EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC66F0"))) PPC_WEAK_FUNC(sub_82AC66F0);
PPC_FUNC_IMPL(__imp__sub_82AC66F0) {
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
	// blt cr6,0x82ac6714
	if (cr6.lt) goto loc_82AC6714;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ac6718
	goto loc_82AC6718;
loc_82AC6714:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82AC6718:
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,140
	ctx.r4.s64 = 140;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82AC6730;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac6754
	if (cr6.eq) goto loc_82AC6754;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82ac6360
	ctx.lr = 0x82AC674C;
	sub_82AC6360(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ac6758
	if (!cr6.eq) goto loc_82AC6758;
loc_82AC6754:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AC6758:
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

__attribute__((alias("__imp__sub_82AC676C"))) PPC_WEAK_FUNC(sub_82AC676C);
PPC_FUNC_IMPL(__imp__sub_82AC676C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC6770"))) PPC_WEAK_FUNC(sub_82AC6770);
PPC_FUNC_IMPL(__imp__sub_82AC6770) {
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
	// lbz r11,413(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 413);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ac67b4
	if (!cr6.eq) goto loc_82AC67B4;
	// bl 0x82bda618
	ctx.lr = 0x82AC678C;
	sub_82BDA618(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac6798
	if (cr6.eq) goto loc_82AC6798;
	// bl 0x82bda660
	ctx.lr = 0x82AC6798;
	sub_82BDA660(ctx, base);
loc_82AC6798:
	// bl 0x830ee560
	ctx.lr = 0x82AC679C;
	sub_830EE560(ctx, base);
	// bl 0x83763ef8
	ctx.lr = 0x82AC67A0;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac67b4
	if (cr6.eq) goto loc_82AC67B4;
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// bl 0x8376ea18
	ctx.lr = 0x82AC67B0;
	sub_8376EA18(ctx, base);
	// bl 0x83763ea8
	ctx.lr = 0x82AC67B4;
	sub_83763EA8(ctx, base);
loc_82AC67B4:
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

__attribute__((alias("__imp__sub_82AC67C8"))) PPC_WEAK_FUNC(sub_82AC67C8);
PPC_FUNC_IMPL(__imp__sub_82AC67C8) {
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
	ctx.lr = 0x82AC67D8;
	sub_831156E8(ctx, base);
	// lis r11,236
	ctx.r11.s64 = 15466496;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r10,r11,5128
	ctx.r10.u64 = ctx.r11.u64 | 5128;
	// lwzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82ac6808
	if (!cr6.eq) goto loc_82AC6808;
	// addis r3,r3,222
	ctx.r3.s64 = ctx.r3.s64 + 14548992;
	// addi r3,r3,26344
	ctx.r3.s64 = ctx.r3.s64 + 26344;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82AC6808:
	// lis r11,228
	ctx.r11.s64 = 14942208;
	// ori r10,r11,42280
	ctx.r10.u64 = ctx.r11.u64 | 42280;
	// ldx r4,r3,r10
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + ctx.r10.u32);
	// bl 0x8311bd68
	ctx.lr = 0x82AC6818;
	sub_8311BD68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC6828"))) PPC_WEAK_FUNC(sub_82AC6828);
PPC_FUNC_IMPL(__imp__sub_82AC6828) {
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
	// bl 0x831156e8
	ctx.lr = 0x82AC6840;
	sub_831156E8(ctx, base);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addis r9,r10,229
	ctx.r9.s64 = ctx.r10.s64 + 15007744;
	// addi r11,r11,-10992
	ctx.r11.s64 = ctx.r11.s64 + -10992;
	// addi r9,r9,-23256
	ctx.r9.s64 = ctx.r9.s64 + -23256;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// bne cr6,0x82ac6880
	if (!cr6.eq) goto loc_82AC6880;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82ac68a8
	goto loc_82AC68A8;
loc_82AC6880:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x82ac68a0
	if (!cr6.eq) goto loc_82AC68A0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82ac68a4
	if (cr6.eq) goto loc_82AC68A4;
loc_82AC68A0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AC68A4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82AC68A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac68d4
	if (cr6.eq) goto loc_82AC68D4;
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,186
	ctx.r9.u64 = ctx.r11.u64 | 186;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
loc_82AC68D4:
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

__attribute__((alias("__imp__sub_82AC68E8"))) PPC_WEAK_FUNC(sub_82AC68E8);
PPC_FUNC_IMPL(__imp__sub_82AC68E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82AC68F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AC68FC;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r11,32004
	ctx.r31.s64 = ctx.r11.s64 + 32004;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AC691C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831d0b08
	ctx.lr = 0x82AC6934;
	sub_831D0B08(ctx, base);
	// lwz r8,100(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r3,r30,100
	ctx.r3.s64 = ctx.r30.s64 + 100;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82AC694C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r6,100(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82AC6968;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac6984
	if (cr6.eq) goto loc_82AC6984;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-11052
	ctx.r9.s64 = ctx.r11.s64 + -11052;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82d29598
	ctx.lr = 0x82AC6984;
	sub_82D29598(ctx, base);
loc_82AC6984:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC698C"))) PPC_WEAK_FUNC(sub_82AC698C);
PPC_FUNC_IMPL(__imp__sub_82AC698C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC6990"))) PPC_WEAK_FUNC(sub_82AC6990);
PPC_FUNC_IMPL(__imp__sub_82AC6990) {
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
	// bl 0x82bda618
	ctx.lr = 0x82AC69A0;
	sub_82BDA618(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac69ac
	if (cr6.eq) goto loc_82AC69AC;
	// bl 0x82bda660
	ctx.lr = 0x82AC69AC;
	sub_82BDA660(ctx, base);
loc_82AC69AC:
	// bl 0x830ee560
	ctx.lr = 0x82AC69B0;
	sub_830EE560(ctx, base);
	// bl 0x83763ef8
	ctx.lr = 0x82AC69B4;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac69c8
	if (cr6.eq) goto loc_82AC69C8;
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// bl 0x8376ea18
	ctx.lr = 0x82AC69C4;
	sub_8376EA18(ctx, base);
	// bl 0x83763ea8
	ctx.lr = 0x82AC69C8;
	sub_83763EA8(ctx, base);
loc_82AC69C8:
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

__attribute__((alias("__imp__sub_82AC69DC"))) PPC_WEAK_FUNC(sub_82AC69DC);
PPC_FUNC_IMPL(__imp__sub_82AC69DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC69E0"))) PPC_WEAK_FUNC(sub_82AC69E0);
PPC_FUNC_IMPL(__imp__sub_82AC69E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r9,r11,32176
	ctx.r9.s64 = ctx.r11.s64 + 32176;
	// addi r8,r10,32172
	ctx.r8.s64 = ctx.r10.s64 + 32172;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82bdc910
	ctx.lr = 0x82AC6A18;
	sub_82BDC910(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82ac6a30
	if (cr6.eq) goto loc_82AC6A30;
	// bl 0x82416268
	ctx.lr = 0x82AC6A2C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AC6A30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC6A48"))) PPC_WEAK_FUNC(sub_82AC6A48);
PPC_FUNC_IMPL(__imp__sub_82AC6A48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82AC6A50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82bdc848
	ctx.lr = 0x82AC6A64;
	sub_82BDC848(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r29,r31,224
	ctx.r29.s64 = ctx.r31.s64 + 224;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,32176
	ctx.r9.s64 = ctx.r11.s64 + 32176;
	// addi r8,r10,32172
	ctx.r8.s64 = ctx.r10.s64 + 32172;
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// addi r3,r29,116
	ctx.r3.s64 = ctx.r29.s64 + 116;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r5,72
	ctx.r5.s64 = 72;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// stw r30,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r30.u32);
	// stb r30,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r30.u8);
	// bl 0x831cdcf0
	ctx.lr = 0x82AC6AA8;
	sub_831CDCF0(ctx, base);
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82AC6AB8;
	sub_831CDCF0(ctx, base);
	// stb r30,412(r31)
	PPC_STORE_U8(ctx.r31.u32 + 412, ctx.r30.u8);
	// stb r30,413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 413, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1a9a8
	ctx.lr = 0x82AC6AC8;
	sub_82D1A9A8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82AC6ACC;
	sub_831156E8(ctx, base);
	// lis r7,236
	ctx.r7.s64 = 15466496;
	// lwz r6,48(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r29,1
	ctx.r29.s64 = 1;
	// ori r5,r7,5128
	ctx.r5.u64 = ctx.r7.u64 | 5128;
	// lwzx r4,r6,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x82ac6aec
	if (!cr6.eq) goto loc_82AC6AEC;
	// stb r29,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r29.u8);
loc_82AC6AEC:
	// bl 0x83763ef8
	ctx.lr = 0x82AC6AF0;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ac6ba4
	if (!cr6.eq) goto loc_82AC6BA4;
	// lbz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac6b94
	if (cr6.eq) goto loc_82AC6B94;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r11,31892
	ctx.r3.s64 = ctx.r11.s64 + 31892;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x82AC6B1C;
	sub_82D2FA90(ctx, base);
	// stw r3,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r3.u32);
	// lis r4,631
	ctx.r4.s64 = 41353216;
	// ori r4,r4,616
	ctx.r4.u64 = ctx.r4.u64 | 616;
	// bl 0x82d2ada8
	ctx.lr = 0x82AC6B2C;
	sub_82D2ADA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,212(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// bl 0x83103100
	ctx.lr = 0x82AC6B38;
	sub_83103100(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82AC6B48;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82AC6B58;
	sub_82D19788(ctx, base);
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac6b94
	if (!cr6.eq) goto loc_82AC6B94;
	// bl 0x831156e8
	ctx.lr = 0x82AC6B68;
	sub_831156E8(ctx, base);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r5,0
	ctx.r5.s64 = 0;
	// addis r3,r30,222
	ctx.r3.s64 = ctx.r30.s64 + 14548992;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,30196
	ctx.r3.s64 = ctx.r3.s64 + 30196;
	// bl 0x825a10c0
	ctx.lr = 0x82AC6B80;
	sub_825A10C0(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lis r10,228
	ctx.r10.s64 = 14942208;
	// ori r9,r10,42280
	ctx.r9.u64 = ctx.r10.u64 | 42280;
	// ld r11,-10992(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -10992);
	// stdx r11,r30,r9
	PPC_STORE_U64(ctx.r30.u32 + ctx.r9.u32, ctx.r11.u64);
loc_82AC6B94:
	// stb r29,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r29.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82AC6BA4:
	// stb r30,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC6BB4"))) PPC_WEAK_FUNC(sub_82AC6BB4);
PPC_FUNC_IMPL(__imp__sub_82AC6BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC6BB8"))) PPC_WEAK_FUNC(sub_82AC6BB8);
PPC_FUNC_IMPL(__imp__sub_82AC6BB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// blt cr6,0x82ac6be0
	if (cr6.lt) goto loc_82AC6BE0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ac6be4
	goto loc_82AC6BE4;
loc_82AC6BE0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82AC6BE4:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,416
	ctx.r4.s64 = 416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82AC6C00;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac6c18
	if (cr6.eq) goto loc_82AC6C18;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ac6a48
	ctx.lr = 0x82AC6C14;
	sub_82AC6A48(ctx, base);
	// b 0x82ac6c1c
	goto loc_82AC6C1C;
loc_82AC6C18:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AC6C1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC6C34"))) PPC_WEAK_FUNC(sub_82AC6C34);
PPC_FUNC_IMPL(__imp__sub_82AC6C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC6C38"))) PPC_WEAK_FUNC(sub_82AC6C38);
PPC_FUNC_IMPL(__imp__sub_82AC6C38) {
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
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82AC6C64;
	sub_82595718(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac6c80
	if (cr6.eq) goto loc_82AC6C80;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r10,r11,32512
	ctx.r10.s64 = ctx.r11.s64 + 32512;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82ac6c84
	goto loc_82AC6C84;
loc_82AC6C80:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82AC6C84:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83878e28
	ctx.lr = 0x82AC6CA0;
	sub_83878E28(ctx, base);
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

__attribute__((alias("__imp__sub_82AC6CB8"))) PPC_WEAK_FUNC(sub_82AC6CB8);
PPC_FUNC_IMPL(__imp__sub_82AC6CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82AC6CC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r28,r11,31988
	ctx.r28.s64 = ctx.r11.s64 + 31988;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r5,16(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r28,-32
	ctx.r6.s64 = ctx.r28.s64 + -32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827a8810
	ctx.lr = 0x82AC6CF0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ac6d08
	if (!cr6.eq) goto loc_82AC6D08;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,412(r31)
	PPC_STORE_U8(ctx.r31.u32 + 412, ctx.r11.u8);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82AC6D08:
	// addi r6,r28,-16
	ctx.r6.s64 = ctx.r28.s64 + -16;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r7,13
	ctx.r7.s64 = 13;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827a8810
	ctx.lr = 0x82AC6D20;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ac6eb4
	if (!cr6.eq) goto loc_82AC6EB4;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x82ac6eb4
	if (!cr6.eq) goto loc_82AC6EB4;
	// bl 0x831156e8
	ctx.lr = 0x82AC6D34;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,60(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x82ac6828
	ctx.lr = 0x82AC6D48;
	sub_82AC6828(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// bl 0x8311cd08
	ctx.lr = 0x82AC6D58;
	sub_8311CD08(ctx, base);
	// addi r4,r28,-354
	ctx.r4.s64 = ctx.r28.s64 + -354;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82AC6D64;
	sub_837B0C10(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bge cr6,0x82ac6d78
	if (!cr6.lt) goto loc_82AC6D78;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
loc_82AC6D78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ac67c8
	ctx.lr = 0x82AC6D80;
	sub_82AC67C8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,46
	ctx.r4.s64 = 46;
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// bl 0x831ce7d8
	ctx.lr = 0x82AC6D90;
	sub_831CE7D8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bge cr6,0x82ac6da4
	if (!cr6.lt) goto loc_82AC6DA4;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
loc_82AC6DA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ac67c8
	ctx.lr = 0x82AC6DAC;
	sub_82AC67C8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r3,102
	ctx.r3.s64 = ctx.r3.s64 + 102;
	// bl 0x831ce7d8
	ctx.lr = 0x82AC6DBC;
	sub_831CE7D8(ctx, base);
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,244
	ctx.r3.s64 = ctx.r1.s64 + 244;
	// bl 0x831cdcf0
	ctx.lr = 0x82AC6DCC;
	sub_831CDCF0(ctx, base);
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x831cdcf0
	ctx.lr = 0x82AC6DDC;
	sub_831CDCF0(ctx, base);
	// bl 0x83763ef8
	ctx.lr = 0x82AC6DE0;
	sub_83763EF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82ac6828
	ctx.lr = 0x82AC6DF4;
	sub_82AC6828(ctx, base);
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AC6E10;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,106
	ctx.r5.s64 = 106;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a97010
	ctx.lr = 0x82AC6E20;
	sub_82A97010(ctx, base);
	// li r5,107
	ctx.r5.s64 = 107;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a97010
	ctx.lr = 0x82AC6E30;
	sub_82A97010(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ac6828
	ctx.lr = 0x82AC6E3C;
	sub_82AC6828(ctx, base);
	// ld r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x83763ef8
	ctx.lr = 0x82AC6E48;
	sub_83763EF8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x83777d30
	ctx.lr = 0x82AC6E58;
	sub_83777D30(ctx, base);
	// bl 0x82bda618
	ctx.lr = 0x82AC6E5C;
	sub_82BDA618(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac6e68
	if (cr6.eq) goto loc_82AC6E68;
	// bl 0x82bda660
	ctx.lr = 0x82AC6E68;
	sub_82BDA660(ctx, base);
loc_82AC6E68:
	// bl 0x830ee560
	ctx.lr = 0x82AC6E6C;
	sub_830EE560(ctx, base);
	// bl 0x83763ef8
	ctx.lr = 0x82AC6E70;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac6e84
	if (cr6.eq) goto loc_82AC6E84;
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// bl 0x8376ea18
	ctx.lr = 0x82AC6E80;
	sub_8376EA18(ctx, base);
	// bl 0x83763ea8
	ctx.lr = 0x82AC6E84;
	sub_83763EA8(ctx, base);
loc_82AC6E84:
	// bl 0x82d14ce8
	ctx.lr = 0x82AC6E88;
	sub_82D14CE8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac6e9c
	if (cr6.eq) goto loc_82AC6E9C;
	// bl 0x82d14ce8
	ctx.lr = 0x82AC6E94;
	sub_82D14CE8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d12e58
	ctx.lr = 0x82AC6E9C;
	sub_82D12E58(ctx, base);
loc_82AC6E9C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82AC6EAC;
	sub_82D20DA8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82AC6EB4;
	sub_8387E8E0(ctx, base);
loc_82AC6EB4:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC6EBC"))) PPC_WEAK_FUNC(sub_82AC6EBC);
PPC_FUNC_IMPL(__imp__sub_82AC6EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC6EC0"))) PPC_WEAK_FUNC(sub_82AC6EC0);
PPC_FUNC_IMPL(__imp__sub_82AC6EC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x82AC6EC8;
	__savegprlr_18(ctx, base);
	// stwu r1,-1680(r1)
	ea = -1680 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,372
	ctx.r3.s64 = ctx.r1.s64 + 372;
	// bl 0x831cdcf0
	ctx.lr = 0x82AC6EE0;
	sub_831CDCF0(ctx, base);
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x831cdcf0
	ctx.lr = 0x82AC6EF0;
	sub_831CDCF0(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x82ac6828
	ctx.lr = 0x82AC6EFC;
	sub_82AC6828(ctx, base);
	// ld r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// bl 0x83763ef8
	ctx.lr = 0x82AC6F04;
	sub_83763EF8(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83775138
	ctx.lr = 0x82AC6F10;
	sub_83775138(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// li r19,15
	ctx.r19.s64 = 15;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r19,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r19.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r24,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r24.u8);
	// addi r23,r11,31666
	ctx.r23.s64 = ctx.r11.s64 + 31666;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r23,-31
	ctx.r4.s64 = ctx.r23.s64 + -31;
	// bl 0x8259cc28
	ctx.lr = 0x82AC6F3C;
	sub_8259CC28(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82AC6F40;
	sub_831156E8(ctx, base);
	// lwz r20,48(r3)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x82AC6F48;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,18
	ctx.r5.s64 = 18;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r18,60(r11)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// bl 0x82a72110
	ctx.lr = 0x82AC6F64;
	sub_82A72110(ctx, base);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// li r5,19
	ctx.r5.s64 = 19;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82a72110
	ctx.lr = 0x82AC6F78;
	sub_82A72110(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82AC6F7C;
	sub_831156E8(ctx, base);
	// lis r10,236
	ctx.r10.s64 = 15466496;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r9,228
	ctx.r9.s64 = 14942208;
	// ori r27,r10,5128
	ctx.r27.u64 = ctx.r10.u64 | 5128;
	// lis r8,222
	ctx.r8.s64 = 14548992;
	// ori r26,r9,42280
	ctx.r26.u64 = ctx.r9.u64 | 42280;
	// ori r25,r8,26344
	ctx.r25.u64 = ctx.r8.u64 | 26344;
	// lwzx r7,r3,r27
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r27.u32);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x82ac6fac
	if (!cr6.eq) goto loc_82AC6FAC;
	// add r31,r3,r25
	ctx.r31.u64 = ctx.r3.u64 + ctx.r25.u64;
	// b 0x82ac6fb8
	goto loc_82AC6FB8;
loc_82AC6FAC:
	// ldx r4,r3,r26
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + ctx.r26.u32);
	// bl 0x8311bd68
	ctx.lr = 0x82AC6FB4;
	sub_8311BD68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82AC6FB8:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,0
	ctx.r3.s64 = 0;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x831236a0
	ctx.lr = 0x82AC6FC8;
	sub_831236A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83121088
	ctx.lr = 0x82AC6FD8;
	sub_83121088(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82AC6FDC;
	sub_831156E8(ctx, base);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwzx r10,r3,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r27.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ac6ff4
	if (!cr6.eq) goto loc_82AC6FF4;
	// add r31,r3,r25
	ctx.r31.u64 = ctx.r3.u64 + ctx.r25.u64;
	// b 0x82ac7000
	goto loc_82AC7000;
loc_82AC6FF4:
	// ldx r4,r3,r26
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + ctx.r26.u32);
	// bl 0x8311bd68
	ctx.lr = 0x82AC6FFC;
	sub_8311BD68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82AC7000:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x831236a0
	ctx.lr = 0x82AC7010;
	sub_831236A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83121088
	ctx.lr = 0x82AC7020;
	sub_83121088(ctx, base);
	// li r10,97
	ctx.r10.s64 = 97;
	// li r9,98
	ctx.r9.s64 = 98;
	// li r8,99
	ctx.r8.s64 = 99;
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// li r7,100
	ctx.r7.s64 = 100;
	// stw r9,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r9.u32);
	// li r6,101
	ctx.r6.s64 = 101;
	// stw r8,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r8.u32);
	// li r5,102
	ctx.r5.s64 = 102;
	// stw r7,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r7.u32);
	// li r4,103
	ctx.r4.s64 = 103;
	// stw r6,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r6.u32);
	// li r3,104
	ctx.r3.s64 = 104;
	// stw r5,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r5.u32);
	// li r11,105
	ctx.r11.s64 = 105;
	// stw r4,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r4.u32);
	// stw r3,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r3.u32);
	// addi r29,r1,208
	ctx.r29.s64 = ctx.r1.s64 + 208;
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// li r28,9
	ctx.r28.s64 = 9;
	// li r21,2
	ctx.r21.s64 = 2;
loc_82AC7074:
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83070638
	ctx.lr = 0x82AC708C;
	sub_83070638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac70b4
	if (cr6.eq) goto loc_82AC70B4;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac70b4
	if (cr6.eq) goto loc_82AC70B4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bctrl 
	ctx.lr = 0x82AC70B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82AC70B4:
	// addi r11,r31,-97
	ctx.r11.s64 = ctx.r31.s64 + -97;
	// li r31,9
	ctx.r31.s64 = 9;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x82ac7130
	if (cr6.gt) goto loc_82AC7130;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82ac70f4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82AC70F4;
	// bdzf 4*cr6+eq,0x82ac70fc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82AC70FC;
	// bdzf 4*cr6+eq,0x82ac7104
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82AC7104;
	// bdzf 4*cr6+eq,0x82ac710c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82AC710C;
	// bdzf 4*cr6+eq,0x82ac7114
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82AC7114;
	// bdzf 4*cr6+eq,0x82ac711c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82AC711C;
	// bdzf 4*cr6+eq,0x82ac7124
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82AC7124;
	// bne cr6,0x82ac712c
	if (!cr6.eq) goto loc_82AC712C;
	// li r31,4
	ctx.r31.s64 = 4;
	// b 0x82ac7130
	goto loc_82AC7130;
loc_82AC70F4:
	// li r31,5
	ctx.r31.s64 = 5;
	// b 0x82ac7130
	goto loc_82AC7130;
loc_82AC70FC:
	// li r31,6
	ctx.r31.s64 = 6;
	// b 0x82ac7130
	goto loc_82AC7130;
loc_82AC7104:
	// li r31,7
	ctx.r31.s64 = 7;
	// b 0x82ac7130
	goto loc_82AC7130;
loc_82AC710C:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// b 0x82ac7130
	goto loc_82AC7130;
loc_82AC7114:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x82ac7130
	goto loc_82AC7130;
loc_82AC711C:
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x82ac7130
	goto loc_82AC7130;
loc_82AC7124:
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// b 0x82ac7130
	goto loc_82AC7130;
loc_82AC712C:
	// li r31,8
	ctx.r31.s64 = 8;
loc_82AC7130:
	// bl 0x831156e8
	ctx.lr = 0x82AC7134;
	sub_831156E8(ctx, base);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwzx r11,r3,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r27.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82ac714c
	if (!cr6.eq) goto loc_82AC714C;
	// add r30,r3,r25
	ctx.r30.u64 = ctx.r3.u64 + ctx.r25.u64;
	// b 0x82ac7158
	goto loc_82AC7158;
loc_82AC714C:
	// ldx r4,r3,r26
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + ctx.r26.u32);
	// bl 0x8311bd68
	ctx.lr = 0x82AC7154;
	sub_8311BD68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82AC7158:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x83123720
	ctx.lr = 0x82AC7168;
	sub_83123720(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83121088
	ctx.lr = 0x82AC7178;
	sub_83121088(ctx, base);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82ac7074
	if (!cr0.eq) goto loc_82AC7074;
	// li r5,106
	ctx.r5.s64 = 106;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x830706a8
	ctx.lr = 0x82AC7194;
	sub_830706A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac7214
	if (cr6.eq) goto loc_82AC7214;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac7214
	if (cr6.eq) goto loc_82AC7214;
	// lwz r5,196(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,512
	cr6.compare<uint32_t>(ctx.r5.u32, 512, xer);
	// bgt cr6,0x82ac7214
	if (cr6.gt) goto loc_82AC7214;
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bctrl 
	ctx.lr = 0x82AC71CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac7214
	if (cr6.eq) goto loc_82AC7214;
	// addi r11,r1,528
	ctx.r11.s64 = ctx.r1.s64 + 528;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r11,r1,528
	ctx.r11.s64 = ctx.r1.s64 + 528;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r24,-1(r9)
	PPC_STORE_U8(ctx.r9.u32 + -1, ctx.r24.u8);
loc_82AC71EC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ac71ec
	if (!cr6.eq) goto loc_82AC71EC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82AC7214;
	sub_8259CC28(ctx, base);
loc_82AC7214:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ac7270
	if (!cr6.eq) goto loc_82AC7270;
	// bl 0x831156e8
	ctx.lr = 0x82AC7224;
	sub_831156E8(ctx, base);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwzx r11,r3,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r27.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82ac723c
	if (!cr6.eq) goto loc_82AC723C;
	// add r3,r3,r25
	ctx.r3.u64 = ctx.r3.u64 + ctx.r25.u64;
	// b 0x82ac7244
	goto loc_82AC7244;
loc_82AC723C:
	// ldx r4,r3,r26
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + ctx.r26.u32);
	// bl 0x8311bd68
	ctx.lr = 0x82AC7244;
	sub_8311BD68(ctx, base);
loc_82AC7244:
	// addi r4,r3,56
	ctx.r4.s64 = ctx.r3.s64 + 56;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC724C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac724c
	if (!cr6.eq) goto loc_82AC724C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82AC7270;
	sub_8259CC28(ctx, base);
loc_82AC7270:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ac7284
	if (!cr6.lt) goto loc_82AC7284;
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
loc_82AC7284:
	// bl 0x831156e8
	ctx.lr = 0x82AC7288;
	sub_831156E8(ctx, base);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwzx r11,r3,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r27.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82ac72a0
	if (!cr6.eq) goto loc_82AC72A0;
	// add r3,r3,r25
	ctx.r3.u64 = ctx.r3.u64 + ctx.r25.u64;
	// b 0x82ac72a8
	goto loc_82AC72A8;
loc_82AC72A0:
	// ldx r4,r3,r26
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + ctx.r26.u32);
	// bl 0x8311bd68
	ctx.lr = 0x82AC72A8;
	sub_8311BD68(ctx, base);
loc_82AC72A8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,46
	ctx.r4.s64 = 46;
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// bl 0x831ce7d8
	ctx.lr = 0x82AC72B8;
	sub_831CE7D8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82AC72BC;
	sub_831156E8(ctx, base);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwzx r11,r3,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r27.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82ac72d4
	if (!cr6.eq) goto loc_82AC72D4;
	// add r11,r3,r25
	ctx.r11.u64 = ctx.r3.u64 + ctx.r25.u64;
	// b 0x82ac72e0
	goto loc_82AC72E0;
loc_82AC72D4:
	// ldx r4,r3,r26
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + ctx.r26.u32);
	// bl 0x8311bd68
	ctx.lr = 0x82AC72DC;
	sub_8311BD68(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82AC72E0:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// ld r4,44(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 44);
	// bl 0x8311bd68
	ctx.lr = 0x82AC72EC;
	sub_8311BD68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac7314
	if (cr6.eq) goto loc_82AC7314;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ac7308
	if (!cr6.lt) goto loc_82AC7308;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_82AC7308:
	// li r4,46
	ctx.r4.s64 = 46;
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// bl 0x831ce7d8
	ctx.lr = 0x82AC7314;
	sub_831CE7D8(ctx, base);
loc_82AC7314:
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x83070638
	ctx.lr = 0x82AC7324;
	sub_83070638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac734c
	if (cr6.eq) goto loc_82AC734C;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac734c
	if (cr6.eq) goto loc_82AC734C;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bctrl 
	ctx.lr = 0x82AC734C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82AC734C:
	// bl 0x831156e8
	ctx.lr = 0x82AC7350;
	sub_831156E8(ctx, base);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwzx r11,r3,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r27.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82ac7368
	if (!cr6.eq) goto loc_82AC7368;
	// add r3,r3,r25
	ctx.r3.u64 = ctx.r3.u64 + ctx.r25.u64;
	// b 0x82ac7370
	goto loc_82AC7370;
loc_82AC7368:
	// ldx r4,r3,r26
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + ctx.r26.u32);
	// bl 0x8311bd68
	ctx.lr = 0x82AC7370;
	sub_8311BD68(ctx, base);
loc_82AC7370:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r19,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r19.u32);
	// stw r24,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r24.u32);
	// stb r24,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r24.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82AC7394;
	sub_8259CC28(ctx, base);
	// li r5,107
	ctx.r5.s64 = 107;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x830706a8
	ctx.lr = 0x82AC73A4;
	sub_830706A8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ac7424
	if (cr6.eq) goto loc_82AC7424;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac7424
	if (cr6.eq) goto loc_82AC7424;
	// lwz r5,196(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,512
	cr6.compare<uint32_t>(ctx.r5.u32, 512, xer);
	// bgt cr6,0x82ac7424
	if (cr6.gt) goto loc_82AC7424;
	// addi r4,r1,1040
	ctx.r4.s64 = ctx.r1.s64 + 1040;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bctrl 
	ctx.lr = 0x82AC73DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac7424
	if (cr6.eq) goto loc_82AC7424;
	// addi r11,r1,1040
	ctx.r11.s64 = ctx.r1.s64 + 1040;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r11,r1,1040
	ctx.r11.s64 = ctx.r1.s64 + 1040;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r24,-1(r9)
	PPC_STORE_U8(ctx.r9.u32 + -1, ctx.r24.u8);
loc_82AC73FC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ac73fc
	if (!cr6.eq) goto loc_82AC73FC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,1040
	ctx.r4.s64 = ctx.r1.s64 + 1040;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82AC7424;
	sub_8259CC28(ctx, base);
loc_82AC7424:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r31,144(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ac7438
	if (!cr6.lt) goto loc_82AC7438;
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
loc_82AC7438:
	// bl 0x831156e8
	ctx.lr = 0x82AC743C;
	sub_831156E8(ctx, base);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwzx r11,r3,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r27.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82ac7454
	if (!cr6.eq) goto loc_82AC7454;
	// add r3,r3,r25
	ctx.r3.u64 = ctx.r3.u64 + ctx.r25.u64;
	// b 0x82ac745c
	goto loc_82AC745C;
loc_82AC7454:
	// ldx r4,r3,r26
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + ctx.r26.u32);
	// bl 0x8311bd68
	ctx.lr = 0x82AC745C;
	sub_8311BD68(ctx, base);
loc_82AC745C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r3,102
	ctx.r3.s64 = ctx.r3.s64 + 102;
	// bl 0x831ce7d8
	ctx.lr = 0x82AC746C;
	sub_831CE7D8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82AC7470;
	sub_831156E8(ctx, base);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwzx r11,r3,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r27.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82ac7488
	if (!cr6.eq) goto loc_82AC7488;
	// add r31,r3,r25
	ctx.r31.u64 = ctx.r3.u64 + ctx.r25.u64;
	// b 0x82ac7494
	goto loc_82AC7494;
loc_82AC7488:
	// ldx r4,r3,r26
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + ctx.r26.u32);
	// bl 0x8311bd68
	ctx.lr = 0x82AC7490;
	sub_8311BD68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82AC7494:
	// lwz r3,200(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 200);
	// bl 0x83a970c8
	ctx.lr = 0x82AC749C;
	sub_83A970C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83121088
	ctx.lr = 0x82AC74AC;
	sub_83121088(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r1,440
	ctx.r11.s64 = ctx.r1.s64 + 440;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82AC74BC:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82ac74bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82AC74BC;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x82ac6828
	ctx.lr = 0x82AC74D0;
	sub_82AC6828(ctx, base);
	// ld r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// bl 0x83763ef8
	ctx.lr = 0x82AC74D8;
	sub_83763EF8(ctx, base);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83777e50
	ctx.lr = 0x82AC74E4;
	sub_83777E50(ctx, base);
	// addis r3,r20,222
	ctx.r3.s64 = ctx.r20.s64 + 14548992;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r3,30196
	ctx.r3.s64 = ctx.r3.s64 + 30196;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x831ce980
	ctx.lr = 0x82AC74F8;
	sub_831CE980(ctx, base);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8311d330
	ctx.lr = 0x82AC7504;
	sub_8311D330(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ac7520
	if (cr6.lt) goto loc_82AC7520;
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r21.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82AC7520;
	sub_825952B8(ctx, base);
loc_82AC7520:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r19,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r19.u32);
	// stw r24,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r24.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r24,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r24.u8);
	// blt cr6,0x82ac7548
	if (cr6.lt) goto loc_82AC7548;
	// stw r21,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r21.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82AC7548;
	sub_825952B8(ctx, base);
loc_82AC7548:
	// addi r1,r1,1680
	ctx.r1.s64 = ctx.r1.s64 + 1680;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC7550"))) PPC_WEAK_FUNC(sub_82AC7550);
PPC_FUNC_IMPL(__imp__sub_82AC7550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82AC7558;
	__savegprlr_25(ctx, base);
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,15
	ctx.r26.s64 = 15;
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r28,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r28.u8);
	// addi r31,r11,32004
	ctx.r31.s64 = ctx.r11.s64 + 32004;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r31,-337
	ctx.r4.s64 = ctx.r31.s64 + -337;
	// bl 0x8259cc28
	ctx.lr = 0x82AC7594;
	sub_8259CC28(ctx, base);
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,564
	ctx.r3.s64 = ctx.r1.s64 + 564;
	// bl 0x831cdcf0
	ctx.lr = 0x82AC75A4;
	sub_831CDCF0(ctx, base);
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x831cdcf0
	ctx.lr = 0x82AC75B4;
	sub_831CDCF0(ctx, base);
	// bl 0x82a78698
	ctx.lr = 0x82AC75B8;
	sub_82A78698(ctx, base);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82be1a80
	ctx.lr = 0x82AC75C4;
	sub_82BE1A80(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AC75CC;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AC75E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x831d0b08
	ctx.lr = 0x82AC75FC;
	sub_831D0B08(ctx, base);
	// lwz r9,100(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r3,r30,100
	ctx.r3.s64 = ctx.r30.s64 + 100;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AC7614;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,100(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r30,r3,100
	ctx.r30.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82AC7630;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// addi r4,r31,-307
	ctx.r4.s64 = ctx.r31.s64 + -307;
	// stb r28,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r28.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82AC7650;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d3bcc0
	ctx.lr = 0x82AC765C;
	sub_82D3BCC0(ctx, base);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r25,2
	ctx.r25.s64 = 2;
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x82ac767c
	if (cr6.lt) goto loc_82AC767C;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82AC767C;
	sub_825952B8(ctx, base);
loc_82AC767C:
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// stb r28,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r28.u8);
	// bne cr6,0x82ac77cc
	if (!cr6.eq) goto loc_82AC77CC;
	// addi r4,r31,-306
	ctx.r4.s64 = ctx.r31.s64 + -306;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x837b0c10
	ctx.lr = 0x82AC769C;
	sub_837B0C10(ctx, base);
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,372
	ctx.r3.s64 = ctx.r1.s64 + 372;
	// bl 0x831cdcf0
	ctx.lr = 0x82AC76AC;
	sub_831CDCF0(ctx, base);
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x831cdcf0
	ctx.lr = 0x82AC76BC;
	sub_831CDCF0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82ac6828
	ctx.lr = 0x82AC76C8;
	sub_82AC6828(ctx, base);
	// ld r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// bl 0x83763ef8
	ctx.lr = 0x82AC76D0;
	sub_83763EF8(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83775138
	ctx.lr = 0x82AC76DC;
	sub_83775138(ctx, base);
	// li r5,106
	ctx.r5.s64 = 106;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82a725e8
	ctx.lr = 0x82AC76EC;
	sub_82A725E8(ctx, base);
	// addi r4,r31,-305
	ctx.r4.s64 = ctx.r31.s64 + -305;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82AC76F8;
	sub_837B0C10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ac67c8
	ctx.lr = 0x82AC7700;
	sub_82AC67C8(ctx, base);
	// addi r4,r3,56
	ctx.r4.s64 = ctx.r3.s64 + 56;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC7708:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac7708
	if (!cr6.eq) goto loc_82AC7708;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82AC772C;
	sub_8259CC28(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82AC7734;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AC774C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac77ac
	if (cr6.eq) goto loc_82AC77AC;
	// addi r4,r31,-287
	ctx.r4.s64 = ctx.r31.s64 + -287;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x837b0c10
	ctx.lr = 0x82AC7764;
	sub_837B0C10(ctx, base);
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac7780
	if (cr6.eq) goto loc_82AC7780;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// bl 0x82d30008
	ctx.lr = 0x82AC777C;
	sub_82D30008(ctx, base);
	// b 0x82ac77a4
	goto loc_82AC77A4;
loc_82AC7780:
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac7798
	if (cr6.eq) goto loc_82AC7798;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x82d30008
	ctx.lr = 0x82AC7794;
	sub_82D30008(ctx, base);
	// b 0x82ac77a4
	goto loc_82AC77A4;
loc_82AC7798:
	// lis r4,32
	ctx.r4.s64 = 2097152;
	// ori r4,r4,29
	ctx.r4.u64 = ctx.r4.u64 | 29;
	// bl 0x82d303d0
	ctx.lr = 0x82AC77A4;
	sub_82D303D0(ctx, base);
loc_82AC77A4:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x82AC77AC;
	sub_8387E8E0(ctx, base);
loc_82AC77AC:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82AC77B4;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82AC77BC;
	sub_8387E8E0(ctx, base);
loc_82AC77BC:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82AC77C4;
	sub_8387E8E0(ctx, base);
loc_82AC77C4:
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82AC77CC:
	// cmplwi cr6,r27,3
	cr6.compare<uint32_t>(ctx.r27.u32, 3, xer);
	// bne cr6,0x82ac77bc
	if (!cr6.eq) goto loc_82AC77BC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,60
	ctx.r4.s64 = ctx.r31.s64 + 60;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AC77EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,200(r29)
	PPC_STORE_U32(ctx.r29.u32 + 200, ctx.r3.u32);
	// beq cr6,0x82ac7874
	if (cr6.eq) goto loc_82AC7874;
	// bl 0x82d3b3f8
	ctx.lr = 0x82AC77FC;
	sub_82D3B3F8(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// addi r11,r11,-11032
	ctx.r11.s64 = ctx.r11.s64 + -11032;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_82AC780C:
	// lwzu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r3,200(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 200);
	// bl 0x82d3b620
	ctx.lr = 0x82AC7818;
	sub_82D3B620(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82ac780c
	if (!cr0.eq) goto loc_82AC780C;
	// bl 0x831156e8
	ctx.lr = 0x82AC7824;
	sub_831156E8(ctx, base);
	// lis r11,236
	ctx.r11.s64 = 15466496;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r10,r11,5128
	ctx.r10.u64 = ctx.r11.u64 | 5128;
	// lwzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82ac7848
	if (!cr6.eq) goto loc_82AC7848;
	// addis r3,r3,222
	ctx.r3.s64 = ctx.r3.s64 + 14548992;
	// addi r3,r3,26344
	ctx.r3.s64 = ctx.r3.s64 + 26344;
	// b 0x82ac7858
	goto loc_82AC7858;
loc_82AC7848:
	// lis r11,228
	ctx.r11.s64 = 14942208;
	// ori r10,r11,42280
	ctx.r10.u64 = ctx.r11.u64 | 42280;
	// ldx r4,r3,r10
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + ctx.r10.u32);
	// bl 0x8311bd68
	ctx.lr = 0x82AC7858;
	sub_8311BD68(ctx, base);
loc_82AC7858:
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,40
	ctx.r4.s64 = 40;
	// bl 0x83120738
	ctx.lr = 0x82AC7868;
	sub_83120738(ctx, base);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,200(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 200);
	// bl 0x82d3b298
	ctx.lr = 0x82AC7874;
	sub_82D3B298(ctx, base);
loc_82AC7874:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ac77c4
	if (cr6.lt) goto loc_82AC77C4;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82AC7890;
	sub_825952B8(ctx, base);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC7898"))) PPC_WEAK_FUNC(sub_82AC7898);
PPC_FUNC_IMPL(__imp__sub_82AC7898) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82AC78A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
	// addi r31,r11,32076
	ctx.r31.s64 = ctx.r11.s64 + 32076;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r31,-358
	ctx.r4.s64 = ctx.r31.s64 + -358;
	// bl 0x8259cc28
	ctx.lr = 0x82AC78D4;
	sub_8259CC28(ctx, base);
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// bl 0x831cdcf0
	ctx.lr = 0x82AC78E4;
	sub_831CDCF0(ctx, base);
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x831cdcf0
	ctx.lr = 0x82AC78F4;
	sub_831CDCF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82ac6828
	ctx.lr = 0x82AC7900;
	sub_82AC6828(ctx, base);
	// ld r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// bl 0x83763ef8
	ctx.lr = 0x82AC7908;
	sub_83763EF8(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x83775138
	ctx.lr = 0x82AC7914;
	sub_83775138(ctx, base);
	// li r5,106
	ctx.r5.s64 = 106;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82a725e8
	ctx.lr = 0x82AC7924;
	sub_82A725E8(ctx, base);
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82ac79bc
	if (!cr6.eq) goto loc_82AC79BC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ac67c8
	ctx.lr = 0x82AC7938;
	sub_82AC67C8(ctx, base);
	// addi r4,r3,56
	ctx.r4.s64 = ctx.r3.s64 + 56;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AC7940:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac7940
	if (!cr6.eq) goto loc_82AC7940;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82AC7964;
	sub_8259CC28(ctx, base);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac79bc
	if (!cr6.eq) goto loc_82AC79BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2ee48
	ctx.lr = 0x82AC7984;
	sub_82D2EE48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac79bc
	if (cr6.eq) goto loc_82AC79BC;
	// lis r4,269
	ctx.r4.s64 = 17629184;
	// ori r4,r4,153
	ctx.r4.u64 = ctx.r4.u64 | 153;
	// bl 0x82d2ada8
	ctx.lr = 0x82AC799C;
	sub_82D2ADA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x82AC79A8;
	sub_83103100(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82AC79B0;
	sub_8387E8E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82AC79BC:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ac79dc
	if (cr6.lt) goto loc_82AC79DC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82AC79DC;
	sub_825952B8(ctx, base);
loc_82AC79DC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC79E8"))) PPC_WEAK_FUNC(sub_82AC79E8);
PPC_FUNC_IMPL(__imp__sub_82AC79E8) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,220(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 220);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ac7a2c
	if (!cr6.eq) goto loc_82AC7A2C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f2,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82d1ebf8
	ctx.lr = 0x82AC7A28;
	sub_82D1EBF8(ctx, base);
	// b 0x82ac7b00
	goto loc_82AC7B00;
loc_82AC7A2C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// li r5,72
	ctx.r5.s64 = 72;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bl 0x831cdcf0
	ctx.lr = 0x82AC7A4C;
	sub_831CDCF0(ctx, base);
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x831cdcf0
	ctx.lr = 0x82AC7A5C;
	sub_831CDCF0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82ac6828
	ctx.lr = 0x82AC7A68;
	sub_82AC6828(ctx, base);
	// ld r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// bl 0x83763ef8
	ctx.lr = 0x82AC7A70;
	sub_83763EF8(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83775138
	ctx.lr = 0x82AC7A7C;
	sub_83775138(ctx, base);
	// li r5,106
	ctx.r5.s64 = 106;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82a725e8
	ctx.lr = 0x82AC7A8C;
	sub_82A725E8(ctx, base);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ac7ac0
	if (!cr6.eq) goto loc_82AC7AC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ac67c8
	ctx.lr = 0x82AC7AA0;
	sub_82AC67C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// bl 0x8259d6c0
	ctx.lr = 0x82AC7AB0;
	sub_8259D6C0(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac7ac4
	if (cr6.eq) goto loc_82AC7AC4;
loc_82AC7AC0:
	// li r4,1
	ctx.r4.s64 = 1;
loc_82AC7AC4:
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
	ctx.lr = 0x82AC7AE0;
	sub_82D1EBF8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ac7b00
	if (cr6.lt) goto loc_82AC7B00;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82AC7B00;
	sub_825952B8(ctx, base);
loc_82AC7B00:
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
}

__attribute__((alias("__imp__sub_82AC7B18"))) PPC_WEAK_FUNC(sub_82AC7B18);
PPC_FUNC_IMPL(__imp__sub_82AC7B18) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19840
	ctx.lr = 0x82AC7B34;
	sub_82D19840(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ac7b50
	if (cr6.eq) goto loc_82AC7B50;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19840
	ctx.lr = 0x82AC7B48;
	sub_82D19840(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ac7bc8
	if (!cr6.eq) goto loc_82AC7BC8;
loc_82AC7B50:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82AC7B60;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82AC7B70;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AC7B78;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82AC7B80;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac7b98
	if (cr6.eq) goto loc_82AC7B98;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2b608
	ctx.lr = 0x82AC7B98;
	sub_82D2B608(ctx, base);
loc_82AC7B98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AC7BA0;
	sub_82D19A78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d33db0
	ctx.lr = 0x82AC7BA8;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac7bc0
	if (cr6.eq) goto loc_82AC7BC0;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2b608
	ctx.lr = 0x82AC7BC0;
	sub_82D2B608(ctx, base);
loc_82AC7BC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ac79e8
	ctx.lr = 0x82AC7BC8;
	sub_82AC79E8(ctx, base);
loc_82AC7BC8:
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

__attribute__((alias("__imp__sub_82AC7BDC"))) PPC_WEAK_FUNC(sub_82AC7BDC);
PPC_FUNC_IMPL(__imp__sub_82AC7BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC7BE0"))) PPC_WEAK_FUNC(sub_82AC7BE0);
PPC_FUNC_IMPL(__imp__sub_82AC7BE0) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,31719
	ctx.r4.s64 = ctx.r9.s64 + 31719;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82AC7C20;
	sub_8259CC28(ctx, base);
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// bl 0x831cdcf0
	ctx.lr = 0x82AC7C30;
	sub_831CDCF0(ctx, base);
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x831cdcf0
	ctx.lr = 0x82AC7C40;
	sub_831CDCF0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82ac6828
	ctx.lr = 0x82AC7C4C;
	sub_82AC6828(ctx, base);
	// ld r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// bl 0x83763ef8
	ctx.lr = 0x82AC7C54;
	sub_83763EF8(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83775138
	ctx.lr = 0x82AC7C60;
	sub_83775138(ctx, base);
	// li r5,106
	ctx.r5.s64 = 106;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82a725e8
	ctx.lr = 0x82AC7C70;
	sub_82A725E8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// beq cr6,0x82ac7c9c
	if (cr6.eq) goto loc_82AC7C9C;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82AC7C9C:
	// bl 0x82d1ebf8
	ctx.lr = 0x82AC7CA0;
	sub_82D1EBF8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ac7cc0
	if (cr6.lt) goto loc_82AC7CC0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82AC7CC0;
	sub_825952B8(ctx, base);
loc_82AC7CC0:
	// li r3,1
	ctx.r3.s64 = 1;
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
}

__attribute__((alias("__imp__sub_82AC7CDC"))) PPC_WEAK_FUNC(sub_82AC7CDC);
PPC_FUNC_IMPL(__imp__sub_82AC7CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC7CE0"))) PPC_WEAK_FUNC(sub_82AC7CE0);
PPC_FUNC_IMPL(__imp__sub_82AC7CE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82AC7CE8;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x83763ef8
	ctx.lr = 0x82AC7CFC;
	sub_83763EF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bda618
	ctx.lr = 0x82AC7D04;
	sub_82BDA618(ctx, base);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// addi r11,r26,224
	ctx.r11.s64 = ctx.r26.s64 + 224;
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// li r5,107
	ctx.r5.s64 = 107;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a725e8
	ctx.lr = 0x82AC7D38;
	sub_82A725E8(ctx, base);
	// li r9,20
	ctx.r9.s64 = 20;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82AC7D48:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82ac7d48
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82AC7D48;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r27,-1
	ctx.r27.s64 = -1;
	// ori r28,r9,65523
	ctx.r28.u64 = ctx.r9.u64 | 65523;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ac7d74
	if (!cr6.eq) goto loc_82AC7D74;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82ac7db0
	goto loc_82AC7DB0;
loc_82AC7D74:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8306e7c8
	ctx.lr = 0x82AC7D7C;
	sub_8306E7C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ac7d90
	if (!cr6.eq) goto loc_82AC7D90;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// b 0x82ac7da0
	goto loc_82AC7DA0;
loc_82AC7D90:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,164
	ctx.r5.s64 = 164;
	// bl 0x831ce980
	ctx.lr = 0x82AC7D9C;
	sub_831CE980(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
loc_82AC7DA0:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83774208
	ctx.lr = 0x82AC7DB0;
	sub_83774208(ctx, base);
loc_82AC7DB0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac7de8
	if (cr6.eq) goto loc_82AC7DE8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82ac6828
	ctx.lr = 0x82AC7DC8;
	sub_82AC6828(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x82a94108
	ctx.lr = 0x82AC7DD8;
	sub_82A94108(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ac7de8
	if (cr6.eq) goto loc_82AC7DE8;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82AC7DE8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac7e14
	if (cr6.eq) goto loc_82AC7E14;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82ac6828
	ctx.lr = 0x82AC7E00;
	sub_82AC6828(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x82a94190
	ctx.lr = 0x82AC7E10;
	sub_82A94190(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_82AC7E14:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bd9f68
	ctx.lr = 0x82AC7E20;
	sub_82BD9F68(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ac7e34
	if (!cr6.lt) goto loc_82AC7E34;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82AC7E34:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bdc248
	ctx.lr = 0x82AC7E3C;
	sub_82BDC248(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bdc228
	ctx.lr = 0x82AC7E48;
	sub_82BDC228(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// bl 0x82ac6828
	ctx.lr = 0x82AC7E58;
	sub_82AC6828(ctx, base);
	// ld r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bdc118
	ctx.lr = 0x82AC7E78;
	sub_82BDC118(ctx, base);
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
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82bd9e08
	ctx.lr = 0x82AC7E9C;
	sub_82BD9E08(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82bd9d78
	ctx.lr = 0x82AC7EA8;
	sub_82BD9D78(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bdbb88
	ctx.lr = 0x82AC7EBC;
	sub_82BDBB88(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bd9dd0
	ctx.lr = 0x82AC7EC8;
	sub_82BD9DD0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bda498
	ctx.lr = 0x82AC7ED4;
	sub_82BDA498(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ac7ef4
	if (cr6.lt) goto loc_82AC7EF4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82AC7EF4;
	sub_825952B8(ctx, base);
loc_82AC7EF4:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC7F00"))) PPC_WEAK_FUNC(sub_82AC7F00);
PPC_FUNC_IMPL(__imp__sub_82AC7F00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82AC7F08;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,212(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac7f68
	if (cr6.eq) goto loc_82AC7F68;
	// bl 0x82d19a78
	ctx.lr = 0x82AC7F20;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82AC7F28;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac7f40
	if (cr6.eq) goto loc_82AC7F40;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82AC7F40;
	sub_82D2B608(ctx, base);
loc_82AC7F40:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AC7F48;
	sub_82D19A78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d33db0
	ctx.lr = 0x82AC7F50;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac7f68
	if (cr6.eq) goto loc_82AC7F68;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82AC7F68;
	sub_82D2B608(ctx, base);
loc_82AC7F68:
	// bl 0x83763ef8
	ctx.lr = 0x82AC7F6C;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ac7f84
	if (!cr6.eq) goto loc_82AC7F84;
	// bl 0x83768598
	ctx.lr = 0x82AC7F78;
	sub_83768598(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82AC7F84:
	// bl 0x82bda618
	ctx.lr = 0x82AC7F88;
	sub_82BDA618(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ac7fa4
	if (!cr6.eq) goto loc_82AC7FA4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bdc5e8
	ctx.lr = 0x82AC7F98;
	sub_82BDC5E8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82AC7FA4:
	// bl 0x83763ef8
	ctx.lr = 0x82AC7FA8;
	sub_83763EF8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82bda618
	ctx.lr = 0x82AC7FB0;
	sub_82BDA618(ctx, base);
	// lbz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 208);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ac7fe4
	if (!cr6.eq) goto loc_82AC7FE4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82bda498
	ctx.lr = 0x82AC7FCC;
	sub_82BDA498(ctx, base);
	// lwz r3,76(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac809c
	if (cr6.eq) goto loc_82AC809C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x837c9db8
	ctx.lr = 0x82AC7FE0;
	sub_837C9DB8(ctx, base);
	// b 0x82ac809c
	goto loc_82AC809C;
loc_82AC7FE4:
	// lwz r11,204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82ac8298
	if (cr6.lt) goto loc_82AC8298;
	// beq cr6,0x82ac822c
	if (cr6.eq) goto loc_82AC822C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82ac809c
	if (!cr6.eq) goto loc_82AC809C;
	// bl 0x831156e8
	ctx.lr = 0x82AC8000;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addis r27,r11,222
	ctx.r27.s64 = ctx.r11.s64 + 14548992;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r27,r27,30196
	ctx.r27.s64 = ctx.r27.s64 + 30196;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a76558
	ctx.lr = 0x82AC8020;
	sub_82A76558(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ac8050
	if (!cr6.eq) goto loc_82AC8050;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82ac6828
	ctx.lr = 0x82AC8038;
	sub_82AC6828(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x83777e50
	ctx.lr = 0x82AC804C;
	sub_83777E50(ctx, base);
	// b 0x82ac8070
	goto loc_82AC8070;
loc_82AC8050:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ac6828
	ctx.lr = 0x82AC8058;
	sub_82AC6828(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x83777d88
	ctx.lr = 0x82AC8070;
	sub_83777D88(ctx, base);
loc_82AC8070:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82ac6828
	ctx.lr = 0x82AC807C;
	sub_82AC6828(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x82a8f3f8
	ctx.lr = 0x82AC808C;
	sub_82A8F3F8(ctx, base);
	// lis r4,3
	ctx.r4.s64 = 196608;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r4,r4,65523
	ctx.r4.u64 = ctx.r4.u64 | 65523;
	// bl 0x82a70010
	ctx.lr = 0x82AC809C;
	sub_82A70010(ctx, base);
loc_82AC809C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82ac6828
	ctx.lr = 0x82AC80A8;
	sub_82AC6828(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r30,224
	ctx.r4.s64 = ctx.r30.s64 + 224;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x83775138
	ctx.lr = 0x82AC80BC;
	sub_83775138(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ac7ce0
	ctx.lr = 0x82AC80C4;
	sub_82AC7CE0(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lwz r8,300(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 300);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AC80EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac8160
	if (cr6.eq) goto loc_82AC8160;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r27,r10,-11068
	ctx.r27.s64 = ctx.r10.s64 + -11068;
loc_82AC8108:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwzx r4,r29,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bdc948
	ctx.lr = 0x82AC811C;
	sub_82BDC948(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r4,r29,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d233b0
	ctx.lr = 0x82AC8130;
	sub_82D233B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ac68e8
	ctx.lr = 0x82AC813C;
	sub_82AC68E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ac7550
	ctx.lr = 0x82AC814C;
	sub_82AC7550(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// blt cr6,0x82ac8108
	if (cr6.lt) goto loc_82AC8108;
loc_82AC8160:
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ac8174
	if (!cr6.eq) goto loc_82AC8174;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ac7b18
	ctx.lr = 0x82AC8174;
	sub_82AC7B18(ctx, base);
loc_82AC8174:
	// lbz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ac81e0
	if (!cr6.eq) goto loc_82AC81E0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AC8188;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r29,r11,31916
	ctx.r29.s64 = ctx.r11.s64 + 31916;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AC81A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac81e0
	if (cr6.eq) goto loc_82AC81E0;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82AC81C4;
	sub_82D2B608(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AC81E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82AC81E0:
	// bl 0x82d14ce8
	ctx.lr = 0x82AC81E4;
	sub_82D14CE8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac81f8
	if (cr6.eq) goto loc_82AC81F8;
	// bl 0x82d14ce8
	ctx.lr = 0x82AC81F0;
	sub_82D14CE8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d12e58
	ctx.lr = 0x82AC81F8;
	sub_82D12E58(ctx, base);
loc_82AC81F8:
	// lis r5,40
	ctx.r5.s64 = 2621440;
	// li r4,14
	ctx.r4.s64 = 14;
	// ori r5,r5,200
	ctx.r5.u64 = ctx.r5.u64 | 200;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82AC820C;
	sub_82D20EB8(ctx, base);
	// lis r5,33
	ctx.r5.s64 = 2162688;
	// li r4,15
	ctx.r4.s64 = 15;
	// ori r5,r5,93
	ctx.r5.u64 = ctx.r5.u64 | 93;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82AC8220;
	sub_82D20EB8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82AC822C:
	// addi r3,r28,84
	ctx.r3.s64 = ctx.r28.s64 + 84;
	// bl 0x8376eaa0
	ctx.lr = 0x82AC8234;
	sub_8376EAA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac82b0
	if (cr6.eq) goto loc_82AC82B0;
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ac8264
	if (!cr6.eq) goto loc_82AC8264;
	// lwz r11,92(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// blt cr6,0x82ac8264
	if (cr6.lt) goto loc_82AC8264;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82ac8268
	if (!cr6.gt) goto loc_82AC8268;
loc_82AC8264:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AC8268:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac82b0
	if (cr6.eq) goto loc_82AC82B0;
	// bl 0x830ee130
	ctx.lr = 0x82AC8278;
	sub_830EE130(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ac82b4
	if (!cr6.eq) goto loc_82AC82B4;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 204, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82AC8298:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r28,84
	ctx.r3.s64 = ctx.r28.s64 + 84;
	// bl 0x8376eb58
	ctx.lr = 0x82AC82A4;
	sub_8376EB58(ctx, base);
	// bl 0x830ee638
	ctx.lr = 0x82AC82A8;
	sub_830EE638(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 204, ctx.r11.u32);
loc_82AC82B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AC82B4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC82BC"))) PPC_WEAK_FUNC(sub_82AC82BC);
PPC_FUNC_IMPL(__imp__sub_82AC82BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC82C0"))) PPC_WEAK_FUNC(sub_82AC82C0);
PPC_FUNC_IMPL(__imp__sub_82AC82C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x82AC82DC;
	sub_82BDA618(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac8344
	if (cr6.eq) goto loc_82AC8344;
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac8314
	if (cr6.eq) goto loc_82AC8314;
	// bl 0x837c9c08
	ctx.lr = 0x82AC82F8;
	sub_837C9C08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac8314
	if (cr6.eq) goto loc_82AC8314;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82ac8318
	if (cr6.eq) goto loc_82AC8318;
loc_82AC8314:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AC8318:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac8344
	if (cr6.eq) goto loc_82AC8344;
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac833c
	if (cr6.eq) goto loc_82AC833C;
	// lbz r11,412(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 412);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac8344
	if (cr6.eq) goto loc_82AC8344;
loc_82AC833C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ac7b18
	ctx.lr = 0x82AC8344;
	sub_82AC7B18(ctx, base);
loc_82AC8344:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC8360"))) PPC_WEAK_FUNC(sub_82AC8360);
PPC_FUNC_IMPL(__imp__sub_82AC8360) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82AC8368;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82AC8374;
	sub_82D1C1A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82AC8380;
	sub_82D19BA0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ac83dc
	if (!cr6.eq) goto loc_82AC83DC;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// beq cr6,0x82ac8414
	if (cr6.eq) goto loc_82AC8414;
	// lwz r3,200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// bl 0x83a970c8
	ctx.lr = 0x82AC8398;
	sub_83A970C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ac67c8
	ctx.lr = 0x82AC83A4;
	sub_82AC67C8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// bl 0x83121088
	ctx.lr = 0x82AC83B0;
	sub_83121088(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-11068
	ctx.r9.s64 = ctx.r11.s64 + -11068;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82d20da8
	ctx.lr = 0x82AC83CC;
	sub_82D20DA8(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 413, ctx.r8.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82AC83DC:
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82ac8414
	if (!cr6.eq) goto loc_82AC8414;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ac7898
	ctx.lr = 0x82AC83EC;
	sub_82AC7898(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac8414
	if (cr6.eq) goto loc_82AC8414;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ac6ec0
	ctx.lr = 0x82AC8400;
	sub_82AC6EC0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,31924
	ctx.r5.s64 = ctx.r11.s64 + 31924;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82AC8414;
	sub_82D20DA8(ctx, base);
loc_82AC8414:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC841C"))) PPC_WEAK_FUNC(sub_82AC841C);
PPC_FUNC_IMPL(__imp__sub_82AC841C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC8420"))) PPC_WEAK_FUNC(sub_82AC8420);
PPC_FUNC_IMPL(__imp__sub_82AC8420) {
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
	// lbz r11,220(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 220);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac84b0
	if (cr6.eq) goto loc_82AC84B0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r11,31948
	ctx.r11.s64 = ctx.r11.s64 + 31948;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x82AC8460;
	sub_82D2F6D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r3.u32);
	// beq cr6,0x82ac84e0
	if (cr6.eq) goto loc_82AC84E0;
	// lis r11,244
	ctx.r11.s64 = 15990784;
	// lis r10,108
	ctx.r10.s64 = 7077888;
	// ori r9,r11,18
	ctx.r9.u64 = ctx.r11.u64 | 18;
	// ori r8,r10,26
	ctx.r8.u64 = ctx.r10.u64 | 26;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d2ac30
	ctx.lr = 0x82AC8490;
	sub_82D2AC30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,216(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// bl 0x83103100
	ctx.lr = 0x82AC849C;
	sub_83103100(ctx, base);
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
loc_82AC84B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ac7898
	ctx.lr = 0x82AC84B8;
	sub_82AC7898(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac84e0
	if (cr6.eq) goto loc_82AC84E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ac6ec0
	ctx.lr = 0x82AC84CC;
	sub_82AC6EC0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,31948
	ctx.r5.s64 = ctx.r11.s64 + 31948;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82AC84E0;
	sub_82D20DA8(ctx, base);
loc_82AC84E0:
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

__attribute__((alias("__imp__sub_82AC84F4"))) PPC_WEAK_FUNC(sub_82AC84F4);
PPC_FUNC_IMPL(__imp__sub_82AC84F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC84F8"))) PPC_WEAK_FUNC(sub_82AC84F8);
PPC_FUNC_IMPL(__imp__sub_82AC84F8) {
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
	// lwz r11,584(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 584);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82ac853c
	if (cr6.lt) goto loc_82AC853C;
	// beq cr6,0x82ac8530
	if (cr6.eq) goto loc_82AC8530;
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// ori r4,r4,496
	ctx.r4.u64 = ctx.r4.u64 | 496;
	// bl 0x82d2a1c8
	ctx.lr = 0x82AC8520;
	sub_82D2A1C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82AC8530:
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// ori r4,r4,4
	ctx.r4.u64 = ctx.r4.u64 | 4;
	// b 0x82ac8544
	goto loc_82AC8544;
loc_82AC853C:
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
loc_82AC8544:
	// bl 0x82d2a1c8
	ctx.lr = 0x82AC8548;
	sub_82D2A1C8(ctx, base);
	// bl 0x82d26ed8
	ctx.lr = 0x82AC854C;
	sub_82D26ED8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d26900
	ctx.lr = 0x82AC8554;
	sub_82D26900(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC8564"))) PPC_WEAK_FUNC(sub_82AC8564);
PPC_FUNC_IMPL(__imp__sub_82AC8564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC8568"))) PPC_WEAK_FUNC(sub_82AC8568);
PPC_FUNC_IMPL(__imp__sub_82AC8568) {
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
	ctx.lr = 0x82AC8580;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82AC8584;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,11
	cr6.compare<uint32_t>(ctx.r3.u32, 11, xer);
	// bne cr6,0x82ac85a8
	if (!cr6.eq) goto loc_82AC85A8;
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82ac85a8
	if (!cr6.eq) goto loc_82AC85A8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-32740
	ctx.r11.s64 = ctx.r11.s64 + -32740;
	// addi r5,r11,-8
	ctx.r5.s64 = ctx.r11.s64 + -8;
	// b 0x82ac85b0
	goto loc_82AC85B0;
loc_82AC85A8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r11,-32740
	ctx.r5.s64 = ctx.r11.s64 + -32740;
loc_82AC85B0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82AC85BC;
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

__attribute__((alias("__imp__sub_82AC85D0"))) PPC_WEAK_FUNC(sub_82AC85D0);
PPC_FUNC_IMPL(__imp__sub_82AC85D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-32632
	ctx.r9.s64 = ctx.r11.s64 + -32632;
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
	// bl 0x82d2fa18
	ctx.lr = 0x82AC8608;
	sub_82D2FA18(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82ac8620
	if (cr6.eq) goto loc_82AC8620;
	// bl 0x82416268
	ctx.lr = 0x82AC861C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AC8620:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC8638"))) PPC_WEAK_FUNC(sub_82AC8638);
PPC_FUNC_IMPL(__imp__sub_82AC8638) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82AC8640;
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
	// li r4,592
	ctx.r4.s64 = 592;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82AC8668;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac86a8
	if (cr6.eq) goto loc_82AC86A8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c12cd8
	ctx.lr = 0x82AC8680;
	sub_82C12CD8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stw r28,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r28.u32);
	// addi r9,r11,-32632
	ctx.r9.s64 = ctx.r11.s64 + -32632;
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
loc_82AC86A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC86B4"))) PPC_WEAK_FUNC(sub_82AC86B4);
PPC_FUNC_IMPL(__imp__sub_82AC86B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC86B8"))) PPC_WEAK_FUNC(sub_82AC86B8);
PPC_FUNC_IMPL(__imp__sub_82AC86B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ac86c8
	if (cr6.lt) goto loc_82AC86C8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82AC86C8:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82ac8638
	sub_82AC8638(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC86D4"))) PPC_WEAK_FUNC(sub_82AC86D4);
PPC_FUNC_IMPL(__imp__sub_82AC86D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC86D8"))) PPC_WEAK_FUNC(sub_82AC86D8);
PPC_FUNC_IMPL(__imp__sub_82AC86D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ac86e8
	if (cr6.lt) goto loc_82AC86E8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82AC86E8:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82ac8638
	sub_82AC8638(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC86F4"))) PPC_WEAK_FUNC(sub_82AC86F4);
PPC_FUNC_IMPL(__imp__sub_82AC86F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

