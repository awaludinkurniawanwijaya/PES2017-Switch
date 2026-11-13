#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83096E34"))) PPC_WEAK_FUNC(sub_83096E34);
PPC_FUNC_IMPL(__imp__sub_83096E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83096E38"))) PPC_WEAK_FUNC(sub_83096E38);
PPC_FUNC_IMPL(__imp__sub_83096E38) {
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
	// lis r31,-31754
	ctx.r31.s64 = -2081030144;
	// lwz r11,22480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22480);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83096e8c
	if (cr6.eq) goto loc_83096E8C;
	// li r11,25
	ctx.r11.s64 = 25;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83096E6C;
	sub_82595150(ctx, base);
	// lwz r3,22480(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22480);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83096e7c
	if (cr6.eq) goto loc_83096E7C;
	// bl 0x82416268
	ctx.lr = 0x83096E7C;
	sub_82416268(ctx, base);
loc_83096E7C:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83096E84;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,22480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22480, ctx.r11.u32);
loc_83096E8C:
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

__attribute__((alias("__imp__sub_83096EA0"))) PPC_WEAK_FUNC(sub_83096EA0);
PPC_FUNC_IMPL(__imp__sub_83096EA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// bgt cr6,0x83096ed4
	if (cr6.gt) goto loc_83096ED4;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83096ec4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83096EC4;
	// bdzf 4*cr6+eq,0x83096ec8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83096EC8;
	// bdzf 4*cr6+eq,0x83096ecc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83096ECC;
	// bne cr6,0x83096ed0
	if (!cr6.eq) goto loc_83096ED0;
	// b 0x830976b8
	sub_830976B8(ctx, base);
	return;
loc_83096EC4:
	// b 0x830975a0
	sub_830975A0(ctx, base);
	return;
loc_83096EC8:
	// b 0x830973d0
	sub_830973D0(ctx, base);
	return;
loc_83096ECC:
	// b 0x830972b8
	sub_830972B8(ctx, base);
	return;
loc_83096ED0:
	// b 0x83096ee0
	sub_83096EE0(ctx, base);
	return;
loc_83096ED4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83096EDC"))) PPC_WEAK_FUNC(sub_83096EDC);
PPC_FUNC_IMPL(__imp__sub_83096EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83096EE0"))) PPC_WEAK_FUNC(sub_83096EE0);
PPC_FUNC_IMPL(__imp__sub_83096EE0) {
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
	// li r11,25
	ctx.r11.s64 = 25;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83096F08;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83096f3c
	if (cr6.eq) goto loc_83096F3C;
	// bl 0x830e8b90
	ctx.lr = 0x83096F18;
	sub_830E8B90(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,19360
	ctx.r10.s64 = ctx.r11.s64 + 19360;
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
loc_83096F3C:
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

__attribute__((alias("__imp__sub_83096F54"))) PPC_WEAK_FUNC(sub_83096F54);
PPC_FUNC_IMPL(__imp__sub_83096F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83096F58"))) PPC_WEAK_FUNC(sub_83096F58);
PPC_FUNC_IMPL(__imp__sub_83096F58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,19360
	ctx.r10.s64 = ctx.r11.s64 + 19360;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83063f78
	ctx.lr = 0x83096F84;
	sub_83063F78(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83096f9c
	if (cr6.eq) goto loc_83096F9C;
	// bl 0x82416268
	ctx.lr = 0x83096F98;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83096F9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83096FB4"))) PPC_WEAK_FUNC(sub_83096FB4);
PPC_FUNC_IMPL(__imp__sub_83096FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83096FB8"))) PPC_WEAK_FUNC(sub_83096FB8);
PPC_FUNC_IMPL(__imp__sub_83096FB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83096FC0;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r31,r5,-24
	ctx.r31.s64 = ctx.r5.s64 + -24;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// lis r29,-31763
	ctx.r29.s64 = -2081619968;
loc_83096FE4:
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// blt cr6,0x83097000
	if (cr6.lt) goto loc_83097000;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// blt cr6,0x83097004
	if (cr6.lt) goto loc_83097004;
loc_83097000:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_83097004:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83097024
	if (cr6.eq) goto loc_83097024;
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x83097028
	goto loc_83097028;
loc_83097024:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_83097028:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83097078
	if (cr6.eq) goto loc_83097078;
	// stb r28,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r28.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-3564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// bl 0x82a0c7b0
	ctx.lr = 0x83097044;
	sub_82A0C7B0(ctx, base);
	// bl 0x82a36688
	ctx.lr = 0x83097048;
	sub_82A36688(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-3564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x83097058;
	sub_82A0C788(ctx, base);
	// addi r11,r3,1280
	ctx.r11.s64 = ctx.r3.s64 + 1280;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,40(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// b 0x8309708c
	goto loc_8309708C;
loc_83097078:
	// stb r27,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r27.u8);
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// stfs f31,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f31,36(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f31,40(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
loc_8309708C:
	// stwu r30,24(r31)
	ea = 24 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r31.u32 = ea;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// blt cr6,0x83096fe4
	if (cr6.lt) goto loc_83096FE4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830970A8"))) PPC_WEAK_FUNC(sub_830970A8);
PPC_FUNC_IMPL(__imp__sub_830970A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x830970B0;
	__savegprlr_22(ctx, base);
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r28,22
	ctx.r28.s64 = 22;
	// addi r31,r5,532
	ctx.r31.s64 = ctx.r5.s64 + 532;
	// lfs f30,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// li r27,1
	ctx.r27.s64 = 1;
	// lfs f31,-24912(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24912);
	ctx.f31.f64 = double(temp.f32);
	// li r22,2
	ctx.r22.s64 = 2;
	// li r23,3
	ctx.r23.s64 = 3;
	// li r24,4
	ctx.r24.s64 = 4;
	// li r25,0
	ctx.r25.s64 = 0;
	// lis r29,-31763
	ctx.r29.s64 = -2081619968;
	// addi r26,r11,19220
	ctx.r26.s64 = ctx.r11.s64 + 19220;
loc_830970F4:
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// lwz r3,472(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// bl 0x82a47d40
	ctx.lr = 0x83097100;
	sub_82A47D40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830971d8
	if (!cr6.eq) goto loc_830971D8;
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x82da1d10
	ctx.lr = 0x83097118;
	sub_82DA1D10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830971d8
	if (!cr6.eq) goto loc_830971D8;
	// stb r27,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r27.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-3564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x83097134;
	sub_82A0C788(ctx, base);
	// addi r11,r3,1280
	ctx.r11.s64 = ctx.r3.s64 + 1280;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lwz r3,-3564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// bl 0x82a0c760
	ctx.lr = 0x8309715C;
	sub_82A0C760(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-3564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// rlwinm r8,r9,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// srawi r30,r8,24
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFFFF) != 0);
	ctx.r30.s64 = ctx.r8.s32 >> 24;
	// bl 0x82a0c788
	ctx.lr = 0x83097178;
	sub_82A0C788(ctx, base);
	// bl 0x8261a830
	ctx.lr = 0x8309717C;
	sub_8261A830(ctx, base);
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// beq cr6,0x830971d0
	if (cr6.eq) goto loc_830971D0;
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x830971d0
	if (!cr6.gt) goto loc_830971D0;
	// lfs f0,-8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x830971a0
	if (cr6.gt) goto loc_830971A0;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// b 0x830971ec
	goto loc_830971EC;
loc_830971A0:
	// lfs f0,-4(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x830971b4
	if (cr6.gt) goto loc_830971B4;
	// stw r22,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r22.u32);
	// b 0x830971ec
	goto loc_830971EC;
loc_830971B4:
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x830971c8
	if (cr6.gt) goto loc_830971C8;
	// stw r23,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r23.u32);
	// b 0x830971ec
	goto loc_830971EC;
loc_830971C8:
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// b 0x830971ec
	goto loc_830971EC;
loc_830971D0:
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// b 0x830971ec
	goto loc_830971EC;
loc_830971D8:
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// stb r25,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r25.u8);
	// stfs f30,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f30,8(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f30,12(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_830971EC:
	// stw r28,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r28.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// cmpwi cr6,r28,25
	cr6.compare<int32_t>(ctx.r28.s32, 25, xer);
	// blt cr6,0x830970f4
	if (cr6.lt) goto loc_830970F4;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83097210"))) PPC_WEAK_FUNC(sub_83097210);
PPC_FUNC_IMPL(__imp__sub_83097210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,25
	ctx.r10.s64 = 25;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lfs f0,9008(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// li r8,5
	ctx.r8.s64 = 5;
	// li r9,0
	ctx.r9.s64 = 0;
loc_83097248:
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stb r9,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r9.u8);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfsu f0,24(r11)
	ea = 24 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83097248
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83097248;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83096fb8
	ctx.lr = 0x83097280;
	sub_83096FB8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830970a8
	ctx.lr = 0x83097290;
	sub_830970A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830f27e0
	ctx.lr = 0x83097298;
	sub_830F27E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830972B4"))) PPC_WEAK_FUNC(sub_830972B4);
PPC_FUNC_IMPL(__imp__sub_830972B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830972B8"))) PPC_WEAK_FUNC(sub_830972B8);
PPC_FUNC_IMPL(__imp__sub_830972B8) {
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
	// li r11,25
	ctx.r11.s64 = 25;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830972E0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83097314
	if (cr6.eq) goto loc_83097314;
	// bl 0x830e8b90
	ctx.lr = 0x830972F0;
	sub_830E8B90(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,19536
	ctx.r10.s64 = ctx.r11.s64 + 19536;
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
loc_83097314:
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

__attribute__((alias("__imp__sub_8309732C"))) PPC_WEAK_FUNC(sub_8309732C);
PPC_FUNC_IMPL(__imp__sub_8309732C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83097330"))) PPC_WEAK_FUNC(sub_83097330);
PPC_FUNC_IMPL(__imp__sub_83097330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x83096d00
	ctx.lr = 0x83097340;
	sub_83096D00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83096d80
	ctx.lr = 0x8309734C;
	sub_83096D80(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r4,r11,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x830f2600
	ctx.lr = 0x8309735C;
	sub_830F2600(ctx, base);
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
}

__attribute__((alias("__imp__sub_83097370"))) PPC_WEAK_FUNC(sub_83097370);
PPC_FUNC_IMPL(__imp__sub_83097370) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,19536
	ctx.r10.s64 = ctx.r11.s64 + 19536;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83063f78
	ctx.lr = 0x8309739C;
	sub_83063F78(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830973b4
	if (cr6.eq) goto loc_830973B4;
	// bl 0x82416268
	ctx.lr = 0x830973B0;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830973B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830973CC"))) PPC_WEAK_FUNC(sub_830973CC);
PPC_FUNC_IMPL(__imp__sub_830973CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830973D0"))) PPC_WEAK_FUNC(sub_830973D0);
PPC_FUNC_IMPL(__imp__sub_830973D0) {
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
	// li r11,25
	ctx.r11.s64 = 25;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830973F8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8309742c
	if (cr6.eq) goto loc_8309742C;
	// bl 0x830e8b90
	ctx.lr = 0x83097408;
	sub_830E8B90(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,19712
	ctx.r10.s64 = ctx.r11.s64 + 19712;
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
loc_8309742C:
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

__attribute__((alias("__imp__sub_83097444"))) PPC_WEAK_FUNC(sub_83097444);
PPC_FUNC_IMPL(__imp__sub_83097444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83097448"))) PPC_WEAK_FUNC(sub_83097448);
PPC_FUNC_IMPL(__imp__sub_83097448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,19712
	ctx.r10.s64 = ctx.r11.s64 + 19712;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83063f78
	ctx.lr = 0x83097474;
	sub_83063F78(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8309748c
	if (cr6.eq) goto loc_8309748C;
	// bl 0x82416268
	ctx.lr = 0x83097488;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8309748C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830974A4"))) PPC_WEAK_FUNC(sub_830974A4);
PPC_FUNC_IMPL(__imp__sub_830974A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830974A8"))) PPC_WEAK_FUNC(sub_830974A8);
PPC_FUNC_IMPL(__imp__sub_830974A8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x83096d00
	ctx.lr = 0x830974B8;
	sub_83096D00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83096d38
	ctx.lr = 0x830974C4;
	sub_83096D38(ctx, base);
	// bl 0x83096d00
	ctx.lr = 0x830974C8;
	sub_83096D00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83096d80
	ctx.lr = 0x830974D4;
	sub_83096D80(ctx, base);
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f10,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// lfs f7,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f0,f6,f7
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// lfs f12,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f11,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f5,f13,f13
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f4,f8,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f3,f0,f0,f4
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f4.f64));
	// fsqrts f10,f3
	ctx.f10.f64 = double(float(sqrt(ctx.f3.f64)));
	// fcmpu cr6,f10,f12
	cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// beq cr6,0x83097548
	if (cr6.eq) goto loc_83097548;
	// fdivs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_83097548:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bne cr6,0x83097568
	if (!cr6.eq) goto loc_83097568;
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bne cr6,0x83097568
	if (!cr6.eq) goto loc_83097568;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,20056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_83097568:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f12,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r4,r10,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x830f2568
	ctx.lr = 0x83097588;
	sub_830F2568(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309759C"))) PPC_WEAK_FUNC(sub_8309759C);
PPC_FUNC_IMPL(__imp__sub_8309759C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830975A0"))) PPC_WEAK_FUNC(sub_830975A0);
PPC_FUNC_IMPL(__imp__sub_830975A0) {
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
	// li r11,25
	ctx.r11.s64 = 25;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830975C8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830975fc
	if (cr6.eq) goto loc_830975FC;
	// bl 0x830e8b90
	ctx.lr = 0x830975D8;
	sub_830E8B90(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,19888
	ctx.r10.s64 = ctx.r11.s64 + 19888;
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
loc_830975FC:
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

__attribute__((alias("__imp__sub_83097614"))) PPC_WEAK_FUNC(sub_83097614);
PPC_FUNC_IMPL(__imp__sub_83097614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83097618"))) PPC_WEAK_FUNC(sub_83097618);
PPC_FUNC_IMPL(__imp__sub_83097618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x83096d00
	ctx.lr = 0x83097628;
	sub_83096D00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83096d38
	ctx.lr = 0x83097634;
	sub_83096D38(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r4,r11,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x830f24e8
	ctx.lr = 0x83097644;
	sub_830F24E8(ctx, base);
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
}

__attribute__((alias("__imp__sub_83097658"))) PPC_WEAK_FUNC(sub_83097658);
PPC_FUNC_IMPL(__imp__sub_83097658) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,19888
	ctx.r10.s64 = ctx.r11.s64 + 19888;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83063f78
	ctx.lr = 0x83097684;
	sub_83063F78(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8309769c
	if (cr6.eq) goto loc_8309769C;
	// bl 0x82416268
	ctx.lr = 0x83097698;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8309769C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830976B4"))) PPC_WEAK_FUNC(sub_830976B4);
PPC_FUNC_IMPL(__imp__sub_830976B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830976B8"))) PPC_WEAK_FUNC(sub_830976B8);
PPC_FUNC_IMPL(__imp__sub_830976B8) {
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
	// li r11,25
	ctx.r11.s64 = 25;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830976E0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8309771c
	if (cr6.eq) goto loc_8309771C;
	// bl 0x830e8b90
	ctx.lr = 0x830976F0;
	sub_830E8B90(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r10,255
	ctx.r10.s64 = 255;
	// addi r9,r11,20064
	ctx.r9.s64 = ctx.r11.s64 + 20064;
	// stb r10,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
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
loc_8309771C:
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

__attribute__((alias("__imp__sub_83097734"))) PPC_WEAK_FUNC(sub_83097734);
PPC_FUNC_IMPL(__imp__sub_83097734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83097738"))) PPC_WEAK_FUNC(sub_83097738);
PPC_FUNC_IMPL(__imp__sub_83097738) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,20064
	ctx.r10.s64 = ctx.r11.s64 + 20064;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83063f78
	ctx.lr = 0x83097764;
	sub_83063F78(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8309777c
	if (cr6.eq) goto loc_8309777C;
	// bl 0x82416268
	ctx.lr = 0x83097778;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8309777C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83097794"))) PPC_WEAK_FUNC(sub_83097794);
PPC_FUNC_IMPL(__imp__sub_83097794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83097798"))) PPC_WEAK_FUNC(sub_83097798);
PPC_FUNC_IMPL(__imp__sub_83097798) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lbz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r9,312(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// lbz r11,64(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 64);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x830977d0
	if (cr6.eq) goto loc_830977D0;
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x830f2378
	ctx.lr = 0x830977D0;
	sub_830F2378(ctx, base);
loc_830977D0:
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

__attribute__((alias("__imp__sub_830977E4"))) PPC_WEAK_FUNC(sub_830977E4);
PPC_FUNC_IMPL(__imp__sub_830977E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830977E8"))) PPC_WEAK_FUNC(sub_830977E8);
PPC_FUNC_IMPL(__imp__sub_830977E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830977F0;
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
	// bl 0x830a2c10
	ctx.lr = 0x83097804;
	sub_830A2C10(ctx, base);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r9,r10,20488
	ctx.r9.s64 = ctx.r10.s64 + 20488;
	// stb r11,568(r31)
	PPC_STORE_U8(ctx.r31.u32 + 568, ctx.r11.u8);
	// clrlwi r8,r29,24
	ctx.r8.u64 = ctx.r29.u32 & 0xFF;
	// stw r5,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r5.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stb r11,569(r31)
	PPC_STORE_U8(ctx.r31.u32 + 569, ctx.r11.u8);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r5,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r5.u32);
	// stb r11,289(r31)
	PPC_STORE_U8(ctx.r31.u32 + 289, ctx.r11.u8);
	// beq cr6,0x8309783c
	if (cr6.eq) goto loc_8309783C;
	// stb r5,568(r31)
	PPC_STORE_U8(ctx.r31.u32 + 568, ctx.r5.u8);
loc_8309783C:
	// lbz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 568);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83097860
	if (!cr6.eq) goto loc_83097860;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a0b50
	ctx.lr = 0x83097854;
	sub_830A0B50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83097860:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// beq cr6,0x83097890
	if (cr6.eq) goto loc_83097890;
	// addi r11,r11,20248
	ctx.r11.s64 = ctx.r11.s64 + 20248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-100
	ctx.r4.s64 = ctx.r11.s64 + -100;
	// addi r5,r11,-68
	ctx.r5.s64 = ctx.r11.s64 + -68;
	// bl 0x830a0b50
	ctx.lr = 0x83097884;
	sub_830A0B50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83097890:
	// addi r5,r11,20248
	ctx.r5.s64 = ctx.r11.s64 + 20248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r5,-52
	ctx.r4.s64 = ctx.r5.s64 + -52;
	// bl 0x830a0b50
	ctx.lr = 0x830978A0;
	sub_830A0B50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830978AC"))) PPC_WEAK_FUNC(sub_830978AC);
PPC_FUNC_IMPL(__imp__sub_830978AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830978B0"))) PPC_WEAK_FUNC(sub_830978B0);
PPC_FUNC_IMPL(__imp__sub_830978B0) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r31,r11,20296
	ctx.r31.s64 = ctx.r11.s64 + 20296;
	// addi r3,r31,-36
	ctx.r3.s64 = ctx.r31.s64 + -36;
	// bl 0x830f30c0
	ctx.lr = 0x830978D0;
	sub_830F30C0(ctx, base);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830f2f88
	ctx.lr = 0x830978DC;
	sub_830F2F88(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x830f2f88
	ctx.lr = 0x830978E8;
	sub_830F2F88(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x830978EC;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x830978F0;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,15
	cr6.compare<uint32_t>(ctx.r3.u32, 15, xer);
	// bne cr6,0x83097918
	if (!cr6.eq) goto loc_83097918;
	// bl 0x82d26ed8
	ctx.lr = 0x830978FC;
	sub_82D26ED8(ctx, base);
	// li r4,26
	ctx.r4.s64 = 26;
	// bl 0x82d26900
	ctx.lr = 0x83097904;
	sub_82D26900(ctx, base);
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
loc_83097918:
	// bl 0x82d26ed8
	ctx.lr = 0x8309791C;
	sub_82D26ED8(ctx, base);
	// li r4,1000
	ctx.r4.s64 = 1000;
	// bl 0x82d26960
	ctx.lr = 0x83097924;
	sub_82D26960(ctx, base);
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

__attribute__((alias("__imp__sub_83097938"))) PPC_WEAK_FUNC(sub_83097938);
PPC_FUNC_IMPL(__imp__sub_83097938) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83097940;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x8291ce48
	ctx.lr = 0x8309794C;
	sub_8291CE48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830979d8
	if (cr6.eq) goto loc_830979D8;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,20118
	ctx.r29.s64 = ctx.r11.s64 + 20118;
loc_83097964:
	// bl 0x82924d18
	ctx.lr = 0x83097968;
	sub_82924D18(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82924ef8
	ctx.lr = 0x83097978;
	sub_82924EF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830979cc
	if (cr6.eq) goto loc_830979CC;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8309798C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x830979b0
	if (cr6.eq) goto loc_830979B0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8309798c
	if (cr6.eq) goto loc_8309798C;
loc_830979B0:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830979cc
	if (cr6.eq) goto loc_830979CC;
	// bl 0x8291ce38
	ctx.lr = 0x830979BC;
	sub_8291CE38(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x8291d158
	ctx.lr = 0x830979CC;
	sub_8291D158(ctx, base);
loc_830979CC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// blt cr6,0x83097964
	if (cr6.lt) goto loc_83097964;
loc_830979D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830979E0"))) PPC_WEAK_FUNC(sub_830979E0);
PPC_FUNC_IMPL(__imp__sub_830979E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,20488
	ctx.r10.s64 = ctx.r11.s64 + 20488;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x830a2ab0
	ctx.lr = 0x83097A0C;
	sub_830A2AB0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83097a24
	if (cr6.eq) goto loc_83097A24;
	// bl 0x82416268
	ctx.lr = 0x83097A20;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83097A24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83097A3C"))) PPC_WEAK_FUNC(sub_83097A3C);
PPC_FUNC_IMPL(__imp__sub_83097A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83097A40"))) PPC_WEAK_FUNC(sub_83097A40);
PPC_FUNC_IMPL(__imp__sub_83097A40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83097A48;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// stw r6,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// addi r6,r1,172
	ctx.r6.s64 = ctx.r1.s64 + 172;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x830a0eb0
	ctx.lr = 0x83097A70;
	sub_830A0EB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83097a88
	if (!cr6.eq) goto loc_83097A88;
loc_83097A7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83097A88:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x830a6668
	ctx.lr = 0x83097A94;
	sub_830A6668(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x83097acc
	if (cr6.lt) goto loc_83097ACC;
	// beq cr6,0x83097abc
	if (cr6.eq) goto loc_83097ABC;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bge cr6,0x83097ad0
	if (!cr6.lt) goto loc_83097AD0;
	// lwz r11,492(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 492);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r10,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x83097ad0
	goto loc_83097AD0;
loc_83097ABC:
	// lwz r11,492(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 492);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r10,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x83097ad0
	goto loc_83097AD0;
loc_83097ACC:
	// li r31,1
	ctx.r31.s64 = 1;
loc_83097AD0:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83097a7c
	if (cr6.eq) goto loc_83097A7C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830a66c0
	ctx.lr = 0x83097AE4;
	sub_830A66C0(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r29,292
	ctx.r3.s64 = ctx.r29.s64 + 292;
	// bl 0x830fe280
	ctx.lr = 0x83097AF0;
	sub_830FE280(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83097a7c
	if (cr6.eq) goto loc_83097A7C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,492(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 492);
	// addi r3,r29,420
	ctx.r3.s64 = ctx.r29.s64 + 420;
	// bl 0x8309dd78
	ctx.lr = 0x83097B0C;
	sub_8309DD78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830e9240
	ctx.lr = 0x83097B14;
	sub_830E9240(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830e95a8
	ctx.lr = 0x83097B1C;
	sub_830E95A8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83097B30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83097938
	ctx.lr = 0x83097B3C;
	sub_83097938(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83097B50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83097B5C"))) PPC_WEAK_FUNC(sub_83097B5C);
PPC_FUNC_IMPL(__imp__sub_83097B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83097B60"))) PPC_WEAK_FUNC(sub_83097B60);
PPC_FUNC_IMPL(__imp__sub_83097B60) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addis r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 65536;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r8,r8,26988
	ctx.r8.s64 = ctx.r8.s64 + 26988;
	// lfs f0,8976(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8976);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f31,f11,f0
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f0,9008(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// ble cr6,0x83097bb4
	if (!cr6.gt) goto loc_83097BB4;
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
	// b 0x83097bc0
	goto loc_83097BC0;
loc_83097BB4:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x83097bc0
	if (!cr6.lt) goto loc_83097BC0;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_83097BC0:
	// fcmpu cr6,f31,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// ble cr6,0x83097bd0
	if (!cr6.gt) goto loc_83097BD0;
	// fmr f31,f13
	ctx.f31.f64 = ctx.f13.f64;
	// b 0x83097bdc
	goto loc_83097BDC;
loc_83097BD0:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x83097bdc
	if (!cr6.lt) goto loc_83097BDC;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_83097BDC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830f2d30
	ctx.lr = 0x83097BE4;
	sub_830F2D30(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x830f2d30
	ctx.lr = 0x83097BF0;
	sub_830F2D30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83097C04"))) PPC_WEAK_FUNC(sub_83097C04);
PPC_FUNC_IMPL(__imp__sub_83097C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83097C08"))) PPC_WEAK_FUNC(sub_83097C08);
PPC_FUNC_IMPL(__imp__sub_83097C08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83097C10;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r11,292(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// lwz r10,4456(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4456);
	// cmpwi cr6,r10,9
	cr6.compare<int32_t>(ctx.r10.s32, 9, xer);
	// bne cr6,0x83097c4c
	if (!cr6.eq) goto loc_83097C4C;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,569(r26)
	PPC_STORE_U8(ctx.r26.u32 + 569, ctx.r11.u8);
	// stw r10,572(r26)
	PPC_STORE_U32(ctx.r26.u32 + 572, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83097C4C:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r27,12(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r31,6112(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6112);
	// li r25,0
	ctx.r25.s64 = 0;
	// ori r9,r10,22620
	ctx.r9.u64 = ctx.r10.u64 | 22620;
	// lwz r30,32(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r24,4472(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4472);
	// lwzx r28,r27,r9
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r9.u32);
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// beq cr6,0x83097cd0
	if (cr6.eq) goto loc_83097CD0;
	// lwz r11,4460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4460);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83097cd0
	if (!cr6.eq) goto loc_83097CD0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82a0c710
	ctx.lr = 0x83097C88;
	sub_82A0C710(ctx, base);
	// lbz r11,252(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// lfs f12,8144(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8144);
	ctx.f12.f64 = double(temp.f32);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lfs f0,-4460(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4460);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmuls f7,f9,f12
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fcmpu cr6,f8,f7
	cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// bge cr6,0x83097ccc
	if (!cr6.lt) goto loc_83097CCC;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,572(r26)
	PPC_STORE_U32(ctx.r26.u32 + 572, ctx.r11.u32);
	// b 0x83097cd0
	goto loc_83097CD0;
loc_83097CCC:
	// stw r25,572(r26)
	PPC_STORE_U32(ctx.r26.u32 + 572, ctx.r25.u32);
loc_83097CD0:
	// lbz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83097ce0
	if (cr6.eq) goto loc_83097CE0;
	// stw r25,572(r26)
	PPC_STORE_U32(ctx.r26.u32 + 572, ctx.r25.u32);
loc_83097CE0:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,132(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// bl 0x82a22b40
	ctx.lr = 0x83097CEC;
	sub_82A22B40(ctx, base);
	// ld r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// blt cr6,0x83097d28
	if (cr6.lt) goto loc_83097D28;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x83097d28
	if (!cr6.lt) goto loc_83097D28;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x83097d28
	if (cr6.lt) goto loc_83097D28;
	// cmpwi cr6,r5,32
	cr6.compare<int32_t>(ctx.r5.s32, 32, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// blt cr6,0x83097d2c
	if (cr6.lt) goto loc_83097D2C;
loc_83097D28:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_83097D2C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83097d44
	if (cr6.eq) goto loc_83097D44;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2a400
	ctx.lr = 0x83097D40;
	sub_82A2A400(ctx, base);
	// b 0x83097d48
	goto loc_83097D48;
loc_83097D44:
	// li r3,255
	ctx.r3.s64 = 255;
loc_83097D48:
	// lbz r11,7(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 7);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83097e0c
	if (cr6.eq) goto loc_83097E0C;
	// lwz r11,572(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 572);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83097e0c
	if (cr6.eq) goto loc_83097E0C;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83097d74
	if (cr6.lt) goto loc_83097D74;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// blt cr6,0x83097d78
	if (cr6.lt) goto loc_83097D78;
loc_83097D74:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_83097D78:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83097dc4
	if (cr6.eq) goto loc_83097DC4;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x83097d94
	if (!cr6.lt) goto loc_83097D94;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x83097dbc
	goto loc_83097DBC;
loc_83097D94:
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// bge cr6,0x83097da4
	if (!cr6.lt) goto loc_83097DA4;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x83097dbc
	goto loc_83097DBC;
loc_83097DA4:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r3
	xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// eqv r9,r11,r3
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r3.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
loc_83097DBC:
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// bne cr6,0x83097e0c
	if (!cr6.eq) goto loc_83097E0C;
loc_83097DC4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x83097e0c
	if (cr6.eq) goto loc_83097E0C;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// beq cr6,0x83097e0c
	if (cr6.eq) goto loc_83097E0C;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x83097e0c
	if (cr6.eq) goto loc_83097E0C;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// beq cr6,0x83097e0c
	if (cr6.eq) goto loc_83097E0C;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r10,10
	cr6.compare<int32_t>(ctx.r10.s32, 10, xer);
	// bne cr6,0x83097e2c
	if (!cr6.eq) goto loc_83097E2C;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83097e0c
	if (cr6.eq) goto loc_83097E0C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83097e0c
	if (cr6.eq) goto loc_83097E0C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83097e2c
	if (!cr6.eq) goto loc_83097E2C;
loc_83097E0C:
	// lwz r11,572(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 572);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83097e38
	if (cr6.eq) goto loc_83097E38;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,26104
	ctx.r9.u64 = ctx.r10.u64 | 26104;
	// lbzx r8,r27,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83097e38
	if (cr6.eq) goto loc_83097E38;
loc_83097E2C:
	// stb r30,569(r26)
	PPC_STORE_U8(ctx.r26.u32 + 569, ctx.r30.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83097E38:
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, xer);
	// bgt cr6,0x83097e50
	if (cr6.gt) goto loc_83097E50;
	// stb r30,569(r26)
	PPC_STORE_U8(ctx.r26.u32 + 569, ctx.r30.u8);
	// stw r25,572(r26)
	PPC_STORE_U32(ctx.r26.u32 + 572, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83097E50:
	// stb r25,569(r26)
	PPC_STORE_U8(ctx.r26.u32 + 569, ctx.r25.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83097E5C"))) PPC_WEAK_FUNC(sub_83097E5C);
PPC_FUNC_IMPL(__imp__sub_83097E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83097E60"))) PPC_WEAK_FUNC(sub_83097E60);
PPC_FUNC_IMPL(__imp__sub_83097E60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x83097b60
	ctx.lr = 0x83097E80;
	sub_83097B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83097c08
	ctx.lr = 0x83097E8C;
	sub_83097C08(ctx, base);
	// lbz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 568);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83097ecc
	if (cr6.eq) goto loc_83097ECC;
	// lbz r11,569(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 569);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83097ecc
	if (cr6.eq) goto loc_83097ECC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a0068
	ctx.lr = 0x83097EB0;
	sub_830A0068(ctx, base);
	// bl 0x830e9240
	ctx.lr = 0x83097EB4;
	sub_830E9240(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83097ecc
	if (cr6.eq) goto loc_83097ECC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,564(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a3228
	ctx.lr = 0x83097ECC;
	sub_830A3228(ctx, base);
loc_83097ECC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83097EE4"))) PPC_WEAK_FUNC(sub_83097EE4);
PPC_FUNC_IMPL(__imp__sub_83097EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83097EE8"))) PPC_WEAK_FUNC(sub_83097EE8);
PPC_FUNC_IMPL(__imp__sub_83097EE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83097EF0;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r4,14636(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14636);
	// bl 0x830a0e00
	ctx.lr = 0x83097F04;
	sub_830A0E00(ctx, base);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// stw r3,564(r28)
	PPC_STORE_U32(ctx.r28.u32 + 564, ctx.r3.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r11,r10,20396
	ctx.r11.s64 = ctx.r10.s64 + 20396;
	// addi r31,r28,548
	ctx.r31.s64 = ctx.r28.s64 + 548;
	// addi r9,r11,-80
	ctx.r9.s64 = ctx.r11.s64 + -80;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// addi r8,r11,-72
	ctx.r8.s64 = ctx.r11.s64 + -72;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// addi r10,r11,-24
	ctx.r10.s64 = ctx.r11.s64 + -24;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// addi r7,r11,-64
	ctx.r7.s64 = ctx.r11.s64 + -64;
	// addi r6,r11,-56
	ctx.r6.s64 = ctx.r11.s64 + -56;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r5,r11,-48
	ctx.r5.s64 = ctx.r11.s64 + -48;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// lis r9,16383
	ctx.r9.s64 = 1073676288;
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// lis r8,16383
	ctx.r8.s64 = 1073676288;
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// ori r29,r9,65534
	ctx.r29.u64 = ctx.r9.u64 | 65534;
	// ori r26,r8,65535
	ctx.r26.u64 = ctx.r8.u64 | 65535;
loc_83097F84:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x830a0e00
	ctx.lr = 0x83097F90;
	sub_830A0E00(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x83097fbc
	if (!cr6.lt) goto loc_83097FBC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x83097fc0
	if (!cr6.gt) goto loc_83097FC0;
loc_83097FBC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83097FC0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83098058
	if (cr6.eq) goto loc_83098058;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// srawi r30,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r7.s32 >> 2;
	// bne cr6,0x83098038
	if (!cr6.eq) goto loc_83098038;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bgt cr6,0x830980f4
	if (cr6.gt) goto loc_830980F4;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// srawi r11,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x83098038
	if (!cr6.gt) goto loc_83098038;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r10,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r10.s64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x83098024
	if (cr6.lt) goto loc_83098024;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_83098024:
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bge cr6,0x83098030
	if (!cr6.lt) goto loc_83098030;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_83098030:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ad5e38
	ctx.lr = 0x83098038;
	sub_82AD5E38(ctx, base);
loc_83098038:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830980c4
	if (cr6.eq) goto loc_830980C4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x830980c4
	goto loc_830980C4;
loc_83098058:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x830980b4
	if (!cr6.eq) goto loc_830980B4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bgt cr6,0x83098100
	if (cr6.gt) goto loc_83098100;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// srawi r11,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x830980b4
	if (!cr6.gt) goto loc_830980B4;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r10,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r10.s64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x830980a0
	if (cr6.lt) goto loc_830980A0;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_830980A0:
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bge cr6,0x830980ac
	if (!cr6.lt) goto loc_830980AC;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_830980AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ad5e38
	ctx.lr = 0x830980B4;
	sub_82AD5E38(ctx, base);
loc_830980B4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830980c4
	if (cr6.eq) goto loc_830980C4;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_830980C4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x83097f84
	if (cr6.lt) goto loc_83097F84;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830980F4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x83098100;
	sub_831CC150(ctx, base);
loc_83098100:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x8309810C;
	sub_831CC150(ctx, base);
}

__attribute__((alias("__imp__sub_8309810C"))) PPC_WEAK_FUNC(sub_8309810C);
PPC_FUNC_IMPL(__imp__sub_8309810C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83098110"))) PPC_WEAK_FUNC(sub_83098110);
PPC_FUNC_IMPL(__imp__sub_83098110) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x830a2c10
	ctx.lr = 0x83098130;
	sub_830A2C10(ctx, base);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,23636
	ctx.r9.s64 = ctx.r10.s64 + 23636;
	// li r8,22
	ctx.r8.s64 = 22;
	// stw r11,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r11.u32);
	// clrlwi r7,r30,24
	ctx.r7.u64 = ctx.r30.u32 & 0xFF;
	// stw r11,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r11.u32);
	// stw r11,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r11.u32);
	// stw r11,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r11.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r8,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r8.u32);
	// beq cr6,0x83098178
	if (cr6.eq) goto loc_83098178;
	// addi r11,r11,23540
	ctx.r11.s64 = ctx.r11.s64 + 23540;
	// addi r4,r11,-104
	ctx.r4.s64 = ctx.r11.s64 + -104;
	// addi r5,r11,-72
	ctx.r5.s64 = ctx.r11.s64 + -72;
	// b 0x83098180
	goto loc_83098180;
loc_83098178:
	// addi r5,r11,23540
	ctx.r5.s64 = ctx.r11.s64 + 23540;
	// addi r4,r5,-56
	ctx.r4.s64 = ctx.r5.s64 + -56;
loc_83098180:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a0b50
	ctx.lr = 0x83098188;
	sub_830A0B50(ctx, base);
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

__attribute__((alias("__imp__sub_830981A4"))) PPC_WEAK_FUNC(sub_830981A4);
PPC_FUNC_IMPL(__imp__sub_830981A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830981A8"))) PPC_WEAK_FUNC(sub_830981A8);
PPC_FUNC_IMPL(__imp__sub_830981A8) {
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
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,14760(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14760);
	// bl 0x830a0e00
	ctx.lr = 0x830981C8;
	sub_830A0E00(ctx, base);
	// stw r3,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r3.u32);
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,14764(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14764);
	// bl 0x830a0e00
	ctx.lr = 0x830981DC;
	sub_830A0E00(ctx, base);
	// stw r3,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r3.u32);
	// lis r9,-31773
	ctx.r9.s64 = -2082275328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,14768(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14768);
	// bl 0x830a0e00
	ctx.lr = 0x830981F0;
	sub_830A0E00(ctx, base);
	// stw r3,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r3.u32);
	// lis r8,-31773
	ctx.r8.s64 = -2082275328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,14772(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 14772);
	// bl 0x830a0e00
	ctx.lr = 0x83098204;
	sub_830A0E00(ctx, base);
	// stw r3,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8309821C"))) PPC_WEAK_FUNC(sub_8309821C);
PPC_FUNC_IMPL(__imp__sub_8309821C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83098220"))) PPC_WEAK_FUNC(sub_83098220);
PPC_FUNC_IMPL(__imp__sub_83098220) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83098228;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x830a0068
	ctx.lr = 0x83098244;
	sub_830A0068(ctx, base);
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83098280
	if (cr6.eq) goto loc_83098280;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83098280
	if (!cr6.eq) goto loc_83098280;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83098280
	if (!cr6.eq) goto loc_83098280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,568(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a3228
	ctx.lr = 0x83098278;
	sub_830A3228(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83098280:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830982a4
	if (cr6.eq) goto loc_830982A4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,572(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a3228
	ctx.lr = 0x8309829C;
	sub_830A3228(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830982A4:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830982c8
	if (cr6.eq) goto loc_830982C8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,576(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a3228
	ctx.lr = 0x830982C0;
	sub_830A3228(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830982C8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,564(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a3228
	ctx.lr = 0x830982D8;
	sub_830A3228(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830982E0"))) PPC_WEAK_FUNC(sub_830982E0);
PPC_FUNC_IMPL(__imp__sub_830982E0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,580(r3)
	PPC_STORE_U32(ctx.r3.u32 + 580, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830982E8"))) PPC_WEAK_FUNC(sub_830982E8);
PPC_FUNC_IMPL(__imp__sub_830982E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,23636
	ctx.r10.s64 = ctx.r11.s64 + 23636;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x830a2ab0
	ctx.lr = 0x83098314;
	sub_830A2AB0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8309832c
	if (cr6.eq) goto loc_8309832C;
	// bl 0x82416268
	ctx.lr = 0x83098328;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8309832C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83098344"))) PPC_WEAK_FUNC(sub_83098344);
PPC_FUNC_IMPL(__imp__sub_83098344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83098348"))) PPC_WEAK_FUNC(sub_83098348);
PPC_FUNC_IMPL(__imp__sub_83098348) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,132(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a22ac0
	ctx.lr = 0x8309836C;
	sub_82A22AC0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83098388
	if (!cr6.eq) goto loc_83098388;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x830983a8
	goto loc_830983A8;
loc_83098388:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a22a50
	ctx.lr = 0x83098394;
	sub_82A22A50(ctx, base);
	// lwz r10,296(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// lwz r9,300(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_830983A8:
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

__attribute__((alias("__imp__sub_830983C4"))) PPC_WEAK_FUNC(sub_830983C4);
PPC_FUNC_IMPL(__imp__sub_830983C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830983C8"))) PPC_WEAK_FUNC(sub_830983C8);
PPC_FUNC_IMPL(__imp__sub_830983C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x830983D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,420
	ctx.r31.s64 = ctx.r3.s64 + 420;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x830a83d8
	ctx.lr = 0x830983F0;
	sub_830A83D8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835410c0
	ctx.lr = 0x830983FC;
	sub_835410C0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r3,r30,292
	ctx.r3.s64 = ctx.r30.s64 + 292;
	// lhz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// bl 0x830fe218
	ctx.lr = 0x8309840C;
	sub_830FE218(ctx, base);
	// lhz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// add r30,r3,r11
	ctx.r30.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83542800
	ctx.lr = 0x8309841C;
	sub_83542800(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83578d58
	ctx.lr = 0x83098428;
	sub_83578D58(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r9,r29,-1
	ctx.r9.s64 = ctx.r29.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// lhz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// rlwinm r25,r8,27,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x830a8438
	ctx.lr = 0x83098448;
	sub_830A8438(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// bne cr6,0x83098468
	if (!cr6.eq) goto loc_83098468;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// b 0x83098474
	goto loc_83098474;
loc_83098468:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83098474
	if (cr6.eq) goto loc_83098474;
	// li r31,2
	ctx.r31.s64 = 2;
loc_83098474:
	// li r11,0
	ctx.r11.s64 = 0;
	// lhz r7,0(r26)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x830f39a8
	ctx.lr = 0x830984A0;
	sub_830F39A8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830984A8"))) PPC_WEAK_FUNC(sub_830984A8);
PPC_FUNC_IMPL(__imp__sub_830984A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830984B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// beq cr6,0x83098558
	if (cr6.eq) goto loc_83098558;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// bge cr6,0x83098558
	if (!cr6.lt) goto loc_83098558;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x830984E8;
	sub_82A0C738(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a16248
	ctx.lr = 0x830984F0;
	sub_82A16248(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82be4eb8
	ctx.lr = 0x830984FC;
	sub_82BE4EB8(ctx, base);
	// bl 0x830a7028
	ctx.lr = 0x83098500;
	sub_830A7028(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x830a7120
	ctx.lr = 0x8309850C;
	sub_830A7120(ctx, base);
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bne cr6,0x83098538
	if (!cr6.eq) goto loc_83098538;
	// li r11,31
	ctx.r11.s64 = 31;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// b 0x83098544
	goto loc_83098544;
loc_83098538:
	// li r11,30
	ctx.r11.s64 = 30;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
loc_83098544:
	// bl 0x830a8950
	ctx.lr = 0x83098548;
	sub_830A8950(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83098564
	if (!cr6.eq) goto loc_83098564;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83102db0
	ctx.lr = 0x83098558;
	sub_83102DB0(ctx, base);
loc_83098558:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83098564:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830983c8
	ctx.lr = 0x83098578;
	sub_830983C8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83102db0
	ctx.lr = 0x83098580;
	sub_83102DB0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309858C"))) PPC_WEAK_FUNC(sub_8309858C);
PPC_FUNC_IMPL(__imp__sub_8309858C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83098590"))) PPC_WEAK_FUNC(sub_83098590);
PPC_FUNC_IMPL(__imp__sub_83098590) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83098598;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83098348
	ctx.lr = 0x830985B8;
	sub_83098348(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830985e4
	if (cr6.lt) goto loc_830985E4;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x830985e4
	if (!cr6.lt) goto loc_830985E4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830985e4
	if (cr6.lt) goto loc_830985E4;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830985e8
	if (cr6.lt) goto loc_830985E8;
loc_830985E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830985E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83098600
	if (!cr6.eq) goto loc_83098600;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83098600:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// bne cr6,0x83098624
	if (!cr6.eq) goto loc_83098624;
	// li r7,0
	ctx.r7.s64 = 0;
loc_83098624:
	// bl 0x830984a8
	ctx.lr = 0x83098628;
	sub_830984A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83098630"))) PPC_WEAK_FUNC(sub_83098630);
PPC_FUNC_IMPL(__imp__sub_83098630) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83098638;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// beq cr6,0x830986d8
	if (cr6.eq) goto loc_830986D8;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// bge cr6,0x830986d8
	if (!cr6.lt) goto loc_830986D8;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x8309866C;
	sub_82A0C738(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a16248
	ctx.lr = 0x83098674;
	sub_82A16248(ctx, base);
	// bl 0x83530640
	ctx.lr = 0x83098678;
	sub_83530640(ctx, base);
	// lbz r11,126(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 126);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830986d8
	if (cr6.eq) goto loc_830986D8;
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, xer);
	// bge cr6,0x830986d8
	if (!cr6.lt) goto loc_830986D8;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// beq cr6,0x830986ac
	if (cr6.eq) goto loc_830986AC;
	// addi r11,r10,14776
	ctx.r11.s64 = ctx.r10.s64 + 14776;
	// addi r8,r11,400
	ctx.r8.s64 = ctx.r11.s64 + 400;
	// b 0x830986b0
	goto loc_830986B0;
loc_830986AC:
	// addi r8,r10,14776
	ctx.r8.s64 = ctx.r10.s64 + 14776;
loc_830986B0:
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830986d8
	if (cr6.eq) goto loc_830986D8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830983c8
	ctx.lr = 0x830986CC;
	sub_830983C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830986D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830986E4"))) PPC_WEAK_FUNC(sub_830986E4);
PPC_FUNC_IMPL(__imp__sub_830986E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830986E8"))) PPC_WEAK_FUNC(sub_830986E8);
PPC_FUNC_IMPL(__imp__sub_830986E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830986F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83098348
	ctx.lr = 0x83098710;
	sub_83098348(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8309873c
	if (cr6.lt) goto loc_8309873C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x8309873c
	if (!cr6.lt) goto loc_8309873C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8309873c
	if (cr6.lt) goto loc_8309873C;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x83098740
	if (cr6.lt) goto loc_83098740;
loc_8309873C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83098740:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83098758
	if (!cr6.eq) goto loc_83098758;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83098758:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83098630
	ctx.lr = 0x83098770;
	sub_83098630(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83098778"))) PPC_WEAK_FUNC(sub_83098778);
PPC_FUNC_IMPL(__imp__sub_83098778) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x830a7028
	ctx.lr = 0x83098798;
	sub_830A7028(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830a7120
	ctx.lr = 0x830987A4;
	sub_830A7120(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,492(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 492);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830a8910
	ctx.lr = 0x830987B8;
	sub_830A8910(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830987d4
	if (!cr6.eq) goto loc_830987D4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83102db0
	ctx.lr = 0x830987CC;
	sub_83102DB0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8309880c
	goto loc_8309880C;
loc_830987D4:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,76
	cr6.compare<uint32_t>(ctx.r11.u32, 76, xer);
	// beq cr6,0x830987ec
	if (cr6.eq) goto loc_830987EC;
	// cmplwi cr6,r11,77
	cr6.compare<uint32_t>(ctx.r11.u32, 77, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x830987f0
	if (!cr6.eq) goto loc_830987F0;
loc_830987EC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830987F0:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830983c8
	ctx.lr = 0x83098800;
	sub_830983C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83102db0
	ctx.lr = 0x83098808;
	sub_83102DB0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8309880C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83098824"))) PPC_WEAK_FUNC(sub_83098824);
PPC_FUNC_IMPL(__imp__sub_83098824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83098828"))) PPC_WEAK_FUNC(sub_83098828);
PPC_FUNC_IMPL(__imp__sub_83098828) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83098830;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8309885c
	if (!cr6.eq) goto loc_8309885C;
loc_83098850:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8309885C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,132(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 132);
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82a229e8
	ctx.lr = 0x8309886C;
	sub_82A229E8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x83098850
	if (cr6.eq) goto loc_83098850;
	// lwz r11,580(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 580);
	// addi r10,r11,-3
	ctx.r10.s64 = ctx.r11.s64 + -3;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r25,r9,27,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// beq cr6,0x830988a0
	if (cr6.eq) goto loc_830988A0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x830988a4
	if (!cr6.eq) goto loc_830988A4;
loc_830988A0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830988A4:
	// clrlwi r28,r30,24
	ctx.r28.u64 = ctx.r30.u32 & 0xFF;
	// clrlwi r24,r11,24
	ctx.r24.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83098928
	if (cr6.eq) goto loc_83098928;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83098928
	if (cr6.eq) goto loc_83098928;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_830988D8:
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r6,28(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmpwi cr6,r6,255
	cr6.compare<int32_t>(ctx.r6.s32, 255, xer);
	// beq cr6,0x83098904
	if (cr6.eq) goto loc_83098904;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
loc_83098904:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,6
	cr6.compare<uint32_t>(ctx.r9.u32, 6, xer);
	// blt cr6,0x830988d8
	if (cr6.lt) goto loc_830988D8;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// subfic r10,r11,1
	xer.ca = ctx.r11.u32 <= 1;
	ctx.r10.s64 = 1 - ctx.r11.s64;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// and r25,r8,r25
	ctx.r25.u64 = ctx.r8.u64 & ctx.r25.u64;
loc_83098928:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8309892C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// beq cr6,0x83098960
	if (cr6.eq) goto loc_83098960;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x83098964
	goto loc_83098964;
loc_83098960:
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
loc_83098964:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// beq cr6,0x830989b0
	if (cr6.eq) goto loc_830989B0;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83098630
	ctx.lr = 0x83098988;
	sub_83098630(ctx, base);
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// bne cr6,0x830989ac
	if (!cr6.eq) goto loc_830989AC;
	// li r7,0
	ctx.r7.s64 = 0;
loc_830989AC:
	// bl 0x830984a8
	ctx.lr = 0x830989B0;
	sub_830984A8(ctx, base);
loc_830989B0:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// blt cr6,0x8309892c
	if (cr6.lt) goto loc_8309892C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830989D0"))) PPC_WEAK_FUNC(sub_830989D0);
PPC_FUNC_IMPL(__imp__sub_830989D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830989D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r5.u32);
	// stw r6,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r6.u32);
	// addi r6,r1,188
	ctx.r6.s64 = ctx.r1.s64 + 188;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x830a0eb0
	ctx.lr = 0x83098A04;
	sub_830A0EB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83098a1c
	if (!cr6.eq) goto loc_83098A1C;
loc_83098A10:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83098A1C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x830a66c0
	ctx.lr = 0x83098A28;
	sub_830A66C0(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,292
	ctx.r3.s64 = ctx.r31.s64 + 292;
	// bl 0x830fe280
	ctx.lr = 0x83098A34;
	sub_830FE280(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83098a10
	if (cr6.eq) goto loc_83098A10;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8312dce0
	ctx.lr = 0x83098A48;
	sub_8312DCE0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// bne cr6,0x83098a7c
	if (!cr6.eq) goto loc_83098A7C;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r31,512
	ctx.r6.s64 = ctx.r31.s64 + 512;
	// addi r5,r31,508
	ctx.r5.s64 = ctx.r31.s64 + 508;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830984a8
	ctx.lr = 0x83098A70;
	sub_830984A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83098A7C:
	// cmplwi cr6,r11,36
	cr6.compare<uint32_t>(ctx.r11.u32, 36, xer);
	// bne cr6,0x83098aa0
	if (!cr6.eq) goto loc_83098AA0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83098590
	ctx.lr = 0x83098A94;
	sub_83098590(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83098AA0:
	// cmplwi cr6,r11,31
	cr6.compare<uint32_t>(ctx.r11.u32, 31, xer);
	// bne cr6,0x83098acc
	if (!cr6.eq) goto loc_83098ACC;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r31,512
	ctx.r6.s64 = ctx.r31.s64 + 512;
	// addi r5,r31,508
	ctx.r5.s64 = ctx.r31.s64 + 508;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830984a8
	ctx.lr = 0x83098AC0;
	sub_830984A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83098ACC:
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(ctx.r11.u32, 37, xer);
	// bne cr6,0x83098af0
	if (!cr6.eq) goto loc_83098AF0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83098590
	ctx.lr = 0x83098AE4;
	sub_83098590(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83098AF0:
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bne cr6,0x83098b1c
	if (!cr6.eq) goto loc_83098B1C;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r31,512
	ctx.r6.s64 = ctx.r31.s64 + 512;
	// addi r5,r31,508
	ctx.r5.s64 = ctx.r31.s64 + 508;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83098630
	ctx.lr = 0x83098B10;
	sub_83098630(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83098B1C:
	// cmplwi cr6,r11,38
	cr6.compare<uint32_t>(ctx.r11.u32, 38, xer);
	// bne cr6,0x83098b40
	if (!cr6.eq) goto loc_83098B40;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830986e8
	ctx.lr = 0x83098B34;
	sub_830986E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83098B40:
	// cmplwi cr6,r11,33
	cr6.compare<uint32_t>(ctx.r11.u32, 33, xer);
	// bne cr6,0x83098b6c
	if (!cr6.eq) goto loc_83098B6C;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r31,512
	ctx.r6.s64 = ctx.r31.s64 + 512;
	// addi r5,r31,508
	ctx.r5.s64 = ctx.r31.s64 + 508;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83098630
	ctx.lr = 0x83098B60;
	sub_83098630(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83098B6C:
	// cmplwi cr6,r11,39
	cr6.compare<uint32_t>(ctx.r11.u32, 39, xer);
	// bne cr6,0x83098b90
	if (!cr6.eq) goto loc_83098B90;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830986e8
	ctx.lr = 0x83098B84;
	sub_830986E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83098B90:
	// cmplwi cr6,r11,76
	cr6.compare<uint32_t>(ctx.r11.u32, 76, xer);
	// beq cr6,0x83098cc4
	if (cr6.eq) goto loc_83098CC4;
	// cmplwi cr6,r11,77
	cr6.compare<uint32_t>(ctx.r11.u32, 77, xer);
	// beq cr6,0x83098cc4
	if (cr6.eq) goto loc_83098CC4;
	// cmplwi cr6,r11,78
	cr6.compare<uint32_t>(ctx.r11.u32, 78, xer);
	// beq cr6,0x83098cc4
	if (cr6.eq) goto loc_83098CC4;
	// cmplwi cr6,r11,80
	cr6.compare<uint32_t>(ctx.r11.u32, 80, xer);
	// beq cr6,0x83098cc4
	if (cr6.eq) goto loc_83098CC4;
	// cmplwi cr6,r11,79
	cr6.compare<uint32_t>(ctx.r11.u32, 79, xer);
	// bne cr6,0x83098c0c
	if (!cr6.eq) goto loc_83098C0C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83098348
	ctx.lr = 0x83098BC8;
	sub_83098348(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83098bf4
	if (cr6.lt) goto loc_83098BF4;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x83098bf4
	if (!cr6.lt) goto loc_83098BF4;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83098bf4
	if (cr6.lt) goto loc_83098BF4;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x83098bf8
	if (cr6.lt) goto loc_83098BF8;
loc_83098BF4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83098BF8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83098cdc
	if (cr6.eq) goto loc_83098CDC;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// b 0x83098cc8
	goto loc_83098CC8;
loc_83098C0C:
	// cmplwi cr6,r11,34
	cr6.compare<uint32_t>(ctx.r11.u32, 34, xer);
	// bne cr6,0x83098c34
	if (!cr6.eq) goto loc_83098C34;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,492
	ctx.r5.s64 = ctx.r31.s64 + 492;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83098828
	ctx.lr = 0x83098C28;
	sub_83098828(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83098C34:
	// cmplwi cr6,r11,35
	cr6.compare<uint32_t>(ctx.r11.u32, 35, xer);
	// bne cr6,0x83098c5c
	if (!cr6.eq) goto loc_83098C5C;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r31,492
	ctx.r5.s64 = ctx.r31.s64 + 492;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83098828
	ctx.lr = 0x83098C50;
	sub_83098828(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83098C5C:
	// cmplwi cr6,r11,95
	cr6.compare<uint32_t>(ctx.r11.u32, 95, xer);
	// bne cr6,0x83098c80
	if (!cr6.eq) goto loc_83098C80;
	// li r5,5000
	ctx.r5.s64 = 5000;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x830f3308
	ctx.lr = 0x83098C74;
	sub_830F3308(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83098C80:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830a6648
	ctx.lr = 0x83098C88;
	sub_830A6648(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83098CA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x830983c8
	ctx.lr = 0x83098CB4;
	sub_830983C8(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83098CC4:
	// addi r5,r31,492
	ctx.r5.s64 = ctx.r31.s64 + 492;
loc_83098CC8:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83098778
	ctx.lr = 0x83098CD8;
	sub_83098778(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_83098CDC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83098CE8"))) PPC_WEAK_FUNC(sub_83098CE8);
PPC_FUNC_IMPL(__imp__sub_83098CE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83098CF0;
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
	// bl 0x830a0068
	ctx.lr = 0x83098D0C;
	sub_830A0068(ctx, base);
	// bl 0x830e9240
	ctx.lr = 0x83098D10;
	sub_830E9240(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83098db4
	if (cr6.eq) goto loc_83098DB4;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83098d5c
	if (!cr6.eq) goto loc_83098D5C;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83098d54
	if (!cr6.eq) goto loc_83098D54;
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83098d54
	if (!cr6.eq) goto loc_83098D54;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,564(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a3228
	ctx.lr = 0x83098D4C;
	sub_830A3228(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83098D54:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83098d8c
	if (cr6.eq) goto loc_83098D8C;
loc_83098D5C:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83098d74
	if (!cr6.eq) goto loc_83098D74;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83098d8c
	if (cr6.eq) goto loc_83098D8C;
loc_83098D74:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,568(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a3228
	ctx.lr = 0x83098D84;
	sub_830A3228(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83098D8C:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83098da4
	if (!cr6.eq) goto loc_83098DA4;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83098db4
	if (cr6.eq) goto loc_83098DB4;
loc_83098DA4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,572(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a3228
	ctx.lr = 0x83098DB4;
	sub_830A3228(ctx, base);
loc_83098DB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83098DBC"))) PPC_WEAK_FUNC(sub_83098DBC);
PPC_FUNC_IMPL(__imp__sub_83098DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83098DC0"))) PPC_WEAK_FUNC(sub_83098DC0);
PPC_FUNC_IMPL(__imp__sub_83098DC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83098DC8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
	// lis r26,-31763
	ctx.r26.s64 = -2081619968;
loc_83098DE0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_83098DE4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x83098DF0;
	sub_82A0C738(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a16188
	ctx.lr = 0x83098DF8;
	sub_82A16188(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830e9d40
	ctx.lr = 0x83098E08;
	sub_830E9D40(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83098e54
	if (!cr6.eq) goto loc_83098E54;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x83098E1C;
	sub_82A0C738(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a16c88
	ctx.lr = 0x83098E2C;
	sub_82A16C88(ctx, base);
	// add r11,r28,r30
	ctx.r11.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r9,r11,59
	ctx.r9.s64 = ctx.r11.s64 + 59;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stbx r25,r8,r27
	PPC_STORE_U8(ctx.r8.u32 + ctx.r27.u32, ctx.r25.u8);
	// stw r31,948(r11)
	PPC_STORE_U32(ctx.r11.u32 + 948, ctx.r31.u32);
	// std r7,952(r11)
	PPC_STORE_U64(ctx.r11.u32 + 952, ctx.r7.u64);
loc_83098E54:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,23
	cr6.compare<int32_t>(ctx.r30.s32, 23, xer);
	// blt cr6,0x83098de4
	if (cr6.lt) goto loc_83098DE4;
	// addi r28,r28,23
	ctx.r28.s64 = ctx.r28.s64 + 23;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r28,46
	cr6.compare<int32_t>(ctx.r28.s32, 46, xer);
	// blt cr6,0x83098de0
	if (cr6.lt) goto loc_83098DE0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83098E78"))) PPC_WEAK_FUNC(sub_83098E78);
PPC_FUNC_IMPL(__imp__sub_83098E78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ld r3,856(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 856);
	// bl 0x830eb168
	ctx.lr = 0x83098EA4;
	sub_830EB168(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r3,864(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 864);
	// bl 0x830eb168
	ctx.lr = 0x83098EB4;
	sub_830EB168(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r3,872(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 872);
	// bl 0x830eb168
	ctx.lr = 0x83098EC4;
	sub_830EB168(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r3,880(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 880);
	// bl 0x830eb168
	ctx.lr = 0x83098ED4;
	sub_830EB168(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r10,4460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4460);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x83098f04
	if (!cr6.eq) goto loc_83098F04;
	// lwz r10,5388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5388);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x83098f04
	if (!cr6.eq) goto loc_83098F04;
	// lwz r11,4456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4456);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// bne cr6,0x83098f14
	if (!cr6.eq) goto loc_83098F14;
loc_83098F04:
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r3,896(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 896);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830eb168
	ctx.lr = 0x83098F14;
	sub_830EB168(ctx, base);
loc_83098F14:
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

__attribute__((alias("__imp__sub_83098F30"))) PPC_WEAK_FUNC(sub_83098F30);
PPC_FUNC_IMPL(__imp__sub_83098F30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83098F38;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// bge cr6,0x83099088
	if (!cr6.lt) goto loc_83099088;
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// cntlzw r7,r5
	ctx.r7.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r10,-3564(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3564);
	// mulli r9,r6,8248
	ctx.r9.s64 = ctx.r6.s64 * 8248;
	// lwz r27,6132(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6132);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// add r3,r9,r27
	ctx.r3.u64 = ctx.r9.u64 + ctx.r27.u64;
	// rlwinm r5,r11,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r4,r11,r6
	xer.ca = ctx.r6.u32 >= ctx.r11.u32;
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// rlwinm r11,r6,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// addis r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 65536;
	// subfe r9,r11,r5
	temp.u8 = (~ctx.r11.u32 + ctx.r5.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r11.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r10,r10,-16600
	ctx.r10.s64 = ctx.r10.s64 + -16600;
	// li r25,0
	ctx.r25.s64 = 0;
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r30,16(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// bl 0x831156e8
	ctx.lr = 0x83098F9C;
	sub_831156E8(ctx, base);
	// lwz r29,56(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r31,0
	ctx.r31.s64 = 0;
	// clrlwi r30,r30,14
	ctx.r30.u64 = ctx.r30.u32 & 0x3FFFF;
loc_83098FA8:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8312bbd8
	ctx.lr = 0x83098FBC;
	sub_8312BBD8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// beq cr6,0x83098fdc
	if (cr6.eq) goto loc_83098FDC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x83098fa8
	if (cr6.lt) goto loc_83098FA8;
	// b 0x83098fe0
	goto loc_83098FE0;
loc_83098FDC:
	// li r26,1
	ctx.r26.s64 = 1;
loc_83098FE0:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83098ff0
	if (cr6.eq) goto loc_83098FF0;
	// li r25,16
	ctx.r25.s64 = 16;
loc_83098FF0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82a26f20
	ctx.lr = 0x83099000;
	sub_82A26F20(ctx, base);
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,15820(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15820);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83099030
	if (!cr6.eq) goto loc_83099030;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83099034
	if (cr6.eq) goto loc_83099034;
loc_83099030:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83099034:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83099050
	if (!cr6.eq) goto loc_83099050;
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83099050
	if (!cr6.eq) goto loc_83099050;
	// li r31,1
	ctx.r31.s64 = 1;
loc_83099050:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83099060
	if (cr6.eq) goto loc_83099060;
	// ori r25,r25,8
	ctx.r25.u64 = ctx.r25.u64 | 8;
loc_83099060:
	// addic r11,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// subfe r5,r11,r28
	temp.u8 = (~ctx.r11.u32 + ctx.r28.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r28.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r11.u64 + ctx.r28.u64 + xer.ca;
	xer.ca = temp.u8;
	// beq cr6,0x83099078
	if (cr6.eq) goto loc_83099078;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x83099088
	if (cr6.eq) goto loc_83099088;
loc_83099078:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x830f5480
	ctx.lr = 0x83099088;
	sub_830F5480(ctx, base);
loc_83099088:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83099090"))) PPC_WEAK_FUNC(sub_83099090);
PPC_FUNC_IMPL(__imp__sub_83099090) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r10,-3564(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r11,6132(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6132);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,12
	cr6.compare<uint32_t>(ctx.r9.u32, 12, xer);
	// bge cr6,0x830990c0
	if (!cr6.lt) goto loc_830990C0;
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// beq cr6,0x83099120
	if (cr6.eq) goto loc_83099120;
loc_830990C0:
	// addis r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 65536;
	// lwz r4,6132(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6132);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r31,r31,-16600
	ctx.r31.s64 = ctx.r31.s64 + -16600;
	// bl 0x82a26a18
	ctx.lr = 0x830990D8;
	sub_82A26A18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x830ea6a8
	ctx.lr = 0x830990E8;
	sub_830EA6A8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r9,r10,14
	ctx.r9.u64 = ctx.r10.u32 & 0x3FFFF;
	// cmplwi cr6,r9,108
	cr6.compare<uint32_t>(ctx.r9.u32, 108, xer);
	// bne cr6,0x83099120
	if (!cr6.eq) goto loc_83099120;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// srawi r10,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83099120
	if (cr6.eq) goto loc_83099120;
	// srawi r11,r11,9
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 9;
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83099124
	if (!cr6.eq) goto loc_83099124;
loc_83099120:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83099124:
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

__attribute__((alias("__imp__sub_83099138"))) PPC_WEAK_FUNC(sub_83099138);
PPC_FUNC_IMPL(__imp__sub_83099138) {
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
	// ld r11,888(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 888);
	// addi r4,r3,888
	ctx.r4.s64 = ctx.r3.s64 + 888;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// bne cr6,0x83099188
	if (!cr6.eq) goto loc_83099188;
	// lwz r11,760(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 760);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83099188
	if (cr6.eq) goto loc_83099188;
	// lwz r10,764(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// addi r11,r3,744
	ctx.r11.s64 = ctx.r3.s64 + 744;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83099174
	if (cr6.lt) goto loc_83099174;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83099174:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x830eaf60
	ctx.lr = 0x83099188;
	sub_830EAF60(ctx, base);
loc_83099188:
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

__attribute__((alias("__imp__sub_8309919C"))) PPC_WEAK_FUNC(sub_8309919C);
PPC_FUNC_IMPL(__imp__sub_8309919C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830991A0"))) PPC_WEAK_FUNC(sub_830991A0);
PPC_FUNC_IMPL(__imp__sub_830991A0) {
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
	// ld r11,856(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 856);
	// addi r4,r3,856
	ctx.r4.s64 = ctx.r3.s64 + 856;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// bne cr6,0x830991e8
	if (!cr6.eq) goto loc_830991E8;
	// lwz r11,592(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 592);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830991e8
	if (cr6.eq) goto loc_830991E8;
	// lwz r10,596(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 596);
	// addi r11,r3,576
	ctx.r11.s64 = ctx.r3.s64 + 576;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x830991dc
	if (cr6.lt) goto loc_830991DC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_830991DC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x830eb0e8
	ctx.lr = 0x830991E8;
	sub_830EB0E8(ctx, base);
loc_830991E8:
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

__attribute__((alias("__imp__sub_830991FC"))) PPC_WEAK_FUNC(sub_830991FC);
PPC_FUNC_IMPL(__imp__sub_830991FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83099200"))) PPC_WEAK_FUNC(sub_83099200);
PPC_FUNC_IMPL(__imp__sub_83099200) {
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
	// ld r11,888(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 888);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// bne cr6,0x8309925c
	if (!cr6.eq) goto loc_8309925C;
	// ld r11,904(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 904);
	// addi r4,r3,904
	ctx.r4.s64 = ctx.r3.s64 + 904;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// bne cr6,0x8309925c
	if (!cr6.eq) goto loc_8309925C;
	// lwz r11,816(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 816);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309925c
	if (cr6.eq) goto loc_8309925C;
	// lwz r10,820(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 820);
	// addi r11,r3,800
	ctx.r11.s64 = ctx.r3.s64 + 800;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83099248
	if (cr6.lt) goto loc_83099248;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83099248:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x830eaf60
	ctx.lr = 0x8309925C;
	sub_830EAF60(ctx, base);
loc_8309925C:
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

__attribute__((alias("__imp__sub_83099270"))) PPC_WEAK_FUNC(sub_83099270);
PPC_FUNC_IMPL(__imp__sub_83099270) {
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
	// lwz r11,844(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 844);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309929c
	if (!cr6.eq) goto loc_8309929C;
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
loc_8309929C:
	// ld r11,904(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 904);
	// addi r4,r3,904
	ctx.r4.s64 = ctx.r3.s64 + 904;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// bne cr6,0x830992d4
	if (!cr6.eq) goto loc_830992D4;
	// lwz r10,848(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// addi r11,r3,828
	ctx.r11.s64 = ctx.r3.s64 + 828;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x830992c0
	if (cr6.lt) goto loc_830992C0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_830992C0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x830eaf60
	ctx.lr = 0x830992D4;
	sub_830EAF60(ctx, base);
loc_830992D4:
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

__attribute__((alias("__imp__sub_830992E8"))) PPC_WEAK_FUNC(sub_830992E8);
PPC_FUNC_IMPL(__imp__sub_830992E8) {
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
	// lwz r11,648(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 648);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83099324
	if (cr6.eq) goto loc_83099324;
	// lwz r10,652(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 652);
	// addi r11,r3,632
	ctx.r11.s64 = ctx.r3.s64 + 632;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83099314
	if (cr6.lt) goto loc_83099314;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83099314:
	// addi r4,r3,864
	ctx.r4.s64 = ctx.r3.s64 + 864;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x830eb0e8
	ctx.lr = 0x83099324;
	sub_830EB0E8(ctx, base);
loc_83099324:
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

__attribute__((alias("__imp__sub_83099338"))) PPC_WEAK_FUNC(sub_83099338);
PPC_FUNC_IMPL(__imp__sub_83099338) {
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
	// lwz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309937c
	if (cr6.eq) goto loc_8309937C;
	// lwz r10,792(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 792);
	// addi r11,r3,772
	ctx.r11.s64 = ctx.r3.s64 + 772;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83099364
	if (cr6.lt) goto loc_83099364;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83099364:
	// addi r4,r3,896
	ctx.r4.s64 = ctx.r3.s64 + 896;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x830eaf60
	ctx.lr = 0x8309937C;
	sub_830EAF60(ctx, base);
loc_8309937C:
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

__attribute__((alias("__imp__sub_83099390"))) PPC_WEAK_FUNC(sub_83099390);
PPC_FUNC_IMPL(__imp__sub_83099390) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83099398;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,620(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 620);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830993b4
	if (!cr6.eq) goto loc_830993B4;
loc_830993A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830993B4:
	// ld r11,856(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 856);
	// addi r29,r3,856
	ctx.r29.s64 = ctx.r3.s64 + 856;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// bne cr6,0x83099484
	if (!cr6.eq) goto loc_83099484;
	// addi r31,r3,604
	ctx.r31.s64 = ctx.r3.s64 + 604;
	// lwz r5,620(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 620);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r7,19
	ctx.r7.s64 = 19;
	// addi r6,r11,24144
	ctx.r6.s64 = ctx.r11.s64 + 24144;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x827a8810
	ctx.lr = 0x830993E8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830993a8
	if (!cr6.eq) goto loc_830993A8;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,48716
	ctx.r9.u64 = ctx.r10.u64 | 48716;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r8,6132(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,59
	cr6.compare<uint32_t>(ctx.r7.u32, 59, xer);
	// bne cr6,0x8309941c
	if (!cr6.eq) goto loc_8309941C;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x83099460
	goto loc_83099460;
loc_8309941C:
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83099460
	if (cr6.eq) goto loc_83099460;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// ori r9,r10,6
	ctx.r9.u64 = ctx.r10.u64 | 6;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8309945c
	if (cr6.eq) goto loc_8309945C;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r30,2
	ctx.r30.s64 = 2;
	// ori r9,r10,9
	ctx.r9.u64 = ctx.r10.u64 | 9;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x83099460
	if (!cr6.eq) goto loc_83099460;
loc_8309945C:
	// li r30,3
	ctx.r30.s64 = 3;
loc_83099460:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83099474
	if (cr6.lt) goto loc_83099474;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x83099478
	goto loc_83099478;
loc_83099474:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83099478:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830eb0e8
	ctx.lr = 0x83099484;
	sub_830EB0E8(ctx, base);
loc_83099484:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83099490"))) PPC_WEAK_FUNC(sub_83099490);
PPC_FUNC_IMPL(__imp__sub_83099490) {
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
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830994f0
	if (cr6.eq) goto loc_830994F0;
	// lwz r11,20(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830994c4
	if (cr6.lt) goto loc_830994C4;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// b 0x830994c8
	goto loc_830994C8;
loc_830994C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830994C8:
	// bl 0x830eb240
	ctx.lr = 0x830994CC;
	sub_830EB240(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830994f0
	if (!cr6.eq) goto loc_830994F0;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x830994ec
	if (cr6.lt) goto loc_830994EC;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_830994EC:
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_830994F0:
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

__attribute__((alias("__imp__sub_83099504"))) PPC_WEAK_FUNC(sub_83099504);
PPC_FUNC_IMPL(__imp__sub_83099504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83099508"))) PPC_WEAK_FUNC(sub_83099508);
PPC_FUNC_IMPL(__imp__sub_83099508) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83099510;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,24524
	ctx.r10.s64 = ctx.r11.s64 + 24524;
	// addi r28,r3,828
	ctx.r28.s64 = ctx.r3.s64 + 828;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r26,2
	ctx.r26.s64 = 2;
	// lwz r9,848(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x83099548
	if (cr6.lt) goto loc_83099548;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x83099548;
	sub_825952B8(ctx, base);
loc_83099548:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// addi r27,r30,800
	ctx.r27.s64 = ctx.r30.s64 + 800;
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,820(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 820);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8309957c
	if (cr6.lt) goto loc_8309957C;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x8309957C;
	sub_825952B8(ctx, base);
loc_8309957C:
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// addi r28,r30,772
	ctx.r28.s64 = ctx.r30.s64 + 772;
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,792(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 792);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830995a8
	if (cr6.lt) goto loc_830995A8;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x830995A8;
	sub_825952B8(ctx, base);
loc_830995A8:
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// addi r27,r30,744
	ctx.r27.s64 = ctx.r30.s64 + 744;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,764(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 764);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830995d4
	if (cr6.lt) goto loc_830995D4;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x830995D4;
	sub_825952B8(ctx, base);
loc_830995D4:
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// addi r28,r30,716
	ctx.r28.s64 = ctx.r30.s64 + 716;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,736(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 736);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83099600
	if (cr6.lt) goto loc_83099600;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x83099600;
	sub_825952B8(ctx, base);
loc_83099600:
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// addi r27,r30,688
	ctx.r27.s64 = ctx.r30.s64 + 688;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 708);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8309962c
	if (cr6.lt) goto loc_8309962C;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x8309962C;
	sub_825952B8(ctx, base);
loc_8309962C:
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// addi r28,r30,660
	ctx.r28.s64 = ctx.r30.s64 + 660;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,680(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 680);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83099658
	if (cr6.lt) goto loc_83099658;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x83099658;
	sub_825952B8(ctx, base);
loc_83099658:
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// addi r27,r30,632
	ctx.r27.s64 = ctx.r30.s64 + 632;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,652(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83099684
	if (cr6.lt) goto loc_83099684;
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x83099684;
	sub_825952B8(ctx, base);
loc_83099684:
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// addi r28,r30,604
	ctx.r28.s64 = ctx.r30.s64 + 604;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,624(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830996b0
	if (cr6.lt) goto loc_830996B0;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x830996B0;
	sub_825952B8(ctx, base);
loc_830996B0:
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// addi r27,r30,576
	ctx.r27.s64 = ctx.r30.s64 + 576;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,596(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 596);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830996dc
	if (cr6.lt) goto loc_830996DC;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x830996DC;
	sub_825952B8(ctx, base);
loc_830996DC:
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// bl 0x830a2ab0
	ctx.lr = 0x830996F0;
	sub_830A2AB0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830996F8"))) PPC_WEAK_FUNC(sub_830996F8);
PPC_FUNC_IMPL(__imp__sub_830996F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83099700;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// stw r6,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r6.u32);
	// addi r6,r1,204
	ctx.r6.s64 = ctx.r1.s64 + 204;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,196
	ctx.r5.s64 = ctx.r1.s64 + 196;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x830a0eb0
	ctx.lr = 0x8309972C;
	sub_830A0EB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83099744
	if (!cr6.eq) goto loc_83099744;
loc_83099738:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83099744:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x830a66c0
	ctx.lr = 0x83099750;
	sub_830A66C0(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,292
	ctx.r3.s64 = ctx.r31.s64 + 292;
	// bl 0x830fe280
	ctx.lr = 0x8309975C;
	sub_830FE280(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83099738
	if (cr6.eq) goto loc_83099738;
	// ld r11,500(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 500);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r27,492(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x8312dce0
	ctx.lr = 0x8309977C;
	sub_8312DCE0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,123
	cr6.compare<uint32_t>(ctx.r11.u32, 123, xer);
	// blt cr6,0x83099794
	if (cr6.lt) goto loc_83099794;
	// cmplwi cr6,r11,141
	cr6.compare<uint32_t>(ctx.r11.u32, 141, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x83099798
	if (!cr6.gt) goto loc_83099798;
loc_83099794:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_83099798:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83099b00
	if (cr6.eq) goto loc_83099B00;
	// cmplwi cr6,r11,123
	cr6.compare<uint32_t>(ctx.r11.u32, 123, xer);
	// bne cr6,0x830997c0
	if (!cr6.eq) goto loc_830997C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83099138
	ctx.lr = 0x830997B4;
	sub_83099138(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830997C0:
	// cmplwi cr6,r11,124
	cr6.compare<uint32_t>(ctx.r11.u32, 124, xer);
	// bne cr6,0x830997dc
	if (!cr6.eq) goto loc_830997DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830991a0
	ctx.lr = 0x830997D0;
	sub_830991A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830997DC:
	// cmplwi cr6,r11,125
	cr6.compare<uint32_t>(ctx.r11.u32, 125, xer);
	// bne cr6,0x830997fc
	if (!cr6.eq) goto loc_830997FC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83099390
	ctx.lr = 0x830997F0;
	sub_83099390(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830997FC:
	// cmplwi cr6,r11,126
	cr6.compare<uint32_t>(ctx.r11.u32, 126, xer);
	// bne cr6,0x83099818
	if (!cr6.eq) goto loc_83099818;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83099200
	ctx.lr = 0x8309980C;
	sub_83099200(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83099818:
	// cmplwi cr6,r11,127
	cr6.compare<uint32_t>(ctx.r11.u32, 127, xer);
	// bne cr6,0x83099834
	if (!cr6.eq) goto loc_83099834;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83099270
	ctx.lr = 0x83099828;
	sub_83099270(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83099834:
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(ctx.r11.u32, 128, xer);
	// bne cr6,0x83099850
	if (!cr6.eq) goto loc_83099850;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830992e8
	ctx.lr = 0x83099844;
	sub_830992E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83099850:
	// cmplwi cr6,r11,129
	cr6.compare<uint32_t>(ctx.r11.u32, 129, xer);
	// bne cr6,0x83099898
	if (!cr6.eq) goto loc_83099898;
	// lwz r11,676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83099c9c
	if (cr6.eq) goto loc_83099C9C;
	// lwz r10,680(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// addi r11,r31,660
	ctx.r11.s64 = ctx.r31.s64 + 660;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83099878
	if (cr6.lt) goto loc_83099878;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83099878:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,872
	ctx.r4.s64 = ctx.r31.s64 + 872;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x830eb0e8
	ctx.lr = 0x83099888;
	sub_830EB0E8(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83099898:
	// cmplwi cr6,r11,130
	cr6.compare<uint32_t>(ctx.r11.u32, 130, xer);
	// bne cr6,0x830998e0
	if (!cr6.eq) goto loc_830998E0;
	// lwz r11,704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83099c9c
	if (cr6.eq) goto loc_83099C9C;
	// lwz r10,708(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 708);
	// addi r11,r31,688
	ctx.r11.s64 = ctx.r31.s64 + 688;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x830998c0
	if (cr6.lt) goto loc_830998C0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_830998C0:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,880
	ctx.r4.s64 = ctx.r31.s64 + 880;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x830eb0e8
	ctx.lr = 0x830998D0;
	sub_830EB0E8(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830998E0:
	// cmplwi cr6,r11,131
	cr6.compare<uint32_t>(ctx.r11.u32, 131, xer);
	// bne cr6,0x830998fc
	if (!cr6.eq) goto loc_830998FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83099338
	ctx.lr = 0x830998F0;
	sub_83099338(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830998FC:
	// cmplwi cr6,r11,132
	cr6.compare<uint32_t>(ctx.r11.u32, 132, xer);
	// bne cr6,0x83099920
	if (!cr6.eq) goto loc_83099920;
	// li r5,2500
	ctx.r5.s64 = 2500;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83098e78
	ctx.lr = 0x83099914;
	sub_83098E78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83099920:
	// cmplwi cr6,r11,133
	cr6.compare<uint32_t>(ctx.r11.u32, 133, xer);
	// bne cr6,0x83099944
	if (!cr6.eq) goto loc_83099944;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83098e78
	ctx.lr = 0x83099938;
	sub_83098E78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83099944:
	// cmplwi cr6,r11,134
	cr6.compare<uint32_t>(ctx.r11.u32, 134, xer);
	// bne cr6,0x8309997c
	if (!cr6.eq) goto loc_8309997C;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r11,24124
	ctx.r11.s64 = ctx.r11.s64 + 24124;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-140
	ctx.r3.s64 = ctx.r11.s64 + -140;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,864
	ctx.r4.s64 = ctx.r31.s64 + 864;
	// bl 0x830eaf60
	ctx.lr = 0x8309996C;
	sub_830EAF60(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8309997C:
	// cmplwi cr6,r11,135
	cr6.compare<uint32_t>(ctx.r11.u32, 135, xer);
	// bne cr6,0x830999b4
	if (!cr6.eq) goto loc_830999B4;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r11,24124
	ctx.r11.s64 = ctx.r11.s64 + 24124;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-120
	ctx.r3.s64 = ctx.r11.s64 + -120;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,864
	ctx.r4.s64 = ctx.r31.s64 + 864;
	// bl 0x830eaf60
	ctx.lr = 0x830999A4;
	sub_830EAF60(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830999B4:
	// cmplwi cr6,r11,136
	cr6.compare<uint32_t>(ctx.r11.u32, 136, xer);
	// bne cr6,0x830999ec
	if (!cr6.eq) goto loc_830999EC;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r11,24124
	ctx.r11.s64 = ctx.r11.s64 + 24124;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-100
	ctx.r3.s64 = ctx.r11.s64 + -100;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,864
	ctx.r4.s64 = ctx.r31.s64 + 864;
	// bl 0x830eaf60
	ctx.lr = 0x830999DC;
	sub_830EAF60(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830999EC:
	// cmplwi cr6,r11,137
	cr6.compare<uint32_t>(ctx.r11.u32, 137, xer);
	// bne cr6,0x83099a24
	if (!cr6.eq) goto loc_83099A24;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r11,24124
	ctx.r11.s64 = ctx.r11.s64 + 24124;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-80
	ctx.r3.s64 = ctx.r11.s64 + -80;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,864
	ctx.r4.s64 = ctx.r31.s64 + 864;
	// bl 0x830eaf60
	ctx.lr = 0x83099A14;
	sub_830EAF60(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83099A24:
	// cmplwi cr6,r11,138
	cr6.compare<uint32_t>(ctx.r11.u32, 138, xer);
	// bne cr6,0x83099a5c
	if (!cr6.eq) goto loc_83099A5C;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r11,24124
	ctx.r11.s64 = ctx.r11.s64 + 24124;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-60
	ctx.r3.s64 = ctx.r11.s64 + -60;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,864
	ctx.r4.s64 = ctx.r31.s64 + 864;
	// bl 0x830eaf60
	ctx.lr = 0x83099A4C;
	sub_830EAF60(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83099A5C:
	// cmplwi cr6,r11,139
	cr6.compare<uint32_t>(ctx.r11.u32, 139, xer);
	// bne cr6,0x83099a94
	if (!cr6.eq) goto loc_83099A94;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r11,24124
	ctx.r11.s64 = ctx.r11.s64 + 24124;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-40
	ctx.r3.s64 = ctx.r11.s64 + -40;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,864
	ctx.r4.s64 = ctx.r31.s64 + 864;
	// bl 0x830eaf60
	ctx.lr = 0x83099A84;
	sub_830EAF60(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83099A94:
	// cmplwi cr6,r11,140
	cr6.compare<uint32_t>(ctx.r11.u32, 140, xer);
	// bne cr6,0x83099acc
	if (!cr6.eq) goto loc_83099ACC;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r11,24124
	ctx.r11.s64 = ctx.r11.s64 + 24124;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-20
	ctx.r3.s64 = ctx.r11.s64 + -20;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,864
	ctx.r4.s64 = ctx.r31.s64 + 864;
	// bl 0x830eaf60
	ctx.lr = 0x83099ABC;
	sub_830EAF60(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83099ACC:
	// cmplwi cr6,r11,141
	cr6.compare<uint32_t>(ctx.r11.u32, 141, xer);
	// bne cr6,0x83099ca0
	if (!cr6.eq) goto loc_83099CA0;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r11,24124
	ctx.r3.s64 = ctx.r11.s64 + 24124;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,864
	ctx.r4.s64 = ctx.r31.s64 + 864;
	// bl 0x830eaf60
	ctx.lr = 0x83099AF0;
	sub_830EAF60(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83099B00:
	// addi r29,r31,420
	ctx.r29.s64 = ctx.r31.s64 + 420;
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8309f140
	ctx.lr = 0x83099B1C;
	sub_8309F140(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subfe r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83099b7c
	if (!cr6.eq) goto loc_83099B7C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83099ca0
	if (cr6.eq) goto loc_83099CA0;
	// li r11,25
	ctx.r11.s64 = 25;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x83099B50;
	sub_82595150(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83099B68;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x83099B70;
	sub_82595170(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83099B7C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83099ca0
	if (cr6.eq) goto loc_83099CA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x83099B8C;
	sub_825832D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830a8438
	ctx.lr = 0x83099B98;
	sub_830A8438(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83099ba8
	if (cr6.eq) goto loc_83099BA8;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// beq cr6,0x83099bb0
	if (cr6.eq) goto loc_83099BB0;
loc_83099BA8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83099c60
	if (!cr6.eq) goto loc_83099C60;
loc_83099BB0:
	// bl 0x830e9240
	ctx.lr = 0x83099BB4;
	sub_830E9240(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x830e95d8
	ctx.lr = 0x83099BC0;
	sub_830E95D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac2480
	ctx.lr = 0x83099BC8;
	sub_83AC2480(ctx, base);
	// cmpwi cr6,r3,108
	cr6.compare<int32_t>(ctx.r3.s32, 108, xer);
	// beq cr6,0x83099c60
	if (cr6.eq) goto loc_83099C60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac2480
	ctx.lr = 0x83099BD8;
	sub_83AC2480(ctx, base);
	// cmpwi cr6,r3,109
	cr6.compare<int32_t>(ctx.r3.s32, 109, xer);
	// beq cr6,0x83099c60
	if (cr6.eq) goto loc_83099C60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac2480
	ctx.lr = 0x83099BE8;
	sub_83AC2480(ctx, base);
	// cmpwi cr6,r3,110
	cr6.compare<int32_t>(ctx.r3.s32, 110, xer);
	// beq cr6,0x83099c60
	if (cr6.eq) goto loc_83099C60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac2480
	ctx.lr = 0x83099BF8;
	sub_83AC2480(ctx, base);
	// cmpwi cr6,r3,111
	cr6.compare<int32_t>(ctx.r3.s32, 111, xer);
	// beq cr6,0x83099c60
	if (cr6.eq) goto loc_83099C60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac2480
	ctx.lr = 0x83099C08;
	sub_83AC2480(ctx, base);
	// cmpwi cr6,r3,112
	cr6.compare<int32_t>(ctx.r3.s32, 112, xer);
	// beq cr6,0x83099c60
	if (cr6.eq) goto loc_83099C60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac2480
	ctx.lr = 0x83099C18;
	sub_83AC2480(ctx, base);
	// cmpwi cr6,r3,101
	cr6.compare<int32_t>(ctx.r3.s32, 101, xer);
	// bne cr6,0x83099c28
	if (!cr6.eq) goto loc_83099C28;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(ctx.r27.s32, 1, xer);
	// beq cr6,0x83099c60
	if (cr6.eq) goto loc_83099C60;
loc_83099C28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac2480
	ctx.lr = 0x83099C30;
	sub_83AC2480(ctx, base);
	// cmpwi cr6,r3,102
	cr6.compare<int32_t>(ctx.r3.s32, 102, xer);
	// bne cr6,0x83099c40
	if (!cr6.eq) goto loc_83099C40;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(ctx.r27.s32, 1, xer);
	// beq cr6,0x83099c60
	if (cr6.eq) goto loc_83099C60;
loc_83099C40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac2480
	ctx.lr = 0x83099C48;
	sub_83AC2480(ctx, base);
	// cmpwi cr6,r3,120
	cr6.compare<int32_t>(ctx.r3.s32, 120, xer);
	// beq cr6,0x83099c60
	if (cr6.eq) goto loc_83099C60;
	// bl 0x830e9240
	ctx.lr = 0x83099C54;
	sub_830E9240(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x830e95d8
	ctx.lr = 0x83099C60;
	sub_830E95D8(ctx, base);
loc_83099C60:
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// beq cr6,0x83099c70
	if (cr6.eq) goto loc_83099C70;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// bne cr6,0x83099c90
	if (!cr6.eq) goto loc_83099C90;
loc_83099C70:
	// bl 0x830e9240
	ctx.lr = 0x83099C74;
	sub_830E9240(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x830e95d8
	ctx.lr = 0x83099C80;
	sub_830E95D8(ctx, base);
	// bl 0x830e9240
	ctx.lr = 0x83099C84;
	sub_830E9240(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x830e95d8
	ctx.lr = 0x83099C90;
	sub_830E95D8(ctx, base);
loc_83099C90:
	// bl 0x830e9240
	ctx.lr = 0x83099C94;
	sub_830E9240(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830e95a8
	ctx.lr = 0x83099C9C;
	sub_830E95A8(ctx, base);
loc_83099C9C:
	// li r30,1
	ctx.r30.s64 = 1;
loc_83099CA0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83099CAC"))) PPC_WEAK_FUNC(sub_83099CAC);
PPC_FUNC_IMPL(__imp__sub_83099CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83099CB0"))) PPC_WEAK_FUNC(sub_83099CB0);
PPC_FUNC_IMPL(__imp__sub_83099CB0) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x830a2c10
	ctx.lr = 0x83099CD0;
	sub_830A2C10(ctx, base);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,24524
	ctx.r9.s64 = ctx.r10.s64 + 24524;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r9,46
	ctx.r9.s64 = 46;
	// stw r11,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r11.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r11,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r11.u32);
	// stw r10,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r10.u32);
	// stw r11,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r11.u32);
	// stb r11,576(r31)
	PPC_STORE_U8(ctx.r31.u32 + 576, ctx.r11.u8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stw r10,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r10.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r11,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r11.u32);
	// stb r11,604(r31)
	PPC_STORE_U8(ctx.r31.u32 + 604, ctx.r11.u8);
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// stw r10,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r10.u32);
	// stw r11,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r11.u32);
	// stb r11,632(r31)
	PPC_STORE_U8(ctx.r31.u32 + 632, ctx.r11.u8);
	// stw r10,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r10.u32);
	// stw r11,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r11.u32);
	// stb r11,660(r31)
	PPC_STORE_U8(ctx.r31.u32 + 660, ctx.r11.u8);
	// stw r10,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r10.u32);
	// stw r11,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r11.u32);
	// stb r11,688(r31)
	PPC_STORE_U8(ctx.r31.u32 + 688, ctx.r11.u8);
	// stw r10,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r10.u32);
	// stw r11,732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 732, ctx.r11.u32);
	// stb r11,716(r31)
	PPC_STORE_U8(ctx.r31.u32 + 716, ctx.r11.u8);
	// stw r10,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r10.u32);
	// stw r11,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r11.u32);
	// stb r11,744(r31)
	PPC_STORE_U8(ctx.r31.u32 + 744, ctx.r11.u8);
	// stw r10,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r10.u32);
	// stw r11,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r11.u32);
	// stb r11,772(r31)
	PPC_STORE_U8(ctx.r31.u32 + 772, ctx.r11.u8);
	// stw r10,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r10.u32);
	// stw r11,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r11.u32);
	// stb r11,800(r31)
	PPC_STORE_U8(ctx.r31.u32 + 800, ctx.r11.u8);
	// stw r10,848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 848, ctx.r10.u32);
	// addi r10,r31,940
	ctx.r10.s64 = ctx.r31.s64 + 940;
	// stw r11,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r11.u32);
	// stb r11,828(r31)
	PPC_STORE_U8(ctx.r31.u32 + 828, ctx.r11.u8);
	// std r11,856(r31)
	PPC_STORE_U64(ctx.r31.u32 + 856, ctx.r11.u64);
	// std r11,864(r31)
	PPC_STORE_U64(ctx.r31.u32 + 864, ctx.r11.u64);
	// std r11,872(r31)
	PPC_STORE_U64(ctx.r31.u32 + 872, ctx.r11.u64);
	// std r11,880(r31)
	PPC_STORE_U64(ctx.r31.u32 + 880, ctx.r11.u64);
	// std r11,888(r31)
	PPC_STORE_U64(ctx.r31.u32 + 888, ctx.r11.u64);
	// std r11,896(r31)
	PPC_STORE_U64(ctx.r31.u32 + 896, ctx.r11.u64);
	// std r11,904(r31)
	PPC_STORE_U64(ctx.r31.u32 + 904, ctx.r11.u64);
loc_83099D9C:
	// stb r11,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// sth r9,12(r10)
	PPC_STORE_U16(ctx.r10.u32 + 12, ctx.r9.u16);
	// stwu r11,16(r10)
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83099d9c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83099D9C;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r10,r31,908
	ctx.r10.s64 = ctx.r31.s64 + 908;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83099DBC:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83099dbc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83099DBC;
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// sth r11,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r11.u16);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83099de8
	if (cr6.eq) goto loc_83099DE8;
	// addi r11,r11,23972
	ctx.r11.s64 = ctx.r11.s64 + 23972;
	// addi r4,r11,-92
	ctx.r4.s64 = ctx.r11.s64 + -92;
	// addi r5,r11,-64
	ctx.r5.s64 = ctx.r11.s64 + -64;
	// b 0x83099df0
	goto loc_83099DF0;
loc_83099DE8:
	// addi r5,r11,23972
	ctx.r5.s64 = ctx.r11.s64 + 23972;
	// addi r4,r5,-48
	ctx.r4.s64 = ctx.r5.s64 + -48;
loc_83099DF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a0b50
	ctx.lr = 0x83099DF8;
	sub_830A0B50(ctx, base);
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

__attribute__((alias("__imp__sub_83099E14"))) PPC_WEAK_FUNC(sub_83099E14);
PPC_FUNC_IMPL(__imp__sub_83099E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83099E18"))) PPC_WEAK_FUNC(sub_83099E18);
PPC_FUNC_IMPL(__imp__sub_83099E18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x83099508
	ctx.lr = 0x83099E38;
	sub_83099508(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83099e50
	if (cr6.eq) goto loc_83099E50;
	// bl 0x82416268
	ctx.lr = 0x83099E4C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83099E50:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83099E68"))) PPC_WEAK_FUNC(sub_83099E68);
PPC_FUNC_IMPL(__imp__sub_83099E68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,576
	ctx.r31.s64 = ctx.r3.s64 + 576;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r4,r11,24212
	ctx.r4.s64 = ctx.r11.s64 + 24212;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cc28
	ctx.lr = 0x83099E98;
	sub_8259CC28(ctx, base);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83099eb8
	if (cr6.eq) goto loc_83099EB8;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1da8
	ctx.lr = 0x83099EB8;
	sub_825A1DA8(ctx, base);
loc_83099EB8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83099f04
	if (cr6.eq) goto loc_83099F04;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83099ed8
	if (cr6.lt) goto loc_83099ED8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x83099edc
	goto loc_83099EDC;
loc_83099ED8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83099EDC:
	// bl 0x830eb240
	ctx.lr = 0x83099EE0;
	sub_830EB240(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83099f04
	if (!cr6.eq) goto loc_83099F04;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83099f00
	if (cr6.lt) goto loc_83099F00;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_83099F00:
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_83099F04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83099F1C"))) PPC_WEAK_FUNC(sub_83099F1C);
PPC_FUNC_IMPL(__imp__sub_83099F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83099F20"))) PPC_WEAK_FUNC(sub_83099F20);
PPC_FUNC_IMPL(__imp__sub_83099F20) {
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
	// bl 0x83099090
	ctx.lr = 0x83099F38;
	sub_83099090(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83099f58
	if (cr6.eq) goto loc_83099F58;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r31,604
	ctx.r3.s64 = ctx.r31.s64 + 604;
	// li r5,19
	ctx.r5.s64 = 19;
	// addi r4,r11,24228
	ctx.r4.s64 = ctx.r11.s64 + 24228;
	// bl 0x8259cc28
	ctx.lr = 0x83099F58;
	sub_8259CC28(ctx, base);
loc_83099F58:
	// addi r31,r31,604
	ctx.r31.s64 = ctx.r31.s64 + 604;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83099fa8
	if (cr6.eq) goto loc_83099FA8;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83099f7c
	if (cr6.lt) goto loc_83099F7C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x83099f80
	goto loc_83099F80;
loc_83099F7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83099F80:
	// bl 0x830eb240
	ctx.lr = 0x83099F84;
	sub_830EB240(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83099fa8
	if (!cr6.eq) goto loc_83099FA8;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83099fa4
	if (cr6.lt) goto loc_83099FA4;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_83099FA4:
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_83099FA8:
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

__attribute__((alias("__imp__sub_83099FBC"))) PPC_WEAK_FUNC(sub_83099FBC);
PPC_FUNC_IMPL(__imp__sub_83099FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83099FC0"))) PPC_WEAK_FUNC(sub_83099FC0);
PPC_FUNC_IMPL(__imp__sub_83099FC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,632
	ctx.r31.s64 = ctx.r3.s64 + 632;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r4,r11,24248
	ctx.r4.s64 = ctx.r11.s64 + 24248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cc28
	ctx.lr = 0x83099FF0;
	sub_8259CC28(ctx, base);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8309a010
	if (cr6.eq) goto loc_8309A010;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1da8
	ctx.lr = 0x8309A010;
	sub_825A1DA8(ctx, base);
loc_8309A010:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309a05c
	if (cr6.eq) goto loc_8309A05C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8309a030
	if (cr6.lt) goto loc_8309A030;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8309a034
	goto loc_8309A034;
loc_8309A030:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8309A034:
	// bl 0x830eb240
	ctx.lr = 0x8309A038;
	sub_830EB240(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309a05c
	if (!cr6.eq) goto loc_8309A05C;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8309a058
	if (cr6.lt) goto loc_8309A058;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8309A058:
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_8309A05C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309A074"))) PPC_WEAK_FUNC(sub_8309A074);
PPC_FUNC_IMPL(__imp__sub_8309A074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309A078"))) PPC_WEAK_FUNC(sub_8309A078);
PPC_FUNC_IMPL(__imp__sub_8309A078) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8309A080;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// lis r28,-31763
	ctx.r28.s64 = -2081619968;
	// ori r30,r10,48936
	ctx.r30.u64 = ctx.r10.u64 | 48936;
	// addi r26,r11,24264
	ctx.r26.s64 = ctx.r11.s64 + 24264;
loc_8309A0A4:
	// lwz r10,-3564(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// li r11,2
	ctx.r11.s64 = 2;
	// mulli r9,r31,8248
	ctx.r9.s64 = ctx.r31.s64 * 8248;
	// subfc r8,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r31.s64 - ctx.r11.s64;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lwz r11,6132(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6132);
	// rlwinm r6,r31,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subfe r4,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// add r3,r5,r30
	ctx.r3.u64 = ctx.r5.u64 + ctx.r30.u64;
	// and r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 & ctx.r3.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x8309a178
	if (!cr6.lt) goto loc_8309A178;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x8309a178
	if (!cr6.eq) goto loc_8309A178;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r29,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r29.u64);
	// std r29,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r29.u64);
	// std r29,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r29.u64);
	// std r29,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r29.u64);
	// std r29,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r29.u64);
	// lwz r4,6132(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6132);
	// bl 0x82a26a18
	ctx.lr = 0x8309A10C;
	sub_82A26A18(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r6,r9,14
	ctx.r6.u64 = ctx.r9.u32 & 0x3FFFF;
	// bl 0x831d0b08
	ctx.lr = 0x8309A128;
	sub_831D0B08(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne cr6,0x8309a150
	if (!cr6.eq) goto loc_8309A150;
loc_8309A138:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8309a138
	if (!cr6.eq) goto loc_8309A138;
	// addi r3,r27,660
	ctx.r3.s64 = ctx.r27.s64 + 660;
	// b 0x8309a164
	goto loc_8309A164;
loc_8309A150:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8309a150
	if (!cr6.eq) goto loc_8309A150;
	// addi r3,r27,688
	ctx.r3.s64 = ctx.r27.s64 + 688;
loc_8309A164:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8309A178;
	sub_8259CC28(ctx, base);
loc_8309A178:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x8309a0a4
	if (cr6.lt) goto loc_8309A0A4;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309A18C"))) PPC_WEAK_FUNC(sub_8309A18C);
PPC_FUNC_IMPL(__imp__sub_8309A18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309A190"))) PPC_WEAK_FUNC(sub_8309A190);
PPC_FUNC_IMPL(__imp__sub_8309A190) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8309A198;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x830a9ff0
	ctx.lr = 0x8309A1B0;
	sub_830A9FF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bge cr6,0x8309a1ec
	if (!cr6.lt) goto loc_8309A1EC;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,6132(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// bl 0x82a26a18
	ctx.lr = 0x8309A1D8;
	sub_82A26A18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x830ea6a8
	ctx.lr = 0x8309A1E8;
	sub_830EA6A8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8309A1EC:
	// clrlwi r11,r11,14
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplwi cr6,r11,108
	cr6.compare<uint32_t>(ctx.r11.u32, 108, xer);
	// bne cr6,0x8309a2fc
	if (!cr6.eq) goto loc_8309A2FC;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// li r10,2
	ctx.r10.s64 = 2;
	// mulli r9,r31,8248
	ctx.r9.s64 = ctx.r31.s64 * 8248;
	// subfc r8,r10,r31
	xer.ca = ctx.r31.u32 >= ctx.r10.u32;
	ctx.r8.s64 = ctx.r31.s64 - ctx.r10.s64;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// lwz r10,6132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// rlwinm r6,r31,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subfe r4,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// addis r3,r5,1
	ctx.r3.s64 = ctx.r5.s64 + 65536;
	// addi r3,r3,-16600
	ctx.r3.s64 = ctx.r3.s64 + -16600;
	// and r10,r4,r3
	ctx.r10.u64 = ctx.r4.u64 & ctx.r3.u64;
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8309a2fc
	if (cr6.eq) goto loc_8309A2FC;
	// lwz r3,6132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// addis r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 65536;
	// addi r29,r29,-16828
	ctx.r29.s64 = ctx.r29.s64 + -16828;
	// bl 0x82a26828
	ctx.lr = 0x8309A24C;
	sub_82A26828(ctx, base);
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,6132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// bl 0x82a26848
	ctx.lr = 0x8309A25C;
	sub_82A26848(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83742958
	ctx.lr = 0x8309A268;
	sub_83742958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309a2c4
	if (cr6.eq) goto loc_8309A2C4;
	// lbz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bge cr6,0x8309a2c4
	if (!cr6.lt) goto loc_8309A2C4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8309a2c4
	if (!cr6.eq) goto loc_8309A2C4;
	// lbz r11,1(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309a2c4
	if (cr6.eq) goto loc_8309A2C4;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// cmpwi cr6,r28,7
	cr6.compare<int32_t>(ctx.r28.s32, 7, xer);
	// addi r31,r11,24364
	ctx.r31.s64 = ctx.r11.s64 + 24364;
	// bne cr6,0x8309a2b0
	if (!cr6.eq) goto loc_8309A2B0;
	// addi r3,r27,744
	ctx.r3.s64 = ctx.r27.s64 + 744;
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// bl 0x8259d6c0
	ctx.lr = 0x8309A2B0;
	sub_8259D6C0(ctx, base);
loc_8309A2B0:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309a2fc
	if (!cr6.eq) goto loc_8309A2FC;
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// b 0x8309a2f4
	goto loc_8309A2F4;
loc_8309A2C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83742df0
	ctx.lr = 0x8309A2CC;
	sub_83742DF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309a2fc
	if (cr6.eq) goto loc_8309A2FC;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne cr6,0x8309a2fc
	if (!cr6.eq) goto loc_8309A2FC;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309a2fc
	if (!cr6.eq) goto loc_8309A2FC;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r4,r11,24364
	ctx.r4.s64 = ctx.r11.s64 + 24364;
loc_8309A2F4:
	// addi r3,r27,744
	ctx.r3.s64 = ctx.r27.s64 + 744;
	// bl 0x8259d6c0
	ctx.lr = 0x8309A2FC;
	sub_8259D6C0(ctx, base);
loc_8309A2FC:
	// lwz r11,760(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 760);
	// addi r31,r27,744
	ctx.r31.s64 = ctx.r27.s64 + 744;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309a34c
	if (cr6.eq) goto loc_8309A34C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8309a320
	if (cr6.lt) goto loc_8309A320;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8309a324
	goto loc_8309A324;
loc_8309A320:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8309A324:
	// bl 0x830eb240
	ctx.lr = 0x8309A328;
	sub_830EB240(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309a34c
	if (!cr6.eq) goto loc_8309A34C;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8309a348
	if (cr6.lt) goto loc_8309A348;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8309A348:
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_8309A34C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309A354"))) PPC_WEAK_FUNC(sub_8309A354);
PPC_FUNC_IMPL(__imp__sub_8309A354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309A358"))) PPC_WEAK_FUNC(sub_8309A358);
PPC_FUNC_IMPL(__imp__sub_8309A358) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x83099090
	ctx.lr = 0x8309A374;
	sub_83099090(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309a3dc
	if (cr6.eq) goto loc_8309A3DC;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,6132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// addis r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 65536;
	// addi r31,r31,-16828
	ctx.r31.s64 = ctx.r31.s64 + -16828;
	// bl 0x82a26828
	ctx.lr = 0x8309A398;
	sub_82A26828(ctx, base);
	// bl 0x83742958
	ctx.lr = 0x8309A39C;
	sub_83742958(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8309a3c8
	if (cr6.eq) goto loc_8309A3C8;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bge cr6,0x8309a3c8
	if (!cr6.lt) goto loc_8309A3C8;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8309a3c8
	if (!cr6.eq) goto loc_8309A3C8;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309a3dc
	if (cr6.eq) goto loc_8309A3DC;
loc_8309A3C8:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r30,828
	ctx.r3.s64 = ctx.r30.s64 + 828;
	// li r5,21
	ctx.r5.s64 = 21;
	// addi r4,r11,24416
	ctx.r4.s64 = ctx.r11.s64 + 24416;
	// bl 0x8259cc28
	ctx.lr = 0x8309A3DC;
	sub_8259CC28(ctx, base);
loc_8309A3DC:
	// lwz r11,844(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 844);
	// addi r31,r30,828
	ctx.r31.s64 = ctx.r30.s64 + 828;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309a42c
	if (cr6.eq) goto loc_8309A42C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8309a400
	if (cr6.lt) goto loc_8309A400;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8309a404
	goto loc_8309A404;
loc_8309A400:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8309A404:
	// bl 0x830eb240
	ctx.lr = 0x8309A408;
	sub_830EB240(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309a42c
	if (!cr6.eq) goto loc_8309A42C;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8309a428
	if (cr6.lt) goto loc_8309A428;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8309A428:
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_8309A42C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309A444"))) PPC_WEAK_FUNC(sub_8309A444);
PPC_FUNC_IMPL(__imp__sub_8309A444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309A448"))) PPC_WEAK_FUNC(sub_8309A448);
PPC_FUNC_IMPL(__imp__sub_8309A448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8309A450;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// bl 0x8309a190
	ctx.lr = 0x8309A474;
	sub_8309A190(ctx, base);
	// lwz r11,760(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309a544
	if (!cr6.eq) goto loc_8309A544;
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r27,-1
	ctx.r27.s64 = -1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r28,r11,24300
	ctx.r28.s64 = ctx.r11.s64 + 24300;
	// beq cr6,0x8309a4d8
	if (cr6.eq) goto loc_8309A4D8;
	// addi r29,r31,744
	ctx.r29.s64 = ctx.r31.s64 + 744;
	// addi r4,r28,-16
	ctx.r4.s64 = ctx.r28.s64 + -16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259d6c0
	ctx.lr = 0x8309A4A8;
	sub_8259D6C0(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309a4c8
	if (cr6.eq) goto loc_8309A4C8;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825a1da8
	ctx.lr = 0x8309A4C8;
	sub_825A1DA8(ctx, base);
loc_8309A4C8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83099490
	ctx.lr = 0x8309A4D8;
	sub_83099490(ctx, base);
loc_8309A4D8:
	// lwz r11,760(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309a544
	if (!cr6.eq) goto loc_8309A544;
	// addi r29,r31,744
	ctx.r29.s64 = ctx.r31.s64 + 744;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259d6c0
	ctx.lr = 0x8309A4F4;
	sub_8259D6C0(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309a514
	if (cr6.eq) goto loc_8309A514;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309a514
	if (cr6.eq) goto loc_8309A514;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x8309a524
	goto loc_8309A524;
loc_8309A514:
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309a534
	if (cr6.eq) goto loc_8309A534;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_8309A524:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825a1da8
	ctx.lr = 0x8309A534;
	sub_825A1DA8(ctx, base);
loc_8309A534:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83099490
	ctx.lr = 0x8309A544;
	sub_83099490(ctx, base);
loc_8309A544:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309A54C"))) PPC_WEAK_FUNC(sub_8309A54C);
PPC_FUNC_IMPL(__imp__sub_8309A54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309A550"))) PPC_WEAK_FUNC(sub_8309A550);
PPC_FUNC_IMPL(__imp__sub_8309A550) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8309A558;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r31,r3,772
	ctx.r31.s64 = ctx.r3.s64 + 772;
	// addi r30,r11,24412
	ctx.r30.s64 = ctx.r11.s64 + 24412;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8259cc28
	ctx.lr = 0x8309A588;
	sub_8259CC28(ctx, base);
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// li r26,-1
	ctx.r26.s64 = -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8309a5c4
	if (cr6.eq) goto loc_8309A5C4;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309a5bc
	if (cr6.eq) goto loc_8309A5BC;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x825a1da8
	ctx.lr = 0x8309A5B8;
	sub_825A1DA8(ctx, base);
	// b 0x8309a5d0
	goto loc_8309A5D0;
loc_8309A5BC:
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
	// b 0x8309a5c8
	goto loc_8309A5C8;
loc_8309A5C4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8309A5C8:
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x825a1eb8
	ctx.lr = 0x8309A5D0;
	sub_825A1EB8(ctx, base);
loc_8309A5D0:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r29,800
	ctx.r3.s64 = ctx.r29.s64 + 800;
	// bl 0x8259cb28
	ctx.lr = 0x8309A5E4;
	sub_8259CB28(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8309a358
	ctx.lr = 0x8309A5F0;
	sub_8309A358(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309A5F8"))) PPC_WEAK_FUNC(sub_8309A5F8);
PPC_FUNC_IMPL(__imp__sub_8309A5F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x8309A600;
	__savegprlr_14(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31763
	ctx.r27.s64 = -2081619968;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r14,15
	ctx.r14.s64 = 15;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r15,r4
	ctx.r15.u64 = ctx.r4.u64;
	// lwz r11,-3564(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// lwz r10,6132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// lwz r9,572(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 572);
	// stw r14,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r14.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// clrlwi r16,r9,31
	ctx.r16.u64 = ctx.r9.u32 & 0x1;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// stw r14,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r14.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// lwz r3,6132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// bl 0x82a26828
	ctx.lr = 0x8309A648;
	sub_82A26828(ctx, base);
	// lwz r11,-3564(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// lwz r8,6132(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82a26848
	ctx.lr = 0x8309A65C;
	sub_82A26848(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r7,r11,-14
	ctx.r7.s64 = ctx.r11.s64 + -14;
	// addi r29,r11,-30
	ctx.r29.s64 = ctx.r11.s64 + -30;
	// addi r6,r11,-7
	ctx.r6.s64 = ctx.r11.s64 + -7;
	// addi r5,r11,-21
	ctx.r5.s64 = ctx.r11.s64 + -21;
	// addi r4,r11,-22
	ctx.r4.s64 = ctx.r11.s64 + -22;
	// addi r10,r11,-31
	ctx.r10.s64 = ctx.r11.s64 + -31;
	// addi r9,r11,-63
	ctx.r9.s64 = ctx.r11.s64 + -63;
	// addi r8,r11,-26
	ctx.r8.s64 = ctx.r11.s64 + -26;
	// addi r28,r11,-136
	ctx.r28.s64 = ctx.r11.s64 + -136;
	// addi r11,r11,-121
	ctx.r11.s64 = ctx.r11.s64 + -121;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// cntlzw r5,r5
	ctx.r5.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// cntlzw r4,r4
	ctx.r4.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cntlzw r20,r29
	ctx.r20.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// cntlzw r28,r28
	ctx.r28.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// rlwinm r29,r6,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// rlwinm r24,r5,27,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// rlwinm r23,r4,27,31,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// rlwinm r21,r10,27,31,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r26,r9,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// rlwinm r22,r8,27,31,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm r20,r20,27,31,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 27) & 0x1;
	// rlwinm r19,r28,27,31,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 27) & 0x1;
	// rlwinm r18,r11,27,31,31
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x83742b00
	ctx.lr = 0x8309A6E4;
	sub_83742B00(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8309a708
	if (!cr6.eq) goto loc_8309A708;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837421c8
	ctx.lr = 0x8309A6F8;
	sub_837421C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// beq cr6,0x8309a70c
	if (cr6.eq) goto loc_8309A70C;
loc_8309A708:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8309A70C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x83742df0
	ctx.lr = 0x8309A718;
	sub_83742DF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309a73c
	if (!cr6.eq) goto loc_8309A73C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837421b8
	ctx.lr = 0x8309A72C;
	sub_837421B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309a740
	if (cr6.eq) goto loc_8309A740;
loc_8309A73C:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8309A740:
	// clrlwi r17,r29,24
	ctx.r17.u64 = ctx.r29.u32 & 0xFF;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// clrlwi r29,r10,24
	ctx.r29.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(ctx.r17.u32, 0, xer);
	// addi r31,r11,24208
	ctx.r31.s64 = ctx.r11.s64 + 24208;
	// beq cr6,0x8309a76c
	if (cr6.eq) goto loc_8309A76C;
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x8309A768;
	sub_8259CC28(ctx, base);
	// b 0x8309a824
	goto loc_8309A824;
loc_8309A76C:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8309a780
	if (cr6.eq) goto loc_8309A780;
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// b 0x8309a81c
	goto loc_8309A81C;
loc_8309A780:
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309a794
	if (cr6.eq) goto loc_8309A794;
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// b 0x8309a81c
	goto loc_8309A81C;
loc_8309A794:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309a7a8
	if (cr6.eq) goto loc_8309A7A8;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// b 0x8309a81c
	goto loc_8309A81C;
loc_8309A7A8:
	// clrlwi r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309a7bc
	if (cr6.eq) goto loc_8309A7BC;
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// b 0x8309a81c
	goto loc_8309A81C;
loc_8309A7BC:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309a7d0
	if (cr6.eq) goto loc_8309A7D0;
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// b 0x8309a81c
	goto loc_8309A81C;
loc_8309A7D0:
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309a7e4
	if (cr6.eq) goto loc_8309A7E4;
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// b 0x8309a81c
	goto loc_8309A81C;
loc_8309A7E4:
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309a7f8
	if (cr6.eq) goto loc_8309A7F8;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// b 0x8309a81c
	goto loc_8309A81C;
loc_8309A7F8:
	// clrlwi r11,r19,24
	ctx.r11.u64 = ctx.r19.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309a80c
	if (cr6.eq) goto loc_8309A80C;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// b 0x8309a81c
	goto loc_8309A81C;
loc_8309A80C:
	// clrlwi r11,r18,24
	ctx.r11.u64 = ctx.r18.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309a824
	if (cr6.eq) goto loc_8309A824;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
loc_8309A81C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259d6c0
	ctx.lr = 0x8309A824;
	sub_8259D6C0(ctx, base);
loc_8309A824:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309a844
	if (cr6.eq) goto loc_8309A844;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x8309A840;
	sub_8259CC28(ctx, base);
	// b 0x8309a85c
	goto loc_8309A85C;
loc_8309A844:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309a85c
	if (cr6.eq) goto loc_8309A85C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259d6c0
	ctx.lr = 0x8309A85C;
	sub_8259D6C0(ctx, base);
loc_8309A85C:
	// lwz r10,596(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 596);
	// addi r11,r25,576
	ctx.r11.s64 = ctx.r25.s64 + 576;
	// stw r30,592(r25)
	PPC_STORE_U32(ctx.r25.u32 + 592, ctx.r30.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8309a878
	if (cr6.lt) goto loc_8309A878;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8309a87c
	goto loc_8309A87C;
loc_8309A878:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8309A87C:
	// stb r30,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r30.u8);
	// addi r11,r25,604
	ctx.r11.s64 = ctx.r25.s64 + 604;
	// lwz r10,624(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 624);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r30,620(r25)
	PPC_STORE_U32(ctx.r25.u32 + 620, ctx.r30.u32);
	// blt cr6,0x8309a898
	if (cr6.lt) goto loc_8309A898;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8309A898:
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(ctx.r17.u32, 0, xer);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// beq cr6,0x8309a8b0
	if (cr6.eq) goto loc_8309A8B0;
	// clrlwi r11,r16,24
	ctx.r11.u64 = ctx.r16.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309a928
	if (!cr6.eq) goto loc_8309A928;
loc_8309A8B0:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8309a8c8
	if (cr6.eq) goto loc_8309A8C8;
	// clrlwi r11,r16,24
	ctx.r11.u64 = ctx.r16.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309a928
	if (!cr6.eq) goto loc_8309A928;
loc_8309A8C8:
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309a8e0
	if (cr6.eq) goto loc_8309A8E0;
	// clrlwi r11,r16,24
	ctx.r11.u64 = ctx.r16.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309a928
	if (!cr6.eq) goto loc_8309A928;
loc_8309A8E0:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309a8f8
	if (cr6.eq) goto loc_8309A8F8;
	// clrlwi r11,r16,24
	ctx.r11.u64 = ctx.r16.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309a928
	if (!cr6.eq) goto loc_8309A928;
loc_8309A8F8:
	// clrlwi r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309a910
	if (cr6.eq) goto loc_8309A910;
	// clrlwi r11,r16,24
	ctx.r11.u64 = ctx.r16.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309a928
	if (!cr6.eq) goto loc_8309A928;
loc_8309A910:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309a93c
	if (cr6.eq) goto loc_8309A93C;
	// clrlwi r11,r16,24
	ctx.r11.u64 = ctx.r16.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309a93c
	if (cr6.eq) goto loc_8309A93C;
loc_8309A928:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83099e68
	ctx.lr = 0x8309A938;
	sub_83099E68(ctx, base);
	// b 0x8309a94c
	goto loc_8309A94C;
loc_8309A93C:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83099f20
	ctx.lr = 0x8309A94C;
	sub_83099F20(ctx, base);
loc_8309A94C:
	// lwz r10,652(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 652);
	// addi r11,r25,632
	ctx.r11.s64 = ctx.r25.s64 + 632;
	// stw r30,648(r25)
	PPC_STORE_U32(ctx.r25.u32 + 648, ctx.r30.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8309a964
	if (cr6.lt) goto loc_8309A964;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8309A964:
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(ctx.r17.u32, 0, xer);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// beq cr6,0x8309a97c
	if (cr6.eq) goto loc_8309A97C;
	// clrlwi r11,r16,24
	ctx.r11.u64 = ctx.r16.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309a998
	if (!cr6.eq) goto loc_8309A998;
loc_8309A97C:
	// lbz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8309a9ac
	if (cr6.eq) goto loc_8309A9AC;
	// clrlwi r11,r16,24
	ctx.r11.u64 = ctx.r16.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309a9ac
	if (cr6.eq) goto loc_8309A9AC;
	// b 0x8309a99c
	goto loc_8309A99C;
loc_8309A998:
	// lbz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_8309A99C:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83099fc0
	ctx.lr = 0x8309A9AC;
	sub_83099FC0(ctx, base);
loc_8309A9AC:
	// lwz r10,680(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 680);
	// addi r11,r25,660
	ctx.r11.s64 = ctx.r25.s64 + 660;
	// stw r30,676(r25)
	PPC_STORE_U32(ctx.r25.u32 + 676, ctx.r30.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8309a9c8
	if (cr6.lt) goto loc_8309A9C8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8309a9cc
	goto loc_8309A9CC;
loc_8309A9C8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8309A9CC:
	// stb r30,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r30.u8);
	// addi r11,r25,688
	ctx.r11.s64 = ctx.r25.s64 + 688;
	// stw r30,704(r25)
	PPC_STORE_U32(ctx.r25.u32 + 704, ctx.r30.u32);
	// lwz r10,708(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 708);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8309a9ec
	if (cr6.lt) goto loc_8309A9EC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8309a9f0
	goto loc_8309A9F0;
loc_8309A9EC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8309A9F0:
	// stb r30,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r30.u8);
	// addi r11,r25,716
	ctx.r11.s64 = ctx.r25.s64 + 716;
	// lwz r10,736(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 736);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r30,732(r25)
	PPC_STORE_U32(ctx.r25.u32 + 732, ctx.r30.u32);
	// blt cr6,0x8309aa0c
	if (cr6.lt) goto loc_8309AA0C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8309AA0C:
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lwz r11,-3564(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// lwz r10,6132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// addi r11,r11,-16600
	ctx.r11.s64 = ctx.r11.s64 + -16600;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x8309aa34
	if (!cr6.lt) goto loc_8309AA34;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8309aa50
	if (cr6.eq) goto loc_8309AA50;
loc_8309AA34:
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// addi r11,r11,-8352
	ctx.r11.s64 = ctx.r11.s64 + -8352;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x8309aa5c
	if (!cr6.lt) goto loc_8309AA5C;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x8309aa5c
	if (!cr6.eq) goto loc_8309AA5C;
loc_8309AA50:
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8309a078
	ctx.lr = 0x8309AA5C;
	sub_8309A078(ctx, base);
loc_8309AA5C:
	// lwz r10,764(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 764);
	// addi r11,r25,744
	ctx.r11.s64 = ctx.r25.s64 + 744;
	// stw r30,760(r25)
	PPC_STORE_U32(ctx.r25.u32 + 760, ctx.r30.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8309aa74
	if (cr6.lt) goto loc_8309AA74;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8309AA74:
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(ctx.r17.u32, 0, xer);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// beq cr6,0x8309aa8c
	if (cr6.eq) goto loc_8309AA8C;
	// clrlwi r11,r16,24
	ctx.r11.u64 = ctx.r16.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309ab1c
	if (!cr6.eq) goto loc_8309AB1C;
loc_8309AA8C:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309aaa4
	if (cr6.eq) goto loc_8309AAA4;
	// clrlwi r11,r16,24
	ctx.r11.u64 = ctx.r16.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309ab1c
	if (!cr6.eq) goto loc_8309AB1C;
loc_8309AAA4:
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309aabc
	if (cr6.eq) goto loc_8309AABC;
	// clrlwi r11,r16,24
	ctx.r11.u64 = ctx.r16.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309ab1c
	if (!cr6.eq) goto loc_8309AB1C;
loc_8309AABC:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309aad4
	if (cr6.eq) goto loc_8309AAD4;
	// clrlwi r11,r16,24
	ctx.r11.u64 = ctx.r16.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309ab1c
	if (!cr6.eq) goto loc_8309AB1C;
loc_8309AAD4:
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309aaec
	if (cr6.eq) goto loc_8309AAEC;
	// clrlwi r11,r16,24
	ctx.r11.u64 = ctx.r16.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309ab1c
	if (!cr6.eq) goto loc_8309AB1C;
loc_8309AAEC:
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309ab04
	if (cr6.eq) goto loc_8309AB04;
	// clrlwi r11,r16,24
	ctx.r11.u64 = ctx.r16.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309ab1c
	if (!cr6.eq) goto loc_8309AB1C;
loc_8309AB04:
	// clrlwi r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309ab24
	if (cr6.eq) goto loc_8309AB24;
	// clrlwi r11,r16,24
	ctx.r11.u64 = ctx.r16.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309ab24
	if (cr6.eq) goto loc_8309AB24;
loc_8309AB1C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8309ab28
	goto loc_8309AB28;
loc_8309AB24:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8309AB28:
	// clrlwi r10,r19,24
	ctx.r10.u64 = ctx.r19.u32 & 0xFF;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8309ab48
	if (!cr6.eq) goto loc_8309AB48;
	// clrlwi r11,r18,24
	ctx.r11.u64 = ctx.r18.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// beq cr6,0x8309ab4c
	if (cr6.eq) goto loc_8309AB4C;
loc_8309AB48:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8309AB4C:
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8309a448
	ctx.lr = 0x8309AB64;
	sub_8309A448(ctx, base);
	// lwz r10,792(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 792);
	// addi r11,r25,772
	ctx.r11.s64 = ctx.r25.s64 + 772;
	// stw r30,788(r25)
	PPC_STORE_U32(ctx.r25.u32 + 788, ctx.r30.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8309ab7c
	if (cr6.lt) goto loc_8309AB7C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8309AB7C:
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// addi r10,r25,800
	ctx.r10.s64 = ctx.r25.s64 + 800;
	// stw r30,816(r25)
	PPC_STORE_U32(ctx.r25.u32 + 816, ctx.r30.u32);
	// lwz r11,820(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 820);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8309ab98
	if (cr6.lt) goto loc_8309AB98;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_8309AB98:
	// stb r30,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r30.u8);
	// addi r11,r25,828
	ctx.r11.s64 = ctx.r25.s64 + 828;
	// lwz r10,848(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 848);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r30,844(r25)
	PPC_STORE_U32(ctx.r25.u32 + 844, ctx.r30.u32);
	// blt cr6,0x8309abb4
	if (cr6.lt) goto loc_8309ABB4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8309ABB4:
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(ctx.r17.u32, 0, xer);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// beq cr6,0x8309abcc
	if (cr6.eq) goto loc_8309ABCC;
	// clrlwi r11,r16,24
	ctx.r11.u64 = ctx.r16.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309abe4
	if (!cr6.eq) goto loc_8309ABE4;
loc_8309ABCC:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309abec
	if (cr6.eq) goto loc_8309ABEC;
	// clrlwi r11,r16,24
	ctx.r11.u64 = ctx.r16.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309abec
	if (cr6.eq) goto loc_8309ABEC;
loc_8309ABE4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8309abf0
	goto loc_8309ABF0;
loc_8309ABEC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8309ABF0:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8309a550
	ctx.lr = 0x8309AC04;
	sub_8309A550(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8309ac24
	if (cr6.lt) goto loc_8309AC24;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x8309AC24;
	sub_825952B8(ctx, base);
loc_8309AC24:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r14,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r14.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// blt cr6,0x8309ac4c
	if (cr6.lt) goto loc_8309AC4C;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x8309AC4C;
	sub_825952B8(ctx, base);
loc_8309AC4C:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309AC54"))) PPC_WEAK_FUNC(sub_8309AC54);
PPC_FUNC_IMPL(__imp__sub_8309AC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309AC58"))) PPC_WEAK_FUNC(sub_8309AC58);
PPC_FUNC_IMPL(__imp__sub_8309AC58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8309AC60;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x8309add8
	if (!cr6.lt) goto loc_8309ADD8;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// beq cr6,0x8309add8
	if (cr6.eq) goto loc_8309ADD8;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r24,2
	ctx.r24.s64 = 2;
loc_8309ACA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x830e9cb0
	ctx.lr = 0x8309ACAC;
	sub_830E9CB0(ctx, base);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8309acd0
	if (!cr6.eq) goto loc_8309ACD0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x830e9db8
	ctx.lr = 0x8309ACC4;
	sub_830E9DB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// b 0x8309acf4
	goto loc_8309ACF4;
loc_8309ACD0:
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x8309ad64
	if (!cr6.eq) goto loc_8309AD64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x830e9e88
	ctx.lr = 0x8309ACE4;
	sub_830E9E88(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x830f5968
	ctx.lr = 0x8309ACF0;
	sub_830F5968(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8309ACF4:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8309ad64
	if (cr6.eq) goto loc_8309AD64;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
loc_8309AD0C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8309ad0c
	if (!cr6.eq) goto loc_8309AD0C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8309AD30;
	sub_8259CC28(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8291fdc8
	ctx.lr = 0x8309AD3C;
	sub_8291FDC8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8309ad58
	if (cr6.lt) goto loc_8309AD58;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x8309AD58;
	sub_825952B8(ctx, base);
loc_8309AD58:
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
loc_8309AD64:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8309aca0
	if (!cr0.eq) goto loc_8309ACA0;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// beq cr6,0x8309adb0
	if (cr6.eq) goto loc_8309ADB0;
	// addic r11,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// subfe r3,r11,r31
	temp.u8 = (~ctx.r11.u32 + ctx.r31.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r31.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// rlwinm r9,r3,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// subf r11,r3,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r3.s64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r8,r11,r25
	ctx.r8.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stb r10,912(r8)
	PPC_STORE_U8(ctx.r8.u32 + 912, ctx.r10.u8);
	// bl 0x830f43e8
	ctx.lr = 0x8309ADAC;
	sub_830F43E8(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_8309ADB0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8309add8
	if (cr6.eq) goto loc_8309ADD8;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x838adab0
	ctx.lr = 0x8309ADC8;
	sub_838ADAB0(ctx, base);
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x8309ADD8;
	sub_825952B8(ctx, base);
loc_8309ADD8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309ADE0"))) PPC_WEAK_FUNC(sub_8309ADE0);
PPC_FUNC_IMPL(__imp__sub_8309ADE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x8309aedc
	if (!cr6.lt) goto loc_8309AEDC;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r6,10
	ctx.r6.s64 = 10;
	// addi r7,r11,24588
	ctx.r7.s64 = ctx.r11.s64 + 24588;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8309ac58
	ctx.lr = 0x8309AE18;
	sub_8309AC58(ctx, base);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r7,r10,24584
	ctx.r7.s64 = ctx.r10.s64 + 24584;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8309ac58
	ctx.lr = 0x8309AE34;
	sub_8309AC58(ctx, base);
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r7,r9,24580
	ctx.r7.s64 = ctx.r9.s64 + 24580;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8309ac58
	ctx.lr = 0x8309AE50;
	sub_8309AC58(ctx, base);
	// lis r8,-32225
	ctx.r8.s64 = -2111897600;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r7,r8,24576
	ctx.r7.s64 = ctx.r8.s64 + 24576;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8309ac58
	ctx.lr = 0x8309AE6C;
	sub_8309AC58(ctx, base);
	// lis r7,-32225
	ctx.r7.s64 = -2111897600;
	// li r6,5
	ctx.r6.s64 = 5;
	// addi r7,r7,24556
	ctx.r7.s64 = ctx.r7.s64 + 24556;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8309ac58
	ctx.lr = 0x8309AE88;
	sub_8309AC58(ctx, base);
	// lis r5,-32225
	ctx.r5.s64 = -2111897600;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r7,r5,24552
	ctx.r7.s64 = ctx.r5.s64 + 24552;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8309ac58
	ctx.lr = 0x8309AEA4;
	sub_8309AC58(ctx, base);
	// lis r4,-32225
	ctx.r4.s64 = -2111897600;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r7,r4,24548
	ctx.r7.s64 = ctx.r4.s64 + 24548;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8309ac58
	ctx.lr = 0x8309AEC0;
	sub_8309AC58(ctx, base);
	// lis r3,-32225
	ctx.r3.s64 = -2111897600;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r7,r3,24544
	ctx.r7.s64 = ctx.r3.s64 + 24544;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8309ac58
	ctx.lr = 0x8309AEDC;
	sub_8309AC58(ctx, base);
loc_8309AEDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309AEF4"))) PPC_WEAK_FUNC(sub_8309AEF4);
PPC_FUNC_IMPL(__imp__sub_8309AEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309AEF8"))) PPC_WEAK_FUNC(sub_8309AEF8);
PPC_FUNC_IMPL(__imp__sub_8309AEF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8309AF00;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31763
	ctx.r27.s64 = -2081619968;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r11,-3564(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// lwz r29,6132(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830ea3d8
	ctx.lr = 0x8309AF20;
	sub_830EA3D8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lis r9,3
	ctx.r9.s64 = 196608;
	// oris r8,r11,65532
	ctx.r8.u64 = ctx.r11.u64 | 4294705152;
	// ori r11,r9,65535
	ctx.r11.u64 = ctx.r9.u64 | 65535;
	// oris r7,r10,65532
	ctx.r7.u64 = ctx.r10.u64 | 4294705152;
	// or r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 | ctx.r11.u64;
	// or r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 | ctx.r11.u64;
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r26,r11,48936
	ctx.r26.u64 = ctx.r11.u64 | 48936;
loc_8309AF5C:
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r10,-3564(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// rlwinm r9,r31,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// subfc r8,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r31.s64 - ctx.r11.s64;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r6,r29,r26
	ctx.r6.u64 = ctx.r29.u64 + ctx.r26.u64;
	// subfe r11,r9,r7
	temp.u8 = (~ctx.r9.u32 + ctx.r7.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r4,6132(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6132);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// and r23,r11,r6
	ctx.r23.u64 = ctx.r11.u64 & ctx.r6.u64;
	// bl 0x82a26a50
	ctx.lr = 0x8309AF8C;
	sub_82A26A50(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x830ea6a8
	ctx.lr = 0x8309AF9C;
	sub_830EA6A8(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// lwz r3,48(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 48);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,24(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// srawi r10,r3,2
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 2;
	// lwz r7,36(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// addic r3,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r3.s64 = ctx.r31.s64 + -1;
	// lwz r6,28(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// stwx r9,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// stwx r5,r30,r4
	PPC_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r5.u32);
	// subfe r3,r3,r31
	temp.u8 = (~ctx.r3.u32 + ctx.r31.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r31.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r3.u64 + ctx.r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x830f51a0
	ctx.lr = 0x8309AFDC;
	sub_830F51A0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8309ade0
	ctx.lr = 0x8309AFE8;
	sub_8309ADE0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83098f30
	ctx.lr = 0x8309AFF8;
	sub_83098F30(ctx, base);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,8248
	ctx.r29.s64 = ctx.r29.s64 + 8248;
	// cmpwi cr6,r30,8
	cr6.compare<int32_t>(ctx.r30.s32, 8, xer);
	// blt cr6,0x8309af5c
	if (cr6.lt) goto loc_8309AF5C;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309b068
	if (cr6.eq) goto loc_8309B068;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830f5480
	ctx.lr = 0x8309B02C;
	sub_830F5480(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x830f5480
	ctx.lr = 0x8309B040;
	sub_830F5480(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830f5480
	ctx.lr = 0x8309B054;
	sub_830F5480(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830f5480
	ctx.lr = 0x8309B068;
	sub_830F5480(ctx, base);
loc_8309B068:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// clrlwi r3,r10,16
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x830f3cf8
	ctx.lr = 0x8309B080;
	sub_830F3CF8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309B088"))) PPC_WEAK_FUNC(sub_8309B088);
PPC_FUNC_IMPL(__imp__sub_8309B088) {
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
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,15728(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15728);
	// bl 0x830a0e00
	ctx.lr = 0x8309B0B0;
	sub_830A0E00(ctx, base);
	// stw r3,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r3.u32);
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,15732(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15732);
	// bl 0x830a0e00
	ctx.lr = 0x8309B0C4;
	sub_830A0E00(ctx, base);
	// stw r3,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r3.u32);
	// lis r9,-31773
	ctx.r9.s64 = -2082275328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,15736(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15736);
	// bl 0x830a0e00
	ctx.lr = 0x8309B0D8;
	sub_830A0E00(ctx, base);
	// stw r3,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8309aef8
	ctx.lr = 0x8309B0E8;
	sub_8309AEF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8309a5f8
	ctx.lr = 0x8309B0F4;
	sub_8309A5F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83098dc0
	ctx.lr = 0x8309B100;
	sub_83098DC0(ctx, base);
	// bl 0x830a6bf8
	ctx.lr = 0x8309B104;
	sub_830A6BF8(ctx, base);
	// bl 0x83574af0
	ctx.lr = 0x8309B108;
	sub_83574AF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830ab708
	ctx.lr = 0x8309B110;
	sub_830AB708(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309B128"))) PPC_WEAK_FUNC(sub_8309B128);
PPC_FUNC_IMPL(__imp__sub_8309B128) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x830a2c10
	ctx.lr = 0x8309B148;
	sub_830A2C10(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,25028
	ctx.r9.s64 = ctx.r11.s64 + 25028;
	// clrlwi r8,r30,24
	ctx.r8.u64 = ctx.r30.u32 & 0xFF;
	// stw r10,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8309b17c
	if (cr6.eq) goto loc_8309B17C;
	// addi r11,r11,24932
	ctx.r11.s64 = ctx.r11.s64 + 24932;
	// addi r4,r11,-96
	ctx.r4.s64 = ctx.r11.s64 + -96;
	// addi r5,r11,-68
	ctx.r5.s64 = ctx.r11.s64 + -68;
	// b 0x8309b184
	goto loc_8309B184;
loc_8309B17C:
	// addi r5,r11,24932
	ctx.r5.s64 = ctx.r11.s64 + 24932;
	// addi r4,r5,-52
	ctx.r4.s64 = ctx.r5.s64 + -52;
loc_8309B184:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a0b50
	ctx.lr = 0x8309B18C;
	sub_830A0B50(ctx, base);
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

__attribute__((alias("__imp__sub_8309B1A8"))) PPC_WEAK_FUNC(sub_8309B1A8);
PPC_FUNC_IMPL(__imp__sub_8309B1A8) {
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
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,15916(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15916);
	// bl 0x830a0e00
	ctx.lr = 0x8309B1C8;
	sub_830A0E00(ctx, base);
	// stw r3,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8309B1E0"))) PPC_WEAK_FUNC(sub_8309B1E0);
PPC_FUNC_IMPL(__imp__sub_8309B1E0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x830a0068
	ctx.lr = 0x8309B200;
	sub_830A0068(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,564(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a3228
	ctx.lr = 0x8309B210;
	sub_830A3228(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309B228"))) PPC_WEAK_FUNC(sub_8309B228);
PPC_FUNC_IMPL(__imp__sub_8309B228) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,25028
	ctx.r10.s64 = ctx.r11.s64 + 25028;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x830a2ab0
	ctx.lr = 0x8309B254;
	sub_830A2AB0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8309b26c
	if (cr6.eq) goto loc_8309B26C;
	// bl 0x82416268
	ctx.lr = 0x8309B268;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8309B26C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309B284"))) PPC_WEAK_FUNC(sub_8309B284);
PPC_FUNC_IMPL(__imp__sub_8309B284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309B288"))) PPC_WEAK_FUNC(sub_8309B288);
PPC_FUNC_IMPL(__imp__sub_8309B288) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8309B290;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31763
	ctx.r28.s64 = -2081619968;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,-3564(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lwz r26,292(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
loc_8309B2BC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8309B2C0:
	// add. r31,r27,r30
	ctx.r31.u64 = ctx.r27.u64 + ctx.r30.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x8309b2d4
	if (cr0.lt) goto loc_8309B2D4;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8309b2d8
	if (cr6.lt) goto loc_8309B2D8;
loc_8309B2D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8309B2D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309b360
	if (cr6.eq) goto loc_8309B360;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x8309b2f8
	if (cr6.lt) goto loc_8309B2F8;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8309b2fc
	if (cr6.lt) goto loc_8309B2FC;
loc_8309B2F8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8309B2FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309b31c
	if (cr6.eq) goto loc_8309B31C;
	// add r11,r31,r26
	ctx.r11.u64 = ctx.r31.u64 + ctx.r26.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x8309b320
	goto loc_8309B320;
loc_8309B31C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8309B320:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309b360
	if (cr6.eq) goto loc_8309B360;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x8309B338;
	sub_82A0C760(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8309b360
	if (cr6.eq) goto loc_8309B360;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// beq cr6,0x8309b370
	if (cr6.eq) goto loc_8309B370;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// beq cr6,0x8309b370
	if (cr6.eq) goto loc_8309B370;
loc_8309B360:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// blt cr6,0x8309b2c0
	if (cr6.lt) goto loc_8309B2C0;
	// b 0x8309b398
	goto loc_8309B398;
loc_8309B370:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x8309B37C;
	sub_82A0C788(ctx, base);
	// addi r11,r3,1280
	ctx.r11.s64 = ctx.r3.s64 + 1280;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f13,4(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f12,8(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
loc_8309B398:
	// addi r27,r27,11
	ctx.r27.s64 = ctx.r27.s64 + 11;
	// cmpwi cr6,r27,22
	cr6.compare<int32_t>(ctx.r27.s32, 22, xer);
	// blt cr6,0x8309b2bc
	if (cr6.lt) goto loc_8309B2BC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309B3B0"))) PPC_WEAK_FUNC(sub_8309B3B0);
PPC_FUNC_IMPL(__imp__sub_8309B3B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8309B3B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31763
	ctx.r28.s64 = -2081619968;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,-3564(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lwz r26,292(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
loc_8309B3E4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8309B3E8:
	// add. r31,r27,r30
	ctx.r31.u64 = ctx.r27.u64 + ctx.r30.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x8309b3fc
	if (cr0.lt) goto loc_8309B3FC;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8309b400
	if (cr6.lt) goto loc_8309B400;
loc_8309B3FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8309B400:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309b470
	if (cr6.eq) goto loc_8309B470;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x8309b420
	if (cr6.lt) goto loc_8309B420;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8309b424
	if (cr6.lt) goto loc_8309B424;
loc_8309B420:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8309B424:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309b444
	if (cr6.eq) goto loc_8309B444;
	// add r11,r31,r26
	ctx.r11.u64 = ctx.r31.u64 + ctx.r26.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x8309b448
	goto loc_8309B448;
loc_8309B444:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8309B448:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309b470
	if (cr6.eq) goto loc_8309B470;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x8309B460;
	sub_82A0C760(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8309b480
	if (!cr6.eq) goto loc_8309B480;
loc_8309B470:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// blt cr6,0x8309b3e8
	if (cr6.lt) goto loc_8309B3E8;
	// b 0x8309b4a8
	goto loc_8309B4A8;
loc_8309B480:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x8309B48C;
	sub_82A0C788(ctx, base);
	// addi r11,r3,1280
	ctx.r11.s64 = ctx.r3.s64 + 1280;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f13,4(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f12,8(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
loc_8309B4A8:
	// addi r27,r27,11
	ctx.r27.s64 = ctx.r27.s64 + 11;
	// cmpwi cr6,r27,22
	cr6.compare<int32_t>(ctx.r27.s32, 22, xer);
	// blt cr6,0x8309b3e4
	if (cr6.lt) goto loc_8309B3E4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309B4C0"))) PPC_WEAK_FUNC(sub_8309B4C0);
PPC_FUNC_IMPL(__imp__sub_8309B4C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8309B4C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31763
	ctx.r28.s64 = -2081619968;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r25,18944
	ctx.r25.s64 = 1241513984;
	// lwz r10,-3564(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lwz r26,292(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
loc_8309B4F8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8309B4FC:
	// add. r31,r27,r30
	ctx.r31.u64 = ctx.r27.u64 + ctx.r30.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x8309b510
	if (cr0.lt) goto loc_8309B510;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8309b514
	if (cr6.lt) goto loc_8309B514;
loc_8309B510:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8309B514:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309b594
	if (cr6.eq) goto loc_8309B594;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x8309b534
	if (cr6.lt) goto loc_8309B534;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8309b538
	if (cr6.lt) goto loc_8309B538;
loc_8309B534:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8309B538:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309b558
	if (cr6.eq) goto loc_8309B558;
	// add r11,r31,r26
	ctx.r11.u64 = ctx.r31.u64 + ctx.r26.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x8309b55c
	goto loc_8309B55C;
loc_8309B558:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8309B55C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309b594
	if (cr6.eq) goto loc_8309B594;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x8309B574;
	sub_82A0C760(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8309b594
	if (cr6.eq) goto loc_8309B594;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r10,r25
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, xer);
	// beq cr6,0x8309b5a4
	if (cr6.eq) goto loc_8309B5A4;
loc_8309B594:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// blt cr6,0x8309b4fc
	if (cr6.lt) goto loc_8309B4FC;
	// b 0x8309b5cc
	goto loc_8309B5CC;
loc_8309B5A4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x8309B5B0;
	sub_82A0C788(ctx, base);
	// addi r11,r3,1280
	ctx.r11.s64 = ctx.r3.s64 + 1280;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f13,4(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f12,8(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
loc_8309B5CC:
	// addi r27,r27,11
	ctx.r27.s64 = ctx.r27.s64 + 11;
	// cmpwi cr6,r27,22
	cr6.compare<int32_t>(ctx.r27.s32, 22, xer);
	// blt cr6,0x8309b4f8
	if (cr6.lt) goto loc_8309B4F8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309B5E4"))) PPC_WEAK_FUNC(sub_8309B5E4);
PPC_FUNC_IMPL(__imp__sub_8309B5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309B5E8"))) PPC_WEAK_FUNC(sub_8309B5E8);
PPC_FUNC_IMPL(__imp__sub_8309B5E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8309B5F0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31763
	ctx.r28.s64 = -2081619968;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r25,18432
	ctx.r25.s64 = 1207959552;
	// lwz r10,-3564(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lwz r26,292(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
loc_8309B620:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8309B624:
	// add. r31,r27,r30
	ctx.r31.u64 = ctx.r27.u64 + ctx.r30.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x8309b638
	if (cr0.lt) goto loc_8309B638;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8309b63c
	if (cr6.lt) goto loc_8309B63C;
loc_8309B638:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8309B63C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309b6bc
	if (cr6.eq) goto loc_8309B6BC;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x8309b65c
	if (cr6.lt) goto loc_8309B65C;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8309b660
	if (cr6.lt) goto loc_8309B660;
loc_8309B65C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8309B660:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309b680
	if (cr6.eq) goto loc_8309B680;
	// add r11,r31,r26
	ctx.r11.u64 = ctx.r31.u64 + ctx.r26.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x8309b684
	goto loc_8309B684;
loc_8309B680:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8309B684:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309b6bc
	if (cr6.eq) goto loc_8309B6BC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x8309B69C;
	sub_82A0C760(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8309b6bc
	if (cr6.eq) goto loc_8309B6BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r10,r25
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, xer);
	// beq cr6,0x8309b6cc
	if (cr6.eq) goto loc_8309B6CC;
loc_8309B6BC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// blt cr6,0x8309b624
	if (cr6.lt) goto loc_8309B624;
	// b 0x8309b6f4
	goto loc_8309B6F4;
loc_8309B6CC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x8309B6D8;
	sub_82A0C788(ctx, base);
	// addi r11,r3,1280
	ctx.r11.s64 = ctx.r3.s64 + 1280;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f13,4(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f12,8(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
loc_8309B6F4:
	// addi r27,r27,11
	ctx.r27.s64 = ctx.r27.s64 + 11;
	// cmpwi cr6,r27,22
	cr6.compare<int32_t>(ctx.r27.s32, 22, xer);
	// blt cr6,0x8309b620
	if (cr6.lt) goto loc_8309B620;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309B70C"))) PPC_WEAK_FUNC(sub_8309B70C);
PPC_FUNC_IMPL(__imp__sub_8309B70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309B710"))) PPC_WEAK_FUNC(sub_8309B710);
PPC_FUNC_IMPL(__imp__sub_8309B710) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lwz r3,472(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// bl 0x82a47d40
	ctx.lr = 0x8309B74C;
	sub_82A47D40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8309b798
	if (!cr6.eq) goto loc_8309B798;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x82da1d10
	ctx.lr = 0x8309B764;
	sub_82DA1D10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309b798
	if (!cr6.eq) goto loc_8309B798;
	// li r4,22
	ctx.r4.s64 = 22;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x8309B77C;
	sub_82A0C788(ctx, base);
	// addi r11,r3,1280
	ctx.r11.s64 = ctx.r3.s64 + 1280;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_8309B798:
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

__attribute__((alias("__imp__sub_8309B7B4"))) PPC_WEAK_FUNC(sub_8309B7B4);
PPC_FUNC_IMPL(__imp__sub_8309B7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309B7B8"))) PPC_WEAK_FUNC(sub_8309B7B8);
PPC_FUNC_IMPL(__imp__sub_8309B7B8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blt cr6,0x8309b7f4
	if (cr6.lt) goto loc_8309B7F4;
	// cmpwi cr6,r6,22
	cr6.compare<int32_t>(ctx.r6.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8309b7f8
	if (cr6.lt) goto loc_8309B7F8;
loc_8309B7F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8309B7F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309b830
	if (cr6.eq) goto loc_8309B830;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x8309B814;
	sub_82A0C788(ctx, base);
	// addi r10,r3,1280
	ctx.r10.s64 = ctx.r3.s64 + 1280;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_8309B830:
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

__attribute__((alias("__imp__sub_8309B848"))) PPC_WEAK_FUNC(sub_8309B848);
PPC_FUNC_IMPL(__imp__sub_8309B848) {
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
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f29.u64);
	// stfd f30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// lfs f30,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// stfs f30,0(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f30,4(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f30,8(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blt cr6,0x8309b890
	if (cr6.lt) goto loc_8309B890;
	// cmpwi cr6,r6,22
	cr6.compare<int32_t>(ctx.r6.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8309b894
	if (cr6.lt) goto loc_8309B894;
loc_8309B890:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8309B894:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309b900
	if (cr6.eq) goto loc_8309B900;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x8309B8B0;
	sub_82A0C788(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f13,1272(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1272);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lfs f0,5068(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5068);
	ctx.f0.f64 = double(temp.f32);
	// fadds f29,f13,f0
	ctx.f29.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f31,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,-23844(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -23844);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fadds f1,f29,f0
	ctx.f1.f64 = double(float(ctx.f29.f64 + ctx.f0.f64));
	// bl 0x82a5aa98
	ctx.lr = 0x8309B8DC;
	sub_82A5AA98(ctx, base);
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stfs f30,4(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82a5aa98
	ctx.lr = 0x8309B8F0;
	sub_82A5AA98(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f0,20056(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20056);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_8309B900:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309B924"))) PPC_WEAK_FUNC(sub_8309B924);
PPC_FUNC_IMPL(__imp__sub_8309B924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309B928"))) PPC_WEAK_FUNC(sub_8309B928);
PPC_FUNC_IMPL(__imp__sub_8309B928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8309B930;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,92
	cr6.compare<uint32_t>(ctx.r11.u32, 92, xer);
	// bne cr6,0x8309bb18
	if (!cr6.eq) goto loc_8309BB18;
	// addi r11,r6,-24
	ctx.r11.s64 = ctx.r6.s64 + -24;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x8309bb18
	if (cr6.gt) goto loc_8309BB18;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8309b9a8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8309B9A8;
	// bdzf 4*cr6+eq,0x8309b9ec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8309B9EC;
	// bdzf 4*cr6+eq,0x8309ba18
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8309BA18;
	// bdzf 4*cr6+eq,0x8309ba44
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8309BA44;
	// bdzf 4*cr6+eq,0x8309ba70
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8309BA70;
	// bdzf 4*cr6+eq,0x8309ba9c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8309BA9C;
	// bne cr6,0x8309bac8
	if (!cr6.eq) goto loc_8309BAC8;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,8152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8152);
	// ld r4,8144(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8144);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x830f2680
	ctx.lr = 0x8309B9A0;
	sub_830F2680(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8309B9A8:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lfs f0,8144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f13,8152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8152);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r5,r9,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x830f2680
	ctx.lr = 0x8309B9E4;
	sub_830F2680(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8309B9EC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8309b288
	ctx.lr = 0x8309B9FC;
	sub_8309B288(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x830f2680
	ctx.lr = 0x8309BA10;
	sub_830F2680(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8309BA18:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8309b3b0
	ctx.lr = 0x8309BA28;
	sub_8309B3B0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x830f2680
	ctx.lr = 0x8309BA3C;
	sub_830F2680(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8309BA44:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8309b4c0
	ctx.lr = 0x8309BA54;
	sub_8309B4C0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x830f2680
	ctx.lr = 0x8309BA68;
	sub_830F2680(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8309BA70:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8309b5e8
	ctx.lr = 0x8309BA80;
	sub_8309B5E8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x830f2680
	ctx.lr = 0x8309BA94;
	sub_830F2680(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8309BA9C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8309b710
	ctx.lr = 0x8309BAAC;
	sub_8309B710(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x830f2680
	ctx.lr = 0x8309BAC0;
	sub_830F2680(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8309BAC8:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8309b7b8
	ctx.lr = 0x8309BADC;
	sub_8309B7B8(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8309b848
	ctx.lr = 0x8309BAF0;
	sub_8309B848(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x830f2680
	ctx.lr = 0x8309BB04;
	sub_830F2680(ctx, base);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x830f2720
	ctx.lr = 0x8309BB18;
	sub_830F2720(ctx, base);
loc_8309BB18:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309BB20"))) PPC_WEAK_FUNC(sub_8309BB20);
PPC_FUNC_IMPL(__imp__sub_8309BB20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8309BB28;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r5.u32);
	// stw r6,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r6.u32);
	// addi r6,r1,188
	ctx.r6.s64 = ctx.r1.s64 + 188;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x830a0eb0
	ctx.lr = 0x8309BB54;
	sub_830A0EB0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8309bb6c
	if (!cr6.eq) goto loc_8309BB6C;
loc_8309BB60:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8309BB6C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830a66c0
	ctx.lr = 0x8309BB78;
	sub_830A66C0(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r30,292
	ctx.r3.s64 = ctx.r30.s64 + 292;
	// bl 0x830fe280
	ctx.lr = 0x8309BB84;
	sub_830FE280(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309bb60
	if (cr6.eq) goto loc_8309BB60;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8309BBA4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x830f0b50
	ctx.lr = 0x8309BBAC;
	sub_830F0B50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,496(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 496);
	// bl 0x830a66d0
	ctx.lr = 0x8309BBB8;
	sub_830A66D0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312dce0
	ctx.lr = 0x8309BBC4;
	sub_8312DCE0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// bl 0x8309b928
	ctx.lr = 0x8309BBE0;
	sub_8309B928(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8309BBF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309BC00"))) PPC_WEAK_FUNC(sub_8309BC00);
PPC_FUNC_IMPL(__imp__sub_8309BC00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8309BC08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,608
	ctx.r30.s64 = ctx.r3.s64 + 608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x830ab3a0
	ctx.lr = 0x8309BC20;
	sub_830AB3A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309bc44
	if (cr6.eq) goto loc_8309BC44;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ab458
	ctx.lr = 0x8309BC38;
	sub_830AB458(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8309BC44:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309BC50"))) PPC_WEAK_FUNC(sub_8309BC50);
PPC_FUNC_IMPL(__imp__sub_8309BC50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8309BC58;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,920
	ctx.r31.s64 = ctx.r3.s64 + 920;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8310a8c0
	ctx.lr = 0x8309BC70;
	sub_8310A8C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309bcec
	if (!cr6.eq) goto loc_8309BCEC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8309fb28
	ctx.lr = 0x8309BC88;
	sub_8309FB28(ctx, base);
	// lbz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// bl 0x830f39a8
	ctx.lr = 0x8309BCB4;
	sub_830F39A8(ctx, base);
	// lbz r10,945(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 945);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8309bcec
	if (!cr6.eq) goto loc_8309BCEC;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309bcec
	if (cr6.eq) goto loc_8309BCEC;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x8309bce0
	if (cr6.eq) goto loc_8309BCE0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8309bcec
	if (!cr6.eq) goto loc_8309BCEC;
loc_8309BCE0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8309bc50
	ctx.lr = 0x8309BCEC;
	sub_8309BC50(ctx, base);
loc_8309BCEC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309BCF4"))) PPC_WEAK_FUNC(sub_8309BCF4);
PPC_FUNC_IMPL(__imp__sub_8309BCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309BCF8"))) PPC_WEAK_FUNC(sub_8309BCF8);
PPC_FUNC_IMPL(__imp__sub_8309BCF8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x830a6bf8
	ctx.lr = 0x8309BD18;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ece0
	ctx.lr = 0x8309BD1C;
	sub_8357ECE0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830ab708
	ctx.lr = 0x8309BD24;
	sub_830AB708(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,608
	ctx.r3.s64 = ctx.r31.s64 + 608;
	// bl 0x830ab050
	ctx.lr = 0x8309BD30;
	sub_830AB050(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
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

__attribute__((alias("__imp__sub_8309BD54"))) PPC_WEAK_FUNC(sub_8309BD54);
PPC_FUNC_IMPL(__imp__sub_8309BD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309BD58"))) PPC_WEAK_FUNC(sub_8309BD58);
PPC_FUNC_IMPL(__imp__sub_8309BD58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,944(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 944);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8309bd94
	if (!cr6.eq) goto loc_8309BD94;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x830a8370
	ctx.lr = 0x8309BD88;
	sub_830A8370(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8309bdcc
	if (!cr6.eq) goto loc_8309BDCC;
	// b 0x8309bdd0
	goto loc_8309BDD0;
loc_8309BD94:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x8309bdb4
	if (cr6.eq) goto loc_8309BDB4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x8309bdcc
	if (!cr6.eq) goto loc_8309BDCC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a8370
	ctx.lr = 0x8309BDAC;
	sub_830A8370(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8309bdc4
	if (cr6.eq) goto loc_8309BDC4;
loc_8309BDB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a8390
	ctx.lr = 0x8309BDBC;
	sub_830A8390(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8309bdcc
	if (!cr6.eq) goto loc_8309BDCC;
loc_8309BDC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8309bdd0
	goto loc_8309BDD0;
loc_8309BDCC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8309BDD0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309BDE8"))) PPC_WEAK_FUNC(sub_8309BDE8);
PPC_FUNC_IMPL(__imp__sub_8309BDE8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x830a6bf8
	ctx.lr = 0x8309BE08;
	sub_830A6BF8(ctx, base);
	// bl 0x83578d58
	ctx.lr = 0x8309BE0C;
	sub_83578D58(ctx, base);
	// bl 0x830a6ec8
	ctx.lr = 0x8309BE10;
	sub_830A6EC8(ctx, base);
	// addi r31,r31,816
	ctx.r31.s64 = ctx.r31.s64 + 816;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8309f6e8
	ctx.lr = 0x8309BE24;
	sub_8309F6E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e0
	ctx.lr = 0x8309BE2C;
	sub_825832E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830a6bf8
	ctx.lr = 0x8309BE34;
	sub_830A6BF8(ctx, base);
	// bl 0x83578d58
	ctx.lr = 0x8309BE38;
	sub_83578D58(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830a6f18
	ctx.lr = 0x8309BE40;
	sub_830A6F18(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309BE58"))) PPC_WEAK_FUNC(sub_8309BE58);
PPC_FUNC_IMPL(__imp__sub_8309BE58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8309BE60;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x830a66c0
	ctx.lr = 0x8309BE74;
	sub_830A66C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, xer);
	// bge cr6,0x8309beac
	if (!cr6.lt) goto loc_8309BEAC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x830a66c0
	ctx.lr = 0x8309BE88;
	sub_830A66C0(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r26,292
	ctx.r3.s64 = ctx.r26.s64 + 292;
	// bl 0x830fe280
	ctx.lr = 0x8309BE94;
	sub_830FE280(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309beac
	if (!cr6.eq) goto loc_8309BEAC;
loc_8309BEA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8309BEAC:
	// addi r29,r26,320
	ctx.r29.s64 = ctx.r26.s64 + 320;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830ab880
	ctx.lr = 0x8309BEB8;
	sub_830AB880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309bea0
	if (cr6.eq) goto loc_8309BEA0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x830a6648
	ctx.lr = 0x8309BECC;
	sub_830A6648(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8309BEDC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830ab850
	ctx.lr = 0x8309BEE8;
	sub_830AB850(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8309bf20
	if (!cr6.eq) goto loc_8309BF20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830ab8a8
	ctx.lr = 0x8309BEFC;
	sub_830AB8A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309bf20
	if (cr6.eq) goto loc_8309BF20;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830ab870
	ctx.lr = 0x8309BF14;
	sub_830AB870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8309bf20
	if (cr6.eq) goto loc_8309BF20;
	// mulli r30,r3,400
	ctx.r30.s64 = ctx.r3.s64 * 400;
loc_8309BF20:
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// bne cr6,0x8309bf2c
	if (!cr6.eq) goto loc_8309BF2C;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_8309BF2C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r24,r30,r24
	ctx.r24.u64 = ctx.r30.u64 + ctx.r24.u64;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// ble cr6,0x8309bedc
	if (!cr6.gt) goto loc_8309BEDC;
	// lbz r11,288(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 288);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309bf88
	if (cr6.eq) goto loc_8309BF88;
	// addi r31,r26,420
	ctx.r31.s64 = ctx.r26.s64 + 420;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312dce0
	ctx.lr = 0x8309BF54;
	sub_8312DCE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a83b0
	ctx.lr = 0x8309BF60;
	sub_830A83B0(ctx, base);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// ble cr6,0x8309bf74
	if (!cr6.gt) goto loc_8309BF74;
	// cmplwi cr6,r11,65534
	cr6.compare<uint32_t>(ctx.r11.u32, 65534, xer);
	// bne cr6,0x8309bea0
	if (!cr6.eq) goto loc_8309BEA0;
loc_8309BF74:
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x8309bf88
	if (!cr6.lt) goto loc_8309BF88;
	// cmplwi cr6,r11,65534
	cr6.compare<uint32_t>(ctx.r11.u32, 65534, xer);
	// bne cr6,0x8309bea0
	if (!cr6.eq) goto loc_8309BEA0;
loc_8309BF88:
	// lwz r11,812(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 812);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x8309bff4
	if (!cr6.eq) goto loc_8309BFF4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x830a6668
	ctx.lr = 0x8309BF9C;
	sub_830A6668(ctx, base);
	// lwz r10,492(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 492);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8309bfc0
	if (!cr6.eq) goto loc_8309BFC0;
	// lwz r11,820(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 820);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x8309bfe8
	goto loc_8309BFE8;
loc_8309BFC0:
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x8309bfe8
	if (!cr6.eq) goto loc_8309BFE8;
	// lwz r11,820(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 820);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// beq cr6,0x8309bfe0
	if (cr6.eq) goto loc_8309BFE0;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8309bfe4
	if (!cr6.eq) goto loc_8309BFE4;
loc_8309BFE0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8309BFE4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8309BFE8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309bea0
	if (!cr6.eq) goto loc_8309BEA0;
loc_8309BFF4:
	// bl 0x830a6bf8
	ctx.lr = 0x8309BFF8;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ece0
	ctx.lr = 0x8309BFFC;
	sub_8357ECE0(ctx, base);
	// bl 0x830ab740
	ctx.lr = 0x8309C000;
	sub_830AB740(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309c048
	if (cr6.eq) goto loc_8309C048;
	// bl 0x830a6bf8
	ctx.lr = 0x8309C010;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ece0
	ctx.lr = 0x8309C014;
	sub_8357ECE0(ctx, base);
	// bl 0x830a6ec8
	ctx.lr = 0x8309C018;
	sub_830A6EC8(ctx, base);
	// cmpw cr6,r24,r3
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r3.s32, xer);
	// ble cr6,0x8309c038
	if (!cr6.gt) goto loc_8309C038;
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830f3308
	ctx.lr = 0x8309C030;
	sub_830F3308(ctx, base);
	// addi r3,r26,920
	ctx.r3.s64 = ctx.r26.s64 + 920;
	// bl 0x8309fbd8
	ctx.lr = 0x8309C038;
	sub_8309FBD8(ctx, base);
loc_8309C038:
	// bl 0x830a6bf8
	ctx.lr = 0x8309C03C;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ece0
	ctx.lr = 0x8309C040;
	sub_8357ECE0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830ab708
	ctx.lr = 0x8309C048;
	sub_830AB708(ctx, base);
loc_8309C048:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309C054"))) PPC_WEAK_FUNC(sub_8309C054);
PPC_FUNC_IMPL(__imp__sub_8309C054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309C058"))) PPC_WEAK_FUNC(sub_8309C058);
PPC_FUNC_IMPL(__imp__sub_8309C058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r11,r11,-81
	ctx.r11.s64 = ctx.r11.s64 + -81;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x8309c0c0
	if (cr6.gt) goto loc_8309C0C0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8309c090
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8309C090;
	// bdzf 4*cr6+eq,0x8309c098
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8309C098;
	// bdzf 4*cr6+eq,0x8309c0a0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8309C0A0;
	// bdzf 4*cr6+eq,0x8309c0a8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8309C0A8;
	// bdzf 4*cr6+eq,0x8309c0b0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8309C0B0;
	// bne cr6,0x8309c0b8
	if (!cr6.eq) goto loc_8309C0B8;
	// lwz r3,572(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 572);
	// blr 
	return;
loc_8309C090:
	// lwz r3,576(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 576);
	// blr 
	return;
loc_8309C098:
	// lwz r3,580(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 580);
	// blr 
	return;
loc_8309C0A0:
	// lwz r3,584(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 584);
	// blr 
	return;
loc_8309C0A8:
	// lwz r3,588(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 588);
	// blr 
	return;
loc_8309C0B0:
	// lwz r3,592(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 592);
	// blr 
	return;
loc_8309C0B8:
	// lwz r3,596(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 596);
	// blr 
	return;
loc_8309C0C0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309C0C8"))) PPC_WEAK_FUNC(sub_8309C0C8);
PPC_FUNC_IMPL(__imp__sub_8309C0C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,600(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 600);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// bne cr6,0x8309c108
	if (!cr6.eq) goto loc_8309C108;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x8309c12c
	if (cr6.eq) goto loc_8309C12C;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// beq cr6,0x8309c12c
	if (cr6.eq) goto loc_8309C12C;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// beq cr6,0x8309c12c
	if (cr6.eq) goto loc_8309C12C;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// beq cr6,0x8309c12c
	if (cr6.eq) goto loc_8309C12C;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// beq cr6,0x8309c12c
	if (cr6.eq) goto loc_8309C12C;
	// cmplwi cr6,r11,27
	cr6.compare<uint32_t>(ctx.r11.u32, 27, xer);
	// b 0x8309c124
	goto loc_8309C124;
loc_8309C108:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x8309c12c
	if (cr6.eq) goto loc_8309C12C;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x8309c12c
	if (cr6.eq) goto loc_8309C12C;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// beq cr6,0x8309c12c
	if (cr6.eq) goto loc_8309C12C;
	// cmplwi cr6,r11,26
	cr6.compare<uint32_t>(ctx.r11.u32, 26, xer);
loc_8309C124:
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8309c130
	if (!cr6.eq) goto loc_8309C130;
loc_8309C12C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8309C130:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309C138"))) PPC_WEAK_FUNC(sub_8309C138);
PPC_FUNC_IMPL(__imp__sub_8309C138) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,600(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 600);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// bne cr6,0x8309c198
	if (!cr6.eq) goto loc_8309C198;
	// cmplwi cr6,r11,42
	cr6.compare<uint32_t>(ctx.r11.u32, 42, xer);
	// beq cr6,0x8309c1ac
	if (cr6.eq) goto loc_8309C1AC;
	// cmplwi cr6,r11,51
	cr6.compare<uint32_t>(ctx.r11.u32, 51, xer);
	// beq cr6,0x8309c1ac
	if (cr6.eq) goto loc_8309C1AC;
	// cmplwi cr6,r11,43
	cr6.compare<uint32_t>(ctx.r11.u32, 43, xer);
	// beq cr6,0x8309c1ac
	if (cr6.eq) goto loc_8309C1AC;
	// cmplwi cr6,r11,44
	cr6.compare<uint32_t>(ctx.r11.u32, 44, xer);
	// beq cr6,0x8309c1ac
	if (cr6.eq) goto loc_8309C1AC;
	// cmplwi cr6,r11,46
	cr6.compare<uint32_t>(ctx.r11.u32, 46, xer);
	// beq cr6,0x8309c1ac
	if (cr6.eq) goto loc_8309C1AC;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// beq cr6,0x8309c1ac
	if (cr6.eq) goto loc_8309C1AC;
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// beq cr6,0x8309c1ac
	if (cr6.eq) goto loc_8309C1AC;
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(ctx.r11.u32, 40, xer);
	// beq cr6,0x8309c1ac
	if (cr6.eq) goto loc_8309C1AC;
	// cmplwi cr6,r11,74
	cr6.compare<uint32_t>(ctx.r11.u32, 74, xer);
	// beq cr6,0x8309c1ac
	if (cr6.eq) goto loc_8309C1AC;
	// cmplwi cr6,r11,75
	cr6.compare<uint32_t>(ctx.r11.u32, 75, xer);
	// b 0x8309c1a4
	goto loc_8309C1A4;
loc_8309C198:
	// cmplwi cr6,r11,42
	cr6.compare<uint32_t>(ctx.r11.u32, 42, xer);
	// beq cr6,0x8309c1ac
	if (cr6.eq) goto loc_8309C1AC;
	// cmplwi cr6,r11,74
	cr6.compare<uint32_t>(ctx.r11.u32, 74, xer);
loc_8309C1A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8309c1b0
	if (!cr6.eq) goto loc_8309C1B0;
loc_8309C1AC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8309C1B0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309C1B8"))) PPC_WEAK_FUNC(sub_8309C1B8);
PPC_FUNC_IMPL(__imp__sub_8309C1B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,600(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 600);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// bne cr6,0x8309c1e0
	if (!cr6.eq) goto loc_8309C1E0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x8309c1fc
	if (cr6.eq) goto loc_8309C1FC;
	// cmplwi cr6,r11,14
	cr6.compare<uint32_t>(ctx.r11.u32, 14, xer);
	// beq cr6,0x8309c1fc
	if (cr6.eq) goto loc_8309C1FC;
	// cmplwi cr6,r11,25
	cr6.compare<uint32_t>(ctx.r11.u32, 25, xer);
	// b 0x8309c1f4
	goto loc_8309C1F4;
loc_8309C1E0:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x8309c1fc
	if (cr6.eq) goto loc_8309C1FC;
	// cmplwi cr6,r11,25
	cr6.compare<uint32_t>(ctx.r11.u32, 25, xer);
	// beq cr6,0x8309c1fc
	if (cr6.eq) goto loc_8309C1FC;
	// cmplwi cr6,r11,26
	cr6.compare<uint32_t>(ctx.r11.u32, 26, xer);
loc_8309C1F4:
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8309c200
	if (!cr6.eq) goto loc_8309C200;
loc_8309C1FC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8309C200:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309C208"))) PPC_WEAK_FUNC(sub_8309C208);
PPC_FUNC_IMPL(__imp__sub_8309C208) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309c25c
	if (!cr6.eq) goto loc_8309C25C;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309c228
	if (cr6.eq) goto loc_8309C228;
	// b 0x8309c0c8
	sub_8309C0C8(ctx, base);
	return;
loc_8309C228:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309c238
	if (cr6.eq) goto loc_8309C238;
	// b 0x8309c1b8
	sub_8309C1B8(ctx, base);
	return;
loc_8309C238:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// beq cr6,0x8309c250
	if (cr6.eq) goto loc_8309C250;
	// cmplwi cr6,r11,25
	cr6.compare<uint32_t>(ctx.r11.u32, 25, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8309c254
	if (!cr6.eq) goto loc_8309C254;
loc_8309C250:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8309C254:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_8309C25C:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8309c2e4
	if (!cr6.eq) goto loc_8309C2E4;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309c274
	if (cr6.eq) goto loc_8309C274;
	// b 0x8309c138
	sub_8309C138(ctx, base);
	return;
loc_8309C274:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309c2c0
	if (cr6.eq) goto loc_8309C2C0;
	// lwz r11,600(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 600);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// bne cr6,0x8309c2a0
	if (!cr6.eq) goto loc_8309C2A0;
	// cmplwi cr6,r11,42
	cr6.compare<uint32_t>(ctx.r11.u32, 42, xer);
	// beq cr6,0x8309c2b4
	if (cr6.eq) goto loc_8309C2B4;
	// cmplwi cr6,r11,44
	cr6.compare<uint32_t>(ctx.r11.u32, 44, xer);
	// b 0x8309c2ac
	goto loc_8309C2AC;
loc_8309C2A0:
	// cmplwi cr6,r11,42
	cr6.compare<uint32_t>(ctx.r11.u32, 42, xer);
	// beq cr6,0x8309c2b4
	if (cr6.eq) goto loc_8309C2B4;
	// cmplwi cr6,r11,74
	cr6.compare<uint32_t>(ctx.r11.u32, 74, xer);
loc_8309C2AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8309c2b8
	if (!cr6.eq) goto loc_8309C2B8;
loc_8309C2B4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8309C2B8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_8309C2C0:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(ctx.r11.u32, 40, xer);
	// beq cr6,0x8309c2d8
	if (cr6.eq) goto loc_8309C2D8;
	// cmplwi cr6,r11,41
	cr6.compare<uint32_t>(ctx.r11.u32, 41, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8309c2dc
	if (!cr6.eq) goto loc_8309C2DC;
loc_8309C2D8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8309C2DC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_8309C2E4:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309C2EC"))) PPC_WEAK_FUNC(sub_8309C2EC);
PPC_FUNC_IMPL(__imp__sub_8309C2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309C2F0"))) PPC_WEAK_FUNC(sub_8309C2F0);
PPC_FUNC_IMPL(__imp__sub_8309C2F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8309C2F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x8309c44c
	if (cr6.lt) goto loc_8309C44C;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// bge cr6,0x8309c44c
	if (!cr6.lt) goto loc_8309C44C;
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r10,946(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 946);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8309c44c
	if (!cr6.eq) goto loc_8309C44C;
	// cmpwi cr6,r6,1
	cr6.compare<int32_t>(ctx.r6.s32, 1, xer);
	// beq cr6,0x8309c338
	if (cr6.eq) goto loc_8309C338;
	// cmpwi cr6,r6,3
	cr6.compare<int32_t>(ctx.r6.s32, 3, xer);
	// bne cr6,0x8309c364
	if (!cr6.eq) goto loc_8309C364;
loc_8309C338:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r28,952
	ctx.r11.s64 = ctx.r28.s64 + 952;
loc_8309C340:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// beq cr6,0x8309c44c
	if (cr6.eq) goto loc_8309C44C;
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// beq cr6,0x8309c44c
	if (cr6.eq) goto loc_8309C44C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// blt cr6,0x8309c340
	if (cr6.lt) goto loc_8309C340;
loc_8309C364:
	// addi r31,r28,420
	ctx.r31.s64 = ctx.r28.s64 + 420;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r27,r11,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x83129970
	ctx.lr = 0x8309C378;
	sub_83129970(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// bl 0x830a83c0
	ctx.lr = 0x8309C388;
	sub_830A83C0(ctx, base);
	// lhz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,65534
	cr6.compare<uint32_t>(ctx.r31.u32, 65534, xer);
	// beq cr6,0x8309c3a8
	if (cr6.eq) goto loc_8309C3A8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r28,320
	ctx.r3.s64 = ctx.r28.s64 + 320;
	// bl 0x830ab860
	ctx.lr = 0x8309C3A0;
	sub_830AB860(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8309c3b0
	goto loc_8309C3B0;
loc_8309C3A8:
	// lis r30,32767
	ctx.r30.s64 = 2147418112;
	// ori r30,r30,65535
	ctx.r30.u64 = ctx.r30.u64 | 65535;
loc_8309C3B0:
	// clrlwi r26,r29,16
	ctx.r26.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r26,65534
	cr6.compare<uint32_t>(ctx.r26.u32, 65534, xer);
	// beq cr6,0x8309c3d0
	if (cr6.eq) goto loc_8309C3D0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r28,320
	ctx.r3.s64 = ctx.r28.s64 + 320;
	// bl 0x830ab860
	ctx.lr = 0x8309C3C8;
	sub_830AB860(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x8309c3d8
	goto loc_8309C3D8;
loc_8309C3D0:
	// lis r29,32767
	ctx.r29.s64 = 2147418112;
	// ori r29,r29,65535
	ctx.r29.u64 = ctx.r29.u64 | 65535;
loc_8309C3D8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r28,320
	ctx.r3.s64 = ctx.r28.s64 + 320;
	// bl 0x830ab850
	ctx.lr = 0x8309C3E4;
	sub_830AB850(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpw cr6,r30,r31
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r31.s32, xer);
	// bge cr6,0x8309c430
	if (!cr6.lt) goto loc_8309C430;
	// cmpw cr6,r29,r26
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, xer);
	// bge cr6,0x8309c418
	if (!cr6.lt) goto loc_8309C418;
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// subf r10,r29,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r29.s64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x8309c440
	if (cr6.gt) goto loc_8309C440;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// add r3,r10,r25
	ctx.r3.u64 = ctx.r10.u64 + ctx.r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8309C418:
	// cmpw cr6,r30,r31
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r31.s32, xer);
	// bge cr6,0x8309c430
	if (!cr6.lt) goto loc_8309C430;
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8309C430:
	// cmpw cr6,r29,r26
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, xer);
	// bge cr6,0x8309c440
	if (!cr6.lt) goto loc_8309C440;
	// subf r11,r29,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r29.s64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_8309C440:
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8309C44C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309C458"))) PPC_WEAK_FUNC(sub_8309C458);
PPC_FUNC_IMPL(__imp__sub_8309C458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8309C460;
	__savegprlr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x830a2c10
	ctx.lr = 0x8309C478;
	sub_830A2C10(ctx, base);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// stw r29,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r29.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stb r30,604(r31)
	PPC_STORE_U8(ctx.r31.u32 + 604, ctx.r30.u8);
	// addi r9,r10,25648
	ctx.r9.s64 = ctx.r10.s64 + 25648;
	// stw r11,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r11.u32);
	// addi r3,r31,608
	ctx.r3.s64 = ctx.r31.s64 + 608;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r11.u32);
	// stw r11,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r11.u32);
	// stw r11,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r11.u32);
	// stw r11,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r11.u32);
	// stw r11,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r11.u32);
	// stw r11,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r11.u32);
	// stw r11,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r11.u32);
	// stw r11,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r11.u32);
	// bl 0x830ab600
	ctx.lr = 0x8309C4BC;
	sub_830AB600(ctx, base);
	// stw r28,812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 812, ctx.r28.u32);
	// addi r3,r31,816
	ctx.r3.s64 = ctx.r31.s64 + 816;
	// bl 0x824eecc0
	ctx.lr = 0x8309C4C8;
	sub_824EECC0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,824
	ctx.r3.s64 = ctx.r31.s64 + 824;
	// stw r30,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r30.u32);
	// bl 0x8309f740
	ctx.lr = 0x8309C4D8;
	sub_8309F740(ctx, base);
	// addi r3,r31,920
	ctx.r3.s64 = ctx.r31.s64 + 920;
	// bl 0x8309fde8
	ctx.lr = 0x8309C4E0;
	sub_8309FDE8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r30,968(r31)
	PPC_STORE_U8(ctx.r31.u32 + 968, ctx.r30.u8);
	// stb r30,944(r31)
	PPC_STORE_U8(ctx.r31.u32 + 944, ctx.r30.u8);
	// stb r11,288(r31)
	PPC_STORE_U8(ctx.r31.u32 + 288, ctx.r11.u8);
	// stb r11,289(r31)
	PPC_STORE_U8(ctx.r31.u32 + 289, ctx.r11.u8);
	// bl 0x830ff290
	ctx.lr = 0x8309C4F8;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x8309C4FC;
	sub_830FF988(ctx, base);
	// li r8,4
	ctx.r8.s64 = 4;
	// stb r3,945(r31)
	PPC_STORE_U8(ctx.r31.u32 + 945, ctx.r3.u8);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r9,r31,946
	ctx.r9.s64 = ctx.r31.s64 + 946;
	// addi r10,r31,948
	ctx.r10.s64 = ctx.r31.s64 + 948;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_8309C518:
	// stbx r30,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r30.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8309c518
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8309C518;
	// lbz r11,604(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 604);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309c558
	if (cr6.eq) goto loc_8309C558;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r30,r11,25324
	ctx.r30.s64 = ctx.r11.s64 + 25324;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r6,r30,-100
	ctx.r6.s64 = ctx.r30.s64 + -100;
	// addi r5,r30,-96
	ctx.r5.s64 = ctx.r30.s64 + -96;
	// bl 0x831d0b08
	ctx.lr = 0x8309C550;
	sub_831D0B08(ctx, base);
	// addi r5,r30,-72
	ctx.r5.s64 = ctx.r30.s64 + -72;
	// b 0x8309c580
	goto loc_8309C580;
loc_8309C558:
	// lwz r3,600(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 600);
	// bl 0x830fe338
	ctx.lr = 0x8309C560;
	sub_830FE338(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r30,r11,25324
	ctx.r30.s64 = ctx.r11.s64 + 25324;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r5,r30,-56
	ctx.r5.s64 = ctx.r30.s64 + -56;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831d0b08
	ctx.lr = 0x8309C57C;
	sub_831D0B08(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_8309C580:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a0b50
	ctx.lr = 0x8309C58C;
	sub_830A0B50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309C598"))) PPC_WEAK_FUNC(sub_8309C598);
PPC_FUNC_IMPL(__imp__sub_8309C598) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r3,920
	ctx.r3.s64 = ctx.r3.s64 + 920;
	// addi r10,r11,25648
	ctx.r10.s64 = ctx.r11.s64 + 25648;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8309fae0
	ctx.lr = 0x8309C5C8;
	sub_8309FAE0(ctx, base);
	// addi r3,r31,824
	ctx.r3.s64 = ctx.r31.s64 + 824;
	// bl 0x83102db0
	ctx.lr = 0x8309C5D0;
	sub_83102DB0(ctx, base);
	// addi r3,r31,816
	ctx.r3.s64 = ctx.r31.s64 + 816;
	// bl 0x83102db0
	ctx.lr = 0x8309C5D8;
	sub_83102DB0(ctx, base);
	// addi r3,r31,608
	ctx.r3.s64 = ctx.r31.s64 + 608;
	// bl 0x830ab558
	ctx.lr = 0x8309C5E0;
	sub_830AB558(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a2ab0
	ctx.lr = 0x8309C5E8;
	sub_830A2AB0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8309c600
	if (cr6.eq) goto loc_8309C600;
	// bl 0x82416268
	ctx.lr = 0x8309C5FC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8309C600:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309C618"))) PPC_WEAK_FUNC(sub_8309C618);
PPC_FUNC_IMPL(__imp__sub_8309C618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8309C620;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// addi r8,r3,946
	ctx.r8.s64 = ctx.r3.s64 + 946;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r3,948
	ctx.r10.s64 = ctx.r3.s64 + 948;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_8309C650:
	// stbx r30,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r30.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8309c650
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8309C650;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a0068
	ctx.lr = 0x8309C66C;
	sub_830A0068(ctx, base);
	// addi r3,r31,920
	ctx.r3.s64 = ctx.r31.s64 + 920;
	// bl 0x8310a8c0
	ctx.lr = 0x8309C674;
	sub_8310A8C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82a504f0
	ctx.lr = 0x8309C688;
	sub_82A504F0(ctx, base);
	// lbz r9,968(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 968);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8309c6bc
	if (!cr6.eq) goto loc_8309C6BC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8309bde8
	ctx.lr = 0x8309C6A0;
	sub_8309BDE8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830aa868
	ctx.lr = 0x8309C6A8;
	sub_830AA868(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r11,968(r31)
	PPC_STORE_U8(ctx.r31.u32 + 968, ctx.r11.u8);
	// stw r10,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r10.u32);
loc_8309C6BC:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309c6d0
	if (cr6.eq) goto loc_8309C6D0;
	// lwz r4,568(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// b 0x8309c6e0
	goto loc_8309C6E0;
loc_8309C6D0:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309c6f0
	if (!cr6.eq) goto loc_8309C6F0;
	// lwz r4,564(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
loc_8309C6E0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a3228
	ctx.lr = 0x8309C6EC;
	sub_830A3228(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8309C6F0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8309bc50
	ctx.lr = 0x8309C6FC;
	sub_8309BC50(ctx, base);
	// addi r5,r31,516
	ctx.r5.s64 = ctx.r31.s64 + 516;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,608
	ctx.r3.s64 = ctx.r31.s64 + 608;
	// bl 0x830ab660
	ctx.lr = 0x8309C70C;
	sub_830AB660(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309C714"))) PPC_WEAK_FUNC(sub_8309C714);
PPC_FUNC_IMPL(__imp__sub_8309C714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309C718"))) PPC_WEAK_FUNC(sub_8309C718);
PPC_FUNC_IMPL(__imp__sub_8309C718) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8309C720;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x8309f8b8
	ctx.lr = 0x8309C734;
	sub_8309F8B8(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r29,4472(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4472);
	// bl 0x8309f7b8
	ctx.lr = 0x8309C750;
	sub_8309F7B8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8309c76c
	if (cr6.eq) goto loc_8309C76C;
	// ld r8,500(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 500);
	// lwz r7,492(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// b 0x8309c78c
	goto loc_8309C78C;
loc_8309C76C:
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// cmpwi cr6,r5,6
	cr6.compare<int32_t>(ctx.r5.s32, 6, xer);
	// ld r8,16344(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16344);
	// bne cr6,0x8309c788
	if (!cr6.eq) goto loc_8309C788;
	// lwz r7,492(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,6
	ctx.r5.s64 = 6;
	// b 0x8309c78c
	goto loc_8309C78C;
loc_8309C788:
	// li r7,2
	ctx.r7.s64 = 2;
loc_8309C78C:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,824
	ctx.r3.s64 = ctx.r31.s64 + 824;
	// bl 0x8309f7f8
	ctx.lr = 0x8309C79C;
	sub_8309F7F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309C7A4"))) PPC_WEAK_FUNC(sub_8309C7A4);
PPC_FUNC_IMPL(__imp__sub_8309C7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309C7A8"))) PPC_WEAK_FUNC(sub_8309C7A8);
PPC_FUNC_IMPL(__imp__sub_8309C7A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8309C7B0;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x8309f8b8
	ctx.lr = 0x8309C7CC;
	sub_8309F8B8(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309c7f4
	if (cr6.eq) goto loc_8309C7F4;
	// bl 0x8309f7b8
	ctx.lr = 0x8309C7F0;
	sub_8309F7B8(ctx, base);
	// b 0x8309c7f8
	goto loc_8309C7F8;
loc_8309C7F4:
	// bl 0x8309f7e0
	ctx.lr = 0x8309C7F8;
	sub_8309F7E0(ctx, base);
loc_8309C7F8:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309c8b4
	if (!cr6.eq) goto loc_8309C8B4;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8309c82c
	if (cr6.eq) goto loc_8309C82C;
	// bl 0x83740858
	ctx.lr = 0x8309C81C;
	sub_83740858(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r25,r11,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x8309c83c
	goto loc_8309C83C;
loc_8309C82C:
	// bl 0x83740858
	ctx.lr = 0x8309C830;
	sub_83740858(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r25,r11,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8309C83C:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// ld r10,500(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 500);
	// lwz r29,492(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r31,824
	ctx.r31.s64 = ctx.r31.s64 + 824;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lwz r9,292(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r27,4472(r9)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4472);
loc_8309C860:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8309f860
	ctx.lr = 0x8309C870;
	sub_8309F860(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// beq cr6,0x8309c884
	if (cr6.eq) goto loc_8309C884;
	// bl 0x8309f7b8
	ctx.lr = 0x8309C880;
	sub_8309F7B8(ctx, base);
	// b 0x8309c888
	goto loc_8309C888;
loc_8309C884:
	// bl 0x8309f7e0
	ctx.lr = 0x8309C888;
	sub_8309F7E0(ctx, base);
loc_8309C888:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309c8c0
	if (cr6.eq) goto loc_8309C8C0;
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(ctx.r26.s32, 1, xer);
	// beq cr6,0x8309c8b4
	if (cr6.eq) goto loc_8309C8B4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// blt cr6,0x8309c860
	if (cr6.lt) goto loc_8309C860;
loc_8309C8B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8309C8C0:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8309c928
	if (cr6.eq) goto loc_8309C928;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309c8f0
	if (!cr6.eq) goto loc_8309C8F0;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8309c938
	goto loc_8309C938;
loc_8309C8F0:
	// lhz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// lhz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x8309c910
	if (!cr6.eq) goto loc_8309C910;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8309c914
	if (cr6.eq) goto loc_8309C914;
loc_8309C910:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8309C914:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8309c938
	goto loc_8309C938;
loc_8309C928:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
loc_8309C938:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309c8b4
	if (!cr6.eq) goto loc_8309C8B4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// blt cr6,0x8309c8b4
	if (cr6.lt) goto loc_8309C8B4;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpw cr6,r11,r24
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, xer);
	// bne cr6,0x8309c8b4
	if (!cr6.eq) goto loc_8309C8B4;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r10,-1
	ctx.r10.s64 = -1;
	// subf r9,r11,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r11.s64;
	// subfc r11,r25,r9
	xer.ca = ctx.r9.u32 >= ctx.r25.u32;
	ctx.r11.s64 = ctx.r9.s64 - ctx.r25.s64;
	// subfze r3,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309C97C"))) PPC_WEAK_FUNC(sub_8309C97C);
PPC_FUNC_IMPL(__imp__sub_8309C97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309C980"))) PPC_WEAK_FUNC(sub_8309C980);
PPC_FUNC_IMPL(__imp__sub_8309C980) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,604(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 604);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// beq cr6,0x8309c9ec
	if (cr6.eq) goto loc_8309C9EC;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r11,r11,25448
	ctx.r11.s64 = ctx.r11.s64 + 25448;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r6,r11,-48
	ctx.r6.s64 = ctx.r11.s64 + -48;
	// addi r5,r11,-44
	ctx.r5.s64 = ctx.r11.s64 + -44;
	// bl 0x831d0b08
	ctx.lr = 0x8309C9D0;
	sub_831D0B08(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8309C9D8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8309c9d8
	if (!cr6.eq) goto loc_8309C9D8;
	// b 0x8309ca24
	goto loc_8309CA24;
loc_8309C9EC:
	// lwz r3,600(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 600);
	// bl 0x830fe338
	ctx.lr = 0x8309C9F4;
	sub_830FE338(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,25448
	ctx.r5.s64 = ctx.r11.s64 + 25448;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x831d0b08
	ctx.lr = 0x8309CA0C;
	sub_831D0B08(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8309CA14:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8309ca14
	if (!cr6.eq) goto loc_8309CA14;
loc_8309CA24:
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
	ctx.lr = 0x8309CA3C;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,608
	ctx.r3.s64 = ctx.r31.s64 + 608;
	// bl 0x830ab318
	ctx.lr = 0x8309CA48;
	sub_830AB318(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8309ca68
	if (cr6.lt) goto loc_8309CA68;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8309CA68;
	sub_825952B8(ctx, base);
loc_8309CA68:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309CA7C"))) PPC_WEAK_FUNC(sub_8309CA7C);
PPC_FUNC_IMPL(__imp__sub_8309CA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309CA80"))) PPC_WEAK_FUNC(sub_8309CA80);
PPC_FUNC_IMPL(__imp__sub_8309CA80) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
loc_8309CAA8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8309caa8
	if (!cr6.eq) goto loc_8309CAA8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8309CACC;
	sub_8259CC28(ctx, base);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r4,r10,25556
	ctx.r4.s64 = ctx.r10.s64 + 25556;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82574d38
	ctx.lr = 0x8309CAE4;
	sub_82574D38(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cntlzw r8,r3
	ctx.r8.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// rlwinm r31,r8,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blt cr6,0x8309cb0c
	if (cr6.lt) goto loc_8309CB0C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8309CB0C;
	sub_825952B8(ctx, base);
loc_8309CB0C:
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

__attribute__((alias("__imp__sub_8309CB24"))) PPC_WEAK_FUNC(sub_8309CB24);
PPC_FUNC_IMPL(__imp__sub_8309CB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309CB28"))) PPC_WEAK_FUNC(sub_8309CB28);
PPC_FUNC_IMPL(__imp__sub_8309CB28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8309CB30;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// bl 0x8309c2f0
	ctx.lr = 0x8309CB60;
	sub_8309C2F0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8309ca80
	ctx.lr = 0x8309CB70;
	sub_8309CA80(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,920
	ctx.r3.s64 = ctx.r31.s64 + 920;
	// bl 0x8309fee0
	ctx.lr = 0x8309CB94;
	sub_8309FEE0(ctx, base);
	// lbz r10,247(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 247);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8309cbf0
	if (!cr6.eq) goto loc_8309CBF0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x8309cbdc
	if (cr6.lt) goto loc_8309CBDC;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(ctx.r30.s32, 4, xer);
	// bge cr6,0x8309cbdc
	if (!cr6.lt) goto loc_8309CBDC;
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r10,r11,946
	ctx.r10.s64 = ctx.r11.s64 + 946;
	// lbz r10,946(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 946);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stb r9,946(r11)
	PPC_STORE_U8(ctx.r11.u32 + 946, ctx.r9.u8);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x8309cbdc
	if (!cr6.eq) goto loc_8309CBDC;
	// addi r11,r30,238
	ctx.r11.s64 = ctx.r30.s64 + 238;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r29.u32);
loc_8309CBDC:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8309c718
	ctx.lr = 0x8309CBF0;
	sub_8309C718(ctx, base);
loc_8309CBF0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309CBFC"))) PPC_WEAK_FUNC(sub_8309CBFC);
PPC_FUNC_IMPL(__imp__sub_8309CBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309CC00"))) PPC_WEAK_FUNC(sub_8309CC00);
PPC_FUNC_IMPL(__imp__sub_8309CC00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x8309CC08;
	__savegprlr_17(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r6,287(r1)
	PPC_STORE_U8(ctx.r1.u32 + 287, ctx.r6.u8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r18,r9
	ctx.r18.u64 = ctx.r9.u64;
	// mr r17,r10
	ctx.r17.u64 = ctx.r10.u64;
	// bl 0x830a7028
	ctx.lr = 0x8309CC30;
	sub_830A7028(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830a7120
	ctx.lr = 0x8309CC3C;
	sub_830A7120(ctx, base);
	// lbz r21,343(r1)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r1.u32 + 343);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x8309cc54
	if (cr6.eq) goto loc_8309CC54;
	// bl 0x830a66f0
	ctx.lr = 0x8309CC50;
	sub_830A66F0(ctx, base);
	// b 0x8309cc58
	goto loc_8309CC58;
loc_8309CC54:
	// bl 0x8312dce0
	ctx.lr = 0x8309CC58;
	sub_8312DCE0(ctx, base);
loc_8309CC58:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// bne cr6,0x8309cc8c
	if (!cr6.eq) goto loc_8309CC8C;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// ld r5,500(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 500);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r31,492
	ctx.r4.s64 = ctx.r31.s64 + 492;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830a8950
	ctx.lr = 0x8309CC88;
	sub_830A8950(ctx, base);
	// b 0x8309cd14
	goto loc_8309CD14;
loc_8309CC8C:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8309cd18
	if (!cr6.eq) goto loc_8309CD18;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8309cca8
	if (cr6.eq) goto loc_8309CCA8;
	// bl 0x830a66f8
	ctx.lr = 0x8309CCA4;
	sub_830A66F8(ctx, base);
	// b 0x8309ccac
	goto loc_8309CCAC;
loc_8309CCA8:
	// bl 0x830a66d0
	ctx.lr = 0x8309CCAC;
	sub_830A66D0(ctx, base);
loc_8309CCAC:
	// lwz r29,492(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// blt cr6,0x8309ccc0
	if (cr6.lt) goto loc_8309CCC0;
	// li r29,2
	ctx.r29.s64 = 2;
	// b 0x8309ccd0
	goto loc_8309CCD0;
loc_8309CCC0:
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8309ccd0
	if (!cr6.eq) goto loc_8309CCD0;
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// rlwinm r29,r11,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8309CCD0:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830a8910
	ctx.lr = 0x8309CCE4;
	sub_830A8910(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8309cd18
	if (!cr6.eq) goto loc_8309CD18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830a6688
	ctx.lr = 0x8309CCF8;
	sub_830A6688(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x8309cd18
	if (!cr6.eq) goto loc_8309CD18;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830a8530
	ctx.lr = 0x8309CD14;
	sub_830A8530(ctx, base);
loc_8309CD14:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_8309CD18:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8309CD2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r20,r11,25540
	ctx.r20.s64 = ctx.r11.s64 + 25540;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// addi r10,r20,-446
	ctx.r10.s64 = ctx.r20.s64 + -446;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8309CD44:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8309cd68
	if (cr6.eq) goto loc_8309CD68;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8309cd44
	if (cr6.eq) goto loc_8309CD44;
loc_8309CD68:
	// li r19,1
	ctx.r19.s64 = 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8309cd78
	if (cr6.eq) goto loc_8309CD78;
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
loc_8309CD78:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x8309cdf0
	if (!cr6.eq) goto loc_8309CDF0;
	// bl 0x830a6688
	ctx.lr = 0x8309CD88;
	sub_830A6688(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8309cddc
	if (!cr6.eq) goto loc_8309CDDC;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309cddc
	if (cr6.eq) goto loc_8309CDDC;
	// lwz r11,332(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// lwz r9,324(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// stb r23,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r23.u8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8309cb28
	ctx.lr = 0x8309CDC8;
	sub_8309CB28(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83102db0
	ctx.lr = 0x8309CDD0;
	sub_83102DB0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_8309CDDC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83102db0
	ctx.lr = 0x8309CDE4;
	sub_83102DB0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_8309CDF0:
	// bl 0x830a6688
	ctx.lr = 0x8309CDF4;
	sub_830A6688(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8309c7a8
	ctx.lr = 0x8309CE10;
	sub_8309C7A8(ctx, base);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309cea8
	if (!cr6.eq) goto loc_8309CEA8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,287
	ctx.r5.s64 = ctx.r1.s64 + 287;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8309c208
	ctx.lr = 0x8309CE38;
	sub_8309C208(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,332(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8309ce60
	if (cr6.eq) goto loc_8309CE60;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r10,r8,1
	ctx.r10.u64 = ctx.r8.u64 ^ 1;
	// addi r7,r10,2
	ctx.r7.s64 = ctx.r10.s64 + 2;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
loc_8309CE60:
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8309d0a4
	if (cr6.eq) goto loc_8309D0A4;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,324(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// stb r23,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r23.u8);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8309cb28
	ctx.lr = 0x8309CE94;
	sub_8309CB28(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83102db0
	ctx.lr = 0x8309CE9C;
	sub_83102DB0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_8309CEA8:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x8309cfb4
	if (!cr6.eq) goto loc_8309CFB4;
	// bl 0x830a66e0
	ctx.lr = 0x8309CEB8;
	sub_830A66E0(ctx, base);
	// mulli r8,r3,100
	ctx.r8.s64 = ctx.r3.s64 * 100;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,287
	ctx.r5.s64 = ctx.r1.s64 + 287;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8309c208
	ctx.lr = 0x8309CED4;
	sub_8309C208(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r29,332(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309cefc
	if (cr6.eq) goto loc_8309CEFC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// stw r7,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r7.u32);
loc_8309CEFC:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309cf2c
	if (cr6.eq) goto loc_8309CF2C;
	// stb r23,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r23.u8);
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r9,324(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8309cb28
	ctx.lr = 0x8309CF2C;
	sub_8309CB28(ctx, base);
loc_8309CF2C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8309CF44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r23,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r23.u8);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// bl 0x8309cb28
	ctx.lr = 0x8309CF6C;
	sub_8309CB28(ctx, base);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// bne cr6,0x8309d0a4
	if (!cr6.eq) goto loc_8309D0A4;
	// addi r5,r20,-8
	ctx.r5.s64 = ctx.r20.s64 + -8;
	// stb r19,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r19.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8309cb28
	ctx.lr = 0x8309CFA0;
	sub_8309CB28(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83102db0
	ctx.lr = 0x8309CFA8;
	sub_83102DB0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_8309CFB4:
	// bl 0x830a6708
	ctx.lr = 0x8309CFB8;
	sub_830A6708(ctx, base);
	// mulli r28,r3,100
	ctx.r28.s64 = ctx.r3.s64 * 100;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,287
	ctx.r5.s64 = ctx.r1.s64 + 287;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8309c208
	ctx.lr = 0x8309CFD4;
	sub_8309C208(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r29,332(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309cffc
	if (cr6.eq) goto loc_8309CFFC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
loc_8309CFFC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8309D014;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r9,324(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stb r23,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r23.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// bl 0x8309cb28
	ctx.lr = 0x8309D03C;
	sub_8309CB28(ctx, base);
	// clrlwi r9,r27,24
	ctx.r9.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8309d070
	if (cr6.eq) goto loc_8309D070;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// stb r23,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r23.u8);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8309cb28
	ctx.lr = 0x8309D070;
	sub_8309CB28(ctx, base);
loc_8309D070:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8309d0a4
	if (!cr6.eq) goto loc_8309D0A4;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// stb r19,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r19.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8309cb28
	ctx.lr = 0x8309D0A4;
	sub_8309CB28(ctx, base);
loc_8309D0A4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83102db0
	ctx.lr = 0x8309D0AC;
	sub_83102DB0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309D0B8"))) PPC_WEAK_FUNC(sub_8309D0B8);
PPC_FUNC_IMPL(__imp__sub_8309D0B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x8309D0C0;
	__savegprlr_21(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r21,351(r1)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r1.u32 + 351);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// beq cr6,0x8309d0f8
	if (cr6.eq) goto loc_8309D0F8;
	// bl 0x830a66f0
	ctx.lr = 0x8309D0F4;
	sub_830A66F0(ctx, base);
	// b 0x8309d0fc
	goto loc_8309D0FC;
loc_8309D0F8:
	// bl 0x8312dce0
	ctx.lr = 0x8309D0FC;
	sub_8312DCE0(ctx, base);
loc_8309D0FC:
	// lwz r11,600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 600);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8309d118
	if (cr6.eq) goto loc_8309D118;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x8309d130
	goto loc_8309D130;
loc_8309D118:
	// bl 0x830a6bf8
	ctx.lr = 0x8309D11C;
	sub_830A6BF8(ctx, base);
	// bl 0x83578d58
	ctx.lr = 0x8309D120;
	sub_83578D58(ctx, base);
	// bl 0x830a6ec8
	ctx.lr = 0x8309D124;
	sub_830A6EC8(ctx, base);
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_8309D130:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309d148
	if (!cr6.eq) goto loc_8309D148;
loc_8309D13C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_8309D148:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8309c058
	ctx.lr = 0x8309D154;
	sub_8309C058(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8309D170;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,25095
	ctx.r10.s64 = ctx.r10.s64 + 25095;
loc_8309D180:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8309d1a4
	if (cr6.eq) goto loc_8309D1A4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8309d180
	if (cr6.eq) goto loc_8309D180;
loc_8309D1A4:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8309d1b0
	if (cr6.eq) goto loc_8309D1B0;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8309D1B0:
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x8309d13c
	if (cr6.eq) goto loc_8309D13C;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309d1e0
	if (!cr6.eq) goto loc_8309D1E0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a3228
	ctx.lr = 0x8309D1D4;
	sub_830A3228(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_8309D1E0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830a81e0
	ctx.lr = 0x8309D1E8;
	sub_830A81E0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ori r30,r11,65534
	ctx.r30.u64 = ctx.r11.u64 | 65534;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830a83a0
	ctx.lr = 0x8309D1FC;
	sub_830A83A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830a83a8
	ctx.lr = 0x8309D208;
	sub_830A83A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830a83b8
	ctx.lr = 0x8309D214;
	sub_830A83B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8246be10
	ctx.lr = 0x8309D220;
	sub_8246BE10(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830a83d0
	ctx.lr = 0x8309D22C;
	sub_830A83D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830a83e8
	ctx.lr = 0x8309D238;
	sub_830A83E8(ctx, base);
	// clrlwi r4,r22,16
	ctx.r4.u64 = ctx.r22.u32 & 0xFFFF;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830a83f8
	ctx.lr = 0x8309D244;
	sub_830A83F8(ctx, base);
	// addi r3,r31,420
	ctx.r3.s64 = ctx.r31.s64 + 420;
	// bl 0x830a8438
	ctx.lr = 0x8309D24C;
	sub_830A8438(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830a8428
	ctx.lr = 0x8309D258;
	sub_830A8428(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830a66e0
	ctx.lr = 0x8309D260;
	sub_830A66E0(ctx, base);
	// lwz r29,340(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// mulli r30,r3,100
	ctx.r30.s64 = ctx.r3.s64 * 100;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// bne cr6,0x8309d2cc
	if (!cr6.eq) goto loc_8309D2CC;
	// clrlwi r4,r24,16
	ctx.r4.u64 = ctx.r24.u32 & 0xFFFF;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830a83c8
	ctx.lr = 0x8309D27C;
	sub_830A83C8(ctx, base);
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830a83e0
	ctx.lr = 0x8309D288;
	sub_830A83E0(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a3188
	ctx.lr = 0x8309D29C;
	sub_830A3188(ctx, base);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r26,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r26.u8);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8309cb28
	ctx.lr = 0x8309D2C4;
	sub_8309CB28(ctx, base);
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x8309d320
	if (cr6.eq) goto loc_8309D320;
loc_8309D2CC:
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830a83c8
	ctx.lr = 0x8309D2D8;
	sub_830A83C8(ctx, base);
	// clrlwi r4,r23,16
	ctx.r4.u64 = ctx.r23.u32 & 0xFFFF;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830a83e0
	ctx.lr = 0x8309D2E4;
	sub_830A83E0(ctx, base);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// stb r26,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r26.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8309cb28
	ctx.lr = 0x8309D30C;
	sub_8309CB28(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a3188
	ctx.lr = 0x8309D320;
	sub_830A3188(ctx, base);
loc_8309D320:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830a8268
	ctx.lr = 0x8309D328;
	sub_830A8268(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309D334"))) PPC_WEAK_FUNC(sub_8309D334);
PPC_FUNC_IMPL(__imp__sub_8309D334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309D338"))) PPC_WEAK_FUNC(sub_8309D338);
PPC_FUNC_IMPL(__imp__sub_8309D338) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8309D340;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,16276(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16276);
	// bl 0x830a0e00
	ctx.lr = 0x8309D354;
	sub_830A0E00(ctx, base);
	// stw r3,564(r30)
	PPC_STORE_U32(ctx.r30.u32 + 564, ctx.r3.u32);
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,16280(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16280);
	// bl 0x830a0e00
	ctx.lr = 0x8309D368;
	sub_830A0E00(ctx, base);
	// lwz r9,600(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 600);
	// stw r3,568(r30)
	PPC_STORE_U32(ctx.r30.u32 + 568, ctx.r3.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x8309d404
	if (!cr6.eq) goto loc_8309D404;
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,16284(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16284);
	// bl 0x830a0e00
	ctx.lr = 0x8309D388;
	sub_830A0E00(ctx, base);
	// stw r3,572(r30)
	PPC_STORE_U32(ctx.r30.u32 + 572, ctx.r3.u32);
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,16288(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16288);
	// bl 0x830a0e00
	ctx.lr = 0x8309D39C;
	sub_830A0E00(ctx, base);
	// stw r3,576(r30)
	PPC_STORE_U32(ctx.r30.u32 + 576, ctx.r3.u32);
	// lis r9,-31773
	ctx.r9.s64 = -2082275328;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,16292(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16292);
	// bl 0x830a0e00
	ctx.lr = 0x8309D3B0;
	sub_830A0E00(ctx, base);
	// stw r3,580(r30)
	PPC_STORE_U32(ctx.r30.u32 + 580, ctx.r3.u32);
	// lis r8,-31773
	ctx.r8.s64 = -2082275328;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,16296(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16296);
	// bl 0x830a0e00
	ctx.lr = 0x8309D3C4;
	sub_830A0E00(ctx, base);
	// stw r3,584(r30)
	PPC_STORE_U32(ctx.r30.u32 + 584, ctx.r3.u32);
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,16300(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16300);
	// bl 0x830a0e00
	ctx.lr = 0x8309D3D8;
	sub_830A0E00(ctx, base);
	// stw r3,588(r30)
	PPC_STORE_U32(ctx.r30.u32 + 588, ctx.r3.u32);
	// lis r6,-31773
	ctx.r6.s64 = -2082275328;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,16304(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16304);
	// bl 0x830a0e00
	ctx.lr = 0x8309D3EC;
	sub_830A0E00(ctx, base);
	// stw r3,592(r30)
	PPC_STORE_U32(ctx.r30.u32 + 592, ctx.r3.u32);
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,16308(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16308);
	// bl 0x830a0e00
	ctx.lr = 0x8309D400;
	sub_830A0E00(ctx, base);
	// stw r3,596(r30)
	PPC_STORE_U32(ctx.r30.u32 + 596, ctx.r3.u32);
loc_8309D404:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r11,r11,25392
	ctx.r11.s64 = ctx.r11.s64 + 25392;
	// addi r31,r30,548
	ctx.r31.s64 = ctx.r30.s64 + 548;
	// addi r9,r11,-48
	ctx.r9.s64 = ctx.r11.s64 + -48;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r8,r11,-40
	ctx.r8.s64 = ctx.r11.s64 + -40;
	// addi r10,r11,-56
	ctx.r10.s64 = ctx.r11.s64 + -56;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// addi r7,r11,-32
	ctx.r7.s64 = ctx.r11.s64 + -32;
	// addi r6,r11,-24
	ctx.r6.s64 = ctx.r11.s64 + -24;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r5,r11,-12
	ctx.r5.s64 = ctx.r11.s64 + -12;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// lis r9,16383
	ctx.r9.s64 = 1073676288;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// lis r8,16383
	ctx.r8.s64 = 1073676288;
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// ori r28,r9,65534
	ctx.r28.u64 = ctx.r9.u64 | 65534;
	// ori r27,r8,65535
	ctx.r27.u64 = ctx.r8.u64 | 65535;
loc_8309D460:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x830a0e00
	ctx.lr = 0x8309D46C;
	sub_830A0E00(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x8309d498
	if (!cr6.lt) goto loc_8309D498;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x8309d49c
	if (!cr6.gt) goto loc_8309D49C;
loc_8309D498:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8309D49C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8309d534
	if (cr6.eq) goto loc_8309D534;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// srawi r29,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r7.s32 >> 2;
	// bne cr6,0x8309d514
	if (!cr6.eq) goto loc_8309D514;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bgt cr6,0x8309d5d0
	if (cr6.gt) goto loc_8309D5D0;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// srawi r11,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x8309d514
	if (!cr6.gt) goto loc_8309D514;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r10,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r10.s64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x8309d500
	if (cr6.lt) goto loc_8309D500;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8309D500:
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bge cr6,0x8309d50c
	if (!cr6.lt) goto loc_8309D50C;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_8309D50C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ad5e38
	ctx.lr = 0x8309D514;
	sub_82AD5E38(ctx, base);
loc_8309D514:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309d5a0
	if (cr6.eq) goto loc_8309D5A0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x8309d5a0
	goto loc_8309D5A0;
loc_8309D534:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x8309d590
	if (!cr6.eq) goto loc_8309D590;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bgt cr6,0x8309d5dc
	if (cr6.gt) goto loc_8309D5DC;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// srawi r11,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x8309d590
	if (!cr6.gt) goto loc_8309D590;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r10,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r10.s64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x8309d57c
	if (cr6.lt) goto loc_8309D57C;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8309D57C:
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bge cr6,0x8309d588
	if (!cr6.lt) goto loc_8309D588;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_8309D588:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ad5e38
	ctx.lr = 0x8309D590;
	sub_82AD5E38(ctx, base);
loc_8309D590:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309d5a0
	if (cr6.eq) goto loc_8309D5A0;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
loc_8309D5A0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x8309d460
	if (cr6.lt) goto loc_8309D460;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8309D5D0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x8309D5DC;
	sub_831CC150(ctx, base);
loc_8309D5DC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x8309D5E8;
	sub_831CC150(ctx, base);
}

__attribute__((alias("__imp__sub_8309D5E8"))) PPC_WEAK_FUNC(sub_8309D5E8);
PPC_FUNC_IMPL(__imp__sub_8309D5E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x8309D5F0;
	__savegprlr_18(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x830a6648
	ctx.lr = 0x8309D60C;
	sub_830A6648(ctx, base);
	// addi r30,r29,420
	ctx.r30.s64 = ctx.r29.s64 + 420;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830a83d8
	ctx.lr = 0x8309D61C;
	sub_830A83D8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r26,r29,292
	ctx.r26.s64 = ctx.r29.s64 + 292;
	// bl 0x835410c0
	ctx.lr = 0x8309D62C;
	sub_835410C0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lhz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// bl 0x830fe218
	ctx.lr = 0x8309D63C;
	sub_830FE218(ctx, base);
	// lhz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r23.u32 + 0);
	// add r27,r3,r11
	ctx.r27.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830a83f0
	ctx.lr = 0x8309D64C;
	sub_830A83F0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83542800
	ctx.lr = 0x8309D658;
	sub_83542800(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lhz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r23.u32 + 0);
	// bl 0x830fe218
	ctx.lr = 0x8309D668;
	sub_830FE218(ctx, base);
	// lhz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r22.u32 + 0);
	// add r26,r3,r10
	ctx.r26.u64 = ctx.r3.u64 + ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83578d58
	ctx.lr = 0x8309D678;
	sub_83578D58(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r21,r20
	ctx.r21.u64 = ctx.r20.u64;
	// stw r20,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r20.u32);
	// lhz r30,0(r9)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// bl 0x830a8438
	ctx.lr = 0x8309D694;
	sub_830A8438(ctx, base);
	// li r19,1
	ctx.r19.s64 = 1;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8309d6a8
	if (!cr6.eq) goto loc_8309D6A8;
	// mr r21,r19
	ctx.r21.u64 = ctx.r19.u64;
	// stw r19,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r19.u32);
loc_8309D6A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312dce0
	ctx.lr = 0x8309D6B0;
	sub_8312DCE0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a66f0
	ctx.lr = 0x8309D6BC;
	sub_830A66F0(ctx, base);
	// lbz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r23.u32 + 0);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r18,r11,25548
	ctx.r18.s64 = ctx.r11.s64 + 25548;
	// bne cr6,0x8309d774
	if (!cr6.eq) goto loc_8309D774;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309d774
	if (!cr6.eq) goto loc_8309D774;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8309D6F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_8309D6FC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8309d720
	if (cr6.eq) goto loc_8309D720;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8309d6fc
	if (cr6.eq) goto loc_8309D6FC;
loc_8309D720:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x8309d734
	if (!cr6.eq) goto loc_8309D734;
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// mr r20,r19
	ctx.r20.u64 = ctx.r19.u64;
	// b 0x8309d9c0
	goto loc_8309D9C0;
loc_8309D734:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8309D748;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r20,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r20.u8);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// bl 0x8309cb28
	ctx.lr = 0x8309D770;
	sub_8309CB28(ctx, base);
	// b 0x8309d9bc
	goto loc_8309D9BC;
loc_8309D774:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x830abbe8
	ctx.lr = 0x8309D77C;
	sub_830ABBE8(ctx, base);
	// cmpwi cr6,r3,31
	cr6.compare<int32_t>(ctx.r3.s32, 31, xer);
	// beq cr6,0x8309d7c0
	if (cr6.eq) goto loc_8309D7C0;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stb r20,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r20.u8);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8309cc00
	ctx.lr = 0x8309D7B8;
	sub_8309CC00(ctx, base);
	// lwz r21,112(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x8309d9bc
	goto loc_8309D9BC;
loc_8309D7C0:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830abbe8
	ctx.lr = 0x8309D7C8;
	sub_830ABBE8(ctx, base);
	// cmpwi cr6,r3,31
	cr6.compare<int32_t>(ctx.r3.s32, 31, xer);
	// beq cr6,0x8309d80c
	if (cr6.eq) goto loc_8309D80C;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stb r19,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r19.u8);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8309cc00
	ctx.lr = 0x8309D804;
	sub_8309CC00(ctx, base);
	// lwz r21,112(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x8309d9bc
	goto loc_8309D9BC;
loc_8309D80C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x830abb98
	ctx.lr = 0x8309D814;
	sub_830ABB98(ctx, base);
	// cmpwi cr6,r3,41
	cr6.compare<int32_t>(ctx.r3.s32, 41, xer);
	// beq cr6,0x8309d858
	if (cr6.eq) goto loc_8309D858;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stb r20,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r20.u8);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8309cc00
	ctx.lr = 0x8309D850;
	sub_8309CC00(ctx, base);
	// lwz r21,112(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x8309d9bc
	goto loc_8309D9BC;
loc_8309D858:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830abb98
	ctx.lr = 0x8309D860;
	sub_830ABB98(ctx, base);
	// cmpwi cr6,r3,41
	cr6.compare<int32_t>(ctx.r3.s32, 41, xer);
	// beq cr6,0x8309d8a4
	if (cr6.eq) goto loc_8309D8A4;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stb r19,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r19.u8);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8309cc00
	ctx.lr = 0x8309D89C;
	sub_8309CC00(ctx, base);
	// lwz r21,112(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x8309d9bc
	goto loc_8309D9BC;
loc_8309D8A4:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x830a6718
	ctx.lr = 0x8309D8AC;
	sub_830A6718(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309d8e8
	if (cr6.eq) goto loc_8309D8E8;
	// stb r20,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r20.u8);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8309d0b8
	ctx.lr = 0x8309D8E4;
	sub_8309D0B8(ctx, base);
	// b 0x8309d9bc
	goto loc_8309D9BC;
loc_8309D8E8:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830a6718
	ctx.lr = 0x8309D8F0;
	sub_830A6718(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309d92c
	if (cr6.eq) goto loc_8309D92C;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stb r19,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r19.u8);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8309d0b8
	ctx.lr = 0x8309D928;
	sub_8309D0B8(ctx, base);
	// b 0x8309d9bc
	goto loc_8309D9BC;
loc_8309D92C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8309D940;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_8309D948:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8309d96c
	if (cr6.eq) goto loc_8309D96C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8309d948
	if (cr6.eq) goto loc_8309D948;
loc_8309D96C:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x8309d980
	if (!cr6.eq) goto loc_8309D980;
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// mr r20,r19
	ctx.r20.u64 = ctx.r19.u64;
	// b 0x8309d9c0
	goto loc_8309D9C0;
loc_8309D980:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8309D994;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r20,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r20.u8);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// bl 0x8309cb28
	ctx.lr = 0x8309D9BC;
	sub_8309CB28(ctx, base);
loc_8309D9BC:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8309D9C0:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309da08
	if (cr6.eq) goto loc_8309DA08;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, xer);
	// bne cr6,0x8309da08
	if (!cr6.eq) goto loc_8309DA08;
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309da08
	if (!cr6.eq) goto loc_8309DA08;
	// addi r5,r18,-24
	ctx.r5.s64 = ctx.r18.s64 + -24;
	// stb r19,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r19.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8309cb28
	ctx.lr = 0x8309DA08;
	sub_8309CB28(ctx, base);
loc_8309DA08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309DA14"))) PPC_WEAK_FUNC(sub_8309DA14);
PPC_FUNC_IMPL(__imp__sub_8309DA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309DA18"))) PPC_WEAK_FUNC(sub_8309DA18);
PPC_FUNC_IMPL(__imp__sub_8309DA18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8309DA20;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// stw r6,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// addi r6,r1,172
	ctx.r6.s64 = ctx.r1.s64 + 172;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x830a0eb0
	ctx.lr = 0x8309DA4C;
	sub_830A0EB0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8309da64
	if (!cr6.eq) goto loc_8309DA64;
loc_8309DA58:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8309DA64:
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8309be58
	ctx.lr = 0x8309DA78;
	sub_8309BE58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309da58
	if (cr6.eq) goto loc_8309DA58;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,164(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8309d5e8
	ctx.lr = 0x8309DA98;
	sub_8309D5E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309DAA0"))) PPC_WEAK_FUNC(sub_8309DAA0);
PPC_FUNC_IMPL(__imp__sub_8309DAA0) {
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
	// bl 0x830abc38
	ctx.lr = 0x8309DAB8;
	sub_830ABC38(ctx, base);
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r8,r9,26032
	ctx.r8.s64 = ctx.r9.s64 + 26032;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// li r6,22
	ctx.r6.s64 = 22;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// stw r7,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
	// stw r5,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r5.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8309DB10"))) PPC_WEAK_FUNC(sub_8309DB10);
PPC_FUNC_IMPL(__imp__sub_8309DB10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// lis r12,-31990
	ctx.r12.s64 = -2096496640;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-9416
	ctx.r12.s64 = ctx.r12.s64 + -9416;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8309DB8C;
	case 1:
		goto loc_8309DB94;
	case 2:
		goto loc_8309DB9C;
	case 3:
		goto loc_8309DBA4;
	case 4:
		goto loc_8309DBAC;
	case 5:
		goto loc_8309DBB4;
	case 6:
		goto loc_8309DBBC;
	case 7:
		goto loc_8309DBC4;
	case 8:
		goto loc_8309DBCC;
	case 9:
		goto loc_8309DBD4;
	case 10:
		goto loc_8309DBDC;
	case 11:
		goto loc_8309DBE4;
	case 12:
		goto loc_8309DBEC;
	case 13:
		goto loc_8309DBF4;
	case 14:
		goto loc_8309DBFC;
	case 15:
		goto loc_8309DC04;
	case 16:
		goto loc_8309DC0C;
	case 17:
		goto loc_8309DC14;
	case 18:
		goto loc_8309DC1C;
	case 19:
		goto loc_8309DC24;
	case 20:
		goto loc_8309DC2C;
	default:
		return;
	}
	// lwz r24,-9332(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9332);
	// lwz r24,-9324(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9324);
	// lwz r24,-9316(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9316);
	// lwz r24,-9308(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9308);
	// lwz r24,-9300(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9300);
	// lwz r24,-9292(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9292);
	// lwz r24,-9284(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9284);
	// lwz r24,-9276(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9276);
	// lwz r24,-9268(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9268);
	// lwz r24,-9260(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9260);
	// lwz r24,-9252(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9252);
	// lwz r24,-9244(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9244);
	// lwz r24,-9236(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9236);
	// lwz r24,-9228(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9228);
	// lwz r24,-9220(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9220);
	// lwz r24,-9212(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9212);
	// lwz r24,-9204(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9204);
	// lwz r24,-9196(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9196);
	// lwz r24,-9188(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9188);
	// lwz r24,-9180(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9180);
	// lwz r24,-9172(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9172);
loc_8309DB8C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8309DB94:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_8309DB9C:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_8309DBA4:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_8309DBAC:
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
loc_8309DBB4:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_8309DBBC:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_8309DBC4:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_8309DBCC:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_8309DBD4:
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
loc_8309DBDC:
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
loc_8309DBE4:
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
loc_8309DBEC:
	// li r3,13
	ctx.r3.s64 = 13;
	// blr 
	return;
loc_8309DBF4:
	// li r3,14
	ctx.r3.s64 = 14;
	// blr 
	return;
loc_8309DBFC:
	// li r3,15
	ctx.r3.s64 = 15;
	// blr 
	return;
loc_8309DC04:
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
loc_8309DC0C:
	// li r3,17
	ctx.r3.s64 = 17;
	// blr 
	return;
loc_8309DC14:
	// li r3,18
	ctx.r3.s64 = 18;
	// blr 
	return;
loc_8309DC1C:
	// li r3,19
	ctx.r3.s64 = 19;
	// blr 
	return;
loc_8309DC24:
	// li r3,20
	ctx.r3.s64 = 20;
	// blr 
	return;
loc_8309DC2C:
	// li r3,21
	ctx.r3.s64 = 21;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309DC34"))) PPC_WEAK_FUNC(sub_8309DC34);
PPC_FUNC_IMPL(__imp__sub_8309DC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309DC38"))) PPC_WEAK_FUNC(sub_8309DC38);
PPC_FUNC_IMPL(__imp__sub_8309DC38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8309DC40;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x830a66f0
	ctx.lr = 0x8309DC58;
	sub_830A66F0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,91
	cr6.compare<uint32_t>(ctx.r11.u32, 91, xer);
	// beq cr6,0x8309dcac
	if (cr6.eq) goto loc_8309DCAC;
	// cmplwi cr6,r11,93
	cr6.compare<uint32_t>(ctx.r11.u32, 93, xer);
	// beq cr6,0x8309dca4
	if (cr6.eq) goto loc_8309DCA4;
	// cmplwi cr6,r11,94
	cr6.compare<uint32_t>(ctx.r11.u32, 94, xer);
	// bne cr6,0x8309dcb4
	if (!cr6.eq) goto loc_8309DCB4;
	// li r29,3
	ctx.r29.s64 = 3;
loc_8309DC78:
	// li r11,25
	ctx.r11.s64 = 25;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8309DC90;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8309dcc0
	if (cr6.eq) goto loc_8309DCC0;
	// bl 0x8309daa0
	ctx.lr = 0x8309DC9C;
	sub_8309DAA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8309dcc4
	goto loc_8309DCC4;
loc_8309DCA4:
	// li r29,2
	ctx.r29.s64 = 2;
	// b 0x8309dc78
	goto loc_8309DC78;
loc_8309DCAC:
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x8309dc78
	goto loc_8309DC78;
loc_8309DCB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8309DCC0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8309DCC4:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// ld r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// std r8,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r8.u64);
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// bl 0x830a66f8
	ctx.lr = 0x8309DCF0;
	sub_830A66F8(ctx, base);
	// bl 0x8309db10
	ctx.lr = 0x8309DCF4;
	sub_8309DB10(ctx, base);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x830fe3a8
	ctx.lr = 0x8309DD04;
	sub_830FE3A8(ctx, base);
	// stw r28,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
	// stw r27,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309DD18"))) PPC_WEAK_FUNC(sub_8309DD18);
PPC_FUNC_IMPL(__imp__sub_8309DD18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,26032
	ctx.r10.s64 = ctx.r11.s64 + 26032;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x830abc88
	ctx.lr = 0x8309DD44;
	sub_830ABC88(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8309dd5c
	if (cr6.eq) goto loc_8309DD5C;
	// bl 0x82416268
	ctx.lr = 0x8309DD58;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8309DD5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309DD74"))) PPC_WEAK_FUNC(sub_8309DD74);
PPC_FUNC_IMPL(__imp__sub_8309DD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309DD78"))) PPC_WEAK_FUNC(sub_8309DD78);
PPC_FUNC_IMPL(__imp__sub_8309DD78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8309DD80;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,25
	ctx.r11.s64 = 25;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8309DDA8;
	sub_82595718(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8309ddc0
	if (cr6.eq) goto loc_8309DDC0;
	// bl 0x8309daa0
	ctx.lr = 0x8309DDB8;
	sub_8309DAA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8309ddc4
	goto loc_8309DDC4;
loc_8309DDC0:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_8309DDC4:
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r28,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
	// bl 0x8312dce0
	ctx.lr = 0x8309DDD8;
	sub_8312DCE0(ctx, base);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r11,4
	ctx.r11.s64 = 4;
	// cmplwi cr6,r10,91
	cr6.compare<uint32_t>(ctx.r10.u32, 91, xer);
	// beq cr6,0x8309de08
	if (cr6.eq) goto loc_8309DE08;
	// cmplwi cr6,r10,93
	cr6.compare<uint32_t>(ctx.r10.u32, 93, xer);
	// beq cr6,0x8309de00
	if (cr6.eq) goto loc_8309DE00;
	// cmplwi cr6,r10,94
	cr6.compare<uint32_t>(ctx.r10.u32, 94, xer);
	// bne cr6,0x8309de0c
	if (!cr6.eq) goto loc_8309DE0C;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8309de0c
	goto loc_8309DE0C;
loc_8309DE00:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8309de0c
	goto loc_8309DE0C;
loc_8309DE08:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8309DE0C:
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// stw r28,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// subfic r10,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// stw r7,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r7.u32);
	// bl 0x835410c0
	ctx.lr = 0x8309DE2C;
	sub_835410C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// lhz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// bl 0x830fe3a8
	ctx.lr = 0x8309DE3C;
	sub_830FE3A8(ctx, base);
	// stw r27,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309DE4C"))) PPC_WEAK_FUNC(sub_8309DE4C);
PPC_FUNC_IMPL(__imp__sub_8309DE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309DE50"))) PPC_WEAK_FUNC(sub_8309DE50);
PPC_FUNC_IMPL(__imp__sub_8309DE50) {
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
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x830fe3e0
	ctx.lr = 0x8309DE70;
	sub_830FE3E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309de84
	if (!cr6.eq) goto loc_8309DE84;
loc_8309DE7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8309df0c
	goto loc_8309DF0C;
loc_8309DE84:
	// bl 0x830e9240
	ctx.lr = 0x8309DE88;
	sub_830E9240(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8309de7c
	if (cr6.eq) goto loc_8309DE7C;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,292(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lwz r30,4472(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4472);
	// bctrl 
	ctx.lr = 0x8309DEB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8309ded8
	if (cr6.eq) goto loc_8309DED8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8309df08
	if (!cr6.eq) goto loc_8309DF08;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x830eb540
	ctx.lr = 0x8309DED0;
	sub_830EB540(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x8309dee4
	goto loc_8309DEE4;
loc_8309DED8:
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// bl 0x830f0a28
	ctx.lr = 0x8309DEE0;
	sub_830F0A28(ctx, base);
	// lwz r5,68(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
loc_8309DEE4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8309dc38
	ctx.lr = 0x8309DEF0;
	sub_8309DC38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8309df08
	if (cr6.eq) goto loc_8309DF08;
	// bl 0x830e9240
	ctx.lr = 0x8309DF00;
	sub_830E9240(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830e95a8
	ctx.lr = 0x8309DF08;
	sub_830E95A8(ctx, base);
loc_8309DF08:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8309DF0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309DF24"))) PPC_WEAK_FUNC(sub_8309DF24);
PPC_FUNC_IMPL(__imp__sub_8309DF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309DF28"))) PPC_WEAK_FUNC(sub_8309DF28);
PPC_FUNC_IMPL(__imp__sub_8309DF28) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r31,232(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
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
	// bne cr6,0x8309df78
	if (!cr6.eq) goto loc_8309DF78;
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8309df7c
	if (cr6.eq) goto loc_8309DF7C;
loc_8309DF78:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8309DF7C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309dfa0
	if (cr6.eq) goto loc_8309DFA0;
loc_8309DF88:
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
loc_8309DFA0:
	// lwz r11,1556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(ctx.r11.u32, 40, xer);
	// blt cr6,0x8309dfb4
	if (cr6.lt) goto loc_8309DFB4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8309dfbc
	goto loc_8309DFBC;
loc_8309DFB4:
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r3,1720(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1720);
loc_8309DFBC:
	// bl 0x830abe08
	ctx.lr = 0x8309DFC0;
	sub_830ABE08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309dff4
	if (cr6.eq) goto loc_8309DFF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a17198
	ctx.lr = 0x8309DFD4;
	sub_82A17198(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309df88
	if (!cr6.eq) goto loc_8309DF88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a17120
	ctx.lr = 0x8309DFE8;
	sub_82A17120(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309df88
	if (!cr6.eq) goto loc_8309DF88;
loc_8309DFF4:
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

__attribute__((alias("__imp__sub_8309E00C"))) PPC_WEAK_FUNC(sub_8309E00C);
PPC_FUNC_IMPL(__imp__sub_8309E00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309E010"))) PPC_WEAK_FUNC(sub_8309E010);
PPC_FUNC_IMPL(__imp__sub_8309E010) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// lwz r10,1556(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1556);
	// cmplwi cr6,r10,40
	cr6.compare<uint32_t>(ctx.r10.u32, 40, xer);
	// blt cr6,0x8309e030
	if (cr6.lt) goto loc_8309E030;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8309e038
	goto loc_8309E038;
loc_8309E030:
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r9,1720(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1720);
loc_8309E038:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addic r8,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8309e06c
	if (!cr6.eq) goto loc_8309E06C;
	// lbz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8309e070
	if (cr6.eq) goto loc_8309E070;
loc_8309E06C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8309E070:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309e088
	if (!cr6.eq) goto loc_8309E088;
	// cmpwi cr6,r9,11
	cr6.compare<int32_t>(ctx.r9.s32, 11, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bltlr cr6
	if (cr6.lt) return;
loc_8309E088:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309E090"))) PPC_WEAK_FUNC(sub_8309E090);
PPC_FUNC_IMPL(__imp__sub_8309E090) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r11,4456(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4456);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x8309e0e0
	if (cr6.eq) goto loc_8309E0E0;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// beq cr6,0x8309e0e0
	if (cr6.eq) goto loc_8309E0E0;
	// lbz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309e0cc
	if (!cr6.eq) goto loc_8309E0CC;
	// lbz r11,37(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 37);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309e0d8
	if (cr6.eq) goto loc_8309E0D8;
loc_8309E0CC:
	// lwz r11,5356(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5356);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8309e0e0
	if (cr6.eq) goto loc_8309E0E0;
loc_8309E0D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8309E0E0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309E0E8"))) PPC_WEAK_FUNC(sub_8309E0E8);
PPC_FUNC_IMPL(__imp__sub_8309E0E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r9,4460(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4460);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bne cr6,0x8309e108
	if (!cr6.eq) goto loc_8309E108;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8309E108:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r9,60(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// ori r8,r11,22620
	ctx.r8.u64 = ctx.r11.u64 | 22620;
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// lwzx r11,r10,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// bne cr6,0x8309e128
	if (!cr6.eq) goto loc_8309E128;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
loc_8309E128:
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
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

__attribute__((alias("__imp__sub_8309E13C"))) PPC_WEAK_FUNC(sub_8309E13C);
PPC_FUNC_IMPL(__imp__sub_8309E13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309E140"))) PPC_WEAK_FUNC(sub_8309E140);
PPC_FUNC_IMPL(__imp__sub_8309E140) {
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
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8309e194
	if (cr6.eq) goto loc_8309E194;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a22b40
	ctx.lr = 0x8309E16C;
	sub_82A22B40(ctx, base);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8309e194
	if (!cr6.eq) goto loc_8309E194;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r9,4460(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4460);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// beq cr6,0x8309e198
	if (cr6.eq) goto loc_8309E198;
loc_8309E194:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8309E198:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309E1A8"))) PPC_WEAK_FUNC(sub_8309E1A8);
PPC_FUNC_IMPL(__imp__sub_8309E1A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8309E1B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,132(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// bl 0x82a22860
	ctx.lr = 0x8309E1CC;
	sub_82A22860(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8309e218
	if (!cr6.gt) goto loc_8309E218;
loc_8309E1D4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a236f8
	ctx.lr = 0x8309E1E0;
	sub_82A236F8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(ctx.r11.s32, 16, xer);
	// beq cr6,0x8309e224
	if (cr6.eq) goto loc_8309E224;
	// cmpwi cr6,r11,51
	cr6.compare<int32_t>(ctx.r11.s32, 51, xer);
	// bne cr6,0x8309e204
	if (!cr6.eq) goto loc_8309E204;
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x8309e224
	if (!cr6.eq) goto loc_8309E224;
	// stw r28,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r28.u32);
loc_8309E204:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82a22860
	ctx.lr = 0x8309E210;
	sub_82A22860(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, xer);
	// blt cr6,0x8309e1d4
	if (cr6.lt) goto loc_8309E1D4;
loc_8309E218:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8309E224:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309E230"))) PPC_WEAK_FUNC(sub_8309E230);
PPC_FUNC_IMPL(__imp__sub_8309E230) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r9,4460(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4460);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bne cr6,0x8309e264
	if (!cr6.eq) goto loc_8309E264;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8309e2c8
	goto loc_8309E2C8;
loc_8309E264:
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8309e2c4
	if (cr6.eq) goto loc_8309E2C4;
	// lwz r3,132(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	// addis r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r31,22272
	ctx.r31.s64 = ctx.r31.s64 + 22272;
	// bl 0x82a22b40
	ctx.lr = 0x8309E28C;
	sub_82A22B40(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// srawi r10,r11,6
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 6;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8309e2b4
	if (!cr6.eq) goto loc_8309E2B4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-23860(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23860);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8309e2c4
	if (cr6.gt) goto loc_8309E2C4;
loc_8309E2B4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x8309e2c4
	if (cr6.eq) goto loc_8309E2C4;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8309E2C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8309E2C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309E2E0"))) PPC_WEAK_FUNC(sub_8309E2E0);
PPC_FUNC_IMPL(__imp__sub_8309E2E0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r9,292(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r8,4472(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4472);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// clrldi r6,r7,32
	ctx.r6.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// bl 0x83740858
	ctx.lr = 0x8309E314;
	sub_83740858(ctx, base);
	// clrldi r5,r3,32
	ctx.r5.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfs f0,-11316(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -11316);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f13
	ctx.f9.f64 = double(float(ctx.f13.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fcmpu cr6,f9,f8
	cr6.compare(ctx.f9.f64, ctx.f8.f64);
	// ble cr6,0x8309e380
	if (!cr6.gt) goto loc_8309E380;
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r10,4460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4460);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x8309e368
	if (!cr6.eq) goto loc_8309E368;
	// lwz r11,5388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5388);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x8309e380
	if (cr6.eq) goto loc_8309E380;
loc_8309E368:
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
loc_8309E380:
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

__attribute__((alias("__imp__sub_8309E398"))) PPC_WEAK_FUNC(sub_8309E398);
PPC_FUNC_IMPL(__imp__sub_8309E398) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8309E3A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,-3564(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r8,292(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// lwz r11,4460(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4460);
	// lwz r7,4472(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4472);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// subf r30,r9,r7
	ctx.r30.s64 = ctx.r7.s64 - ctx.r9.s64;
	// beq cr6,0x8309e408
	if (cr6.eq) goto loc_8309E408;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8309e3f0
	if (!cr6.eq) goto loc_8309E3F0;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r10,5388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5388);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// beq cr6,0x8309e3f4
	if (cr6.eq) goto loc_8309E3F4;
loc_8309E3F0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8309E3F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8309E408:
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x83740858
	ctx.lr = 0x8309E414;
	sub_83740858(ctx, base);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfs f0,-11316(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -11316);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f13
	ctx.f9.f64 = double(float(ctx.f13.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fcmpu cr6,f9,f8
	cr6.compare(ctx.f9.f64, ctx.f8.f64);
	// ble cr6,0x8309e4e4
	if (!cr6.gt) goto loc_8309E4E4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2b4e0
	ctx.lr = 0x8309E454;
	sub_82A2B4E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8309e468
	if (cr6.lt) goto loc_8309E468;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8309e46c
	if (cr6.lt) goto loc_8309E46C;
loc_8309E468:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8309E46C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309e4b4
	if (cr6.eq) goto loc_8309E4B4;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8309e488
	if (!cr6.lt) goto loc_8309E488;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8309e4b8
	goto loc_8309E4B8;
loc_8309E488:
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// bge cr6,0x8309e498
	if (!cr6.lt) goto loc_8309E498;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8309e4b8
	goto loc_8309E4B8;
loc_8309E498:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r3
	xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// eqv r9,r11,r3
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r3.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// b 0x8309e4b8
	goto loc_8309E4B8;
loc_8309E4B4:
	// li r11,2
	ctx.r11.s64 = 2;
loc_8309E4B8:
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// beq cr6,0x8309e4d8
	if (cr6.eq) goto loc_8309E4D8;
	// bl 0x83740858
	ctx.lr = 0x8309E4C4;
	sub_83740858(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// ble cr6,0x8309e4e4
	if (!cr6.gt) goto loc_8309E4E4;
loc_8309E4D8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8309E4E4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309E4F0"))) PPC_WEAK_FUNC(sub_8309E4F0);
PPC_FUNC_IMPL(__imp__sub_8309E4F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// lwz r11,-3564(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3564);
	// lwz r9,232(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// bne cr6,0x8309e514
	if (!cr6.eq) goto loc_8309E514;
	// lwz r11,1556(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1556);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// lwz r11,-3564(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3564);
loc_8309E514:
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r9,1556(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1556);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8309e570
	if (!cr6.eq) goto loc_8309E570;
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8309e55c
	if (!cr6.eq) goto loc_8309E55C;
	// lbz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8309e560
	if (cr6.eq) goto loc_8309E560;
loc_8309E55C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8309E560:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_8309E570:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309E578"))) PPC_WEAK_FUNC(sub_8309E578);
PPC_FUNC_IMPL(__imp__sub_8309E578) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8309E580;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r29,352(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// lwz r9,5340(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5340);
	// cmpwi cr6,r9,46
	cr6.compare<int32_t>(ctx.r9.s32, 46, xer);
	// beq cr6,0x8309e5ac
	if (cr6.eq) goto loc_8309E5AC;
	// li r28,1
	ctx.r28.s64 = 1;
loc_8309E5AC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831f8200
	ctx.lr = 0x8309E5B4;
	sub_831F8200(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8309e624
	if (!cr6.eq) goto loc_8309E624;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x8309e5d0
	if (!cr6.eq) goto loc_8309E5D0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r11.u32);
loc_8309E5D0:
	// lwz r3,-3564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r11,292(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// lwz r4,5756(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5756);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x8309e5f0
	if (cr6.lt) goto loc_8309E5F0;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8309e5f4
	if (cr6.lt) goto loc_8309E5F4;
loc_8309E5F0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8309E5F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309e64c
	if (cr6.eq) goto loc_8309E64C;
	// bl 0x82a0c760
	ctx.lr = 0x8309E604;
	sub_82A0C760(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,13568
	ctx.r10.s64 = 889192448;
	// rlwinm r9,r11,0,0,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r3,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8309E624:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831f8200
	ctx.lr = 0x8309E62C;
	sub_831F8200(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8309e640
	if (cr6.eq) goto loc_8309E640;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309e64c
	if (!cr6.eq) goto loc_8309E64C;
loc_8309E640:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8309E64C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309E658"))) PPC_WEAK_FUNC(sub_8309E658);
PPC_FUNC_IMPL(__imp__sub_8309E658) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r8,68(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r7,12(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// subfc r6,r11,r8
	xer.ca = ctx.r8.u32 >= ctx.r11.u32;
	ctx.r6.s64 = ctx.r8.s64 - ctx.r11.s64;
	// rlwinm r4,r11,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r11,r8,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addis r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 65536;
	// subfe r7,r11,r4
	temp.u8 = (~ctx.r11.u32 + ctx.r4.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r11.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r5,60(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// addi r9,r9,26988
	ctx.r9.s64 = ctx.r9.s64 + 26988;
	// and r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 & ctx.r8.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne cr6,0x8309e6a8
	if (!cr6.eq) goto loc_8309E6A8;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r9.u32);
loc_8309E6A8:
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r8,20
	cr6.compare<uint32_t>(ctx.r8.u32, 20, xer);
	// bne cr6,0x8309e6c4
	if (!cr6.eq) goto loc_8309E6C4;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// beq cr6,0x8309e6c8
	if (cr6.eq) goto loc_8309E6C8;
loc_8309E6C4:
	// li r9,0
	ctx.r9.s64 = 0;
loc_8309E6C8:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8309e6f0
	if (cr6.eq) goto loc_8309E6F0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,60(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x8309e6ec
	if (cr6.lt) goto loc_8309E6EC;
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// bne cr6,0x8309e6f0
	if (!cr6.eq) goto loc_8309E6F0;
loc_8309E6EC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8309E6F0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309E724"))) PPC_WEAK_FUNC(sub_8309E724);
PPC_FUNC_IMPL(__imp__sub_8309E724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309E728"))) PPC_WEAK_FUNC(sub_8309E728);
PPC_FUNC_IMPL(__imp__sub_8309E728) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r8,-3564(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r9,292(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 292);
	// lwz r7,4472(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4472);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bne cr6,0x8309e778
	if (!cr6.eq) goto loc_8309E778;
	// lwz r11,4456(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4456);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8309e778
	if (cr6.eq) goto loc_8309E778;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// beq cr6,0x8309e778
	if (cr6.eq) goto loc_8309E778;
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
loc_8309E778:
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,20
	cr6.compare<uint32_t>(ctx.r10.u32, 20, xer);
	// bgt cr6,0x8309e9d8
	if (cr6.gt) goto loc_8309E9D8;
	// lis r12,-31990
	ctx.r12.s64 = -2096496640;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-6236
	ctx.r12.s64 = ctx.r12.s64 + -6236;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_8309E7F8;
	case 1:
		goto loc_8309E81C;
	case 2:
		goto loc_8309E868;
	case 3:
		goto loc_8309E870;
	case 4:
		goto loc_8309E878;
	case 5:
		goto loc_8309E880;
	case 6:
		goto loc_8309E8C4;
	case 7:
		goto loc_8309E8CC;
	case 8:
		goto loc_8309E904;
	case 9:
		goto loc_8309E940;
	case 10:
		goto loc_8309E948;
	case 11:
		goto loc_8309E96C;
	case 12:
		goto loc_8309E990;
	case 13:
		goto loc_8309E998;
	case 14:
		goto loc_8309E9A0;
	case 15:
		goto loc_8309E9A8;
	case 16:
		goto loc_8309E9B4;
	case 17:
		goto loc_8309E8AC;
	case 18:
		goto loc_8309E9C0;
	case 19:
		goto loc_8309E9C8;
	case 20:
		goto loc_8309E9D0;
	default:
		return;
	}
	// lwz r24,-6152(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -6152);
	// lwz r24,-6116(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -6116);
	// lwz r24,-6040(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -6040);
	// lwz r24,-6032(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -6032);
	// lwz r24,-6024(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -6024);
	// lwz r24,-6016(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -6016);
	// lwz r24,-5948(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5948);
	// lwz r24,-5940(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5940);
	// lwz r24,-5884(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5884);
	// lwz r24,-5824(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5824);
	// lwz r24,-5816(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5816);
	// lwz r24,-5780(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5780);
	// lwz r24,-5744(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5744);
	// lwz r24,-5736(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5736);
	// lwz r24,-5728(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5728);
	// lwz r24,-5720(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5720);
	// lwz r24,-5708(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5708);
	// lwz r24,-5972(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5972);
	// lwz r24,-5696(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5696);
	// lwz r24,-5688(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5688);
	// lwz r24,-5680(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5680);
loc_8309E7F8:
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8309E81C:
	// lwz r11,232(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 232);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8309e850
	if (!cr6.eq) goto loc_8309E850;
	// lbz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
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
	// beq cr6,0x8309e8ac
	if (cr6.eq) goto loc_8309E8AC;
loc_8309E850:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8309E868:
	// bl 0x8309df28
	ctx.lr = 0x8309E86C;
	sub_8309DF28(ctx, base);
	// b 0x8309e9d4
	goto loc_8309E9D4;
loc_8309E870:
	// bl 0x8309e010
	ctx.lr = 0x8309E874;
	sub_8309E010(ctx, base);
	// b 0x8309e9d4
	goto loc_8309E9D4;
loc_8309E878:
	// bl 0x8309e090
	ctx.lr = 0x8309E87C;
	sub_8309E090(ctx, base);
	// b 0x8309e9d4
	goto loc_8309E9D4;
loc_8309E880:
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8309e850
	if (cr6.eq) goto loc_8309E850;
	// lwz r11,292(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 292);
	// lwz r10,5388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5388);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x8309e850
	if (!cr6.eq) goto loc_8309E850;
	// lwz r11,4456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4456);
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// bne cr6,0x8309e850
	if (!cr6.eq) goto loc_8309E850;
loc_8309E8AC:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8309E8C4:
	// bl 0x8309e0e8
	ctx.lr = 0x8309E8C8;
	sub_8309E0E8(ctx, base);
	// b 0x8309e9d4
	goto loc_8309E9D4;
loc_8309E8CC:
	// lwz r11,4460(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4460);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x8309e8ac
	if (cr6.eq) goto loc_8309E8AC;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// ori r9,r11,22620
	ctx.r9.u64 = ctx.r11.u64 | 22620;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8309E904:
	// lwz r11,4460(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4460);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x8309e8ac
	if (cr6.eq) goto loc_8309E8AC;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// ori r9,r11,22620
	ctx.r9.u64 = ctx.r11.u64 | 22620;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8309E940:
	// bl 0x8309e140
	ctx.lr = 0x8309E944;
	sub_8309E140(ctx, base);
	// b 0x8309e9d4
	goto loc_8309E9D4;
loc_8309E948:
	// lwz r11,4460(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4460);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8309E96C:
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8309E990:
	// bl 0x8309e1a8
	ctx.lr = 0x8309E994;
	sub_8309E1A8(ctx, base);
	// b 0x8309e9d4
	goto loc_8309E9D4;
loc_8309E998:
	// bl 0x8309e230
	ctx.lr = 0x8309E99C;
	sub_8309E230(ctx, base);
	// b 0x8309e9d4
	goto loc_8309E9D4;
loc_8309E9A0:
	// bl 0x8309e2e0
	ctx.lr = 0x8309E9A4;
	sub_8309E2E0(ctx, base);
	// b 0x8309e9d4
	goto loc_8309E9D4;
loc_8309E9A8:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8309e398
	ctx.lr = 0x8309E9B0;
	sub_8309E398(ctx, base);
	// b 0x8309e9d4
	goto loc_8309E9D4;
loc_8309E9B4:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8309e398
	ctx.lr = 0x8309E9BC;
	sub_8309E398(ctx, base);
	// b 0x8309e9d4
	goto loc_8309E9D4;
loc_8309E9C0:
	// bl 0x8309e4f0
	ctx.lr = 0x8309E9C4;
	sub_8309E4F0(ctx, base);
	// b 0x8309e9d4
	goto loc_8309E9D4;
loc_8309E9C8:
	// bl 0x8309e578
	ctx.lr = 0x8309E9CC;
	sub_8309E578(ctx, base);
	// b 0x8309e9d4
	goto loc_8309E9D4;
loc_8309E9D0:
	// bl 0x8309e658
	ctx.lr = 0x8309E9D4;
	sub_8309E658(ctx, base);
loc_8309E9D4:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8309E9D8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309E9EC"))) PPC_WEAK_FUNC(sub_8309E9EC);
PPC_FUNC_IMPL(__imp__sub_8309E9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309E9F0"))) PPC_WEAK_FUNC(sub_8309E9F0);
PPC_FUNC_IMPL(__imp__sub_8309E9F0) {
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
	// bl 0x8309e728
	ctx.lr = 0x8309EA08;
	sub_8309E728(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309ea2c
	if (!cr6.eq) goto loc_8309EA2C;
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
loc_8309EA2C:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8309ea4c
	if (cr6.eq) goto loc_8309EA4C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8309ea70
	if (!cr6.eq) goto loc_8309EA70;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830eb540
	ctx.lr = 0x8309EA48;
	sub_830EB540(ctx, base);
	// b 0x8309ea70
	goto loc_8309EA70;
loc_8309EA4C:
	// li r5,1
	ctx.r5.s64 = 1;
	// ld r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830eb168
	ctx.lr = 0x8309EA5C;
	sub_830EB168(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8309EA70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8309EA70:
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

__attribute__((alias("__imp__sub_8309EA88"))) PPC_WEAK_FUNC(sub_8309EA88);
PPC_FUNC_IMPL(__imp__sub_8309EA88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x8309eaa0
	if (cr6.lt) goto loc_8309EAA0;
	// bne cr6,0x8309eaa4
	if (!cr6.eq) goto loc_8309EAA4;
	// b 0x8309e9f0
	sub_8309E9F0(ctx, base);
	return;
loc_8309EAA0:
	// b 0x8309de50
	sub_8309DE50(ctx, base);
	return;
loc_8309EAA4:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309EAAC"))) PPC_WEAK_FUNC(sub_8309EAAC);
PPC_FUNC_IMPL(__imp__sub_8309EAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309EAB0"))) PPC_WEAK_FUNC(sub_8309EAB0);
PPC_FUNC_IMPL(__imp__sub_8309EAB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8309EAB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x830a7028
	ctx.lr = 0x8309EAC8;
	sub_830A7028(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830a7120
	ctx.lr = 0x8309EAD4;
	sub_830A7120(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x830a87d8
	ctx.lr = 0x8309EAE4;
	sub_830A87D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8309eb28
	if (cr6.eq) goto loc_8309EB28;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309eb08
	if (!cr6.eq) goto loc_8309EB08;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8309eb28
	if (cr6.eq) goto loc_8309EB28;
loc_8309EB08:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3000
	ctx.r5.s64 = 3000;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x830f4710
	ctx.lr = 0x8309EB1C;
	sub_830F4710(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830f56b0
	ctx.lr = 0x8309EB28;
	sub_830F56B0(ctx, base);
loc_8309EB28:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83102db0
	ctx.lr = 0x8309EB30;
	sub_83102DB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309EB38"))) PPC_WEAK_FUNC(sub_8309EB38);
PPC_FUNC_IMPL(__imp__sub_8309EB38) {
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
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,96
	cr6.compare<int32_t>(ctx.r11.s32, 96, xer);
	// bne cr6,0x8309eba4
	if (!cr6.eq) goto loc_8309EBA4;
	// bl 0x830a7028
	ctx.lr = 0x8309EB5C;
	sub_830A7028(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830a7120
	ctx.lr = 0x8309EB68;
	sub_830A7120(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x830a87d8
	ctx.lr = 0x8309EB78;
	sub_830A87D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bne cr6,0x8309eba0
	if (!cr6.eq) goto loc_8309EBA0;
	// bl 0x83102db0
	ctx.lr = 0x8309EB88;
	sub_83102DB0(ctx, base);
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
loc_8309EBA0:
	// bl 0x83102db0
	ctx.lr = 0x8309EBA4;
	sub_83102DB0(ctx, base);
loc_8309EBA4:
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

__attribute__((alias("__imp__sub_8309EBBC"))) PPC_WEAK_FUNC(sub_8309EBBC);
PPC_FUNC_IMPL(__imp__sub_8309EBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309EBC0"))) PPC_WEAK_FUNC(sub_8309EBC0);
PPC_FUNC_IMPL(__imp__sub_8309EBC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,96
	cr6.compare<int32_t>(ctx.r3.s32, 96, xer);
	// blt cr6,0x8309ec48
	if (cr6.lt) goto loc_8309EC48;
	// cmpwi cr6,r3,122
	cr6.compare<int32_t>(ctx.r3.s32, 122, xer);
	// bgt cr6,0x8309ec48
	if (cr6.gt) goto loc_8309EC48;
	// addi r11,r3,-113
	ctx.r11.s64 = ctx.r3.s64 + -113;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// lis r12,-31990
	ctx.r12.s64 = -2096496640;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-5128
	ctx.r12.s64 = ctx.r12.s64 + -5128;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8309EC28;
	case 1:
		goto loc_8309EC38;
	case 2:
		goto loc_8309EC38;
	case 3:
		goto loc_8309EC38;
	case 4:
		goto loc_8309EC40;
	case 5:
		goto loc_8309EC20;
	case 6:
		goto loc_8309EC20;
	case 7:
		goto loc_8309EC20;
	case 8:
		goto loc_8309EC20;
	case 9:
		goto loc_8309EC30;
	default:
		return;
	}
	// lwz r24,-5080(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5080);
	// lwz r24,-5064(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5064);
	// lwz r24,-5064(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5064);
	// lwz r24,-5064(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5064);
	// lwz r24,-5056(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5056);
	// lwz r24,-5088(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5088);
	// lwz r24,-5088(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5088);
	// lwz r24,-5088(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5088);
	// lwz r24,-5088(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5088);
	// lwz r24,-5072(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5072);
loc_8309EC20:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8309EC28:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_8309EC30:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_8309EC38:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_8309EC40:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_8309EC48:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309EC50"))) PPC_WEAK_FUNC(sub_8309EC50);
PPC_FUNC_IMPL(__imp__sub_8309EC50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,26692
	ctx.r10.s64 = ctx.r11.s64 + 26692;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x830abc88
	ctx.lr = 0x8309EC7C;
	sub_830ABC88(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8309ec94
	if (cr6.eq) goto loc_8309EC94;
	// bl 0x82416268
	ctx.lr = 0x8309EC90;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8309EC94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309ECAC"))) PPC_WEAK_FUNC(sub_8309ECAC);
PPC_FUNC_IMPL(__imp__sub_8309ECAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309ECB0"))) PPC_WEAK_FUNC(sub_8309ECB0);
PPC_FUNC_IMPL(__imp__sub_8309ECB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8309ECB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r31,6132(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a26828
	ctx.lr = 0x8309ECD0;
	sub_82A26828(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a26848
	ctx.lr = 0x8309ECDC;
	sub_82A26848(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x830f1908
	ctx.lr = 0x8309ECE4;
	sub_830F1908(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x8309ed44
	if (cr6.eq) goto loc_8309ED44;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8309ed44
	if (cr6.eq) goto loc_8309ED44;
	// cmpwi cr6,r30,121
	cr6.compare<int32_t>(ctx.r30.s32, 121, xer);
	// bne cr6,0x8309ed38
	if (!cr6.eq) goto loc_8309ED38;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,48710
	ctx.r10.u64 = ctx.r11.u64 | 48710;
	// lbzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// beq cr6,0x8309ed28
	if (cr6.eq) goto loc_8309ED28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83742320
	ctx.lr = 0x8309ED18;
	sub_83742320(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8309ed2c
	if (cr6.eq) goto loc_8309ED2C;
loc_8309ED28:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8309ED2C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8309ED38:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8309ED44:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309ED50"))) PPC_WEAK_FUNC(sub_8309ED50);
PPC_FUNC_IMPL(__imp__sub_8309ED50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8309ED58;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x830a83d8
	ctx.lr = 0x8309ED70;
	sub_830A83D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-31754
	ctx.r10.s64 = -2081030144;
	// addi r3,r10,23160
	ctx.r3.s64 = ctx.r10.s64 + 23160;
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x830fe218
	ctx.lr = 0x8309ED84;
	sub_830FE218(ctx, base);
	// li r24,25
	ctx.r24.s64 = 25;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8309EDA0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8309eddc
	if (cr6.eq) goto loc_8309EDDC;
	// bl 0x830abc38
	ctx.lr = 0x8309EDB0;
	sub_830ABC38(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r10,r11,26692
	ctx.r10.s64 = ctx.r11.s64 + 26692;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r25,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r25.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r25,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r25.u32);
	// stw r25,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r25.u32);
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// stw r25,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r25.u32);
	// b 0x8309ede4
	goto loc_8309EDE4;
loc_8309EDDC:
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_8309EDE4:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// li r10,3
	ctx.r10.s64 = 3;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x8309ebc0
	ctx.lr = 0x8309EDFC;
	sub_8309EBC0(ctx, base);
	// addic r9,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r9.s64 = ctx.r30.s64 + -1;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// stw r27,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// subfe r8,r9,r30
	temp.u8 = (~ctx.r9.u32 + ctx.r30.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r30.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r30.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r8,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// bl 0x835410c0
	ctx.lr = 0x8309EE1C;
	sub_835410C0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// lhz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// add r6,r11,r26
	ctx.r6.u64 = ctx.r11.u64 + ctx.r26.u64;
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// bl 0x830fe3a8
	ctx.lr = 0x8309EE34;
	sub_830FE3A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8309eb38
	ctx.lr = 0x8309EE3C;
	sub_8309EB38(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8309ee84
	if (!cr6.eq) goto loc_8309EE84;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x8309EE58;
	sub_82595150(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8309EE70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x8309EE78;
	sub_82595170(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8309EE84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309EE90"))) PPC_WEAK_FUNC(sub_8309EE90);
PPC_FUNC_IMPL(__imp__sub_8309EE90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x8309EE98;
	__savegprlr_22(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// bl 0x82a229e8
	ctx.lr = 0x8309EEBC;
	sub_82A229E8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,55
	cr6.compare<int32_t>(ctx.r10.s32, 55, xer);
	// beq cr6,0x8309f070
	if (cr6.eq) goto loc_8309F070;
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(ctx.r24.s32, 2, xer);
	// bge cr6,0x8309f070
	if (!cr6.lt) goto loc_8309F070;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r27,r11,20
	ctx.r27.s64 = ctx.r11.s64 + 20;
	// bl 0x82a225d0
	ctx.lr = 0x8309EEE0;
	sub_82A225D0(ctx, base);
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// add r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 + ctx.r11.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm r26,r11,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8309EEF8:
	// add r11,r26,r31
	ctx.r11.u64 = ctx.r26.u64 + ctx.r31.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8309ef34
	if (cr6.eq) goto loc_8309EF34;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,255
	cr6.compare<int32_t>(ctx.r10.s32, 255, xer);
	// beq cr6,0x8309ef34
	if (cr6.eq) goto loc_8309EF34;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,255
	cr6.compare<int32_t>(ctx.r10.s32, 255, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x8309ef38
	if (!cr6.eq) goto loc_8309EF38;
loc_8309EF34:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8309EF38:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8309efa8
	if (cr6.eq) goto loc_8309EFA8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8291adc0
	ctx.lr = 0x8309EF54;
	sub_8291ADC0(ctx, base);
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// bl 0x8291a868
	ctx.lr = 0x8309EF64;
	sub_8291A868(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8291a868
	ctx.lr = 0x8309EF78;
	sub_8291A868(ctx, base);
	// lwz r10,4(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// rlwinm r11,r3,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// stwx r7,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r7.u32);
	// cmplwi cr6,r31,6
	cr6.compare<uint32_t>(ctx.r31.u32, 6, xer);
	// stwx r10,r30,r8
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r10.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// blt cr6,0x8309eef8
	if (cr6.lt) goto loc_8309EEF8;
loc_8309EFA8:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x8309f020
	if (cr6.eq) goto loc_8309F020;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_8309EFBC:
	// cmplw cr6,r4,r25
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r25.u32, xer);
	// bge cr6,0x8309f010
	if (!cr6.lt) goto loc_8309F010;
	// subf r9,r4,r25
	ctx.r9.s64 = ctx.r25.s64 - ctx.r4.s64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8309EFD0:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwzx r9,r10,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwzx r7,r11,r5
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// bge cr6,0x8309f008
	if (!cr6.lt) goto loc_8309F008;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stwx r9,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stwx r7,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r7.u32);
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stwx r7,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u32);
	// stwx r6,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r6.u32);
loc_8309F008:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8309efd0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8309EFD0;
loc_8309F010:
	// addic. r3,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x8309efbc
	if (!cr0.eq) goto loc_8309EFBC;
loc_8309F020:
	// li r11,96
	ctx.r11.s64 = 96;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x8309f074
	if (cr6.eq) goto loc_8309F074;
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
loc_8309F03C:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8309ed50
	ctx.lr = 0x8309F050;
	sub_8309ED50(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8309f074
	if (!cr6.eq) goto loc_8309F074;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, xer);
	// blt cr6,0x8309f03c
	if (cr6.lt) goto loc_8309F03C;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_8309F070:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8309F074:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309F07C"))) PPC_WEAK_FUNC(sub_8309F07C);
PPC_FUNC_IMPL(__imp__sub_8309F07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309F080"))) PPC_WEAK_FUNC(sub_8309F080);
PPC_FUNC_IMPL(__imp__sub_8309F080) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8309F088;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,132(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82a23768
	ctx.lr = 0x8309F0A8;
	sub_82A23768(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r28,-31763
	ctx.r28.s64 = -2081619968;
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x8309f110
	if (cr6.eq) goto loc_8309F110;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x8309f0f0
	if (!cr6.eq) goto loc_8309F0F0;
	// lwz r11,-3564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// lis r10,-31754
	ctx.r10.s64 = -2081030144;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r10,23160
	ctx.r3.s64 = ctx.r10.s64 + 23160;
	// lwz r9,292(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r29,4472(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4472);
	// bl 0x830fe218
	ctx.lr = 0x8309F0E0;
	sub_830FE218(ctx, base);
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// b 0x8309f110
	goto loc_8309F110;
loc_8309F0F0:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x8309f110
	if (!cr6.eq) goto loc_8309F110;
	// bl 0x83740858
	ctx.lr = 0x8309F0FC;
	sub_83740858(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_8309F110:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309f134
	if (cr6.eq) goto loc_8309F134;
	// lwz r10,-3564(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,292(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// lwz r9,4472(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4472);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x8309f138
	if (!cr6.gt) goto loc_8309F138;
loc_8309F134:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8309F138:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309F140"))) PPC_WEAK_FUNC(sub_8309F140);
PPC_FUNC_IMPL(__imp__sub_8309F140) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8309F148;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x8312dce0
	ctx.lr = 0x8309F168;
	sub_8312DCE0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,103
	cr6.compare<uint32_t>(ctx.r11.u32, 103, xer);
	// bne cr6,0x8309f190
	if (!cr6.eq) goto loc_8309F190;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8309ee90
	ctx.lr = 0x8309F188;
	sub_8309EE90(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8309F190:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312dce0
	ctx.lr = 0x8309F198;
	sub_8312DCE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x8309ed50
	ctx.lr = 0x8309F1AC;
	sub_8309ED50(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309F1B4"))) PPC_WEAK_FUNC(sub_8309F1B4);
PPC_FUNC_IMPL(__imp__sub_8309F1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309F1B8"))) PPC_WEAK_FUNC(sub_8309F1B8);
PPC_FUNC_IMPL(__imp__sub_8309F1B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8309F1C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,6132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// bl 0x830ea3d8
	ctx.lr = 0x8309F1E0;
	sub_830EA3D8(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-96
	ctx.r11.s64 = ctx.r11.s64 + -96;
	// cmplwi cr6,r11,26
	cr6.compare<uint32_t>(ctx.r11.u32, 26, xer);
	// bgt cr6,0x8309f688
	if (cr6.gt) goto loc_8309F688;
	// lis r12,-31990
	ctx.r12.s64 = -2096496640;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-3572
	ctx.r12.s64 = ctx.r12.s64 + -3572;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8309F278;
	case 1:
		goto loc_8309F28C;
	case 2:
		goto loc_8309F2C4;
	case 3:
		goto loc_8309F2E4;
	case 4:
		goto loc_8309F688;
	case 5:
		goto loc_8309F340;
	case 6:
		goto loc_8309F360;
	case 7:
		goto loc_8309F688;
	case 8:
		goto loc_8309F4AC;
	case 9:
		goto loc_8309F504;
	case 10:
		goto loc_8309F55C;
	case 11:
		goto loc_8309F380;
	case 12:
		goto loc_8309F3A0;
	case 13:
		goto loc_8309F3C0;
	case 14:
		goto loc_8309F3E4;
	case 15:
		goto loc_8309F404;
	case 16:
		goto loc_8309F428;
	case 17:
		goto loc_8309F44C;
	case 18:
		goto loc_8309F474;
	case 19:
		goto loc_8309F4CC;
	case 20:
		goto loc_8309F524;
	case 21:
		goto loc_8309F57C;
	case 22:
		goto loc_8309F5E0;
	case 23:
		goto loc_8309F614;
	case 24:
		goto loc_8309F5F4;
	case 25:
		goto loc_8309F634;
	case 26:
		goto loc_8309F668;
	default:
		return;
	}
	// lwz r24,-3464(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3464);
	// lwz r24,-3444(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3444);
	// lwz r24,-3388(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3388);
	// lwz r24,-3356(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3356);
	// lwz r24,-2424(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2424);
	// lwz r24,-3264(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3264);
	// lwz r24,-3232(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3232);
	// lwz r24,-2424(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2424);
	// lwz r24,-2900(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2900);
	// lwz r24,-2812(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2812);
	// lwz r24,-2724(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2724);
	// lwz r24,-3200(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3200);
	// lwz r24,-3168(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3168);
	// lwz r24,-3136(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3136);
	// lwz r24,-3100(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3100);
	// lwz r24,-3068(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3068);
	// lwz r24,-3032(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3032);
	// lwz r24,-2996(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2996);
	// lwz r24,-2956(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2956);
	// lwz r24,-2868(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2868);
	// lwz r24,-2780(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2780);
	// lwz r24,-2692(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2692);
	// lwz r24,-2592(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2592);
	// lwz r24,-2540(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2540);
	// lwz r24,-2572(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2572);
	// lwz r24,-2508(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2508);
	// lwz r24,-2456(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2456);
loc_8309F278:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8309eab0
	ctx.lr = 0x8309F280;
	sub_8309EAB0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8309F28C:
	// li r4,5
	ctx.r4.s64 = 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830f44b0
	ctx.lr = 0x8309F298;
	sub_830F44B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309f688
	if (cr6.eq) goto loc_8309F688;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830f4560
	ctx.lr = 0x8309F2B8;
	sub_830F4560(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8309F2C4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,10
	ctx.r4.s64 = 10;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830f4560
	ctx.lr = 0x8309F2D8;
	sub_830F4560(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8309F2E4:
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309f320
	if (!cr6.eq) goto loc_8309F320;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x8309f320
	if (!cr6.eq) goto loc_8309F320;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r5,2
	ctx.r5.s64 = 2;
	// ori r6,r6,4464
	ctx.r6.u64 = ctx.r6.u64 | 4464;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x830f4560
	ctx.lr = 0x8309F314;
	sub_830F4560(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8309F320:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x830f4560
	ctx.lr = 0x8309F334;
	sub_830F4560(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8309F340:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x830f4560
	ctx.lr = 0x8309F354;
	sub_830F4560(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8309F360:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x830f4560
	ctx.lr = 0x8309F374;
	sub_830F4560(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8309F380:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,6
	ctx.r4.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830f4560
	ctx.lr = 0x8309F394;
	sub_830F4560(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8309F3A0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x830f4560
	ctx.lr = 0x8309F3B4;
	sub_830F4560(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8309F3C0:
	// lis r6,1
	ctx.r6.s64 = 65536;
	// li r5,2
	ctx.r5.s64 = 2;
	// ori r6,r6,4464
	ctx.r6.u64 = ctx.r6.u64 | 4464;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x830f4560
	ctx.lr = 0x8309F3D8;
	sub_830F4560(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8309F3E4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x830f4560
	ctx.lr = 0x8309F3F8;
	sub_830F4560(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8309F404:
	// lis r6,1
	ctx.r6.s64 = 65536;
	// li r5,2
	ctx.r5.s64 = 2;
	// ori r6,r6,4464
	ctx.r6.u64 = ctx.r6.u64 | 4464;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x830f4560
	ctx.lr = 0x8309F41C;
	sub_830F4560(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8309F428:
	// lis r6,1
	ctx.r6.s64 = 65536;
	// li r5,2
	ctx.r5.s64 = 2;
	// ori r6,r6,4464
	ctx.r6.u64 = ctx.r6.u64 | 4464;
	// li r4,6
	ctx.r4.s64 = 6;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x830f4560
	ctx.lr = 0x8309F440;
	sub_830F4560(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8309F44C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8309ecb0
	ctx.lr = 0x8309F458;
	sub_8309ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309f688
	if (cr6.eq) goto loc_8309F688;
	// bl 0x830f3e48
	ctx.lr = 0x8309F468;
	sub_830F3E48(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8309F474:
	// bl 0x83740858
	ctx.lr = 0x8309F478;
	sub_83740858(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83740858
	ctx.lr = 0x8309F480;
	sub_83740858(ctx, base);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r5,r3,110
	ctx.r5.s64 = ctx.r3.s64 * 110;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x8309f080
	ctx.lr = 0x8309F49C;
	sub_8309F080(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8309f688
	if (cr6.eq) goto loc_8309F688;
loc_8309F4AC:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830f4560
	ctx.lr = 0x8309F4C0;
	sub_830F4560(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8309F4CC:
	// bl 0x83740858
	ctx.lr = 0x8309F4D0;
	sub_83740858(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83740858
	ctx.lr = 0x8309F4D8;
	sub_83740858(ctx, base);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r5,r3,110
	ctx.r5.s64 = ctx.r3.s64 * 110;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x8309f080
	ctx.lr = 0x8309F4F4;
	sub_8309F080(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8309f688
	if (cr6.eq) goto loc_8309F688;
loc_8309F504:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830f4560
	ctx.lr = 0x8309F518;
	sub_830F4560(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8309F524:
	// bl 0x83740858
	ctx.lr = 0x8309F528;
	sub_83740858(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83740858
	ctx.lr = 0x8309F530;
	sub_83740858(ctx, base);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r5,r3,110
	ctx.r5.s64 = ctx.r3.s64 * 110;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x8309f080
	ctx.lr = 0x8309F54C;
	sub_8309F080(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8309f688
	if (cr6.eq) goto loc_8309F688;
loc_8309F55C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830f4560
	ctx.lr = 0x8309F570;
	sub_830F4560(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8309F57C:
	// bl 0x83740858
	ctx.lr = 0x8309F580;
	sub_83740858(ctx, base);
	// mulli r5,r3,60
	ctx.r5.s64 = ctx.r3.s64 * 60;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8309f080
	ctx.lr = 0x8309F594;
	sub_8309F080(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309f688
	if (cr6.eq) goto loc_8309F688;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8309ecb0
	ctx.lr = 0x8309F5B0;
	sub_8309ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309f5c0
	if (cr6.eq) goto loc_8309F5C0;
	// bl 0x830f3e48
	ctx.lr = 0x8309F5C0;
	sub_830F3E48(ctx, base);
loc_8309F5C0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6000
	ctx.r5.s64 = 6000;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830f4710
	ctx.lr = 0x8309F5D4;
	sub_830F4710(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8309F5E0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3000
	ctx.r5.s64 = 3000;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830f4710
	ctx.lr = 0x8309F5F4;
	sub_830F4710(ctx, base);
loc_8309F5F4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3000
	ctx.r5.s64 = 3000;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x830f4710
	ctx.lr = 0x8309F608;
	sub_830F4710(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8309F614:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3000
	ctx.r5.s64 = 3000;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830f4710
	ctx.lr = 0x8309F628;
	sub_830F4710(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8309F634:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3000
	ctx.r5.s64 = 3000;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830f4710
	ctx.lr = 0x8309F648;
	sub_830F4710(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3000
	ctx.r5.s64 = 3000;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x830f4710
	ctx.lr = 0x8309F65C;
	sub_830F4710(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8309F668:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8309ecb0
	ctx.lr = 0x8309F674;
	sub_8309ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309f688
	if (cr6.eq) goto loc_8309F688;
	// li r3,3000
	ctx.r3.s64 = 3000;
	// bl 0x830f3f98
	ctx.lr = 0x8309F688;
	sub_830F3F98(ctx, base);
loc_8309F688:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309F694"))) PPC_WEAK_FUNC(sub_8309F694);
PPC_FUNC_IMPL(__imp__sub_8309F694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309F698"))) PPC_WEAK_FUNC(sub_8309F698);
PPC_FUNC_IMPL(__imp__sub_8309F698) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8309F6A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x830fe3e0
	ctx.lr = 0x8309F6B8;
	sub_830FE3E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309f6d8
	if (cr6.eq) goto loc_8309F6D8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8309f1b8
	ctx.lr = 0x8309F6D0;
	sub_8309F1B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8309F6D8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309F6E4"))) PPC_WEAK_FUNC(sub_8309F6E4);
PPC_FUNC_IMPL(__imp__sub_8309F6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309F6E8"))) PPC_WEAK_FUNC(sub_8309F6E8);
PPC_FUNC_IMPL(__imp__sub_8309F6E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x8309f734
	if (cr6.lt) goto loc_8309F734;
	// beq cr6,0x8309f708
	if (cr6.eq) goto loc_8309F708;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8309F708:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 392);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r6,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r6.s64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// blr 
	return;
loc_8309F734:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309F740"))) PPC_WEAK_FUNC(sub_8309F740);
PPC_FUNC_IMPL(__imp__sub_8309F740) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// ld r8,16892(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 16892);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// std r8,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r8.u64);
	// ld r8,16892(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 16892);
	// stw r9,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// std r8,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r8.u64);
	// ld r8,16892(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 16892);
	// stw r9,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r9.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r10,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// std r8,64(r3)
	PPC_STORE_U64(ctx.r3.u32 + 64, ctx.r8.u64);
	// ld r11,16892(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + 16892);
	// std r11,88(r3)
	PPC_STORE_U64(ctx.r3.u32 + 88, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309F7B4"))) PPC_WEAK_FUNC(sub_8309F7B4);
PPC_FUNC_IMPL(__imp__sub_8309F7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309F7B8"))) PPC_WEAK_FUNC(sub_8309F7B8);
PPC_FUNC_IMPL(__imp__sub_8309F7B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x8309f7d0
	if (cr6.lt) goto loc_8309F7D0;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8309f7d4
	if (!cr6.gt) goto loc_8309F7D4;
loc_8309F7D0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8309F7D4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309F7DC"))) PPC_WEAK_FUNC(sub_8309F7DC);
PPC_FUNC_IMPL(__imp__sub_8309F7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309F7E0"))) PPC_WEAK_FUNC(sub_8309F7E0);
PPC_FUNC_IMPL(__imp__sub_8309F7E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309F7F4"))) PPC_WEAK_FUNC(sub_8309F7F4);
PPC_FUNC_IMPL(__imp__sub_8309F7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309F7F8"))) PPC_WEAK_FUNC(sub_8309F7F8);
PPC_FUNC_IMPL(__imp__sub_8309F7F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// stw r7,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r7.u32);
	// addi r9,r3,48
	ctx.r9.s64 = ctx.r3.s64 + 48;
	// stw r4,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r4.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r5,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r5.u32);
	// stw r6,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r6.u32);
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
loc_8309F814:
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r11,r9,-28
	ctx.r11.s64 = ctx.r9.s64 + -28;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_8309F824:
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8309f824
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8309F824;
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r9,r9,-24
	ctx.r9.s64 = ctx.r9.s64 + -24;
	// bne 0x8309f814
	if (!cr0.eq) goto loc_8309F814;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,-36
	ctx.r11.s64 = ctx.r1.s64 + -36;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8309F84C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8309f84c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8309F84C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309F85C"))) PPC_WEAK_FUNC(sub_8309F85C);
PPC_FUNC_IMPL(__imp__sub_8309F85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309F860"))) PPC_WEAK_FUNC(sub_8309F860);
PPC_FUNC_IMPL(__imp__sub_8309F860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// blt cr6,0x8309f888
	if (cr6.lt) goto loc_8309F888;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r4,68
	ctx.r11.s64 = ctx.r4.s64 + 68;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8309F878:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8309f878
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8309F878;
	// blr 
	return;
loc_8309F888:
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// li r11,6
	ctx.r11.s64 = 6;
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// addi r9,r3,-4
	ctx.r9.s64 = ctx.r3.s64 + -4;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
loc_8309F8A8:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8309f8a8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8309F8A8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309F8B8"))) PPC_WEAK_FUNC(sub_8309F8B8);
PPC_FUNC_IMPL(__imp__sub_8309F8B8) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
loc_8309F8E4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8309f8e4
	if (!cr6.eq) goto loc_8309F8E4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8309F908;
	sub_8259CC28(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r31,r11,26964
	ctx.r31.s64 = ctx.r11.s64 + 26964;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,-60
	ctx.r4.s64 = ctx.r31.s64 + -60;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82574d38
	ctx.lr = 0x8309F924;
	sub_82574D38(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8309f948
	if (cr6.eq) goto loc_8309F948;
	// addi r4,r31,-56
	ctx.r4.s64 = ctx.r31.s64 + -56;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82574d38
	ctx.lr = 0x8309F940;
	sub_82574D38(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8309f964
	if (cr6.eq) goto loc_8309F964;
loc_8309F948:
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82574d38
	ctx.lr = 0x8309F95C;
	sub_82574D38(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8309f99c
	if (cr6.eq) goto loc_8309F99C;
loc_8309F964:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8309f984
	if (cr6.lt) goto loc_8309F984;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8309F984;
	sub_825952B8(ctx, base);
loc_8309F984:
	// li r3,2
	ctx.r3.s64 = 2;
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
loc_8309F99C:
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82574d38
	ctx.lr = 0x8309F9B0;
	sub_82574D38(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x8309f9d8
	if (cr6.eq) goto loc_8309F9D8;
	// bl 0x8387e8e0
	ctx.lr = 0x8309F9C0;
	sub_8387E8E0(ctx, base);
	// li r3,6
	ctx.r3.s64 = 6;
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
loc_8309F9D8:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82574d38
	ctx.lr = 0x8309F9E8;
	sub_82574D38(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x8309fabc
	if (!cr6.eq) goto loc_8309FABC;
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82574d38
	ctx.lr = 0x8309FA04;
	sub_82574D38(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x8309fabc
	if (!cr6.eq) goto loc_8309FABC;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82574d38
	ctx.lr = 0x8309FA20;
	sub_82574D38(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x8309fa48
	if (cr6.eq) goto loc_8309FA48;
	// bl 0x8387e8e0
	ctx.lr = 0x8309FA30;
	sub_8387E8E0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
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
loc_8309FA48:
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82574d38
	ctx.lr = 0x8309FA58;
	sub_82574D38(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x8309fa9c
	if (!cr6.eq) goto loc_8309FA9C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82574d38
	ctx.lr = 0x8309FA74;
	sub_82574D38(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x8309fa9c
	if (!cr6.eq) goto loc_8309FA9C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8309FA84;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_8309FA9C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8309FAA4;
	sub_8387E8E0(ctx, base);
	// li r3,5
	ctx.r3.s64 = 5;
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
loc_8309FABC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8309FAC4;
	sub_8387E8E0(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
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

__attribute__((alias("__imp__sub_8309FADC"))) PPC_WEAK_FUNC(sub_8309FADC);
PPC_FUNC_IMPL(__imp__sub_8309FADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309FAE0"))) PPC_WEAK_FUNC(sub_8309FAE0);
PPC_FUNC_IMPL(__imp__sub_8309FAE0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8344cfa0
	ctx.lr = 0x8309FAF8;
	sub_8344CFA0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8309FB0C;
	sub_825952B8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
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

__attribute__((alias("__imp__sub_8309FB28"))) PPC_WEAK_FUNC(sub_8309FB28);
PPC_FUNC_IMPL(__imp__sub_8309FB28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,16(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stb r7,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r7.u8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309fb70
	if (cr6.eq) goto loc_8309FB70;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8309FB70:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bgt cr6,0x8309fb84
	if (cr6.gt) goto loc_8309FB84;
	// subf r11,r9,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r9.s64;
loc_8309FB84:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// lwzx r9,r9,r5
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
loc_8309FBA0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8309fba0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8309FBA0;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x8309fbc4
	if (cr6.gt) goto loc_8309FBC4;
	// stw r7,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r7.u32);
loc_8309FBC4:
	// addic. r11,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r11.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// bnelr 
	if (!cr0.eq) return;
	// stw r7,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309FBD8"))) PPC_WEAK_FUNC(sub_8309FBD8);
PPC_FUNC_IMPL(__imp__sub_8309FBD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8344cfa0
	sub_8344CFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309FBDC"))) PPC_WEAK_FUNC(sub_8309FBDC);
PPC_FUNC_IMPL(__imp__sub_8309FBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309FBE0"))) PPC_WEAK_FUNC(sub_8309FBE0);
PPC_FUNC_IMPL(__imp__sub_8309FBE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8309FBE8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,2340
	ctx.r10.s64 = 153354240;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r9,r10,37449
	ctx.r9.u64 = ctx.r10.u64 | 37449;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x8309fc18
	if (!cr6.lt) goto loc_8309FC18;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,15820
	ctx.r3.s64 = ctx.r11.s64 + 15820;
	// bl 0x831cc150
	ctx.lr = 0x8309FC18;
	sub_831CC150(ctx, base);
loc_8309FC18:
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bge cr6,0x8309fc28
	if (!cr6.lt) goto loc_8309FC28;
	// li r10,8
	ctx.r10.s64 = 8;
loc_8309FC28:
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// bge cr6,0x8309fc40
	if (!cr6.lt) goto loc_8309FC40;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8309fc40
	if (cr6.gt) goto loc_8309FC40;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_8309FC40:
	// li r27,2
	ctx.r27.s64 = 2;
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8309FC60;
	sub_82595718(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r8,r31,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r8,r3
	ctx.r10.u64 = ctx.r8.u64 + ctx.r3.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8309fca8
	if (cr6.eq) goto loc_8309FCA8;
loc_8309FC88:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8309fc98
	if (cr6.eq) goto loc_8309FC98;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
loc_8309FC98:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x8309fc88
	if (!cr6.eq) goto loc_8309FC88;
loc_8309FCA8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bgt cr6,0x8309fd2c
	if (cr6.gt) goto loc_8309FD2C;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8309fce0
	if (cr6.eq) goto loc_8309FCE0;
loc_8309FCC0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8309fcd0
	if (cr6.eq) goto loc_8309FCD0;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_8309FCD0:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x8309fcc0
	if (!cr6.eq) goto loc_8309FCC0;
loc_8309FCE0:
	// subf. r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x8309fd04
	if (cr0.eq) goto loc_8309FD04;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_8309FCF0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8309fcfc
	if (cr6.eq) goto loc_8309FCFC;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_8309FCFC:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8309fcf0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8309FCF0;
loc_8309FD04:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8309fdb8
	if (cr6.eq) goto loc_8309FDB8;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
loc_8309FD14:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309fd20
	if (cr6.eq) goto loc_8309FD20;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_8309FD20:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8309fd14
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8309FD14;
	// b 0x8309fdb8
	goto loc_8309FDB8;
loc_8309FD2C:
	// rlwinm r7,r29,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8309fd5c
	if (cr6.eq) goto loc_8309FD5C;
loc_8309FD3C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8309fd4c
	if (cr6.eq) goto loc_8309FD4C;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
loc_8309FD4C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x8309fd3c
	if (!cr6.eq) goto loc_8309FD3C;
loc_8309FD5C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8309fd94
	if (cr6.eq) goto loc_8309FD94;
loc_8309FD74:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8309fd84
	if (cr6.eq) goto loc_8309FD84;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_8309FD84:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x8309fd74
	if (!cr6.eq) goto loc_8309FD74;
loc_8309FD94:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8309fdb8
	if (cr6.eq) goto loc_8309FDB8;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8309FDA4:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8309fdb0
	if (cr6.eq) goto loc_8309FDB0;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_8309FDB0:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8309fda4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8309FDA4;
loc_8309FDB8:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8309fdd0
	if (cr6.eq) goto loc_8309FDD0;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x8309FDD0;
	sub_825952B8(ctx, base);
loc_8309FDD0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309FDE8"))) PPC_WEAK_FUNC(sub_8309FDE8);
PPC_FUNC_IMPL(__imp__sub_8309FDE8) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x838a2b30
	ctx.lr = 0x8309FE04;
	sub_838A2B30(ctx, base);
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

__attribute__((alias("__imp__sub_8309FE1C"))) PPC_WEAK_FUNC(sub_8309FE1C);
PPC_FUNC_IMPL(__imp__sub_8309FE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8309FE20"))) PPC_WEAK_FUNC(sub_8309FE20);
PPC_FUNC_IMPL(__imp__sub_8309FE20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8309FE28;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8309fe50
	if (cr6.gt) goto loc_8309FE50;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8309fbe0
	ctx.lr = 0x8309FE50;
	sub_8309FBE0(ctx, base);
loc_8309FE50:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x8309fe6c
	if (cr6.gt) goto loc_8309FE6C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_8309FE6C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8309fea0
	if (!cr6.eq) goto loc_8309FEA0;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8309FE98;
	sub_82595718(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stwx r3,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r3.u32);
loc_8309FEA0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8309fecc
	if (cr6.eq) goto loc_8309FECC;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8309FEC0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8309fec0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8309FEC0;
loc_8309FECC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309FEE0"))) PPC_WEAK_FUNC(sub_8309FEE0);
PPC_FUNC_IMPL(__imp__sub_8309FEE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r5,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r5.u8);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// bl 0x8309fe20
	ctx.lr = 0x8309FF10;
	sub_8309FE20(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309FF20"))) PPC_WEAK_FUNC(sub_8309FF20);
PPC_FUNC_IMPL(__imp__sub_8309FF20) {
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
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// ld r11,17100(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 17100);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// blt cr6,0x8309ff88
	if (cr6.lt) goto loc_8309FF88;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x8309ff88
	if (!cr6.lt) goto loc_8309FF88;
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x8309ff88
	if (cr6.lt) goto loc_8309FF88;
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x8309ff8c
	if (cr6.lt) goto loc_8309FF8C;
loc_8309FF88:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8309FF8C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8309ffe4
	if (cr6.eq) goto loc_8309FFE4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// std r4,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r4.u64);
	// beq cr6,0x8309ffe4
	if (cr6.eq) goto loc_8309FFE4;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82a2b388
	ctx.lr = 0x8309FFB0;
	sub_82A2B388(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x8309FFC4;
	sub_82A0C738(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82a16c88
	ctx.lr = 0x8309FFD4;
	sub_82A16C88(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
loc_8309FFE4:
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

__attribute__((alias("__imp__sub_8309FFF8"))) PPC_WEAK_FUNC(sub_8309FFF8);
PPC_FUNC_IMPL(__imp__sub_8309FFF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r9,r3,36
	ctx.r9.s64 = ctx.r3.s64 + 36;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r8,255
	ctx.r8.s64 = 255;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r7,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r7.u32);
	// stw r8,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r8.u32);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// sth r6,44(r3)
	PPC_STORE_U16(ctx.r3.u32 + 44, ctx.r6.u16);
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// stw r7,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r7.u32);
	// stw r8,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r8.u32);
loc_830A003C:
	// stfs f0,-12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x830a003c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830A003C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A004C"))) PPC_WEAK_FUNC(sub_830A004C);
PPC_FUNC_IMPL(__imp__sub_830A004C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A0050"))) PPC_WEAK_FUNC(sub_830A0050);
PPC_FUNC_IMPL(__imp__sub_830A0050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,284(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830a0064
	if (!cr6.eq) goto loc_830A0064;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_830A0064:
	// b 0x830ac018
	sub_830AC018(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A0068"))) PPC_WEAK_FUNC(sub_830A0068);
PPC_FUNC_IMPL(__imp__sub_830A0068) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// b 0x830ac608
	sub_830AC608(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A0070"))) PPC_WEAK_FUNC(sub_830A0070);
PPC_FUNC_IMPL(__imp__sub_830A0070) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830A0078;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8312dce0
	ctx.lr = 0x830A008C;
	sub_8312DCE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x830a83b0
	ctx.lr = 0x830A009C;
	sub_830A83B0(ctx, base);
	// lhz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplwi cr6,r26,65534
	cr6.compare<uint32_t>(ctx.r26.u32, 65534, xer);
	// bne cr6,0x830a00c4
	if (!cr6.eq) goto loc_830A00C4;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,65534
	cr6.compare<uint32_t>(ctx.r11.u32, 65534, xer);
	// bne cr6,0x830a00c4
	if (!cr6.eq) goto loc_830A00C4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830A00C4:
	// addi r31,r31,320
	ctx.r31.s64 = ctx.r31.s64 + 320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830ab880
	ctx.lr = 0x830A00D0;
	sub_830AB880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a0138
	if (cr6.eq) goto loc_830A0138;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830ab850
	ctx.lr = 0x830A00E8;
	sub_830AB850(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830ab850
	ctx.lr = 0x830A00F8;
	sub_830AB850(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830ab850
	ctx.lr = 0x830A0108;
	sub_830AB850(ctx, base);
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// ble cr6,0x830a0118
	if (!cr6.gt) goto loc_830A0118;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_830A0118:
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// blt cr6,0x830a0138
	if (cr6.lt) goto loc_830A0138;
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, xer);
	// blt cr6,0x830a0138
	if (cr6.lt) goto loc_830A0138;
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bge cr6,0x830a013c
	if (!cr6.lt) goto loc_830A013C;
loc_830A0138:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830A013C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A0144"))) PPC_WEAK_FUNC(sub_830A0144);
PPC_FUNC_IMPL(__imp__sub_830A0144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A0148"))) PPC_WEAK_FUNC(sub_830A0148);
PPC_FUNC_IMPL(__imp__sub_830A0148) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830A0150;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x830a6bf8
	ctx.lr = 0x830A0168;
	sub_830A6BF8(ctx, base);
	// bl 0x83578d58
	ctx.lr = 0x830A016C;
	sub_83578D58(ctx, base);
	// bl 0x830a6ec8
	ctx.lr = 0x830A0170;
	sub_830A6EC8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,4
	ctx.r8.s64 = 4;
loc_830A0184:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x830a0184
	if (cr6.lt) goto loc_830A0184;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x830a01e4
	if (!cr6.eq) goto loc_830A01E4;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
loc_830A01AC:
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
loc_830A01BC:
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// beq cr6,0x830a02c8
	if (cr6.eq) goto loc_830A02C8;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x830a0254
	if (cr6.eq) goto loc_830A0254;
	// bl 0x830f3918
	ctx.lr = 0x830A01E0;
	sub_830F3918(ctx, base);
	// b 0x830a0258
	goto loc_830A0258;
loc_830A01E4:
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// bne cr6,0x830a01fc
	if (!cr6.eq) goto loc_830A01FC;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x830a023c
	if (cr6.eq) goto loc_830A023C;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// b 0x830a01ac
	goto loc_830A01AC;
loc_830A01FC:
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// bne cr6,0x830a0218
	if (!cr6.eq) goto loc_830A0218;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x830a023c
	if (!cr6.eq) goto loc_830A023C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// b 0x830a01ac
	goto loc_830A01AC;
loc_830A0218:
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// beq cr6,0x830a0228
	if (cr6.eq) goto loc_830A0228;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
loc_830A0228:
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x830a01ac
	if (!cr6.eq) goto loc_830A01AC;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// b 0x830a01ac
	goto loc_830A01AC;
loc_830A023C:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bne cr6,0x830a01ac
	if (!cr6.eq) goto loc_830A01AC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830A0254:
	// bl 0x830f3888
	ctx.lr = 0x830A0258;
	sub_830F3888(ctx, base);
loc_830A0258:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830a02c4
	if (!cr6.eq) goto loc_830A02C4;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// blt cr6,0x830a0278
	if (cr6.lt) goto loc_830A0278;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x830a027c
	if (!cr6.eq) goto loc_830A027C;
loc_830A0278:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_830A027C:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bgt cr6,0x830a0290
	if (cr6.gt) goto loc_830A0290;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x830a0294
	if (!cr6.eq) goto loc_830A0294;
loc_830A0290:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_830A0294:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x830a01bc
	if (cr6.lt) goto loc_830A01BC;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830A02C4:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_830A02C8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A02DC"))) PPC_WEAK_FUNC(sub_830A02DC);
PPC_FUNC_IMPL(__imp__sub_830A02DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A02E0"))) PPC_WEAK_FUNC(sub_830A02E0);
PPC_FUNC_IMPL(__imp__sub_830A02E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x830A02E8;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x8309fff8
	ctx.lr = 0x830A02FC;
	sub_8309FFF8(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r9.u32);
loc_830A0314:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x830a0314
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830A0314;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r26,32
	ctx.r10.s64 = ctx.r26.s64 + 32;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_830A0330:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x830a0330
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830A0330;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830A0350;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a0438
	if (cr6.eq) goto loc_830A0438;
	// addi r29,r26,20
	ctx.r29.s64 = ctx.r26.s64 + 20;
	// li r23,1
	ctx.r23.s64 = 1;
loc_830A036C:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830A038C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830a0428
	if (cr6.eq) goto loc_830A0428;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a504f8
	ctx.lr = 0x830A03A0;
	sub_82A504F8(ctx, base);
	// stfs f1,-16(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + -16, temp.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830A03C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a0424
	if (cr6.eq) goto loc_830A0424;
loc_830A03C8:
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830A03E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830a0404
	if (cr6.eq) goto loc_830A0404;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x825832e0
	ctx.lr = 0x830A03FC;
	sub_825832E0(ctx, base);
	// slw r11,r23,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r3.u8 & 0x3F));
	// or r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 | ctx.r30.u64;
loc_830A0404:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830A041C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x830a03c8
	if (cr6.lt) goto loc_830A03C8;
loc_830A0424:
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
loc_830A0428:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, xer);
	// blt cr6,0x830a036c
	if (cr6.lt) goto loc_830A036C;
loc_830A0438:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A0444"))) PPC_WEAK_FUNC(sub_830A0444);
PPC_FUNC_IMPL(__imp__sub_830A0444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A0448"))) PPC_WEAK_FUNC(sub_830A0448);
PPC_FUNC_IMPL(__imp__sub_830A0448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x830a6b98
	ctx.lr = 0x830A0468;
	sub_830A6B98(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a0480
	if (cr6.eq) goto loc_830A0480;
	// bl 0x82416268
	ctx.lr = 0x830A047C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830A0480:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A0498"))) PPC_WEAK_FUNC(sub_830A0498);
PPC_FUNC_IMPL(__imp__sub_830A0498) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x830A04A0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// srawi. r22,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r22.s64 = ctx.r9.s32 >> 4;
	cr0.compare<int32_t>(ctx.r22.s32, 0, xer);
	// beq 0x830a0544
	if (cr0.eq) goto loc_830A0544;
	// li r27,0
	ctx.r27.s64 = 0;
loc_830A04D4:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r29,r10,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x830a2d48
	ctx.lr = 0x830A0528;
	sub_830A2D48(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830a0550
	if (!cr6.eq) goto loc_830A0550;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// cmplw cr6,r23,r22
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r22.u32, xer);
	// blt cr6,0x830a04d4
	if (cr6.lt) goto loc_830A04D4;
loc_830A0544:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830A0550:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A055C"))) PPC_WEAK_FUNC(sub_830A055C);
PPC_FUNC_IMPL(__imp__sub_830A055C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A0560"))) PPC_WEAK_FUNC(sub_830A0560);
PPC_FUNC_IMPL(__imp__sub_830A0560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x830A0568;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r20,0
	ctx.r20.s64 = 0;
	// srawi. r19,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r19.s64 = ctx.r9.s32 >> 4;
	cr0.compare<int32_t>(ctx.r19.s32, 0, xer);
	// beq 0x830a067c
	if (cr0.eq) goto loc_830A067C;
	// addi r27,r30,456
	ctx.r27.s64 = ctx.r30.s64 + 456;
	// addi r24,r31,12
	ctx.r24.s64 = ctx.r31.s64 + 12;
	// addi r23,r27,12
	ctx.r23.s64 = ctx.r27.s64 + 12;
	// addi r29,r30,420
	ctx.r29.s64 = ctx.r30.s64 + 420;
	// li r26,0
	ctx.r26.s64 = 0;
loc_830A05B0:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// li r10,6
	ctx.r10.s64 = 6;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r24,-4
	ctx.r3.s64 = ctx.r24.s64 + -4;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r28,r23,-4
	ctx.r28.s64 = ctx.r23.s64 + -4;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r4,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r4.u32);
	// lbz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r9,8(r27)
	PPC_STORE_U8(ctx.r27.u32 + 8, ctx.r9.u8);
loc_830A0610:
	// lwzu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r3.u32 = ea;
	// stwu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r28.u32 = ea;
	// bdnz 0x830a0610
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830A0610;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830a2d48
	ctx.lr = 0x830A0630;
	sub_830A2D48(ctx, base);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 + 12;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// stw r8,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r8.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lbz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stb r7,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r7.u8);
loc_830A0654:
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x830a0654
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830A0654;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830a067c
	if (!cr6.eq) goto loc_830A067C;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// cmplw cr6,r20,r19
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r19.u32, xer);
	// blt cr6,0x830a05b0
	if (cr6.lt) goto loc_830A05B0;
loc_830A067C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A0684"))) PPC_WEAK_FUNC(sub_830A0684);
PPC_FUNC_IMPL(__imp__sub_830A0684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A0688"))) PPC_WEAK_FUNC(sub_830A0688);
PPC_FUNC_IMPL(__imp__sub_830A0688) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x830A0690;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// srawi. r31,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r31.s64 = ctx.r9.s32 >> 4;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x830a0730
	if (cr0.eq) goto loc_830A0730;
	// li r30,0
	ctx.r30.s64 = 0;
loc_830A06C4:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r26,r10,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r11,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r27,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x830a2d48
	ctx.lr = 0x830A0718;
	sub_830A2D48(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// or r29,r3,r11
	ctx.r29.u64 = ctx.r3.u64 | ctx.r11.u64;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x830a06c4
	if (!cr0.eq) goto loc_830A06C4;
loc_830A0730:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

