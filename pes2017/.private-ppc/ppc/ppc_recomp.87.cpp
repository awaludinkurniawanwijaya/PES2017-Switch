#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82909FF0"))) PPC_WEAK_FUNC(sub_82909FF0);
PPC_FUNC_IMPL(__imp__sub_82909FF0) {
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
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82908448
	ctx.lr = 0x8290A014;
	sub_82908448(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// li r3,89
	ctx.r3.s64 = 89;
	// lfs f0,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8290a068
	if (!cr6.gt) goto loc_8290A068;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// lfs f0,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// bge cr6,0x8290a074
	if (!cr6.lt) goto loc_8290A074;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
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
loc_8290A068:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
loc_8290A074:
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

__attribute__((alias("__imp__sub_8290A088"))) PPC_WEAK_FUNC(sub_8290A088);
PPC_FUNC_IMPL(__imp__sub_8290A088) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82908448
	ctx.lr = 0x8290A0B4;
	sub_82908448(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// li r5,89
	ctx.r5.s64 = 89;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829088a0
	ctx.lr = 0x8290A0CC;
	sub_829088A0(ctx, base);
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

__attribute__((alias("__imp__sub_8290A0E8"))) PPC_WEAK_FUNC(sub_8290A0E8);
PPC_FUNC_IMPL(__imp__sub_8290A0E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290A0F0"))) PPC_WEAK_FUNC(sub_8290A0F0);
PPC_FUNC_IMPL(__imp__sub_8290A0F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82908498
	sub_82908498(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290A0F4"))) PPC_WEAK_FUNC(sub_8290A0F4);
PPC_FUNC_IMPL(__imp__sub_8290A0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8290A0F8"))) PPC_WEAK_FUNC(sub_8290A0F8);
PPC_FUNC_IMPL(__imp__sub_8290A0F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,255
	ctx.r8.s64 = 255;
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r11.u8);
	// stb r11,37(r3)
	PPC_STORE_U8(ctx.r3.u32 + 37, ctx.r11.u8);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stb r9,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r9.u8);
	// stw r8,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r8.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290A138"))) PPC_WEAK_FUNC(sub_8290A138);
PPC_FUNC_IMPL(__imp__sub_8290A138) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8290A140;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x8290a160
	if (!cr6.lt) goto loc_8290A160;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8290a188
	goto loc_8290A188;
loc_8290A160:
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bge cr6,0x8290a170
	if (!cr6.lt) goto loc_8290A170;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8290a188
	goto loc_8290A188;
loc_8290A170:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r4
	xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// eqv r9,r11,r4
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r4.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r31,r7,31
	ctx.r31.u64 = ctx.r7.u32 & 0x1;
loc_8290A188:
	// lis r28,-31763
	ctx.r28.s64 = -2081619968;
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x8290A194;
	sub_82A0C760(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x8290A1A0;
	sub_82A0C710(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82908448
	ctx.lr = 0x8290A1B4;
	sub_82908448(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x8290a1d4
	if (cr6.lt) goto loc_8290A1D4;
	// bne cr6,0x8290a1fc
	if (!cr6.eq) goto loc_8290A1FC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8290A1D4:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// beq cr6,0x8290a1fc
	if (cr6.eq) goto loc_8290A1FC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8290a1fc
	if (!cr6.gt) goto loc_8290A1FC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
loc_8290A1FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290A204"))) PPC_WEAK_FUNC(sub_8290A204);
PPC_FUNC_IMPL(__imp__sub_8290A204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8290A208"))) PPC_WEAK_FUNC(sub_8290A208);
PPC_FUNC_IMPL(__imp__sub_8290A208) {
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
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8290a258
	if (cr6.eq) goto loc_8290A258;
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82908448
	ctx.lr = 0x8290A238;
	sub_82908448(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// li r3,89
	ctx.r3.s64 = 89;
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
loc_8290A258:
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

__attribute__((alias("__imp__sub_8290A270"))) PPC_WEAK_FUNC(sub_8290A270);
PPC_FUNC_IMPL(__imp__sub_8290A270) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8290A278;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x8290a298
	if (!cr6.lt) goto loc_8290A298;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8290a2c0
	goto loc_8290A2C0;
loc_8290A298:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x8290a2a8
	if (!cr6.lt) goto loc_8290A2A8;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8290a2c0
	goto loc_8290A2C0;
loc_8290A2A8:
	// li r10,22
	ctx.r10.s64 = 22;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r8,r10,r11
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r31,r6,31
	ctx.r31.u64 = ctx.r6.u32 & 0x1;
loc_8290A2C0:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r27,192(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// bl 0x82a0c710
	ctx.lr = 0x8290A2D4;
	sub_82A0C710(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a33940
	ctx.lr = 0x8290A2E4;
	sub_82A33940(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8290A2E8:
	// addi r10,r11,4729
	ctx.r10.s64 = ctx.r11.s64 + 4729;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x8290a310
	if (cr6.eq) goto loc_8290A310;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// blt cr6,0x8290a2e8
	if (cr6.lt) goto loc_8290A2E8;
	// li r11,255
	ctx.r11.s64 = 255;
loc_8290A310:
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f2,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r30,52
	ctx.r8.s64 = ctx.r30.s64 + 52;
	// lfs f1,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// slw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r6,20(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// or r10,r9,r3
	ctx.r10.u64 = ctx.r9.u64 | ctx.r3.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82a33d30
	ctx.lr = 0x8290A340;
	sub_82A33D30(ctx, base);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8290a358
	if (cr6.lt) goto loc_8290A358;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8290a35c
	if (cr6.lt) goto loc_8290A35C;
loc_8290A358:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8290A35C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r10,89
	ctx.r10.s64 = 89;
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290A378"))) PPC_WEAK_FUNC(sub_8290A378);
PPC_FUNC_IMPL(__imp__sub_8290A378) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8290A380;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x8290a3a4
	if (!cr6.lt) goto loc_8290A3A4;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8290a3cc
	goto loc_8290A3CC;
loc_8290A3A4:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x8290a3b4
	if (!cr6.lt) goto loc_8290A3B4;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8290a3cc
	goto loc_8290A3CC;
loc_8290A3B4:
	// li r10,22
	ctx.r10.s64 = 22;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r8,r10,r11
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r31,r6,31
	ctx.r31.u64 = ctx.r6.u32 & 0x1;
loc_8290A3CC:
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r27,292(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// bl 0x82a0c710
	ctx.lr = 0x8290A3E0;
	sub_82A0C710(ctx, base);
	// li r26,1
	ctx.r26.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// mulli r28,r31,11
	ctx.r28.s64 = ctx.r31.s64 * 11;
loc_8290A3EC:
	// add r31,r28,r29
	ctx.r31.u64 = ctx.r28.u64 + ctx.r29.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a0c788
	ctx.lr = 0x8290A3FC;
	sub_82A0C788(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x8290a410
	if (cr6.lt) goto loc_8290A410;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8290a414
	if (cr6.lt) goto loc_8290A414;
loc_8290A410:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8290A414:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290a434
	if (cr6.eq) goto loc_8290A434;
	// add r11,r31,r27
	ctx.r11.u64 = ctx.r31.u64 + ctx.r27.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x8290a438
	goto loc_8290A438;
loc_8290A434:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8290A438:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290a450
	if (cr6.eq) goto loc_8290A450;
	// lwz r11,1396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1396);
	// cmpwi cr6,r11,42
	cr6.compare<int32_t>(ctx.r11.s32, 42, xer);
	// beq cr6,0x8290a460
	if (cr6.eq) goto loc_8290A460;
loc_8290A450:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,11
	cr6.compare<int32_t>(ctx.r29.s32, 11, xer);
	// blt cr6,0x8290a3ec
	if (cr6.lt) goto loc_8290A3EC;
	// b 0x8290a464
	goto loc_8290A464;
loc_8290A460:
	// li r26,0
	ctx.r26.s64 = 0;
loc_8290A464:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290a488
	if (!cr6.eq) goto loc_8290A488;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r24)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 28, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8290A488:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82908498
	ctx.lr = 0x8290A498;
	sub_82908498(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290A4A0"))) PPC_WEAK_FUNC(sub_8290A4A0);
PPC_FUNC_IMPL(__imp__sub_8290A4A0) {
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
	ctx.lr = 0x8290A4A8;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x8290a4d0
	if (!cr6.lt) goto loc_8290A4D0;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// b 0x8290a4f8
	goto loc_8290A4F8;
loc_8290A4D0:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x8290a4e0
	if (!cr6.lt) goto loc_8290A4E0;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// b 0x8290a4f8
	goto loc_8290A4F8;
loc_8290A4E0:
	// li r10,22
	ctx.r10.s64 = 22;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r8,r10,r11
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r9,r6,31
	ctx.r9.u64 = ctx.r6.u32 & 0x1;
loc_8290A4F8:
	// lis r27,-31763
	ctx.r27.s64 = -2081619968;
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lwz r3,-3564(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// lwz r26,292(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// blt cr6,0x8290a51c
	if (cr6.lt) goto loc_8290A51C;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x8290a520
	if (cr6.lt) goto loc_8290A520;
loc_8290A51C:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_8290A520:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8290a724
	if (!cr6.eq) goto loc_8290A724;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bgt cr6,0x8290a7bc
	if (cr6.gt) goto loc_8290A7BC;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8290a63c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8290A63C;
	// bdzf 4*cr6+eq,0x8290a68c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8290A68C;
	// bne cr6,0x8290a6f0
	if (!cr6.eq) goto loc_8290A6F0;
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// mulli r30,r9,11
	ctx.r30.s64 = ctx.r9.s64 * 11;
loc_8290A558:
	// add. r4,r30,r31
	ctx.r4.u64 = ctx.r30.u64 + ctx.r31.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt 0x8290a56c
	if (cr0.lt) goto loc_8290A56C;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8290a570
	if (cr6.lt) goto loc_8290A570;
loc_8290A56C:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8290A570:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290a590
	if (cr6.eq) goto loc_8290A590;
	// add r11,r4,r26
	ctx.r11.u64 = ctx.r4.u64 + ctx.r26.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x8290a594
	goto loc_8290A594;
loc_8290A590:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8290A594:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290a5b4
	if (cr6.eq) goto loc_8290A5B4;
	// bl 0x82a0c788
	ctx.lr = 0x8290A5A4;
	sub_82A0C788(ctx, base);
	// lwz r11,1396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1396);
	// cmpwi cr6,r11,42
	cr6.compare<int32_t>(ctx.r11.s32, 42, xer);
	// beq cr6,0x8290a5c4
	if (cr6.eq) goto loc_8290A5C4;
	// lwz r3,-3564(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
loc_8290A5B4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// blt cr6,0x8290a558
	if (cr6.lt) goto loc_8290A558;
	// b 0x8290a5c8
	goto loc_8290A5C8;
loc_8290A5C4:
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
loc_8290A5C8:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290a7bc
	if (cr6.eq) goto loc_8290A7BC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82a38be0
	ctx.lr = 0x8290A5E4;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290a7bc
	if (cr6.eq) goto loc_8290A7BC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82a38db8
	ctx.lr = 0x8290A600;
	sub_82A38DB8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,21712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21712);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// blt cr6,0x8290a7bc
	if (cr6.lt) goto loc_8290A7BC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// bl 0x82a38db8
	ctx.lr = 0x8290A620;
	sub_82A38DB8(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x8290a7bc
	if (!cr6.lt) goto loc_8290A7BC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8290A63C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82a38be0
	ctx.lr = 0x8290A64C;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290a6dc
	if (cr6.eq) goto loc_8290A6DC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// bl 0x82a38db8
	ctx.lr = 0x8290A668;
	sub_82A38DB8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,21712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21712);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8290a6dc
	if (cr6.lt) goto loc_8290A6DC;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8290A68C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82a38be0
	ctx.lr = 0x8290A69C;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290a6dc
	if (cr6.eq) goto loc_8290A6DC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// bl 0x82a38db8
	ctx.lr = 0x8290A6B8;
	sub_82A38DB8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,21712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21712);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8290a6dc
	if (cr6.lt) goto loc_8290A6DC;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8290a7bc
	if (cr6.lt) goto loc_8290A7BC;
loc_8290A6DC:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8290A6F0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8290a704
	if (cr6.lt) goto loc_8290A704;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8290a708
	if (cr6.lt) goto loc_8290A708;
loc_8290A704:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8290A708:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290a7bc
	if (!cr6.eq) goto loc_8290A7BC;
	// stw r24,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r24.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8290A724:
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8290a738
	if (!cr6.gt) goto loc_8290A738;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r11.u32);
loc_8290A738:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 28, temp.u32);
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// bl 0x82a38db8
	ctx.lr = 0x8290A754;
	sub_82A38DB8(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,-24912(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8290a7b4
	if (cr6.gt) goto loc_8290A7B4;
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x8290a7a0
	if (cr6.gt) goto loc_8290A7A0;
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x8290a7a0
	if (cr6.gt) goto loc_8290A7A0;
	// stw r24,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r24.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8290A794;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8290A7A0:
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8290a7b4
	if (!cr6.gt) goto loc_8290A7B4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r11.u32);
loc_8290A7B4:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
loc_8290A7BC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290A7C8"))) PPC_WEAK_FUNC(sub_8290A7C8);
PPC_FUNC_IMPL(__imp__sub_8290A7C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8290A7D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x8290a7f0
	if (!cr6.lt) goto loc_8290A7F0;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8290a818
	goto loc_8290A818;
loc_8290A7F0:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x8290a800
	if (!cr6.lt) goto loc_8290A800;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8290a818
	goto loc_8290A818;
loc_8290A800:
	// li r10,22
	ctx.r10.s64 = 22;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r8,r10,r11
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r30,r6,31
	ctx.r30.u64 = ctx.r6.u32 & 0x1;
loc_8290A818:
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-3564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x8290A828;
	sub_82A0C710(ctx, base);
	// lwz r10,-3564(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// addi r31,r28,52
	ctx.r31.s64 = ctx.r28.s64 + 52;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lwz r3,192(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	// blt cr6,0x8290a850
	if (cr6.lt) goto loc_8290A850;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8290a854
	if (cr6.lt) goto loc_8290A854;
loc_8290A850:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8290A854:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290a904
	if (!cr6.eq) goto loc_8290A904;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a33940
	ctx.lr = 0x8290A868;
	sub_82A33940(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8290A86C:
	// addi r10,r11,4729
	ctx.r10.s64 = ctx.r11.s64 + 4729;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x8290a894
	if (cr6.eq) goto loc_8290A894;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// blt cr6,0x8290a86c
	if (cr6.lt) goto loc_8290A86C;
	// li r11,255
	ctx.r11.s64 = 255;
loc_8290A894:
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f2,28(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f1,32(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// slw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r6,20(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// or r10,r8,r3
	ctx.r10.u64 = ctx.r8.u64 | ctx.r3.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a33d30
	ctx.lr = 0x8290A8C0;
	sub_82A33D30(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8290a8d8
	if (cr6.lt) goto loc_8290A8D8;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8290a8dc
	if (cr6.lt) goto loc_8290A8DC;
loc_8290A8D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8290A8DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290a904
	if (cr6.eq) goto loc_8290A904;
	// bl 0x83740858
	ctx.lr = 0x8290A8EC;
	sub_83740858(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r3,60(r28)
	PPC_STORE_U32(ctx.r28.u32 + 60, ctx.r3.u32);
	// li r3,89
	ctx.r3.s64 = 89;
	// stw r11,64(r28)
	PPC_STORE_U32(ctx.r28.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8290A904:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290A910"))) PPC_WEAK_FUNC(sub_8290A910);
PPC_FUNC_IMPL(__imp__sub_8290A910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8290A918;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8290a9ec
	if (!cr6.eq) goto loc_8290A9EC;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82a38be0
	ctx.lr = 0x8290A944;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290a9ec
	if (cr6.eq) goto loc_8290A9EC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r29,132(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a22b40
	ctx.lr = 0x8290A964;
	sub_82A22B40(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x8290a9ec
	if (!cr6.eq) goto loc_8290A9EC;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x8290a984
	if (!cr6.lt) goto loc_8290A984;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8290a9ac
	goto loc_8290A9AC;
loc_8290A984:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x8290a994
	if (!cr6.lt) goto loc_8290A994;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8290a9ac
	goto loc_8290A9AC;
loc_8290A994:
	// li r10,22
	ctx.r10.s64 = 22;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r8,r10,r11
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r30,r6,31
	ctx.r30.u64 = ctx.r6.u32 & 0x1;
loc_8290A9AC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a22b40
	ctx.lr = 0x8290A9B8;
	sub_82A22B40(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// bne cr6,0x8290a9ec
	if (!cr6.eq) goto loc_8290A9EC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a22b40
	ctx.lr = 0x8290A9D0;
	sub_82A22B40(ctx, base);
	// ld r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 4);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82a2b388
	ctx.lr = 0x8290A9DC;
	sub_82A2B388(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83740858
	ctx.lr = 0x8290A9E4;
	sub_83740858(ctx, base);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
loc_8290A9EC:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8290aa20
	if (!cr6.gt) goto loc_8290AA20;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82a38be0
	ctx.lr = 0x8290AA08;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290aa1c
	if (cr6.eq) goto loc_8290AA1C;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8290AA1C:
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_8290AA20:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8290aa40
	if (!cr6.eq) goto loc_8290AA40;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8290AA40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8290AA40:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82908498
	ctx.lr = 0x8290AA50;
	sub_82908498(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290AA58"))) PPC_WEAK_FUNC(sub_8290AA58);
PPC_FUNC_IMPL(__imp__sub_8290AA58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8290AA60;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x8290aa80
	if (!cr6.lt) goto loc_8290AA80;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8290aaa8
	goto loc_8290AAA8;
loc_8290AA80:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x8290aa90
	if (!cr6.lt) goto loc_8290AA90;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8290aaa8
	goto loc_8290AAA8;
loc_8290AA90:
	// li r10,22
	ctx.r10.s64 = 22;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r8,r10,r11
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r30,r6,31
	ctx.r30.u64 = ctx.r6.u32 & 0x1;
loc_8290AAA8:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r28,12(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r27,192(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// bl 0x82a0c710
	ctx.lr = 0x8290AAC4;
	sub_82A0C710(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a33940
	ctx.lr = 0x8290AAD4;
	sub_82A33940(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8290AADC:
	// addi r10,r11,4729
	ctx.r10.s64 = ctx.r11.s64 + 4729;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x8290ab60
	if (cr6.eq) goto loc_8290AB60;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// blt cr6,0x8290aadc
	if (cr6.lt) goto loc_8290AADC;
	// li r29,255
	ctx.r29.s64 = 255;
loc_8290AB04:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82908448
	ctx.lr = 0x8290AB18;
	sub_82908448(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f2,28(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// slw r10,r11,r29
	ctx.r10.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r29.u8 & 0x3F));
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// or r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 | ctx.r27.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r26,52
	ctx.r3.s64 = ctx.r26.s64 + 52;
	// bl 0x82a33d30
	ctx.lr = 0x8290AB44;
	sub_82A33D30(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r4,57(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 57);
	// bl 0x82a407e0
	ctx.lr = 0x8290AB50;
	sub_82A407E0(ctx, base);
	// stfs f1,56(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r26.u32 + 56, temp.u32);
	// li r3,89
	ctx.r3.s64 = 89;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8290AB60:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x8290ab04
	goto loc_8290AB04;
}

__attribute__((alias("__imp__sub_8290AB68"))) PPC_WEAK_FUNC(sub_8290AB68);
PPC_FUNC_IMPL(__imp__sub_8290AB68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8290AB94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
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

__attribute__((alias("__imp__sub_8290ABBC"))) PPC_WEAK_FUNC(sub_8290ABBC);
PPC_FUNC_IMPL(__imp__sub_8290ABBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8290ABC0"))) PPC_WEAK_FUNC(sub_8290ABC0);
PPC_FUNC_IMPL(__imp__sub_8290ABC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8290ABC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31763
	ctx.r28.s64 = -2081619968;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// lwz r11,292(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// lwz r10,4460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4460);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x8290ac70
	if (!cr6.eq) goto loc_8290AC70;
	// lwz r10,5356(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5356);
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// bne cr6,0x8290ac70
	if (!cr6.eq) goto loc_8290AC70;
	// lwz r10,5760(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5760);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x8290ac0c
	if (cr6.lt) goto loc_8290AC0C;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x8290ac10
	if (cr6.lt) goto loc_8290AC10;
loc_8290AC0C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8290AC10:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8290ac28
	if (!cr6.eq) goto loc_8290AC28;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8290AC28:
	// addi r31,r11,5756
	ctx.r31.s64 = ctx.r11.s64 + 5756;
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x8290ac38
	goto loc_8290AC38;
loc_8290AC34:
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
loc_8290AC38:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a0c760
	ctx.lr = 0x8290AC40;
	sub_82A0C760(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,30
	cr6.compare<int32_t>(ctx.r11.s32, 30, xer);
	// beq cr6,0x8290ac58
	if (cr6.eq) goto loc_8290AC58;
	// cmpwi cr6,r11,34
	cr6.compare<int32_t>(ctx.r11.s32, 34, xer);
	// bne cr6,0x8290ac64
	if (!cr6.eq) goto loc_8290AC64;
loc_8290AC58:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
loc_8290AC64:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8290ac34
	if (!cr0.eq) goto loc_8290AC34;
loc_8290AC70:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290AC7C"))) PPC_WEAK_FUNC(sub_8290AC7C);
PPC_FUNC_IMPL(__imp__sub_8290AC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8290AC80"))) PPC_WEAK_FUNC(sub_8290AC80);
PPC_FUNC_IMPL(__imp__sub_8290AC80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8290AC88;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831ce76c
	ctx.lr = 0x8290AC90;
	__savefpr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lfs f29,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f29.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f28,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f28.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lfs f31,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r31,292(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// addi r30,r31,5364
	ctx.r30.s64 = ctx.r31.s64 + 5364;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,5364(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5364);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x825ca560
	ctx.lr = 0x8290ACD4;
	sub_825CA560(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lwz r11,5356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5356);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// lfs f27,19176(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19176);
	ctx.f27.f64 = double(temp.f32);
	// lfs f25,-26260(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26260);
	ctx.f25.f64 = double(temp.f32);
	// lfs f26,20056(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20056);
	ctx.f26.f64 = double(temp.f32);
	// beq cr6,0x8290ad34
	if (cr6.eq) goto loc_8290AD34;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x8290ad38
	if (!cr6.eq) goto loc_8290AD38;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x825ca560
	ctx.lr = 0x8290AD1C;
	sub_825CA560(ctx, base);
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x825ce9f8
	ctx.lr = 0x8290AD28;
	sub_825CE9F8(ctx, base);
	// fsel f0,f1,f25,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64 >= 0.0 ? ctx.f25.f64 : ctx.f26.f64;
	// fmadds f29,f0,f27,f30
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f27.f64 + ctx.f30.f64));
	// b 0x8290ad38
	goto loc_8290AD38;
loc_8290AD34:
	// fmr f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f30.f64;
loc_8290AD38:
	// lwz r11,5356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5356);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x8290ada4
	if (cr6.gt) goto loc_8290ADA4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8290ad68
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8290AD68;
	// bdzf 4*cr6+eq,0x8290ad7c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8290AD7C;
	// bne cr6,0x8290ad74
	if (!cr6.eq) goto loc_8290AD74;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f30,-23844(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23844);
	ctx.f30.f64 = double(temp.f32);
	// b 0x8290ad84
	goto loc_8290AD84;
loc_8290AD68:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f30,-20096(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20096);
	ctx.f30.f64 = double(temp.f32);
	// b 0x8290ad84
	goto loc_8290AD84;
loc_8290AD74:
	// fmr f30,f27
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f27.f64;
	// b 0x8290ad84
	goto loc_8290AD84;
loc_8290AD7C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f30,-18184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18184);
	ctx.f30.f64 = double(temp.f32);
loc_8290AD84:
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x825ce9f8
	ctx.lr = 0x8290AD90;
	sub_825CE9F8(ctx, base);
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x8290ada4
	if (!cr6.gt) goto loc_8290ADA4;
	// fsel f0,f1,f25,f26
	ctx.f0.f64 = ctx.f1.f64 >= 0.0 ? ctx.f25.f64 : ctx.f26.f64;
	// fmadds f28,f0,f30,f29
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f29.f64));
loc_8290ADA4:
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// stfs f28,56(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r29.u32 + 56, temp.u32);
	// fcmpu cr6,f28,f31
	cr6.compare(ctx.f28.f64, ctx.f31.f64);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,22836(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22836);
	ctx.f0.f64 = double(temp.f32);
	// bge cr6,0x8290adc8
	if (!cr6.lt) goto loc_8290ADC8;
	// fadds f0,f28,f0
	ctx.f0.f64 = double(float(ctx.f28.f64 + ctx.f0.f64));
	// b 0x8290add4
	goto loc_8290ADD4;
loc_8290ADC8:
	// fcmpu cr6,f28,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// blt cr6,0x8290add8
	if (cr6.lt) goto loc_8290ADD8;
	// fsubs f0,f28,f0
	ctx.f0.f64 = double(float(ctx.f28.f64 - ctx.f0.f64));
loc_8290ADD4:
	// stfs f0,56(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 56, temp.u32);
loc_8290ADD8:
	// lfs f0,56(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8290adf0
	if (!cr6.eq) goto loc_8290ADF0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8290ADF0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831ce7b8
	ctx.lr = 0x8290AE00;
	__restfpr_25(ctx, base);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290AE04"))) PPC_WEAK_FUNC(sub_8290AE04);
PPC_FUNC_IMPL(__imp__sub_8290AE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8290AE08"))) PPC_WEAK_FUNC(sub_8290AE08);
PPC_FUNC_IMPL(__imp__sub_8290AE08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8290AE34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r4,57(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 57);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x828ff878
	ctx.lr = 0x8290AE40;
	sub_828FF878(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f1,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// lfs f0,22836(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22836);
	ctx.f0.f64 = double(temp.f32);
	// bge cr6,0x8290ae70
	if (!cr6.lt) goto loc_8290AE70;
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x8290ae94
	goto loc_8290AE94;
loc_8290AE70:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8290ae8c
	if (cr6.lt) goto loc_8290AE8C;
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x8290ae94
	goto loc_8290AE94;
loc_8290AE8C:
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
loc_8290AE94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290AEAC"))) PPC_WEAK_FUNC(sub_8290AEAC);
PPC_FUNC_IMPL(__imp__sub_8290AEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8290AEB0"))) PPC_WEAK_FUNC(sub_8290AEB0);
PPC_FUNC_IMPL(__imp__sub_8290AEB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8290AEB8;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831ce76c
	ctx.lr = 0x8290AEC0;
	__savefpr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,112(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 112);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// lfs f26,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f26.f64 = double(temp.f32);
	// blt cr6,0x8290af04
	if (cr6.lt) goto loc_8290AF04;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a38db8
	ctx.lr = 0x8290AEF4;
	sub_82A38DB8(ctx, base);
	// fcmpu cr6,f1,f26
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f26.f64);
	// bne cr6,0x8290af04
	if (!cr6.eq) goto loc_8290AF04;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r11.u8);
loc_8290AF04:
	// lbz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290af18
	if (cr6.eq) goto loc_8290AF18;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stb r11,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r11.u8);
loc_8290AF18:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a38db8
	ctx.lr = 0x8290AF28;
	sub_82A38DB8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,-27732(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27732);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8290b010
	if (cr6.lt) goto loc_8290B010;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a38e20
	ctx.lr = 0x8290AF48;
	sub_82A38E20(ctx, base);
	// fcmpu cr6,f1,f26
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f26.f64);
	// blt cr6,0x8290b010
	if (cr6.lt) goto loc_8290B010;
	// lbz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 112);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290af7c
	if (!cr6.eq) goto loc_8290AF7C;
	// bl 0x82a38d50
	ctx.lr = 0x8290AF6C;
	sub_82A38D50(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f1,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stb r11,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r11.u8);
	// b 0x8290b03c
	goto loc_8290B03C;
loc_8290AF7C:
	// bl 0x82a38d50
	ctx.lr = 0x8290AF80;
	sub_82A38D50(ctx, base);
	// lfs f31,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f31.f64 = double(temp.f32);
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825ce9f8
	ctx.lr = 0x8290AF90;
	sub_825CE9F8(ctx, base);
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,-23860(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23860);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8290aff0
	if (!cr6.lt) goto loc_8290AFF0;
	// lbz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 112);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r10.u8);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// ble cr6,0x8290afe0
	if (!cr6.gt) goto loc_8290AFE0;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// srawi r10,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x8290afe0
	if (!cr0.eq) goto loc_8290AFE0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r11.u8);
loc_8290AFE0:
	// li r11,3
	ctx.r11.s64 = 3;
	// stfs f31,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stb r11,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r11.u8);
	// b 0x8290b03c
	goto loc_8290B03C;
loc_8290AFF0:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a38d50
	ctx.lr = 0x8290B000;
	sub_82A38D50(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f1,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stb r11,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r11.u8);
	// b 0x8290b03c
	goto loc_8290B03C;
loc_8290B010:
	// lbz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8290b03c
	if (!cr6.eq) goto loc_8290B03C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lbz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 120);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r9,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r9.u8);
	// beq cr6,0x8290b03c
	if (cr6.eq) goto loc_8290B03C;
	// lfs f0,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
loc_8290B03C:
	// lbz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x8290b134
	if (!cr6.eq) goto loc_8290B134;
	// addi r30,r31,96
	ctx.r30.s64 = ctx.r31.s64 + 96;
	// lfs f30,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f30.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f29,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f29.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825f89a8
	ctx.lr = 0x8290B060;
	sub_825F89A8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lfs f1,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f27,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// lfs f2,9796(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9796);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x825ca978
	ctx.lr = 0x8290B07C;
	sub_825CA978(ctx, base);
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmadds f11,f12,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fsqrts f31,f11
	ctx.f31.f64 = double(float(sqrt(ctx.f11.f64)));
	// bl 0x825f89a8
	ctx.lr = 0x8290B09C;
	sub_825F89A8(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f25,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f25.f64 = double(temp.f32);
	// lfs f0,14608(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14608);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x8290b128
	if (cr6.lt) goto loc_8290B128;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f28,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f28.f64 = double(temp.f32);
	// fcmpu cr6,f31,f28
	cr6.compare(ctx.f31.f64, ctx.f28.f64);
	// ble cr6,0x8290b134
	if (!cr6.gt) goto loc_8290B134;
	// fmuls f13,f30,f30
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f26,0(r30)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f26,4(r30)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f26,8(r30)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lfs f0,-3676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3676);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f29,f29,f13
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f13.f64));
	// fsqrts f11,f12
	ctx.f11.f64 = double(float(sqrt(ctx.f12.f64)));
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// blt cr6,0x8290b114
	if (cr6.lt) goto loc_8290B114;
	// lfs f1,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// bl 0x825ce9f8
	ctx.lr = 0x8290B0F4;
	sub_825CE9F8(ctx, base);
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f28
	cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x8290b114
	if (!cr6.lt) goto loc_8290B114;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x825ca978
	ctx.lr = 0x8290B110;
	sub_825CA978(ctx, base);
	// b 0x8290b134
	goto loc_8290B134;
loc_8290B114:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// bl 0x825ca978
	ctx.lr = 0x8290B124;
	sub_825CA978(ctx, base);
	// b 0x8290b134
	goto loc_8290B134;
loc_8290B128:
	// stfs f26,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f26,4(r30)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f26,8(r30)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_8290B134:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831ce7b8
	ctx.lr = 0x8290B15C;
	__restfpr_25(ctx, base);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290B160"))) PPC_WEAK_FUNC(sub_8290B160);
PPC_FUNC_IMPL(__imp__sub_8290B160) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8290B168;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r29,292(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lbz r9,112(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 112);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8290b4b0
	if (!cr6.eq) goto loc_8290B4B0;
	// lbz r11,4496(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4496);
	// cmplwi cr6,r11,21
	cr6.compare<uint32_t>(ctx.r11.u32, 21, xer);
	// beq cr6,0x8290b4a4
	if (cr6.eq) goto loc_8290B4A4;
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(ctx.r11.u32, 22, xer);
	// bne cr6,0x8290b4b0
	if (!cr6.eq) goto loc_8290B4B0;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8290b1dc
	if (!cr6.eq) goto loc_8290B1DC;
	// lbz r11,4516(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4516);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290b1dc
	if (!cr6.eq) goto loc_8290B1DC;
	// lbz r11,4517(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4517);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290b1dc
	if (!cr6.eq) goto loc_8290B1DC;
	// bl 0x8290ae08
	ctx.lr = 0x8290B1DC;
	sub_8290AE08(ctx, base);
loc_8290B1DC:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290b4b0
	if (!cr6.eq) goto loc_8290B4B0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r28,r31,60
	ctx.r28.s64 = ctx.r31.s64 + 60;
	// lfs f29,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f29.f64 = double(temp.f32);
	// stfs f29,60(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f29,64(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f29,68(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lwz r10,5356(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5356);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x8290b240
	if (!cr6.eq) goto loc_8290B240;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82908448
	ctx.lr = 0x8290B220;
	sub_82908448(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// lfs f13,22836(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22836);
	ctx.f13.f64 = double(temp.f32);
	// bge cr6,0x8290b424
	if (!cr6.lt) goto loc_8290B424;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x8290b430
	goto loc_8290B430;
loc_8290B240:
	// lbz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290b27c
	if (cr6.eq) goto loc_8290B27C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8290aeb0
	ctx.lr = 0x8290B25C;
	sub_8290AEB0(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f31,f0,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// bl 0x825c2950
	ctx.lr = 0x8290B274;
	sub_825C2950(ctx, base);
	// fsqrts f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(sqrt(ctx.f31.f64)));
	// b 0x8290b2a4
	goto loc_8290B2A4;
loc_8290B27C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a38db8
	ctx.lr = 0x8290B28C;
	sub_82A38DB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82a38d50
	ctx.lr = 0x8290B2A0;
	sub_82A38D50(ctx, base);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
loc_8290B2A4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825ca978
	ctx.lr = 0x8290B2AC;
	sub_825CA978(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f31,16100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16100);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,24504(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24504);
	ctx.f30.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// lfs f1,5068(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5068);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x82a3b4c0
	ctx.lr = 0x8290B2DC;
	sub_82A3B4C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8290b370
	if (!cr6.gt) goto loc_8290B370;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// lfs f13,-20096(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -20096);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8290b318
	if (cr6.gt) goto loc_8290B318;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x8290b340
	goto loc_8290B340;
loc_8290B318:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f12,-23844(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23844);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x8290b330
	if (cr6.lt) goto loc_8290B330;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// b 0x8290b340
	goto loc_8290B340;
loc_8290B330:
	// fsubs f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,27608(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27608);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_8290B340:
	// fadds f13,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f12,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-28496(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28496);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmadds f0,f13,f0,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// lfs f13,22836(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22836);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x8290b424
	if (!cr6.lt) goto loc_8290B424;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x8290b430
	goto loc_8290B430;
loc_8290B370:
	// bne cr6,0x8290b434
	if (!cr6.eq) goto loc_8290B434;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lfs f31,-23844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23844);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a3b4c0
	ctx.lr = 0x8290B398;
	sub_82A3B4C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8290b434
	if (!cr6.gt) goto loc_8290B434;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfs f12,-26260(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f12.f64 = double(temp.f32);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// lfs f13,-20096(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -20096);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8290b3d4
	if (cr6.gt) goto loc_8290B3D4;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x8290b3f4
	goto loc_8290B3F4;
loc_8290B3D4:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x8290b3e4
	if (cr6.lt) goto loc_8290B3E4;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x8290b3f4
	goto loc_8290B3F4;
loc_8290B3E4:
	// fsubs f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,27608(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27608);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_8290B3F4:
	// fadds f13,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f12,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-28496(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28496);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fnmsubs f0,f13,f0,f12
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f12.f64)));
	// lfs f13,22836(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22836);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x8290b424
	if (!cr6.lt) goto loc_8290B424;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x8290b430
	goto loc_8290B430;
loc_8290B424:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8290b434
	if (cr6.lt) goto loc_8290B434;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_8290B430:
	// stfs f0,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
loc_8290B434:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8290ac80
	ctx.lr = 0x8290B440;
	sub_8290AC80(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82a38c50
	ctx.lr = 0x8290B450;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290b4b0
	if (cr6.eq) goto loc_8290B4B0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82a38be0
	ctx.lr = 0x8290B46C;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290b4b0
	if (!cr6.eq) goto loc_8290B4B0;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r11.u8);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lfs f13,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lfs f12,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,84(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lfs f11,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,88(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// b 0x8290b4b0
	goto loc_8290B4B0;
loc_8290B4A4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8290ae08
	ctx.lr = 0x8290B4B0;
	sub_8290AE08(ctx, base);
loc_8290B4B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290B4C8"))) PPC_WEAK_FUNC(sub_8290B4C8);
PPC_FUNC_IMPL(__imp__sub_8290B4C8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 52);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290B4D0"))) PPC_WEAK_FUNC(sub_8290B4D0);
PPC_FUNC_IMPL(__imp__sub_8290B4D0) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r31,432(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8290b51c
	if (cr6.eq) goto loc_8290B51C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da1d10
	ctx.lr = 0x8290B4FC;
	sub_82DA1D10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290b51c
	if (cr6.eq) goto loc_8290B51C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dad028
	ctx.lr = 0x8290B510;
	sub_82DAD028(ctx, base);
	// cmpwi cr6,r3,14
	cr6.compare<int32_t>(ctx.r3.s32, 14, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8290b520
	if (cr6.eq) goto loc_8290B520;
loc_8290B51C:
	// li r3,16
	ctx.r3.s64 = 16;
loc_8290B520:
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

__attribute__((alias("__imp__sub_8290B534"))) PPC_WEAK_FUNC(sub_8290B534);
PPC_FUNC_IMPL(__imp__sub_8290B534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8290B538"))) PPC_WEAK_FUNC(sub_8290B538);
PPC_FUNC_IMPL(__imp__sub_8290B538) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r31,1
	ctx.r31.s64 = 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x8290b56c
	if (cr6.eq) goto loc_8290B56C;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r4,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x8290b584
	if (cr6.lt) goto loc_8290B584;
loc_8290B56C:
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
loc_8290B584:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x8290B590;
	sub_82A0C710(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addis r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 65536;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// addi r10,r10,-26424
	ctx.r10.s64 = ctx.r10.s64 + -26424;
	// bge cr6,0x8290b5b0
	if (!cr6.lt) goto loc_8290B5B0;
loc_8290B5A4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,43
	cr6.compare<int32_t>(ctx.r9.s32, 43, xer);
	// beq cr6,0x8290b5c4
	if (cr6.eq) goto loc_8290B5C4;
loc_8290B5B0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// blt cr6,0x8290b5a4
	if (cr6.lt) goto loc_8290B5A4;
	// b 0x8290b5c8
	goto loc_8290B5C8;
loc_8290B5C4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8290B5C8:
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

__attribute__((alias("__imp__sub_8290B5E0"))) PPC_WEAK_FUNC(sub_8290B5E0);
PPC_FUNC_IMPL(__imp__sub_8290B5E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8290B5E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x8290b610
	if (cr6.gt) goto loc_8290B610;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8290B610;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8290B610:
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r3,-3564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r11,292(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// lwz r4,5756(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5756);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x8290b63c
	if (cr6.lt) goto loc_8290B63C;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// blt cr6,0x8290b640
	if (cr6.lt) goto loc_8290B640;
loc_8290B63C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8290B640:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290b678
	if (cr6.eq) goto loc_8290B678;
	// bl 0x82a0c760
	ctx.lr = 0x8290B650;
	sub_82A0C760(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82a3cf30
	ctx.lr = 0x8290B65C;
	sub_82A3CF30(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8290b678
	if (!cr6.eq) goto loc_8290B678;
	// stb r29,52(r30)
	PPC_STORE_U8(ctx.r30.u32 + 52, ctx.r29.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8290B678:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82a38be0
	ctx.lr = 0x8290B688;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290b7ac
	if (!cr6.eq) goto loc_8290B7AC;
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r11,312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// lbz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// blt cr6,0x8290b6c0
	if (cr6.lt) goto loc_8290B6C0;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bge cr6,0x8290b6c0
	if (!cr6.lt) goto loc_8290B6C0;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// beq cr6,0x8290b6c0
	if (cr6.eq) goto loc_8290B6C0;
	// li r4,6
	ctx.r4.s64 = 6;
loc_8290B6C0:
	// lbz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 52);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290b798
	if (cr6.eq) goto loc_8290B798;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82a38c50
	ctx.lr = 0x8290B6DC;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290b6fc
	if (cr6.eq) goto loc_8290B6FC;
	// stb r27,21(r30)
	PPC_STORE_U8(ctx.r30.u32 + 21, ctx.r27.u8);
	// li r3,108
	ctx.r3.s64 = 108;
	// stb r29,52(r30)
	PPC_STORE_U8(ctx.r30.u32 + 52, ctx.r29.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8290B6FC:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82a38c50
	ctx.lr = 0x8290B70C;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290b730
	if (cr6.eq) goto loc_8290B730;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r29,52(r30)
	PPC_STORE_U8(ctx.r30.u32 + 52, ctx.r29.u8);
	// li r3,108
	ctx.r3.s64 = 108;
	// stb r11,21(r30)
	PPC_STORE_U8(ctx.r30.u32 + 21, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8290B730:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82a38c50
	ctx.lr = 0x8290B740;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290b764
	if (cr6.eq) goto loc_8290B764;
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r29,52(r30)
	PPC_STORE_U8(ctx.r30.u32 + 52, ctx.r29.u8);
	// li r3,108
	ctx.r3.s64 = 108;
	// stb r11,21(r30)
	PPC_STORE_U8(ctx.r30.u32 + 21, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8290B764:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82a38c50
	ctx.lr = 0x8290B774;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290b7ac
	if (cr6.eq) goto loc_8290B7AC;
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r29,52(r30)
	PPC_STORE_U8(ctx.r30.u32 + 52, ctx.r29.u8);
	// li r3,108
	ctx.r3.s64 = 108;
	// stb r11,21(r30)
	PPC_STORE_U8(ctx.r30.u32 + 21, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8290B798:
	// bl 0x82a38c50
	ctx.lr = 0x8290B79C;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290b7ac
	if (cr6.eq) goto loc_8290B7AC;
	// stb r27,52(r30)
	PPC_STORE_U8(ctx.r30.u32 + 52, ctx.r27.u8);
loc_8290B7AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290B7B8"))) PPC_WEAK_FUNC(sub_8290B7B8);
PPC_FUNC_IMPL(__imp__sub_8290B7B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8290B7C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x8290b7e8
	if (cr6.gt) goto loc_8290B7E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8290B7E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8290B7E8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82a38be0
	ctx.lr = 0x8290B7F8;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290b8f8
	if (!cr6.eq) goto loc_8290B8F8;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r30,7
	ctx.r30.s64 = 7;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,312(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// bl 0x82a16e50
	ctx.lr = 0x8290B818;
	sub_82A16E50(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8290b828
	if (cr6.eq) goto loc_8290B828;
	// li r30,6
	ctx.r30.s64 = 6;
loc_8290B828:
	// lbz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290b8dc
	if (cr6.eq) goto loc_8290B8DC;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82a38c50
	ctx.lr = 0x8290B844;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290b86c
	if (cr6.eq) goto loc_8290B86C;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r11.u8);
	// li r3,109
	ctx.r3.s64 = 109;
	// stb r10,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r10.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8290B86C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82a38c50
	ctx.lr = 0x8290B87C;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290b8a4
	if (cr6.eq) goto loc_8290B8A4;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r11.u8);
	// li r3,109
	ctx.r3.s64 = 109;
	// stb r10,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r10.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8290B8A4:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82a38c50
	ctx.lr = 0x8290B8B4;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290b8f8
	if (cr6.eq) goto loc_8290B8F8;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r11.u8);
	// li r3,109
	ctx.r3.s64 = 109;
	// stb r10,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r10.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8290B8DC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a38c50
	ctx.lr = 0x8290B8E4;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290b8f8
	if (cr6.eq) goto loc_8290B8F8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r11.u8);
loc_8290B8F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290B904"))) PPC_WEAK_FUNC(sub_8290B904);
PPC_FUNC_IMPL(__imp__sub_8290B904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8290B908"))) PPC_WEAK_FUNC(sub_8290B908);
PPC_FUNC_IMPL(__imp__sub_8290B908) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8290B910;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8290b538
	ctx.lr = 0x8290B928;
	sub_8290B538(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290b94c
	if (cr6.eq) goto loc_8290B94C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82908070
	ctx.lr = 0x8290B944;
	sub_82908070(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8290B94C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290B958"))) PPC_WEAK_FUNC(sub_8290B958);
PPC_FUNC_IMPL(__imp__sub_8290B958) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8290B960;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-31763
	ctx.r26.s64 = -2081619968;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// lwz r3,-3564(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// lwz r25,292(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// bge cr6,0x8290bb50
	if (!cr6.lt) goto loc_8290BB50;
	// lwz r11,4460(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4460);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8290bb50
	if (!cr6.eq) goto loc_8290BB50;
	// lwz r11,5356(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 5356);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8290bb50
	if (cr6.eq) goto loc_8290BB50;
	// lwz r11,5756(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 5756);
	// addi r27,r25,5756
	ctx.r27.s64 = ctx.r25.s64 + 5756;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8290b9b4
	if (cr6.lt) goto loc_8290B9B4;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x8290b9b8
	if (cr6.lt) goto loc_8290B9B8;
loc_8290B9B4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8290B9B8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8290bb50
	if (cr6.eq) goto loc_8290BB50;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x8290b9d4
	if (!cr6.lt) goto loc_8290B9D4;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x8290b9fc
	goto loc_8290B9FC;
loc_8290B9D4:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x8290b9e4
	if (!cr6.lt) goto loc_8290B9E4;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x8290b9fc
	goto loc_8290B9FC;
loc_8290B9E4:
	// li r10,22
	ctx.r10.s64 = 22;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r8,r10,r11
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r28,r6,31
	ctx.r28.u64 = ctx.r6.u32 & 0x1;
loc_8290B9FC:
	// li r29,1
	ctx.r29.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_8290BA08:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x8290ba20
	if (cr6.lt) goto loc_8290BA20;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8290ba24
	if (cr6.lt) goto loc_8290BA24;
loc_8290BA20:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8290BA24:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290ba94
	if (cr6.eq) goto loc_8290BA94;
	// bl 0x82a0c760
	ctx.lr = 0x8290BA34;
	sub_82A0C760(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x8290ba48
	if (!cr6.lt) goto loc_8290BA48;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8290ba70
	goto loc_8290BA70;
loc_8290BA48:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x8290ba58
	if (!cr6.lt) goto loc_8290BA58;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8290ba70
	goto loc_8290BA70;
loc_8290BA58:
	// li r10,22
	ctx.r10.s64 = 22;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r8,r10,r11
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
loc_8290BA70:
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// bne cr6,0x8290ba90
	if (!cr6.eq) goto loc_8290BA90;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82a3cf30
	ctx.lr = 0x8290BA84;
	sub_82A3CF30(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8290baa8
	if (cr6.eq) goto loc_8290BAA8;
loc_8290BA90:
	// lwz r3,-3564(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
loc_8290BA94:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// blt cr6,0x8290ba08
	if (cr6.lt) goto loc_8290BA08;
	// b 0x8290bab0
	goto loc_8290BAB0;
loc_8290BAA8:
	// lwz r3,-3564(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// li r29,0
	ctx.r29.s64 = 0;
loc_8290BAB0:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290bb50
	if (cr6.eq) goto loc_8290BB50;
	// lbz r11,4499(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4499);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290bb24
	if (cr6.eq) goto loc_8290BB24;
	// lwz r11,4456(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4456);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x8290bb20
	if (cr6.eq) goto loc_8290BB20;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// blt cr6,0x8290bae8
	if (cr6.lt) goto loc_8290BAE8;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8290bb24
	goto loc_8290BB24;
loc_8290BAE8:
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x8290bb20
	if (cr6.eq) goto loc_8290BB20;
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// lwz r10,192(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x8290bb0c
	if (cr6.lt) goto loc_8290BB0C;
	// li r11,23
	ctx.r11.s64 = 23;
loc_8290BB0C:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8290bb24
	if (cr6.eq) goto loc_8290BB24;
loc_8290BB20:
	// li r31,1
	ctx.r31.s64 = 1;
loc_8290BB24:
	// lwz r3,432(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8290bb44
	if (cr6.eq) goto loc_8290BB44;
	// bl 0x82da1d10
	ctx.lr = 0x8290BB34;
	sub_82DA1D10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 & ctx.r31.u64;
loc_8290BB44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8290BB50:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290BB5C"))) PPC_WEAK_FUNC(sub_8290BB5C);
PPC_FUNC_IMPL(__imp__sub_8290BB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8290BB60"))) PPC_WEAK_FUNC(sub_8290BB60);
PPC_FUNC_IMPL(__imp__sub_8290BB60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8290BB68;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	ctx.r23.s64 = 0;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stb r23,52(r3)
	PPC_STORE_U8(ctx.r3.u32 + 52, ctx.r23.u8);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stb r23,53(r3)
	PPC_STORE_U8(ctx.r3.u32 + 53, ctx.r23.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290bd90
	if (!cr6.eq) goto loc_8290BD90;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8290b958
	ctx.lr = 0x8290BB94;
	sub_8290B958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290bd90
	if (cr6.eq) goto loc_8290BD90;
	// lis r26,-31763
	ctx.r26.s64 = -2081619968;
	// lwz r11,-3564(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// lwz r28,292(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r10,4456(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4456);
	// cmpwi cr6,r10,9
	cr6.compare<int32_t>(ctx.r10.s32, 9, xer);
	// beq cr6,0x8290bd90
	if (cr6.eq) goto loc_8290BD90;
	// lwz r10,5356(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5356);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// beq cr6,0x8290bd90
	if (cr6.eq) goto loc_8290BD90;
	// lwz r24,12(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x8290bbdc
	if (!cr6.lt) goto loc_8290BBDC;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x8290bc04
	goto loc_8290BC04;
loc_8290BBDC:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x8290bbec
	if (!cr6.lt) goto loc_8290BBEC;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x8290bc04
	goto loc_8290BC04;
loc_8290BBEC:
	// li r10,22
	ctx.r10.s64 = 22;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r8,r10,r11
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
loc_8290BC04:
	// lbz r10,112(r24)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r24.u32 + 112);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8290bc38
	if (cr6.eq) goto loc_8290BC38;
	// lbz r10,136(r24)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r24.u32 + 136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8290bc38
	if (cr6.eq) goto loc_8290BC38;
	// mulli r10,r11,11
	ctx.r10.s64 = ctx.r11.s64 * 11;
	// lwz r11,120(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 120);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r3,42
	ctx.r3.s64 = 42;
	// stb r11,21(r27)
	PPC_STORE_U8(ctx.r27.u32 + 21, ctx.r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8290BC38:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82910df8
	ctx.lr = 0x8290BC40;
	sub_82910DF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290bc54
	if (cr6.eq) goto loc_8290BC54;
	// stb r29,53(r27)
	PPC_STORE_U8(ctx.r27.u32 + 53, ctx.r29.u8);
loc_8290BC54:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// addi r31,r28,5756
	ctx.r31.s64 = ctx.r28.s64 + 5756;
loc_8290BC5C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x8290bc74
	if (cr6.lt) goto loc_8290BC74;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// blt cr6,0x8290bc78
	if (cr6.lt) goto loc_8290BC78;
loc_8290BC74:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8290BC78:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290bce8
	if (cr6.eq) goto loc_8290BCE8;
	// lwz r10,5360(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5360);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x8290bc98
	if (!cr6.lt) goto loc_8290BC98;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x8290bcc0
	goto loc_8290BCC0;
loc_8290BC98:
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bge cr6,0x8290bca8
	if (!cr6.lt) goto loc_8290BCA8;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x8290bcc0
	goto loc_8290BCC0;
loc_8290BCA8:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r9,r11,r4
	xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
	// eqv r8,r11,r4
	ctx.r8.u64 = ~(ctx.r11.u64 ^ ctx.r4.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
loc_8290BCC0:
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bne cr6,0x8290bce8
	if (!cr6.eq) goto loc_8290BCE8;
	// lwz r3,-3564(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x8290BCD0;
	sub_82A0C760(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82a3cf30
	ctx.lr = 0x8290BCDC;
	sub_82A3CF30(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8290bcfc
	if (cr6.eq) goto loc_8290BCFC;
loc_8290BCE8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// blt cr6,0x8290bc5c
	if (cr6.lt) goto loc_8290BC5C;
	// b 0x8290bd00
	goto loc_8290BD00;
loc_8290BCFC:
	// stb r29,53(r27)
	PPC_STORE_U8(ctx.r27.u32 + 53, ctx.r29.u8);
loc_8290BD00:
	// lbz r11,53(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 53);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290bd90
	if (!cr6.eq) goto loc_8290BD90;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// bl 0x82a38c50
	ctx.lr = 0x8290BD1C;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290bd90
	if (cr6.eq) goto loc_8290BD90;
	// lbz r11,112(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290bd8c
	if (!cr6.eq) goto loc_8290BD8C;
	// stb r29,52(r27)
	PPC_STORE_U8(ctx.r27.u32 + 52, ctx.r29.u8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82910d08
	ctx.lr = 0x8290BD40;
	sub_82910D08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290bd90
	if (cr6.eq) goto loc_8290BD90;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82910d98
	ctx.lr = 0x8290BD54;
	sub_82910D98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83740868
	ctx.lr = 0x8290BD5C;
	sub_83740868(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,20048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20048);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, xer);
	// bgt cr6,0x8290bd90
	if (cr6.gt) goto loc_8290BD90;
	// stb r23,52(r27)
	PPC_STORE_U8(ctx.r27.u32 + 52, ctx.r23.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8290BD8C:
	// stb r29,53(r27)
	PPC_STORE_U8(ctx.r27.u32 + 53, ctx.r29.u8);
loc_8290BD90:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290BD9C"))) PPC_WEAK_FUNC(sub_8290BD9C);
PPC_FUNC_IMPL(__imp__sub_8290BD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8290BDA0"))) PPC_WEAK_FUNC(sub_8290BDA0);
PPC_FUNC_IMPL(__imp__sub_8290BDA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8290BDA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// lwz r29,20(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-3564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x8290BDC4;
	sub_82A0C788(ctx, base);
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c760
	ctx.lr = 0x8290BDD8;
	sub_82A0C760(ctx, base);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r10,r11,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// srawi r11,r10,24
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 24;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x8290be04
	if (cr6.lt) goto loc_8290BE04;
	// beq cr6,0x8290bdf8
	if (cr6.eq) goto loc_8290BDF8;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bne cr6,0x8290be14
	if (!cr6.eq) goto loc_8290BE14;
loc_8290BDF8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8290BE04:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290be18
	if (cr6.eq) goto loc_8290BE18;
loc_8290BE14:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8290BE18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290BE20"))) PPC_WEAK_FUNC(sub_8290BE20);
PPC_FUNC_IMPL(__imp__sub_8290BE20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x8290BE48;
	sub_82A0C760(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82a2b578
	ctx.lr = 0x8290BE5C;
	sub_82A2B578(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8290beb4
	if (cr6.eq) goto loc_8290BEB4;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82a3cf58
	ctx.lr = 0x8290BE74;
	sub_82A3CF58(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8290be98
	if (cr6.eq) goto loc_8290BE98;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,20,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8290beb4
	if (!cr6.eq) goto loc_8290BEB4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8290beb8
	goto loc_8290BEB8;
loc_8290BE98:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82a3d0a0
	ctx.lr = 0x8290BEA4;
	sub_82A3D0A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8290beb8
	if (!cr6.eq) goto loc_8290BEB8;
loc_8290BEB4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8290BEB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290BED0"))) PPC_WEAK_FUNC(sub_8290BED0);
PPC_FUNC_IMPL(__imp__sub_8290BED0) {
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
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x8290BEFC;
	sub_82A0C788(ctx, base);
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c760
	ctx.lr = 0x8290BF10;
	sub_82A0C760(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f31,1272(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1272);
	ctx.f31.f64 = double(temp.f32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82a3cf80
	ctx.lr = 0x8290BF24;
	sub_82A3CF80(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8290bf50
	if (cr6.eq) goto loc_8290BF50;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82a3cf58
	ctx.lr = 0x8290BF3C;
	sub_82A3CF58(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8290bf50
	if (!cr6.eq) goto loc_8290BF50;
	// lfs f1,168(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8290bf54
	goto loc_8290BF54;
loc_8290BF50:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_8290BF54:
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

__attribute__((alias("__imp__sub_8290BF70"))) PPC_WEAK_FUNC(sub_8290BF70);
PPC_FUNC_IMPL(__imp__sub_8290BF70) {
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
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(ctx.r11.s32, 100, xer);
	// bge cr6,0x8290bf98
	if (!cr6.lt) goto loc_8290BF98;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
loc_8290BF98:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(ctx.r11.s32, 100, xer);
	// bge cr6,0x8290bfe8
	if (!cr6.lt) goto loc_8290BFE8;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x8290BFB4;
	sub_82A0C760(ctx, base);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(ctx.r11.s32, 16, xer);
	// beq cr6,0x8290bfe0
	if (cr6.eq) goto loc_8290BFE0;
	// cmpwi cr6,r11,19
	cr6.compare<int32_t>(ctx.r11.s32, 19, xer);
	// ble cr6,0x8290bfd4
	if (!cr6.gt) goto loc_8290BFD4;
	// cmpwi cr6,r11,21
	cr6.compare<int32_t>(ctx.r11.s32, 21, xer);
	// ble cr6,0x8290bfe0
	if (!cr6.gt) goto loc_8290BFE0;
loc_8290BFD4:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x8290bfe4
	goto loc_8290BFE4;
loc_8290BFE0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8290BFE4:
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_8290BFE8:
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

__attribute__((alias("__imp__sub_8290BFFC"))) PPC_WEAK_FUNC(sub_8290BFFC);
PPC_FUNC_IMPL(__imp__sub_8290BFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8290C000"))) PPC_WEAK_FUNC(sub_8290C000);
PPC_FUNC_IMPL(__imp__sub_8290C000) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,36
	ctx.r10.s64 = 36;
	// li r9,255
	ctx.r9.s64 = 255;
	// stb r11,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, ctx.r11.u8);
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// stw r9,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r9.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290C024"))) PPC_WEAK_FUNC(sub_8290C024);
PPC_FUNC_IMPL(__imp__sub_8290C024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8290C028"))) PPC_WEAK_FUNC(sub_8290C028);
PPC_FUNC_IMPL(__imp__sub_8290C028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,36
	ctx.r8.s64 = 36;
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r11.u8);
	// li r7,255
	ctx.r7.s64 = 255;
	// stb r11,37(r3)
	PPC_STORE_U8(ctx.r3.u32 + 37, ctx.r11.u8);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stb r9,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r9.u8);
	// stw r8,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r8.u32);
	// stb r11,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, ctx.r11.u8);
	// stw r7,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r7.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290C078"))) PPC_WEAK_FUNC(sub_8290C078);
PPC_FUNC_IMPL(__imp__sub_8290C078) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// bl 0x82a2b578
	ctx.lr = 0x8290C09C;
	sub_82A2B578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290c0c8
	if (!cr6.eq) goto loc_8290C0C8;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c7b0
	ctx.lr = 0x8290C0B8;
	sub_82A0C7B0(ctx, base);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,55
	ctx.r3.s64 = 55;
	// cmpwi cr6,r10,19
	cr6.compare<int32_t>(ctx.r10.s32, 19, xer);
	// beq cr6,0x8290c0cc
	if (cr6.eq) goto loc_8290C0CC;
loc_8290C0C8:
	// li r3,87
	ctx.r3.s64 = 87;
loc_8290C0CC:
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

__attribute__((alias("__imp__sub_8290C0E0"))) PPC_WEAK_FUNC(sub_8290C0E0);
PPC_FUNC_IMPL(__imp__sub_8290C0E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82908070
	sub_82908070(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290C108"))) PPC_WEAK_FUNC(sub_8290C108);
PPC_FUNC_IMPL(__imp__sub_8290C108) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290C10C"))) PPC_WEAK_FUNC(sub_8290C10C);
PPC_FUNC_IMPL(__imp__sub_8290C10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8290C110"))) PPC_WEAK_FUNC(sub_8290C110);
PPC_FUNC_IMPL(__imp__sub_8290C110) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8290C118;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,20(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r29,12(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r30,32(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82a2b4e0
	ctx.lr = 0x8290C144;
	sub_82A2B4E0(ctx, base);
	// cmpw cr6,r3,r31
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, xer);
	// bne cr6,0x8290c15c
	if (!cr6.eq) goto loc_8290C15C;
loc_8290C14C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8290C15C:
	// lfs f0,8156(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8156);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f11,8164(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8164);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r30,8156
	ctx.r4.s64 = ctx.r30.s64 + 8156;
	// lfs f13,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f10,f11,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fsqrts f9,f10
	ctx.f9.f64 = double(float(sqrt(ctx.f10.f64)));
	// fcmpu cr6,f9,f13
	cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// beq cr6,0x8290c14c
	if (cr6.eq) goto loc_8290C14C;
	// addi r10,r31,21464
	ctx.r10.s64 = ctx.r31.s64 + 21464;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,23340
	ctx.r11.s64 = ctx.r11.s64 + 23340;
	// lfsx f12,r9,r29
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f13
	cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// bge cr6,0x8290c1b4
	if (!cr6.lt) goto loc_8290C1B4;
	// fadds f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// b 0x8290c1c0
	goto loc_8290C1C0;
loc_8290C1B4:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x8290c1c0
	if (cr6.lt) goto loc_8290C1C0;
	// fsubs f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
loc_8290C1C0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825f89a8
	ctx.lr = 0x8290C1C8;
	sub_825F89A8(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825cbd90
	ctx.lr = 0x8290C1D0;
	sub_825CBD90(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-20096(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20096);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8290c1e8
	if (cr6.lt) goto loc_8290C1E8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8290C1E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290C200"))) PPC_WEAK_FUNC(sub_8290C200);
PPC_FUNC_IMPL(__imp__sub_8290C200) {
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
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// lwz r10,-3564(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3564);
	// lwz r10,192(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	// blt cr6,0x8290c238
	if (cr6.lt) goto loc_8290C238;
	// li r11,23
	ctx.r11.s64 = 23;
loc_8290C238:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8357ece0
	ctx.lr = 0x8290C244;
	sub_8357ECE0(ctx, base);
	// bl 0x82a47e40
	ctx.lr = 0x8290C248;
	sub_82A47E40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290c2dc
	if (cr6.eq) goto loc_8290C2DC;
	// addi r11,r31,-2
	ctx.r11.s64 = ctx.r31.s64 + -2;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// bgt cr6,0x8290c2e8
	if (cr6.gt) goto loc_8290C2E8;
	// lis r12,-32111
	ctx.r12.s64 = -2104426496;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-15752
	ctx.r12.s64 = ctx.r12.s64 + -15752;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8290C2E4;
	case 1:
		goto loc_8290C2E4;
	case 2:
		goto loc_8290C2E4;
	case 3:
		goto loc_8290C2E4;
	case 4:
		goto loc_8290C2E4;
	case 5:
		goto loc_8290C2E4;
	case 6:
		goto loc_8290C2E8;
	case 7:
		goto loc_8290C2E8;
	case 8:
		goto loc_8290C2E8;
	case 9:
		goto loc_8290C2E8;
	case 10:
		goto loc_8290C2E8;
	case 11:
		goto loc_8290C2E8;
	case 12:
		goto loc_8290C2E4;
	case 13:
		goto loc_8290C2E8;
	case 14:
		goto loc_8290C2E4;
	case 15:
		goto loc_8290C2E8;
	case 16:
		goto loc_8290C2E8;
	case 17:
		goto loc_8290C2E8;
	case 18:
		goto loc_8290C2E8;
	case 19:
		goto loc_8290C2E8;
	case 20:
		goto loc_8290C2E4;
	case 21:
		goto loc_8290C2E4;
	case 22:
		goto loc_8290C2E8;
	case 23:
		goto loc_8290C2E8;
	case 24:
		goto loc_8290C2E4;
	default:
		return;
	}
	// lwz r20,-15644(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -15644);
	// lwz r20,-15644(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -15644);
	// lwz r20,-15644(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -15644);
	// lwz r20,-15644(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -15644);
	// lwz r20,-15644(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -15644);
	// lwz r20,-15644(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -15644);
	// lwz r20,-15640(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -15640);
	// lwz r20,-15640(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -15640);
	// lwz r20,-15640(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -15640);
	// lwz r20,-15640(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -15640);
	// lwz r20,-15640(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -15640);
	// lwz r20,-15640(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -15640);
	// lwz r20,-15644(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -15644);
	// lwz r20,-15640(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -15640);
	// lwz r20,-15644(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -15644);
	// lwz r20,-15640(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -15640);
	// lwz r20,-15640(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -15640);
	// lwz r20,-15640(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -15640);
	// lwz r20,-15640(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -15640);
	// lwz r20,-15640(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -15640);
	// lwz r20,-15644(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -15644);
	// lwz r20,-15644(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -15644);
	// lwz r20,-15640(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -15640);
	// lwz r20,-15640(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -15640);
	// lwz r20,-15644(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -15644);
loc_8290C2DC:
	// cmplwi cr6,r31,8
	cr6.compare<uint32_t>(ctx.r31.u32, 8, xer);
	// blt cr6,0x8290c2e8
	if (cr6.lt) goto loc_8290C2E8;
loc_8290C2E4:
	// li r30,1
	ctx.r30.s64 = 1;
loc_8290C2E8:
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

__attribute__((alias("__imp__sub_8290C304"))) PPC_WEAK_FUNC(sub_8290C304);
PPC_FUNC_IMPL(__imp__sub_8290C304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8290C308"))) PPC_WEAK_FUNC(sub_8290C308);
PPC_FUNC_IMPL(__imp__sub_8290C308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x8290C310;
	__savegprlr_17(ctx, base);
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x831ce778
	ctx.lr = 0x8290C318;
	__savefpr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x8290bf70
	ctx.lr = 0x8290C328;
	sub_8290BF70(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82a38be0
	ctx.lr = 0x8290C338;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290c358
	if (cr6.eq) goto loc_8290C358;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x831ce7c4
	ctx.lr = 0x8290C354;
	__restfpr_28(ctx, base);
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_8290C358:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r26,20(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// bl 0x8290bed0
	ctx.lr = 0x8290C370;
	sub_8290BED0(ctx, base);
	// lis r25,-31763
	ctx.r25.s64 = -2081619968;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r17,r11,23344
	ctx.r17.s64 = ctx.r11.s64 + 23344;
	// lwz r30,-3564(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3564);
	// lfs f29,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f29.f64 = double(temp.f32);
	// fmr f28,f29
	ctx.f28.f64 = ctx.f29.f64;
	// lwz r9,312(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// lbz r11,64(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 64);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x8290c3a8
	if (cr6.lt) goto loc_8290C3A8;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// blt cr6,0x8290c3b8
	if (cr6.lt) goto loc_8290C3B8;
loc_8290C3A8:
	// lfs f1,0(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,52(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x825ce9f8
	ctx.lr = 0x8290C3B4;
	sub_825CE9F8(ctx, base);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
loc_8290C3B8:
	// fsubs f31,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f28.f64));
	// lfs f0,-4(r17)
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f29
	cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// bge cr6,0x8290c3d0
	if (!cr6.lt) goto loc_8290C3D0;
	// fadds f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// b 0x8290c3dc
	goto loc_8290C3DC;
loc_8290C3D0:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x8290c3dc
	if (cr6.lt) goto loc_8290C3DC;
	// fsubs f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
loc_8290C3DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82a0c7b0
	ctx.lr = 0x8290C3E8;
	sub_82A0C7B0(ctx, base);
	// lwz r11,-3564(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3564);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82a0c788
	ctx.lr = 0x8290C3FC;
	sub_82A0C788(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,-3564(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x8290C408;
	sub_82A0C760(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// li r23,115
	ctx.r23.s64 = 115;
	// li r19,0
	ctx.r19.s64 = 0;
	// li r24,255
	ctx.r24.s64 = 255;
	// lwz r21,12(r10)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r10,r9,292
	ctx.r10.s64 = ctx.r9.s64 * 292;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, xer);
	// beq cr6,0x8290c61c
	if (cr6.eq) goto loc_8290C61C;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// ori r20,r9,20120
	ctx.r20.u64 = ctx.r9.u64 | 20120;
	// addi r18,r11,-26384
	ctx.r18.s64 = ctx.r11.s64 + -26384;
	// lfs f30,20056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20056);
	ctx.f30.f64 = double(temp.f32);
loc_8290C458:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r24,255
	ctx.r24.s64 = 255;
	// bl 0x8290c200
	ctx.lr = 0x8290C46C;
	sub_8290C200(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290c4d8
	if (cr6.eq) goto loc_8290C4D8;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r30,15
	cr6.compare<int32_t>(ctx.r30.s32, 15, xer);
	// blt cr6,0x8290c4ac
	if (cr6.lt) goto loc_8290C4AC;
	// cmpwi cr6,r30,16
	cr6.compare<int32_t>(ctx.r30.s32, 16, xer);
	// bgt cr6,0x8290c4ac
	if (cr6.gt) goto loc_8290C4AC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825cdb80
	ctx.lr = 0x8290C494;
	sub_825CDB80(ctx, base);
	// add r11,r21,r20
	ctx.r11.u64 = ctx.r21.u64 + ctx.r20.u64;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bge cr6,0x8290c4a8
	if (!cr6.lt) goto loc_8290C4A8;
	// mulli r10,r3,88
	ctx.r10.s64 = ctx.r3.s64 * 88;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8290C4A8:
	// lwz r24,0(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8290C4AC:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r18
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r18.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290c4d0
	if (cr6.eq) goto loc_8290C4D0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290C4CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8290c4dc
	goto loc_8290C4DC;
loc_8290C4D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8290c4dc
	goto loc_8290C4DC;
loc_8290C4D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8290C4DC:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290c5f8
	if (cr6.eq) goto loc_8290C5F8;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8355a178
	ctx.lr = 0x8290C4F0;
	sub_8355A178(ctx, base);
	// lbz r10,50(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 50);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r30,64(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(ctx.r11.s32, 14, xer);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r29,r9,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// beq cr6,0x8290c518
	if (cr6.eq) goto loc_8290C518;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(ctx.r11.s32, 16, xer);
	// bne cr6,0x8290c54c
	if (!cr6.eq) goto loc_8290C54C;
loc_8290C518:
	// lwz r11,-3564(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3564);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,292(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r3,132(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// lwz r30,4472(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4472);
	// bl 0x82a22b40
	ctx.lr = 0x8290C534;
	sub_82A22B40(ctx, base);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,68(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	// subf r30,r8,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r8.s64;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// ble cr6,0x8290c54c
	if (!cr6.gt) goto loc_8290C54C;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8290C54C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// blt cr6,0x8290c568
	if (cr6.lt) goto loc_8290C568;
	// cmpwi cr6,r10,7
	cr6.compare<int32_t>(ctx.r10.s32, 7, xer);
	// bgt cr6,0x8290c568
	if (cr6.gt) goto loc_8290C568;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x8290c578
	goto loc_8290C578;
loc_8290C568:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r29,r7,r29
	ctx.r29.u64 = ctx.r7.u64 & ctx.r29.u64;
loc_8290C578:
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a3b7a0
	ctx.lr = 0x8290C598;
	sub_82A3B7A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290c5ec
	if (!cr6.eq) goto loc_8290C5EC;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290c5f0
	if (cr6.eq) goto loc_8290C5F0;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// rlwinm r6,r9,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a3b7a0
	ctx.lr = 0x8290C5DC;
	sub_82A3B7A0(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8290c5f0
	if (cr6.eq) goto loc_8290C5F0;
	// li r19,1
	ctx.r19.s64 = 1;
loc_8290C5EC:
	// lwz r23,0(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8290C5F0:
	// cmpwi cr6,r23,115
	cr6.compare<int32_t>(ctx.r23.s32, 115, xer);
	// bne cr6,0x8290c618
	if (!cr6.eq) goto loc_8290C618;
loc_8290C5F8:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r31,r31,292
	ctx.r31.s64 = ctx.r31.s64 + 292;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r10,r10,292
	ctx.r10.s64 = ctx.r10.s64 * 292;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// bne cr6,0x8290c458
	if (!cr6.eq) goto loc_8290C458;
loc_8290C618:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
loc_8290C61C:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x8290c648
	if (!cr6.gt) goto loc_8290C648;
	// fadds f0,f28,f0
	ctx.f0.f64 = double(float(ctx.f28.f64 + ctx.f0.f64));
	// lfs f13,-4(r17)
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x8290c63c
	if (!cr6.lt) goto loc_8290C63C;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x8290c648
	goto loc_8290C648;
loc_8290C63C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8290c648
	if (cr6.lt) goto loc_8290C648;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_8290C648:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r23,115
	cr6.compare<int32_t>(ctx.r23.s32, 115, xer);
	// beq cr6,0x8290c668
	if (cr6.eq) goto loc_8290C668;
	// stfs f0,32(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 32, temp.u32);
	// stw r23,52(r27)
	PPC_STORE_U32(ctx.r27.u32 + 52, ctx.r23.u32);
	// li r3,88
	ctx.r3.s64 = 88;
	// stb r19,56(r27)
	PPC_STORE_U8(ctx.r27.u32 + 56, ctx.r19.u8);
	// stw r24,60(r27)
	PPC_STORE_U32(ctx.r27.u32 + 60, ctx.r24.u32);
loc_8290C668:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x831ce7c4
	ctx.lr = 0x8290C674;
	__restfpr_28(ctx, base);
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290C678"))) PPC_WEAK_FUNC(sub_8290C678);
PPC_FUNC_IMPL(__imp__sub_8290C678) {
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
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bgt cr6,0x8290c730
	if (cr6.gt) goto loc_8290C730;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8290c6b8
	if (cr6.eq) goto loc_8290C6B8;
	// bdz 0x8290c6e0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8290C6E0;
	// bdz 0x8290c708
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8290C708;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
loc_8290C6B8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82a38db8
	ctx.lr = 0x8290C6C8;
	sub_82A38DB8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,20048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8290c730
	if (cr6.lt) goto loc_8290C730;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8290c72c
	goto loc_8290C72C;
loc_8290C6E0:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82a38db8
	ctx.lr = 0x8290C6F0;
	sub_82A38DB8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,20048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8290c728
	if (cr6.lt) goto loc_8290C728;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8290c72c
	goto loc_8290C72C;
loc_8290C708:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82a38db8
	ctx.lr = 0x8290C718;
	sub_82A38DB8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,20048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8290c730
	if (!cr6.lt) goto loc_8290C730;
loc_8290C728:
	// li r11,3
	ctx.r11.s64 = 3;
loc_8290C72C:
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_8290C730:
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

__attribute__((alias("__imp__sub_8290C744"))) PPC_WEAK_FUNC(sub_8290C744);
PPC_FUNC_IMPL(__imp__sub_8290C744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8290C748"))) PPC_WEAK_FUNC(sub_8290C748);
PPC_FUNC_IMPL(__imp__sub_8290C748) {
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
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82a38be0
	ctx.lr = 0x8290C76C;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290c790
	if (cr6.eq) goto loc_8290C790;
	// li r3,50
	ctx.r3.s64 = 50;
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
loc_8290C790:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82a38be0
	ctx.lr = 0x8290C7A0;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// addi r3,r11,49
	ctx.r3.s64 = ctx.r11.s64 + 49;
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

__attribute__((alias("__imp__sub_8290C7C8"))) PPC_WEAK_FUNC(sub_8290C7C8);
PPC_FUNC_IMPL(__imp__sub_8290C7C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8290C7D0;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,11
	ctx.r4.s64 = 11;
	// li r28,66
	ctx.r28.s64 = 66;
	// bl 0x82a38be0
	ctx.lr = 0x8290C7F0;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290c804
	if (cr6.eq) goto loc_8290C804;
	// li r28,67
	ctx.r28.s64 = 67;
	// b 0x8290c824
	goto loc_8290C824;
loc_8290C804:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82a38be0
	ctx.lr = 0x8290C814;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290c824
	if (cr6.eq) goto loc_8290C824;
	// li r28,70
	ctx.r28.s64 = 70;
loc_8290C824:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r4,37
	ctx.r4.s64 = 37;
	// lwz r3,-21736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21736);
	// bl 0x83747068
	ctx.lr = 0x8290C834;
	sub_83747068(ctx, base);
	// lbz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8290c948
	if (cr6.eq) goto loc_8290C948;
	// cmpwi cr6,r28,66
	cr6.compare<int32_t>(ctx.r28.s32, 66, xer);
	// bne cr6,0x8290c948
	if (!cr6.eq) goto loc_8290C948;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a38db8
	ctx.lr = 0x8290C860;
	sub_82A38DB8(ctx, base);
	// lfs f0,48(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x8290c948
	if (!cr6.gt) goto loc_8290C948;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f3,20048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20048);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,-25156(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25156);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a3b4c0
	ctx.lr = 0x8290C894;
	sub_82A3B4C0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x83740868
	ctx.lr = 0x8290C89C;
	sub_83740868(ctx, base);
	// lfs f0,44(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r27,r8
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r8.s32, xer);
	// blt cr6,0x8290c948
	if (cr6.lt) goto loc_8290C948;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x8290C8CC;
	sub_82A0C760(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,1024
	ctx.r9.s64 = 67108864;
	// rlwinm r8,r10,0,0,7
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// bne cr6,0x8290c948
	if (!cr6.eq) goto loc_8290C948;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a38db8
	ctx.lr = 0x8290C8F0;
	sub_82A38DB8(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f31,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x8290c944
	if (!cr6.lt) goto loc_8290C944;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a38db8
	ctx.lr = 0x8290C910;
	sub_82A38DB8(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// blt cr6,0x8290c948
	if (cr6.lt) goto loc_8290C948;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a38db8
	ctx.lr = 0x8290C928;
	sub_82A38DB8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82a38db8
	ctx.lr = 0x8290C93C;
	sub_82A38DB8(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// ble cr6,0x8290c948
	if (!cr6.gt) goto loc_8290C948;
loc_8290C944:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8290C948:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290c970
	if (cr6.eq) goto loc_8290C970;
	// lbz r11,41(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 41);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r3,r11,69
	ctx.r3.s64 = ctx.r11.s64 + 69;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8290C970:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290C980"))) PPC_WEAK_FUNC(sub_8290C980);
PPC_FUNC_IMPL(__imp__sub_8290C980) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82a38be0
	ctx.lr = 0x8290C9B4;
	sub_82A38BE0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8290c9e4
	if (!cr6.eq) goto loc_8290C9E4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,21
	ctx.r4.s64 = 21;
	// bl 0x82a38be0
	ctx.lr = 0x8290C9D0;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290c9e4
	if (cr6.eq) goto loc_8290C9E4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,21(r30)
	PPC_STORE_U8(ctx.r30.u32 + 21, ctx.r11.u8);
loc_8290C9E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290C9FC"))) PPC_WEAK_FUNC(sub_8290C9FC);
PPC_FUNC_IMPL(__imp__sub_8290C9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8290CA00"))) PPC_WEAK_FUNC(sub_8290CA00);
PPC_FUNC_IMPL(__imp__sub_8290CA00) {
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
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a38db8
	ctx.lr = 0x8290CA24;
	sub_82A38DB8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-11356(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11356);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8290ca70
	if (!cr6.lt) goto loc_8290CA70;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82a38be0
	ctx.lr = 0x8290CA44;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290ca70
	if (!cr6.eq) goto loc_8290CA70;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82a38be0
	ctx.lr = 0x8290CA60;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,18
	ctx.r3.s64 = 18;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290ca74
	if (!cr6.eq) goto loc_8290CA74;
loc_8290CA70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8290CA74:
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

__attribute__((alias("__imp__sub_8290CA88"))) PPC_WEAK_FUNC(sub_8290CA88);
PPC_FUNC_IMPL(__imp__sub_8290CA88) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82a38be0
	ctx.lr = 0x8290CAAC;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290cad8
	if (cr6.eq) goto loc_8290CAD8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82a38be0
	ctx.lr = 0x8290CAC8;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290cadc
	if (!cr6.eq) goto loc_8290CADC;
loc_8290CAD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8290CADC:
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

__attribute__((alias("__imp__sub_8290CAF0"))) PPC_WEAK_FUNC(sub_8290CAF0);
PPC_FUNC_IMPL(__imp__sub_8290CAF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82a38be0
	ctx.lr = 0x8290CB1C;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290cbdc
	if (cr6.eq) goto loc_8290CBDC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82a38be0
	ctx.lr = 0x8290CB38;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290cbdc
	if (cr6.eq) goto loc_8290CBDC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a2b578
	ctx.lr = 0x8290CB54;
	sub_82A2B578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290cbf8
	if (cr6.eq) goto loc_8290CBF8;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x8290cbdc
	if (!cr6.eq) goto loc_8290CBDC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x82a38c50
	ctx.lr = 0x8290CB7C;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290cbdc
	if (!cr6.eq) goto loc_8290CBDC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x82a38c50
	ctx.lr = 0x8290CB98;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290cbdc
	if (!cr6.eq) goto loc_8290CBDC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x82a38c50
	ctx.lr = 0x8290CBB4;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290cbdc
	if (!cr6.eq) goto loc_8290CBDC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82a38c50
	ctx.lr = 0x8290CBD0;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290cc70
	if (cr6.eq) goto loc_8290CC70;
loc_8290CBDC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8290CBE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8290CBF8:
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82907ce8
	ctx.lr = 0x8290CC04;
	sub_82907CE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290cc70
	if (!cr6.eq) goto loc_8290CC70;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x8290cc70
	if (!cr6.eq) goto loc_8290CC70;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,17
	ctx.r4.s64 = 17;
	// bl 0x82a38c50
	ctx.lr = 0x8290CC2C;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290cbdc
	if (!cr6.eq) goto loc_8290CBDC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,18
	ctx.r4.s64 = 18;
	// bl 0x82a38c50
	ctx.lr = 0x8290CC48;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290cbdc
	if (!cr6.eq) goto loc_8290CBDC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,18
	ctx.r4.s64 = 18;
	// bl 0x82a38be0
	ctx.lr = 0x8290CC64;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290cbdc
	if (!cr6.eq) goto loc_8290CBDC;
loc_8290CC70:
	// li r3,55
	ctx.r3.s64 = 55;
	// b 0x8290cbe0
	goto loc_8290CBE0;
}

__attribute__((alias("__imp__sub_8290CC78"))) PPC_WEAK_FUNC(sub_8290CC78);
PPC_FUNC_IMPL(__imp__sub_8290CC78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8290CC80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a38db8
	ctx.lr = 0x8290CC98;
	sub_82A38DB8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-11356(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11356);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8290ce40
	if (!cr6.lt) goto loc_8290CE40;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82a38be0
	ctx.lr = 0x8290CCB8;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290ce40
	if (!cr6.eq) goto loc_8290CE40;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82a2b4e0
	ctx.lr = 0x8290CCD8;
	sub_82A2B4E0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r4,11
	ctx.r4.s64 = 11;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bne cr6,0x8290cd18
	if (!cr6.eq) goto loc_8290CD18;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x82a39ad0
	ctx.lr = 0x8290CD04;
	sub_82A39AD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290cda8
	if (cr6.eq) goto loc_8290CDA8;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x8290cda8
	goto loc_8290CDA8;
loc_8290CD18:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82a38be0
	ctx.lr = 0x8290CD20;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290cd4c
	if (cr6.eq) goto loc_8290CD4C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82a38be0
	ctx.lr = 0x8290CD3C;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290cd4c
	if (!cr6.eq) goto loc_8290CD4C;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8290CD4C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x8290cd60
	if (!cr6.lt) goto loc_8290CD60;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8290cd88
	goto loc_8290CD88;
loc_8290CD60:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x8290cd70
	if (!cr6.lt) goto loc_8290CD70;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8290cd88
	goto loc_8290CD88;
loc_8290CD70:
	// li r10,22
	ctx.r10.s64 = 22;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r8,r10,r11
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r4,r6,31
	ctx.r4.u64 = ctx.r6.u32 & 0x1;
loc_8290CD88:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x8290CD94;
	sub_82A0C710(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bne cr6,0x8290cda8
	if (!cr6.eq) goto loc_8290CDA8;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8290CDA8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290ce40
	if (cr6.eq) goto loc_8290CE40;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bge cr6,0x8290cdd0
	if (!cr6.lt) goto loc_8290CDD0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8290cdf8
	goto loc_8290CDF8;
loc_8290CDD0:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x8290cde0
	if (!cr6.lt) goto loc_8290CDE0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8290cdf8
	goto loc_8290CDF8;
loc_8290CDE0:
	// li r10,22
	ctx.r10.s64 = 22;
	// subfc r8,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r7,r10,r11
	ctx.r7.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
loc_8290CDF8:
	// addis r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 65536;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// addi r10,r10,24224
	ctx.r10.s64 = ctx.r10.s64 + 24224;
	// blt cr6,0x8290ce10
	if (cr6.lt) goto loc_8290CE10;
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// b 0x8290ce14
	goto loc_8290CE14;
loc_8290CE10:
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
loc_8290CE14:
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290ce40
	if (!cr6.eq) goto loc_8290CE40;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r3,r11,17
	ctx.r3.s64 = ctx.r11.s64 + 17;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8290CE40:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290CE4C"))) PPC_WEAK_FUNC(sub_8290CE4C);
PPC_FUNC_IMPL(__imp__sub_8290CE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8290CE50"))) PPC_WEAK_FUNC(sub_8290CE50);
PPC_FUNC_IMPL(__imp__sub_8290CE50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8290CE58;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,10
	ctx.r10.s64 = 10;
	// li r9,20
	ctx.r9.s64 = 20;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r8,21
	ctx.r8.s64 = 21;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x82a2b4e0
	ctx.lr = 0x8290CE98;
	sub_82A2B4E0(ctx, base);
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpw cr6,r3,r7
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, xer);
	// beq cr6,0x8290ceb0
	if (cr6.eq) goto loc_8290CEB0;
loc_8290CEA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8290CEB0:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r9,8516(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8516);
	// cmpwi cr6,r9,4
	cr6.compare<int32_t>(ctx.r9.s32, 4, xer);
	// beq cr6,0x8290cea4
	if (cr6.eq) goto loc_8290CEA4;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// li r28,4
	ctx.r28.s64 = 4;
loc_8290CED0:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a38c50
	ctx.lr = 0x8290CEE4;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290cf00
	if (cr6.eq) goto loc_8290CF00;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r26,r11,24
	ctx.r26.u64 = ctx.r11.u32 & 0xFF;
	// b 0x8290cf28
	goto loc_8290CF28;
loc_8290CF00:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a38be0
	ctx.lr = 0x8290CF10;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290cf28
	if (cr6.eq) goto loc_8290CF28;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r27,r11,24
	ctx.r27.u64 = ctx.r11.u32 & 0xFF;
loc_8290CF28:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8290ced0
	if (!cr0.eq) goto loc_8290CED0;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// beq cr6,0x8290cf54
	if (cr6.eq) goto loc_8290CF54;
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bne cr6,0x8290cf54
	if (!cr6.eq) goto loc_8290CF54;
	// li r25,1
	ctx.r25.s64 = 1;
loc_8290CF54:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290CF60"))) PPC_WEAK_FUNC(sub_8290CF60);
PPC_FUNC_IMPL(__imp__sub_8290CF60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x8290CF8C;
	sub_82A0C760(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,13568
	ctx.r9.s64 = 889192448;
	// rlwinm r8,r10,0,0,7
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// bne cr6,0x8290cfb0
	if (!cr6.eq) goto loc_8290CFB0;
	// li r5,86
	ctx.r5.s64 = 86;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829088a0
	ctx.lr = 0x8290CFB0;
	sub_829088A0(ctx, base);
loc_8290CFB0:
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

__attribute__((alias("__imp__sub_8290CFCC"))) PPC_WEAK_FUNC(sub_8290CFCC);
PPC_FUNC_IMPL(__imp__sub_8290CFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8290CFD0"))) PPC_WEAK_FUNC(sub_8290CFD0);
PPC_FUNC_IMPL(__imp__sub_8290CFD0) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x8290CFF4;
	sub_82A0C760(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,13568
	ctx.r9.s64 = 889192448;
	// rlwinm r8,r10,0,0,7
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// bne cr6,0x8290d028
	if (!cr6.eq) goto loc_8290D028;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,86
	ctx.r3.s64 = 86;
	// stb r11,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r11.u8);
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
loc_8290D028:
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

__attribute__((alias("__imp__sub_8290D040"))) PPC_WEAK_FUNC(sub_8290D040);
PPC_FUNC_IMPL(__imp__sub_8290D040) {
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
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82a38be0
	ctx.lr = 0x8290D064;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290d07c
	if (cr6.eq) goto loc_8290D07C;
	// lbz r11,21(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stb r10,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r10.u8);
loc_8290D07C:
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

__attribute__((alias("__imp__sub_8290D090"))) PPC_WEAK_FUNC(sub_8290D090);
PPC_FUNC_IMPL(__imp__sub_8290D090) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r10,105
	ctx.r10.s64 = 105;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290D0A8"))) PPC_WEAK_FUNC(sub_8290D0A8);
PPC_FUNC_IMPL(__imp__sub_8290D0A8) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r9,15
	ctx.r9.s64 = 15;
	// addi r10,r11,16456
	ctx.r10.s64 = ctx.r11.s64 + 16456;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8290D0F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r31,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r31.u8);
	// addi r5,r6,23788
	ctx.r5.s64 = ctx.r6.s64 + 23788;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r4,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r4.u32);
	// stb r11,52(r30)
	PPC_STORE_U8(ctx.r30.u32 + 52, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290D130"))) PPC_WEAK_FUNC(sub_8290D130);
PPC_FUNC_IMPL(__imp__sub_8290D130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8290D138;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31763
	ctx.r28.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,-3564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r29,292(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r26,32(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lbz r9,112(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 112);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8290d3a0
	if (!cr6.eq) goto loc_8290D3A0;
	// lbz r10,4496(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4496);
	// cmplwi cr6,r10,21
	cr6.compare<uint32_t>(ctx.r10.u32, 21, xer);
	// beq cr6,0x8290d2dc
	if (cr6.eq) goto loc_8290D2DC;
	// cmplwi cr6,r10,22
	cr6.compare<uint32_t>(ctx.r10.u32, 22, xer);
	// bne cr6,0x8290d3a0
	if (!cr6.eq) goto loc_8290D3A0;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8290d1a8
	if (cr6.eq) goto loc_8290D1A8;
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8290d1a8
	if (cr6.eq) goto loc_8290D1A8;
	// bl 0x82da1d10
	ctx.lr = 0x8290D19C;
	sub_82DA1D10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290d3a0
	if (!cr6.eq) goto loc_8290D3A0;
loc_8290D1A8:
	// li r27,0
	ctx.r27.s64 = 0;
	// stb r27,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r27.u8);
	// lwz r29,5756(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5756);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x8290d1c8
	if (cr6.lt) goto loc_8290D1C8;
	// cmpwi cr6,r29,22
	cr6.compare<int32_t>(ctx.r29.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8290d1cc
	if (cr6.lt) goto loc_8290D1CC;
loc_8290D1C8:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8290D1CC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290d210
	if (cr6.eq) goto loc_8290D210;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82a38be0
	ctx.lr = 0x8290D1E8;
	sub_82A38BE0(ctx, base);
	// stb r3,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r3.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x8290D1F8;
	sub_82A0C760(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,13568
	ctx.r10.s64 = 889192448;
	// rlwinm r9,r11,0,0,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// beq cr6,0x8290d210
	if (cr6.eq) goto loc_8290D210;
	// stb r27,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r27.u8);
loc_8290D210:
	// lbz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290d254
	if (cr6.eq) goto loc_8290D254;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82908ba0
	ctx.lr = 0x8290D230;
	sub_82908BA0(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f1,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// stfs f12,88(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// b 0x8290d388
	goto loc_8290D388;
loc_8290D254:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f12,8144(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8144);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f0,23664(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23664);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20056);
	ctx.f13.f64 = double(temp.f32);
	// fsel f31,f12,f0,f13
	ctx.f31.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// bl 0x82a38db8
	ctx.lr = 0x8290D288;
	sub_82A38DB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x82a38d50
	ctx.lr = 0x8290D29C;
	sub_82A38D50(ctx, base);
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// bl 0x82908958
	ctx.lr = 0x8290D2B8;
	sub_82908958(ctx, base);
	// lfs f11,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,80(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,84(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f1,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// stfs f9,88(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// b 0x8290d388
	goto loc_8290D388;
loc_8290D2DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8290D2F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lbz r8,56(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 56);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lfs f31,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x8290d334
	if (cr6.eq) goto loc_8290D334;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82908ba0
	ctx.lr = 0x8290D318;
	sub_82908BA0(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,88(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// b 0x8290d384
	goto loc_8290D384;
loc_8290D334:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f12,8144(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8144);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lfs f0,23664(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23664);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20056);
	ctx.f13.f64 = double(temp.f32);
	// fsel f3,f12,f0,f13
	ctx.f3.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// bl 0x82908958
	ctx.lr = 0x8290D36C;
	sub_82908958(ctx, base);
	// lfs f11,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,80(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,84(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,88(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
loc_8290D384:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_8290D388:
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r7,54
	ctx.r7.s64 = 54;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x827cd2e8
	ctx.lr = 0x8290D39C;
	sub_827CD2E8(ctx, base);
	// stfs f1,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
loc_8290D3A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290D3B4"))) PPC_WEAK_FUNC(sub_8290D3B4);
PPC_FUNC_IMPL(__imp__sub_8290D3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8290D3B8"))) PPC_WEAK_FUNC(sub_8290D3B8);
PPC_FUNC_IMPL(__imp__sub_8290D3B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8290D3C0;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31763
	ctx.r27.s64 = -2081619968;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r3,-3564(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lbz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 112);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8290d518
	if (!cr6.eq) goto loc_8290D518;
	// lwz r31,292(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r4,5756(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5756);
	// lwz r30,132(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r28,12(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x8290d40c
	if (cr6.lt) goto loc_8290D40C;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8290d410
	if (cr6.lt) goto loc_8290D410;
loc_8290D40C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8290D410:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290d4a0
	if (cr6.eq) goto loc_8290D4A0;
	// bl 0x82a0c760
	ctx.lr = 0x8290D420;
	sub_82A0C760(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,13568
	ctx.r10.s64 = 889192448;
	// rlwinm r9,r11,0,0,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// beq cr6,0x8290d4a0
	if (cr6.eq) goto loc_8290D4A0;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a227f0
	ctx.lr = 0x8290D440;
	sub_82A227F0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x8290d4a0
	if (cr6.eq) goto loc_8290D4A0;
	// bl 0x83740858
	ctx.lr = 0x8290D454;
	sub_83740858(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r9,4472(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4472);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,-24912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,4484(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4484);
	// subf r11,r8,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r8.s64;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bge cr6,0x8290d4a0
	if (!cr6.lt) goto loc_8290D4A0;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x8290d518
	if (cr6.lt) goto loc_8290D518;
loc_8290D4A0:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82908448
	ctx.lr = 0x8290D4B4;
	sub_82908448(ctx, base);
	// lwz r3,-3564(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x82a0c788
	ctx.lr = 0x8290D4C0;
	sub_82A0C788(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,1280(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1280);
	ctx.f13.f64 = double(temp.f32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8290d4dc
	if (cr6.gt) goto loc_8290D4DC;
	// li r4,1
	ctx.r4.s64 = 1;
loc_8290D4DC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82a407e0
	ctx.lr = 0x8290D4E8;
	sub_82A407E0(ctx, base);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x825ce9f8
	ctx.lr = 0x8290D4F0;
	sub_825CE9F8(ctx, base);
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f13,19176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19176);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8290d518
	if (cr6.lt) goto loc_8290D518;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,57
	ctx.r3.s64 = 57;
	// lfs f13,-8380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8380);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8290d51c
	if (!cr6.gt) goto loc_8290D51C;
loc_8290D518:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8290D51C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290D528"))) PPC_WEAK_FUNC(sub_8290D528);
PPC_FUNC_IMPL(__imp__sub_8290D528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8290D530;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r29,-31763
	ctx.r29.s64 = -2081619968;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r3,-3564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// lwz r28,132(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a0c760
	ctx.lr = 0x8290D554;
	sub_82A0C760(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x8290d658
	if (cr6.gt) goto loc_8290D658;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8290d580
	if (cr6.eq) goto loc_8290D580;
	// bdz 0x8290d600
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8290D600;
	// bdz 0x8290d630
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8290D630;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
loc_8290D580:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a22b40
	ctx.lr = 0x8290D58C;
	sub_82A22B40(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x8290d658
	if (!cr6.eq) goto loc_8290D658;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82a3cf08
	ctx.lr = 0x8290D5A4;
	sub_82A3CF08(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8290d658
	if (!cr6.eq) goto loc_8290D658;
	// lwz r3,-3564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82a0c7b0
	ctx.lr = 0x8290D5BC;
	sub_82A0C7B0(ctx, base);
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x82a3cf08
	ctx.lr = 0x8290D5C4;
	sub_82A3CF08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290d658
	if (!cr6.eq) goto loc_8290D658;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82a38db8
	ctx.lr = 0x8290D5E0;
	sub_82A38DB8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,20048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8290d658
	if (cr6.lt) goto loc_8290D658;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8290D600:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82a38db8
	ctx.lr = 0x8290D610;
	sub_82A38DB8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,20048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8290d650
	if (cr6.lt) goto loc_8290D650;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8290D630:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82a38db8
	ctx.lr = 0x8290D640;
	sub_82A38DB8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,20048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8290d658
	if (!cr6.lt) goto loc_8290D658;
loc_8290D650:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
loc_8290D658:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290D660"))) PPC_WEAK_FUNC(sub_8290D660);
PPC_FUNC_IMPL(__imp__sub_8290D660) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8290D668;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8290d880
	if (!cr6.eq) goto loc_8290D880;
	// lis r29,-31763
	ctx.r29.s64 = -2081619968;
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r3,-3564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x8290D694;
	sub_82A0C788(ctx, base);
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r29,292(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r23,6112(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// lwz r24,32(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r28,132(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// lwz r30,12(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x82908448
	ctx.lr = 0x8290D6C8;
	sub_82908448(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r26,r27,1280
	ctx.r26.s64 = ctx.r27.s64 + 1280;
	// lfs f12,1280(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 1280);
	ctx.f12.f64 = double(temp.f32);
	// li r25,1
	ctx.r25.s64 = 1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lfs f13,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x8290d6f4
	if (cr6.gt) goto loc_8290D6F4;
	// li r4,1
	ctx.r4.s64 = 1;
loc_8290D6F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f0.f64;
	// bl 0x82a407c0
	ctx.lr = 0x8290D700;
	sub_82A407C0(ctx, base);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x825ce9f8
	ctx.lr = 0x8290D708;
	sub_825CE9F8(ctx, base);
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f31,-23848(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23848);
	ctx.f31.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8290d724
	if (!cr6.gt) goto loc_8290D724;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8290D724:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r29,4472(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4472);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82a22b40
	ctx.lr = 0x8290D738;
	sub_82A22B40(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// subf r29,r11,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r11.s64;
	// bne cr6,0x8290d788
	if (!cr6.eq) goto loc_8290D788;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826c76b8
	ctx.lr = 0x8290D760;
	sub_826C76B8(ctx, base);
	// lfs f13,1288(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 1288);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// li r25,1
	ctx.r25.s64 = 1;
	// lfs f0,-11300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11300);
	ctx.f0.f64 = double(temp.f32);
	// fabs f10,f11
	ctx.f10.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// blt cr6,0x8290d788
	if (cr6.lt) goto loc_8290D788;
	// li r25,0
	ctx.r25.s64 = 0;
loc_8290D788:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290d7cc
	if (!cr6.eq) goto loc_8290D7CC;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826c7a30
	ctx.lr = 0x8290D7B0;
	sub_826C7A30(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r3,r11,72
	ctx.r3.s64 = ctx.r11.s64 + 72;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8290D7CC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8290d880
	if (cr6.eq) goto loc_8290D880;
	// bl 0x83740858
	ctx.lr = 0x8290D7D8;
	sub_83740858(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,48
	ctx.r31.s64 = 48;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// divwu r10,r11,r31
	ctx.r10.u32 = PPCDivide(ctx.r11.u32, ctx.r31.u32);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// bge cr6,0x8290d880
	if (!cr6.lt) goto loc_8290D880;
	// bl 0x83740858
	ctx.lr = 0x8290D7F4;
	sub_83740858(ctx, base);
	// mulli r11,r3,23
	ctx.r11.s64 = ctx.r3.s64 * 23;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// divwu r4,r11,r31
	ctx.r4.u32 = PPCDivide(ctx.r11.u32, ctx.r31.u32);
	// bl 0x82a44ac0
	ctx.lr = 0x8290D804;
	sub_82A44AC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825ca560
	ctx.lr = 0x8290D814;
	sub_825CA560(ctx, base);
	// addi r4,r27,1272
	ctx.r4.s64 = ctx.r27.s64 + 1272;
	// bl 0x825eb4d0
	ctx.lr = 0x8290D81C;
	sub_825EB4D0(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f0,-8316(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8316);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8290d838
	if (cr6.gt) goto loc_8290D838;
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// li r11,0
	ctx.r11.s64 = 0;
	// bge cr6,0x8290d83c
	if (!cr6.lt) goto loc_8290D83C;
loc_8290D838:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8290D83C:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f12,0(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x8290d870
	if (!cr6.gt) goto loc_8290D870;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8290d870
	if (cr6.eq) goto loc_8290D870;
	// li r3,73
	ctx.r3.s64 = 73;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8290D870:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r3,24
	ctx.r3.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290d884
	if (cr6.eq) goto loc_8290D884;
loc_8290D880:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8290D884:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290D890"))) PPC_WEAK_FUNC(sub_8290D890);
PPC_FUNC_IMPL(__imp__sub_8290D890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8290D898;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31763
	ctx.r29.s64 = -2081619968;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r3,-3564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x8290D8B4;
	sub_82A0C760(ctx, base);
	// lwz r10,-3564(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// lwz r10,192(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	// bgt cr6,0x8290da94
	if (cr6.gt) goto loc_8290DA94;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8290d8e8
	if (cr6.eq) goto loc_8290D8E8;
	// bdz 0x8290da3c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8290DA3C;
	// bdz 0x8290da6c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8290DA6C;
	// stw r9,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r9.u32);
	// stb r9,21(r30)
	PPC_STORE_U8(ctx.r30.u32 + 21, ctx.r9.u8);
loc_8290D8E8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// bge cr6,0x8290da94
	if (!cr6.lt) goto loc_8290DA94;
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lbz r11,1(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290d914
	if (cr6.eq) goto loc_8290D914;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8290d934
	goto loc_8290D934;
loc_8290D914:
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8290d92c
	if (cr6.lt) goto loc_8290D92C;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// blt cr6,0x8290d930
	if (cr6.lt) goto loc_8290D930;
loc_8290D92C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8290D930:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8290D934:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290da94
	if (cr6.eq) goto loc_8290DA94;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8353b168
	ctx.lr = 0x8290D950;
	sub_8353B168(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8290da94
	if (cr6.eq) goto loc_8290DA94;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8290D96C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8290da94
	if (cr6.eq) goto loc_8290DA94;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8290D990;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8290d9a8
	if (cr6.eq) goto loc_8290D9A8;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r29,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r29.u32);
	// stb r11,21(r30)
	PPC_STORE_U8(ctx.r30.u32 + 21, ctx.r11.u8);
loc_8290D9A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8290D9C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8290d9d4
	if (cr6.eq) goto loc_8290D9D4;
	// stw r29,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r29.u32);
	// stb r29,21(r30)
	PPC_STORE_U8(ctx.r30.u32 + 21, ctx.r29.u8);
loc_8290D9D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8290D9EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8290da04
	if (cr6.eq) goto loc_8290DA04;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r29,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r29.u32);
	// stb r11,21(r30)
	PPC_STORE_U8(ctx.r30.u32 + 21, ctx.r11.u8);
loc_8290DA04:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8290DA1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8290da94
	if (cr6.eq) goto loc_8290DA94;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r29,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r29.u32);
	// stb r11,21(r30)
	PPC_STORE_U8(ctx.r30.u32 + 21, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8290DA3C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82a38db8
	ctx.lr = 0x8290DA4C;
	sub_82A38DB8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,20048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8290da8c
	if (cr6.lt) goto loc_8290DA8C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8290DA6C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82a38db8
	ctx.lr = 0x8290DA7C;
	sub_82A38DB8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,20048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8290da94
	if (!cr6.lt) goto loc_8290DA94;
loc_8290DA8C:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
loc_8290DA94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290DA9C"))) PPC_WEAK_FUNC(sub_8290DA9C);
PPC_FUNC_IMPL(__imp__sub_8290DA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8290DAA0"))) PPC_WEAK_FUNC(sub_8290DAA0);
PPC_FUNC_IMPL(__imp__sub_8290DAA0) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x8290dbb0
	if (cr6.gt) goto loc_8290DBB0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8290dae4
	if (cr6.eq) goto loc_8290DAE4;
	// bdz 0x8290db28
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8290DB28;
	// bdz 0x8290db6c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8290DB6C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_8290DAE4:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82a38be0
	ctx.lr = 0x8290DAF4;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290dbb0
	if (cr6.eq) goto loc_8290DBB0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82a38db8
	ctx.lr = 0x8290DB10;
	sub_82A38DB8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,20048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8290dbb0
	if (cr6.lt) goto loc_8290DBB0;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8290dbac
	goto loc_8290DBAC;
loc_8290DB28:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82a38be0
	ctx.lr = 0x8290DB38;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290dba8
	if (cr6.eq) goto loc_8290DBA8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82a38db8
	ctx.lr = 0x8290DB54;
	sub_82A38DB8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,20048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8290dba8
	if (cr6.lt) goto loc_8290DBA8;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8290dbac
	goto loc_8290DBAC;
loc_8290DB6C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82a38be0
	ctx.lr = 0x8290DB7C;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290dba8
	if (cr6.eq) goto loc_8290DBA8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82a38db8
	ctx.lr = 0x8290DB98;
	sub_82A38DB8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,20048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8290dbb0
	if (!cr6.lt) goto loc_8290DBB0;
loc_8290DBA8:
	// li r11,3
	ctx.r11.s64 = 3;
loc_8290DBAC:
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_8290DBB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290DBC8"))) PPC_WEAK_FUNC(sub_8290DBC8);
PPC_FUNC_IMPL(__imp__sub_8290DBC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8290DBD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r29,292(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x82a38be0
	ctx.lr = 0x8290DBF8;
	sub_82A38BE0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8290dc98
	if (cr6.eq) goto loc_8290DC98;
	// lwz r11,5116(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5116);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// extsb r31,r11
	ctx.r31.s64 = ctx.r11.s8;
	// bl 0x82a38c50
	ctx.lr = 0x8290DC1C;
	sub_82A38C50(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8290dc3c
	if (cr6.eq) goto loc_8290DC3C;
	// extsb r11,r31
	ctx.r11.s64 = ctx.r31.s8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r31,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r31.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x8290dc70
	goto loc_8290DC70;
loc_8290DC3C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82a38c50
	ctx.lr = 0x8290DC4C;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290dc70
	if (cr6.eq) goto loc_8290DC70;
	// extsb r11,r31
	ctx.r11.s64 = ctx.r31.s8;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r7,r10
	ctx.r31.u64 = ctx.r7.u64 & ctx.r10.u64;
loc_8290DC70:
	// extsb r11,r31
	ctx.r11.s64 = ctx.r31.s8;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x8290dc98
	if (cr6.eq) goto loc_8290DC98;
	// lwz r10,5116(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5116);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x8290dc98
	if (cr6.eq) goto loc_8290DC98;
	// stb r31,21(r28)
	PPC_STORE_U8(ctx.r28.u32 + 21, ctx.r31.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8290DC98:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290DCA4"))) PPC_WEAK_FUNC(sub_8290DCA4);
PPC_FUNC_IMPL(__imp__sub_8290DCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8290DCA8"))) PPC_WEAK_FUNC(sub_8290DCA8);
PPC_FUNC_IMPL(__imp__sub_8290DCA8) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82908448
	ctx.lr = 0x8290DCCC;
	sub_82908448(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f2,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-23844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23844);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825ce9f8
	ctx.lr = 0x8290DCDC;
	sub_825CE9F8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r3,44
	ctx.r3.s64 = 44;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8290dcf8
	if (cr6.gt) goto loc_8290DCF8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8290DCF8:
	// stb r11,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_8290DD10"))) PPC_WEAK_FUNC(sub_8290DD10);
PPC_FUNC_IMPL(__imp__sub_8290DD10) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x8290ddfc
	if (cr6.gt) goto loc_8290DDFC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8290dd58
	if (cr6.eq) goto loc_8290DD58;
	// bdz 0x8290dd98
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8290DD98;
	// bdz 0x8290ddc0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8290DDC0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_8290DD58:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82a38db8
	ctx.lr = 0x8290DD68;
	sub_82A38DB8(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lfs f31,16100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16100);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// blt cr6,0x8290ddfc
	if (cr6.lt) goto loc_8290DDFC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82a38db8
	ctx.lr = 0x8290DD88;
	sub_82A38DB8(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x8290ddfc
	if (!cr6.lt) goto loc_8290DDFC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8290ddf8
	goto loc_8290DDF8;
loc_8290DD98:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82a38db8
	ctx.lr = 0x8290DDA8;
	sub_82A38DB8(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lfs f0,16100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16100);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8290ddf4
	if (cr6.lt) goto loc_8290DDF4;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8290ddf8
	goto loc_8290DDF8;
loc_8290DDC0:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82a38db8
	ctx.lr = 0x8290DDD0;
	sub_82A38DB8(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lfs f0,16100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16100);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8290ddf4
	if (cr6.lt) goto loc_8290DDF4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8290ddfc
	if (cr6.lt) goto loc_8290DDFC;
loc_8290DDF4:
	// li r11,3
	ctx.r11.s64 = 3;
loc_8290DDF8:
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_8290DDFC:
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

__attribute__((alias("__imp__sub_8290DE18"))) PPC_WEAK_FUNC(sub_8290DE18);
PPC_FUNC_IMPL(__imp__sub_8290DE18) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82908448
	ctx.lr = 0x8290DE44;
	sub_82908448(ctx, base);
	// li r5,75
	ctx.r5.s64 = 75;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829088a0
	ctx.lr = 0x8290DE54;
	sub_829088A0(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
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

__attribute__((alias("__imp__sub_8290DE78"))) PPC_WEAK_FUNC(sub_8290DE78);
PPC_FUNC_IMPL(__imp__sub_8290DE78) {
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
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82a38be0
	ctx.lr = 0x8290DE9C;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290dec8
	if (cr6.eq) goto loc_8290DEC8;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,75
	ctx.r3.s64 = 75;
	// stb r11,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r11.u8);
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
loc_8290DEC8:
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

__attribute__((alias("__imp__sub_8290DEE0"))) PPC_WEAK_FUNC(sub_8290DEE0);
PPC_FUNC_IMPL(__imp__sub_8290DEE0) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x8290e020
	if (cr6.gt) goto loc_8290E020;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8290df28
	if (cr6.eq) goto loc_8290DF28;
	// bdz 0x8290df84
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8290DF84;
	// bdz 0x8290dfc8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8290DFC8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_8290DF28:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82a38be0
	ctx.lr = 0x8290DF38;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290e020
	if (cr6.eq) goto loc_8290E020;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82a38db8
	ctx.lr = 0x8290DF54;
	sub_82A38DB8(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lfs f31,16100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16100);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// blt cr6,0x8290e020
	if (cr6.lt) goto loc_8290E020;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82a38db8
	ctx.lr = 0x8290DF74;
	sub_82A38DB8(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x8290e020
	if (!cr6.lt) goto loc_8290E020;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8290e01c
	goto loc_8290E01C;
loc_8290DF84:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82a38be0
	ctx.lr = 0x8290DF94;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290e018
	if (cr6.eq) goto loc_8290E018;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82a38db8
	ctx.lr = 0x8290DFB0;
	sub_82A38DB8(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lfs f0,16100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16100);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8290e018
	if (cr6.lt) goto loc_8290E018;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8290e01c
	goto loc_8290E01C;
loc_8290DFC8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82a38be0
	ctx.lr = 0x8290DFD8;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290e018
	if (cr6.eq) goto loc_8290E018;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82a38db8
	ctx.lr = 0x8290DFF4;
	sub_82A38DB8(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lfs f0,16100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16100);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8290e018
	if (cr6.lt) goto loc_8290E018;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8290e020
	if (cr6.lt) goto loc_8290E020;
loc_8290E018:
	// li r11,3
	ctx.r11.s64 = 3;
loc_8290E01C:
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_8290E020:
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

__attribute__((alias("__imp__sub_8290E03C"))) PPC_WEAK_FUNC(sub_8290E03C);
PPC_FUNC_IMPL(__imp__sub_8290E03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8290E040"))) PPC_WEAK_FUNC(sub_8290E040);
PPC_FUNC_IMPL(__imp__sub_8290E040) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82908448
	ctx.lr = 0x8290E06C;
	sub_82908448(ctx, base);
	// li r5,60
	ctx.r5.s64 = 60;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829088a0
	ctx.lr = 0x8290E07C;
	sub_829088A0(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
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

__attribute__((alias("__imp__sub_8290E0A0"))) PPC_WEAK_FUNC(sub_8290E0A0);
PPC_FUNC_IMPL(__imp__sub_8290E0A0) {
	PPC_FUNC_PROLOGUE();
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
	// li r5,38
	ctx.r5.s64 = 38;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x829088a0
	ctx.lr = 0x8290E0C4;
	sub_829088A0(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82908448
	ctx.lr = 0x8290E0D8;
	sub_82908448(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
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

__attribute__((alias("__imp__sub_8290E0FC"))) PPC_WEAK_FUNC(sub_8290E0FC);
PPC_FUNC_IMPL(__imp__sub_8290E0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8290E100"))) PPC_WEAK_FUNC(sub_8290E100);
PPC_FUNC_IMPL(__imp__sub_8290E100) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,18
	ctx.r4.s64 = 18;
	// b 0x82a39ad0
	sub_82A39AD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290E11C"))) PPC_WEAK_FUNC(sub_8290E11C);
PPC_FUNC_IMPL(__imp__sub_8290E11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8290E120"))) PPC_WEAK_FUNC(sub_8290E120);
PPC_FUNC_IMPL(__imp__sub_8290E120) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8290E128;
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
	// lfs f13,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8290e21c
	if (!cr6.gt) goto loc_8290E21C;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x8290e160
	if (!cr6.lt) goto loc_8290E160;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8290e188
	goto loc_8290E188;
loc_8290E160:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x8290e170
	if (!cr6.lt) goto loc_8290E170;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8290e188
	goto loc_8290E188;
loc_8290E170:
	// li r10,22
	ctx.r10.s64 = 22;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r8,r10,r11
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r31,r6,31
	ctx.r31.u64 = ctx.r6.u32 & 0x1;
loc_8290E188:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r27,192(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// bl 0x82a0c710
	ctx.lr = 0x8290E19C;
	sub_82A0C710(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a33940
	ctx.lr = 0x8290E1AC;
	sub_82A33940(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8290E1B0:
	// addi r10,r11,4729
	ctx.r10.s64 = ctx.r11.s64 + 4729;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x8290e1d4
	if (cr6.eq) goto loc_8290E1D4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// blt cr6,0x8290e1b0
	if (cr6.lt) goto loc_8290E1B0;
loc_8290E1D4:
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f31,28(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f31.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r30,r29,52
	ctx.r30.s64 = ctx.r29.s64 + 52;
	// bl 0x82a38d50
	ctx.lr = 0x8290E1EC;
	sub_82A38D50(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,52(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x82a33d30
	ctx.lr = 0x8290E20C;
	sub_82A33D30(ctx, base);
	// li r3,38
	ctx.r3.s64 = 38;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8290E21C:
	// li r11,255
	ctx.r11.s64 = 255;
	// li r3,38
	ctx.r3.s64 = 38;
	// stw r11,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290E234"))) PPC_WEAK_FUNC(sub_8290E234);
PPC_FUNC_IMPL(__imp__sub_8290E234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8290E238"))) PPC_WEAK_FUNC(sub_8290E238);
PPC_FUNC_IMPL(__imp__sub_8290E238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8290E240;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x8290e264
	if (!cr6.lt) goto loc_8290E264;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8290e28c
	goto loc_8290E28C;
loc_8290E264:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x8290e274
	if (!cr6.lt) goto loc_8290E274;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8290e28c
	goto loc_8290E28C;
loc_8290E274:
	// li r10,22
	ctx.r10.s64 = 22;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r8,r10,r11
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r4,r6,31
	ctx.r4.u64 = ctx.r6.u32 & 0x1;
loc_8290E28C:
	// lis r28,-31763
	ctx.r28.s64 = -2081619968;
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x8290E298;
	sub_82A0C710(ctx, base);
	// lwz r11,-3564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r10,4460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4460);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x8290e2d0
	if (!cr6.eq) goto loc_8290E2D0;
	// lbz r11,253(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 253);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290e2d0
	if (cr6.eq) goto loc_8290E2D0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82908498
	ctx.lr = 0x8290E2C8;
	sub_82908498(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8290E2D0:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8290e2e8
	if (cr6.lt) goto loc_8290E2E8;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8290e2ec
	if (cr6.lt) goto loc_8290E2EC;
loc_8290E2E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8290E2EC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290e318
	if (cr6.eq) goto loc_8290E318;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8290E30C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,38
	ctx.r3.s64 = 38;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8290E318:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8290e338
	if (cr6.eq) goto loc_8290E338;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8290E338;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8290E338:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290E344"))) PPC_WEAK_FUNC(sub_8290E344);
PPC_FUNC_IMPL(__imp__sub_8290E344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8290E348"))) PPC_WEAK_FUNC(sub_8290E348);
PPC_FUNC_IMPL(__imp__sub_8290E348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8290E350;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x8290e37c
	if (!cr6.lt) goto loc_8290E37C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// b 0x8290e3a4
	goto loc_8290E3A4;
loc_8290E37C:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x8290e38c
	if (!cr6.lt) goto loc_8290E38C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// b 0x8290e3a4
	goto loc_8290E3A4;
loc_8290E38C:
	// li r10,22
	ctx.r10.s64 = 22;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r8,r10,r11
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r4,r6,31
	ctx.r4.u64 = ctx.r6.u32 & 0x1;
loc_8290E3A4:
	// lis r27,-31763
	ctx.r27.s64 = -2081619968;
	// lwz r3,-3564(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x8290E3B0;
	sub_82A0C710(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x8290e6e0
	if (cr6.gt) goto loc_8290E6E0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8290e3d4
	if (cr6.eq) goto loc_8290E3D4;
	// bdz 0x8290e634
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8290E634;
	// bdz 0x8290e688
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8290E688;
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
loc_8290E3D4:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8290e3e4
	if (cr6.eq) goto loc_8290E3E4;
	// stw r26,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r26.u32);
loc_8290E3E4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x8290e3fc
	if (!cr6.gt) goto loc_8290E3FC;
	// stfs f30,28(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
loc_8290E3FC:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// bl 0x82a38db8
	ctx.lr = 0x8290E410;
	sub_82A38DB8(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r28,1
	ctx.r28.s64 = 1;
	// lfs f31,16100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16100);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// blt cr6,0x8290e440
	if (cr6.lt) goto loc_8290E440;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82a38db8
	ctx.lr = 0x8290E434;
	sub_82A38DB8(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x8290e440
	if (!cr6.lt) goto loc_8290E440;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8290E440:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x82a38c50
	ctx.lr = 0x8290E450;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290e464
	if (cr6.eq) goto loc_8290E464;
	// li r11,32
	ctx.r11.s64 = 32;
	// b 0x8290e508
	goto loc_8290E508;
loc_8290E464:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x82a38c50
	ctx.lr = 0x8290E474;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290e488
	if (cr6.eq) goto loc_8290E488;
	// li r11,31
	ctx.r11.s64 = 31;
	// b 0x8290e508
	goto loc_8290E508;
loc_8290E488:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82a38c50
	ctx.lr = 0x8290E498;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290e4ac
	if (cr6.eq) goto loc_8290E4AC;
	// li r11,33
	ctx.r11.s64 = 33;
	// b 0x8290e508
	goto loc_8290E508;
loc_8290E4AC:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x82a38c50
	ctx.lr = 0x8290E4BC;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290e50c
	if (cr6.eq) goto loc_8290E50C;
	// lbz r11,57(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 57);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// ori r7,r10,20408
	ctx.r7.u64 = ctx.r10.u64 | 20408;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// li r11,35
	ctx.r11.s64 = 35;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r5,12(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lfsx f11,r5,r7
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fcmpu cr6,f10,f30
	cr6.compare(ctx.f10.f64, ctx.f30.f64);
	// blt cr6,0x8290e508
	if (cr6.lt) goto loc_8290E508;
	// li r11,34
	ctx.r11.s64 = 34;
loc_8290E508:
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_8290E50C:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8290e52c
	if (cr6.eq) goto loc_8290E52C;
loc_8290E518:
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8290E52C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290e5ac
	if (cr6.eq) goto loc_8290E5AC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82a38be0
	ctx.lr = 0x8290E548;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290e518
	if (!cr6.eq) goto loc_8290E518;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x8290e56c
	if (cr6.lt) goto loc_8290E56C;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// blt cr6,0x8290e570
	if (cr6.lt) goto loc_8290E570;
loc_8290E56C:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8290E570:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290e6e0
	if (cr6.eq) goto loc_8290E6E0;
	// lwz r3,-3564(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x8290E584;
	sub_82A0C788(ctx, base);
	// lwz r11,1396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1396);
	// cmpwi cr6,r11,42
	cr6.compare<int32_t>(ctx.r11.s32, 42, xer);
	// beq cr6,0x8290e6e0
	if (cr6.eq) goto loc_8290E6E0;
	// li r11,64
	ctx.r11.s64 = 64;
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8290E5AC:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8290e5c4
	if (cr6.lt) goto loc_8290E5C4;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// blt cr6,0x8290e5c8
	if (cr6.lt) goto loc_8290E5C8;
loc_8290E5C4:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8290E5C8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290e6e0
	if (cr6.eq) goto loc_8290E6E0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82a38c50
	ctx.lr = 0x8290E5E4;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290e608
	if (cr6.eq) goto loc_8290E608;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8290E608:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82a38cd0
	ctx.lr = 0x8290E618;
	sub_82A38CD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290e6e0
	if (cr6.eq) goto loc_8290E6E0;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8290e6e0
	if (!cr6.gt) goto loc_8290E6E0;
	// b 0x8290e6d8
	goto loc_8290E6D8;
loc_8290E634:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82a38be0
	ctx.lr = 0x8290E644;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290e6d8
	if (cr6.eq) goto loc_8290E6D8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82a38db8
	ctx.lr = 0x8290E660;
	sub_82A38DB8(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lfs f0,16100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16100);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8290e6d8
	if (cr6.lt) goto loc_8290E6D8;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8290E688:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82a38be0
	ctx.lr = 0x8290E698;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290e6d8
	if (cr6.eq) goto loc_8290E6D8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82a38db8
	ctx.lr = 0x8290E6B4;
	sub_82A38DB8(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lfs f0,16100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16100);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8290e6d8
	if (cr6.lt) goto loc_8290E6D8;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8290e6e0
	if (cr6.lt) goto loc_8290E6E0;
loc_8290E6D8:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_8290E6E0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290E6F0"))) PPC_WEAK_FUNC(sub_8290E6F0);
PPC_FUNC_IMPL(__imp__sub_8290E6F0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x8290E718;
	sub_82A0C760(ctx, base);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// bl 0x82a3cf08
	ctx.lr = 0x8290E728;
	sub_82A3CF08(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8290e794
	if (cr6.eq) goto loc_8290E794;
	// lhz r11,18(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 18);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bgt cr6,0x8290e748
	if (cr6.gt) goto loc_8290E748;
loc_8290E740:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8290e7b4
	goto loc_8290E7B4;
loc_8290E748:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addis r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 65536;
	// addi r3,r3,20120
	ctx.r3.s64 = ctx.r3.s64 + 20120;
	// bl 0x825ca600
	ctx.lr = 0x8290E760;
	sub_825CA600(ctx, base);
	// fsqrts f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(sqrt(ctx.f1.f64)));
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f0,21708(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21708);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8290e794
	if (cr6.lt) goto loc_8290E794;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a38db8
	ctx.lr = 0x8290E784;
	sub_82A38DB8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-11356(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11356);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8290e740
	if (cr6.lt) goto loc_8290E740;
loc_8290E794:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,18
	ctx.r4.s64 = 18;
	// bl 0x82a39900
	ctx.lr = 0x8290E7B4;
	sub_82A39900(ctx, base);
loc_8290E7B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290E7CC"))) PPC_WEAK_FUNC(sub_8290E7CC);
PPC_FUNC_IMPL(__imp__sub_8290E7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8290E7D0"))) PPC_WEAK_FUNC(sub_8290E7D0);
PPC_FUNC_IMPL(__imp__sub_8290E7D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8290E7D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r29,32(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x82a0c760
	ctx.lr = 0x8290E7F8;
	sub_82A0C760(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,17664
	ctx.r10.s64 = 1157627904;
	// rlwinm r9,r11,0,0,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bne cr6,0x8290e818
	if (!cr6.eq) goto loc_8290E818;
loc_8290E80C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8290E818:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a38db8
	ctx.lr = 0x8290E828;
	sub_82A38DB8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,20048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8290e80c
	if (cr6.gt) goto loc_8290E80C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,8148(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-28496(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28496);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8290e80c
	if (!cr6.lt) goto loc_8290E80C;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,8516(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8516);
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// beq cr6,0x8290e80c
	if (cr6.eq) goto loc_8290E80C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82a38c50
	ctx.lr = 0x8290E870;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290E884"))) PPC_WEAK_FUNC(sub_8290E884);
PPC_FUNC_IMPL(__imp__sub_8290E884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8290E888"))) PPC_WEAK_FUNC(sub_8290E888);
PPC_FUNC_IMPL(__imp__sub_8290E888) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8290E890;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x8290E8AC;
	sub_82A0C760(ctx, base);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r10,r11,0,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF00;
	// cmpwi cr6,r10,256
	cr6.compare<int32_t>(ctx.r10.s32, 256, xer);
	// beq cr6,0x8290e8c8
	if (cr6.eq) goto loc_8290E8C8;
loc_8290E8BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8290E8C8:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82a3d160
	ctx.lr = 0x8290E8D4;
	sub_82A3D160(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8290e8bc
	if (!cr6.eq) goto loc_8290E8BC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a38db8
	ctx.lr = 0x8290E8F0;
	sub_82A38DB8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,20048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8290e8bc
	if (cr6.gt) goto loc_8290E8BC;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,8516(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8516);
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bne cr6,0x8290e8bc
	if (!cr6.eq) goto loc_8290E8BC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82a38c50
	ctx.lr = 0x8290E924;
	sub_82A38C50(ctx, base);
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
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290E938"))) PPC_WEAK_FUNC(sub_8290E938);
PPC_FUNC_IMPL(__imp__sub_8290E938) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8290E940;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r29,132(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// lwz r31,292(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// lwz r30,352(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// bl 0x82a0c760
	ctx.lr = 0x8290E968;
	sub_82A0C760(ctx, base);
	// clrlwi r9,r28,24
	ctx.r9.u64 = ctx.r28.u32 & 0xFF;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8290e984
	if (cr6.eq) goto loc_8290E984;
loc_8290E978:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8290E984:
	// lwz r11,4456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4456);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// blt cr6,0x8290e9b0
	if (cr6.lt) goto loc_8290E9B0;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// bgt cr6,0x8290e9b0
	if (cr6.gt) goto loc_8290E9B0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8290e9b0
	if (cr6.eq) goto loc_8290E9B0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e0
	ctx.lr = 0x8290E9A8;
	sub_825832E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8290e978
	if (!cr6.eq) goto loc_8290E978;
loc_8290E9B0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r10,17408
	ctx.r10.s64 = 1140850688;
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r9,r11,0,0,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// beq cr6,0x8290e9fc
	if (cr6.eq) goto loc_8290E9FC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,4472(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4472);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a22b40
	ctx.lr = 0x8290E9D8;
	sub_82A22B40(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// bl 0x83740858
	ctx.lr = 0x8290E9E4;
	sub_83740858(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// ble cr6,0x8290e9fc
	if (!cr6.gt) goto loc_8290E9FC;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8290E9FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290EA08"))) PPC_WEAK_FUNC(sub_8290EA08);
PPC_FUNC_IMPL(__imp__sub_8290EA08) {
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
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82a38be0
	ctx.lr = 0x8290EA34;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290ea7c
	if (!cr6.eq) goto loc_8290EA7C;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82a39900
	ctx.lr = 0x8290EA60;
	sub_82A39900(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290ea7c
	if (cr6.eq) goto loc_8290EA7C;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,29
	ctx.r3.s64 = 29;
	// stb r11,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r11.u8);
	// b 0x8290ea94
	goto loc_8290EA94;
loc_8290EA7C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8290EA94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8290EA94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290EAAC"))) PPC_WEAK_FUNC(sub_8290EAAC);
PPC_FUNC_IMPL(__imp__sub_8290EAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8290EAB0"))) PPC_WEAK_FUNC(sub_8290EAB0);
PPC_FUNC_IMPL(__imp__sub_8290EAB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82a38be0
	ctx.lr = 0x8290EADC;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290eb20
	if (!cr6.eq) goto loc_8290EB20;
	// lbz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290eb20
	if (!cr6.eq) goto loc_8290EB20;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82a39ad0
	ctx.lr = 0x8290EB10;
	sub_82A39AD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,36
	ctx.r3.s64 = 36;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290eb24
	if (!cr6.eq) goto loc_8290EB24;
loc_8290EB20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8290EB24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290EB3C"))) PPC_WEAK_FUNC(sub_8290EB3C);
PPC_FUNC_IMPL(__imp__sub_8290EB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8290EB40"))) PPC_WEAK_FUNC(sub_8290EB40);
PPC_FUNC_IMPL(__imp__sub_8290EB40) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82a38c50
	sub_82A38C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290EB54"))) PPC_WEAK_FUNC(sub_8290EB54);
PPC_FUNC_IMPL(__imp__sub_8290EB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8290EB58"))) PPC_WEAK_FUNC(sub_8290EB58);
PPC_FUNC_IMPL(__imp__sub_8290EB58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82a38be0
	ctx.lr = 0x8290EB84;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290ebbc
	if (!cr6.eq) goto loc_8290EBBC;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82a39ad0
	ctx.lr = 0x8290EBAC;
	sub_82A39AD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,37
	ctx.r3.s64 = 37;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290ebc0
	if (!cr6.eq) goto loc_8290EBC0;
loc_8290EBBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8290EBC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290EBD8"))) PPC_WEAK_FUNC(sub_8290EBD8);
PPC_FUNC_IMPL(__imp__sub_8290EBD8) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82a38c50
	ctx.lr = 0x8290EBFC;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290ec20
	if (cr6.eq) goto loc_8290EC20;
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
loc_8290EC20:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82a38c50
	ctx.lr = 0x8290EC30;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290ec54
	if (cr6.eq) goto loc_8290EC54;
	// li r3,3
	ctx.r3.s64 = 3;
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
loc_8290EC54:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82a38c50
	ctx.lr = 0x8290EC64;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290ec88
	if (cr6.eq) goto loc_8290EC88;
	// li r3,4
	ctx.r3.s64 = 4;
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
loc_8290EC88:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82a38c50
	ctx.lr = 0x8290EC98;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r10,2
	ctx.r10.s64 = 2;
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
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

__attribute__((alias("__imp__sub_8290ECC0"))) PPC_WEAK_FUNC(sub_8290ECC0);
PPC_FUNC_IMPL(__imp__sub_8290ECC0) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82a38be0
	ctx.lr = 0x8290ECE0;
	sub_82A38BE0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r3,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
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

__attribute__((alias("__imp__sub_8290ECFC"))) PPC_WEAK_FUNC(sub_8290ECFC);
PPC_FUNC_IMPL(__imp__sub_8290ECFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8290ED00"))) PPC_WEAK_FUNC(sub_8290ED00);
PPC_FUNC_IMPL(__imp__sub_8290ED00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8290ebd8
	ctx.lr = 0x8290ED1C;
	sub_8290EBD8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r11,106
	ctx.r11.s64 = 106;
	// stb r3,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r3.u8);
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 & ctx.r11.u64;
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

__attribute__((alias("__imp__sub_8290ED48"))) PPC_WEAK_FUNC(sub_8290ED48);
PPC_FUNC_IMPL(__imp__sub_8290ED48) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82a38be0
	ctx.lr = 0x8290ED74;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290ed88
	if (cr6.eq) goto loc_8290ED88;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8290eda4
	goto loc_8290EDA4;
loc_8290ED88:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82a38be0
	ctx.lr = 0x8290ED98;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_8290EDA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290EDBC"))) PPC_WEAK_FUNC(sub_8290EDBC);
PPC_FUNC_IMPL(__imp__sub_8290EDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8290EDC0"))) PPC_WEAK_FUNC(sub_8290EDC0);
PPC_FUNC_IMPL(__imp__sub_8290EDC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8290EDC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,312(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// lbz r11,64(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 64);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x8290edf4
	if (cr6.lt) goto loc_8290EDF4;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// blt cr6,0x8290edfc
	if (cr6.lt) goto loc_8290EDFC;
loc_8290EDF4:
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bne cr6,0x8290ee04
	if (!cr6.eq) goto loc_8290EE04;
loc_8290EDFC:
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x8290ee08
	goto loc_8290EE08;
loc_8290EE04:
	// li r29,1
	ctx.r29.s64 = 1;
loc_8290EE08:
	// addi r10,r29,-5
	ctx.r10.s64 = ctx.r29.s64 + -5;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lis r8,-31778
	ctx.r8.s64 = -2082603008;
	// lwz r9,192(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r8,-25484
	ctx.r7.s64 = ctx.r8.s64 + -25484;
	// add r6,r10,r31
	ctx.r6.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r5,r7
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// blt cr6,0x8290ee38
	if (cr6.lt) goto loc_8290EE38;
	// li r11,23
	ctx.r11.s64 = 23;
loc_8290EE38:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// lbzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8290ee50
	if (!cr6.eq) goto loc_8290EE50;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x8290ee58
	goto loc_8290EE58;
loc_8290EE50:
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r4,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_8290EE58:
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x8290ee70
	if (cr6.lt) goto loc_8290EE70;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8290ee74
	if (cr6.lt) goto loc_8290EE74;
loc_8290EE70:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8290EE74:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290eeb8
	if (cr6.eq) goto loc_8290EEB8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x8290ee90
	if (!cr6.lt) goto loc_8290EE90;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8290eeb8
	goto loc_8290EEB8;
loc_8290EE90:
	// cmpwi cr6,r10,11
	cr6.compare<int32_t>(ctx.r10.s32, 11, xer);
	// bge cr6,0x8290eea0
	if (!cr6.lt) goto loc_8290EEA0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8290eeb8
	goto loc_8290EEB8;
loc_8290EEA0:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r9,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// eqv r8,r11,r10
	ctx.r8.u64 = ~(ctx.r11.u64 ^ ctx.r10.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r4,r6,31
	ctx.r4.u64 = ctx.r6.u32 & 0x1;
loc_8290EEB8:
	// bl 0x82a0c710
	ctx.lr = 0x8290EEBC;
	sub_82A0C710(ctx, base);
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// beq cr6,0x8290eecc
	if (cr6.eq) goto loc_8290EECC;
	// cmpwi cr6,r31,23
	cr6.compare<int32_t>(ctx.r31.s32, 23, xer);
	// bne cr6,0x8290ef54
	if (!cr6.eq) goto loc_8290EF54;
loc_8290EECC:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x8290ef10
	if (!cr6.eq) goto loc_8290EF10;
	// lbz r11,252(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(ctx.r11.u32, 128, xer);
	// blt cr6,0x8290ef54
	if (cr6.lt) goto loc_8290EF54;
	// cmpwi cr6,r30,5
	cr6.compare<int32_t>(ctx.r30.s32, 5, xer);
	// bne cr6,0x8290eef8
	if (!cr6.eq) goto loc_8290EEF8;
	// li r30,7
	ctx.r30.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8290EEF8:
	// cmpwi cr6,r30,7
	cr6.compare<int32_t>(ctx.r30.s32, 7, xer);
	// bne cr6,0x8290ef54
	if (!cr6.eq) goto loc_8290EF54;
	// li r30,5
	ctx.r30.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8290EF10:
	// lfs f2,52(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,248(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825ce9f8
	ctx.lr = 0x8290EF1C;
	sub_825CE9F8(ctx, base);
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,-23844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23844);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8290ef54
	if (!cr6.gt) goto loc_8290EF54;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(ctx.r30.s32, 4, xer);
	// bne cr6,0x8290ef48
	if (!cr6.eq) goto loc_8290EF48;
	// li r30,6
	ctx.r30.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8290EF48:
	// cmpwi cr6,r30,6
	cr6.compare<int32_t>(ctx.r30.s32, 6, xer);
	// bne cr6,0x8290ef54
	if (!cr6.eq) goto loc_8290EF54;
	// li r30,4
	ctx.r30.s64 = 4;
loc_8290EF54:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290EF60"))) PPC_WEAK_FUNC(sub_8290EF60);
PPC_FUNC_IMPL(__imp__sub_8290EF60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8290EF68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8290edc0
	ctx.lr = 0x8290EF88;
	sub_8290EDC0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82908498
	ctx.lr = 0x8290EF9C;
	sub_82908498(ctx, base);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290EFA8"))) PPC_WEAK_FUNC(sub_8290EFA8);
PPC_FUNC_IMPL(__imp__sub_8290EFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8290EFB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8290edc0
	ctx.lr = 0x8290EFD0;
	sub_8290EDC0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82908498
	ctx.lr = 0x8290EFE4;
	sub_82908498(ctx, base);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290EFF0"))) PPC_WEAK_FUNC(sub_8290EFF0);
PPC_FUNC_IMPL(__imp__sub_8290EFF0) {
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
	// lis r9,-31763
	ctx.r9.s64 = -2081619968;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// lwz r3,-3564(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3564);
	// lwz r8,192(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// blt cr6,0x8290f024
	if (cr6.lt) goto loc_8290F024;
	// li r11,23
	ctx.r11.s64 = 23;
loc_8290F024:
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mulli r9,r11,112
	ctx.r9.s64 = ctx.r11.s64 * 112;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x8290f040
	if (cr6.lt) goto loc_8290F040;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8290f044
	if (cr6.lt) goto loc_8290F044;
loc_8290F040:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8290F044:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290f07c
	if (cr6.eq) goto loc_8290F07C;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x8290f098
	if (cr6.lt) goto loc_8290F098;
	// cmpwi cr6,r10,11
	cr6.compare<int32_t>(ctx.r10.s32, 11, xer);
	// blt cr6,0x8290f098
	if (cr6.lt) goto loc_8290F098;
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r9,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// eqv r8,r11,r10
	ctx.r8.u64 = ~(ctx.r11.u64 ^ ctx.r10.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r4,r6,31
	ctx.r4.u64 = ctx.r6.u32 & 0x1;
	// b 0x8290f09c
	goto loc_8290F09C;
loc_8290F07C:
	// lbzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x8290f098
	if (cr6.eq) goto loc_8290F098;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r4,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x8290f09c
	if (cr6.lt) goto loc_8290F09C;
loc_8290F098:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8290F09C:
	// bl 0x82a0c710
	ctx.lr = 0x8290F0A0;
	sub_82A0C710(ctx, base);
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// addi r3,r3,-30988
	ctx.r3.s64 = ctx.r3.s64 + -30988;
	// bl 0x825832e0
	ctx.lr = 0x8290F0AC;
	sub_825832E0(ctx, base);
	// add r10,r3,r31
	ctx.r10.u64 = ctx.r3.u64 + ctx.r31.u64;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x8290f0d8
	if (!cr6.lt) goto loc_8290F0D8;
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
loc_8290F0D8:
	// li r9,3
	ctx.r9.s64 = 3;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r7,r9,r11
	xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// subfe r5,r8,r6
	temp.u8 = (~ctx.r8.u32 + ctx.r6.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r8.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r5,r10
	ctx.r3.u64 = ctx.r5.u64 & ctx.r10.u64;
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

__attribute__((alias("__imp__sub_8290F104"))) PPC_WEAK_FUNC(sub_8290F104);
PPC_FUNC_IMPL(__imp__sub_8290F104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8290F108"))) PPC_WEAK_FUNC(sub_8290F108);
PPC_FUNC_IMPL(__imp__sub_8290F108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8290F110;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8290edc0
	ctx.lr = 0x8290F130;
	sub_8290EDC0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82908498
	ctx.lr = 0x8290F144;
	sub_82908498(ctx, base);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290F150"))) PPC_WEAK_FUNC(sub_8290F150);
PPC_FUNC_IMPL(__imp__sub_8290F150) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8290eff0
	ctx.lr = 0x8290F170;
	sub_8290EFF0(ctx, base);
	// stb r3,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r3.u8);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x82a1aaa8
	ctx.lr = 0x8290F184;
	sub_82A1AAA8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8290f1b0
	if (cr6.eq) goto loc_8290F1B0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r11,24432
	ctx.r3.s64 = ctx.r11.s64 + 24432;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830eab70
	ctx.lr = 0x8290F1B0;
	sub_830EAB70(ctx, base);
loc_8290F1B0:
	// li r3,43
	ctx.r3.s64 = 43;
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

__attribute__((alias("__imp__sub_8290F1C8"))) PPC_WEAK_FUNC(sub_8290F1C8);
PPC_FUNC_IMPL(__imp__sub_8290F1C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8290F1D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8290edc0
	ctx.lr = 0x8290F1F0;
	sub_8290EDC0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82908498
	ctx.lr = 0x8290F204;
	sub_82908498(ctx, base);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290F210"))) PPC_WEAK_FUNC(sub_8290F210);
PPC_FUNC_IMPL(__imp__sub_8290F210) {
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
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82a38be0
	ctx.lr = 0x8290F23C;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290f2c8
	if (!cr6.eq) goto loc_8290F2C8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82a38c50
	ctx.lr = 0x8290F258;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290f26c
	if (cr6.eq) goto loc_8290F26C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r11.u8);
loc_8290F26C:
	// lbz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290f2c0
	if (cr6.eq) goto loc_8290F2C0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82a38be0
	ctx.lr = 0x8290F288;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290f2c0
	if (cr6.eq) goto loc_8290F2C0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82a39ad0
	ctx.lr = 0x8290F2B0;
	sub_82A39AD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x8290f2cc
	goto loc_8290F2CC;
loc_8290F2C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r11.u8);
loc_8290F2C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8290F2CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290F2E4"))) PPC_WEAK_FUNC(sub_8290F2E4);
PPC_FUNC_IMPL(__imp__sub_8290F2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8290F2E8"))) PPC_WEAK_FUNC(sub_8290F2E8);
PPC_FUNC_IMPL(__imp__sub_8290F2E8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x8290eff0
	ctx.lr = 0x8290F308;
	sub_8290EFF0(ctx, base);
	// stb r3,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r3.u8);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x82a1aaa8
	ctx.lr = 0x8290F31C;
	sub_82A1AAA8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8290f348
	if (cr6.eq) goto loc_8290F348;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r11,24452
	ctx.r3.s64 = ctx.r11.s64 + 24452;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830eab70
	ctx.lr = 0x8290F348;
	sub_830EAB70(ctx, base);
loc_8290F348:
	// li r3,43
	ctx.r3.s64 = 43;
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

__attribute__((alias("__imp__sub_8290F360"))) PPC_WEAK_FUNC(sub_8290F360);
PPC_FUNC_IMPL(__imp__sub_8290F360) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8290F368;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r27,4472(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4472);
	// bl 0x830ff290
	ctx.lr = 0x8290F390;
	sub_830FF290(ctx, base);
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// bl 0x83740868
	ctx.lr = 0x8290F39C;
	sub_83740868(ctx, base);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// subf r7,r8,r27
	ctx.r7.s64 = ctx.r27.s64 - ctx.r8.s64;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// frsp f9,f13
	ctx.f9.f64 = double(float(ctx.f13.f64));
	// fabs f8,f10
	ctx.f8.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fdivs f31,f9,f1
	ctx.f31.f64 = double(float(ctx.f9.f64 / ctx.f1.f64));
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83740868
	ctx.lr = 0x8290F3DC;
	sub_83740868(ctx, base);
	// lis r5,-32209
	ctx.r5.s64 = -2110849024;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lfs f0,9796(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 9796);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-24912(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -24912);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f6,f1,f0,f13
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctidz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f4,80(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// fctiwz f0,f1
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r27,r10
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, xer);
	// ble cr6,0x8290f430
	if (!cr6.gt) goto loc_8290F430;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r11.u8);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_8290F430:
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// lbz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// blt cr6,0x8290f460
	if (cr6.lt) goto loc_8290F460;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bge cr6,0x8290f460
	if (!cr6.lt) goto loc_8290F460;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// beq cr6,0x8290f460
	if (cr6.eq) goto loc_8290F460;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8290F460:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82908498
	ctx.lr = 0x8290F470;
	sub_82908498(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290F480"))) PPC_WEAK_FUNC(sub_8290F480);
PPC_FUNC_IMPL(__imp__sub_8290F480) {
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
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82a38c50
	ctx.lr = 0x8290F4A8;
	sub_82A38C50(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8290f4dc
	if (cr6.eq) goto loc_8290F4DC;
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,-3564(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3564);
	// lwz r9,292(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// lwz r10,4472(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4472);
	// bne cr6,0x8290f4f4
	if (!cr6.eq) goto loc_8290F4F4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stb r11,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r11.u8);
loc_8290F4DC:
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
loc_8290F4F4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r11.u8);
	// li r3,107
	ctx.r3.s64 = 107;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stb r10,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_8290F520"))) PPC_WEAK_FUNC(sub_8290F520);
PPC_FUNC_IMPL(__imp__sub_8290F520) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8290F528;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r27,4472(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4472);
	// bl 0x830ff290
	ctx.lr = 0x8290F550;
	sub_830FF290(ctx, base);
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// bl 0x83740868
	ctx.lr = 0x8290F55C;
	sub_83740868(ctx, base);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// subf r7,r8,r27
	ctx.r7.s64 = ctx.r27.s64 - ctx.r8.s64;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// frsp f9,f13
	ctx.f9.f64 = double(float(ctx.f13.f64));
	// fabs f8,f10
	ctx.f8.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fdivs f31,f9,f1
	ctx.f31.f64 = double(float(ctx.f9.f64 / ctx.f1.f64));
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83740868
	ctx.lr = 0x8290F59C;
	sub_83740868(ctx, base);
	// lis r5,-32209
	ctx.r5.s64 = -2110849024;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lfs f0,9796(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 9796);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-24912(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -24912);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f6,f1,f0,f13
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctidz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f4,80(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// fctiwz f0,f1
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r27,r10
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, xer);
	// ble cr6,0x8290f5f0
	if (!cr6.gt) goto loc_8290F5F0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r11.u8);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_8290F5F0:
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// lbz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// blt cr6,0x8290f620
	if (cr6.lt) goto loc_8290F620;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bge cr6,0x8290f620
	if (!cr6.lt) goto loc_8290F620;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// beq cr6,0x8290f620
	if (cr6.eq) goto loc_8290F620;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8290F620:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82908498
	ctx.lr = 0x8290F630;
	sub_82908498(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290F640"))) PPC_WEAK_FUNC(sub_8290F640);
PPC_FUNC_IMPL(__imp__sub_8290F640) {
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
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82a38c50
	ctx.lr = 0x8290F668;
	sub_82A38C50(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8290f69c
	if (cr6.eq) goto loc_8290F69C;
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,-3564(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3564);
	// lwz r9,292(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// lwz r10,4472(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4472);
	// bne cr6,0x8290f6b4
	if (!cr6.eq) goto loc_8290F6B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stb r11,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r11.u8);
loc_8290F69C:
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
loc_8290F6B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,107
	ctx.r3.s64 = 107;
	// stb r11,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r11.u8);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stb r11,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_8290F6DC"))) PPC_WEAK_FUNC(sub_8290F6DC);
PPC_FUNC_IMPL(__imp__sub_8290F6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8290F6E0"))) PPC_WEAK_FUNC(sub_8290F6E0);
PPC_FUNC_IMPL(__imp__sub_8290F6E0) {
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
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82a38be0
	ctx.lr = 0x8290F708;
	sub_82A38BE0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8290f72c
	if (!cr6.eq) goto loc_8290F72C;
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
loc_8290F72C:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,15
	ctx.r3.s64 = 15;
	// stb r11,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_8290F74C"))) PPC_WEAK_FUNC(sub_8290F74C);
PPC_FUNC_IMPL(__imp__sub_8290F74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8290F750"))) PPC_WEAK_FUNC(sub_8290F750);
PPC_FUNC_IMPL(__imp__sub_8290F750) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8290F758;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x8290f780
	if (!cr6.lt) goto loc_8290F780;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// b 0x8290f7a8
	goto loc_8290F7A8;
loc_8290F780:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x8290f790
	if (!cr6.lt) goto loc_8290F790;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// b 0x8290f7a8
	goto loc_8290F7A8;
loc_8290F790:
	// li r10,22
	ctx.r10.s64 = 22;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r8,r10,r11
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r29,r6,31
	ctx.r29.u64 = ctx.r6.u32 & 0x1;
loc_8290F7A8:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,132(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// lwz r30,32(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82a22b40
	ctx.lr = 0x8290F7C4;
	sub_82A22B40(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8290f7dc
	if (!cr6.gt) goto loc_8290F7DC;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8290f7e0
	if (!cr6.gt) goto loc_8290F7E0;
loc_8290F7DC:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8290F7E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290f93c
	if (cr6.eq) goto loc_8290F93C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// bne cr6,0x8290f93c
	if (!cr6.eq) goto loc_8290F93C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82a38be0
	ctx.lr = 0x8290F808;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290f93c
	if (!cr6.eq) goto loc_8290F93C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82908448
	ctx.lr = 0x8290F828;
	sub_82908448(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f4,8164(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8164);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8156(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8156);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x825c3ec0
	ctx.lr = 0x8290F844;
	sub_825C3EC0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825eb4d0
	ctx.lr = 0x8290F850;
	sub_825EB4D0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82a38db8
	ctx.lr = 0x8290F864;
	sub_82A38DB8(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,20048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8290f8c8
	if (!cr6.lt) goto loc_8290F8C8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82a38c50
	ctx.lr = 0x8290F884;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290f898
	if (cr6.eq) goto loc_8290F898;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8290f914
	goto loc_8290F914;
loc_8290F898:
	// lbz r11,21(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 21);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x8290f8c0
	if (!cr6.eq) goto loc_8290F8C0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82a38be0
	ctx.lr = 0x8290F8B4;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290f918
	if (!cr6.eq) goto loc_8290F918;
loc_8290F8C0:
	// stb r27,21(r28)
	PPC_STORE_U8(ctx.r28.u32 + 21, ctx.r27.u8);
	// b 0x8290f918
	goto loc_8290F918;
loc_8290F8C8:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lfs f0,6060(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6060);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x8290f938
	if (!cr6.lt) goto loc_8290F938;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82a38be0
	ctx.lr = 0x8290F8E8;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290f938
	if (cr6.eq) goto loc_8290F938;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82a38be0
	ctx.lr = 0x8290F904;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290f938
	if (cr6.eq) goto loc_8290F938;
	// li r11,4
	ctx.r11.s64 = 4;
loc_8290F914:
	// stb r11,21(r28)
	PPC_STORE_U8(ctx.r28.u32 + 21, ctx.r11.u8);
loc_8290F918:
	// lbz r11,21(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 21);
	// li r10,15
	ctx.r10.s64 = 15;
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8290F938:
	// stb r27,21(r28)
	PPC_STORE_U8(ctx.r28.u32 + 21, ctx.r27.u8);
loc_8290F93C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290F94C"))) PPC_WEAK_FUNC(sub_8290F94C);
PPC_FUNC_IMPL(__imp__sub_8290F94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8290F950"))) PPC_WEAK_FUNC(sub_8290F950);
PPC_FUNC_IMPL(__imp__sub_8290F950) {
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
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x82a38c50
	ctx.lr = 0x8290F974;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290f9d8
	if (!cr6.eq) goto loc_8290F9D8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x82a38c50
	ctx.lr = 0x8290F990;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290f9d8
	if (!cr6.eq) goto loc_8290F9D8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x82a38c50
	ctx.lr = 0x8290F9AC;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290f9d8
	if (!cr6.eq) goto loc_8290F9D8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82a38c50
	ctx.lr = 0x8290F9C8;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290f9dc
	if (cr6.eq) goto loc_8290F9DC;
loc_8290F9D8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8290F9DC:
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

__attribute__((alias("__imp__sub_8290F9F0"))) PPC_WEAK_FUNC(sub_8290F9F0);
PPC_FUNC_IMPL(__imp__sub_8290F9F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8290F9F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-31763
	ctx.r26.s64 = -2081619968;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,-3564(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// lwz r28,192(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// lwz r31,212(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// bl 0x830ff290
	ctx.lr = 0x8290FA1C;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x8290FA20;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,19
	cr6.compare<uint32_t>(ctx.r3.u32, 19, xer);
	// bne cr6,0x8290fab8
	if (!cr6.eq) goto loc_8290FAB8;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x8290fa3c
	if (!cr6.lt) goto loc_8290FA3C;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8290fa64
	goto loc_8290FA64;
loc_8290FA3C:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x8290fa4c
	if (!cr6.lt) goto loc_8290FA4C;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8290fa64
	goto loc_8290FA64;
loc_8290FA4C:
	// li r10,22
	ctx.r10.s64 = 22;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r8,r10,r11
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r30,r6,31
	ctx.r30.u64 = ctx.r6.u32 & 0x1;
loc_8290FA64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x8290FA6C;
	sub_83102DB0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x8290fa84
	if (!cr6.lt) goto loc_8290FA84;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// b 0x8290facc
	goto loc_8290FACC;
loc_8290FA84:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x8290fa98
	if (!cr6.lt) goto loc_8290FA98;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// b 0x8290facc
	goto loc_8290FACC;
loc_8290FA98:
	// li r10,22
	ctx.r10.s64 = 22;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r8,r10,r11
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// b 0x8290facc
	goto loc_8290FACC;
loc_8290FAB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x8290FAC0;
	sub_83102DB0(ctx, base);
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
loc_8290FACC:
	// bne cr6,0x8290fad4
	if (!cr6.eq) goto loc_8290FAD4;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8290FAD4:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// bge cr6,0x8290fc58
	if (!cr6.lt) goto loc_8290FC58;
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8290fc58
	if (cr6.eq) goto loc_8290FC58;
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r11,1(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290fb08
	if (cr6.eq) goto loc_8290FB08;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8290fb28
	goto loc_8290FB28;
loc_8290FB08:
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8290fb20
	if (cr6.lt) goto loc_8290FB20;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8290fb24
	if (cr6.lt) goto loc_8290FB24;
loc_8290FB20:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8290FB24:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8290FB28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290fc58
	if (cr6.eq) goto loc_8290FC58;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290fc58
	if (cr6.eq) goto loc_8290FC58;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// mulli r10,r10,2004
	ctx.r10.s64 = ctx.r10.s64 * 2004;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x82a38c50
	ctx.lr = 0x8290FB64;
	sub_82A38C50(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8290fb84
	if (cr6.eq) goto loc_8290FB84;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,110
	ctx.r3.s64 = 110;
	// stb r11,21(r25)
	PPC_STORE_U8(ctx.r25.u32 + 21, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8290FB84:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,14
	ctx.r4.s64 = 14;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a38c50
	ctx.lr = 0x8290FB94;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290fbb4
	if (cr6.eq) goto loc_8290FBB4;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,110
	ctx.r3.s64 = 110;
	// stb r11,21(r25)
	PPC_STORE_U8(ctx.r25.u32 + 21, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8290FBB4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a38c50
	ctx.lr = 0x8290FBC4;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290fbe4
	if (cr6.eq) goto loc_8290FBE4;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,110
	ctx.r3.s64 = 110;
	// stb r11,21(r25)
	PPC_STORE_U8(ctx.r25.u32 + 21, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8290FBE4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,15
	ctx.r4.s64 = 15;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a38c50
	ctx.lr = 0x8290FBF4;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290fc14
	if (cr6.eq) goto loc_8290FC14;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,110
	ctx.r3.s64 = 110;
	// stb r11,21(r25)
	PPC_STORE_U8(ctx.r25.u32 + 21, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8290FC14:
	// lwz r11,-3564(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lbz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 64);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8290fc58
	if (cr6.eq) goto loc_8290FC58;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,21
	ctx.r4.s64 = 21;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a38c50
	ctx.lr = 0x8290FC38;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290fc58
	if (cr6.eq) goto loc_8290FC58;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,110
	ctx.r3.s64 = 110;
	// stb r11,21(r25)
	PPC_STORE_U8(ctx.r25.u32 + 21, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8290FC58:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290FC64"))) PPC_WEAK_FUNC(sub_8290FC64);
PPC_FUNC_IMPL(__imp__sub_8290FC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8290FC68"))) PPC_WEAK_FUNC(sub_8290FC68);
PPC_FUNC_IMPL(__imp__sub_8290FC68) {
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
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8290fc90
	if (!cr6.eq) goto loc_8290FC90;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8290FC90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8290FC90:
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

__attribute__((alias("__imp__sub_8290FCA4"))) PPC_WEAK_FUNC(sub_8290FCA4);
PPC_FUNC_IMPL(__imp__sub_8290FCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8290FCA8"))) PPC_WEAK_FUNC(sub_8290FCA8);
PPC_FUNC_IMPL(__imp__sub_8290FCA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82a38be0
	ctx.lr = 0x8290FCD4;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290fd30
	if (cr6.eq) goto loc_8290FD30;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82a38be0
	ctx.lr = 0x8290FCF0;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290fd08
	if (cr6.eq) goto loc_8290FD08;
	// lbz r11,21(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stb r10,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r10.u8);
loc_8290FD08:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82a38be0
	ctx.lr = 0x8290FD18;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290fd30
	if (cr6.eq) goto loc_8290FD30;
	// lbz r11,21(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stb r10,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r10.u8);
loc_8290FD30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290FD48"))) PPC_WEAK_FUNC(sub_8290FD48);
PPC_FUNC_IMPL(__imp__sub_8290FD48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82a38be0
	ctx.lr = 0x8290FD74;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290fd88
	if (cr6.eq) goto loc_8290FD88;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8290fdc8
	goto loc_8290FDC8;
loc_8290FD88:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r31,192(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ca6b8
	ctx.lr = 0x8290FDA0;
	sub_825CA6B8(ctx, base);
	// cmplwi cr6,r3,24
	cr6.compare<uint32_t>(ctx.r3.u32, 24, xer);
	// bge cr6,0x8290fdc4
	if (!cr6.lt) goto loc_8290FDC4;
	// mulli r11,r3,112
	ctx.r11.s64 = ctx.r3.s64 * 112;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8357ece0
	ctx.lr = 0x8290FDB4;
	sub_8357ECE0(ctx, base);
	// bl 0x82a47dc0
	ctx.lr = 0x8290FDB8;
	sub_82A47DC0(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8290fdc8
	if (cr6.eq) goto loc_8290FDC8;
loc_8290FDC4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8290FDC8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290fde0
	if (cr6.eq) goto loc_8290FDE0;
	// lbz r11,21(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 21);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stb r10,21(r30)
	PPC_STORE_U8(ctx.r30.u32 + 21, ctx.r10.u8);
loc_8290FDE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290FDF8"))) PPC_WEAK_FUNC(sub_8290FDF8);
PPC_FUNC_IMPL(__imp__sub_8290FDF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8290FE00;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82a38be0
	ctx.lr = 0x8290FE20;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290fe7c
	if (cr6.eq) goto loc_8290FE7C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82a38be0
	ctx.lr = 0x8290FE3C;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290fe54
	if (cr6.eq) goto loc_8290FE54;
	// lbz r11,21(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 21);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stb r10,21(r26)
	PPC_STORE_U8(ctx.r26.u32 + 21, ctx.r10.u8);
loc_8290FE54:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82a38be0
	ctx.lr = 0x8290FE64;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290fe7c
	if (cr6.eq) goto loc_8290FE7C;
	// lbz r11,21(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 21);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stb r10,21(r26)
	PPC_STORE_U8(ctx.r26.u32 + 21, ctx.r10.u8);
loc_8290FE7C:
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r9,4460(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4460);
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// bne cr6,0x8290fee4
	if (!cr6.eq) goto loc_8290FEE4;
	// lwz r11,5356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5356);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x8290fee4
	if (!cr6.eq) goto loc_8290FEE4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290fee4
	if (cr6.eq) goto loc_8290FEE4;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// lfs f0,-11356(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -11356);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x8290fed4
	if (cr6.lt) goto loc_8290FED4;
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8290fed8
	goto loc_8290FED8;
loc_8290FED4:
	// lfs f13,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
loc_8290FED8:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8290fee4
	if (!cr6.lt) goto loc_8290FEE4;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8290FEE4:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8291004c
	if (cr6.eq) goto loc_8291004C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r4,15
	ctx.r4.s64 = 15;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82a38c50
	ctx.lr = 0x8290FF08;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8291004c
	if (cr6.eq) goto loc_8291004C;
	// lbz r11,21(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 21);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8290ffd4
	if (!cr6.eq) goto loc_8290FFD4;
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290ffd8
	if (!cr6.eq) goto loc_8290FFD8;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x82a0c760
	ctx.lr = 0x8290FF3C;
	sub_82A0C760(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82a3d2d0
	ctx.lr = 0x8290FF4C;
	sub_82A3D2D0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8290ffd8
	if (cr6.eq) goto loc_8290FFD8;
	// lhz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// lhz r10,18(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// subf. r31,r10,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble 0x8290ffd8
	if (!cr0.gt) goto loc_8290FFD8;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x82a0c7b0
	ctx.lr = 0x8290FF74;
	sub_82A0C7B0(ctx, base);
	// bl 0x8355a178
	ctx.lr = 0x8290FF78;
	sub_8355A178(ctx, base);
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// rlwinm r10,r11,24,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// beq cr6,0x8290ffa8
	if (cr6.eq) goto loc_8290FFA8;
	// addi r9,r10,25148
	ctx.r9.s64 = ctx.r10.s64 + 25148;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8290ffb8
	goto loc_8290FFB8;
loc_8290FFA8:
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,25148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25148);
	ctx.f0.f64 = double(temp.f32);
loc_8290FFB8:
	// frsp f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x8290ffc8
	if (cr6.gt) goto loc_8290FFC8;
	// li r28,1
	ctx.r28.s64 = 1;
loc_8290FFC8:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290ffd8
	if (!cr6.eq) goto loc_8290FFD8;
loc_8290FFD4:
	// li r27,1
	ctx.r27.s64 = 1;
loc_8290FFD8:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82910008
	if (cr6.eq) goto loc_82910008;
	// lbz r11,21(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 21);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8291004c
	if (!cr6.eq) goto loc_8291004C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// stb r10,21(r26)
	PPC_STORE_U8(ctx.r26.u32 + 21, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82910008:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8291004c
	if (cr6.eq) goto loc_8291004C;
	// lbz r11,21(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 21);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82910030
	if (!cr6.eq) goto loc_82910030;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// stb r10,21(r26)
	PPC_STORE_U8(ctx.r26.u32 + 21, ctx.r10.u8);
loc_82910030:
	// lbz r11,21(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 21);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8291004c
	if (cr6.eq) goto loc_8291004C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stb r11,21(r26)
	PPC_STORE_U8(ctx.r26.u32 + 21, ctx.r11.u8);
loc_8291004C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82910054"))) PPC_WEAK_FUNC(sub_82910054);
PPC_FUNC_IMPL(__imp__sub_82910054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82910058"))) PPC_WEAK_FUNC(sub_82910058);
PPC_FUNC_IMPL(__imp__sub_82910058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82910060;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r29,292(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// bl 0x82a0c788
	ctx.lr = 0x82910084;
	sub_82A0C788(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x8291009c
	if (!cr6.lt) goto loc_8291009C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x829100c4
	goto loc_829100C4;
loc_8291009C:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x829100ac
	if (!cr6.lt) goto loc_829100AC;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x829100c4
	goto loc_829100C4;
loc_829100AC:
	// li r10,22
	ctx.r10.s64 = 22;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r8,r10,r11
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r4,r6,31
	ctx.r4.u64 = ctx.r6.u32 & 0x1;
loc_829100C4:
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x829100CC;
	sub_82A0C710(ctx, base);
	// lwz r11,4460(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4460);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82910114
	if (!cr6.eq) goto loc_82910114;
	// lbz r11,252(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// lfs f13,1280(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 1280);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fcmpu cr6,f9,f0
	cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bge cr6,0x82910114
	if (!cr6.lt) goto loc_82910114;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82910114:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82908070
	ctx.lr = 0x82910124;
	sub_82908070(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8291012C"))) PPC_WEAK_FUNC(sub_8291012C);
PPC_FUNC_IMPL(__imp__sub_8291012C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82910130"))) PPC_WEAK_FUNC(sub_82910130);
PPC_FUNC_IMPL(__imp__sub_82910130) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82908448
	ctx.lr = 0x8291015C;
	sub_82908448(ctx, base);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r3,12(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// beq cr6,0x8291019c
	if (cr6.eq) goto loc_8291019C;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82908ba0
	ctx.lr = 0x82910180;
	sub_82908BA0(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 80, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 84, temp.u32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,88(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 88, temp.u32);
	// b 0x829101f4
	goto loc_829101F4;
loc_8291019C:
	// lbz r4,57(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 57);
	// bl 0x82a407e0
	ctx.lr = 0x829101A4;
	sub_82A407E0(ctx, base);
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lbz r11,57(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 57);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// lfs f2,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f2.f64 = double(temp.f32);
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// lfs f1,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// frsp f3,f13
	ctx.f3.f64 = double(float(ctx.f13.f64));
	// bl 0x82908958
	ctx.lr = 0x829101DC;
	sub_82908958(ctx, base);
	// lfs f12,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,80(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 80, temp.u32);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,84(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 84, temp.u32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,88(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 88, temp.u32);
loc_829101F4:
	// addi r6,r30,80
	ctx.r6.s64 = ctx.r30.s64 + 80;
	// lfs f1,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// li r7,10
	ctx.r7.s64 = 10;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x827cd2e8
	ctx.lr = 0x8291020C;
	sub_827CD2E8(ctx, base);
	// stfs f1,92(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 92, temp.u32);
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

__attribute__((alias("__imp__sub_82910228"))) PPC_WEAK_FUNC(sub_82910228);
PPC_FUNC_IMPL(__imp__sub_82910228) {
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
	// li r5,82
	ctx.r5.s64 = 82;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x829088a0
	ctx.lr = 0x8291024C;
	sub_829088A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82910130
	ctx.lr = 0x82910258;
	sub_82910130(ctx, base);
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

__attribute__((alias("__imp__sub_82910274"))) PPC_WEAK_FUNC(sub_82910274);
PPC_FUNC_IMPL(__imp__sub_82910274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82910278"))) PPC_WEAK_FUNC(sub_82910278);
PPC_FUNC_IMPL(__imp__sub_82910278) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82910280;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x829102fc
	if (cr6.eq) goto loc_829102FC;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x829102A8;
	sub_82A0C760(ctx, base);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// bl 0x82a3d2a8
	ctx.lr = 0x829102B8;
	sub_82A3D2A8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x829102e4
	if (cr6.eq) goto loc_829102E4;
	// lhz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829102e4
	if (cr6.eq) goto loc_829102E4;
	// li r10,3
	ctx.r10.s64 = 3;
	// lhz r9,18(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// divw r8,r11,r10
	ctx.r8.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bgt cr6,0x829102f0
	if (cr6.gt) goto loc_829102F0;
loc_829102E4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82910130
	ctx.lr = 0x829102F0;
	sub_82910130(ctx, base);
loc_829102F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_829102FC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82908498
	ctx.lr = 0x82910308;
	sub_82908498(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82910310"))) PPC_WEAK_FUNC(sub_82910310);
PPC_FUNC_IMPL(__imp__sub_82910310) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82910318;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r3,-3564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r29,292(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// bl 0x82a0c788
	ctx.lr = 0x8291033C;
	sub_82A0C788(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82910354
	if (!cr6.lt) goto loc_82910354;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8291037c
	goto loc_8291037C;
loc_82910354:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x82910364
	if (!cr6.lt) goto loc_82910364;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8291037c
	goto loc_8291037C;
loc_82910364:
	// li r10,22
	ctx.r10.s64 = 22;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r8,r10,r11
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r4,r6,31
	ctx.r4.u64 = ctx.r6.u32 & 0x1;
loc_8291037C:
	// lwz r3,-3564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x82910384;
	sub_82A0C710(ctx, base);
	// lwz r11,4460(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4460);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x829103d8
	if (!cr6.eq) goto loc_829103D8;
	// lbz r11,252(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// lfs f13,1280(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1280);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fcmpu cr6,f9,f0
	cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bge cr6,0x829103d8
	if (!cr6.lt) goto loc_829103D8;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82908070
	ctx.lr = 0x829103D0;
	sub_82908070(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_829103D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829103E4"))) PPC_WEAK_FUNC(sub_829103E4);
PPC_FUNC_IMPL(__imp__sub_829103E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829103E8"))) PPC_WEAK_FUNC(sub_829103E8);
PPC_FUNC_IMPL(__imp__sub_829103E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82a38be0
	ctx.lr = 0x82910414;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82910440
	if (cr6.eq) goto loc_82910440;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82a38be0
	ctx.lr = 0x82910430;
	sub_82A38BE0(ctx, base);
	// stb r3,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r3.u8);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x82910448
	goto loc_82910448;
loc_82910440:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82910448:
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82910464"))) PPC_WEAK_FUNC(sub_82910464);
PPC_FUNC_IMPL(__imp__sub_82910464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82910468"))) PPC_WEAK_FUNC(sub_82910468);
PPC_FUNC_IMPL(__imp__sub_82910468) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82910470;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82a38c50
	ctx.lr = 0x82910490;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829104c4
	if (cr6.eq) goto loc_829104C4;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82a39900
	ctx.lr = 0x829104BC;
	sub_82A39900(ctx, base);
	// stb r3,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r3.u8);
	// b 0x829104d8
	goto loc_829104D8;
loc_829104C4:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82a38be0
	ctx.lr = 0x829104CC;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829104dc
	if (cr6.eq) goto loc_829104DC;
loc_829104D8:
	// li r29,1
	ctx.r29.s64 = 1;
loc_829104DC:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8291050c
	if (cr6.eq) goto loc_8291050C;
	// lbz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// li r10,2
	ctx.r10.s64 = 2;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8291050C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82910520"))) PPC_WEAK_FUNC(sub_82910520);
PPC_FUNC_IMPL(__imp__sub_82910520) {
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
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82a38be0
	ctx.lr = 0x82910548;
	sub_82A38BE0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82910560
	if (cr6.eq) goto loc_82910560;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x82910568
	goto loc_82910568;
loc_82910560:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82910568:
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82910580"))) PPC_WEAK_FUNC(sub_82910580);
PPC_FUNC_IMPL(__imp__sub_82910580) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r31,32(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x82a0c788
	ctx.lr = 0x829105A4;
	sub_82A0C788(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f13,8148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x829105d0
	if (!cr6.gt) goto loc_829105D0;
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
loc_829105D0:
	// addi r4,r3,1280
	ctx.r4.s64 = ctx.r3.s64 + 1280;
	// addi r3,r31,8144
	ctx.r3.s64 = ctx.r31.s64 + 8144;
	// bl 0x82a5a6e8
	ctx.lr = 0x829105DC;
	sub_82A5A6E8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,-6656(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6656);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x829105f4
	if (cr6.gt) goto loc_829105F4;
	// li r3,1
	ctx.r3.s64 = 1;
loc_829105F4:
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

__attribute__((alias("__imp__sub_82910608"))) PPC_WEAK_FUNC(sub_82910608);
PPC_FUNC_IMPL(__imp__sub_82910608) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a1fe28
	ctx.lr = 0x8291062C;
	sub_82A1FE28(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82910580
	ctx.lr = 0x82910638;
	sub_82910580(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82910698
	if (cr6.eq) goto loc_82910698;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x82910658
	if (cr6.lt) goto loc_82910658;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8291065c
	if (cr6.lt) goto loc_8291065C;
loc_82910658:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8291065C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82910698
	if (cr6.eq) goto loc_82910698;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,18
	ctx.r4.s64 = 18;
	// bl 0x82a39900
	ctx.lr = 0x82910688;
	sub_82A39900(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,2
	ctx.r3.s64 = 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8291069c
	if (!cr6.eq) goto loc_8291069C;
loc_82910698:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8291069C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829106B4"))) PPC_WEAK_FUNC(sub_829106B4);
PPC_FUNC_IMPL(__imp__sub_829106B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829106B8"))) PPC_WEAK_FUNC(sub_829106B8);
PPC_FUNC_IMPL(__imp__sub_829106B8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82910580
	ctx.lr = 0x829106CC;
	sub_82910580(ctx, base);
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

__attribute__((alias("__imp__sub_829106E8"))) PPC_WEAK_FUNC(sub_829106E8);
PPC_FUNC_IMPL(__imp__sub_829106E8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82a38c50
	ctx.lr = 0x8291070C;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829107a8
	if (cr6.eq) goto loc_829107A8;
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// lwz r9,-3564(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3564);
	// lwz r10,192(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 192);
	// bge cr6,0x829107a8
	if (!cr6.lt) goto loc_829107A8;
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8291074c
	if (cr6.eq) goto loc_8291074C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8291076c
	goto loc_8291076C;
loc_8291074C:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82910764
	if (cr6.lt) goto loc_82910764;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82910768
	if (cr6.lt) goto loc_82910768;
loc_82910764:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82910768:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8291076C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829107a8
	if (cr6.eq) goto loc_829107A8;
	// lwz r11,312(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 312);
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x82910798
	if (cr6.eq) goto loc_82910798;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// beq cr6,0x82910798
	if (cr6.eq) goto loc_82910798;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82910798:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x829107ac
	if (!cr6.eq) goto loc_829107AC;
loc_829107A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829107AC:
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

__attribute__((alias("__imp__sub_829107C0"))) PPC_WEAK_FUNC(sub_829107C0);
PPC_FUNC_IMPL(__imp__sub_829107C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x829107C8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// lwz r10,-3564(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3564);
	// lwz r9,292(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// lwz r30,192(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	// blt cr6,0x829107f4
	if (cr6.lt) goto loc_829107F4;
	// li r11,23
	ctx.r11.s64 = 23;
loc_829107F4:
	// li r25,0
	ctx.r25.s64 = 0;
	// mulli r10,r11,112
	ctx.r10.s64 = ctx.r11.s64 * 112;
	// stw r25,52(r28)
	PPC_STORE_U32(ctx.r28.u32 + 52, ctx.r25.u32);
	// lwz r11,4460(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4460);
	// li r23,1
	ctx.r23.s64 = 1;
	// add r24,r10,r30
	ctx.r24.u64 = ctx.r10.u64 + ctx.r30.u64;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x82910894
	if (cr6.lt) goto loc_82910894;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bgt cr6,0x82910894
	if (cr6.gt) goto loc_82910894;
	// lwz r11,5356(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5356);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82910894
	if (cr6.eq) goto loc_82910894;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// addi r29,r9,5756
	ctx.r29.s64 = ctx.r9.s64 + 5756;
loc_82910834:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x8291084c
	if (cr6.lt) goto loc_8291084C;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// blt cr6,0x82910850
	if (cr6.lt) goto loc_82910850;
loc_8291084C:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82910850:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82910884
	if (cr6.eq) goto loc_82910884;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ca6b8
	ctx.lr = 0x82910864;
	sub_825CA6B8(ctx, base);
	// cmplwi cr6,r3,24
	cr6.compare<uint32_t>(ctx.r3.u32, 24, xer);
	// bne cr6,0x82910884
	if (!cr6.eq) goto loc_82910884;
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// lwz r10,16(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lbz r9,4228(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4228);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x82910884
	if (!cr6.eq) goto loc_82910884;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_82910884:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x82910834
	if (cr6.lt) goto loc_82910834;
loc_82910894:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8291093c
	if (cr6.eq) goto loc_8291093C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x82a38c50
	ctx.lr = 0x829108B0;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829108c4
	if (cr6.eq) goto loc_829108C4;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x82910980
	goto loc_82910980;
loc_829108C4:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x82a38c50
	ctx.lr = 0x829108D4;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829108e8
	if (cr6.eq) goto loc_829108E8;
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x82910980
	goto loc_82910980;
loc_829108E8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82a38c50
	ctx.lr = 0x829108F8;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8291090c
	if (cr6.eq) goto loc_8291090C;
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x82910980
	goto loc_82910980;
loc_8291090C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82910d08
	ctx.lr = 0x82910914;
	sub_82910D08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82910988
	if (cr6.eq) goto loc_82910988;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82910d98
	ctx.lr = 0x82910928;
	sub_82910D98(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x82910988
	if (cr6.gt) goto loc_82910988;
	// li r11,11
	ctx.r11.s64 = 11;
	// stb r25,21(r28)
	PPC_STORE_U8(ctx.r28.u32 + 21, ctx.r25.u8);
	// b 0x82910984
	goto loc_82910984;
loc_8291093C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8357ece0
	ctx.lr = 0x82910944;
	sub_8357ECE0(ctx, base);
	// bl 0x82a47d40
	ctx.lr = 0x82910948;
	sub_82A47D40(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// blt cr6,0x82910988
	if (cr6.lt) goto loc_82910988;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82a39900
	ctx.lr = 0x82910970;
	sub_82A39900(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82910988
	if (cr6.eq) goto loc_82910988;
	// li r11,11
	ctx.r11.s64 = 11;
loc_82910980:
	// stb r23,21(r28)
	PPC_STORE_U8(ctx.r28.u32 + 21, ctx.r23.u8);
loc_82910984:
	// stw r11,52(r28)
	PPC_STORE_U32(ctx.r28.u32 + 52, ctx.r11.u32);
loc_82910988:
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8291099C"))) PPC_WEAK_FUNC(sub_8291099C);
PPC_FUNC_IMPL(__imp__sub_8291099C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829109A0"))) PPC_WEAK_FUNC(sub_829109A0);
PPC_FUNC_IMPL(__imp__sub_829109A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x829109A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
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
	ctx.lr = 0x829109D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x829109f8
	if (cr6.eq) goto loc_829109F8;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lbz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 92);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x829109f8
	if (cr6.eq) goto loc_829109F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_829109F8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82a38c50
	ctx.lr = 0x82910A0C;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82910a78
	if (cr6.eq) goto loc_82910A78;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r3,192(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// lbz r9,8880(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8880);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82910a3c
	if (!cr6.eq) goto loc_82910A3C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82910a48
	goto loc_82910A48;
loc_82910A3C:
	// lbz r11,5817(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5817);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82910A48:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82910b14
	if (cr6.eq) goto loc_82910B14;
	// bl 0x82a32eb0
	ctx.lr = 0x82910A58;
	sub_82A32EB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82910b14
	if (!cr6.eq) goto loc_82910B14;
	// li r30,1
	ctx.r30.s64 = 1;
	// stb r30,52(r29)
	PPC_STORE_U8(ctx.r29.u32 + 52, ctx.r30.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82910A78:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,424(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82910A8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82910aac
	if (cr6.eq) goto loc_82910AAC;
	// li r30,1
	ctx.r30.s64 = 1;
	// stb r30,54(r29)
	PPC_STORE_U8(ctx.r29.u32 + 54, ctx.r30.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82910AAC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82910AC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82910b14
	if (cr6.eq) goto loc_82910B14;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,380(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82910AE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82910b14
	if (cr6.eq) goto loc_82910B14;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,408(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 408);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82910B00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82910b14
	if (cr6.eq) goto loc_82910B14;
	// li r30,1
	ctx.r30.s64 = 1;
	// stb r30,53(r29)
	PPC_STORE_U8(ctx.r29.u32 + 53, ctx.r30.u8);
loc_82910B14:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82910B20"))) PPC_WEAK_FUNC(sub_82910B20);
PPC_FUNC_IMPL(__imp__sub_82910B20) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82a2b578
	ctx.lr = 0x82910B44;
	sub_82A2B578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82910b68
	if (cr6.eq) goto loc_82910B68;
loc_82910B50:
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
loc_82910B68:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82a38be0
	ctx.lr = 0x82910B78;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82910b50
	if (cr6.eq) goto loc_82910B50;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x830ff290
	ctx.lr = 0x82910B8C;
	sub_830FF290(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82910ba4
	if (cr6.eq) goto loc_82910BA4;
	// bl 0x830ff290
	ctx.lr = 0x82910B98;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// beq cr6,0x82910bd0
	if (cr6.eq) goto loc_82910BD0;
loc_82910BA4:
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// lwz r3,2056(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82910bd4
	if (cr6.eq) goto loc_82910BD4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82910BC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82910bd4
	if (cr6.eq) goto loc_82910BD4;
loc_82910BD0:
	// li r31,1
	ctx.r31.s64 = 1;
loc_82910BD4:
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

__attribute__((alias("__imp__sub_82910BEC"))) PPC_WEAK_FUNC(sub_82910BEC);
PPC_FUNC_IMPL(__imp__sub_82910BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82910BF0"))) PPC_WEAK_FUNC(sub_82910BF0);
PPC_FUNC_IMPL(__imp__sub_82910BF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82910BF8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82910b20
	ctx.lr = 0x82910C10;
	sub_82910B20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82910c2c
	if (!cr6.eq) goto loc_82910C2C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82910C2C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r30,255
	ctx.r30.s64 = 255;
	// bl 0x82a38db8
	ctx.lr = 0x82910C40;
	sub_82A38DB8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f31,-28496(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28496);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// blt cr6,0x82910cf0
	if (cr6.lt) goto loc_82910CF0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82a38db8
	ctx.lr = 0x82910C60;
	sub_82A38DB8(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x82910cf0
	if (!cr6.lt) goto loc_82910CF0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82a38d50
	ctx.lr = 0x82910C78;
	sub_82A38D50(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825ce9f8
	ctx.lr = 0x82910C8C;
	sub_825CE9F8(ctx, base);
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lfs f13,24504(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24504);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82910cb8
	if (!cr6.lt) goto loc_82910CB8;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r30,21(r29)
	PPC_STORE_U8(ctx.r29.u32 + 21, ctx.r30.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82910CB8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,21812(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21812);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82910ce0
	if (!cr6.gt) goto loc_82910CE0;
	// li r30,2
	ctx.r30.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r30,21(r29)
	PPC_STORE_U8(ctx.r29.u32 + 21, ctx.r30.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82910CE0:
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// li r30,1
	ctx.r30.s64 = 1;
	// bgt cr6,0x82910cf0
	if (cr6.gt) goto loc_82910CF0;
	// li r30,3
	ctx.r30.s64 = 3;
loc_82910CF0:
	// stb r30,21(r29)
	PPC_STORE_U8(ctx.r29.u32 + 21, ctx.r30.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82910D04"))) PPC_WEAK_FUNC(sub_82910D04);
PPC_FUNC_IMPL(__imp__sub_82910D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82910D08"))) PPC_WEAK_FUNC(sub_82910D08);
PPC_FUNC_IMPL(__imp__sub_82910D08) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r10,4460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4460);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x82910d40
	if (!cr6.eq) goto loc_82910D40;
	// lbz r11,4499(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4499);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82910d58
	if (!cr6.eq) goto loc_82910D58;
loc_82910D40:
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
loc_82910D58:
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// lwz r3,2056(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82910D70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82910d84
	if (!cr6.eq) goto loc_82910D84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82910D84:
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

__attribute__((alias("__imp__sub_82910D98"))) PPC_WEAK_FUNC(sub_82910D98);
PPC_FUNC_IMPL(__imp__sub_82910D98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82910DA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r30,292(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x82a1a558
	ctx.lr = 0x82910DB8;
	sub_82A1A558(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82910d08
	ctx.lr = 0x82910DC4;
	sub_82910D08(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82910dec
	if (cr6.eq) goto loc_82910DEC;
	// lwz r11,4492(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4492);
	// subf r10,r11,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// and r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 & ctx.r10.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82910DEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82910DF8"))) PPC_WEAK_FUNC(sub_82910DF8);
PPC_FUNC_IMPL(__imp__sub_82910DF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82910E00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82910d08
	ctx.lr = 0x82910E10;
	sub_82910D08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82910e44
	if (cr6.eq) goto loc_82910E44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82910d98
	ctx.lr = 0x82910E24;
	sub_82910D98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83740858
	ctx.lr = 0x82910E2C;
	sub_83740858(ctx, base);
	// rlwinm r29,r3,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82a1a580
	ctx.lr = 0x82910E34;
	sub_82A1A580(ctx, base);
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// ble cr6,0x82910e48
	if (!cr6.gt) goto loc_82910E48;
loc_82910E44:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82910E48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82910E50"))) PPC_WEAK_FUNC(sub_82910E50);
PPC_FUNC_IMPL(__imp__sub_82910E50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82910E58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82910d08
	ctx.lr = 0x82910E70;
	sub_82910D08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82910e88
	if (!cr6.eq) goto loc_82910E88;
loc_82910E7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82910E88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82910d98
	ctx.lr = 0x82910E90;
	sub_82910D98(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x82910e7c
	if (cr6.gt) goto loc_82910E7C;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82910e7c
	if (!cr6.eq) goto loc_82910E7C;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r11,5356(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5356);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x82910ef4
	if (cr6.gt) goto loc_82910EF4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82910edc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82910EDC;
	// bdzf 4*cr6+eq,0x82910ee4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82910EE4;
	// bdzf 4*cr6+eq,0x82910ee4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82910EE4;
	// bdzf 4*cr6+eq,0x82910edc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82910EDC;
	// bne cr6,0x82910eec
	if (!cr6.eq) goto loc_82910EEC;
loc_82910EDC:
	// li r11,78
	ctx.r11.s64 = 78;
	// b 0x82910ef0
	goto loc_82910EF0;
loc_82910EE4:
	// li r11,76
	ctx.r11.s64 = 76;
	// b 0x82910ef0
	goto loc_82910EF0;
loc_82910EEC:
	// li r11,86
	ctx.r11.s64 = 86;
loc_82910EF0:
	// stw r11,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r11.u32);
loc_82910EF4:
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82910F08"))) PPC_WEAK_FUNC(sub_82910F08);
PPC_FUNC_IMPL(__imp__sub_82910F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82910F18"))) PPC_WEAK_FUNC(sub_82910F18);
PPC_FUNC_IMPL(__imp__sub_82910F18) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x82910F34;
	sub_82A0C760(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,6656
	ctx.r9.s64 = 436207616;
	// li r7,58
	ctx.r7.s64 = 58;
	// rlwinm r8,r10,0,0,7
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF000000;
	// subf r6,r8,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r8.s64;
	// addic r5,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 & ctx.r7.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82910F64"))) PPC_WEAK_FUNC(sub_82910F64);
PPC_FUNC_IMPL(__imp__sub_82910F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82910F68"))) PPC_WEAK_FUNC(sub_82910F68);
PPC_FUNC_IMPL(__imp__sub_82910F68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x82910F70;
	__savegprlr_16(ctx, base);
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x831ce764
	ctx.lr = 0x82910F78;
	__savefpr_23(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-31763
	ctx.r26.s64 = -2081619968;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r22,255
	ctx.r22.s64 = 255;
	// lwz r3,-3564(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// lwz r11,292(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// lwz r25,5360(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5360);
	// lwz r10,5364(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5364);
	// lwz r9,5368(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5368);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r8,5372(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5372);
	// lwz r18,5756(r11)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5756);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// bl 0x82a0c710
	ctx.lr = 0x82910FBC;
	sub_82A0C710(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f28,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f28.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f27,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f27.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32223
	ctx.r8.s64 = -2111766528;
	// lfs f24,9008(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f24.f64 = double(temp.f32);
	// addis r19,r3,1
	ctx.r19.s64 = ctx.r3.s64 + 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lfs f23,11760(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11760);
	ctx.f23.f64 = double(temp.f32);
	// lfs f25,-23488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23488);
	ctx.f25.f64 = double(temp.f32);
	// li r20,0
	ctx.r20.s64 = 0;
	// lfs f26,-11368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -11368);
	ctx.f26.f64 = double(temp.f32);
	// li r24,0
	ctx.r24.s64 = 0;
	// lfs f30,16088(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16088);
	ctx.f30.f64 = double(temp.f32);
	// mulli r17,r25,11
	ctx.r17.s64 = ctx.r25.s64 * 11;
	// stfs f24,88(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f29,f24
	ctx.f29.f64 = ctx.f24.f64;
	// stfs f24,92(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f24,96(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r19,r19,-26424
	ctx.r19.s64 = ctx.r19.s64 + -26424;
	// lis r16,-32252
	ctx.r16.s64 = -2113667072;
	// ori r21,r7,12384
	ctx.r21.u64 = ctx.r7.u64 | 12384;
loc_8291101C:
	// add r27,r17,r24
	ctx.r27.u64 = ctx.r17.u64 + ctx.r24.u64;
	// cmpw cr6,r27,r18
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r18.s32, xer);
	// beq cr6,0x82911254
	if (cr6.eq) goto loc_82911254;
	// cmpwi cr6,r24,11
	cr6.compare<int32_t>(ctx.r24.s32, 11, xer);
	// bge cr6,0x82911254
	if (!cr6.lt) goto loc_82911254;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// cmpwi cr6,r11,33
	cr6.compare<int32_t>(ctx.r11.s32, 33, xer);
	// bne cr6,0x82911254
	if (!cr6.eq) goto loc_82911254;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,-3564(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x82911048;
	sub_82A0C788(ctx, base);
	// lfs f0,1280(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1280);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f13,f0,f27
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// lfs f12,1284(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1284);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,1288(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1288);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fsubs f10,f0,f28
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f9,f10,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fsqrts f31,f9
	ctx.f31.f64 = double(float(sqrt(ctx.f9.f64)));
	// fcmpu cr6,f31,f30
	cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bgt cr6,0x82911254
	if (cr6.gt) goto loc_82911254;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825ca560
	ctx.lr = 0x82911088;
	sub_825CA560(ctx, base);
	// lfs f0,26284(r16)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 26284);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f24
	cr6.compare(ctx.f1.f64, ctx.f24.f64);
	// bge cr6,0x8291109c
	if (!cr6.lt) goto loc_8291109C;
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// b 0x829110a8
	goto loc_829110A8;
loc_8291109C:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x829110a8
	if (cr6.lt) goto loc_829110A8;
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
loc_829110A8:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// beq cr6,0x829110c0
	if (cr6.eq) goto loc_829110C0;
	// cmpwi cr6,r25,1
	cr6.compare<int32_t>(ctx.r25.s32, 1, xer);
	// beq cr6,0x829110c0
	if (cr6.eq) goto loc_829110C0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x829110c8
	goto loc_829110C8;
loc_829110C0:
	// cntlzw r11,r25
	ctx.r11.u64 = ctx.r25.u32 == 0 ? 32 : __builtin_clz(ctx.r25.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_829110C8:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// fmr f2,f26
	ctx.f2.f64 = ctx.f26.f64;
	// bl 0x82a1d6d8
	ctx.lr = 0x829110DC;
	sub_82A1D6D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x829110f4
	if (cr6.lt) goto loc_829110F4;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x829110f8
	if (cr6.lt) goto loc_829110F8;
loc_829110F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_829110F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82911168
	if (cr6.eq) goto loc_82911168;
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82911168
	if (!cr6.eq) goto loc_82911168;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-3564(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x8291111C;
	sub_82A0C788(ctx, base);
	// lwz r11,1288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1288);
	// lwz r10,1280(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1280);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,1284(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1284);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lfs f12,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// fsubs f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmuls f8,f10,f10
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fsqrts f0,f7
	ctx.f0.f64 = double(float(sqrt(ctx.f7.f64)));
	// fcmpu cr6,f29,f0
	cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// bge cr6,0x82911254
	if (!cr6.lt) goto loc_82911254;
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
	// b 0x82911250
	goto loc_82911250;
loc_82911168:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x8291117c
	if (cr6.lt) goto loc_8291117C;
	// cmpwi cr6,r29,22
	cr6.compare<int32_t>(ctx.r29.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82911180
	if (cr6.lt) goto loc_82911180;
loc_8291117C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82911180:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82911254
	if (!cr6.eq) goto loc_82911254;
	// lwz r28,12(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// fmr f31,f25
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f25.f64;
	// cmplwi cr6,r27,22
	cr6.compare<uint32_t>(ctx.r27.u32, 22, xer);
	// add r30,r28,r21
	ctx.r30.u64 = ctx.r28.u64 + ctx.r21.u64;
	// bge cr6,0x829111b0
	if (!cr6.lt) goto loc_829111B0;
	// addi r11,r27,7
	ctx.r11.s64 = ctx.r27.s64 + 7;
	// mulli r11,r11,200
	ctx.r11.s64 = ctx.r11.s64 * 200;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x829111b4
	goto loc_829111B4;
loc_829111B0:
	// addi r31,r30,1400
	ctx.r31.s64 = ctx.r30.s64 + 1400;
loc_829111B4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a22f8
	ctx.lr = 0x829111BC;
	sub_825A22F8(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bge cr6,0x829111cc
	if (!cr6.lt) goto loc_829111CC;
	// mulli r11,r3,88
	ctx.r11.s64 = ctx.r3.s64 * 88;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_829111CC:
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f23
	cr6.compare(ctx.f0.f64, ctx.f23.f64);
	// bge cr6,0x82911208
	if (!cr6.lt) goto loc_82911208;
	// cmplwi cr6,r27,22
	cr6.compare<uint32_t>(ctx.r27.u32, 22, xer);
	// bge cr6,0x829111f0
	if (!cr6.lt) goto loc_829111F0;
	// addi r11,r27,7
	ctx.r11.s64 = ctx.r27.s64 + 7;
	// mulli r11,r11,200
	ctx.r11.s64 = ctx.r11.s64 * 200;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x829111f4
	goto loc_829111F4;
loc_829111F0:
	// addi r11,r30,1400
	ctx.r11.s64 = ctx.r30.s64 + 1400;
loc_829111F4:
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bge cr6,0x82911204
	if (!cr6.lt) goto loc_82911204;
	// mulli r10,r3,88
	ctx.r10.s64 = ctx.r3.s64 * 88;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82911204:
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82911208:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x8291121c
	if (cr6.lt) goto loc_8291121C;
	// cmpwi cr6,r29,22
	cr6.compare<int32_t>(ctx.r29.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82911220
	if (cr6.lt) goto loc_82911220;
loc_8291121C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82911220:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82911240
	if (cr6.eq) goto loc_82911240;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825cb9b0
	ctx.lr = 0x8291123C;
	sub_825CB9B0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_82911240:
	// fcmpu cr6,f29,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// bge cr6,0x82911254
	if (!cr6.lt) goto loc_82911254;
	// li r20,1
	ctx.r20.s64 = 1;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
loc_82911250:
	// mr r22,r27
	ctx.r22.u64 = ctx.r27.u64;
loc_82911254:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r19,r19,4
	ctx.r19.s64 = ctx.r19.s64 + 4;
	// cmpwi cr6,r24,11
	cr6.compare<int32_t>(ctx.r24.s32, 11, xer);
	// blt cr6,0x8291101c
	if (cr6.lt) goto loc_8291101C;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x831ce7b0
	ctx.lr = 0x82911274;
	__restfpr_23(ctx, base);
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82911278"))) PPC_WEAK_FUNC(sub_82911278);
PPC_FUNC_IMPL(__imp__sub_82911278) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8291128c
	if (!cr6.gt) goto loc_8291128C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
loc_8291128C:
	// b 0x82908498
	sub_82908498(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82911290"))) PPC_WEAK_FUNC(sub_82911290);
PPC_FUNC_IMPL(__imp__sub_82911290) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x829112a4
	if (!cr6.gt) goto loc_829112A4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_829112A4:
	// b 0x82908070
	sub_82908070(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829112A8"))) PPC_WEAK_FUNC(sub_829112A8);
PPC_FUNC_IMPL(__imp__sub_829112A8) {
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
	// bl 0x83740858
	ctx.lr = 0x829112C0;
	sub_83740858(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,27
	ctx.r3.s64 = 27;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_829112E0"))) PPC_WEAK_FUNC(sub_829112E0);
PPC_FUNC_IMPL(__imp__sub_829112E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x829112fc
	if (!cr6.eq) goto loc_829112FC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82911324
	goto loc_82911324;
loc_829112FC:
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x8291131c
	if (!cr6.eq) goto loc_8291131C;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82911320
	if (cr6.eq) goto loc_82911320;
loc_8291131C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82911320:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82911324:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82911338
	if (!cr6.eq) goto loc_82911338;
loc_82911330:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82911338:
	// lbz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 72);
	// lbz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 72);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x82911330
	if (!cr6.eq) goto loc_82911330;
	// lbz r11,73(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 73);
	// lbz r10,73(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 73);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x82911330
	if (!cr6.eq) goto loc_82911330;
	// lbz r11,74(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 74);
	// lbz r10,74(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 74);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x82911330
	if (!cr6.eq) goto loc_82911330;
	// lbz r11,75(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 75);
	// lbz r10,75(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 75);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x82911330
	if (!cr6.eq) goto loc_82911330;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r10,76(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x82911330
	if (!cr6.eq) goto loc_82911330;
	// addi r10,r4,80
	ctx.r10.s64 = ctx.r4.s64 + 80;
	// addi r11,r3,80
	ctx.r11.s64 = ctx.r3.s64 + 80;
loc_82911390:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x829113b4
	if (cr6.eq) goto loc_829113B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82911390
	if (cr6.eq) goto loc_82911390;
loc_829113B4:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82911330
	if (!cr6.eq) goto loc_82911330;
	// lbz r11,97(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 97);
	// lbz r10,97(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 97);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
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

__attribute__((alias("__imp__sub_829113D4"))) PPC_WEAK_FUNC(sub_829113D4);
PPC_FUNC_IMPL(__imp__sub_829113D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829113D8"))) PPC_WEAK_FUNC(sub_829113D8);
PPC_FUNC_IMPL(__imp__sub_829113D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x829113E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,1832(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1832);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82911428
	if (cr6.eq) goto loc_82911428;
	// lwz r11,1836(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1836);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82911428
	if (cr6.eq) goto loc_82911428;
	// addi r3,r3,1760
	ctx.r3.s64 = ctx.r3.s64 + 1760;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x831ce980
	ctx.lr = 0x82911410;
	sub_831CE980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837b1768
	ctx.lr = 0x8291141C;
	sub_837B1768(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,1836(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// bl 0x827e1550
	ctx.lr = 0x82911428;
	sub_827E1550(ctx, base);
loc_82911428:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82911430"))) PPC_WEAK_FUNC(sub_82911430);
PPC_FUNC_IMPL(__imp__sub_82911430) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,1832(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1832);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x837b1038
	sub_837B1038(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82911440"))) PPC_WEAK_FUNC(sub_82911440);
PPC_FUNC_IMPL(__imp__sub_82911440) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82911444"))) PPC_WEAK_FUNC(sub_82911444);
PPC_FUNC_IMPL(__imp__sub_82911444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82911448"))) PPC_WEAK_FUNC(sub_82911448);
PPC_FUNC_IMPL(__imp__sub_82911448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,1832(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1832);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x837b10f8
	sub_837B10F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82911458"))) PPC_WEAK_FUNC(sub_82911458);
PPC_FUNC_IMPL(__imp__sub_82911458) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291145C"))) PPC_WEAK_FUNC(sub_8291145C);
PPC_FUNC_IMPL(__imp__sub_8291145C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82911460"))) PPC_WEAK_FUNC(sub_82911460);
PPC_FUNC_IMPL(__imp__sub_82911460) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,1832(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1832);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x837b11d8
	sub_837B11D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82911470"))) PPC_WEAK_FUNC(sub_82911470);
PPC_FUNC_IMPL(__imp__sub_82911470) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82911474"))) PPC_WEAK_FUNC(sub_82911474);
PPC_FUNC_IMPL(__imp__sub_82911474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82911478"))) PPC_WEAK_FUNC(sub_82911478);
PPC_FUNC_IMPL(__imp__sub_82911478) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,1832(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1832);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x837b12d0
	sub_837B12D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82911488"))) PPC_WEAK_FUNC(sub_82911488);
PPC_FUNC_IMPL(__imp__sub_82911488) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291148C"))) PPC_WEAK_FUNC(sub_8291148C);
PPC_FUNC_IMPL(__imp__sub_8291148C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82911490"))) PPC_WEAK_FUNC(sub_82911490);
PPC_FUNC_IMPL(__imp__sub_82911490) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,1832(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1832);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x837b1390
	sub_837B1390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829114A0"))) PPC_WEAK_FUNC(sub_829114A0);
PPC_FUNC_IMPL(__imp__sub_829114A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829114A4"))) PPC_WEAK_FUNC(sub_829114A4);
PPC_FUNC_IMPL(__imp__sub_829114A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829114A8"))) PPC_WEAK_FUNC(sub_829114A8);
PPC_FUNC_IMPL(__imp__sub_829114A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r3,1832(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1832);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,20048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20048);
	ctx.f1.f64 = double(temp.f32);
	// b 0x837b1560
	sub_837B1560(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829114C0"))) PPC_WEAK_FUNC(sub_829114C0);
PPC_FUNC_IMPL(__imp__sub_829114C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829114C4"))) PPC_WEAK_FUNC(sub_829114C4);
PPC_FUNC_IMPL(__imp__sub_829114C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829114C8"))) PPC_WEAK_FUNC(sub_829114C8);
PPC_FUNC_IMPL(__imp__sub_829114C8) {
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
	// lwz r3,1832(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1832);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82911500
	if (!cr6.eq) goto loc_82911500;
loc_829114E8:
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
loc_82911500:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82911510;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x829114e8
	if (cr6.eq) goto loc_829114E8;
	// lwz r11,2164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2164);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82911550
	if (!cr6.eq) goto loc_82911550;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8291153C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x829114e8
	if (cr6.eq) goto loc_829114E8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2164, ctx.r11.u32);
loc_82911550:
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

__attribute__((alias("__imp__sub_82911568"))) PPC_WEAK_FUNC(sub_82911568);
PPC_FUNC_IMPL(__imp__sub_82911568) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,1836(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1836);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x827f2228
	sub_827F2228(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82911578"))) PPC_WEAK_FUNC(sub_82911578);
PPC_FUNC_IMPL(__imp__sub_82911578) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291157C"))) PPC_WEAK_FUNC(sub_8291157C);
PPC_FUNC_IMPL(__imp__sub_8291157C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82911580"))) PPC_WEAK_FUNC(sub_82911580);
PPC_FUNC_IMPL(__imp__sub_82911580) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,1836(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1836);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x827e74c0
	sub_827E74C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82911590"))) PPC_WEAK_FUNC(sub_82911590);
PPC_FUNC_IMPL(__imp__sub_82911590) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82911594"))) PPC_WEAK_FUNC(sub_82911594);
PPC_FUNC_IMPL(__imp__sub_82911594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82911598"))) PPC_WEAK_FUNC(sub_82911598);
PPC_FUNC_IMPL(__imp__sub_82911598) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,1836(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1836);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r11,1824(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1824);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lfs f1,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// b 0x837a6a38
	sub_837A6A38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829115BC"))) PPC_WEAK_FUNC(sub_829115BC);
PPC_FUNC_IMPL(__imp__sub_829115BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829115C0"))) PPC_WEAK_FUNC(sub_829115C0);
PPC_FUNC_IMPL(__imp__sub_829115C0) {
	PPC_FUNC_PROLOGUE();
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r3,r3,120
	ctx.r3.s64 = ctx.r3.s64 + 120;
	// ld r11,-23640(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -23640);
	// std r11,12(r31)
	PPC_STORE_U64(ctx.r31.u32 + 12, ctx.r11.u64);
	// lfs f30,26856(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26856);
	ctx.f30.f64 = double(temp.f32);
	// sth r8,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r8.u16);
	// lfs f31,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stfs f30,28(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f31,32(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// stfs f31,36(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f31,40(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f31,44(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f31,48(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f31,52(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f31,56(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f31,60(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f31,64(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f31,76(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stfs f31,80(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f31,84(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stfs f31,88(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stb r30,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r30.u8);
	// stb r30,93(r31)
	PPC_STORE_U8(ctx.r31.u32 + 93, ctx.r30.u8);
	// stb r30,94(r31)
	PPC_STORE_U8(ctx.r31.u32 + 94, ctx.r30.u8);
	// stb r30,95(r31)
	PPC_STORE_U8(ctx.r31.u32 + 95, ctx.r30.u8);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stb r30,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r30.u8);
	// stb r30,117(r31)
	PPC_STORE_U8(ctx.r31.u32 + 117, ctx.r30.u8);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// bl 0x82a35f20
	ctx.lr = 0x82911690;
	sub_82A35F20(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f30,1752(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1752, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,1756(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1756, temp.u32);
	// stfs f31,1760(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1760, temp.u32);
	// stfs f31,1764(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1764, temp.u32);
	// stfs f31,1768(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1768, temp.u32);
	// stfs f31,1772(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1772, temp.u32);
	// stfs f31,1776(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1776, temp.u32);
	// stfs f31,1780(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1780, temp.u32);
	// stfs f31,1784(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1784, temp.u32);
	// stfs f31,1788(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1788, temp.u32);
	// stfs f31,1792(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1792, temp.u32);
	// stfs f31,1796(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1796, temp.u32);
	// stfs f31,1800(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1800, temp.u32);
	// stfs f31,1804(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1804, temp.u32);
	// stfs f31,1808(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1808, temp.u32);
	// stfs f31,1812(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1812, temp.u32);
	// stb r11,1816(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1816, ctx.r11.u8);
	// stb r11,1817(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1817, ctx.r11.u8);
	// stb r11,1818(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1818, ctx.r11.u8);
	// stb r30,1819(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1819, ctx.r30.u8);
	// stb r30,1820(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1820, ctx.r30.u8);
	// stb r30,1821(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1821, ctx.r30.u8);
	// stb r30,1822(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1822, ctx.r30.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82911714"))) PPC_WEAK_FUNC(sub_82911714);
PPC_FUNC_IMPL(__imp__sub_82911714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82911718"))) PPC_WEAK_FUNC(sub_82911718);
PPC_FUNC_IMPL(__imp__sub_82911718) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82911720;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x829115c0
	ctx.lr = 0x82911734;
	sub_829115C0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,27088
	ctx.r10.s64 = ctx.r11.s64 + 27088;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r23,r31,1916
	ctx.r23.s64 = ctx.r31.s64 + 1916;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r30,1832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1832, ctx.r30.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r30,1836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1836, ctx.r30.u32);
	// stw r30,1840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1840, ctx.r30.u32);
	// bl 0x82a5c280
	ctx.lr = 0x82911760;
	sub_82A5C280(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r22,r31,2080
	ctx.r22.s64 = ctx.r31.s64 + 2080;
	// addi r29,r31,2020
	ctx.r29.s64 = ctx.r31.s64 + 2020;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r28,r31,2032
	ctx.r28.s64 = ctx.r31.s64 + 2032;
	// lfs f31,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// addi r27,r31,2044
	ctx.r27.s64 = ctx.r31.s64 + 2044;
	// stfs f31,2020(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2020, temp.u32);
	// stfs f31,2024(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2024, temp.u32);
	// stfs f31,2028(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2028, temp.u32);
	// stfs f31,2032(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2032, temp.u32);
	// stfs f31,2036(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2036, temp.u32);
	// stfs f31,2040(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2040, temp.u32);
	// stfs f31,2044(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2044, temp.u32);
	// stfs f31,2048(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2048, temp.u32);
	// stfs f31,2052(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2052, temp.u32);
	// bl 0x82a5c280
	ctx.lr = 0x829117A4;
	sub_82A5C280(ctx, base);
	// li r8,32
	ctx.r8.s64 = 32;
	// stfs f31,2136(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2136, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f31,2140(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2140, temp.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stfs f31,2144(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2144, temp.u32);
	// stb r30,2160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2160, ctx.r30.u8);
	// stw r30,2164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2164, ctx.r30.u32);
	// li r4,640
	ctx.r4.s64 = 640;
	// stw r30,1844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1844, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r30.u32);
	// addi r26,r31,2136
	ctx.r26.s64 = ctx.r31.s64 + 2136;
	// stw r30,1852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1852, ctx.r30.u32);
	// bl 0x82595718
	ctx.lr = 0x829117E0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x829117f0
	if (cr6.eq) goto loc_829117F0;
	// bl 0x82a0db20
	ctx.lr = 0x829117EC;
	sub_82A0DB20(ctx, base);
	// b 0x829117f4
	goto loc_829117F4;
loc_829117F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_829117F4:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r3,1840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1840, ctx.r3.u32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stw r30,2156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2156, ctx.r30.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r30,1944(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1944, ctx.r30.u8);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// stb r30,1945(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1945, ctx.r30.u8);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stb r30,1956(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1956, ctx.r30.u8);
	// lfs f13,-6672(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -6672);
	ctx.f13.f64 = double(temp.f32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lfs f12,27084(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 27084);
	ctx.f12.f64 = double(temp.f32);
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lfs f0,-9980(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9980);
	ctx.f0.f64 = double(temp.f32);
	// lis r3,-32222
	ctx.r3.s64 = -2111700992;
	// lfs f11,19176(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19176);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f10,-10804(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -10804);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f9,-12416(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -12416);
	ctx.f9.f64 = double(temp.f32);
	// li r11,7
	ctx.r11.s64 = 7;
	// lfs f8,-28496(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -28496);
	ctx.f8.f64 = double(temp.f32);
	// li r25,2
	ctx.r25.s64 = 2;
	// lfs f7,25364(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 25364);
	ctx.f7.f64 = double(temp.f32);
	// li r24,1
	ctx.r24.s64 = 1;
	// lfs f6,-26940(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -26940);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,-23860(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23860);
	ctx.f5.f64 = double(temp.f32);
	// stw r25,1880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1880, ctx.r25.u32);
	// lfs f4,5884(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5884);
	ctx.f4.f64 = double(temp.f32);
	// stb r24,1872(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1872, ctx.r24.u8);
	// stfs f0,1856(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1856, temp.u32);
	// stw r11,1884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1884, ctx.r11.u32);
	// stfs f13,1860(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1860, temp.u32);
	// stw r11,1888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1888, ctx.r11.u32);
	// stfs f12,1864(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1864, temp.u32);
	// stw r25,2076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2076, ctx.r25.u32);
	// stfs f11,1868(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1868, temp.u32);
	// stb r30,1957(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1957, ctx.r30.u8);
	// stfs f10,1876(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1876, temp.u32);
	// stw r30,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r30.u32);
	// stfs f9,1892(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1892, temp.u32);
	// stw r30,1952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1952, ctx.r30.u32);
	// stfs f8,1896(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1896, temp.u32);
	// stb r30,1958(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1958, ctx.r30.u8);
	// stfs f7,1900(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1900, temp.u32);
	// stb r30,1959(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1959, ctx.r30.u8);
	// stfs f6,1904(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1904, temp.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stfs f5,1908(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1908, temp.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stfs f4,1912(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1912, temp.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mulli r5,r8,10000
	ctx.r5.s64 = ctx.r8.s64 * 10000;
	// bl 0x826501d8
	ctx.lr = 0x829118D4;
	sub_826501D8(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,1960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1960, ctx.r30.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r30,1964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1964, ctx.r30.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r30,1968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1968, ctx.r30.u32);
	// stw r30,1972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1972, ctx.r30.u32);
	// stw r30,1976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1976, ctx.r30.u32);
	// stw r11,1980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1980, ctx.r11.u32);
	// stw r11,1984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1984, ctx.r11.u32);
	// stw r11,1988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1988, ctx.r11.u32);
	// stw r30,1992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1992, ctx.r30.u32);
	// stw r30,1996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1996, ctx.r30.u32);
	// stw r30,2000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2000, ctx.r30.u32);
	// stw r24,2004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2004, ctx.r24.u32);
	// stw r24,2008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2008, ctx.r24.u32);
	// stw r24,2012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2012, ctx.r24.u32);
	// stw r30,2016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2016, ctx.r30.u32);
	// stfs f31,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f31,4(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f31,8(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// stfs f31,0(r28)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// stfs f31,4(r28)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// stfs f31,8(r28)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// stfs f31,0(r27)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stfs f31,4(r27)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// stfs f31,8(r27)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// stw r30,2056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2056, ctx.r30.u32);
	// stw r30,2060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2060, ctx.r30.u32);
	// stw r30,2064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2064, ctx.r30.u32);
	// stw r30,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r30.u32);
	// stw r30,2072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2072, ctx.r30.u32);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r5,r7,30000
	ctx.r5.s64 = ctx.r7.s64 * 30000;
	// bl 0x826501d8
	ctx.lr = 0x82911960;
	sub_826501D8(ctx, base);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// stw r30,2108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2108, ctx.r30.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,2112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2112, ctx.r30.u32);
	// stw r30,2116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2116, ctx.r30.u32);
	// stfs f31,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// stfs f31,4(r26)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r26.u32 + 4, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,8(r26)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r26.u32 + 8, temp.u32);
	// stw r11,2120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2120, ctx.r11.u32);
	// lfs f0,-11316(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -11316);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,2124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2124, ctx.r11.u32);
	// lfs f13,21708(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 21708);
	ctx.f13.f64 = double(temp.f32);
	// stw r25,2128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2128, ctx.r25.u32);
	// stfs f0,2148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2148, temp.u32);
	// stw r25,2132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2132, ctx.r25.u32);
	// stfs f13,2152(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2152, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829119B4"))) PPC_WEAK_FUNC(sub_829119B4);
PPC_FUNC_IMPL(__imp__sub_829119B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829119B8"))) PPC_WEAK_FUNC(sub_829119B8);
PPC_FUNC_IMPL(__imp__sub_829119B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x829119C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r10,2156(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2156);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,27088
	ctx.r9.s64 = ctx.r11.s64 + 27088;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82911a1c
	if (cr6.eq) goto loc_82911A1C;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x829119F4;
	sub_82595150(ctx, base);
	// lwz r29,2156(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82911a10
	if (cr6.eq) goto loc_82911A10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837aaab8
	ctx.lr = 0x82911A08;
	sub_837AAAB8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82416268
	ctx.lr = 0x82911A10;
	sub_82416268(ctx, base);
loc_82911A10:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82911A18;
	sub_82595170(ctx, base);
	// stw r30,2156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2156, ctx.r30.u32);
loc_82911A1C:
	// lwz r11,1832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82911a64
	if (cr6.eq) goto loc_82911A64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82911A38;
	sub_82595150(ctx, base);
	// lwz r3,1832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82911a58
	if (cr6.eq) goto loc_82911A58;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82911A58;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82911A58:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82911A60;
	sub_82595170(ctx, base);
	// stw r30,1832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1832, ctx.r30.u32);
loc_82911A64:
	// lwz r11,1836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82911aac
	if (cr6.eq) goto loc_82911AAC;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82911A80;
	sub_82595150(ctx, base);
	// lwz r3,1836(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82911aa0
	if (cr6.eq) goto loc_82911AA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82911AA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82911AA0:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82911AA8;
	sub_82595170(ctx, base);
	// stw r30,1836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1836, ctx.r30.u32);
loc_82911AAC:
	// lwz r11,1840(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1840);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82911af0
	if (cr6.eq) goto loc_82911AF0;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82911AC8;
	sub_82595150(ctx, base);
	// lwz r29,1840(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1840);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82911ae4
	if (cr6.eq) goto loc_82911AE4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a0dc70
	ctx.lr = 0x82911ADC;
	sub_82A0DC70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82416268
	ctx.lr = 0x82911AE4;
	sub_82416268(ctx, base);
loc_82911AE4:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82911AEC;
	sub_82595170(ctx, base);
	// stw r30,1840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1840, ctx.r30.u32);
loc_82911AF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82915748
	ctx.lr = 0x82911AF8;
	sub_82915748(ctx, base);
	// addi r3,r31,2080
	ctx.r3.s64 = ctx.r31.s64 + 2080;
	// bl 0x82a5c688
	ctx.lr = 0x82911B00;
	sub_82A5C688(ctx, base);
	// addi r3,r31,1916
	ctx.r3.s64 = ctx.r31.s64 + 1916;
	// bl 0x82a5c688
	ctx.lr = 0x82911B08;
	sub_82A5C688(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r10,r11,-32552
	ctx.r10.s64 = ctx.r11.s64 + -32552;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82911B1C"))) PPC_WEAK_FUNC(sub_82911B1C);
PPC_FUNC_IMPL(__imp__sub_82911B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82911B20"))) PPC_WEAK_FUNC(sub_82911B20);
PPC_FUNC_IMPL(__imp__sub_82911B20) {
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
	// lwz r3,1832(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1832);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82911b60
	if (cr6.eq) goto loc_82911B60;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// bl 0x837b0ea0
	ctx.lr = 0x82911B48;
	sub_837B0EA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82911b60
	if (cr6.eq) goto loc_82911B60;
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829113d8
	ctx.lr = 0x82911B60;
	sub_829113D8(ctx, base);
loc_82911B60:
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

__attribute__((alias("__imp__sub_82911B74"))) PPC_WEAK_FUNC(sub_82911B74);
PPC_FUNC_IMPL(__imp__sub_82911B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82911B78"))) PPC_WEAK_FUNC(sub_82911B78);
PPC_FUNC_IMPL(__imp__sub_82911B78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82911B80;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1832(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1832);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82911bd4
	if (cr6.eq) goto loc_82911BD4;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82911BA8;
	sub_82595150(ctx, base);
	// lwz r3,1832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82911bc8
	if (cr6.eq) goto loc_82911BC8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82911BC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82911BC8:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82911BD0;
	sub_82595170(ctx, base);
	// stw r29,1832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1832, ctx.r29.u32);
loc_82911BD4:
	// lwz r11,2156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82911c18
	if (cr6.eq) goto loc_82911C18;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82911BF0;
	sub_82595150(ctx, base);
	// lwz r30,2156(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82911c0c
	if (cr6.eq) goto loc_82911C0C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837aaab8
	ctx.lr = 0x82911C04;
	sub_837AAAB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x82911C0C;
	sub_82416268(ctx, base);
loc_82911C0C:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82911C14;
	sub_82595170(ctx, base);
	// stw r29,2156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2156, ctx.r29.u32);
loc_82911C18:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82911C20"))) PPC_WEAK_FUNC(sub_82911C20);
PPC_FUNC_IMPL(__imp__sub_82911C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82911C28;
	__savegprlr_27(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1832(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1832);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82911cc4
	if (cr6.eq) goto loc_82911CC4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a2368
	ctx.lr = 0x82911C4C;
	sub_825A2368(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,1832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// bl 0x837b0ea0
	ctx.lr = 0x82911C58;
	sub_837B0EA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82911e0c
	if (cr6.eq) goto loc_82911E0C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x829112e0
	ctx.lr = 0x82911C70;
	sub_829112E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82911e0c
	if (cr6.eq) goto loc_82911E0C;
	// lwz r11,1832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82911cc4
	if (cr6.eq) goto loc_82911CC4;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82911C98;
	sub_82595150(ctx, base);
	// lwz r3,1832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82911cb8
	if (cr6.eq) goto loc_82911CB8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82911CB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82911CB8:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82911CC0;
	sub_82595170(ctx, base);
	// stw r29,1832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1832, ctx.r29.u32);
loc_82911CC4:
	// li r28,32
	ctx.r28.s64 = 32;
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// li r4,268
	ctx.r4.s64 = 268;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x82911CDC;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82911d08
	if (cr6.eq) goto loc_82911D08;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x83740a50
	ctx.lr = 0x82911CF0;
	sub_83740A50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x837c9af0
	ctx.lr = 0x82911D04;
	sub_837C9AF0(ctx, base);
	// b 0x82911d0c
	goto loc_82911D0C;
loc_82911D08:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82911D0C:
	// stw r3,1832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1832, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82911dec
	if (cr6.eq) goto loc_82911DEC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82911D28;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,2156(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82911d6c
	if (cr6.eq) goto loc_82911D6C;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82911D44;
	sub_82595150(ctx, base);
	// lwz r30,2156(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82911d60
	if (cr6.eq) goto loc_82911D60;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837aaab8
	ctx.lr = 0x82911D58;
	sub_837AAAB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x82911D60;
	sub_82416268(ctx, base);
loc_82911D60:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82911D68;
	sub_82595170(ctx, base);
	// stw r29,2156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2156, ctx.r29.u32);
loc_82911D6C:
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,892
	ctx.r4.s64 = 892;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595718
	ctx.lr = 0x82911D80;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82911d94
	if (cr6.eq) goto loc_82911D94;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x837aa440
	ctx.lr = 0x82911D90;
	sub_837AA440(ctx, base);
	// b 0x82911d98
	goto loc_82911D98;
loc_82911D94:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82911D98:
	// stw r3,2156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2156, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82911df8
	if (!cr6.eq) goto loc_82911DF8;
	// lwz r11,1832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82911dec
	if (cr6.eq) goto loc_82911DEC;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82911DC0;
	sub_82595150(ctx, base);
	// lwz r3,1832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82911de0
	if (cr6.eq) goto loc_82911DE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82911DE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82911DE0:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82911DE8;
	sub_82595170(ctx, base);
	// stw r29,1832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1832, ctx.r29.u32);
loc_82911DEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82911DF8:
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x831ce980
	ctx.lr = 0x82911E08;
	sub_831CE980(ctx, base);
	// stw r29,2164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2164, ctx.r29.u32);
loc_82911E0C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82911E18"))) PPC_WEAK_FUNC(sub_82911E18);
PPC_FUNC_IMPL(__imp__sub_82911E18) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1832(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1832);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82911f4c
	if (cr6.eq) goto loc_82911F4C;
	// lwz r11,1836(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1836);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82911f4c
	if (cr6.eq) goto loc_82911F4C;
	// lwz r3,1832(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1832);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82911E60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82911f4c
	if (cr6.eq) goto loc_82911F4C;
	// lwz r11,2156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82911f4c
	if (cr6.eq) goto loc_82911F4C;
	// lbz r11,1825(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1825);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82911e90
	if (!cr6.eq) goto loc_82911E90;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82911f4c
	if (cr6.eq) goto loc_82911F4C;
loc_82911E90:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82911eb4
	if (cr6.eq) goto loc_82911EB4;
	// bl 0x82a1aaa8
	ctx.lr = 0x82911EA8;
	sub_82A1AAA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82911f4c
	if (!cr6.eq) goto loc_82911F4C;
loc_82911EB4:
	// lbz r11,1584(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1584);
	// lwz r3,1832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x837b1690
	ctx.lr = 0x82911EC8;
	sub_837B1690(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,1836(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// lwz r3,1832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// bl 0x837b1ca8
	ctx.lr = 0x82911ED8;
	sub_837B1CA8(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r3,1836(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x837a7140
	ctx.lr = 0x82911EF8;
	sub_837A7140(ctx, base);
	// lwz r7,1836(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-31778
	ctx.r8.s64 = -2082603008;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r3,1832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f10,28(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,1564(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,1568(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1568);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,1572(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	ctx.f7.f64 = double(temp.f32);
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f8,116(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f7,120(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f0,-23656(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -23656);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f10,f0
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// bl 0x837b1dc0
	ctx.lr = 0x82911F4C;
	sub_837B1DC0(ctx, base);
loc_82911F4C:
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

__attribute__((alias("__imp__sub_82911F64"))) PPC_WEAK_FUNC(sub_82911F64);
PPC_FUNC_IMPL(__imp__sub_82911F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82911F68"))) PPC_WEAK_FUNC(sub_82911F68);
PPC_FUNC_IMPL(__imp__sub_82911F68) {
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
	// lwz r11,1832(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1832);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82911fd0
	if (cr6.eq) goto loc_82911FD0;
	// lwz r11,1840(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1840);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82911fd0
	if (cr6.eq) goto loc_82911FD0;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82911fc4
	if (cr6.eq) goto loc_82911FC4;
	// bl 0x82a1aaa8
	ctx.lr = 0x82911FB4;
	sub_82A1AAA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 & ctx.r31.u64;
loc_82911FC4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,1832(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1832);
	// bl 0x837b1748
	ctx.lr = 0x82911FD0;
	sub_837B1748(ctx, base);
loc_82911FD0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82911FE8"))) PPC_WEAK_FUNC(sub_82911FE8);
PPC_FUNC_IMPL(__imp__sub_82911FE8) {
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
	// bl 0x82911b78
	ctx.lr = 0x82912000;
	sub_82911B78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2164, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8291201C"))) PPC_WEAK_FUNC(sub_8291201C);
PPC_FUNC_IMPL(__imp__sub_8291201C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82912020"))) PPC_WEAK_FUNC(sub_82912020);
PPC_FUNC_IMPL(__imp__sub_82912020) {
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
	// lwz r11,1836(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1836);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82912084
	if (cr6.eq) goto loc_82912084;
	// lwz r11,1832(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1832);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82912060
	if (!cr6.eq) goto loc_82912060;
	// addi r4,r3,28
	ctx.r4.s64 = ctx.r3.s64 + 28;
	// bl 0x82911c20
	ctx.lr = 0x82912054;
	sub_82911C20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82912084
	if (cr6.eq) goto loc_82912084;
loc_82912060:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82912074;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stw r7,2164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2164, ctx.r7.u32);
loc_82912084:
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

__attribute__((alias("__imp__sub_82912098"))) PPC_WEAK_FUNC(sub_82912098);
PPC_FUNC_IMPL(__imp__sub_82912098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x829120A0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,1832(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1832);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829120C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x829120dc
	if (!cr6.eq) goto loc_829120DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_829120DC:
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lwz r9,-3564(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3564);
	// lwz r10,292(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 292);
	// blt cr6,0x82912144
	if (cr6.lt) goto loc_82912144;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// bge cr6,0x82912144
	if (!cr6.lt) goto loc_82912144;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82912144
	if (cr6.eq) goto loc_82912144;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r7,5768(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 5768);
	// addic r6,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r8,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r6.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r5,r8,24
	ctx.r5.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82912144
	if (!cr6.eq) goto loc_82912144;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,5790(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5790);
	// addic r8,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfe r11,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// subfic r6,r7,0
	xer.ca = ctx.r7.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r7.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r29,r4,r29
	ctx.r29.u64 = ctx.r4.u64 & ctx.r29.u64;
loc_82912144:
	// lwz r30,472(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 472);
	// lwz r28,432(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 432);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8291217c
	if (cr6.eq) goto loc_8291217C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a47d40
	ctx.lr = 0x8291215C;
	sub_82A47D40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8291217c
	if (cr6.eq) goto loc_8291217C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83930ac8
	ctx.lr = 0x82912170;
	sub_83930AC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x829121ac
	if (!cr6.eq) goto loc_829121AC;
loc_8291217C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x829121b0
	if (cr6.eq) goto loc_829121B0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82da1d10
	ctx.lr = 0x8291218C;
	sub_82DA1D10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829121b0
	if (cr6.eq) goto loc_829121B0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a18500
	ctx.lr = 0x829121A0;
	sub_82A18500(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829121b0
	if (cr6.eq) goto loc_829121B0;
loc_829121AC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_829121B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829121C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r3,1832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// li r4,2
	ctx.r4.s64 = 2;
	// lfs f31,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x837b1038
	ctx.lr = 0x829121E4;
	sub_837B1038(ctx, base);
	// lwz r4,2156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// lwz r3,1836(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// bl 0x827df1e8
	ctx.lr = 0x829121F0;
	sub_827DF1E8(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x83740a98
	ctx.lr = 0x829121FC;
	sub_83740A98(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82912210
	if (!cr6.gt) goto loc_82912210;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bgt cr6,0x82912210
	if (cr6.gt) goto loc_82912210;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82912210:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,2156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// lwz r3,1832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// bl 0x837b0fd8
	ctx.lr = 0x82912220;
	sub_837B0FD8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// bl 0x837b1690
	ctx.lr = 0x8291222C;
	sub_837B1690(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,1836(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// lwz r3,1832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// bl 0x837b1ca8
	ctx.lr = 0x8291223C;
	sub_837B1CA8(ctx, base);
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r3,1836(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x837a7140
	ctx.lr = 0x82912254;
	sub_837A7140(ctx, base);
	// lwz r10,1836(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r3,1832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f10,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,1564(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,1568(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1568);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,1572(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	ctx.f7.f64 = double(temp.f32);
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f8,116(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f7,120(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f0,-23656(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23656);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f10,f0
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// bl 0x837b1dc0
	ctx.lr = 0x829122A8;
	sub_837B1DC0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829122B8"))) PPC_WEAK_FUNC(sub_829122B8);
PPC_FUNC_IMPL(__imp__sub_829122B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x829122C0;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce748
	ctx.lr = 0x829122C8;
	__savefpr_16(ctx, base);
	// stwu r1,-1520(r1)
	ea = -1520 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1840(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1840);
	// li r16,0
	ctx.r16.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r16,1992(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1992, ctx.r16.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r16,1996(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1996, ctx.r16.u32);
	// stw r16,2000(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2000, ctx.r16.u32);
	// stb r16,1957(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1957, ctx.r16.u8);
	// beq cr6,0x82914380
	if (cr6.eq) goto loc_82914380;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r29,292(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// bl 0x82a0c760
	ctx.lr = 0x82912304;
	sub_82A0C760(ctx, base);
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c788
	ctx.lr = 0x82912318;
	sub_82A0C788(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82914380
	if (cr6.eq) goto loc_82914380;
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// beq cr6,0x82914380
	if (cr6.eq) goto loc_82914380;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82914380
	if (cr6.eq) goto loc_82914380;
	// lbz r11,4503(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4503);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82914380
	if (!cr6.eq) goto loc_82914380;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r30,472(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// lwz r28,432(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8291237c
	if (cr6.eq) goto loc_8291237C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a47d40
	ctx.lr = 0x8291235C;
	sub_82A47D40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8291237c
	if (cr6.eq) goto loc_8291237C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83930ac8
	ctx.lr = 0x82912370;
	sub_83930AC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82914380
	if (!cr6.eq) goto loc_82914380;
loc_8291237C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x829123ac
	if (cr6.eq) goto loc_829123AC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82da1d10
	ctx.lr = 0x8291238C;
	sub_82DA1D10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829123ac
	if (cr6.eq) goto loc_829123AC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a18500
	ctx.lr = 0x829123A0;
	sub_82A18500(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82914380
	if (!cr6.eq) goto loc_82914380;
loc_829123AC:
	// lwz r11,116(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 116);
	// addi r30,r31,2020
	ctx.r30.s64 = ctx.r31.s64 + 2020;
	// lwz r10,120(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 120);
	// addi r27,r31,2032
	ctx.r27.s64 = ctx.r31.s64 + 2032;
	// lwz r9,124(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 124);
	// li r8,15
	ctx.r8.s64 = 15;
	// lwz r7,104(r19)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r19.u32 + 104);
	// li r28,15
	ctx.r28.s64 = 15;
	// lwz r6,108(r19)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r19.u32 + 108);
	// lwz r5,112(r19)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r19.u32 + 112);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// lfs f11,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// lfs f10,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lfs f9,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// lwz r17,4472(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4472);
	// li r29,15
	ctx.r29.s64 = 15;
	// lwz r4,92(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 92);
	// lwz r3,96(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 96);
	// lwz r11,100(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 100);
	// lbz r14,1958(r31)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1958);
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// stw r27,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r27.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stb r16,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r16.u8);
	// stb r16,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r16.u8);
	// stw r4,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r4.u32);
	// stb r16,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r16.u8);
	// stw r3,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r3.u32);
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// lfs f23,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f23.f64 = double(temp.f32);
	// lfs f19,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f19.f64 = double(temp.f32);
	// fsubs f8,f23,f0
	ctx.f8.f64 = double(float(ctx.f23.f64 - ctx.f0.f64));
	// lfs f22,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f22.f64 = double(temp.f32);
	// fsubs f7,f19,f13
	ctx.f7.f64 = double(float(ctx.f19.f64 - ctx.f13.f64));
	// lfs f26,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f26.f64 = double(temp.f32);
	// fsubs f6,f22,f12
	ctx.f6.f64 = double(float(ctx.f22.f64 - ctx.f12.f64));
	// lfs f21,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f21.f64 = double(temp.f32);
	// fsubs f5,f26,f11
	ctx.f5.f64 = double(float(ctx.f26.f64 - ctx.f11.f64));
	// lfs f25,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f25.f64 = double(temp.f32);
	// fsubs f4,f21,f10
	ctx.f4.f64 = double(float(ctx.f21.f64 - ctx.f10.f64));
	// fsubs f3,f25,f9
	ctx.f3.f64 = double(float(ctx.f25.f64 - ctx.f9.f64));
	// stfs f8,168(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f7,172(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f6,176(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f5,184(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f4,188(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f3,192(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// bl 0x83740868
	ctx.lr = 0x8291248C;
	sub_83740868(ctx, base);
	// lfs f2,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f2,f1
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f1.f64));
	// lfs f13,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f0,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmuls f10,f13,f1
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f11,172(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f10,176(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// bl 0x83740868
	ctx.lr = 0x829124B4;
	sub_83740868(ctx, base);
	// lfs f0,172(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f0,f0
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f8.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f7,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f31,f8,f1
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fmuls f29,f7,f1
	ctx.f29.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f29,188(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// addi r24,r11,-26260
	ctx.r24.s64 = ctx.r11.s64 + -26260;
	// fmadds f6,f0,f0,f9
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f9.f64));
	// lfs f0,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f5,f0,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fsqrts f4,f5
	ctx.f4.f64 = double(float(sqrt(ctx.f5.f64)));
	// lfs f3,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f3.f64 = double(temp.f32);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// lfs f30,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f28,f3,f1
	ctx.f28.f64 = double(float(ctx.f3.f64 * ctx.f1.f64));
	// stfs f28,192(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fcmpu cr6,f4,f30
	cr6.compare(ctx.f4.f64, ctx.f30.f64);
	// ble cr6,0x82912514
	if (!cr6.gt) goto loc_82912514;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x825eb548
	ctx.lr = 0x82912514;
	sub_825EB548(ctx, base);
loc_82912514:
	// fmuls f0,f29,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f29.f64));
	// fmadds f13,f31,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f31.f64 + ctx.f0.f64));
	// fmadds f12,f28,f28,f13
	ctx.f12.f64 = double(float(ctx.f28.f64 * ctx.f28.f64 + ctx.f13.f64));
	// fsqrts f11,f12
	ctx.f11.f64 = double(float(sqrt(ctx.f12.f64)));
	// fcmpu cr6,f11,f30
	cr6.compare(ctx.f11.f64, ctx.f30.f64);
	// ble cr6,0x82912534
	if (!cr6.gt) goto loc_82912534;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x825eb548
	ctx.lr = 0x82912534;
	sub_825EB548(ctx, base);
loc_82912534:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,0(r19)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r19.u32 + 0);
	// li r23,7
	ctx.r23.s64 = 7;
	// addi r25,r11,9008
	ctx.r25.s64 = ctx.r11.s64 + 9008;
	// lwz r11,1952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1952);
	// li r15,1
	ctx.r15.s64 = 1;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// extsb r18,r10
	ctx.r18.s64 = ctx.r10.s8;
	// mr r21,r16
	ctx.r21.u64 = ctx.r16.u64;
	// lfs f31,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// fmr f18,f31
	ctx.f18.f64 = ctx.f31.f64;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// fmr f12,f31
	ctx.f12.f64 = ctx.f31.f64;
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// beq cr6,0x829125d0
	if (cr6.eq) goto loc_829125D0;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x829125d0
	if (cr6.eq) goto loc_829125D0;
	// lwz r10,1948(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1948);
	// cmpwi cr6,r10,7
	cr6.compare<int32_t>(ctx.r10.s32, 7, xer);
	// beq cr6,0x8291259c
	if (cr6.eq) goto loc_8291259C;
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// bne cr6,0x82912600
	if (!cr6.eq) goto loc_82912600;
loc_8291259C:
	// addi r10,r10,-7
	ctx.r10.s64 = ctx.r10.s64 + -7;
	// stw r23,1992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1992, ctx.r23.u32);
	// lfs f29,104(r19)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 104);
	ctx.f29.f64 = double(temp.f32);
	// li r28,15
	ctx.r28.s64 = 15;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lfs f12,108(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// lfs f28,112(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 112);
	ctx.f28.f64 = double(temp.f32);
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// rlwinm r10,r8,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lfs f0,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r10,8
	ctx.r29.s64 = ctx.r10.s64 + 8;
	// b 0x82912600
	goto loc_82912600;
loc_829125D0:
	// stw r23,1996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1996, ctx.r23.u32);
	// addi r10,r11,-7
	ctx.r10.s64 = ctx.r11.s64 + -7;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r29,15
	ctx.r29.s64 = 15;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r21,r15
	ctx.r21.u64 = ctx.r15.u64;
	// rlwinm r10,r8,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r28,r10,8
	ctx.r28.s64 = ctx.r10.s64 + 8;
	// lfs f29,116(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 116);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,124(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 124);
	ctx.f28.f64 = double(temp.f32);
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
loc_82912600:
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82912618
	if (!cr6.eq) goto loc_82912618;
	// clrlwi r10,r21,24
	ctx.r10.u64 = ctx.r21.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82912664
	if (cr6.eq) goto loc_82912664;
loc_82912618:
	// lfs f11,1896(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1896);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// blt cr6,0x82912664
	if (cr6.lt) goto loc_82912664;
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// mr r21,r16
	ctx.r21.u64 = ctx.r16.u64;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r29,15
	ctx.r29.s64 = 15;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// beq cr6,0x82912660
	if (cr6.eq) goto loc_82912660;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x82912660
	if (cr6.eq) goto loc_82912660;
	// lwz r11,1948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1948);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// beq cr6,0x82912658
	if (cr6.eq) goto loc_82912658;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x82912664
	if (!cr6.eq) goto loc_82912664;
loc_82912658:
	// stw r16,1992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1992, ctx.r16.u32);
	// b 0x82912664
	goto loc_82912664;
loc_82912660:
	// stw r16,1996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1996, ctx.r16.u32);
loc_82912664:
	// clrlwi r22,r9,24
	ctx.r22.u64 = ctx.r9.u32 & 0xFF;
	// lis r26,-31778
	ctx.r26.s64 = -2082603008;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// bne cr6,0x82912680
	if (!cr6.eq) goto loc_82912680;
	// clrlwi r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829127a4
	if (cr6.eq) goto loc_829127A4;
loc_82912680:
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// stfs f30,104(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f0,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// fsubs f13,f28,f13
	ctx.f13.f64 = double(float(ctx.f28.f64 - ctx.f13.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// bl 0x825f89a8
	ctx.lr = 0x829126AC;
	sub_825F89A8(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825f89a8
	ctx.lr = 0x829126B8;
	sub_825F89A8(ctx, base);
	// addi r5,r1,196
	ctx.r5.s64 = ctx.r1.s64 + 196;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8263eeb0
	ctx.lr = 0x829126C8;
	sub_8263EEB0(ctx, base);
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f27,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f27.f64 = double(temp.f32);
	// fmr f18,f27
	ctx.f18.f64 = ctx.f27.f64;
	// bl 0x825eb548
	ctx.lr = 0x829126E4;
	sub_825EB548(ctx, base);
	// lfs f0,-23656(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -23656);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f1,f27,f0
	ctx.f1.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// stfs f30,156(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x82624408
	ctx.lr = 0x82912708;
	sub_82624408(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x828c56a0
	ctx.lr = 0x82912710;
	sub_828C56A0(ctx, base);
	// lfs f11,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r1,624
	ctx.r11.s64 = ctx.r1.s64 + 624;
	// lfs f9,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r1,592
	ctx.r10.s64 = ctx.r1.s64 + 592;
	// lfs f8,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f8.f64 = double(temp.f32);
	// addi r7,r1,624
	ctx.r7.s64 = ctx.r1.s64 + 624;
	// stfs f11,272(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// addi r6,r1,592
	ctx.r6.s64 = ctx.r1.s64 + 592;
	// stfs f10,276(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// stfs f9,280(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// stfs f8,284(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// li r3,9
	ctx.r3.s64 = 9;
	// lvlx128 v63,r0,r25
	temp.u32 = ctx.r25.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v61,r0,r24
	temp.u32 = ctx.r24.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v60,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// lfs f12,1912(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1912);
	ctx.f12.f64 = double(temp.f32);
	// stfs f29,304(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// stfs f12,308(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// stfs f28,312(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// stvx128 v60,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83102db0
	ctx.lr = 0x82912778;
	sub_83102DB0(ctx, base);
	// lfs f0,-23656(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -23656);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f27,f0
	ctx.f7.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// li r3,2
	ctx.r3.s64 = 2;
	// stfs f29,128(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// stfs f28,136(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lvx128 v1,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fneg f1,f7
	ctx.f1.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// bl 0x837a0d80
	ctx.lr = 0x829127A4;
	sub_837A0D80(ctx, base);
loc_829127A4:
	// lwz r11,1952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1952);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// beq cr6,0x829127d4
	if (cr6.eq) goto loc_829127D4;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x829127d4
	if (cr6.eq) goto loc_829127D4;
	// lwz r11,1948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1948);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// beq cr6,0x829127cc
	if (cr6.eq) goto loc_829127CC;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x829127d8
	if (!cr6.eq) goto loc_829127D8;
loc_829127CC:
	// stw r16,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r16.u32);
	// b 0x829127d8
	goto loc_829127D8;
loc_829127D4:
	// stw r16,1952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1952, ctx.r16.u32);
loc_829127D8:
	// lwz r11,1836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82912800
	if (cr6.eq) goto loc_82912800;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82828e28
	ctx.lr = 0x829127F4;
	sub_82828E28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82912800
	if (cr6.eq) goto loc_82912800;
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
loc_82912800:
	// lhz r10,20(r19)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r19.u32 + 20);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// lhz r9,18(r19)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r19.u32 + 18);
	// lwz r8,0(r19)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// std r5,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f10.u64);
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bne cr6,0x82912858
	if (!cr6.eq) goto loc_82912858;
	// cmpwi cr6,r18,10
	cr6.compare<int32_t>(ctx.r18.s32, 10, xer);
	// beq cr6,0x82912858
	if (cr6.eq) goto loc_82912858;
	// stb r16,1956(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1956, ctx.r16.u8);
	// stb r16,1957(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1957, ctx.r16.u8);
	// b 0x829128a0
	goto loc_829128A0;
loc_82912858:
	// lbz r8,1956(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1956);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x829128a0
	if (!cr6.eq) goto loc_829128A0;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// beq cr6,0x82912888
	if (cr6.eq) goto loc_82912888;
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// beq cr6,0x82912888
	if (cr6.eq) goto loc_82912888;
	// cmpwi cr6,r10,10
	cr6.compare<int32_t>(ctx.r10.s32, 10, xer);
	// bne cr6,0x829128a0
	if (!cr6.eq) goto loc_829128A0;
	// cmpwi cr6,r18,10
	cr6.compare<int32_t>(ctx.r18.s32, 10, xer);
	// bne cr6,0x829128a0
	if (!cr6.eq) goto loc_829128A0;
	// b 0x82912890
	goto loc_82912890;
loc_82912888:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82912918
	if (cr6.eq) goto loc_82912918;
loc_82912890:
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// bgt cr6,0x829128a0
	if (cr6.gt) goto loc_829128A0;
	// stb r15,1956(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1956, ctx.r15.u8);
	// stb r15,1957(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1957, ctx.r15.u8);
loc_829128A0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82912918
	if (cr6.eq) goto loc_82912918;
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bgt cr6,0x82912920
	if (cr6.gt) goto loc_82912920;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// beq cr6,0x829128e8
	if (cr6.eq) goto loc_829128E8;
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// bne cr6,0x82912920
	if (!cr6.eq) goto loc_82912920;
	// lbz r11,1945(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1945);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82912920
	if (!cr6.eq) goto loc_82912920;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// stb r15,1945(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1945, ctx.r15.u8);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r9,r11,6
	ctx.r9.s64 = ctx.r11.s64 + 6;
	// stw r9,1952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1952, ctx.r9.u32);
	// b 0x82912920
	goto loc_82912920;
loc_829128E8:
	// lbz r11,1944(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1944);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82912920
	if (!cr6.eq) goto loc_82912920;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82912908
	if (!cr6.eq) goto loc_82912908;
	// stw r23,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r23.u32);
	// stb r15,1944(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1944, ctx.r15.u8);
	// b 0x82912920
	goto loc_82912920;
loc_82912908:
	// li r11,6
	ctx.r11.s64 = 6;
	// stb r15,1944(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1944, ctx.r15.u8);
	// stw r11,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r11.u32);
	// b 0x82912920
	goto loc_82912920;
loc_82912918:
	// stb r16,1944(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1944, ctx.r16.u8);
	// stb r16,1945(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1945, ctx.r16.u8);
loc_82912920:
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x825eb548
	ctx.lr = 0x82912934;
	sub_825EB548(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r31,1916
	ctx.r3.s64 = ctx.r31.s64 + 1916;
	// bl 0x82a5c2d0
	ctx.lr = 0x82912940;
	sub_82A5C2D0(ctx, base);
	// lis r11,27670
	ctx.r11.s64 = 1813381120;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lfs f0,-23656(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -23656);
	ctx.f0.f64 = double(temp.f32);
	// ori r8,r11,49517
	ctx.r8.u64 = ctx.r11.u64 | 49517;
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// mulhwu r11,r3,r8
	ctx.r11.u64 = (uint64_t(ctx.r3.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f30,140(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// subf r7,r11,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r10,r7,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r5,r6,24,8,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFFFF;
	// mulli r11,r5,360
	ctx.r11.s64 = ctx.r5.s64 * 360;
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r9,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r9.u64);
	// lfd f13,144(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// bl 0x82624408
	ctx.lr = 0x829129A0;
	sub_82624408(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x828c56a0
	ctx.lr = 0x829129A8;
	sub_828C56A0(ctx, base);
	// lfs f0,1892(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1892);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// lwz r11,2004(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2004);
	// lfs f9,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f19,f0
	cr6.compare(ctx.f19.f64, ctx.f0.f64);
	// lfs f8,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f7.f64 = double(temp.f32);
	// stfs f10,224(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f9,228(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f8,232(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f7,236(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// bge cr6,0x829129f4
	if (!cr6.lt) goto loc_829129F4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x829129e4
	if (!cr6.lt) goto loc_829129E4;
	// stw r16,2004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2004, ctx.r16.u32);
loc_829129E4:
	// lwz r11,2004(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2004);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2004, ctx.r11.u32);
	// b 0x82912a04
	goto loc_82912A04;
loc_829129F4:
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,2004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2004, ctx.r11.u32);
	// ble 0x82912a04
	if (!cr0.gt) goto loc_82912A04;
	// stw r16,2004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2004, ctx.r16.u32);
loc_82912A04:
	// lwz r11,2008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2008);
	// fcmpu cr6,f21,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f21.f64, ctx.f0.f64);
	// bge cr6,0x82912a2c
	if (!cr6.lt) goto loc_82912A2C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82912a1c
	if (!cr6.lt) goto loc_82912A1C;
	// stw r16,2008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2008, ctx.r16.u32);
loc_82912A1C:
	// lwz r11,2008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2008);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2008, ctx.r11.u32);
	// b 0x82912a3c
	goto loc_82912A3C;
loc_82912A2C:
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,2008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2008, ctx.r11.u32);
	// ble 0x82912a3c
	if (!cr0.gt) goto loc_82912A3C;
	// stw r16,2008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2008, ctx.r16.u32);
loc_82912A3C:
	// fcmpu cr6,f21,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f21.f64, ctx.f0.f64);
	// bge cr6,0x82912a6c
	if (!cr6.lt) goto loc_82912A6C;
	// fcmpu cr6,f19,f0
	cr6.compare(ctx.f19.f64, ctx.f0.f64);
	// bge cr6,0x82912a6c
	if (!cr6.lt) goto loc_82912A6C;
	// lwz r11,2012(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2012);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82912a5c
	if (!cr6.lt) goto loc_82912A5C;
	// stw r16,2012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2012, ctx.r16.u32);
loc_82912A5C:
	// lwz r11,2012(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2012);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2012, ctx.r11.u32);
	// b 0x82912a80
	goto loc_82912A80;
loc_82912A6C:
	// lwz r11,2012(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2012);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,2012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2012, ctx.r11.u32);
	// ble 0x82912a80
	if (!cr0.gt) goto loc_82912A80;
	// stw r16,2012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2012, ctx.r16.u32);
loc_82912A80:
	// lfs f13,1900(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1900);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,2016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2016);
	// lfs f20,204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f20.f64 = double(temp.f32);
	// fcmpu cr6,f20,f13
	cr6.compare(ctx.f20.f64, ctx.f13.f64);
	// bge cr6,0x82912ab0
	if (!cr6.lt) goto loc_82912AB0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82912aa0
	if (!cr6.lt) goto loc_82912AA0;
	// stw r16,2016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2016, ctx.r16.u32);
loc_82912AA0:
	// lwz r11,2016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2016);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2016, ctx.r11.u32);
	// b 0x82912ac0
	goto loc_82912AC0;
loc_82912AB0:
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,2016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2016, ctx.r11.u32);
	// ble 0x82912ac0
	if (!cr0.gt) goto loc_82912AC0;
	// stw r16,2016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2016, ctx.r16.u32);
loc_82912AC0:
	// lwz r10,156(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 156);
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// lwz r9,152(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 152);
	// lwz r8,160(r19)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r19.u32 + 160);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82912aec
	if (!cr6.lt) goto loc_82912AEC;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_82912AEC:
	// lwz r10,2004(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2004);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt cr6,0x82912b2c
	if (cr6.gt) goto loc_82912B2C;
	// lwz r10,2008(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2008);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt cr6,0x82912b2c
	if (cr6.gt) goto loc_82912B2C;
	// lwz r10,2016(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2016);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt cr6,0x82912b2c
	if (cr6.gt) goto loc_82912B2C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82912b2c
	if (!cr6.eq) goto loc_82912B2C;
	// lwz r11,1960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1960);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1960, ctx.r11.u32);
	// b 0x82912b30
	goto loc_82912B30;
loc_82912B2C:
	// stw r16,1960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1960, ctx.r16.u32);
loc_82912B30:
	// lwz r10,1960(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1960);
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f29,f13
	ctx.f29.f64 = double(float(ctx.f13.f64));
	// bl 0x83740868
	ctx.lr = 0x82912B48;
	sub_83740868(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f12,1904(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1904);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f11,f29,f1
	ctx.f11.f64 = double(float(ctx.f29.f64 / ctx.f1.f64));
	// lfs f28,14604(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14604);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f10,f12,f28
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// fcmpu cr6,f10,f11
	cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x82912b68
	if (!cr6.lt) goto loc_82912B68;
	// stw r17,1964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1964, ctx.r17.u32);
loc_82912B68:
	// lwz r10,2004(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2004);
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// mr r25,r16
	ctx.r25.u64 = ctx.r16.u64;
	// mr r23,r16
	ctx.r23.u64 = ctx.r16.u64;
	// mr r24,r16
	ctx.r24.u64 = ctx.r16.u64;
	// mr r27,r16
	ctx.r27.u64 = ctx.r16.u64;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82912b90
	if (!cr6.eq) goto loc_82912B90;
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// b 0x82912b9c
	goto loc_82912B9C;
loc_82912B90:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82912b9c
	if (!cr6.eq) goto loc_82912B9C;
	// mr r27,r15
	ctx.r27.u64 = ctx.r15.u64;
loc_82912B9C:
	// lwz r11,2008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2008);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82912bb0
	if (!cr6.eq) goto loc_82912BB0;
	// mr r25,r15
	ctx.r25.u64 = ctx.r15.u64;
	// b 0x82912bbc
	goto loc_82912BBC;
loc_82912BB0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82912bbc
	if (!cr6.eq) goto loc_82912BBC;
	// mr r24,r15
	ctx.r24.u64 = ctx.r15.u64;
loc_82912BBC:
	// lwz r11,2016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2016);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82912bcc
	if (!cr6.eq) goto loc_82912BCC;
	// mr r23,r15
	ctx.r23.u64 = ctx.r15.u64;
loc_82912BCC:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82912cc8
	if (!cr6.gt) goto loc_82912CC8;
	// stfs f31,256(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f31,260(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stfs f30,264(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// lwz r4,1836(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// bl 0x837a76b0
	ctx.lr = 0x82912BF4;
	sub_837A76B0(ctx, base);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a5c960
	ctx.lr = 0x82912C04;
	sub_82A5C960(ctx, base);
	// stfs f31,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825eb548
	ctx.lr = 0x82912C10;
	sub_825EB548(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825f89a8
	ctx.lr = 0x82912C1C;
	sub_825F89A8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825f89a8
	ctx.lr = 0x82912C28;
	sub_825F89A8(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x8263eeb0
	ctx.lr = 0x82912C38;
	sub_8263EEB0(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stfs f23,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// lfs f0,-23656(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -23656);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lfs f13,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f22,136(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fneg f1,f12
	ctx.f1.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lvx128 v1,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x837a0d80
	ctx.lr = 0x82912C68;
	sub_837A0D80(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82a3cff8
	ctx.lr = 0x82912C70;
	sub_82A3CFF8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82912cc8
	if (cr6.eq) goto loc_82912CC8;
	// lwz r11,2016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2016);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82912cc8
	if (!cr6.gt) goto loc_82912CC8;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stfs f23,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f22,136(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r10,216(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lfs f0,2028(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2028);
	ctx.f0.f64 = double(temp.f32);
	// li r3,5
	ctx.r3.s64 = 5;
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lvx128 v1,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v2,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x837a0cd0
	ctx.lr = 0x82912CC8;
	sub_837A0CD0(ctx, base);
loc_82912CC8:
	// lwz r11,2008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2008);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82912dcc
	if (!cr6.gt) goto loc_82912DCC;
	// stfs f31,240(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f31,244(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stfs f30,248(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// lwz r4,1836(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// bl 0x837a76b0
	ctx.lr = 0x82912CF4;
	sub_837A76B0(ctx, base);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a5c960
	ctx.lr = 0x82912D04;
	sub_82A5C960(ctx, base);
	// stfs f31,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825eb548
	ctx.lr = 0x82912D10;
	sub_825EB548(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825f89a8
	ctx.lr = 0x82912D1C;
	sub_825F89A8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825f89a8
	ctx.lr = 0x82912D28;
	sub_825F89A8(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x8263eeb0
	ctx.lr = 0x82912D38;
	sub_8263EEB0(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stfs f26,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// lfs f0,-23656(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -23656);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lfs f13,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f25,136(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fneg f1,f12
	ctx.f1.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lvx128 v1,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x837a0d80
	ctx.lr = 0x82912D68;
	sub_837A0D80(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82a3cff8
	ctx.lr = 0x82912D70;
	sub_82A3CFF8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82912dcc
	if (cr6.eq) goto loc_82912DCC;
	// lwz r11,2016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2016);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82912dcc
	if (!cr6.gt) goto loc_82912DCC;
	// lwz r26,212(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lfs f0,2040(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2040);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// li r3,5
	ctx.r3.s64 = 5;
	// stfs f26,128(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f13,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f25,136(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lvx128 v2,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v1,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x837a0cd0
	ctx.lr = 0x82912DC8;
	sub_837A0CD0(ctx, base);
	// b 0x82912dd0
	goto loc_82912DD0;
loc_82912DCC:
	// lwz r26,212(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
loc_82912DD0:
	// clrlwi r11,r14,24
	ctx.r11.u64 = ctx.r14.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82912ec8
	if (!cr6.eq) goto loc_82912EC8;
	// lwz r3,1832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x82912df8
	if (cr6.eq) goto loc_82912DF8;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82912e08
	if (cr6.eq) goto loc_82912E08;
	// lwz r4,1992(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1992);
	// b 0x82912e04
	goto loc_82912E04;
loc_82912DF8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82912e08
	if (cr6.eq) goto loc_82912E08;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82912E04:
	// bl 0x829270f8
	ctx.lr = 0x82912E08;
	sub_829270F8(ctx, base);
loc_82912E08:
	// clrlwi r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	// lwz r3,1832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82912e28
	if (cr6.eq) goto loc_82912E28;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82912e38
	if (cr6.eq) goto loc_82912E38;
	// lwz r4,1996(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1996);
	// b 0x82912e34
	goto loc_82912E34;
loc_82912E28:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82912e38
	if (cr6.eq) goto loc_82912E38;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82912E34:
	// bl 0x83580aa8
	ctx.lr = 0x82912E38;
	sub_83580AA8(ctx, base);
loc_82912E38:
	// lwz r3,1832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82912e4c
	if (cr6.eq) goto loc_82912E4C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x835d31c0
	ctx.lr = 0x82912E4C;
	sub_835D31C0(ctx, base);
loc_82912E4C:
	// lwz r3,1832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82912e60
	if (cr6.eq) goto loc_82912E60;
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// bl 0x837b20f0
	ctx.lr = 0x82912E60;
	sub_837B20F0(ctx, base);
loc_82912E60:
	// lwz r3,1832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82912e74
	if (cr6.eq) goto loc_82912E74;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// bl 0x837b2148
	ctx.lr = 0x82912E74;
	sub_837B2148(ctx, base);
loc_82912E74:
	// lwz r3,1832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82912e88
	if (cr6.eq) goto loc_82912E88;
	// fmr f1,f18
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f18.f64;
	// bl 0x837b1420
	ctx.lr = 0x82912E88;
	sub_837B1420(ctx, base);
loc_82912E88:
	// lwz r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lfs f0,200(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// stfs f23,0(r11)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f19,4(r11)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f22,8(r11)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f26,0(r26)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// stfs f21,4(r26)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r26.u32 + 4, temp.u32);
	// stfs f25,8(r26)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r26.u32 + 8, temp.u32);
	// stfs f0,2044(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2044, temp.u32);
	// stfs f20,2048(r31)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2048, temp.u32);
	// stfs f13,2052(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2052, temp.u32);
	// addi r1,r1,1520
	ctx.r1.s64 = ctx.r1.s64 + 1520;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce794
	ctx.lr = 0x82912EC4;
	__restfpr_16(ctx, base);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82912EC8:
	// lfs f0,2044(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2044);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f13,2048(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2048);
	ctx.f13.f64 = double(temp.f32);
	// addi r21,r31,2044
	ctx.r21.s64 = ctx.r31.s64 + 2044;
	// lfs f11,2052(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2052);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f20,f13
	ctx.f10.f64 = double(float(ctx.f20.f64 - ctx.f13.f64));
	// lfs f27,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f27.f64 = double(temp.f32);
	// mr r26,r16
	ctx.r26.u64 = ctx.r16.u64;
	// lfs f24,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f24.f64 = double(temp.f32);
	// fsubs f12,f27,f0
	ctx.f12.f64 = double(float(ctx.f27.f64 - ctx.f0.f64));
	// fsubs f9,f24,f11
	ctx.f9.f64 = double(float(ctx.f24.f64 - ctx.f11.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x825eb548
	ctx.lr = 0x82912F04;
	sub_825EB548(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825f89a8
	ctx.lr = 0x82912F10;
	sub_825F89A8(ctx, base);
	// lbz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 132);
	// addi r11,r31,128
	ctx.r11.s64 = ctx.r31.s64 + 128;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82912f38
	if (cr6.eq) goto loc_82912F38;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82912f3c
	goto loc_82912F3C;
loc_82912F38:
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
loc_82912F3C:
	// addi r4,r20,1280
	ctx.r4.s64 = ctx.r20.s64 + 1280;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825ca9d8
	ctx.lr = 0x82912F48;
	sub_825CA9D8(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825cb910
	ctx.lr = 0x82912F54;
	sub_825CB910(ctx, base);
	// lfs f0,1868(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1868);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x82912f64
	if (!cr6.lt) goto loc_82912F64;
	// mr r26,r15
	ctx.r26.u64 = ctx.r15.u64;
loc_82912F64:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// lfs f0,64(r19)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82912f80
	if (!cr6.eq) goto loc_82912F80;
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82913050
	if (cr6.eq) goto loc_82913050;
loc_82912F80:
	// cmpwi cr6,r28,8
	cr6.compare<int32_t>(ctx.r28.s32, 8, xer);
	// beq cr6,0x82913050
	if (cr6.eq) goto loc_82913050;
	// cmpwi cr6,r28,9
	cr6.compare<int32_t>(ctx.r28.s32, 9, xer);
	// beq cr6,0x82913050
	if (cr6.eq) goto loc_82913050;
	// lbz r10,1872(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1872);
	// lfs f13,1856(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1856);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82913004
	if (cr6.eq) goto loc_82913004;
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82912fc4
	if (cr6.eq) goto loc_82912FC4;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8291300c
	if (cr6.gt) goto loc_8291300C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82913050
	if (cr6.eq) goto loc_82913050;
	// li r28,13
	ctx.r28.s64 = 13;
	// b 0x82913050
	goto loc_82913050;
loc_82912FC4:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82913050
	if (!cr6.gt) goto loc_82913050;
	// lfs f13,1860(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1860);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82912fe8
	if (cr6.gt) goto loc_82912FE8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82913050
	if (cr6.eq) goto loc_82913050;
	// li r28,13
	ctx.r28.s64 = 13;
	// b 0x82913050
	goto loc_82913050;
loc_82912FE8:
	// lfs f13,1864(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1864);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82913034
	if (cr6.gt) goto loc_82913034;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82913050
	if (cr6.eq) goto loc_82913050;
	// li r28,13
	ctx.r28.s64 = 13;
	// b 0x82913050
	goto loc_82913050;
loc_82913004:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82913050
	if (!cr6.gt) goto loc_82913050;
loc_8291300C:
	// lfs f13,1860(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1860);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82913028
	if (cr6.gt) goto loc_82913028;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82913050
	if (cr6.eq) goto loc_82913050;
	// li r28,13
	ctx.r28.s64 = 13;
	// b 0x82913050
	goto loc_82913050;
loc_82913028:
	// lfs f13,1864(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1864);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82913044
	if (cr6.gt) goto loc_82913044;
loc_82913034:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82913050
	if (cr6.eq) goto loc_82913050;
	// li r28,14
	ctx.r28.s64 = 14;
	// b 0x82913050
	goto loc_82913050;
loc_82913044:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82913050
	if (cr6.eq) goto loc_82913050;
	// li r28,2
	ctx.r28.s64 = 2;
loc_82913050:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82913068
	if (!cr6.eq) goto loc_82913068;
	// clrlwi r10,r24,24
	ctx.r10.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82913138
	if (cr6.eq) goto loc_82913138;
loc_82913068:
	// cmpwi cr6,r29,8
	cr6.compare<int32_t>(ctx.r29.s32, 8, xer);
	// beq cr6,0x82913138
	if (cr6.eq) goto loc_82913138;
	// cmpwi cr6,r29,9
	cr6.compare<int32_t>(ctx.r29.s32, 9, xer);
	// beq cr6,0x82913138
	if (cr6.eq) goto loc_82913138;
	// lbz r10,1872(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1872);
	// lfs f13,1856(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1856);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x829130ec
	if (cr6.eq) goto loc_829130EC;
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x829130ac
	if (cr6.eq) goto loc_829130AC;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x829130f4
	if (cr6.gt) goto loc_829130F4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82913138
	if (cr6.eq) goto loc_82913138;
	// li r29,13
	ctx.r29.s64 = 13;
	// b 0x82913138
	goto loc_82913138;
loc_829130AC:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82913138
	if (!cr6.gt) goto loc_82913138;
	// lfs f13,1860(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1860);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x829130d0
	if (cr6.gt) goto loc_829130D0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82913138
	if (cr6.eq) goto loc_82913138;
	// li r29,13
	ctx.r29.s64 = 13;
	// b 0x82913138
	goto loc_82913138;
loc_829130D0:
	// lfs f13,1864(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1864);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8291311c
	if (cr6.gt) goto loc_8291311C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82913138
	if (cr6.eq) goto loc_82913138;
	// li r29,13
	ctx.r29.s64 = 13;
	// b 0x82913138
	goto loc_82913138;
loc_829130EC:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82913138
	if (!cr6.gt) goto loc_82913138;
loc_829130F4:
	// lfs f13,1860(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1860);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82913110
	if (cr6.gt) goto loc_82913110;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82913138
	if (cr6.eq) goto loc_82913138;
	// li r29,13
	ctx.r29.s64 = 13;
	// b 0x82913138
	goto loc_82913138;
loc_82913110:
	// lfs f13,1864(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1864);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8291312c
	if (cr6.gt) goto loc_8291312C;
loc_8291311C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82913138
	if (cr6.eq) goto loc_82913138;
	// li r29,14
	ctx.r29.s64 = 14;
	// b 0x82913138
	goto loc_82913138;
loc_8291312C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82913138
	if (cr6.eq) goto loc_82913138;
	// li r29,2
	ctx.r29.s64 = 2;
loc_82913138:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82a3cff8
	ctx.lr = 0x82913140;
	sub_82A3CFF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r26,5
	ctx.r26.s64 = 5;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// beq cr6,0x82913174
	if (cr6.eq) goto loc_82913174;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829131c0
	if (cr6.eq) goto loc_829131C0;
	// lbz r11,1959(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1959);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x829131c0
	if (!cr6.eq) goto loc_829131C0;
	// li r22,6
	ctx.r22.s64 = 6;
	// stb r15,1959(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1959, ctx.r15.u8);
	// b 0x829131c4
	goto loc_829131C4;
loc_82913174:
	// stb r16,1959(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1959, ctx.r16.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829131c0
	if (cr6.eq) goto loc_829131C0;
	// lwz r11,1964(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1964);
	// subf r10,r11,r17
	ctx.r10.s64 = ctx.r17.s64 - ctx.r11.s64;
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r9,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r9.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f30,f13
	ctx.f30.f64 = double(float(ctx.f13.f64));
	// bl 0x83740868
	ctx.lr = 0x829131A0;
	sub_83740868(ctx, base);
	// lfs f12,1908(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1908);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f11,f30,f1
	ctx.f11.f64 = double(float(ctx.f30.f64 / ctx.f1.f64));
	// fmuls f10,f12,f28
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// fcmpu cr6,f11,f10
	cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bge cr6,0x829131c0
	if (!cr6.lt) goto loc_829131C0;
	// mr r22,r26
	ctx.r22.u64 = ctx.r26.u64;
	// stw r16,1964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1964, ctx.r16.u32);
	// b 0x829131c4
	goto loc_829131C4;
loc_829131C0:
	// lwz r22,112(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_829131C4:
	// lwz r11,1980(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1980);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82913334
	if (!cr6.eq) goto loc_82913334;
	// cmpwi cr6,r28,15
	cr6.compare<int32_t>(ctx.r28.s32, 15, xer);
	// bne cr6,0x82913334
	if (!cr6.eq) goto loc_82913334;
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1968, ctx.r11.u32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// bl 0x83740868
	ctx.lr = 0x829131F0;
	sub_83740868(ctx, base);
	// lwz r9,2056(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2056);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f12,1876(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1876);
	ctx.f12.f64 = double(temp.f32);
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f11,112(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lfs f6,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// frsp f7,f13
	ctx.f7.f64 = double(float(ctx.f13.f64));
	// fsubs f17,f23,f8
	ctx.f17.f64 = double(float(ctx.f23.f64 - ctx.f8.f64));
	// fsubs f16,f22,f6
	ctx.f16.f64 = double(float(ctx.f22.f64 - ctx.f6.f64));
	// fmuls f5,f9,f12
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fdivs f29,f7,f1
	ctx.f29.f64 = double(float(ctx.f7.f64 / ctx.f1.f64));
	// fmuls f30,f5,f28
	ctx.f30.f64 = double(float(ctx.f5.f64 * ctx.f28.f64));
	// bl 0x83740868
	ctx.lr = 0x82913238;
	sub_83740868(ctx, base);
	// fmuls f4,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f28.f64));
	// lis r8,-32208
	ctx.r8.s64 = -2110783488;
	// fmuls f3,f16,f16
	ctx.f3.f64 = double(float(ctx.f16.f64 * ctx.f16.f64));
	// lfs f0,23304(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 23304);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmadds f1,f17,f17,f3
	ctx.f1.f64 = double(float(ctx.f17.f64 * ctx.f17.f64 + ctx.f3.f64));
	// fmuls f0,f2,f2
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x829132d4
	if (cr6.lt) goto loc_829132D4;
	// fcmpu cr6,f30,f29
	cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// bgt cr6,0x829132d4
	if (cr6.gt) goto loc_829132D4;
	// lwz r11,2056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2056);
	// clrlwi r10,r14,24
	ctx.r10.u64 = ctx.r14.u32 & 0xFF;
	// lwz r27,92(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r23,84(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,2056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2056, ctx.r9.u32);
	// beq cr6,0x829132c8
	if (cr6.eq) goto loc_829132C8;
	// lvlx128 v59,r0,r27
	temp.u32 = ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,1072
	ctx.r11.s64 = ctx.r1.s64 + 1072;
	// addi r10,r1,656
	ctx.r10.s64 = ctx.r1.s64 + 656;
	// vspltw128 v58,v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0xFF));
	// addi r7,r1,1072
	ctx.r7.s64 = ctx.r1.s64 + 1072;
	// addi r6,r1,656
	ctx.r6.s64 = ctx.r1.s64 + 656;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// li r3,1
	ctx.r3.s64 = 1;
	// stvx128 v58,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v57,r0,r23
	temp.u32 = ctx.r23.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v56,v57,0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0xFF));
	// stfs f23,560(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 560, temp.u32);
	// stfs f19,564(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 564, temp.u32);
	// stfs f22,568(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 568, temp.u32);
	// stvx128 v56,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83102db0
	ctx.lr = 0x829132C8;
	sub_83102DB0(ctx, base);
loc_829132C8:
	// mr r24,r15
	ctx.r24.u64 = ctx.r15.u64;
	// mr r28,r15
	ctx.r28.u64 = ctx.r15.u64;
	// b 0x829132e4
	goto loc_829132E4;
loc_829132D4:
	// lbz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r28,15
	ctx.r28.s64 = 15;
	// lwz r23,84(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r27,92(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_829132E4:
	// lwz r11,1880(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1880);
	// lwz r10,2056(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2056);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x8291331c
	if (!cr6.gt) goto loc_8291331C;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfs f0,1876(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1876);
	ctx.f0.f64 = double(temp.f32);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f9,f10,f28
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f28.f64));
	// fcmpu cr6,f9,f29
	cr6.compare(ctx.f9.f64, ctx.f29.f64);
	// bge cr6,0x82913818
	if (!cr6.lt) goto loc_82913818;
loc_8291331C:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r16,1968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1968, ctx.r16.u32);
	// stw r16,2056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2056, ctx.r16.u32);
	// stw r11,1980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1980, ctx.r11.u32);
	// stw r16,2060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2060, ctx.r16.u32);
	// b 0x82913818
	goto loc_82913818;
loc_82913334:
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// beq cr6,0x82913344
	if (cr6.eq) goto loc_82913344;
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(ctx.r11.s32, 14, xer);
	// bne cr6,0x829134f4
	if (!cr6.eq) goto loc_829134F4;
loc_82913344:
	// cmpwi cr6,r28,15
	cr6.compare<int32_t>(ctx.r28.s32, 15, xer);
	// bne cr6,0x829134f4
	if (!cr6.eq) goto loc_829134F4;
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1968, ctx.r11.u32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// bl 0x83740868
	ctx.lr = 0x82913364;
	sub_83740868(ctx, base);
	// lwz r11,2056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2056);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fdivs f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f1.f64));
	// fmuls f7,f8,f28
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f28.f64));
	// fcmpu cr6,f7,f11
	cr6.compare(ctx.f7.f64, ctx.f11.f64);
	// bgt cr6,0x829134ac
	if (cr6.gt) goto loc_829134AC;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lwz r11,2060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2060);
	// stw r10,2056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2056, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x829133b8
	if (!cr6.eq) goto loc_829133B8;
	// lwz r10,2004(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2004);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt cr6,0x829133c0
	if (cr6.gt) goto loc_829133C0;
loc_829133B8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2060, ctx.r11.u32);
loc_829133C0:
	// lwz r11,1980(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1980);
	// li r28,13
	ctx.r28.s64 = 13;
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(ctx.r11.s32, 14, xer);
	// bne cr6,0x829133d4
	if (!cr6.eq) goto loc_829133D4;
	// li r28,14
	ctx.r28.s64 = 14;
loc_829133D4:
	// lwz r11,2076(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2076);
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// lwz r10,2012(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2012);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x829133f8
	if (!cr6.lt) goto loc_829133F8;
	// lwz r11,2060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2060);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bgt cr6,0x829133f8
	if (cr6.gt) goto loc_829133F8;
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
loc_829133F8:
	// clrlwi r11,r14,24
	ctx.r11.u64 = ctx.r14.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8291348c
	if (cr6.eq) goto loc_8291348C;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8291348c
	if (!cr6.eq) goto loc_8291348C;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lfs f12,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r10,r1,944
	ctx.r10.s64 = ctx.r1.s64 + 944;
	// lfs f0,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// vspltisw128 v55,0
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_set1_epi32(int(0x0)));
	// lfs f13,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// lwz r23,84(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r9,r1,1200
	ctx.r9.s64 = ctx.r1.s64 + 1200;
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r8,r1,688
	ctx.r8.s64 = ctx.r1.s64 + 688;
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// vupkd3d128 v54,v55,0
	vTemp.u32[0] = ctx.v55.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v55.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v55.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v55.u8[2] | 0x3F800000;
	ctx.v54 = vTemp;
	// addi r7,r1,944
	ctx.r7.s64 = ctx.r1.s64 + 944;
	// addi r6,r1,688
	ctx.r6.s64 = ctx.r1.s64 + 688;
	// addi r5,r1,1200
	ctx.r5.s64 = ctx.r1.s64 + 1200;
	// vsldoi128 v53,v55,v54,4
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), 12));
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lvx128 v52,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v52,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v51,r0,r23
	temp.u32 = ctx.r23.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v50,v51,0
	simde_mm_store_si128((simde__m128i*)ctx.v50.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v51.u32), 0xFF));
	// stfs f23,336(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// stfs f19,340(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// stfs f22,344(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// stvx128 v53,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v50,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83102db0
	ctx.lr = 0x82913488;
	sub_83102DB0(ctx, base);
	// b 0x82913490
	goto loc_82913490;
loc_8291348C:
	// lwz r23,84(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82913490:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x829134a4
	if (!cr6.eq) goto loc_829134A4;
	// mr r24,r15
	ctx.r24.u64 = ctx.r15.u64;
	// b 0x829134b8
	goto loc_829134B8;
loc_829134A4:
	// mr r24,r16
	ctx.r24.u64 = ctx.r16.u64;
	// b 0x829134b4
	goto loc_829134B4;
loc_829134AC:
	// lwz r23,84(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_829134B4:
	// li r28,15
	ctx.r28.s64 = 15;
loc_829134B8:
	// lwz r10,1980(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1980);
	// lwz r11,1884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1884);
	// cmpwi cr6,r10,14
	cr6.compare<int32_t>(ctx.r10.s32, 14, xer);
	// bne cr6,0x829134cc
	if (!cr6.eq) goto loc_829134CC;
	// lwz r11,1888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1888);
loc_829134CC:
	// lwz r10,2060(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2060);
	// lwz r27,92(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82913818
	if (cr6.gt) goto loc_82913818;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r16,1968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1968, ctx.r16.u32);
	// stw r16,2056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2056, ctx.r16.u32);
	// stw r11,1980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1980, ctx.r11.u32);
	// stw r16,2060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2060, ctx.r16.u32);
	// b 0x82913818
	goto loc_82913818;
loc_829134F4:
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// beq cr6,0x8291380c
	if (cr6.eq) goto loc_8291380C;
	// stw r16,1968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1968, ctx.r16.u32);
	// cmplwi cr6,r28,14
	cr6.compare<uint32_t>(ctx.r28.u32, 14, xer);
	// stw r28,1980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1980, ctx.r28.u32);
	// lwz r11,120(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 120);
	// lwz r10,116(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 116);
	// lwz r9,124(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 124);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bgt cr6,0x82913808
	if (cr6.gt) goto loc_82913808;
	// lis r12,-32111
	ctx.r12.s64 = -2104426496;
	// rlwinm r0,r28,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,13628
	ctx.r12.s64 = ctx.r12.s64 + 13628;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r28.u32) {
	case 0:
		goto loc_82913590;
	case 1:
		goto loc_82913720;
	case 2:
		goto loc_8291379C;
	case 3:
		goto loc_82913808;
	case 4:
		goto loc_82913808;
	case 5:
		goto loc_82913808;
	case 6:
		goto loc_82913808;
	case 7:
		goto loc_82913808;
	case 8:
		goto loc_82913578;
	case 9:
		goto loc_82913584;
	case 10:
		goto loc_82913808;
	case 11:
		goto loc_82913808;
	case 12:
		goto loc_82913808;
	case 13:
		goto loc_829135FC;
	case 14:
		goto loc_82913678;
	default:
		return;
	}
	// lwz r20,13712(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13712);
	// lwz r20,14112(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 14112);
	// lwz r20,14236(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 14236);
	// lwz r20,14344(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 14344);
	// lwz r20,14344(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 14344);
	// lwz r20,14344(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 14344);
	// lwz r20,14344(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 14344);
	// lwz r20,14344(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 14344);
	// lwz r20,13688(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13688);
	// lwz r20,13700(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13700);
	// lwz r20,14344(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 14344);
	// lwz r20,14344(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 14344);
	// lwz r20,14344(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 14344);
	// lwz r20,13820(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13820);
	// lwz r20,13944(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13944);
loc_82913578:
	// mr r24,r15
	ctx.r24.u64 = ctx.r15.u64;
	// li r28,8
	ctx.r28.s64 = 8;
	// b 0x82913810
	goto loc_82913810;
loc_82913584:
	// mr r24,r15
	ctx.r24.u64 = ctx.r15.u64;
	// li r28,9
	ctx.r28.s64 = 9;
	// b 0x82913810
	goto loc_82913810;
loc_82913590:
	// clrlwi r11,r14,24
	ctx.r11.u64 = ctx.r14.u32 & 0xFF;
	// lwz r27,92(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r23,84(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829135f0
	if (cr6.eq) goto loc_829135F0;
	// lvlx128 v49,r0,r27
	temp.u32 = ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,720
	ctx.r11.s64 = ctx.r1.s64 + 720;
	// addi r10,r1,976
	ctx.r10.s64 = ctx.r1.s64 + 976;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// vspltw128 v48,v49,0
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), 0xFF));
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,720
	ctx.r7.s64 = ctx.r1.s64 + 720;
	// addi r6,r1,976
	ctx.r6.s64 = ctx.r1.s64 + 976;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// li r3,0
	ctx.r3.s64 = 0;
	// stvx128 v48,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v47,r0,r23
	temp.u32 = ctx.r23.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,464(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 464, temp.u32);
	// vspltw128 v46,v47,0
	simde_mm_store_si128((simde__m128i*)ctx.v46.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.u32), 0xFF));
	// stfs f31,468(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 468, temp.u32);
	// stfs f13,472(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 472, temp.u32);
	// stvx128 v46,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83102db0
	ctx.lr = 0x829135F0;
	sub_83102DB0(ctx, base);
loc_829135F0:
	// mr r24,r15
	ctx.r24.u64 = ctx.r15.u64;
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
	// b 0x82913818
	goto loc_82913818;
loc_829135FC:
	// clrlwi r11,r14,24
	ctx.r11.u64 = ctx.r14.u32 & 0xFF;
	// lwz r27,92(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r23,84(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r16,1968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1968, ctx.r16.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r15,2056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2056, ctx.r15.u32);
	// stw r16,2060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2060, ctx.r16.u32);
	// beq cr6,0x8291366c
	if (cr6.eq) goto loc_8291366C;
	// lvlx128 v45,r0,r27
	temp.u32 = ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,752
	ctx.r11.s64 = ctx.r1.s64 + 752;
	// addi r10,r1,1104
	ctx.r10.s64 = ctx.r1.s64 + 1104;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// vspltw128 v44,v45,0
	simde_mm_store_si128((simde__m128i*)ctx.v44.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v45.u32), 0xFF));
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r1,752
	ctx.r7.s64 = ctx.r1.s64 + 752;
	// addi r6,r1,1104
	ctx.r6.s64 = ctx.r1.s64 + 1104;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// li r3,0
	ctx.r3.s64 = 0;
	// stvx128 v44,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v43,r0,r23
	temp.u32 = ctx.r23.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,368(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// vspltw128 v42,v43,0
	simde_mm_store_si128((simde__m128i*)ctx.v42.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v43.u32), 0xFF));
	// stfs f13,372(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// stfs f12,376(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// stvx128 v42,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83102db0
	ctx.lr = 0x8291366C;
	sub_83102DB0(ctx, base);
loc_8291366C:
	// lwz r28,1980(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1980);
	// mr r24,r15
	ctx.r24.u64 = ctx.r15.u64;
	// b 0x82913818
	goto loc_82913818;
loc_82913678:
	// clrlwi r11,r14,24
	ctx.r11.u64 = ctx.r14.u32 & 0xFF;
	// lwz r23,84(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r16,1968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1968, ctx.r16.u32);
	// stw r15,2056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2056, ctx.r15.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r16,2060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2060, ctx.r16.u32);
	// beq cr6,0x82913714
	if (cr6.eq) goto loc_82913714;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lfs f0,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,784
	ctx.r10.s64 = ctx.r1.s64 + 784;
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// vspltisw128 v41,0
	simde_mm_store_si128((simde__m128i*)ctx.v41.u32, simde_mm_set1_epi32(int(0x0)));
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r9,r1,816
	ctx.r9.s64 = ctx.r1.s64 + 816;
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r8,r1,1008
	ctx.r8.s64 = ctx.r1.s64 + 1008;
	// lfs f13,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,784
	ctx.r7.s64 = ctx.r1.s64 + 784;
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// vupkd3d128 v40,v41,0
	vTemp.u32[0] = ctx.v41.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v41.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v41.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v41.u8[2] | 0x3F800000;
	ctx.v40 = vTemp;
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r1,1008
	ctx.r6.s64 = ctx.r1.s64 + 1008;
	// lfs f10,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r1,816
	ctx.r5.s64 = ctx.r1.s64 + 816;
	// lfs f9,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// vsldoi128 v39,v41,v40,4
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 12));
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lvx128 v38,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v38,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v37,r0,r23
	temp.u32 = ctx.r23.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v36,v37,0
	simde_mm_store_si128((simde__m128i*)ctx.v36.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v37.u32), 0xFF));
	// stfs f11,528(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 528, temp.u32);
	// stfs f10,532(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 532, temp.u32);
	// stfs f9,536(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 536, temp.u32);
	// stvx128 v39,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v36,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83102db0
	ctx.lr = 0x82913714;
	sub_83102DB0(ctx, base);
loc_82913714:
	// lwz r28,1980(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1980);
	// mr r24,r15
	ctx.r24.u64 = ctx.r15.u64;
	// b 0x82913814
	goto loc_82913814;
loc_82913720:
	// clrlwi r11,r14,24
	ctx.r11.u64 = ctx.r14.u32 & 0xFF;
	// lwz r27,92(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r23,84(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r16,1968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1968, ctx.r16.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r15,2056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2056, ctx.r15.u32);
	// stw r16,2060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2060, ctx.r16.u32);
	// beq cr6,0x82913790
	if (cr6.eq) goto loc_82913790;
	// lvlx128 v35,r0,r27
	temp.u32 = ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,1168
	ctx.r11.s64 = ctx.r1.s64 + 1168;
	// addi r10,r1,848
	ctx.r10.s64 = ctx.r1.s64 + 848;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// vspltw128 v34,v35,0
	simde_mm_store_si128((simde__m128i*)ctx.v34.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v35.u32), 0xFF));
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r1,1168
	ctx.r7.s64 = ctx.r1.s64 + 1168;
	// addi r6,r1,848
	ctx.r6.s64 = ctx.r1.s64 + 848;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// li r3,1
	ctx.r3.s64 = 1;
	// stvx128 v34,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v33,r0,r23
	temp.u32 = ctx.r23.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,400(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 400, temp.u32);
	// vspltw128 v32,v33,0
	simde_mm_store_si128((simde__m128i*)ctx.v32.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v33.u32), 0xFF));
	// stfs f13,404(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 404, temp.u32);
	// stfs f12,408(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 408, temp.u32);
	// stvx128 v32,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83102db0
	ctx.lr = 0x82913790;
	sub_83102DB0(ctx, base);
loc_82913790:
	// mr r24,r15
	ctx.r24.u64 = ctx.r15.u64;
	// mr r28,r15
	ctx.r28.u64 = ctx.r15.u64;
	// b 0x82913818
	goto loc_82913818;
loc_8291379C:
	// clrlwi r11,r14,24
	ctx.r11.u64 = ctx.r14.u32 & 0xFF;
	// lwz r27,92(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r23,84(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829137fc
	if (cr6.eq) goto loc_829137FC;
	// lvlx128 v63,r0,r27
	temp.u32 = ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,1040
	ctx.r11.s64 = ctx.r1.s64 + 1040;
	// addi r10,r1,880
	ctx.r10.s64 = ctx.r1.s64 + 880;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,1040
	ctx.r7.s64 = ctx.r1.s64 + 1040;
	// addi r6,r1,880
	ctx.r6.s64 = ctx.r1.s64 + 880;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// li r3,2
	ctx.r3.s64 = 2;
	// stvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v61,r0,r23
	temp.u32 = ctx.r23.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v60,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// stfs f0,496(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 496, temp.u32);
	// stfs f31,500(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 500, temp.u32);
	// stfs f13,504(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 504, temp.u32);
	// stvx128 v60,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83102db0
	ctx.lr = 0x829137FC;
	sub_83102DB0(ctx, base);
loc_829137FC:
	// mr r24,r15
	ctx.r24.u64 = ctx.r15.u64;
	// li r28,2
	ctx.r28.s64 = 2;
	// b 0x82913818
	goto loc_82913818;
loc_82913808:
	// li r28,15
	ctx.r28.s64 = 15;
loc_8291380C:
	// lbz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_82913810:
	// lwz r23,84(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82913814:
	// lwz r27,92(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82913818:
	// lwz r11,1984(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1984);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x8291399c
	if (!cr6.eq) goto loc_8291399C;
	// cmpwi cr6,r29,15
	cr6.compare<int32_t>(ctx.r29.s32, 15, xer);
	// bne cr6,0x8291399c
	if (!cr6.eq) goto loc_8291399C;
	// lwz r11,1972(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1972);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1972, ctx.r11.u32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// bl 0x83740868
	ctx.lr = 0x82913844;
	sub_83740868(ctx, base);
	// lwz r9,2064(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2064);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f12,1876(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1876);
	ctx.f12.f64 = double(temp.f32);
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f17,f26,f11
	ctx.f17.f64 = double(float(ctx.f26.f64 - ctx.f11.f64));
	// fsubs f16,f25,f10
	ctx.f16.f64 = double(float(ctx.f25.f64 - ctx.f10.f64));
	// frsp f9,f13
	ctx.f9.f64 = double(float(ctx.f13.f64));
	// fdivs f30,f9,f1
	ctx.f30.f64 = double(float(ctx.f9.f64 / ctx.f1.f64));
	// lfd f8,112(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f29,f5,f28
	ctx.f29.f64 = double(float(ctx.f5.f64 * ctx.f28.f64));
	// bl 0x83740868
	ctx.lr = 0x8291388C;
	sub_83740868(ctx, base);
	// fmuls f4,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f28.f64));
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// fmuls f3,f16,f16
	ctx.f3.f64 = double(float(ctx.f16.f64 * ctx.f16.f64));
	// lfs f0,18044(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 18044);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmadds f1,f17,f17,f3
	ctx.f1.f64 = double(float(ctx.f17.f64 * ctx.f17.f64 + ctx.f3.f64));
	// fmuls f0,f2,f2
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82913944
	if (cr6.lt) goto loc_82913944;
	// fcmpu cr6,f29,f30
	cr6.compare(ctx.f29.f64, ctx.f30.f64);
	// bgt cr6,0x82913944
	if (cr6.gt) goto loc_82913944;
	// lwz r11,2064(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2064);
	// clrlwi r10,r14,24
	ctx.r10.u64 = ctx.r14.u32 & 0xFF;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,2064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2064, ctx.r9.u32);
	// lwz r8,108(r19)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r19.u32 + 108);
	// lwz r7,104(r19)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r19.u32 + 104);
	// lwz r6,112(r19)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r19.u32 + 112);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// beq cr6,0x82913938
	if (cr6.eq) goto loc_82913938;
	// lvlx128 v59,r0,r27
	temp.u32 = ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,1136
	ctx.r11.s64 = ctx.r1.s64 + 1136;
	// addi r10,r1,912
	ctx.r10.s64 = ctx.r1.s64 + 912;
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// vspltw128 v58,v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0xFF));
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r1,1136
	ctx.r7.s64 = ctx.r1.s64 + 1136;
	// addi r6,r1,912
	ctx.r6.s64 = ctx.r1.s64 + 912;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// li r3,1
	ctx.r3.s64 = 1;
	// stvx128 v58,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v57,r0,r23
	temp.u32 = ctx.r23.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,432(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 432, temp.u32);
	// vspltw128 v56,v57,0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0xFF));
	// stfs f13,436(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 436, temp.u32);
	// stfs f12,440(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 440, temp.u32);
	// stvx128 v56,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83102db0
	ctx.lr = 0x82913938;
	sub_83102DB0(ctx, base);
loc_82913938:
	// mr r25,r15
	ctx.r25.u64 = ctx.r15.u64;
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
	// b 0x8291394c
	goto loc_8291394C;
loc_82913944:
	// lbz r25,81(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// li r29,15
	ctx.r29.s64 = 15;
loc_8291394C:
	// lwz r11,1880(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1880);
	// lwz r10,2064(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2064);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82913984
	if (!cr6.gt) goto loc_82913984;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfs f0,1876(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1876);
	ctx.f0.f64 = double(temp.f32);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f9,f10,f28
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f28.f64));
	// fcmpu cr6,f9,f30
	cr6.compare(ctx.f9.f64, ctx.f30.f64);
	// bge cr6,0x82913df4
	if (!cr6.lt) goto loc_82913DF4;
loc_82913984:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r16,1972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1972, ctx.r16.u32);
	// stw r16,2064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2064, ctx.r16.u32);
	// stw r11,1984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1984, ctx.r11.u32);
	// stw r16,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r16.u32);
	// b 0x82913df4
	goto loc_82913DF4;
loc_8291399C:
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// beq cr6,0x829139ac
	if (cr6.eq) goto loc_829139AC;
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(ctx.r11.s32, 14, xer);
	// bne cr6,0x82913b48
	if (!cr6.eq) goto loc_82913B48;
loc_829139AC:
	// cmpwi cr6,r29,15
	cr6.compare<int32_t>(ctx.r29.s32, 15, xer);
	// bne cr6,0x82913b48
	if (!cr6.eq) goto loc_82913B48;
	// lwz r11,1972(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1972);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1972, ctx.r11.u32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// bl 0x83740868
	ctx.lr = 0x829139CC;
	sub_83740868(ctx, base);
	// lwz r11,2064(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2064);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f1.f64));
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f28
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f28.f64));
	// fcmpu cr6,f7,f11
	cr6.compare(ctx.f7.f64, ctx.f11.f64);
	// bgt cr6,0x82913b08
	if (cr6.gt) goto loc_82913B08;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lwz r11,2068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2068);
	// stw r10,2064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2064, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82913a20
	if (!cr6.eq) goto loc_82913A20;
	// lwz r10,2008(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2008);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt cr6,0x82913a28
	if (cr6.gt) goto loc_82913A28;
loc_82913A20:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r11.u32);
loc_82913A28:
	// lwz r11,1984(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1984);
	// li r29,13
	ctx.r29.s64 = 13;
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(ctx.r11.s32, 14, xer);
	// bne cr6,0x82913a3c
	if (!cr6.eq) goto loc_82913A3C;
	// li r29,14
	ctx.r29.s64 = 14;
loc_82913A3C:
	// lwz r11,2076(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2076);
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// lwz r10,2012(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2012);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82913a60
	if (!cr6.lt) goto loc_82913A60;
	// lwz r11,2068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2068);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bgt cr6,0x82913a60
	if (cr6.gt) goto loc_82913A60;
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
loc_82913A60:
	// clrlwi r11,r14,24
	ctx.r11.u64 = ctx.r14.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82913aec
	if (cr6.eq) goto loc_82913AEC;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82913aec
	if (!cr6.eq) goto loc_82913AEC;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lfs f0,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,608
	ctx.r10.s64 = ctx.r1.s64 + 608;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// vspltisw128 v55,0
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_set1_epi32(int(0x0)));
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r9,r1,672
	ctx.r9.s64 = ctx.r1.s64 + 672;
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r8,r1,640
	ctx.r8.s64 = ctx.r1.s64 + 640;
	// lfs f12,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r1,608
	ctx.r7.s64 = ctx.r1.s64 + 608;
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// vupkd3d128 v54,v55,0
	vTemp.u32[0] = ctx.v55.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v55.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v55.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v55.u8[2] | 0x3F800000;
	ctx.v54 = vTemp;
	// addi r6,r1,640
	ctx.r6.s64 = ctx.r1.s64 + 640;
	// addi r5,r1,672
	ctx.r5.s64 = ctx.r1.s64 + 672;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// vsldoi128 v53,v55,v54,4
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), 12));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lvx128 v52,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v52,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v51,r0,r23
	temp.u32 = ctx.r23.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v50,v51,0
	simde_mm_store_si128((simde__m128i*)ctx.v50.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v51.u32), 0xFF));
	// stfs f26,288(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// stfs f21,292(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// stfs f25,296(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stvx128 v53,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v50,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83102db0
	ctx.lr = 0x82913AEC;
	sub_83102DB0(ctx, base);
loc_82913AEC:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82913b00
	if (!cr6.eq) goto loc_82913B00;
	// mr r25,r15
	ctx.r25.u64 = ctx.r15.u64;
	// b 0x82913b10
	goto loc_82913B10;
loc_82913B00:
	// mr r25,r16
	ctx.r25.u64 = ctx.r16.u64;
	// b 0x82913b0c
	goto loc_82913B0C;
loc_82913B08:
	// lbz r25,81(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
loc_82913B0C:
	// li r29,15
	ctx.r29.s64 = 15;
loc_82913B10:
	// lwz r10,1984(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1984);
	// lwz r11,1884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1884);
	// cmpwi cr6,r10,14
	cr6.compare<int32_t>(ctx.r10.s32, 14, xer);
	// bne cr6,0x82913b24
	if (!cr6.eq) goto loc_82913B24;
	// lwz r11,1888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1888);
loc_82913B24:
	// lwz r10,2068(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2068);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82913df4
	if (cr6.gt) goto loc_82913DF4;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r16,1972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1972, ctx.r16.u32);
	// stw r16,2064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2064, ctx.r16.u32);
	// stw r11,1984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1984, ctx.r11.u32);
	// stw r16,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r16.u32);
	// b 0x82913df4
	goto loc_82913DF4;
loc_82913B48:
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// beq cr6,0x82913df0
	if (cr6.eq) goto loc_82913DF0;
	// stw r29,1984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1984, ctx.r29.u32);
	// cmplwi cr6,r29,14
	cr6.compare<uint32_t>(ctx.r29.u32, 14, xer);
	// stw r16,1972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1972, ctx.r16.u32);
	// bgt cr6,0x82913dec
	if (cr6.gt) goto loc_82913DEC;
	// lis r12,-32111
	ctx.r12.s64 = -2104426496;
	// rlwinm r0,r29,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,15224
	ctx.r12.s64 = ctx.r12.s64 + 15224;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r29.u32) {
	case 0:
		goto loc_82913BCC;
	case 1:
		goto loc_82913D28;
	case 2:
		goto loc_82913D90;
	case 3:
		goto loc_82913DEC;
	case 4:
		goto loc_82913DEC;
	case 5:
		goto loc_82913DEC;
	case 6:
		goto loc_82913DEC;
	case 7:
		goto loc_82913DEC;
	case 8:
		goto loc_82913BB4;
	case 9:
		goto loc_82913BC0;
	case 10:
		goto loc_82913DEC;
	case 11:
		goto loc_82913DEC;
	case 12:
		goto loc_82913DEC;
	case 13:
		goto loc_82913C28;
	case 14:
		goto loc_82913C90;
	default:
		return;
	}
	// lwz r20,15308(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 15308);
	// lwz r20,15656(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 15656);
	// lwz r20,15760(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 15760);
	// lwz r20,15852(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 15852);
	// lwz r20,15852(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 15852);
	// lwz r20,15852(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 15852);
	// lwz r20,15852(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 15852);
	// lwz r20,15852(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 15852);
	// lwz r20,15284(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 15284);
	// lwz r20,15296(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 15296);
	// lwz r20,15852(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 15852);
	// lwz r20,15852(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 15852);
	// lwz r20,15852(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 15852);
	// lwz r20,15400(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 15400);
	// lwz r20,15504(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 15504);
loc_82913BB4:
	// mr r25,r15
	ctx.r25.u64 = ctx.r15.u64;
	// li r29,8
	ctx.r29.s64 = 8;
	// b 0x82913df4
	goto loc_82913DF4;
loc_82913BC0:
	// mr r25,r15
	ctx.r25.u64 = ctx.r15.u64;
	// li r29,9
	ctx.r29.s64 = 9;
	// b 0x82913df4
	goto loc_82913DF4;
loc_82913BCC:
	// clrlwi r11,r14,24
	ctx.r11.u64 = ctx.r14.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82913c1c
	if (cr6.eq) goto loc_82913C1C;
	// lvlx128 v49,r0,r27
	temp.u32 = ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,704
	ctx.r11.s64 = ctx.r1.s64 + 704;
	// addi r10,r1,736
	ctx.r10.s64 = ctx.r1.s64 + 736;
	// vspltw128 v48,v49,0
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), 0xFF));
	// addi r7,r1,704
	ctx.r7.s64 = ctx.r1.s64 + 704;
	// addi r6,r1,736
	ctx.r6.s64 = ctx.r1.s64 + 736;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// li r3,0
	ctx.r3.s64 = 0;
	// stvx128 v48,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v47,r0,r23
	temp.u32 = ctx.r23.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f26,320(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// vspltw128 v46,v47,0
	simde_mm_store_si128((simde__m128i*)ctx.v46.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.u32), 0xFF));
	// stfs f31,324(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// stfs f25,328(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// stvx128 v46,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83102db0
	ctx.lr = 0x82913C1C;
	sub_83102DB0(ctx, base);
loc_82913C1C:
	// mr r25,r15
	ctx.r25.u64 = ctx.r15.u64;
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
	// b 0x82913df4
	goto loc_82913DF4;
loc_82913C28:
	// clrlwi r11,r14,24
	ctx.r11.u64 = ctx.r14.u32 & 0xFF;
	// stw r16,1972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1972, ctx.r16.u32);
	// stw r15,2064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2064, ctx.r15.u32);
	// stw r16,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r16.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82913c84
	if (cr6.eq) goto loc_82913C84;
	// lvlx128 v45,r0,r27
	temp.u32 = ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,768
	ctx.r11.s64 = ctx.r1.s64 + 768;
	// addi r10,r1,800
	ctx.r10.s64 = ctx.r1.s64 + 800;
	// vspltw128 v44,v45,0
	simde_mm_store_si128((simde__m128i*)ctx.v44.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v45.u32), 0xFF));
	// addi r7,r1,768
	ctx.r7.s64 = ctx.r1.s64 + 768;
	// addi r6,r1,800
	ctx.r6.s64 = ctx.r1.s64 + 800;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// li r3,0
	ctx.r3.s64 = 0;
	// stvx128 v44,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v43,r0,r23
	temp.u32 = ctx.r23.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f26,352(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// vspltw128 v42,v43,0
	simde_mm_store_si128((simde__m128i*)ctx.v42.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v43.u32), 0xFF));
	// stfs f21,356(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// stfs f25,360(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// stvx128 v42,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83102db0
	ctx.lr = 0x82913C84;
	sub_83102DB0(ctx, base);
loc_82913C84:
	// lwz r29,1984(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1984);
	// mr r25,r15
	ctx.r25.u64 = ctx.r15.u64;
	// b 0x82913df4
	goto loc_82913DF4;
loc_82913C90:
	// clrlwi r11,r14,24
	ctx.r11.u64 = ctx.r14.u32 & 0xFF;
	// stw r16,1972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1972, ctx.r16.u32);
	// stw r15,2064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2064, ctx.r15.u32);
	// stw r16,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r16.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82913d1c
	if (cr6.eq) goto loc_82913D1C;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lfs f0,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,832
	ctx.r10.s64 = ctx.r1.s64 + 832;
	// lfs f12,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f12.f64 = double(temp.f32);
	// vspltisw128 v41,0
	simde_mm_store_si128((simde__m128i*)ctx.v41.u32, simde_mm_set1_epi32(int(0x0)));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r9,r1,896
	ctx.r9.s64 = ctx.r1.s64 + 896;
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r8,r1,864
	ctx.r8.s64 = ctx.r1.s64 + 864;
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r7,r1,832
	ctx.r7.s64 = ctx.r1.s64 + 832;
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// vupkd3d128 v40,v41,0
	vTemp.u32[0] = ctx.v41.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v41.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v41.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v41.u8[2] | 0x3F800000;
	ctx.v40 = vTemp;
	// addi r6,r1,864
	ctx.r6.s64 = ctx.r1.s64 + 864;
	// addi r5,r1,896
	ctx.r5.s64 = ctx.r1.s64 + 896;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// vsldoi128 v39,v41,v40,4
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 12));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lvx128 v38,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v38,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v37,r0,r23
	temp.u32 = ctx.r23.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f26,384(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// vspltw128 v36,v37,0
	simde_mm_store_si128((simde__m128i*)ctx.v36.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v37.u32), 0xFF));
	// stfs f21,388(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 388, temp.u32);
	// stfs f25,392(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 392, temp.u32);
	// stvx128 v39,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v36,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83102db0
	ctx.lr = 0x82913D1C;
	sub_83102DB0(ctx, base);
loc_82913D1C:
	// lwz r29,1984(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1984);
	// mr r25,r15
	ctx.r25.u64 = ctx.r15.u64;
	// b 0x82913df4
	goto loc_82913DF4;
loc_82913D28:
	// clrlwi r11,r14,24
	ctx.r11.u64 = ctx.r14.u32 & 0xFF;
	// stw r16,1972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1972, ctx.r16.u32);
	// stw r15,2064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2064, ctx.r15.u32);
	// stw r16,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r16.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82913d84
	if (cr6.eq) goto loc_82913D84;
	// lvlx128 v35,r0,r27
	temp.u32 = ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,928
	ctx.r11.s64 = ctx.r1.s64 + 928;
	// addi r10,r1,960
	ctx.r10.s64 = ctx.r1.s64 + 960;
	// vspltw128 v34,v35,0
	simde_mm_store_si128((simde__m128i*)ctx.v34.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v35.u32), 0xFF));
	// addi r7,r1,928
	ctx.r7.s64 = ctx.r1.s64 + 928;
	// addi r6,r1,960
	ctx.r6.s64 = ctx.r1.s64 + 960;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// li r3,1
	ctx.r3.s64 = 1;
	// stvx128 v34,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v33,r0,r23
	temp.u32 = ctx.r23.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v32,v33,0
	simde_mm_store_si128((simde__m128i*)ctx.v32.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v33.u32), 0xFF));
	// stfs f26,416(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 416, temp.u32);
	// stfs f21,420(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 420, temp.u32);
	// stfs f25,424(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 424, temp.u32);
	// stvx128 v32,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83102db0
	ctx.lr = 0x82913D84;
	sub_83102DB0(ctx, base);
loc_82913D84:
	// mr r25,r15
	ctx.r25.u64 = ctx.r15.u64;
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
	// b 0x82913df4
	goto loc_82913DF4;
loc_82913D90:
	// clrlwi r11,r14,24
	ctx.r11.u64 = ctx.r14.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82913de0
	if (cr6.eq) goto loc_82913DE0;
	// lvlx128 v63,r0,r27
	temp.u32 = ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,992
	ctx.r11.s64 = ctx.r1.s64 + 992;
	// addi r10,r1,1024
	ctx.r10.s64 = ctx.r1.s64 + 1024;
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// addi r7,r1,992
	ctx.r7.s64 = ctx.r1.s64 + 992;
	// addi r6,r1,1024
	ctx.r6.s64 = ctx.r1.s64 + 1024;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// li r3,2
	ctx.r3.s64 = 2;
	// stvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v61,r0,r23
	temp.u32 = ctx.r23.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f26,448(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 448, temp.u32);
	// vspltw128 v60,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// stfs f31,452(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 452, temp.u32);
	// stfs f25,456(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 456, temp.u32);
	// stvx128 v60,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83102db0
	ctx.lr = 0x82913DE0;
	sub_83102DB0(ctx, base);
loc_82913DE0:
	// mr r25,r15
	ctx.r25.u64 = ctx.r15.u64;
	// li r29,2
	ctx.r29.s64 = 2;
	// b 0x82913df4
	goto loc_82913DF4;
loc_82913DEC:
	// li r29,15
	ctx.r29.s64 = 15;
loc_82913DF0:
	// lbz r25,81(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
loc_82913DF4:
	// lwz r11,1988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1988);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x82913f60
	if (!cr6.eq) goto loc_82913F60;
	// cmpwi cr6,r22,15
	cr6.compare<int32_t>(ctx.r22.s32, 15, xer);
	// bne cr6,0x82913f60
	if (!cr6.eq) goto loc_82913F60;
	// lwz r11,1976(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1976);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1976, ctx.r11.u32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// bl 0x83740868
	ctx.lr = 0x82913E20;
	sub_83740868(ctx, base);
	// lwz r8,2072(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2072);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f12,0(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f17,f27,f12
	ctx.f17.f64 = double(float(ctx.f27.f64 - ctx.f12.f64));
	// fsubs f16,f24,f11
	ctx.f16.f64 = double(float(ctx.f24.f64 - ctx.f11.f64));
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfs f0,-10804(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -10804);
	ctx.f0.f64 = double(temp.f32);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// fdivs f30,f10,f1
	ctx.f30.f64 = double(float(ctx.f10.f64 / ctx.f1.f64));
	// lfd f9,112(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f29,f6,f28
	ctx.f29.f64 = double(float(ctx.f6.f64 * ctx.f28.f64));
	// bl 0x83740868
	ctx.lr = 0x82913E68;
	sub_83740868(ctx, base);
	// fmuls f5,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f28.f64));
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// fmuls f4,f16,f16
	ctx.f4.f64 = double(float(ctx.f16.f64 * ctx.f16.f64));
	// lfs f0,2940(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2940);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmadds f2,f17,f17,f4
	ctx.f2.f64 = double(float(ctx.f17.f64 * ctx.f17.f64 + ctx.f4.f64));
	// fmuls f1,f3,f3
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fcmpu cr6,f2,f1
	cr6.compare(ctx.f2.f64, ctx.f1.f64);
	// blt cr6,0x82913f28
	if (cr6.lt) goto loc_82913F28;
	// lwz r11,2016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2016);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82913f28
	if (cr6.eq) goto loc_82913F28;
	// fcmpu cr6,f29,f30
	cr6.compare(ctx.f29.f64, ctx.f30.f64);
	// bgt cr6,0x82913f28
	if (cr6.gt) goto loc_82913F28;
	// lwz r11,2072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2072);
	// clrlwi r10,r14,24
	ctx.r10.u64 = ctx.r14.u32 & 0xFF;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,2072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2072, ctx.r9.u32);
	// lwz r8,92(r19)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r19.u32 + 92);
	// lwz r7,100(r19)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r19.u32 + 100);
	// lwz r6,96(r19)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r19.u32 + 96);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// beq cr6,0x82913f1c
	if (cr6.eq) goto loc_82913F1C;
	// lvlx128 v59,r0,r27
	temp.u32 = ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,1056
	ctx.r11.s64 = ctx.r1.s64 + 1056;
	// addi r10,r1,1088
	ctx.r10.s64 = ctx.r1.s64 + 1088;
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// vspltw128 v58,v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0xFF));
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,1056
	ctx.r7.s64 = ctx.r1.s64 + 1056;
	// addi r6,r1,1088
	ctx.r6.s64 = ctx.r1.s64 + 1088;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// li r3,6
	ctx.r3.s64 = 6;
	// stvx128 v58,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v57,r0,r23
	temp.u32 = ctx.r23.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,480(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 480, temp.u32);
	// vspltw128 v56,v57,0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0xFF));
	// stfs f31,484(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 484, temp.u32);
	// stfs f13,488(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 488, temp.u32);
	// stvx128 v56,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83102db0
	ctx.lr = 0x82913F1C;
	sub_83102DB0(ctx, base);
loc_82913F1C:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// li r22,6
	ctx.r22.s64 = 6;
	// b 0x82913f30
	goto loc_82913F30;
loc_82913F28:
	// lbz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// li r22,15
	ctx.r22.s64 = 15;
loc_82913F30:
	// lwz r10,2072(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2072);
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// bge cr6,0x82913f4c
	if (!cr6.lt) goto loc_82913F4C;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lfs f0,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// ble cr6,0x82913fa0
	if (!cr6.gt) goto loc_82913FA0;
loc_82913F4C:
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r16,1976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1976, ctx.r16.u32);
	// stw r16,2072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2072, ctx.r16.u32);
	// stw r10,1988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1988, ctx.r10.u32);
	// b 0x82913fa0
	goto loc_82913FA0;
loc_82913F60:
	// cmpw cr6,r11,r22
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, xer);
	// beq cr6,0x82913f9c
	if (cr6.eq) goto loc_82913F9C;
	// stw r22,1988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1988, ctx.r22.u32);
	// cmpwi cr6,r22,5
	cr6.compare<int32_t>(ctx.r22.s32, 5, xer);
	// stw r16,1976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1976, ctx.r16.u32);
	// lwz r11,96(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 96);
	// lwz r10,100(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 100);
	// lwz r9,92(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 92);
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// stw r9,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r9.u32);
	// beq cr6,0x82914034
	if (cr6.eq) goto loc_82914034;
	// cmpwi cr6,r22,6
	cr6.compare<int32_t>(ctx.r22.s32, 6, xer);
	// beq cr6,0x82913fc8
	if (cr6.eq) goto loc_82913FC8;
	// li r22,15
	ctx.r22.s64 = 15;
loc_82913F9C:
	// lbz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
loc_82913FA0:
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// mr r27,r16
	ctx.r27.u64 = ctx.r16.u64;
	// cmpwi cr6,r22,6
	cr6.compare<int32_t>(ctx.r22.s32, 6, xer);
	// bne cr6,0x82914098
	if (!cr6.eq) goto loc_82914098;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829140b8
	if (cr6.eq) goto loc_829140B8;
	// stw r15,2000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2000, ctx.r15.u32);
	// b 0x829140b4
	goto loc_829140B4;
loc_82913FC8:
	// clrlwi r11,r14,24
	ctx.r11.u64 = ctx.r14.u32 & 0xFF;
	// stw r16,1976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1976, ctx.r16.u32);
	// stw r15,2072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2072, ctx.r15.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82914028
	if (cr6.eq) goto loc_82914028;
	// lvlx128 v55,r0,r27
	temp.u32 = ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,1120
	ctx.r11.s64 = ctx.r1.s64 + 1120;
	// addi r10,r1,1152
	ctx.r10.s64 = ctx.r1.s64 + 1152;
	// lfs f0,200(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// vspltw128 v54,v55,0
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.u32), 0xFF));
	// lfs f13,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,1120
	ctx.r7.s64 = ctx.r1.s64 + 1120;
	// addi r6,r1,1152
	ctx.r6.s64 = ctx.r1.s64 + 1152;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// li r3,6
	ctx.r3.s64 = 6;
	// stvx128 v54,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v53,r0,r23
	temp.u32 = ctx.r23.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,512(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 512, temp.u32);
	// vspltw128 v52,v53,0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.u32), 0xFF));
	// stfs f31,516(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 516, temp.u32);
	// stfs f13,520(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 520, temp.u32);
	// stvx128 v52,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83102db0
	ctx.lr = 0x82914028;
	sub_83102DB0(ctx, base);
loc_82914028:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// li r22,6
	ctx.r22.s64 = 6;
	// b 0x82913fa0
	goto loc_82913FA0;
loc_82914034:
	// clrlwi r11,r14,24
	ctx.r11.u64 = ctx.r14.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8291408c
	if (cr6.eq) goto loc_8291408C;
	// lvlx128 v51,r0,r27
	temp.u32 = ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,1184
	ctx.r11.s64 = ctx.r1.s64 + 1184;
	// addi r10,r1,1216
	ctx.r10.s64 = ctx.r1.s64 + 1216;
	// lfs f0,200(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// vspltw128 v50,v51,0
	simde_mm_store_si128((simde__m128i*)ctx.v50.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v51.u32), 0xFF));
	// lfs f13,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,1184
	ctx.r7.s64 = ctx.r1.s64 + 1184;
	// addi r6,r1,1216
	ctx.r6.s64 = ctx.r1.s64 + 1216;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// li r3,5
	ctx.r3.s64 = 5;
	// stvx128 v50,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v49,r0,r23
	temp.u32 = ctx.r23.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,544(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 544, temp.u32);
	// vspltw128 v48,v49,0
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), 0xFF));
	// stfs f31,548(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 548, temp.u32);
	// stfs f13,552(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 552, temp.u32);
	// stvx128 v48,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83102db0
	ctx.lr = 0x8291408C;
	sub_83102DB0(ctx, base);
loc_8291408C:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// mr r22,r26
	ctx.r22.u64 = ctx.r26.u64;
	// b 0x82913fa0
	goto loc_82913FA0;
loc_82914098:
	// cmpwi cr6,r22,5
	cr6.compare<int32_t>(ctx.r22.s32, 5, xer);
	// bne cr6,0x829140b8
	if (!cr6.eq) goto loc_829140B8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829140b8
	if (cr6.eq) goto loc_829140B8;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,2000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2000, ctx.r11.u32);
loc_829140B4:
	// mr r27,r15
	ctx.r27.u64 = ctx.r15.u64;
loc_829140B8:
	// li r9,3
	ctx.r9.s64 = 3;
	// li r8,4
	ctx.r8.s64 = 4;
	// cmpwi cr6,r28,8
	cr6.compare<int32_t>(ctx.r28.s32, 8, xer);
	// bne cr6,0x829140e0
	if (!cr6.eq) goto loc_829140E0;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829141a4
	if (cr6.eq) goto loc_829141A4;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,1996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1996, ctx.r11.u32);
	// b 0x829141a0
	goto loc_829141A0;
loc_829140E0:
	// cmpwi cr6,r28,9
	cr6.compare<int32_t>(ctx.r28.s32, 9, xer);
	// bne cr6,0x82914100
	if (!cr6.eq) goto loc_82914100;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829141a4
	if (cr6.eq) goto loc_829141A4;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,1996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1996, ctx.r11.u32);
	// b 0x829141a0
	goto loc_829141A0;
loc_82914100:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x8291411c
	if (!cr6.eq) goto loc_8291411C;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829141a4
	if (cr6.eq) goto loc_829141A4;
	// stw r15,1996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1996, ctx.r15.u32);
	// b 0x829141a0
	goto loc_829141A0;
loc_8291411C:
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, xer);
	// bne cr6,0x82914138
	if (!cr6.eq) goto loc_82914138;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829141a4
	if (cr6.eq) goto loc_829141A4;
	// stw r9,1996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1996, ctx.r9.u32);
	// b 0x829141a0
	goto loc_829141A0;
loc_82914138:
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// bne cr6,0x82914154
	if (!cr6.eq) goto loc_82914154;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829141a4
	if (cr6.eq) goto loc_829141A4;
	// stw r26,1996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1996, ctx.r26.u32);
	// b 0x829141a0
	goto loc_829141A0;
loc_82914154:
	// cmpwi cr6,r28,13
	cr6.compare<int32_t>(ctx.r28.s32, 13, xer);
	// bne cr6,0x82914188
	if (!cr6.eq) goto loc_82914188;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829141a4
	if (cr6.eq) goto loc_829141A4;
	// lwz r11,2056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2056);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r7,r11
	ctx.r7.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// xori r11,r6,1
	ctx.r11.u64 = ctx.r6.u64 ^ 1;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,1996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1996, ctx.r5.u32);
	// b 0x829141a0
	goto loc_829141A0;
loc_82914188:
	// cmpwi cr6,r28,14
	cr6.compare<int32_t>(ctx.r28.s32, 14, xer);
	// bne cr6,0x829141a4
	if (!cr6.eq) goto loc_829141A4;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829141a4
	if (cr6.eq) goto loc_829141A4;
	// stw r8,1996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1996, ctx.r8.u32);
loc_829141A0:
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
loc_829141A4:
	// cmpwi cr6,r29,8
	cr6.compare<int32_t>(ctx.r29.s32, 8, xer);
	// bne cr6,0x829141c4
	if (!cr6.eq) goto loc_829141C4;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82914288
	if (cr6.eq) goto loc_82914288;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,1992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1992, ctx.r11.u32);
	// b 0x82914284
	goto loc_82914284;
loc_829141C4:
	// cmpwi cr6,r29,9
	cr6.compare<int32_t>(ctx.r29.s32, 9, xer);
	// bne cr6,0x829141e4
	if (!cr6.eq) goto loc_829141E4;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82914288
	if (cr6.eq) goto loc_82914288;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,1992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1992, ctx.r11.u32);
	// b 0x82914284
	goto loc_82914284;
loc_829141E4:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x82914200
	if (!cr6.eq) goto loc_82914200;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82914288
	if (cr6.eq) goto loc_82914288;
	// stw r15,1992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1992, ctx.r15.u32);
	// b 0x82914284
	goto loc_82914284;
loc_82914200:
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// bne cr6,0x8291421c
	if (!cr6.eq) goto loc_8291421C;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82914288
	if (cr6.eq) goto loc_82914288;
	// stw r9,1992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1992, ctx.r9.u32);
	// b 0x82914284
	goto loc_82914284;
loc_8291421C:
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// bne cr6,0x82914238
	if (!cr6.eq) goto loc_82914238;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82914288
	if (cr6.eq) goto loc_82914288;
	// stw r26,1992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1992, ctx.r26.u32);
	// b 0x82914284
	goto loc_82914284;
loc_82914238:
	// cmpwi cr6,r29,13
	cr6.compare<int32_t>(ctx.r29.s32, 13, xer);
	// bne cr6,0x8291426c
	if (!cr6.eq) goto loc_8291426C;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82914288
	if (cr6.eq) goto loc_82914288;
	// lwz r11,2064(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2064);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,1992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1992, ctx.r7.u32);
	// b 0x82914284
	goto loc_82914284;
loc_8291426C:
	// cmpwi cr6,r29,14
	cr6.compare<int32_t>(ctx.r29.s32, 14, xer);
	// bne cr6,0x82914288
	if (!cr6.eq) goto loc_82914288;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82914288
	if (cr6.eq) goto loc_82914288;
	// stw r8,1992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1992, ctx.r8.u32);
loc_82914284:
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
loc_82914288:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// lwz r3,1832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829142a8
	if (cr6.eq) goto loc_829142A8;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x829142b8
	if (cr6.eq) goto loc_829142B8;
	// lwz r4,1992(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1992);
	// b 0x829142b4
	goto loc_829142B4;
loc_829142A8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x829142b8
	if (cr6.eq) goto loc_829142B8;
	// li r4,0
	ctx.r4.s64 = 0;
loc_829142B4:
	// bl 0x829270f8
	ctx.lr = 0x829142B8;
	sub_829270F8(ctx, base);
loc_829142B8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// lwz r3,1832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829142d8
	if (cr6.eq) goto loc_829142D8;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x829142e8
	if (cr6.eq) goto loc_829142E8;
	// lwz r4,1996(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1996);
	// b 0x829142e4
	goto loc_829142E4;
loc_829142D8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x829142e8
	if (cr6.eq) goto loc_829142E8;
	// li r4,0
	ctx.r4.s64 = 0;
loc_829142E4:
	// bl 0x83580aa8
	ctx.lr = 0x829142E8;
	sub_83580AA8(ctx, base);
loc_829142E8:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// lwz r3,1832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82914308
	if (cr6.eq) goto loc_82914308;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82914318
	if (cr6.eq) goto loc_82914318;
	// lwz r4,2000(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2000);
	// b 0x82914314
	goto loc_82914314;
loc_82914308:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82914318
	if (cr6.eq) goto loc_82914318;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82914314:
	// bl 0x835d31c0
	ctx.lr = 0x82914318;
	sub_835D31C0(ctx, base);
loc_82914318:
	// lwz r3,1832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8291432c
	if (cr6.eq) goto loc_8291432C;
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// bl 0x837b20f0
	ctx.lr = 0x8291432C;
	sub_837B20F0(ctx, base);
loc_8291432C:
	// lwz r3,1832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82914340
	if (cr6.eq) goto loc_82914340;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// bl 0x837b2148
	ctx.lr = 0x82914340;
	sub_837B2148(ctx, base);
loc_82914340:
	// lwz r3,1832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82914354
	if (cr6.eq) goto loc_82914354;
	// fmr f1,f18
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f18.f64;
	// bl 0x837b1420
	ctx.lr = 0x82914354;
	sub_837B1420(ctx, base);
loc_82914354:
	// lwz r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// stfs f23,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f19,4(r11)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f22,8(r11)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stfs f26,0(r11)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f21,4(r11)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f25,8(r11)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f27,0(r21)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r21.u32 + 0, temp.u32);
	// stfs f20,4(r21)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r21.u32 + 4, temp.u32);
	// stfs f24,8(r21)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r21.u32 + 8, temp.u32);
loc_82914380:
	// addi r1,r1,1520
	ctx.r1.s64 = ctx.r1.s64 + 1520;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce794
	ctx.lr = 0x8291438C;
	__restfpr_16(ctx, base);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82914390"))) PPC_WEAK_FUNC(sub_82914390);
PPC_FUNC_IMPL(__imp__sub_82914390) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82914398;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x831ce770
	ctx.lr = 0x829143A0;
	__savefpr_26(ctx, base);
	// li r12,-144
	ctx.r12.s64 = -144;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,1832(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1832);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x829143c4
	if (cr6.eq) goto loc_829143C4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x835d31c8
	ctx.lr = 0x829143C4;
	sub_835D31C8(ctx, base);
loc_829143C4:
	// lwz r11,1840(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1840);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829149d0
	if (cr6.eq) goto loc_829149D0;
	// lwz r11,1836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829149d0
	if (cr6.eq) goto loc_829149D0;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r29,292(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// lwz r27,312(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// bl 0x82a0c760
	ctx.lr = 0x829143F4;
	sub_82A0C760(ctx, base);
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c788
	ctx.lr = 0x82914408;
	sub_82A0C788(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x829149d0
	if (cr6.eq) goto loc_829149D0;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x829149d0
	if (cr6.eq) goto loc_829149D0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x829149d0
	if (cr6.eq) goto loc_829149D0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x829149d0
	if (cr6.eq) goto loc_829149D0;
	// lbz r11,4503(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4503);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x829149d0
	if (!cr6.eq) goto loc_829149D0;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r30,472(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// lwz r29,432(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82914470
	if (cr6.eq) goto loc_82914470;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a47d40
	ctx.lr = 0x82914450;
	sub_82A47D40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82914470
	if (cr6.eq) goto loc_82914470;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83930ac8
	ctx.lr = 0x82914464;
	sub_83930AC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x829149d0
	if (!cr6.eq) goto loc_829149D0;
loc_82914470:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x829144a0
	if (cr6.eq) goto loc_829144A0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da1d10
	ctx.lr = 0x82914480;
	sub_82DA1D10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829144a0
	if (cr6.eq) goto loc_829144A0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a18500
	ctx.lr = 0x82914494;
	sub_82A18500(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x829149d0
	if (!cr6.eq) goto loc_829149D0;
loc_829144A0:
	// lwz r10,160(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 160);
	// lfs f0,2136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,152(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 152);
	// lfs f13,2140(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2140);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,156(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 156);
	// lfs f12,2144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2144);
	ctx.f12.f64 = double(temp.f32);
	// addi r24,r31,2136
	ctx.r24.s64 = ctx.r31.s64 + 2136;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lfs f27,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f27.f64 = double(temp.f32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f29,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f29.f64 = double(temp.f32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f28,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f28.f64 = double(temp.f32);
	// fsubs f10,f28,f13
	ctx.f10.f64 = double(float(ctx.f28.f64 - ctx.f13.f64));
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fsubs f11,f29,f0
	ctx.f11.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsubs f9,f27,f12
	ctx.f9.f64 = double(float(ctx.f27.f64 - ctx.f12.f64));
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x83740868
	ctx.lr = 0x829144F0;
	sub_83740868(ctx, base);
	// lfs f8,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f0,f8,f1
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// lfs f7,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f13,f7,f1
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// lfs f6,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f12,f6,f1
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r26,r11,-26260
	ctx.r26.s64 = ctx.r11.s64 + -26260;
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f11,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f5,f0,f0
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f4,f13,f13,f5
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fmadds f3,f12,f12,f4
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fsqrts f2,f3
	ctx.f2.f64 = double(float(sqrt(ctx.f3.f64)));
	// fcmpu cr6,f2,f11
	cr6.compare(ctx.f2.f64, ctx.f11.f64);
	// ble cr6,0x82914540
	if (!cr6.gt) goto loc_82914540;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825eb548
	ctx.lr = 0x82914540;
	sub_825EB548(ctx, base);
loc_82914540:
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// bl 0x82a16f08
	ctx.lr = 0x82914554;
	sub_82A16F08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82914568
	if (cr6.eq) goto loc_82914568;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82914568:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829149b0
	if (cr6.eq) goto loc_829149B0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f31,64(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	ctx.f31.f64 = double(temp.f32);
	// li r5,10
	ctx.r5.s64 = 10;
	// lwz r4,1836(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837a76b0
	ctx.lr = 0x8291458C;
	sub_837A76B0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// vspltisw128 v63,-1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f13,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f12,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f11.f64 = double(temp.f32);
	// vspltisw128 v127,0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u32, simde_mm_set1_epi32(int(0x0)));
	// vslw128 v62,v63,v63
	ctx.v62.u32[0] = ctx.v63.u32[0] << (ctx.v63.u8[0] & 0x1F);
	ctx.v62.u32[1] = ctx.v63.u32[1] << (ctx.v63.u8[4] & 0x1F);
	ctx.v62.u32[2] = ctx.v63.u32[2] << (ctx.v63.u8[8] & 0x1F);
	ctx.v62.u32[3] = ctx.v63.u32[3] << (ctx.v63.u8[12] & 0x1F);
	// lfs f30,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// lfs f0,-8376(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8376);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vor128 v61,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lvx128 v60,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// vrlimi128 v61,v60,14,0
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 228), 14));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor128 v56,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// vrlimi128 v56,v63,1,0
	simde_mm_store_ps(ctx.v56.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 228), 1));
	// vpermwi128 v59,v61,177
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x4E));
	// vpermwi128 v58,v61,78
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xB1));
	// stfs f29,128(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// vpermwi128 v57,v61,228
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x1B));
	// stfs f28,132(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// vpermwi128 v55,v63,177
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x4E));
	// stfs f27,136(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// vxor128 v51,v56,v62
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// vpermwi128 v54,v63,78
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xB1));
	// vpermwi128 v52,v63,228
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x1B));
	// lvx128 v53,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v50,v51,v51
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_load_si128((simde__m128i*)ctx.v51.u8));
	// vor128 v49,v51,v51
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_load_si128((simde__m128i*)ctx.v51.u8));
	// vor128 v48,v51,v51
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_load_si128((simde__m128i*)ctx.v51.u8));
	// vrlimi128 v51,v56,11,0
	simde_mm_store_ps(ctx.v51.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v56.f32), 228), 11));
	// vrlimi128 v50,v56,1,0
	simde_mm_store_ps(ctx.v50.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v56.f32), 228), 1));
	// vrlimi128 v49,v56,13,0
	simde_mm_store_ps(ctx.v49.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v56.f32), 228), 13));
	// vrlimi128 v48,v56,7,0
	simde_mm_store_ps(ctx.v48.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v56.f32), 228), 7));
	// vmsum4fp128 v44,v51,v57
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v44.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v57.f32), 0xFF));
	// vmsum4fp128 v47,v50,v61
	simde_mm_store_ps(ctx.v47.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_load_ps(ctx.v61.f32), 0xFF));
	// vmsum4fp128 v46,v49,v59
	simde_mm_store_ps(ctx.v46.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_load_ps(ctx.v59.f32), 0xFF));
	// vmsum4fp128 v45,v48,v58
	simde_mm_store_ps(ctx.v45.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_load_ps(ctx.v58.f32), 0xFF));
	// vmrghw128 v43,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v43.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.u32), simde_mm_load_si128((simde__m128i*)ctx.v46.u32)));
	// vmrghw128 v42,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v42.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v45.u32), simde_mm_load_si128((simde__m128i*)ctx.v44.u32)));
	// vmrghw128 v41,v42,v43
	simde_mm_store_si128((simde__m128i*)ctx.v41.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v43.u32), simde_mm_load_si128((simde__m128i*)ctx.v42.u32)));
	// vxor128 v40,v41,v62
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// vor128 v39,v40,v40
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_load_si128((simde__m128i*)ctx.v40.u8));
	// vor128 v38,v40,v40
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_load_si128((simde__m128i*)ctx.v40.u8));
	// vor128 v37,v40,v40
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_load_si128((simde__m128i*)ctx.v40.u8));
	// vrlimi128 v40,v41,11,0
	simde_mm_store_ps(ctx.v40.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v40.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v41.f32), 228), 11));
	// vrlimi128 v39,v41,1,0
	simde_mm_store_ps(ctx.v39.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v39.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v41.f32), 228), 1));
	// vrlimi128 v38,v41,13,0
	simde_mm_store_ps(ctx.v38.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v41.f32), 228), 13));
	// vrlimi128 v37,v41,7,0
	simde_mm_store_ps(ctx.v37.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v37.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v41.f32), 228), 7));
	// vmsum4fp128 v33,v40,v52
	simde_mm_store_ps(ctx.v33.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v40.f32), simde_mm_load_ps(ctx.v52.f32), 0xFF));
	// vmsum4fp128 v36,v39,v63
	simde_mm_store_ps(ctx.v36.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v39.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// vmsum4fp128 v35,v38,v55
	simde_mm_store_ps(ctx.v35.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_load_ps(ctx.v55.f32), 0xFF));
	// vmsum4fp128 v34,v37,v54
	simde_mm_store_ps(ctx.v34.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v37.f32), simde_mm_load_ps(ctx.v54.f32), 0xFF));
	// vmrghw128 v32,v35,v36
	simde_mm_store_si128((simde__m128i*)ctx.v32.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v36.u32), simde_mm_load_si128((simde__m128i*)ctx.v35.u32)));
	// vmrghw128 v63,v33,v34
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v34.u32), simde_mm_load_si128((simde__m128i*)ctx.v33.u32)));
	// vmrghw128 v62,v63,v32
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v32.u32), simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vspltw128 v61,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x55));
	// vspltw128 v60,v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xAA));
	// vspltw128 v59,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// stvx128 v61,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f10,128(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// vaddfp128 v58,v53,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v58.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v62.f32)));
	// stvx128 v60,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stfs f10,104(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stvx128 v58,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f9,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f9.f64 = double(temp.f32);
	// stvx128 v59,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f8,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x825eb548
	ctx.lr = 0x829146E8;
	sub_825EB548(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f4,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f3,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// lfs f7,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,-10804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10804);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f6,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f13,f3,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f5,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fadds f11,f2,f7
	ctx.f11.f64 = double(float(ctx.f2.f64 + ctx.f7.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f10,f13,f6
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f9,f12,f5
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f5.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x825eb548
	ctx.lr = 0x82914734;
	sub_825EB548(ctx, base);
	// lwz r11,2108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2108);
	// lwz r9,2116(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2116);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r11,2108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2108, ctx.r11.u32);
	// beq cr6,0x829148a4
	if (cr6.eq) goto loc_829148A4;
	// lwz r10,2112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2112);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x82914898
	if (!cr6.gt) goto loc_82914898;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// bl 0x83740868
	ctx.lr = 0x82914764;
	sub_83740868(ctx, base);
	// lwz r9,2128(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2128);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r11,2112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2112);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lwz r4,2116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2116);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// lfs f13,14604(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 14604);
	ctx.f13.f64 = double(temp.f32);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f7,f12
	ctx.f7.f64 = double(float(ctx.f12.f64));
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// frsp f0,f9
	ctx.f0.f64 = double(float(ctx.f9.f64));
	// fdivs f11,f7,f1
	ctx.f11.f64 = double(float(ctx.f7.f64 / ctx.f1.f64));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f12,f5,f13
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// bne cr6,0x829147d8
	if (!cr6.eq) goto loc_829147D8;
	// lwz r9,2132(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2132);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f12,f8,f13
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
loc_829147D8:
	// fcmpu cr6,f12,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bgt cr6,0x829149b0
	if (cr6.gt) goto loc_829149B0;
	// lwz r3,1832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,2112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2112, ctx.r11.u32);
	// beq cr6,0x829147f8
	if (cr6.eq) goto loc_829147F8;
	// bl 0x835d31c8
	ctx.lr = 0x829147F8;
	sub_835D31C8(ctx, base);
loc_829147F8:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82914878
	if (cr6.eq) goto loc_82914878;
	// lwz r11,2116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2116);
	// li r3,10
	ctx.r3.s64 = 10;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82914818
	if (!cr6.eq) goto loc_82914818;
	// li r3,11
	ctx.r3.s64 = 11;
loc_82914818:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// vupkd3d128 v57,v127,0
	vTemp.u32[0] = ctx.v127.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v127.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v127.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v127.u8[2] | 0x3F800000;
	ctx.v57 = vTemp;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// vsldoi128 v56,v127,v57,4
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), 12));
	// lvx128 v55,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// stvx128 v55,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lvlx128 v54,r0,r26
	temp.u32 = ctx.r26.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v53,v54,0
	simde_mm_store_si128((simde__m128i*)ctx.v53.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.u32), 0xFF));
	// stvx128 v56,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stvx128 v53,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83102db0
	ctx.lr = 0x82914878;
	sub_83102DB0(ctx, base);
loc_82914878:
	// lwz r10,2116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2116);
	// lwz r11,2120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2120);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x8291488c
	if (!cr6.eq) goto loc_8291488C;
	// lwz r11,2124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2124);
loc_8291488C:
	// lwz r10,2112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2112);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x829149b0
	if (cr6.gt) goto loc_829149B0;
loc_82914898:
	// stw r25,2112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2112, ctx.r25.u32);
	// stw r25,2116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2116, ctx.r25.u32);
	// b 0x829149ac
	goto loc_829149AC;
loc_829148A4:
	// lfs f0,1856(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1856);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x829148c0
	if (cr6.gt) goto loc_829148C0;
	// lfs f31,2148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,10
	ctx.r29.s64 = 10;
	// b 0x829148d8
	goto loc_829148D8;
loc_829148C0:
	// lfs f0,1860(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1860);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x829149b0
	if (cr6.gt) goto loc_829149B0;
	// lfs f31,2152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2152);
	ctx.f31.f64 = double(temp.f32);
	// li r30,2
	ctx.r30.s64 = 2;
	// li r29,11
	ctx.r29.s64 = 11;
loc_829148D8:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,21
	ctx.r4.s64 = 21;
	// addi r3,r31,2080
	ctx.r3.s64 = ctx.r31.s64 + 2080;
	// bl 0x82a5c5b0
	ctx.lr = 0x829148E8;
	sub_82A5C5B0(ctx, base);
	// lwz r10,2108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2108);
	// addi r11,r3,-10
	ctx.r11.s64 = ctx.r3.s64 + -10;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f26,f13
	ctx.f26.f64 = double(float(ctx.f13.f64));
	// bl 0x83740868
	ctx.lr = 0x8291490C;
	sub_83740868(ctx, base);
	// fdivs f12,f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f26.f64 / ctx.f1.f64));
	// fcmpu cr6,f31,f12
	cr6.compare(ctx.f31.f64, ctx.f12.f64);
	// bge cr6,0x829149b0
	if (!cr6.lt) goto loc_829149B0;
	// lwz r3,1832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// stw r30,2116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2116, ctx.r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82914930
	if (cr6.eq) goto loc_82914930;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x835d31c8
	ctx.lr = 0x82914930;
	sub_835D31C8(ctx, base);
loc_82914930:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829149a0
	if (cr6.eq) goto loc_829149A0;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// vupkd3d128 v52,v127,0
	vTemp.u32[0] = ctx.v127.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v127.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v127.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v127.u8[2] | 0x3F800000;
	ctx.v52 = vTemp;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r9,r1,256
	ctx.r9.s64 = ctx.r1.s64 + 256;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// vsldoi128 v51,v127,v52,4
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), 12));
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lvx128 v50,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v50,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v49,r0,r26
	temp.u32 = ctx.r26.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v48,v49,0
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), 0xFF));
	// stvx128 v51,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v48,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83102db0
	ctx.lr = 0x829149A0;
	sub_83102DB0(ctx, base);
loc_829149A0:
	// lwz r11,2112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2112);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2112, ctx.r11.u32);
loc_829149AC:
	// stw r25,2108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2108, ctx.r25.u32);
loc_829149B0:
	// lwz r3,1832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x829149c4
	if (cr6.eq) goto loc_829149C4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x837b21a0
	ctx.lr = 0x829149C4;
	sub_837B21A0(ctx, base);
loc_829149C4:
	// stfs f29,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r24.u32 + 0, temp.u32);
	// stfs f28,4(r24)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r24.u32 + 4, temp.u32);
	// stfs f27,8(r24)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r24.u32 + 8, temp.u32);
loc_829149D0:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// li r0,-144
	ctx.r0.s64 = -144;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x831ce7bc
	ctx.lr = 0x829149E4;
	__restfpr_26(ctx, base);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829149E8"))) PPC_WEAK_FUNC(sub_829149E8);
PPC_FUNC_IMPL(__imp__sub_829149E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829119b8
	ctx.lr = 0x82914A08;
	sub_829119B8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82914a28
	if (cr6.eq) goto loc_82914A28;
	// bl 0x82595188
	ctx.lr = 0x82914A18;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82914A28;
	sub_825952B8(ctx, base);
loc_82914A28:
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

__attribute__((alias("__imp__sub_82914A44"))) PPC_WEAK_FUNC(sub_82914A44);
PPC_FUNC_IMPL(__imp__sub_82914A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82914A48"))) PPC_WEAK_FUNC(sub_82914A48);
PPC_FUNC_IMPL(__imp__sub_82914A48) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stb r5,1828(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1828, ctx.r5.u8);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// bl 0x82911c20
	ctx.lr = 0x82914A74;
	sub_82911C20(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82914a98
	if (!cr6.eq) goto loc_82914A98;
loc_82914A80:
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
loc_82914A98:
	// lwz r3,1836(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82914ae0
	if (!cr6.eq) goto loc_82914AE0;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,6352
	ctx.r4.s64 = 6352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82914ABC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82914ad0
	if (cr6.eq) goto loc_82914AD0;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x827f6bb8
	ctx.lr = 0x82914ACC;
	sub_827F6BB8(ctx, base);
	// b 0x82914ad4
	goto loc_82914AD4;
loc_82914AD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82914AD4:
	// stw r3,1836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1836, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82914a80
	if (cr6.eq) goto loc_82914A80;
loc_82914AE0:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,1408
	ctx.r4.s64 = ctx.r31.s64 + 1408;
	// bl 0x837a6f20
	ctx.lr = 0x82914AEC;
	sub_837A6F20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,1400
	ctx.r4.s64 = ctx.r31.s64 + 1400;
	// lwz r3,1836(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// bl 0x837a6da8
	ctx.lr = 0x82914AFC;
	sub_837A6DA8(ctx, base);
	// lwz r11,1836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// lwz r10,1840(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1840);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,6168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6168, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82914B1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,1836(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// stw r3,6180(r7)
	PPC_STORE_U32(ctx.r7.u32 + 6180, ctx.r3.u32);
	// lwz r4,2156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// lwz r3,1836(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// bl 0x827df1e8
	ctx.lr = 0x82914B30;
	sub_827DF1E8(ctx, base);
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

__attribute__((alias("__imp__sub_82914B48"))) PPC_WEAK_FUNC(sub_82914B48);
PPC_FUNC_IMPL(__imp__sub_82914B48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82914B50;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,1836(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1836);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82914bc8
	if (cr6.eq) goto loc_82914BC8;
	// lbz r11,1824(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1824);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82914bc8
	if (cr6.eq) goto loc_82914BC8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,1669(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1669);
	// addi r30,r3,1588
	ctx.r30.s64 = ctx.r3.s64 + 1588;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// beq cr6,0x82914bbc
	if (cr6.eq) goto loc_82914BBC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82638fc8
	ctx.lr = 0x82914BA0;
	sub_82638FC8(ctx, base);
	// lfs f0,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,64(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lfs f12,68(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_82914BBC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837a7370
	ctx.lr = 0x82914BC8;
	sub_837A7370(ctx, base);
loc_82914BC8:
	// lwz r3,1832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82914bdc
	if (cr6.eq) goto loc_82914BDC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x829270f8
	ctx.lr = 0x82914BDC;
	sub_829270F8(ctx, base);
loc_82914BDC:
	// lwz r3,1832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82914bf0
	if (cr6.eq) goto loc_82914BF0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83580aa8
	ctx.lr = 0x82914BF0;
	sub_83580AA8(ctx, base);
loc_82914BF0:
	// lwz r3,1832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82914c04
	if (cr6.eq) goto loc_82914C04;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x835d31c0
	ctx.lr = 0x82914C04;
	sub_835D31C0(ctx, base);
loc_82914C04:
	// lwz r11,1840(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1840);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82914c38
	if (cr6.eq) goto loc_82914C38;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,312(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82914c38
	if (cr6.eq) goto loc_82914C38;
	// bl 0x82a16ee8
	ctx.lr = 0x82914C28;
	sub_82A16EE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r9,1958(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1958, ctx.r9.u8);
loc_82914C38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829122b8
	ctx.lr = 0x82914C40;
	sub_829122B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82914390
	ctx.lr = 0x82914C48;
	sub_82914390(ctx, base);
	// lwz r11,1836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82914c68
	if (cr6.eq) goto loc_82914C68;
	// lwz r3,1832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82914c68
	if (cr6.eq) goto loc_82914C68;
	// lbz r4,2404(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2404);
	// bl 0x837b1558
	ctx.lr = 0x82914C68;
	sub_837B1558(ctx, base);
loc_82914C68:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82914C70"))) PPC_WEAK_FUNC(sub_82914C70);
PPC_FUNC_IMPL(__imp__sub_82914C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82914C78;
	__savegprlr_14(ctx, base);
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f29.u64);
	// stfd f30,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,1826(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1826);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,812(r1)
	PPC_STORE_U32(ctx.r1.u32 + 812, ctx.r4.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829153a8
	if (cr6.eq) goto loc_829153A8;
	// lwz r11,1832(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1832);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829153a8
	if (cr6.eq) goto loc_829153A8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x829153a8
	if (cr6.eq) goto loc_829153A8;
	// lwz r11,1840(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1840);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829153a8
	if (cr6.eq) goto loc_829153A8;
	// lis r28,-31763
	ctx.r28.s64 = -2081619968;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-3564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// lwz r11,472(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82914ce4
	if (cr6.eq) goto loc_82914CE4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a47d40
	ctx.lr = 0x82914CE4;
	sub_82A47D40(ctx, base);
loc_82914CE4:
	// lwz r11,-3564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// lwz r9,292(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82914d68
	if (cr6.eq) goto loc_82914D68;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82914d50
	if (cr6.lt) goto loc_82914D50;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// bge cr6,0x82914d50
	if (!cr6.lt) goto loc_82914D50;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r8,5768(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5768);
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r10,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82914d50
	if (!cr6.eq) goto loc_82914D50;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r10,5790(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5790);
	// addic r8,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfe r11,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82914d50
	if (!cr6.eq) goto loc_82914D50;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r29,r7,r29
	ctx.r29.u64 = ctx.r7.u64 & ctx.r29.u64;
loc_82914D50:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x82a1aaa8
	ctx.lr = 0x82914D58;
	sub_82A1AAA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82914d68
	if (cr6.eq) goto loc_82914D68;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82914D68:
	// lwz r11,1832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lbz r11,82(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 82);
	// beq cr6,0x82914d8c
	if (cr6.eq) goto loc_82914D8C;
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82914d8c
	if (cr6.eq) goto loc_82914D8C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82914D8C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82914dc8
	if (cr6.eq) goto loc_82914DC8;
	// lwz r3,1832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82914DAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82914dc8
	if (cr6.eq) goto loc_82914DC8;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82914dcc
	if (!cr6.eq) goto loc_82914DCC;
loc_82914DC8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82914DCC:
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// li r25,0
	ctx.r25.s64 = 0;
	// stb r11,226(r1)
	PPC_STORE_U8(ctx.r1.u32 + 226, ctx.r11.u8);
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x82a0c760
	ctx.lr = 0x82914DE8;
	sub_82A0C760(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82914eec
	if (cr6.eq) goto loc_82914EEC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,21504
	ctx.r10.s64 = 1409286144;
	// rlwinm r9,r11,0,0,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bne cr6,0x82914eec
	if (!cr6.eq) goto loc_82914EEC;
	// lhz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 20);
	// lhz r8,22(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 22);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lhz r6,24(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// lhz r7,18(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// beq cr6,0x82914e30
	if (cr6.eq) goto loc_82914E30;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x82914e34
	if (!cr6.eq) goto loc_82914E34;
loc_82914E30:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82914E34:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82914e78
	if (cr6.eq) goto loc_82914E78;
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r9.u64);
	// lfd f0,232(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.f10.u64);
	// lwz r5,236(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// bgt cr6,0x82914e78
	if (cr6.gt) goto loc_82914E78;
	// li r24,1
	ctx.r24.s64 = 1;
loc_82914E78:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82914eec
	if (cr6.eq) goto loc_82914EEC;
	// subf r11,r8,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r8.s64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r10.u64);
	// lfd f0,232(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.f10.u64);
	// lwz r9,236(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bgt cr6,0x82914eb8
	if (cr6.gt) goto loc_82914EB8;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82914EB8:
	// subf r11,r6,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r6.s64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r10.u64);
	// lfd f0,232(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.f10.u64);
	// lwz r9,236(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bgt cr6,0x82914eec
	if (cr6.gt) goto loc_82914EEC;
	// li r26,1
	ctx.r26.s64 = 1;
loc_82914EEC:
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r29,255
	ctx.r29.s64 = 255;
	// lwz r30,292(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// lbz r11,5437(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5437);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82914f50
	if (cr6.eq) goto loc_82914F50;
	// lwz r4,5472(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5472);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82914f34
	if (cr6.lt) goto loc_82914F34;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x82914f34
	if (!cr6.lt) goto loc_82914F34;
	// lwz r11,5476(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5476);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82914f34
	if (cr6.lt) goto loc_82914F34;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82914f38
	if (cr6.lt) goto loc_82914F38;
loc_82914F34:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82914F38:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82914fb4
	if (cr6.eq) goto loc_82914FB4;
	// bl 0x82a0c738
	ctx.lr = 0x82914F48;
	sub_82A0C738(ctx, base);
	// lwz r4,5476(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5476);
	// b 0x82914fac
	goto loc_82914FAC;
loc_82914F50:
	// lwz r11,1840(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1840);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a22a50
	ctx.lr = 0x82914F60;
	sub_82A22A50(ctx, base);
	// lwz r4,296(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82914f90
	if (cr6.lt) goto loc_82914F90;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x82914f90
	if (!cr6.lt) goto loc_82914F90;
	// lwz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82914f90
	if (cr6.lt) goto loc_82914F90;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82914f94
	if (cr6.lt) goto loc_82914F94;
loc_82914F90:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82914F94:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82914fb4
	if (cr6.eq) goto loc_82914FB4;
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x82914FA8;
	sub_82A0C738(ctx, base);
	// lwz r4,300(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
loc_82914FAC:
	// bl 0x82a16440
	ctx.lr = 0x82914FB0;
	sub_82A16440(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82914FB4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// bne cr6,0x82914fc4
	if (!cr6.eq) goto loc_82914FC4;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82914FC4:
	// lwz r29,1832(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// bne cr6,0x82914fd8
	if (!cr6.eq) goto loc_82914FD8;
	// lbz r28,93(r29)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r29.u32 + 93);
	// b 0x82914fdc
	goto loc_82914FDC;
loc_82914FD8:
	// lbz r28,92(r29)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r29.u32 + 92);
loc_82914FDC:
	// lwz r11,1832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r30,r11,86
	ctx.r30.s64 = ctx.r11.s64 + 86;
	// lbz r22,140(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 140);
	// lfs f31,136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f31.f64 = double(temp.f32);
	// lwz r21,112(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r20,108(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r19,104(r11)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r18,100(r11)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r17,96(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lbz r16,84(r11)
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r11.u32 + 84);
	// lbz r15,83(r11)
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r11.u32 + 83);
	// bl 0x831ce980
	ctx.lr = 0x82915018;
	sub_831CE980(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f30,1400(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1400);
	ctx.f30.f64 = double(temp.f32);
	// lwz r29,16(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x837b1418
	ctx.lr = 0x82915028;
	sub_837B1418(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// lwz r3,1832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// bl 0x837b1410
	ctx.lr = 0x82915034;
	sub_837B1410(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,1832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// stw r11,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// bl 0x837b1408
	ctx.lr = 0x82915044;
	sub_837B1408(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r29,244(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r23,812(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 812);
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// addi r9,r1,496
	ctx.r9.s64 = ctx.r1.s64 + 496;
	// addi r7,r31,1564
	ctx.r7.s64 = ctx.r31.s64 + 1564;
	// lbz r8,226(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 226);
	// addi r5,r31,1408
	ctx.r5.s64 = ctx.r31.s64 + 1408;
	// stw r21,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r21.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r20,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r20.u32);
	// stw r19,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r19.u32);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// stw r18,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r18.u32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stw r17,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r17.u32);
	// stb r28,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r28.u8);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stb r16,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r16.u8);
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// stw r14,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r14.u32);
	// stb r22,183(r1)
	PPC_STORE_U8(ctx.r1.u32 + 183, ctx.r22.u8);
	// stb r24,191(r1)
	PPC_STORE_U8(ctx.r1.u32 + 191, ctx.r24.u8);
	// stb r25,199(r1)
	PPC_STORE_U8(ctx.r1.u32 + 199, ctx.r25.u8);
	// stb r26,207(r1)
	PPC_STORE_U8(ctx.r1.u32 + 207, ctx.r26.u8);
	// stb r27,215(r1)
	PPC_STORE_U8(ctx.r1.u32 + 215, ctx.r27.u8);
	// bl 0x82a57268
	ctx.lr = 0x829150B4;
	sub_82A57268(ctx, base);
	// addi r11,r1,324
	ctx.r11.s64 = ctx.r1.s64 + 324;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r30,r11,-6
	ctx.r30.s64 = ctx.r11.s64 + -6;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f31,-24912(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24912);
	ctx.f31.f64 = double(temp.f32);
	// sth r28,480(r1)
	PPC_STORE_U16(ctx.r1.u32 + 480, ctx.r28.u16);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lfs f29,27080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27080);
	ctx.f29.f64 = double(temp.f32);
	// sth r28,482(r1)
	PPC_STORE_U16(ctx.r1.u32 + 482, ctx.r28.u16);
	// lfs f30,23164(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23164);
	ctx.f30.f64 = double(temp.f32);
	// sth r28,484(r1)
	PPC_STORE_U16(ctx.r1.u32 + 484, ctx.r28.u16);
loc_829150E8:
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// lwz r3,1836(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x837a6c08
	ctx.lr = 0x829150F8;
	sub_837A6C08(ctx, base);
	// lfs f0,280(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,284(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f12,f0,f30,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f31.f64));
	// lfs f13,272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f9,f11,f29,f31
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f29.f64 + ctx.f31.f64));
	// lfs f8,276(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f10,f13,f30,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 + ctx.f31.f64));
	// fmadds f7,f8,f30,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f30.f64 + ctx.f31.f64));
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,20
	cr6.compare<int32_t>(ctx.r29.s32, 20, xer);
	// fctiwz f6,f12
	ctx.f6.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f6,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.f6.u64);
	// lhz r11,238(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 238);
	// fctiwz f4,f9
	ctx.f4.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f4,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.f4.u64);
	// lhz r9,238(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 238);
	// fctiwz f5,f10
	ctx.f5.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f5,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.f5.u64);
	// fctiwz f3,f7
	ctx.f3.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f3,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.f3.u64);
	// lhz r10,254(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 254);
	// lhz r8,238(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 238);
	// sth r11,6(r30)
	PPC_STORE_U16(ctx.r30.u32 + 6, ctx.r11.u16);
	// sth r10,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r10.u16);
	// sth r8,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r8.u16);
	// sthu r9,8(r30)
	ea = 8 + ctx.r30.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r30.u32 = ea;
	// blt cr6,0x829150e8
	if (cr6.lt) goto loc_829150E8;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// lwz r3,1836(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// li r4,19
	ctx.r4.s64 = 19;
	// bl 0x837a6b70
	ctx.lr = 0x82915174;
	sub_837A6B70(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f11,292(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// lfs f13,296(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lfs f9,288(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	ctx.f9.f64 = double(temp.f32);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lfs f0,20592(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20592);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fctiwz f6,f10
	ctx.f6.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f6,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.f6.u64);
	// lhz r8,254(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 254);
	// fctiwz f7,f12
	ctx.f7.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f7,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.f7.u64);
	// lhz r10,238(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 238);
	// fctiwz f5,f8
	ctx.f5.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f5,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.f5.u64);
	// sth r10,484(r1)
	PPC_STORE_U16(ctx.r1.u32 + 484, ctx.r10.u16);
	// lhz r9,238(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 238);
	// sth r8,482(r1)
	PPC_STORE_U16(ctx.r1.u32 + 482, ctx.r8.u16);
	// sth r9,480(r1)
	PPC_STORE_U16(ctx.r1.u32 + 480, ctx.r9.u16);
	// bl 0x82a57588
	ctx.lr = 0x829151D4;
	sub_82A57588(ctx, base);
	// lwz r3,2156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82915384
	if (cr6.eq) goto loc_82915384;
	// bl 0x837ad910
	ctx.lr = 0x829151E4;
	sub_837AD910(ctx, base);
	// stfs f1,256(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// lwz r3,2156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// bl 0x837ad8d8
	ctx.lr = 0x829151F0;
	sub_837AD8D8(ctx, base);
	// stfs f1,264(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// lwz r3,2156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// bl 0x833c6fc8
	ctx.lr = 0x829151FC;
	sub_833C6FC8(ctx, base);
	// stfs f1,260(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// lwz r3,2156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// bl 0x837ac708
	ctx.lr = 0x82915208;
	sub_837AC708(ctx, base);
	// stb r3,226(r1)
	PPC_STORE_U8(ctx.r1.u32 + 226, ctx.r3.u8);
	// lwz r3,2156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// bl 0x837ac700
	ctx.lr = 0x82915214;
	sub_837AC700(ctx, base);
	// stb r3,242(r1)
	PPC_STORE_U8(ctx.r1.u32 + 242, ctx.r3.u8);
	// lwz r3,2156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// bl 0x837ac6f8
	ctx.lr = 0x82915220;
	sub_837AC6F8(ctx, base);
	// stb r3,225(r1)
	PPC_STORE_U8(ctx.r1.u32 + 225, ctx.r3.u8);
	// lwz r3,2156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// bl 0x837ac6f0
	ctx.lr = 0x8291522C;
	sub_837AC6F0(ctx, base);
	// stb r3,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r3.u8);
	// lwz r3,2156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// bl 0x837ac6e8
	ctx.lr = 0x82915238;
	sub_837AC6E8(ctx, base);
	// stfs f1,248(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// lwz r3,2156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// bl 0x837ac6e0
	ctx.lr = 0x82915244;
	sub_837AC6E0(ctx, base);
	// stfs f1,232(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// lwz r3,2156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// bl 0x837ac6d8
	ctx.lr = 0x82915250;
	sub_837AC6D8(ctx, base);
	// sth r3,240(r1)
	PPC_STORE_U16(ctx.r1.u32 + 240, ctx.r3.u16);
	// lwz r3,2156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// bl 0x837ac6d0
	ctx.lr = 0x8291525C;
	sub_837AC6D0(ctx, base);
	// addi r11,r1,260
	ctx.r11.s64 = ctx.r1.s64 + 260;
	// addi r10,r1,226
	ctx.r10.s64 = ctx.r1.s64 + 226;
	// sth r3,244(r1)
	PPC_STORE_U16(ctx.r1.u32 + 244, ctx.r3.u16);
	// addi r9,r1,242
	ctx.r9.s64 = ctx.r1.s64 + 242;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r7,r1,264
	ctx.r7.s64 = ctx.r1.s64 + 264;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// addi r10,r1,225
	ctx.r10.s64 = ctx.r1.s64 + 225;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// addi r8,r1,248
	ctx.r8.s64 = ctx.r1.s64 + 248;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r7,r1,232
	ctx.r7.s64 = ctx.r1.s64 + 232;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// addi r5,r1,244
	ctx.r5.s64 = ctx.r1.s64 + 244;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a56e28
	ctx.lr = 0x829152AC;
	sub_82A56E28(ctx, base);
	// lwz r3,2156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// bl 0x837ac738
	ctx.lr = 0x829152B4;
	sub_837AC738(ctx, base);
	// stb r3,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r3.u8);
	// lwz r3,2156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// bl 0x837ac730
	ctx.lr = 0x829152C0;
	sub_837AC730(ctx, base);
	// stb r3,225(r1)
	PPC_STORE_U8(ctx.r1.u32 + 225, ctx.r3.u8);
	// lwz r3,2156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// bl 0x837ac728
	ctx.lr = 0x829152CC;
	sub_837AC728(ctx, base);
	// stfs f1,232(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// lwz r3,2156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// bl 0x837ac720
	ctx.lr = 0x829152D8;
	sub_837AC720(ctx, base);
	// stfs f1,248(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// lwz r3,2156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// bl 0x837ac718
	ctx.lr = 0x829152E4;
	sub_837AC718(ctx, base);
	// sth r3,244(r1)
	PPC_STORE_U16(ctx.r1.u32 + 244, ctx.r3.u16);
	// lwz r3,2156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// bl 0x837ac710
	ctx.lr = 0x829152F0;
	sub_837AC710(ctx, base);
	// sth r3,240(r1)
	PPC_STORE_U16(ctx.r1.u32 + 240, ctx.r3.u16);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r9,r1,225
	ctx.r9.s64 = ctx.r1.s64 + 225;
	// addi r8,r1,232
	ctx.r8.s64 = ctx.r1.s64 + 232;
	// addi r7,r1,248
	ctx.r7.s64 = ctx.r1.s64 + 248;
	// addi r6,r1,244
	ctx.r6.s64 = ctx.r1.s64 + 244;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a57000
	ctx.lr = 0x82915318;
	sub_82A57000(ctx, base);
	// lwz r3,2156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// bl 0x837ac760
	ctx.lr = 0x82915320;
	sub_837AC760(ctx, base);
	// stb r3,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r3.u8);
	// lwz r3,2156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// bl 0x837ac758
	ctx.lr = 0x8291532C;
	sub_837AC758(ctx, base);
	// stb r3,225(r1)
	PPC_STORE_U8(ctx.r1.u32 + 225, ctx.r3.u8);
	// lwz r3,2156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// bl 0x83aaed68
	ctx.lr = 0x82915338;
	sub_83AAED68(ctx, base);
	// stfs f1,232(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// lwz r3,2156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// bl 0x837ac750
	ctx.lr = 0x82915344;
	sub_837AC750(ctx, base);
	// stfs f1,248(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// lwz r3,2156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// bl 0x837ac748
	ctx.lr = 0x82915350;
	sub_837AC748(ctx, base);
	// sth r3,244(r1)
	PPC_STORE_U16(ctx.r1.u32 + 244, ctx.r3.u16);
	// lwz r3,2156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// bl 0x837ac740
	ctx.lr = 0x8291535C;
	sub_837AC740(ctx, base);
	// sth r3,240(r1)
	PPC_STORE_U16(ctx.r1.u32 + 240, ctx.r3.u16);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r9,r1,225
	ctx.r9.s64 = ctx.r1.s64 + 225;
	// addi r8,r1,232
	ctx.r8.s64 = ctx.r1.s64 + 232;
	// addi r7,r1,248
	ctx.r7.s64 = ctx.r1.s64 + 248;
	// addi r6,r1,244
	ctx.r6.s64 = ctx.r1.s64 + 244;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a570a8
	ctx.lr = 0x82915384;
	sub_82A570A8(ctx, base);
loc_82915384:
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// lwz r5,16(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// bl 0x83102db0
	ctx.lr = 0x829153A8;
	sub_83102DB0(ctx, base);
loc_829153A8:
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829153BC"))) PPC_WEAK_FUNC(sub_829153BC);
PPC_FUNC_IMPL(__imp__sub_829153BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829153C0"))) PPC_WEAK_FUNC(sub_829153C0);
PPC_FUNC_IMPL(__imp__sub_829153C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x829153C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1844(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1844);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82915474
	if (!cr6.eq) goto loc_82915474;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82915400;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82915418
	if (cr6.eq) goto loc_82915418;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82877b90
	ctx.lr = 0x82915414;
	sub_82877B90(ctx, base);
	// b 0x8291541c
	goto loc_8291541C;
loc_82915418:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8291541C:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// stw r3,1844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1844, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8291543c
	if (cr6.eq) goto loc_8291543C;
	// bl 0x828e2688
	ctx.lr = 0x82915430;
	sub_828E2688(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r7,r11,-8144
	ctx.r7.s64 = ctx.r11.s64 + -8144;
	// b 0x82915448
	goto loc_82915448;
loc_8291543C:
	// bl 0x839357f8
	ctx.lr = 0x82915440;
	sub_839357F8(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r7,r11,-8848
	ctx.r7.s64 = ctx.r11.s64 + -8848;
loc_82915448:
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r4,1836(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r3,1844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1844);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82877c08
	ctx.lr = 0x82915460;
	sub_82877C08(ctx, base);
	// lwz r11,1836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// lwz r10,1844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1844);
	// stw r10,6156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6156, ctx.r10.u32);
	// lwz r3,1836(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// bl 0x827df7a8
	ctx.lr = 0x82915474;
	sub_827DF7A8(ctx, base);
loc_82915474:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8291547C"))) PPC_WEAK_FUNC(sub_8291547C);
PPC_FUNC_IMPL(__imp__sub_8291547C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82915480"))) PPC_WEAK_FUNC(sub_82915480);
PPC_FUNC_IMPL(__imp__sub_82915480) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82915488;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1848(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1848);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8291550c
	if (!cr6.eq) goto loc_8291550C;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x829154BC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x829154d4
	if (cr6.eq) goto loc_829154D4;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82877b90
	ctx.lr = 0x829154D0;
	sub_82877B90(ctx, base);
	// b 0x829154d8
	goto loc_829154D8;
loc_829154D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829154D8:
	// stw r3,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r3.u32);
	// bl 0x82aa87f0
	ctx.lr = 0x829154E0;
	sub_82AA87F0(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r4,1836(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// addi r7,r11,-9040
	ctx.r7.s64 = ctx.r11.s64 + -9040;
	// lwz r3,1848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1848);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82877c08
	ctx.lr = 0x82915500;
	sub_82877C08(ctx, base);
	// lwz r10,1836(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// lwz r9,1848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1848);
	// stw r9,6164(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6164, ctx.r9.u32);
loc_8291550C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82915514"))) PPC_WEAK_FUNC(sub_82915514);
PPC_FUNC_IMPL(__imp__sub_82915514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82915518"))) PPC_WEAK_FUNC(sub_82915518);
PPC_FUNC_IMPL(__imp__sub_82915518) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82915520;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1852(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1852);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x829155a4
	if (!cr6.eq) goto loc_829155A4;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82915554;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8291556c
	if (cr6.eq) goto loc_8291556C;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82877b90
	ctx.lr = 0x82915568;
	sub_82877B90(ctx, base);
	// b 0x82915570
	goto loc_82915570;
loc_8291556C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82915570:
	// stw r3,1852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1852, ctx.r3.u32);
	// bl 0x82dd3a30
	ctx.lr = 0x82915578;
	sub_82DD3A30(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r4,1836(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// addi r7,r11,-8912
	ctx.r7.s64 = ctx.r11.s64 + -8912;
	// lwz r3,1852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1852);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82877c08
	ctx.lr = 0x82915598;
	sub_82877C08(ctx, base);
	// lwz r10,1836(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// lwz r9,1852(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1852);
	// stw r9,6160(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6160, ctx.r9.u32);
loc_829155A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829155AC"))) PPC_WEAK_FUNC(sub_829155AC);
PPC_FUNC_IMPL(__imp__sub_829155AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829155B0"))) PPC_WEAK_FUNC(sub_829155B0);
PPC_FUNC_IMPL(__imp__sub_829155B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1844(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1844);
	// b 0x82877d48
	sub_82877D48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829155B8"))) PPC_WEAK_FUNC(sub_829155B8);
PPC_FUNC_IMPL(__imp__sub_829155B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1848(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1848);
	// b 0x82877d48
	sub_82877D48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829155C0"))) PPC_WEAK_FUNC(sub_829155C0);
PPC_FUNC_IMPL(__imp__sub_829155C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,1852(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1852);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82915608
	if (cr6.eq) goto loc_82915608;
	// bl 0x82877d50
	ctx.lr = 0x829155EC;
	sub_82877D50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82915608
	if (cr6.eq) goto loc_82915608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,1836(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// lwz r3,1852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1852);
	// bl 0x82877de8
	ctx.lr = 0x82915608;
	sub_82877DE8(ctx, base);
loc_82915608:
	// lwz r3,1844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1844);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82915634
	if (cr6.eq) goto loc_82915634;
	// bl 0x82877d50
	ctx.lr = 0x82915618;
	sub_82877D50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82915634
	if (cr6.eq) goto loc_82915634;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,1836(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// lwz r3,1844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1844);
	// bl 0x82877de8
	ctx.lr = 0x82915634;
	sub_82877DE8(ctx, base);
loc_82915634:
	// lwz r3,1848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1848);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82915660
	if (cr6.eq) goto loc_82915660;
	// bl 0x82877d50
	ctx.lr = 0x82915644;
	sub_82877D50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82915660
	if (cr6.eq) goto loc_82915660;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,1836(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// lwz r3,1848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1848);
	// bl 0x82877de8
	ctx.lr = 0x82915660;
	sub_82877DE8(ctx, base);
loc_82915660:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82915678"))) PPC_WEAK_FUNC(sub_82915678);
PPC_FUNC_IMPL(__imp__sub_82915678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,1400(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1400);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-31778
	ctx.r8.s64 = -2082603008;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lfs f13,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,-23520(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -23520);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x82624408
	ctx.lr = 0x829156C0;
	sub_82624408(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829156D0"))) PPC_WEAK_FUNC(sub_829156D0);
PPC_FUNC_IMPL(__imp__sub_829156D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x829156D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,1844(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1844);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8291572c
	if (cr6.eq) goto loc_8291572C;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82877c90
	ctx.lr = 0x829156F4;
	sub_82877C90(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8291572c
	if (cr6.eq) goto loc_8291572C;
loc_82915700:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,1844(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1844);
	// bl 0x82877d40
	ctx.lr = 0x8291570C;
	sub_82877D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,1844(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1844);
	// bl 0x82877d00
	ctx.lr = 0x82915718;
	sub_82877D00(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82915738
	if (!cr6.eq) goto loc_82915738;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// blt cr6,0x82915700
	if (cr6.lt) goto loc_82915700;
loc_8291572C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82915738:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82915744"))) PPC_WEAK_FUNC(sub_82915744);
PPC_FUNC_IMPL(__imp__sub_82915744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82915748"))) PPC_WEAK_FUNC(sub_82915748);
PPC_FUNC_IMPL(__imp__sub_82915748) {
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
	// lwz r11,1844(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1844);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829157ac
	if (cr6.eq) goto loc_829157AC;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82915780;
	sub_82595150(ctx, base);
	// lwz r3,1844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1844);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x829157a0
	if (cr6.eq) goto loc_829157A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829157A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_829157A0:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x829157A8;
	sub_82595170(ctx, base);
	// stw r30,1844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1844, ctx.r30.u32);
loc_829157AC:
	// lwz r11,1852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1852);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829157f4
	if (cr6.eq) goto loc_829157F4;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x829157C8;
	sub_82595150(ctx, base);
	// lwz r3,1852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1852);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x829157e8
	if (cr6.eq) goto loc_829157E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829157E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_829157E8:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x829157F0;
	sub_82595170(ctx, base);
	// stw r30,1852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1852, ctx.r30.u32);
loc_829157F4:
	// lwz r11,1848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1848);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8291583c
	if (cr6.eq) goto loc_8291583C;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82915810;
	sub_82595150(ctx, base);
	// lwz r3,1848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1848);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82915830
	if (cr6.eq) goto loc_82915830;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82915830;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82915830:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82915838;
	sub_82595170(ctx, base);
	// stw r30,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r30.u32);
loc_8291583C:
	// lwz r11,1836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8291585c
	if (cr6.eq) goto loc_8291585C;
	// stw r30,6156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6156, ctx.r30.u32);
	// lwz r11,1836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// stw r30,6160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6160, ctx.r30.u32);
	// lwz r10,1836(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// stw r30,6164(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6164, ctx.r30.u32);
loc_8291585C:
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

__attribute__((alias("__imp__sub_82915874"))) PPC_WEAK_FUNC(sub_82915874);
PPC_FUNC_IMPL(__imp__sub_82915874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82915878"))) PPC_WEAK_FUNC(sub_82915878);
PPC_FUNC_IMPL(__imp__sub_82915878) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82915880;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x831ce778
	ctx.lr = 0x82915888;
	__savefpr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// bge cr6,0x82915bb8
	if (!cr6.lt) goto loc_82915BB8;
	// lwz r9,1840(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1840);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// srawi r7,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 31;
	// rlwinm r6,r10,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r5,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r5.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r30,12(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r10,-3564(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3564);
	// adde r9,r6,r7
	temp.u8 = (ctx.r6.u32 + ctx.r7.u32 < ctx.r6.u32) | (ctx.r6.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r4,r9,24
	ctx.r4.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// lwz r10,292(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// beq cr6,0x829158ec
	if (cr6.eq) goto loc_829158EC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r9,5768(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5768);
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r10,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x829158f0
	goto loc_829158F0;
loc_829158EC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_829158F0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82915910
	if (!cr6.eq) goto loc_82915910;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1844(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1844);
	// bl 0x82877d48
	ctx.lr = 0x82915908;
	sub_82877D48(ctx, base);
	// lwz r3,1848(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1848);
	// b 0x82915bb0
	goto loc_82915BB0;
loc_82915910:
	// addis r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 65536;
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(ctx.r11.u32, 22, xer);
	// addi r10,r10,12384
	ctx.r10.s64 = ctx.r10.s64 + 12384;
	// bge cr6,0x82915930
	if (!cr6.lt) goto loc_82915930;
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// mulli r9,r9,200
	ctx.r9.s64 = ctx.r9.s64 * 200;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x82915934
	goto loc_82915934;
loc_82915930:
	// addi r9,r10,1400
	ctx.r9.s64 = ctx.r10.s64 + 1400;
loc_82915934:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82915944
	if (!cr6.lt) goto loc_82915944;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82915958
	goto loc_82915958;
loc_82915944:
	// li r10,11
	ctx.r10.s64 = 11;
	// srawi r8,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r6,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r6.s64 = ctx.r11.s64 - ctx.r10.s64;
	// adde r10,r7,r8
	temp.u8 = (ctx.r7.u32 + ctx.r8.u32 < ctx.r7.u32) | (ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82915958:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82915974
	if (!cr6.lt) goto loc_82915974;
	// mulli r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 * 88;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x82915978
	goto loc_82915978;
loc_82915974:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82915978:
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// lfs f13,25080(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 25080);
	ctx.f13.f64 = double(temp.f32);
	// lfs f30,9008(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f28,-26260(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -26260);
	ctx.f28.f64 = double(temp.f32);
	// bgt cr6,0x829159a4
	if (cr6.gt) goto loc_829159A4;
	// fmr f13,f30
	ctx.f13.f64 = ctx.f30.f64;
	// b 0x829159cc
	goto loc_829159CC;
loc_829159A4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,-4460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4460);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x829159bc
	if (cr6.lt) goto loc_829159BC;
	// fmr f13,f28
	ctx.f13.f64 = ctx.f28.f64;
	// b 0x829159cc
	goto loc_829159CC;
loc_829159BC:
	// fsubs f12,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,27728(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27728);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
loc_829159CC:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x82915a3c
	if (cr6.eq) goto loc_82915A3C;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x829159e4
	if (!cr6.lt) goto loc_829159E4;
	// mulli r11,r10,88
	ctx.r11.s64 = ctx.r10.s64 * 88;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_829159E4:
	// lfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x82915a3c
	if (cr6.eq) goto loc_82915A3C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-3404(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3404);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82915a34
	if (!cr6.lt) goto loc_82915A34;
	// lwz r11,1848(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1848);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82915a50
	if (cr6.eq) goto loc_82915A50;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f28,92(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82915678
	ctx.lr = 0x82915A28;
	sub_82915678(ctx, base);
	// lwz r3,1848(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1848);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82915a4c
	goto loc_82915A4C;
loc_82915A34:
	// fcmpu cr6,f13,f28
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f28.f64);
	// blt cr6,0x82915a50
	if (cr6.lt) goto loc_82915A50;
loc_82915A3C:
	// lwz r3,1848(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1848);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82915a50
	if (cr6.eq) goto loc_82915A50;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82915A4C:
	// bl 0x82877d48
	ctx.lr = 0x82915A50;
	sub_82877D48(ctx, base);
loc_82915A50:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lfs f29,16100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16100);
	ctx.f29.f64 = double(temp.f32);
	// beq cr6,0x82915a84
	if (cr6.eq) goto loc_82915A84;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,21708(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21708);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82915abc
	if (!cr6.gt) goto loc_82915ABC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,-28644(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28644);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82915a9c
	goto loc_82915A9C;
loc_82915A84:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,25708(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25708);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82915abc
	if (!cr6.gt) goto loc_82915ABC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,-11740(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11740);
	ctx.f13.f64 = double(temp.f32);
loc_82915A9C:
	// fcmpu cr6,f31,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// bge cr6,0x82915b9c
	if (!cr6.lt) goto loc_82915B9C;
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,27724(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27724);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82915b94
	if (!cr6.lt) goto loc_82915B94;
loc_82915ABC:
	// addis r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 65536;
	// lwz r31,16(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r30,r30,20120
	ctx.r30.s64 = ctx.r30.s64 + 20120;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ca600
	ctx.lr = 0x82915AD4;
	sub_825CA600(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,27720(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27720);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82915aec
	if (cr6.gt) goto loc_82915AEC;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82915b14
	goto loc_82915B14;
loc_82915AEC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,-11392(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11392);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// blt cr6,0x82915b04
	if (cr6.lt) goto loc_82915B04;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82915b14
	goto loc_82915B14;
loc_82915B04:
	// fsubs f13,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,27716(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27716);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82915B14:
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// beq cr6,0x82915b9c
	if (cr6.eq) goto loc_82915B9C;
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82915b94
	if (!cr6.lt) goto loc_82915B94;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82915b38
	if (cr6.lt) goto loc_82915B38;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82915b3c
	if (cr6.lt) goto loc_82915B3C;
loc_82915B38:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82915B3C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82915b50
	if (cr6.eq) goto loc_82915B50;
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// lbz r11,178(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 178);
loc_82915B50:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82915ba0
	if (!cr6.lt) goto loc_82915BA0;
	// lwz r11,1844(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1844);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82915ba0
	if (cr6.eq) goto loc_82915BA0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f30,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f28,92(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82915678
	ctx.lr = 0x82915B84;
	sub_82915678(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,1844(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1844);
	// bl 0x82877d48
	ctx.lr = 0x82915B90;
	sub_82877D48(ctx, base);
	// b 0x82915ba0
	goto loc_82915BA0;
loc_82915B94:
	// fcmpu cr6,f0,f28
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// blt cr6,0x82915ba0
	if (cr6.lt) goto loc_82915BA0;
loc_82915B9C:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82915BA0:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82915bb8
	if (cr6.eq) goto loc_82915BB8;
	// lwz r3,1844(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1844);
loc_82915BB0:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82877d48
	ctx.lr = 0x82915BB8;
	sub_82877D48(ctx, base);
loc_82915BB8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x831ce7c4
	ctx.lr = 0x82915BC4;
	__restfpr_28(ctx, base);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82915BC8"))) PPC_WEAK_FUNC(sub_82915BC8);
PPC_FUNC_IMPL(__imp__sub_82915BC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x82915BD0;
	__savegprlr_16(ctx, base);
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x831ce754
	ctx.lr = 0x82915BD8;
	__savefpr_19(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-31763
	ctx.r9.s64 = -2081619968;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r16,r4
	ctx.r16.u64 = ctx.r4.u64;
	// lwz r4,1836(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1836);
	// lfs f19,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f19.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lfs f0,20056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20056);
	ctx.f0.f64 = double(temp.f32);
	// li r5,10
	ctx.r5.s64 = 10;
	// fsel f29,f13,f19,f0
	ctx.f29.f64 = ctx.f13.f64 >= 0.0 ? ctx.f19.f64 : ctx.f0.f64;
	// lwz r11,-3564(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3564);
	// fsel f28,f12,f19,f0
	ctx.f28.f64 = ctx.f12.f64 >= 0.0 ? ctx.f19.f64 : ctx.f0.f64;
	// lfs f26,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f26.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f24,f26
	ctx.f24.f64 = ctx.f26.f64;
	// li r20,0
	ctx.r20.s64 = 0;
	// fmr f23,f26
	ctx.f23.f64 = ctx.f26.f64;
	// li r17,0
	ctx.r17.s64 = 0;
	// fmr f25,f26
	ctx.f25.f64 = ctx.f26.f64;
	// lwz r18,6112(r11)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// fmr f22,f26
	ctx.f22.f64 = ctx.f26.f64;
	// lwz r21,292(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// fmr f21,f26
	ctx.f21.f64 = ctx.f26.f64;
	// fmr f20,f26
	ctx.f20.f64 = ctx.f26.f64;
	// fmuls f31,f13,f29
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// fmuls f27,f12,f28
	ctx.f27.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// bl 0x837a7640
	ctx.lr = 0x82915C54;
	sub_837A7640(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r4,1836(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1836);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f11,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f30,f11,f29
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// bl 0x837a7640
	ctx.lr = 0x82915C70;
	sub_837A7640(ctx, base);
	// lwz r6,1832(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1832);
	// lfs f10,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f10,f28
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f28.f64));
	// lbz r11,140(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 140);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82915d04
	if (cr6.eq) goto loc_82915D04;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82915d68
	if (!cr6.eq) goto loc_82915D68;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,56(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,-28496(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28496);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsubs f0,f13,f30
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// fsubs f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82915cb4
	if (cr6.gt) goto loc_82915CB4;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82915CB4:
	// lfs f10,8(r18)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f0,f10,f12
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsubs f12,f10,f27
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f27.f64));
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82915ccc
	if (!cr6.gt) goto loc_82915CCC;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82915CCC:
	// fcmpu cr6,f13,f26
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f26.f64);
	// ble cr6,0x82915d68
	if (!cr6.gt) goto loc_82915D68;
	// fcmpu cr6,f0,f26
	cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// ble cr6,0x82915d68
	if (!cr6.gt) goto loc_82915D68;
	// fsubs f12,f0,f11
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x82915cf8
	if (cr6.lt) goto loc_82915CF8;
	// fsubs f12,f13,f11
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fmuls f25,f0,f28
	ctx.f25.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82915cfc
	if (cr6.lt) goto loc_82915CFC;
loc_82915CF8:
	// fmuls f24,f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
loc_82915CFC:
	// li r20,1
	ctx.r20.s64 = 1;
	// b 0x82915d68
	goto loc_82915D68;
loc_82915D04:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,56(r18)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-28496(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28496);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fsubs f0,f30,f11
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f11.f64));
	// fsubs f13,f31,f11
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f11.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82915d28
	if (!cr6.gt) goto loc_82915D28;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82915D28:
	// fcmpu cr6,f0,f26
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// ble cr6,0x82915d3c
	if (!cr6.gt) goto loc_82915D3C;
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// li r20,1
	ctx.r20.s64 = 1;
	// fneg f24,f0
	ctx.f24.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82915D3C:
	// lfs f13,8(r18)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsubs f13,f27,f13
	ctx.f13.f64 = double(float(ctx.f27.f64 - ctx.f13.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82915d54
	if (!cr6.gt) goto loc_82915D54;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82915D54:
	// fcmpu cr6,f0,f26
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// ble cr6,0x82915d68
	if (!cr6.gt) goto loc_82915D68;
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// fneg f25,f0
	ctx.f25.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82915D68:
	// lwz r11,5072(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 5072);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82915d88
	if (cr6.eq) goto loc_82915D88;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82915d88
	if (cr6.eq) goto loc_82915D88;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82915d8c
	if (!cr6.eq) goto loc_82915D8C;
loc_82915D88:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82915D8C:
	// lwz r3,1852(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1852);
	// clrlwi r19,r11,24
	ctx.r19.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82916048
	if (cr6.eq) goto loc_82916048;
	// li r25,0
	ctx.r25.s64 = 0;
	// bl 0x82877c90
	ctx.lr = 0x82915DA4;
	sub_82877C90(ctx, base);
	// lwz r23,0(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x82916048
	if (cr6.eq) goto loc_82916048;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r24,2560
	ctx.r24.s64 = 167772160;
	// lfs f28,7112(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7112);
	ctx.f28.f64 = double(temp.f32);
	// lis r22,-31778
	ctx.r22.s64 = -2082603008;
	// lfs f29,-11316(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11316);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,-24912(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24912);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,18036(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 18036);
	ctx.f30.f64 = double(temp.f32);
loc_82915DD8:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,1852(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1852);
	// bl 0x82877d40
	ctx.lr = 0x82915DE4;
	sub_82877D40(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,1852(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1852);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82877d00
	ctx.lr = 0x82915DF8;
	sub_82877D00(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8291603c
	if (cr6.eq) goto loc_8291603C;
loc_82915E04:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r4,1852(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1852);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82877d08
	ctx.lr = 0x82915E18;
	sub_82877D08(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lfs f13,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// srawi r11,r11,24
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 24;
	// lfs f12,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// bne cr6,0x82915e64
	if (!cr6.eq) goto loc_82915E64;
	// lfs f10,-23432(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + -23432);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// blt cr6,0x82915e64
	if (cr6.lt) goto loc_82915E64;
	// fsubs f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmuls f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmuls f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fadds f24,f9,f24
	ctx.f24.f64 = double(float(ctx.f9.f64 + ctx.f24.f64));
	// fadds f23,f8,f23
	ctx.f23.f64 = double(float(ctx.f8.f64 + ctx.f23.f64));
	// fadds f25,f7,f25
	ctx.f25.f64 = double(float(ctx.f7.f64 + ctx.f25.f64));
loc_82915E64:
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x82915e94
	if (!cr6.eq) goto loc_82915E94;
	// clrlwi r10,r19,24
	ctx.r10.u64 = ctx.r19.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82915e94
	if (!cr6.eq) goto loc_82915E94;
	// fmuls f11,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fadds f22,f11,f22
	ctx.f22.f64 = double(float(ctx.f11.f64 + ctx.f22.f64));
	// fadds f21,f10,f21
	ctx.f21.f64 = double(float(ctx.f10.f64 + ctx.f21.f64));
	// fadds f20,f9,f20
	ctx.f20.f64 = double(float(ctx.f9.f64 + ctx.f20.f64));
loc_82915E94:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bne cr6,0x82915f50
	if (!cr6.eq) goto loc_82915F50;
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x82915f50
	if (!cr6.gt) goto loc_82915F50;
	// lwz r31,1836(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1836);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82915f50
	if (cr6.eq) goto loc_82915F50;
	// bl 0x83740868
	ctx.lr = 0x82915EB4;
	sub_83740868(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837a7b80
	ctx.lr = 0x82915EC8;
	sub_837A7B80(ctx, base);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f26
	cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f27,f13
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f13.f64));
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f12,f27
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f27.f64));
	// fmuls f12,f11,f27
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f27.f64));
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// bge cr6,0x82915f08
	if (!cr6.lt) goto loc_82915F08;
	// fcmpu cr6,f11,f26
	cr6.compare(ctx.f11.f64, ctx.f26.f64);
	// bge cr6,0x82915f00
	if (!cr6.lt) goto loc_82915F00;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82915f18
	goto loc_82915F18;
loc_82915F00:
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82915f18
	goto loc_82915F18;
loc_82915F08:
	// fcmpu cr6,f11,f26
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f11.f64, ctx.f26.f64);
	// li r4,1
	ctx.r4.s64 = 1;
	// blt cr6,0x82915f18
	if (cr6.lt) goto loc_82915F18;
	// li r4,3
	ctx.r4.s64 = 3;
loc_82915F18:
	// fmuls f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lbz r11,4503(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 4503);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82915f4c
	if (!cr6.eq) goto loc_82915F4C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82a36fb0
	ctx.lr = 0x82915F4C;
	sub_82A36FB0(ctx, base);
loc_82915F4C:
	// lfs f0,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
loc_82915F50:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// rlwinm r10,r11,0,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r10,r24
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r24.s32, xer);
	// bne cr6,0x82916030
	if (!cr6.eq) goto loc_82916030;
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x82916030
	if (!cr6.gt) goto loc_82916030;
	// lwz r30,1836(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1836);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82916030
	if (cr6.eq) goto loc_82916030;
	// lfs f0,0(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fadds f11,f13,f28
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f28.f64));
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fcmpu cr6,f10,f12
	cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// bge cr6,0x82916030
	if (!cr6.lt) goto loc_82916030;
	// fcmpu cr6,f0,f26
	cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// bge cr6,0x82915fb8
	if (!cr6.lt) goto loc_82915FB8;
	// fcmpu cr6,f0,f26
	cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// bge cr6,0x82915fb0
	if (!cr6.lt) goto loc_82915FB0;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82915fc8
	goto loc_82915FC8;
loc_82915FB0:
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x82915fc8
	goto loc_82915FC8;
loc_82915FB8:
	// fcmpu cr6,f0,f26
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// li r31,1
	ctx.r31.s64 = 1;
	// blt cr6,0x82915fc8
	if (cr6.lt) goto loc_82915FC8;
	// li r31,3
	ctx.r31.s64 = 3;
loc_82915FC8:
	// bl 0x83740868
	ctx.lr = 0x82915FCC;
	sub_83740868(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837a7b80
	ctx.lr = 0x82915FE0;
	sub_837A7B80(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f27
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f27
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// fmuls f9,f11,f27
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f27.f64));
	// fmuls f8,f12,f31
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f7,f10,f31
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f6,f9,f31
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lbz r11,4503(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 4503);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82916030
	if (!cr6.eq) goto loc_82916030;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82a37ba0
	ctx.lr = 0x82916030;
	sub_82A37BA0(ctx, base);
loc_82916030:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, xer);
	// blt cr6,0x82915e04
	if (cr6.lt) goto loc_82915E04;
loc_8291603C:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplw cr6,r25,r23
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r23.u32, xer);
	// blt cr6,0x82915dd8
	if (cr6.lt) goto loc_82915DD8;
loc_82916048:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// bne cr6,0x8291606c
	if (!cr6.eq) goto loc_8291606C;
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(ctx.r17.u32, 0, xer);
	// bne cr6,0x82916090
	if (!cr6.eq) goto loc_82916090;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x831ce7a0
	ctx.lr = 0x82916068;
	__restfpr_19(ctx, base);
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_8291606C:
	// clrldi r11,r20,32
	ctx.r11.u64 = ctx.r20.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f11,f19,f12
	ctx.f11.f64 = double(float(ctx.f19.f64 / ctx.f12.f64));
	// fmuls f24,f11,f24
	ctx.f24.f64 = double(float(ctx.f11.f64 * ctx.f24.f64));
	// fmuls f23,f11,f23
	ctx.f23.f64 = double(float(ctx.f11.f64 * ctx.f23.f64));
	// fmuls f25,f11,f25
	ctx.f25.f64 = double(float(ctx.f11.f64 * ctx.f25.f64));
loc_82916090:
	// fadds f0,f22,f24
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f22.f64 + ctx.f24.f64));
	// lfs f13,0(r16)
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f21,f23
	ctx.f12.f64 = double(float(ctx.f21.f64 + ctx.f23.f64));
	// lfs f11,4(r16)
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f20,f25
	ctx.f10.f64 = double(float(ctx.f20.f64 + ctx.f25.f64));
	// lfs f9,8(r16)
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fadds f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f8,0(r16)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r16.u32 + 0, temp.u32);
	// fadds f7,f11,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f7,4(r16)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r16.u32 + 4, temp.u32);
	// fadds f6,f9,f10
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stfs f6,8(r16)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r16.u32 + 8, temp.u32);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x831ce7a0
	ctx.lr = 0x829160D0;
	__restfpr_19(ctx, base);
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829160D4"))) PPC_WEAK_FUNC(sub_829160D4);
PPC_FUNC_IMPL(__imp__sub_829160D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829160D8"))) PPC_WEAK_FUNC(sub_829160D8);
PPC_FUNC_IMPL(__imp__sub_829160D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x829160E0;
	__savegprlr_20(ctx, base);
	// stfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// extsh r24,r11
	ctx.r24.s64 = ctx.r11.s16;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// li r20,1
	ctx.r20.s64 = 1;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// blt cr6,0x82916124
	if (cr6.lt) goto loc_82916124;
	// cmpwi cr6,r24,22
	cr6.compare<int32_t>(ctx.r24.s32, 22, xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// blt cr6,0x82916128
	if (cr6.lt) goto loc_82916128;
loc_82916124:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82916128:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8291617c
	if (cr6.eq) goto loc_8291617C;
	// lis r27,-31763
	ctx.r27.s64 = -2081619968;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,-3564(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x82916144;
	sub_82A0C760(ctx, base);
	// lwz r29,4(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// srawi r30,r29,24
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFFFFFF) != 0);
	ctx.r30.s64 = ctx.r29.s32 >> 24;
	// rlwinm r26,r11,17,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// cmpwi cr6,r30,5
	cr6.compare<int32_t>(ctx.r30.s32, 5, xer);
	// beq cr6,0x829161c0
	if (cr6.eq) goto loc_829161C0;
	// lwz r11,1840(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1840);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,112(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// bl 0x825ca710
	ctx.lr = 0x8291616C;
	sub_825CA710(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82916190
	if (!cr6.eq) goto loc_82916190;
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(ctx.r30.s32, 3, xer);
	// beq cr6,0x829161c0
	if (cr6.eq) goto loc_829161C0;
loc_8291617C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82916190:
	// cmpwi cr6,r30,7
	cr6.compare<int32_t>(ctx.r30.s32, 7, xer);
	// bne cr6,0x8291617c
	if (!cr6.eq) goto loc_8291617C;
	// rlwinm r11,r29,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r11,r11,24
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 24;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x829161c0
	if (cr6.eq) goto loc_829161C0;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x829161c0
	if (cr6.eq) goto loc_829161C0;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x829161c0
	if (cr6.eq) goto loc_829161C0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8291617c
	if (!cr6.eq) goto loc_8291617C;
loc_829161C0:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x829161dc
	if (cr6.lt) goto loc_829161DC;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// blt cr6,0x829161e0
	if (cr6.lt) goto loc_829161E0;
loc_829161DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_829161E0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r25,-31778
	ctx.r25.s64 = -2082603008;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lfs f31,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// addi r29,r11,27428
	ctx.r29.s64 = ctx.r11.s64 + 27428;
	// beq cr6,0x82916240
	if (cr6.eq) goto loc_82916240;
	// lwz r3,-3564(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x82916208;
	sub_82A0C760(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82a3cff8
	ctx.lr = 0x82916214;
	sub_82A3CFF8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82916240
	if (cr6.eq) goto loc_82916240;
	// clrlwi r30,r26,24
	ctx.r30.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x82916278
	if (!cr6.eq) goto loc_82916278;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82638fc8
	ctx.lr = 0x82916238;
	sub_82638FC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// b 0x82916268
	goto loc_82916268;
loc_82916240:
	// clrlwi r30,r26,24
	ctx.r30.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82916264
	if (cr6.eq) goto loc_82916264;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-23432(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -23432);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-10804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10804);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f30,f12,f0,f13
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// b 0x82916278
	goto loc_82916278;
loc_82916264:
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
loc_82916268:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82916278
	if (cr6.eq) goto loc_82916278;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f30,-23580(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23580);
	ctx.f30.f64 = double(temp.f32);
loc_82916278:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r26,7
	ctx.r26.s64 = 458752;
	// rlwinm r10,r11,0,8,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF0000;
	// cmpw cr6,r10,r26
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r26.s32, xer);
	// bne cr6,0x82916290
	if (!cr6.eq) goto loc_82916290;
	// lfs f31,-23432(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -23432);
	ctx.f31.f64 = double(temp.f32);
loc_82916290:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x829162bc
	if (!cr6.eq) goto loc_829162BC;
	// lwz r3,1836(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1836);
	// bl 0x837a7160
	ctx.lr = 0x829162A0;
	sub_837A7160(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829162b4
	if (cr6.eq) goto loc_829162B4;
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// b 0x829162b8
	goto loc_829162B8;
loc_829162B4:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
loc_829162B8:
	// fadds f31,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
loc_829162BC:
	// lfs f0,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x829162f0
	if (!cr6.gt) goto loc_829162F0;
	// add r11,r23,r31
	ctx.r11.u64 = ctx.r23.u64 + ctx.r31.u64;
	// stb r20,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r20.u8);
	// stb r20,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r20.u8);
	// lwz r4,16(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16);
	// lwz r3,-3564(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x829162E0;
	sub_82A0C788(ctx, base);
	// lwz r11,-3564(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r9,4472(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4472);
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
loc_829162F0:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lfs f13,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-23432(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -23432);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r11,0,8,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF0000;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// cmpw cr6,r10,r26
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r26.s32, xer);
	// beq cr6,0x82916314
	if (cr6.eq) goto loc_82916314;
	// lfs f12,-23432(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -23432);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
loc_82916314:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x8291617c
	if (!cr6.gt) goto loc_8291617C;
	// fcmpu cr6,f13,f31
	cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// ble cr6,0x8291617c
	if (!cr6.gt) goto loc_8291617C;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// lfs f13,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// cmpwi cr6,r23,3
	cr6.compare<int32_t>(ctx.r23.s32, 3, xer);
	// lfs f12,16(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f11,20(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// bne cr6,0x82916350
	if (!cr6.eq) goto loc_82916350;
	// li r23,2
	ctx.r23.s64 = 2;
	// b 0x8291635c
	goto loc_8291635C;
loc_82916350:
	// cmpwi cr6,r23,6
	cr6.compare<int32_t>(ctx.r23.s32, 6, xer);
	// bne cr6,0x8291635c
	if (!cr6.eq) goto loc_8291635C;
	// li r23,5
	ctx.r23.s64 = 5;
loc_8291635C:
	// stw r23,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r23.u32);
	// lfs f13,24(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f12,28(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,52(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f11,32(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,56(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r11,r10,24
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 24;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x829163ac
	if (!cr6.eq) goto loc_829163AC;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-120(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_829163AC:
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x829163b8
	if (!cr6.eq) goto loc_829163B8;
	// li r11,5
	ctx.r11.s64 = 5;
loc_829163B8:
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829163D0"))) PPC_WEAK_FUNC(sub_829163D0);
PPC_FUNC_IMPL(__imp__sub_829163D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x829163D8;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce754
	ctx.lr = 0x829163E0;
	__savefpr_19(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1852(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1852);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r14,r4
	ctx.r14.u64 = ctx.r4.u64;
	// stw r4,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, ctx.r4.u32);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82916418
	if (!cr6.eq) goto loc_82916418;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce7a0
	ctx.lr = 0x82916414;
	__restfpr_19(ctx, base);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82916418:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,16(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// lis r23,-31763
	ctx.r23.s64 = -2081619968;
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r17,r21
	ctx.r17.u64 = ctx.r21.u64;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// lfs f28,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f28.f64 = double(temp.f32);
	// lwz r3,-3564(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -3564);
	// fmr f21,f28
	ctx.f21.f64 = ctx.f28.f64;
	// fmr f26,f28
	ctx.f26.f64 = ctx.f28.f64;
	// fmr f25,f28
	ctx.f25.f64 = ctx.f28.f64;
	// fmr f24,f28
	ctx.f24.f64 = ctx.f28.f64;
	// bl 0x82a0c760
	ctx.lr = 0x8291644C;
	sub_82A0C760(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r3,1852(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1852);
	// bl 0x82877c90
	ctx.lr = 0x82916458;
	sub_82877C90(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lwz r20,0(r3)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r16,1
	ctx.r16.s64 = 1;
	// lis r15,-31778
	ctx.r15.s64 = -2082603008;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// lfs f19,-10804(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10804);
	ctx.f19.f64 = double(temp.f32);
	// lfs f29,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f29.f64 = double(temp.f32);
	// beq cr6,0x82916a14
	if (cr6.eq) goto loc_82916A14;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f22,-24912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24912);
	ctx.f22.f64 = double(temp.f32);
	// lis r19,7
	ctx.r19.s64 = 458752;
	// lfs f23,-11324(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -11324);
	ctx.f23.f64 = double(temp.f32);
	// lis r27,-31778
	ctx.r27.s64 = -2082603008;
	// lfs f20,-23844(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -23844);
	ctx.f20.f64 = double(temp.f32);
	// addi r28,r11,27204
	ctx.r28.s64 = ctx.r11.s64 + 27204;
	// lfs f27,20056(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20056);
	ctx.f27.f64 = double(temp.f32);
loc_829164AC:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r3,1852(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1852);
	// bl 0x82877d40
	ctx.lr = 0x829164B8;
	sub_82877D40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,1852(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1852);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82877d00
	ctx.lr = 0x829164CC;
	sub_82877D00(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82916a08
	if (cr6.eq) goto loc_82916A08;
loc_829164D8:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,1852(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1852);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82877d08
	ctx.lr = 0x829164EC;
	sub_82877D08(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// extsh r31,r11
	ctx.r31.s64 = ctx.r11.s16;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x829169fc
	if (cr6.lt) goto loc_829169FC;
	// cmpwi cr6,r31,25
	cr6.compare<int32_t>(ctx.r31.s32, 25, xer);
	// bge cr6,0x829169fc
	if (!cr6.lt) goto loc_829169FC;
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// eqv r9,r11,r31
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r31.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x829165c8
	if (cr6.eq) goto loc_829165C8;
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8291653c
	if (cr6.lt) goto loc_8291653C;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// blt cr6,0x82916540
	if (cr6.lt) goto loc_82916540;
loc_8291653C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82916540:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829165c8
	if (cr6.eq) goto loc_829165C8;
	// li r11,22
	ctx.r11.s64 = 22;
	// lwz r10,1840(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1840);
	// rlwinm r9,r31,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// subfc r8,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r31.s64 - ctx.r11.s64;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r6,r9,r7
	temp.u8 = (~ctx.r9.u32 + ctx.r7.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r9.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r11,112(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// and r5,r6,r31
	ctx.r5.u64 = ctx.r6.u64 & ctx.r31.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x82916584
	if (!cr6.gt) goto loc_82916584;
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x829165c8
	if (!cr6.lt) goto loc_829165C8;
loc_82916584:
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// srawi r11,r10,24
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 24;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x829169fc
	if (cr6.eq) goto loc_829169FC;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bne cr6,0x829165c8
	if (!cr6.eq) goto loc_829165C8;
	// rlwinm r11,r10,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r11,r11,24
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 24;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x829169fc
	if (cr6.gt) goto loc_829169FC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x829165c8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_829165C8;
	// bdzf 4*cr6+eq,0x829169fc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_829169FC;
	// bdzf 4*cr6+eq,0x829165c8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_829165C8;
	// bne cr6,0x829165c8
	if (!cr6.eq) goto loc_829165C8;
loc_829165C8:
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,188(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r9,192(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r3,-3564(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -3564);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// bl 0x82a0c760
	ctx.lr = 0x829165EC;
	sub_82A0C760(ctx, base);
	// lwz r10,16(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// lfs f13,72(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x82916608
	if (!cr6.lt) goto loc_82916608;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82916630
	goto loc_82916630;
loc_82916608:
	// cmpwi cr6,r10,11
	cr6.compare<int32_t>(ctx.r10.s32, 11, xer);
	// bge cr6,0x82916618
	if (!cr6.lt) goto loc_82916618;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82916630
	goto loc_82916630;
loc_82916618:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r9,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// eqv r8,r11,r10
	ctx.r8.u64 = ~(ctx.r11.u64 ^ ctx.r10.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r9,r6,31
	ctx.r9.u64 = ctx.r6.u32 & 0x1;
loc_82916630:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge cr6,0x82916640
	if (!cr6.lt) goto loc_82916640;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82916668
	goto loc_82916668;
loc_82916640:
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// bge cr6,0x82916650
	if (!cr6.lt) goto loc_82916650;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82916668
	goto loc_82916668;
loc_82916650:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r8,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r31.s64 - ctx.r11.s64;
	// eqv r7,r11,r31
	ctx.r7.u64 = ~(ctx.r11.u64 ^ ctx.r31.u64);
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
loc_82916668:
	// lfs f0,20(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// bne cr6,0x8291667c
	if (!cr6.eq) goto loc_8291667C;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_8291667C:
	// fsubs f12,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f31,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fadds f30,f12,f11
	ctx.f30.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fcmpu cr6,f31,f30
	cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x82916954
	if (!cr6.gt) goto loc_82916954;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// rlwinm r9,r11,0,8,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF0000;
	// cmpw cr6,r9,r19
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r19.s32, xer);
	// bne cr6,0x82916954
	if (!cr6.eq) goto loc_82916954;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x829166b8
	if (cr6.lt) goto loc_829166B8;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// blt cr6,0x829166bc
	if (cr6.lt) goto loc_829166BC;
loc_829166B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_829166BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82916858
	if (cr6.eq) goto loc_82916858;
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r9,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
	// eqv r8,r11,r31
	ctx.r8.u64 = ~(ctx.r11.u64 ^ ctx.r31.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82916858
	if (cr6.eq) goto loc_82916858;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x829166f8
	if (!cr6.lt) goto loc_829166F8;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82916720
	goto loc_82916720;
loc_829166F8:
	// cmpwi cr6,r10,11
	cr6.compare<int32_t>(ctx.r10.s32, 11, xer);
	// bge cr6,0x82916708
	if (!cr6.lt) goto loc_82916708;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82916720
	goto loc_82916720;
loc_82916708:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r9,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// eqv r8,r11,r10
	ctx.r8.u64 = ~(ctx.r11.u64 ^ ctx.r10.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r10,r6,31
	ctx.r10.u64 = ctx.r6.u32 & 0x1;
loc_82916720:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge cr6,0x82916730
	if (!cr6.lt) goto loc_82916730;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82916758
	goto loc_82916758;
loc_82916730:
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// bge cr6,0x82916740
	if (!cr6.lt) goto loc_82916740;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82916758
	goto loc_82916758;
loc_82916740:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r9,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
	// eqv r8,r11,r31
	ctx.r8.u64 = ~(ctx.r11.u64 ^ ctx.r31.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
loc_82916758:
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// beq cr6,0x82916858
	if (cr6.eq) goto loc_82916858;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1840(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1840);
	// bl 0x82a2b4e0
	ctx.lr = 0x8291676C;
	sub_82A2B4E0(ctx, base);
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, xer);
	// beq cr6,0x82916780
	if (cr6.eq) goto loc_82916780;
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, xer);
	// bne cr6,0x82916858
	if (!cr6.eq) goto loc_82916858;
loc_82916780:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x8291678C;
	sub_82A0C788(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lfs f1,-23428(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -23428);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a36180
	ctx.lr = 0x8291679C;
	sub_82A36180(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// addi r4,r24,128
	ctx.r4.s64 = ctx.r24.s64 + 128;
	// lfs f1,-23428(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -23428);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82a36180
	ctx.lr = 0x829167B0;
	sub_82A36180(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,0(r14)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lfs f13,8(r14)
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f3,f12,f0
	ctx.f3.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f4,f11,f13
	ctx.f4.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// bl 0x825c3ec0
	ctx.lr = 0x829167DC;
	sub_825C3EC0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lfs f4,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x825c3ec0
	ctx.lr = 0x829167F4;
	sub_825C3EC0(ctx, base);
	// lfs f31,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825f7e40
	ctx.lr = 0x82916808;
	sub_825F7E40(ctx, base);
	// lfs f10,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f0,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fabs f8,f0
	ctx.f8.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f8,f31
	cr6.compare(ctx.f8.f64, ctx.f31.f64);
	// ble cr6,0x8291682c
	if (!cr6.gt) goto loc_8291682C;
	// fsel f12,f0,f29,f27
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f29.f64 : ctx.f27.f64;
	// lfs f13,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f12,f13,f0
	ctx.f0.f64 = double(float(-(ctx.f12.f64 * ctx.f13.f64 - ctx.f0.f64)));
loc_8291682C:
	// fabs f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f20
	cr6.compare(ctx.f13.f64, ctx.f20.f64);
	// bge cr6,0x82916854
	if (!cr6.lt) goto loc_82916854;
	// fnmsubs f12,f13,f23,f29
	ctx.f12.f64 = double(float(-(ctx.f13.f64 * ctx.f23.f64 - ctx.f29.f64)));
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// fsel f11,f0,f29,f27
	ctx.f11.f64 = ctx.f0.f64 >= 0.0 ? ctx.f29.f64 : ctx.f27.f64;
	// fnmsubs f10,f12,f22,f29
	ctx.f10.f64 = double(float(-(ctx.f12.f64 * ctx.f22.f64 - ctx.f29.f64)));
	// fmsubs f9,f10,f13,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 - ctx.f13.f64));
	// fmuls f1,f9,f11
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// bl 0x826487b8
	ctx.lr = 0x82916854;
	sub_826487B8(ctx, base);
loc_82916854:
	// lwz r14,508(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
loc_82916858:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,16(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// lwz r3,1840(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1840);
	// bl 0x82a3dca8
	ctx.lr = 0x82916868;
	sub_82A3DCA8(ctx, base);
	// fcmpu cr6,f1,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// bne cr6,0x82916910
	if (!cr6.eq) goto loc_82916910;
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// eqv r9,r11,r31
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r31.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82916910
	if (cr6.eq) goto loc_82916910;
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x829168a4
	if (!cr6.lt) goto loc_829168A4;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x829168cc
	goto loc_829168CC;
loc_829168A4:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x829168b4
	if (!cr6.lt) goto loc_829168B4;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x829168cc
	goto loc_829168CC;
loc_829168B4:
	// li r10,22
	ctx.r10.s64 = 22;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r8,r10,r11
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r10,r6,31
	ctx.r10.u64 = ctx.r6.u32 & 0x1;
loc_829168CC:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge cr6,0x829168dc
	if (!cr6.lt) goto loc_829168DC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82916904
	goto loc_82916904;
loc_829168DC:
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// bge cr6,0x829168ec
	if (!cr6.lt) goto loc_829168EC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82916904
	goto loc_82916904;
loc_829168EC:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r9,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
	// eqv r8,r11,r31
	ctx.r8.u64 = ~(ctx.r11.u64 ^ ctx.r31.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
loc_82916904:
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// beq cr6,0x82916910
	if (cr6.eq) goto loc_82916910;
	// stb r16,0(r18)
	PPC_STORE_U8(ctx.r18.u32 + 0, ctx.r16.u8);
loc_82916910:
	// lfs f31,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f31.f64 = double(temp.f32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fsubs f0,f31,f30
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f7,f10,f1
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmuls f6,f9,f1
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fmuls f5,f8,f1
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fadds f26,f7,f26
	ctx.f26.f64 = double(float(ctx.f7.f64 + ctx.f26.f64));
	// fadds f25,f6,f25
	ctx.f25.f64 = double(float(ctx.f6.f64 + ctx.f25.f64));
	// fadds f24,f5,f24
	ctx.f24.f64 = double(float(ctx.f5.f64 + ctx.f24.f64));
loc_82916954:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lfs f13,-23432(r15)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + -23432);
	ctx.f13.f64 = double(temp.f32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r11,r10,24
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 24;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bne cr6,0x82916978
	if (!cr6.eq) goto loc_82916978;
	// fmuls f0,f13,f19
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f19.f64));
loc_82916978:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x82916988
	if (cr6.lt) goto loc_82916988;
	// add r10,r30,r25
	ctx.r10.u64 = ctx.r30.u64 + ctx.r25.u64;
	// stb r16,24(r10)
	PPC_STORE_U8(ctx.r10.u32 + 24, ctx.r16.u8);
loc_82916988:
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// beq cr6,0x82916994
	if (cr6.eq) goto loc_82916994;
	// fadds f31,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
loc_82916994:
	// fcmpu cr6,f31,f21
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f21.f64);
	// ble cr6,0x829169fc
	if (!cr6.gt) goto loc_829169FC;
	// stw r31,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
	// lfs f0,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,4(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 4, temp.u32);
	// stfs f13,8(r25)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r25.u32 + 8, temp.u32);
	// stfs f12,12(r25)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r25.u32 + 12, temp.u32);
	// stw r30,20(r25)
	PPC_STORE_U32(ctx.r25.u32 + 20, ctx.r30.u32);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// stfs f11,48(r25)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r25.u32 + 48, temp.u32);
	// stfs f10,52(r25)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r25.u32 + 52, temp.u32);
	// stfs f9,56(r25)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r25.u32 + 56, temp.u32);
	// stw r11,76(r25)
	PPC_STORE_U32(ctx.r25.u32 + 76, ctx.r11.u32);
	// stfs f31,44(r25)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r25.u32 + 44, temp.u32);
	// lwz r4,16(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// lwz r3,-3564(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x829169E8;
	sub_82A0C788(ctx, base);
	// lwz r11,-3564(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -3564);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// fmr f21,f31
	ctx.fpscr.disableFlushMode();
	ctx.f21.f64 = ctx.f31.f64;
	// lwz r10,4472(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4472);
	// stw r10,72(r25)
	PPC_STORE_U32(ctx.r25.u32 + 72, ctx.r10.u32);
loc_829169FC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r26
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, xer);
	// blt cr6,0x829164d8
	if (cr6.lt) goto loc_829164D8;
loc_82916A08:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// cmplw cr6,r21,r20
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r20.u32, xer);
	// blt cr6,0x829164ac
	if (cr6.lt) goto loc_829164AC;
loc_82916A14:
	// lwz r10,16(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82916a2c
	if (cr6.lt) goto loc_82916A2C;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// blt cr6,0x82916a30
	if (cr6.lt) goto loc_82916A30;
loc_82916A2C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82916A30:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82916be4
	if (cr6.eq) goto loc_82916BE4;
	// li r11,22
	ctx.r11.s64 = 22;
	// lwz r9,1840(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1840);
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r7,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r5,r8,r6
	temp.u8 = (~ctx.r8.u32 + ctx.r6.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r8.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r11,112(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// and r4,r5,r10
	ctx.r4.u64 = ctx.r5.u64 & ctx.r10.u64;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x82916a74
	if (!cr6.gt) goto loc_82916A74;
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82916be4
	if (!cr6.lt) goto loc_82916BE4;
loc_82916A74:
	// lwz r3,1836(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1836);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x827df9f0
	ctx.lr = 0x82916A80;
	sub_827DF9F0(ctx, base);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// li r26,60
	ctx.r26.s64 = 60;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw. r27,r8,r26
	ctx.r27.s32 = PPCDivide(ctx.r8.s32, ctx.r26.s32);
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// beq 0x82916be4
	if (cr0.eq) goto loc_82916BE4;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r28,1792
	ctx.r28.s64 = 117440512;
	// li r31,7
	ctx.r31.s64 = 7;
loc_82916AA8:
	// lwz r3,1836(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1836);
	// bl 0x827df9f0
	ctx.lr = 0x82916AB0;
	sub_827DF9F0(ctx, base);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r26
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r26.s32);
	// cmplw cr6,r7,r30
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, xer);
	// ble cr6,0x82916c50
	if (!cr6.gt) goto loc_82916C50;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,0,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r9,r28
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r28.s32, xer);
	// bne cr6,0x82916bd4
	if (!cr6.eq) goto loc_82916BD4;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// beq cr6,0x82916b04
	if (cr6.eq) goto loc_82916B04;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82916b04
	if (cr6.eq) goto loc_82916B04;
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// beq cr6,0x82916b04
	if (cr6.eq) goto loc_82916B04;
	// cmpwi cr6,r9,5
	cr6.compare<int32_t>(ctx.r9.s32, 5, xer);
	// bne cr6,0x82916bd4
	if (!cr6.eq) goto loc_82916BD4;
loc_82916B04:
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r10,r10,24
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 24;
	// cmpwi cr6,r10,7
	cr6.compare<int32_t>(ctx.r10.s32, 7, xer);
	// beq cr6,0x82916b2c
	if (cr6.eq) goto loc_82916B2C;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82916b2c
	if (cr6.eq) goto loc_82916B2C;
	// cmpwi cr6,r10,11
	cr6.compare<int32_t>(ctx.r10.s32, 11, xer);
	// beq cr6,0x82916b2c
	if (cr6.eq) goto loc_82916B2C;
	// cmpwi cr6,r10,15
	cr6.compare<int32_t>(ctx.r10.s32, 15, xer);
	// bne cr6,0x82916bd4
	if (!cr6.eq) goto loc_82916BD4;
loc_82916B2C:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// fcmpu cr6,f0,f28
	cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// blt cr6,0x82916b58
	if (cr6.lt) goto loc_82916B58;
	// stb r16,31(r25)
	PPC_STORE_U8(ctx.r25.u32 + 31, ctx.r16.u8);
loc_82916B58:
	// lfs f13,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-23432(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + -23432);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f31,f0,f19,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f19.f64 + ctx.f13.f64));
	// fcmpu cr6,f31,f21
	cr6.compare(ctx.f31.f64, ctx.f21.f64);
	// ble cr6,0x82916bd4
	if (!cr6.gt) goto loc_82916BD4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// stw r8,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r8.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,4(r25)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r25.u32 + 4, temp.u32);
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,8(r25)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r25.u32 + 8, temp.u32);
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,12(r25)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r25.u32 + 12, temp.u32);
	// stw r31,20(r25)
	PPC_STORE_U32(ctx.r25.u32 + 20, ctx.r31.u32);
	// stfs f0,48(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 48, temp.u32);
	// stfs f13,52(r25)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r25.u32 + 52, temp.u32);
	// stfs f12,56(r25)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r25.u32 + 56, temp.u32);
	// stw r31,76(r25)
	PPC_STORE_U32(ctx.r25.u32 + 76, ctx.r31.u32);
	// stfs f31,44(r25)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r25.u32 + 44, temp.u32);
	// lwz r4,16(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// lwz r3,-3564(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x82916BC0;
	sub_82A0C788(ctx, base);
	// lwz r11,-3564(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -3564);
	// lwz r7,292(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// fmr f21,f31
	ctx.fpscr.disableFlushMode();
	ctx.f21.f64 = ctx.f31.f64;
	// lwz r6,4472(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4472);
	// stw r6,72(r25)
	PPC_STORE_U32(ctx.r25.u32 + 72, ctx.r6.u32);
loc_82916BD4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,60
	ctx.r29.s64 = ctx.r29.s64 + 60;
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, xer);
	// blt cr6,0x82916aa8
	if (cr6.lt) goto loc_82916AA8;
loc_82916BE4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82916c38
	if (cr6.eq) goto loc_82916C38;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfs f0,0(r14)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r14)
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f10,8(r14)
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f8,f29,f9
	ctx.f8.f64 = double(float(ctx.f29.f64 / ctx.f9.f64));
	// fmuls f7,f26,f8
	ctx.f7.f64 = double(float(ctx.f26.f64 * ctx.f8.f64));
	// fmuls f6,f25,f8
	ctx.f6.f64 = double(float(ctx.f25.f64 * ctx.f8.f64));
	// fmuls f5,f24,f8
	ctx.f5.f64 = double(float(ctx.f24.f64 * ctx.f8.f64));
	// fadds f4,f0,f7
	ctx.f4.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// stfs f4,0(r14)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r14.u32 + 0, temp.u32);
	// fadds f3,f6,f13
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// stfs f3,4(r14)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r14.u32 + 4, temp.u32);
	// fadds f2,f5,f10
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// stfs f2,8(r14)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r14.u32 + 8, temp.u32);
loc_82916C38:
	// addic r11,r17,-1
	xer.ca = ctx.r17.u32 > 0;
	ctx.r11.s64 = ctx.r17.s64 + -1;
	// subfe r3,r11,r17
	temp.u8 = (~ctx.r11.u32 + ctx.r17.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r17.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r17.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce7a0
	ctx.lr = 0x82916C4C;
	__restfpr_19(ctx, base);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82916C50:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82916C5C;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82916C5C"))) PPC_WEAK_FUNC(sub_82916C5C);
PPC_FUNC_IMPL(__imp__sub_82916C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82916C60"))) PPC_WEAK_FUNC(sub_82916C60);
PPC_FUNC_IMPL(__imp__sub_82916C60) {
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
	ctx.lr = 0x82916C68;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1848(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1848);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82916c94
	if (!cr6.eq) goto loc_82916C94;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82916C94:
	// lbz r24,31(r25)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r25.u32 + 31);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r3,1836(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1836);
	// bl 0x837a7160
	ctx.lr = 0x82916CA4;
	sub_837A7160(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// beq cr6,0x82916cc0
	if (cr6.eq) goto loc_82916CC0;
	// addi r10,r11,27428
	ctx.r10.s64 = ctx.r11.s64 + 27428;
	// lfs f12,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// b 0x82916cc4
	goto loc_82916CC4;
loc_82916CC0:
	// lfs f12,27428(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27428);
	ctx.f12.f64 = double(temp.f32);
loc_82916CC4:
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r11,22
	ctx.r11.s64 = 22;
	// lis r8,-31778
	ctx.r8.s64 = -2082603008;
	// lwz r9,1840(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1840);
	// subfc r7,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r5,r10,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// subfe r3,r5,r6
	temp.u8 = (~ctx.r5.u32 + ctx.r6.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r5.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// lfs f0,-23432(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -23432);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,112(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// and r8,r3,r10
	ctx.r8.u64 = ctx.r3.u64 & ctx.r10.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,-10804(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -10804);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f31,f0,f13,f12
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// lfs f13,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f0,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82916dd4
	if (!cr6.gt) goto loc_82916DD4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82916dd4
	if (cr6.lt) goto loc_82916DD4;
	// lwz r3,1848(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1848);
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x82877c90
	ctx.lr = 0x82916D30;
	sub_82877C90(ctx, base);
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82916dc4
	if (cr6.eq) goto loc_82916DC4;
loc_82916D3C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,1848(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1848);
	// bl 0x82877d40
	ctx.lr = 0x82916D48;
	sub_82877D40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,1848(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1848);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82877d00
	ctx.lr = 0x82916D58;
	sub_82877D00(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82916db8
	if (cr6.eq) goto loc_82916DB8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82916D68:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r4,1848(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1848);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82877d08
	ctx.lr = 0x82916D7C;
	sub_82877D08(ctx, base);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829160d8
	ctx.lr = 0x82916D98;
	sub_829160D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82916dac
	if (cr6.eq) goto loc_82916DAC;
	// lfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f31.f64 = double(temp.f32);
	// li r23,1
	ctx.r23.s64 = 1;
loc_82916DAC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// blt cr6,0x82916d68
	if (cr6.lt) goto loc_82916D68;
loc_82916DB8:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, xer);
	// blt cr6,0x82916d3c
	if (cr6.lt) goto loc_82916D3C;
loc_82916DC4:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82916DD4:
	// lwz r3,1836(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1836);
	// bl 0x827df9f0
	ctx.lr = 0x82916DDC;
	sub_827DF9F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82916dc4
	if (cr6.eq) goto loc_82916DC4;
	// lwz r3,1836(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1836);
	// bl 0x827df9f0
	ctx.lr = 0x82916DEC;
	sub_827DF9F0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r26,60
	ctx.r26.s64 = 60;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// li r31,0
	ctx.r31.s64 = 0;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r27,r9,r26
	ctx.r27.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// ble 0x82916dc4
	if (!cr0.gt) goto loc_82916DC4;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82916E10:
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
	// ble cr6,0x82916ec4
	if (!cr6.gt) goto loc_82916EC4;
	// add r4,r28,r11
	ctx.r4.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x831ce980
	ctx.lr = 0x82916E38;
	sub_831CE980(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// addi r11,r3,-11
	ctx.r11.s64 = ctx.r3.s64 + -11;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x82916ea4
	if (cr6.gt) goto loc_82916EA4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82916e64
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82916E64;
	// bdzf 4*cr6+eq,0x82916ea4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82916EA4;
	// bdzf 4*cr6+eq,0x82916e64
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82916E64;
	// bne cr6,0x82916e64
	if (!cr6.eq) goto loc_82916E64;
loc_82916E64:
	// bl 0x83740b78
	ctx.lr = 0x82916E68;
	sub_83740B78(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// bl 0x829160d8
	ctx.lr = 0x82916E84;
	sub_829160D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82916ea4
	if (cr6.eq) goto loc_82916EA4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f31.f64 = double(temp.f32);
	// li r23,1
	ctx.r23.s64 = 1;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x83740b78
	ctx.lr = 0x82916EA4;
	sub_83740B78(ctx, base);
loc_82916EA4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,60
	ctx.r28.s64 = ctx.r28.s64 + 60;
	// cmpw cr6,r31,r27
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, xer);
	// blt cr6,0x82916e10
	if (cr6.lt) goto loc_82916E10;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82916EC4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82916ED0;
	sub_831CC188(ctx, base);
}

