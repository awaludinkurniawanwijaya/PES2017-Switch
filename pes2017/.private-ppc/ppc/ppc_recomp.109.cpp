#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82A57588"))) PPC_WEAK_FUNC(sub_82A57588);
PPC_FUNC_IMPL(__imp__sub_82A57588) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmpwi cr6,r4,25
	cr6.compare<int32_t>(ctx.r4.s32, 25, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lhz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// mulli r9,r4,248
	ctx.r9.s64 = ctx.r4.s64 * 248;
	// mulli r10,r8,6456
	ctx.r10.s64 = ctx.r8.s64 * 6456;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82a56bd0
	sub_82A56BD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A575BC"))) PPC_WEAK_FUNC(sub_82A575BC);
PPC_FUNC_IMPL(__imp__sub_82A575BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A575C0"))) PPC_WEAK_FUNC(sub_82A575C0);
PPC_FUNC_IMPL(__imp__sub_82A575C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A575C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a576c0
	if (cr6.eq) goto loc_82A576C0;
	// lis r31,-32254
	ctx.r31.s64 = -2113798144;
	// lfs f13,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lhz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// clrlwi r30,r10,24
	ctx.r30.u64 = ctx.r10.u32 & 0xFF;
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// mulli r10,r3,6456
	ctx.r10.s64 = ctx.r3.s64 * 6456;
	// lwz r3,236(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lbz r4,247(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 247);
	// lfs f0,20592(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20592);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addic r11,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// subfe r9,r11,r30
	temp.u8 = (~ctx.r11.u32 + ctx.r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r30.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r11.u64 + ctx.r30.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r31,6208
	ctx.r11.s64 = ctx.r31.s64 + 6208;
	// fctiwz f7,f10
	ctx.f7.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// fctiwz f6,f9
	ctx.f6.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f6.u64);
	// lhz r30,94(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// fctiwz f5,f8
	ctx.f5.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// lhz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// stfd f5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f5.u64);
	// lhz r29,94(r1)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// rlwimi r9,r10,1,24,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0xFE) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF01);
	// sth r29,6200(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6200, ctx.r29.u16);
	// sth r11,6202(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6202, ctx.r11.u16);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// sth r30,6204(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6204, ctx.r30.u16);
	// lbz r29,6224(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6224);
	// lbz r11,6226(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6226);
	// lbz r9,6225(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6225);
	// lbz r30,6240(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6240);
	// lwz r28,0(r5)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r28,6208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6208, ctx.r28.u32);
	// rlwimi r29,r6,4,20,27
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r6.u32, 4) & 0xFF0) | (ctx.r29.u64 & 0xFFFFFFFFFFFFF00F);
	// lwz r6,4(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r6,6212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6212, ctx.r6.u32);
	// rlwimi r11,r8,2,22,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 2) & 0x3FC) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFC03);
	// lwz r8,8(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// rlwimi r30,r3,0,29,31
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x7) | (ctx.r30.u64 & 0xFFFFFFFFFFFFFFF8);
	// rlwimi r9,r7,2,22,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 2) & 0x3FC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFC03);
	// stw r8,6216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6216, ctx.r8.u32);
	// lwz r6,12(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,6227(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6227, ctx.r10.u8);
	// stw r6,6220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6220, ctx.r6.u32);
	// stb r29,6224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6224, ctx.r29.u8);
	// stb r9,6225(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6225, ctx.r9.u8);
	// stb r11,6226(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6226, ctx.r11.u8);
	// stb r30,6240(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6240, ctx.r30.u8);
	// bl 0x82a58938
	ctx.lr = 0x82A576B4;
	sub_82A58938(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,228(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// bl 0x82a58950
	ctx.lr = 0x82A576C0;
	sub_82A58950(ctx, base);
loc_82A576C0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A576C8"))) PPC_WEAK_FUNC(sub_82A576C8);
PPC_FUNC_IMPL(__imp__sub_82A576C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82A576D0;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a5777c
	if (cr6.eq) goto loc_82A5777C;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bge cr6,0x82a5777c
	if (!cr6.lt) goto loc_82A5777C;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bgt cr6,0x82a5777c
	if (cr6.gt) goto loc_82A5777C;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82a57724
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A57724;
	// bdzf 4*cr6+eq,0x82a57724
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A57724;
	// bne cr6,0x82a57724
	if (!cr6.eq) goto loc_82A57724;
loc_82A57724:
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(ctx.r29.u32, 2, xer);
	// bge cr6,0x82a5777c
	if (!cr6.lt) goto loc_82A5777C;
	// lhz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// fmr f1,f3
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f3.f64;
	// mulli r10,r10,6456
	ctx.r10.s64 = ctx.r10.s64 * 6456;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a58a80
	ctx.lr = 0x82A57740;
	sub_82A58A80(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82a58a80
	ctx.lr = 0x82A5774C;
	sub_82A58A80(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a58a80
	ctx.lr = 0x82A57758;
	sub_82A58A80(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,6392
	ctx.r3.s64 = ctx.r31.s64 + 6392;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// bl 0x82a58df0
	ctx.lr = 0x82A5777C;
	sub_82A58DF0(ctx, base);
loc_82A5777C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A5778C"))) PPC_WEAK_FUNC(sub_82A5778C);
PPC_FUNC_IMPL(__imp__sub_82A5778C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A57790"))) PPC_WEAK_FUNC(sub_82A57790);
PPC_FUNC_IMPL(__imp__sub_82A57790) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lhz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// mulli r10,r8,6456
	ctx.r10.s64 = ctx.r8.s64 * 6456;
	// lfs f0,21588(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21588);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f2,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f12.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmpwi cr6,r10,255
	cr6.compare<int32_t>(ctx.r10.s32, 255, xer);
	// ble cr6,0x82a577d0
	if (!cr6.gt) goto loc_82A577D0;
	// li r8,255
	ctx.r8.s64 = 255;
	// b 0x82a577dc
	goto loc_82A577DC;
loc_82A577D0:
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
loc_82A577DC:
	// fmuls f0,f3,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmpwi cr6,r10,255
	cr6.compare<int32_t>(ctx.r10.s32, 255, xer);
	// ble cr6,0x82a577fc
	if (!cr6.gt) goto loc_82A577FC;
	// li r10,255
	ctx.r10.s64 = 255;
	// b 0x82a57808
	goto loc_82A57808;
loc_82A577FC:
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
loc_82A57808:
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r8,6256(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6256, ctx.r8.u8);
	// stb r10,6257(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6257, ctx.r10.u8);
	// lfs f13,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,20592(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20592);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f10,f12
	ctx.f10.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f10.u64);
	// lhz r4,-10(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// fmuls f9,f1,f0
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f7,f9
	ctx.f7.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f7.u64);
	// lhz r3,-10(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// fctiwz f6,f8
	ctx.f6.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// sth r3,6246(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6246, ctx.r3.u16);
	// stfd f6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f6.u64);
	// lhz r10,-10(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// sth r10,6242(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6242, ctx.r10.u16);
	// sth r4,6244(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6244, ctx.r4.u16);
	// lfs f5,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f1,f5,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fctiwz f2,f3
	ctx.f2.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f2,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f2.u64);
	// lhz r9,-10(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// sth r9,6250(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6250, ctx.r9.u16);
	// fctiwz f13,f1
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lhz r8,-10(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// sth r8,6248(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6248, ctx.r8.u16);
	// lfs f12,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f9.u64);
	// lhz r7,-10(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// sth r7,6252(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6252, ctx.r7.u16);
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f7.u64);
	// lhz r6,-10(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// sth r6,6254(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6254, ctx.r6.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A578C0"))) PPC_WEAK_FUNC(sub_82A578C0);
PPC_FUNC_IMPL(__imp__sub_82A578C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A578C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a57930
	if (!cr6.eq) goto loc_82A57930;
	// bl 0x82a585e8
	ctx.lr = 0x82A578E0;
	sub_82A585E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83935df8
	ctx.lr = 0x82A578E8;
	sub_83935DF8(ctx, base);
	// addi r31,r30,24
	ctx.r31.s64 = ctx.r30.s64 + 24;
	// mulli r11,r3,60
	ctx.r11.s64 = ctx.r3.s64 * 60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r28,r11,16
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82a582c0
	ctx.lr = 0x82A578FC;
	sub_82A582C0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a57a10
	ctx.lr = 0x82A57908;
	sub_82A57A10(ctx, base);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A57928;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,80(r30)
	PPC_STORE_U8(ctx.r30.u32 + 80, ctx.r8.u8);
loc_82A57930:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A57938"))) PPC_WEAK_FUNC(sub_82A57938);
PPC_FUNC_IMPL(__imp__sub_82A57938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,-13036
	ctx.r10.s64 = ctx.r11.s64 + -13036;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A57948"))) PPC_WEAK_FUNC(sub_82A57948);
PPC_FUNC_IMPL(__imp__sub_82A57948) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a57998
	if (!cr6.eq) goto loc_82A57998;
	// bl 0x82a585e8
	ctx.lr = 0x82A57974;
	sub_82A585E8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// rotlwi r4,r30,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A57988;
	sub_82595718(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a5799c
	if (cr6.eq) goto loc_82A5799C;
	// std r30,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r30.u64);
loc_82A57998:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82A5799C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A579B4"))) PPC_WEAK_FUNC(sub_82A579B4);
PPC_FUNC_IMPL(__imp__sub_82A579B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A579B8"))) PPC_WEAK_FUNC(sub_82A579B8);
PPC_FUNC_IMPL(__imp__sub_82A579B8) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-13036
	ctx.r9.s64 = ctx.r11.s64 + -13036;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82a579f8
	if (cr6.eq) goto loc_82A579F8;
	// bl 0x82595188
	ctx.lr = 0x82A579E8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82A579F8;
	sub_825952B8(ctx, base);
loc_82A579F8:
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

__attribute__((alias("__imp__sub_82A57A10"))) PPC_WEAK_FUNC(sub_82A57A10);
PPC_FUNC_IMPL(__imp__sub_82A57A10) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// divw r8,r9,r9
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r9.s32);
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// std r11,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r11.u64);
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// sth r4,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r4.u16);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// andc r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r5.u64;
	// sth r6,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r6.u16);
	// twllei r9,0
	// twlgei r10,-1
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A57A5C"))) PPC_WEAK_FUNC(sub_82A57A5C);
PPC_FUNC_IMPL(__imp__sub_82A57A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A57A60"))) PPC_WEAK_FUNC(sub_82A57A60);
PPC_FUNC_IMPL(__imp__sub_82A57A60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a57b18
	if (cr6.eq) goto loc_82A57B18;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A57A98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a57ab8
	if (cr6.eq) goto loc_82A57AB8;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A57AB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82A57AB8:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A57ACC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwsync 
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
loc_82A57ADC:
	// mfmsr r5
	ctx.r5.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwcx. r6,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r6.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a57adc
	if (!cr0.eq) goto loc_82A57ADC;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82a57b14
	if (!cr6.eq) goto loc_82A57B14;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A57B14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82A57B14:
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_82A57B18:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a57b3c
	if (cr6.eq) goto loc_82A57B3C;
	// bl 0x82a585e8
	ctx.lr = 0x82A57B28;
	sub_82A585E8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x825952b8
	ctx.lr = 0x82A57B38;
	sub_825952B8(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_82A57B3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A57B54"))) PPC_WEAK_FUNC(sub_82A57B54);
PPC_FUNC_IMPL(__imp__sub_82A57B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A57B58"))) PPC_WEAK_FUNC(sub_82A57B58);
PPC_FUNC_IMPL(__imp__sub_82A57B58) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a57b84
	if (cr6.eq) goto loc_82A57B84;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82a57c5c
	goto loc_82A57C5C;
loc_82A57B84:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a57bb0
	if (cr6.eq) goto loc_82A57BB0;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// sth r10,94(r11)
	PPC_STORE_U16(ctx.r11.u32 + 94, ctx.r10.u16);
	// lhz r9,14(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// sth r9,96(r11)
	PPC_STORE_U16(ctx.r11.u32 + 96, ctx.r9.u16);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r7,100(r8)
	PPC_STORE_U32(ctx.r8.u32 + 100, ctx.r7.u32);
loc_82A57BB0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82a57bc4
	if (!cr6.eq) goto loc_82A57BC4;
loc_82A57BBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a57c5c
	goto loc_82A57C5C;
loc_82A57BC4:
	// lhz r10,14(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// sth r10,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
	// bne cr6,0x82a57bec
	if (!cr6.eq) goto loc_82A57BEC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// ori r30,r11,65535
	ctx.r30.u64 = ctx.r11.u64 | 65535;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// b 0x82a57bf8
	goto loc_82A57BF8;
loc_82A57BEC:
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r30,r10,65535
	ctx.r30.u64 = ctx.r10.u64 | 65535;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82A57BF8:
	// sth r9,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A57C14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a57bbc
	if (cr6.eq) goto loc_82A57BBC;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a57c3c
	if (!cr6.eq) goto loc_82A57C3C;
	// lhz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// sth r9,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// b 0x82a57c44
	goto loc_82A57C44;
loc_82A57C3C:
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
loc_82A57C44:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A57C5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82A57C5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A57C74"))) PPC_WEAK_FUNC(sub_82A57C74);
PPC_FUNC_IMPL(__imp__sub_82A57C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A57C78"))) PPC_WEAK_FUNC(sub_82A57C78);
PPC_FUNC_IMPL(__imp__sub_82A57C78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a57ca4
	if (cr6.eq) goto loc_82A57CA4;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lhz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// sth r10,94(r11)
	PPC_STORE_U16(ctx.r11.u32 + 94, ctx.r10.u16);
	// lhz r9,14(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// sth r9,96(r11)
	PPC_STORE_U16(ctx.r11.u32 + 96, ctx.r9.u16);
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r7,100(r8)
	PPC_STORE_U32(ctx.r8.u32 + 100, ctx.r7.u32);
loc_82A57CA4:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82a57cb8
	if (!cr6.eq) goto loc_82A57CB8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A57CB8:
	// b 0x82a57b58
	sub_82A57B58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A57CBC"))) PPC_WEAK_FUNC(sub_82A57CBC);
PPC_FUNC_IMPL(__imp__sub_82A57CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A57CC0"))) PPC_WEAK_FUNC(sub_82A57CC0);
PPC_FUNC_IMPL(__imp__sub_82A57CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A57CC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a57cfc
	if (cr6.eq) goto loc_82A57CFC;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lhz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// sth r10,94(r11)
	PPC_STORE_U16(ctx.r11.u32 + 94, ctx.r10.u16);
	// lhz r9,14(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// sth r9,96(r11)
	PPC_STORE_U16(ctx.r11.u32 + 96, ctx.r9.u16);
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r7,100(r8)
	PPC_STORE_U32(ctx.r8.u32 + 100, ctx.r7.u32);
loc_82A57CFC:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82a57d14
	if (!cr6.eq) goto loc_82A57D14;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A57D14:
	// lhz r10,14(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 14);
	// li r31,0
	ctx.r31.s64 = 0;
	// lhz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// sth r10,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
	// bne cr6,0x82a57d40
	if (!cr6.eq) goto loc_82A57D40;
	// lis r11,0
	ctx.r11.s64 = 0;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// ori r30,r11,65535
	ctx.r30.u64 = ctx.r11.u64 | 65535;
	// add r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 + ctx.r30.u64;
	// b 0x82a57d4c
	goto loc_82A57D4C;
loc_82A57D40:
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r30,r9,65535
	ctx.r30.u64 = ctx.r9.u64 | 65535;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82A57D4C:
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r8,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a57dc8
	if (cr6.eq) goto loc_82A57DC8;
loc_82A57D5C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A57D74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a57dc8
	if (cr6.eq) goto loc_82A57DC8;
	// clrlwi r10,r31,16
	ctx.r10.u64 = ctx.r31.u32 & 0xFFFF;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// clrlwi r31,r10,16
	ctx.r31.u64 = ctx.r10.u32 & 0xFFFF;
	// bne cr6,0x82a57db0
	if (!cr6.eq) goto loc_82A57DB0;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r8,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// b 0x82a57db8
	goto loc_82A57DB8;
loc_82A57DB0:
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
loc_82A57DB8:
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// clrlwi r10,r31,16
	ctx.r10.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x82a57d5c
	if (cr6.lt) goto loc_82A57D5C;
loc_82A57DC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A57DD4"))) PPC_WEAK_FUNC(sub_82A57DD4);
PPC_FUNC_IMPL(__imp__sub_82A57DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A57DD8"))) PPC_WEAK_FUNC(sub_82A57DD8);
PPC_FUNC_IMPL(__imp__sub_82A57DD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A57DE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,14(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// divw r8,r9,r11
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r11.s32);
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// clrlwi r29,r6,16
	ctx.r29.u64 = ctx.r6.u32 & 0xFFFF;
	// andc r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 & ~ctx.r5.u64;
	// sth r29,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r29.u16);
	// twllei r11,0
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// twlgei r4,-1
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a57e50
	if (cr6.eq) goto loc_82A57E50;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lhz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// sth r10,94(r11)
	PPC_STORE_U16(ctx.r11.u32 + 94, ctx.r10.u16);
	// lhz r9,14(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// sth r9,96(r11)
	PPC_STORE_U16(ctx.r11.u32 + 96, ctx.r9.u16);
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r7,100(r8)
	PPC_STORE_U32(ctx.r8.u32 + 100, ctx.r7.u32);
loc_82A57E50:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a57ee4
	if (cr6.eq) goto loc_82A57EE4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A57E74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a57ee4
	if (!cr6.eq) goto loc_82A57EE4;
	// clrlwi r29,r29,16
	ctx.r29.u64 = ctx.r29.u32 & 0xFFFF;
loc_82A57E84:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lhz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// twllei r10,0
	// divw r8,r9,r10
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r10.s32);
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mullw r6,r8,r10
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// subf r5,r6,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r6.s64;
	// andc r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 & ~ctx.r7.u64;
	// clrlwi r3,r5,16
	ctx.r3.u64 = ctx.r5.u32 & 0xFFFF;
	// twlgei r4,-1
	// sth r3,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r3.u16);
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, xer);
	// beq cr6,0x82a57ee4
	if (cr6.eq) goto loc_82A57EE4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A57ED8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a57e84
	if (cr6.eq) goto loc_82A57E84;
loc_82A57EE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A57EF0"))) PPC_WEAK_FUNC(sub_82A57EF0);
PPC_FUNC_IMPL(__imp__sub_82A57EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A57EF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,14(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// lis r9,0
	ctx.r9.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// ori r28,r9,65535
	ctx.r28.u64 = ctx.r9.u64 | 65535;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x82a57f2c
	if (cr6.lt) goto loc_82A57F2C;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// add r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 + ctx.r28.u64;
	// clrlwi r5,r9,16
	ctx.r5.u64 = ctx.r9.u32 & 0xFFFF;
loc_82A57F2C:
	// sth r11,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r11.u16);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// twllei r11,0
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// divw r8,r9,r11
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r11.s32);
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// clrlwi r29,r6,16
	ctx.r29.u64 = ctx.r6.u32 & 0xFFFF;
	// andc r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 & ~ctx.r5.u64;
	// sth r29,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r29.u16);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// twlgei r4,-1
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a57f90
	if (cr6.eq) goto loc_82A57F90;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lhz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// sth r10,94(r11)
	PPC_STORE_U16(ctx.r11.u32 + 94, ctx.r10.u16);
	// lhz r9,14(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// sth r9,96(r11)
	PPC_STORE_U16(ctx.r11.u32 + 96, ctx.r9.u16);
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r7,100(r8)
	PPC_STORE_U32(ctx.r8.u32 + 100, ctx.r7.u32);
loc_82A57F90:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a58018
	if (cr6.eq) goto loc_82A58018;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A57FB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a58018
	if (!cr6.eq) goto loc_82A58018;
	// clrlwi r29,r29,16
	ctx.r29.u64 = ctx.r29.u32 & 0xFFFF;
loc_82A57FC4:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a57fe0
	if (!cr6.eq) goto loc_82A57FE0;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
	// b 0x82a57fe8
	goto loc_82A57FE8;
loc_82A57FE0:
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
loc_82A57FE8:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// beq cr6,0x82a58018
	if (cr6.eq) goto loc_82A58018;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A5800C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a57fc4
	if (cr6.eq) goto loc_82A57FC4;
loc_82A58018:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A58024"))) PPC_WEAK_FUNC(sub_82A58024);
PPC_FUNC_IMPL(__imp__sub_82A58024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A58028"))) PPC_WEAK_FUNC(sub_82A58028);
PPC_FUNC_IMPL(__imp__sub_82A58028) {
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
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a58124
	if (cr6.eq) goto loc_82A58124;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A58060;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a58110
	if (!cr6.eq) goto loc_82A58110;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A58080;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82a580fc
	if (!cr6.eq) goto loc_82A580FC;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A5809C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrldi r30,r3,32
	ctx.r30.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// cmpldi cr6,r30,0
	cr6.compare<uint64_t>(ctx.r30.u64, 0, xer);
	// ble cr6,0x82a580fc
	if (!cr6.gt) goto loc_82A580FC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A580BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a57948
	ctx.lr = 0x82A580C8;
	sub_82A57948(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a580fc
	if (cr6.eq) goto loc_82A580FC;
	// std r30,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r30.u64);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A580EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rotlwi r5,r30,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x831ce980
	ctx.lr = 0x82A580FC;
	sub_831CE980(ctx, base);
loc_82A580FC:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x83b4b558
	ctx.lr = 0x82A58104;
	sub_83B4B558(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_82A58110:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
loc_82A58124:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5813C"))) PPC_WEAK_FUNC(sub_82A5813C);
PPC_FUNC_IMPL(__imp__sub_82A5813C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A58140"))) PPC_WEAK_FUNC(sub_82A58140);
PPC_FUNC_IMPL(__imp__sub_82A58140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A58148;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82a58164
	if (!cr6.eq) goto loc_82A58164;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A58164:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A5817C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a581ec
	if (!cr6.eq) goto loc_82A581EC;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A5819C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82a581dc
	if (!cr6.eq) goto loc_82A581DC;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A581B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a581dc
	if (cr6.eq) goto loc_82A581DC;
	// bl 0x82a585e8
	ctx.lr = 0x82A581C4;
	sub_82A585E8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x825952b8
	ctx.lr = 0x82A581D4;
	sub_825952B8(ctx, base);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// std r29,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r29.u64);
loc_82A581DC:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x83b4b558
	ctx.lr = 0x82A581E4;
	sub_83B4B558(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
loc_82A581EC:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A58208"))) PPC_WEAK_FUNC(sub_82A58208);
PPC_FUNC_IMPL(__imp__sub_82A58208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A58210;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-13036
	ctx.r10.s64 = ctx.r11.s64 + -13036;
	// addi r29,r3,12
	ctx.r29.s64 = ctx.r3.s64 + 12;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83935df8
	ctx.lr = 0x82A5822C;
	sub_83935DF8(ctx, base);
	// mulli r9,r3,60
	ctx.r9.s64 = ctx.r3.s64 * 60;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// li r30,0
	ctx.r30.s64 = 0;
	// divw r7,r8,r8
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r8.s32);
	// sth r8,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r8.u16);
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// mullw r6,r7,r8
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// subf r5,r6,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r6.s64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// sth r5,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r5.u16);
	// twllei r8,0
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// andc r11,r8,r4
	ctx.r11.u64 = ctx.r8.u64 & ~ctx.r4.u64;
	// twlgei r11,-1
	// bl 0x83935df8
	ctx.lr = 0x82A58268;
	sub_83935DF8(ctx, base);
	// mulli r10,r3,60
	ctx.r10.s64 = ctx.r3.s64 * 60;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// std r30,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r30.u64);
	// stb r30,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r30.u8);
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// divw r8,r9,r9
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r9.s32);
	// sth r9,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r9.u16);
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// andc r3,r9,r5
	ctx.r3.u64 = ctx.r9.u64 & ~ctx.r5.u64;
	// sth r6,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r6.u16);
	// twllei r9,0
	// twlgei r3,-1
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A582BC"))) PPC_WEAK_FUNC(sub_82A582BC);
PPC_FUNC_IMPL(__imp__sub_82A582BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A582C0"))) PPC_WEAK_FUNC(sub_82A582C0);
PPC_FUNC_IMPL(__imp__sub_82A582C0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a57a60
	ctx.lr = 0x82A582D8;
	sub_82A57A60(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A582EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A58300;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_82A58314"))) PPC_WEAK_FUNC(sub_82A58314);
PPC_FUNC_IMPL(__imp__sub_82A58314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A58318"))) PPC_WEAK_FUNC(sub_82A58318);
PPC_FUNC_IMPL(__imp__sub_82A58318) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a57a60
	ctx.lr = 0x82A58330;
	sub_82A57A60(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A58344;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A58358;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lhz r5,14(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// rotlwi r11,r7,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// divw r4,r7,r5
	ctx.r4.s32 = PPCDivide(ctx.r7.s32, ctx.r5.s32);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// mullw r11,r4,r5
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// andc r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 & ~ctx.r6.u64;
	// subf r10,r11,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r11.s64;
	// twllei r5,0
	// twlgei r3,-1
	// sth r10,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r10.u16);
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

__attribute__((alias("__imp__sub_82A58398"))) PPC_WEAK_FUNC(sub_82A58398);
PPC_FUNC_IMPL(__imp__sub_82A58398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A583A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a583d8
	if (cr6.eq) goto loc_82A583D8;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lhz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// sth r10,94(r11)
	PPC_STORE_U16(ctx.r11.u32 + 94, ctx.r10.u16);
	// lhz r9,14(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// sth r9,96(r11)
	PPC_STORE_U16(ctx.r11.u32 + 96, ctx.r9.u16);
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r7,100(r8)
	PPC_STORE_U32(ctx.r8.u32 + 100, ctx.r7.u32);
loc_82A583D8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a58494
	if (!cr6.eq) goto loc_82A58494;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82a58494
	if (cr6.eq) goto loc_82A58494;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,14(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A58408;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrldi r4,r3,32
	ctx.r4.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835265a8
	ctx.lr = 0x82A58424;
	sub_835265A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// bne cr6,0x82a5843c
	if (!cr6.eq) goto loc_82A5843C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A5843C:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a58494
	if (!cr6.eq) goto loc_82A58494;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A58458;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a5848c
	if (cr6.eq) goto loc_82A5848C;
loc_82A58464:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x832d22b8
	ctx.lr = 0x82A5846C;
	sub_832D22B8(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A58480;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a58464
	if (!cr6.eq) goto loc_82A58464;
loc_82A5848C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a58028
	ctx.lr = 0x82A58494;
	sub_82A58028(ctx, base);
loc_82A58494:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A584A0"))) PPC_WEAK_FUNC(sub_82A584A0);
PPC_FUNC_IMPL(__imp__sub_82A584A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A584A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a584e0
	if (cr6.eq) goto loc_82A584E0;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lhz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// sth r10,94(r11)
	PPC_STORE_U16(ctx.r11.u32 + 94, ctx.r10.u16);
	// lhz r9,14(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// sth r9,96(r11)
	PPC_STORE_U16(ctx.r11.u32 + 96, ctx.r9.u16);
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r7,100(r8)
	PPC_STORE_U32(ctx.r8.u32 + 100, ctx.r7.u32);
loc_82A584E0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82a585c0
	if (!cr6.eq) goto loc_82A585C0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a585cc
	if (cr6.eq) goto loc_82A585CC;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r30,14(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// bl 0x82a585e8
	ctx.lr = 0x82A58504;
	sub_82A585E8(ctx, base);
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A58520;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a585cc
	if (cr6.eq) goto loc_82A585CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A58544;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// ld r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x83526708
	ctx.lr = 0x82A58564;
	sub_83526708(ctx, base);
	// clrlwi r8,r28,24
	ctx.r8.u64 = ctx.r28.u32 & 0xFF;
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82a585c0
	if (!cr6.eq) goto loc_82A585C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A58584;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a585b8
	if (cr6.eq) goto loc_82A585B8;
loc_82A58590:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x832d22b8
	ctx.lr = 0x82A58598;
	sub_832D22B8(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A585AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a58590
	if (!cr6.eq) goto loc_82A58590;
loc_82A585B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a58140
	ctx.lr = 0x82A585C0;
	sub_82A58140(ctx, base);
loc_82A585C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82A585CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A585D8"))) PPC_WEAK_FUNC(sub_82A585D8);
PPC_FUNC_IMPL(__imp__sub_82A585D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// stw r3,18552(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18552, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A585E4"))) PPC_WEAK_FUNC(sub_82A585E4);
PPC_FUNC_IMPL(__imp__sub_82A585E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A585E8"))) PPC_WEAK_FUNC(sub_82A585E8);
PPC_FUNC_IMPL(__imp__sub_82A585E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// lwz r3,18552(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18552);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A585F4"))) PPC_WEAK_FUNC(sub_82A585F4);
PPC_FUNC_IMPL(__imp__sub_82A585F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A585F8"))) PPC_WEAK_FUNC(sub_82A585F8);
PPC_FUNC_IMPL(__imp__sub_82A585F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// li r9,25
	ctx.r9.s64 = 25;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// addi r11,r3,296
	ctx.r11.s64 = ctx.r3.s64 + 296;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfs f0,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
loc_82A58618:
	// stfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfsu f0,12(r10)
	ea = 12 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfsu f13,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a58618
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A58618;
	// stfs f0,700(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 700, temp.u32);
	// stfs f0,704(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 704, temp.u32);
	// stfs f0,708(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 708, temp.u32);
	// stfs f0,720(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 720, temp.u32);
	// stfs f0,716(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 716, temp.u32);
	// stfs f0,712(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 712, temp.u32);
	// stfs f13,724(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 724, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A58658"))) PPC_WEAK_FUNC(sub_82A58658);
PPC_FUNC_IMPL(__imp__sub_82A58658) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,39
	cr6.compare<uint32_t>(ctx.r11.u32, 39, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,72
	ctx.r5.s64 = 72;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,5060
	ctx.r3.s64 = ctx.r11.s64 + 5060;
	// b 0x831ce980
	sub_831CE980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A58684"))) PPC_WEAK_FUNC(sub_82A58684);
PPC_FUNC_IMPL(__imp__sub_82A58684) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A58688"))) PPC_WEAK_FUNC(sub_82A58688);
PPC_FUNC_IMPL(__imp__sub_82A58688) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,218(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 218);
	// rlwimi r11,r4,5,0,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 5) & 0xFFFFFFE0) | (ctx.r11.u64 & 0xFFFFFFFF0000001F);
	// stb r11,218(r3)
	PPC_STORE_U8(ctx.r3.u32 + 218, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A58698"))) PPC_WEAK_FUNC(sub_82A58698);
PPC_FUNC_IMPL(__imp__sub_82A58698) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,218(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 218);
	// rlwimi r11,r4,2,27,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 2) & 0x1C) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE3);
	// stb r11,218(r3)
	PPC_STORE_U8(ctx.r3.u32 + 218, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A586A8"))) PPC_WEAK_FUNC(sub_82A586A8);
PPC_FUNC_IMPL(__imp__sub_82A586A8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,218(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 218);
	// rlwimi r11,r4,0,30,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFC);
	// stb r11,218(r3)
	PPC_STORE_U8(ctx.r3.u32 + 218, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A586B8"))) PPC_WEAK_FUNC(sub_82A586B8);
PPC_FUNC_IMPL(__imp__sub_82A586B8) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lhz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// sth r11,224(r3)
	PPC_STORE_U16(ctx.r3.u32 + 224, ctx.r11.u16);
	// sth r10,222(r3)
	PPC_STORE_U16(ctx.r3.u32 + 222, ctx.r10.u16);
	// sth r9,220(r3)
	PPC_STORE_U16(ctx.r3.u32 + 220, ctx.r9.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A586D4"))) PPC_WEAK_FUNC(sub_82A586D4);
PPC_FUNC_IMPL(__imp__sub_82A586D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A586D8"))) PPC_WEAK_FUNC(sub_82A586D8);
PPC_FUNC_IMPL(__imp__sub_82A586D8) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lhz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// sth r11,230(r3)
	PPC_STORE_U16(ctx.r3.u32 + 230, ctx.r11.u16);
	// sth r10,228(r3)
	PPC_STORE_U16(ctx.r3.u32 + 228, ctx.r10.u16);
	// sth r9,226(r3)
	PPC_STORE_U16(ctx.r3.u32 + 226, ctx.r9.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A586F4"))) PPC_WEAK_FUNC(sub_82A586F4);
PPC_FUNC_IMPL(__imp__sub_82A586F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A586F8"))) PPC_WEAK_FUNC(sub_82A586F8);
PPC_FUNC_IMPL(__imp__sub_82A586F8) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lhz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// sth r11,236(r3)
	PPC_STORE_U16(ctx.r3.u32 + 236, ctx.r11.u16);
	// sth r10,234(r3)
	PPC_STORE_U16(ctx.r3.u32 + 234, ctx.r10.u16);
	// sth r9,232(r3)
	PPC_STORE_U16(ctx.r3.u32 + 232, ctx.r9.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A58714"))) PPC_WEAK_FUNC(sub_82A58714);
PPC_FUNC_IMPL(__imp__sub_82A58714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A58718"))) PPC_WEAK_FUNC(sub_82A58718);
PPC_FUNC_IMPL(__imp__sub_82A58718) {
	PPC_FUNC_PROLOGUE();
	// stb r4,219(r3)
	PPC_STORE_U8(ctx.r3.u32 + 219, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A58720"))) PPC_WEAK_FUNC(sub_82A58720);
PPC_FUNC_IMPL(__imp__sub_82A58720) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,244(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 244);
	// rlwimi r11,r4,7,17,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 7) & 0x7F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFF807F);
	// stb r11,244(r3)
	PPC_STORE_U8(ctx.r3.u32 + 244, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A58730"))) PPC_WEAK_FUNC(sub_82A58730);
PPC_FUNC_IMPL(__imp__sub_82A58730) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,244(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 244);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// rlwimi r11,r10,6,25,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0x40) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFBF);
	// stb r11,244(r3)
	PPC_STORE_U8(ctx.r3.u32 + 244, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A58744"))) PPC_WEAK_FUNC(sub_82A58744);
PPC_FUNC_IMPL(__imp__sub_82A58744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A58748"))) PPC_WEAK_FUNC(sub_82A58748);
PPC_FUNC_IMPL(__imp__sub_82A58748) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,244(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 244);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// rlwimi r11,r10,5,26,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 5) & 0x20) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFDF);
	// stb r11,244(r3)
	PPC_STORE_U8(ctx.r3.u32 + 244, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5875C"))) PPC_WEAK_FUNC(sub_82A5875C);
PPC_FUNC_IMPL(__imp__sub_82A5875C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A58760"))) PPC_WEAK_FUNC(sub_82A58760);
PPC_FUNC_IMPL(__imp__sub_82A58760) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,244(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 244);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// rlwimi r11,r10,4,27,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 4) & 0x10) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFEF);
	// stb r11,244(r3)
	PPC_STORE_U8(ctx.r3.u32 + 244, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A58774"))) PPC_WEAK_FUNC(sub_82A58774);
PPC_FUNC_IMPL(__imp__sub_82A58774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A58778"))) PPC_WEAK_FUNC(sub_82A58778);
PPC_FUNC_IMPL(__imp__sub_82A58778) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,25
	cr6.compare<int32_t>(ctx.r4.s32, 25, xer);
	// bge cr6,0x82a587b8
	if (!cr6.lt) goto loc_82A587B8;
	// mulli r11,r4,248
	ctx.r11.s64 = ctx.r4.s64 * 248;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r11,218(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 218);
	// rlwinm r10,r11,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a587b0
	if (!cr6.eq) goto loc_82A587B0;
	// rlwinm r10,r11,0,27,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a587b0
	if (!cr6.eq) goto loc_82A587B0;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a587b8
	if (cr6.eq) goto loc_82A587B8;
loc_82A587B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82A587B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A587C0"))) PPC_WEAK_FUNC(sub_82A587C0);
PPC_FUNC_IMPL(__imp__sub_82A587C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r4,25
	cr6.compare<int32_t>(ctx.r4.s32, 25, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r10,r4,248
	ctx.r10.s64 = ctx.r4.s64 * 248;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,218(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 218);
	// rlwinm r3,r10,27,5,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A587E4"))) PPC_WEAK_FUNC(sub_82A587E4);
PPC_FUNC_IMPL(__imp__sub_82A587E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A587E8"))) PPC_WEAK_FUNC(sub_82A587E8);
PPC_FUNC_IMPL(__imp__sub_82A587E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r4,25
	cr6.compare<int32_t>(ctx.r4.s32, 25, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r10,r4,248
	ctx.r10.s64 = ctx.r4.s64 * 248;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,218(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 218);
	// rlwinm r3,r10,30,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5880C"))) PPC_WEAK_FUNC(sub_82A5880C);
PPC_FUNC_IMPL(__imp__sub_82A5880C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A58810"))) PPC_WEAK_FUNC(sub_82A58810);
PPC_FUNC_IMPL(__imp__sub_82A58810) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r4,25
	cr6.compare<int32_t>(ctx.r4.s32, 25, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r10,r4,248
	ctx.r10.s64 = ctx.r4.s64 * 248;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,218(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 218);
	// clrlwi r3,r10,30
	ctx.r3.u64 = ctx.r10.u32 & 0x3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A58834"))) PPC_WEAK_FUNC(sub_82A58834);
PPC_FUNC_IMPL(__imp__sub_82A58834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A58838"))) PPC_WEAK_FUNC(sub_82A58838);
PPC_FUNC_IMPL(__imp__sub_82A58838) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,25
	cr6.compare<int32_t>(ctx.r4.s32, 25, xer);
	// bge cr6,0x82a58850
	if (!cr6.lt) goto loc_82A58850;
	// mulli r11,r4,248
	ctx.r11.s64 = ctx.r4.s64 * 248;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,220
	ctx.r3.s64 = ctx.r11.s64 + 220;
	// blr 
	return;
loc_82A58850:
	// addi r3,r3,220
	ctx.r3.s64 = ctx.r3.s64 + 220;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A58858"))) PPC_WEAK_FUNC(sub_82A58858);
PPC_FUNC_IMPL(__imp__sub_82A58858) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,25
	cr6.compare<int32_t>(ctx.r4.s32, 25, xer);
	// bge cr6,0x82a58870
	if (!cr6.lt) goto loc_82A58870;
	// mulli r11,r4,248
	ctx.r11.s64 = ctx.r4.s64 * 248;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,226
	ctx.r3.s64 = ctx.r11.s64 + 226;
	// blr 
	return;
loc_82A58870:
	// addi r3,r3,226
	ctx.r3.s64 = ctx.r3.s64 + 226;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A58878"))) PPC_WEAK_FUNC(sub_82A58878);
PPC_FUNC_IMPL(__imp__sub_82A58878) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,25
	cr6.compare<int32_t>(ctx.r4.s32, 25, xer);
	// bge cr6,0x82a58890
	if (!cr6.lt) goto loc_82A58890;
	// mulli r11,r4,248
	ctx.r11.s64 = ctx.r4.s64 * 248;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// blr 
	return;
loc_82A58890:
	// addi r3,r3,232
	ctx.r3.s64 = ctx.r3.s64 + 232;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A58898"))) PPC_WEAK_FUNC(sub_82A58898);
PPC_FUNC_IMPL(__imp__sub_82A58898) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r4,25
	cr6.compare<int32_t>(ctx.r4.s32, 25, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r10,r4,248
	ctx.r10.s64 = ctx.r4.s64 * 248;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r3,219(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 219);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A588B8"))) PPC_WEAK_FUNC(sub_82A588B8);
PPC_FUNC_IMPL(__imp__sub_82A588B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r4,25
	cr6.compare<int32_t>(ctx.r4.s32, 25, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r10,r4,248
	ctx.r10.s64 = ctx.r4.s64 * 248;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,244(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 244);
	// rlwinm r3,r10,26,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A588DC"))) PPC_WEAK_FUNC(sub_82A588DC);
PPC_FUNC_IMPL(__imp__sub_82A588DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A588E0"))) PPC_WEAK_FUNC(sub_82A588E0);
PPC_FUNC_IMPL(__imp__sub_82A588E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r4,25
	cr6.compare<int32_t>(ctx.r4.s32, 25, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r10,r4,248
	ctx.r10.s64 = ctx.r4.s64 * 248;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,244(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 244);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A58904"))) PPC_WEAK_FUNC(sub_82A58904);
PPC_FUNC_IMPL(__imp__sub_82A58904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A58908"))) PPC_WEAK_FUNC(sub_82A58908);
PPC_FUNC_IMPL(__imp__sub_82A58908) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r4,25
	cr6.compare<int32_t>(ctx.r4.s32, 25, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r10,r4,248
	ctx.r10.s64 = ctx.r4.s64 * 248;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,244(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 244);
	// rlwinm r3,r10,28,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5892C"))) PPC_WEAK_FUNC(sub_82A5892C);
PPC_FUNC_IMPL(__imp__sub_82A5892C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A58930"))) PPC_WEAK_FUNC(sub_82A58930);
PPC_FUNC_IMPL(__imp__sub_82A58930) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,6229(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6229);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A58938"))) PPC_WEAK_FUNC(sub_82A58938);
PPC_FUNC_IMPL(__imp__sub_82A58938) {
	PPC_FUNC_PROLOGUE();
	// stb r4,6229(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6229, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A58940"))) PPC_WEAK_FUNC(sub_82A58940);
PPC_FUNC_IMPL(__imp__sub_82A58940) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,6230(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6230);
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5894C"))) PPC_WEAK_FUNC(sub_82A5894C);
PPC_FUNC_IMPL(__imp__sub_82A5894C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A58950"))) PPC_WEAK_FUNC(sub_82A58950);
PPC_FUNC_IMPL(__imp__sub_82A58950) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,6230(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6230);
	// rlwimi r11,r4,4,0,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 4) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// stb r11,6230(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6230, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A58960"))) PPC_WEAK_FUNC(sub_82A58960);
PPC_FUNC_IMPL(__imp__sub_82A58960) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x82a5897c
	if (!cr6.eq) goto loc_82A5897C;
	// lbz r11,6230(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6230);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// b 0x82a5898c
	goto loc_82A5898C;
loc_82A5897C:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lbz r11,6230(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6230);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
loc_82A5898C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5899C"))) PPC_WEAK_FUNC(sub_82A5899C);
PPC_FUNC_IMPL(__imp__sub_82A5899C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A589A0"))) PPC_WEAK_FUNC(sub_82A589A0);
PPC_FUNC_IMPL(__imp__sub_82A589A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x82a589d8
	if (!cr6.eq) goto loc_82A589D8;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a589c4
	if (cr6.eq) goto loc_82A589C4;
	// lbz r11,6230(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6230);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stb r10,6230(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6230, ctx.r10.u8);
	// blr 
	return;
loc_82A589C4:
	// lbz r11,6230(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6230);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r10,r10,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stb r10,6230(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6230, ctx.r10.u8);
	// blr 
	return;
loc_82A589D8:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a589fc
	if (cr6.eq) goto loc_82A589FC;
	// lbz r11,6230(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6230);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stb r10,6230(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6230, ctx.r10.u8);
	// blr 
	return;
loc_82A589FC:
	// lbz r11,6230(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6230);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r10,r10,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stb r10,6230(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6230, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A58A10"))) PPC_WEAK_FUNC(sub_82A58A10);
PPC_FUNC_IMPL(__imp__sub_82A58A10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bgt cr6,0x82a58a4c
	if (cr6.gt) goto loc_82A58A4C;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82a58a34
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A58A34;
	// bdzf 4*cr6+eq,0x82a58a3c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A58A3C;
	// bne cr6,0x82a58a44
	if (!cr6.eq) goto loc_82A58A44;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A58A34:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82A58A3C:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82A58A44:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_82A58A4C:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A58A54"))) PPC_WEAK_FUNC(sub_82A58A54);
PPC_FUNC_IMPL(__imp__sub_82A58A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A58A58"))) PPC_WEAK_FUNC(sub_82A58A58);
PPC_FUNC_IMPL(__imp__sub_82A58A58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,23372(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23372);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A58A7C"))) PPC_WEAK_FUNC(sub_82A58A7C);
PPC_FUNC_IMPL(__imp__sub_82A58A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A58A80"))) PPC_WEAK_FUNC(sub_82A58A80);
PPC_FUNC_IMPL(__imp__sub_82A58A80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-23580(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23580);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lhz r3,-10(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A58A9C"))) PPC_WEAK_FUNC(sub_82A58A9C);
PPC_FUNC_IMPL(__imp__sub_82A58A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A58AA0"))) PPC_WEAK_FUNC(sub_82A58AA0);
PPC_FUNC_IMPL(__imp__sub_82A58AA0) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82A58AC4;
	sub_831CDCF0(ctx, base);
	// li r11,10000
	ctx.r11.s64 = 10000;
	// li r10,7868
	ctx.r10.s64 = 7868;
	// li r9,6456
	ctx.r9.s64 = 6456;
	// stw r11,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
	// li r8,23
	ctx.r8.s64 = 23;
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// stb r8,92(r30)
	PPC_STORE_U8(ctx.r30.u32 + 92, ctx.r8.u8);
	// bl 0x83935df8
	ctx.lr = 0x82A58AE8;
	sub_83935DF8(ctx, base);
	// mulli r7,r3,60
	ctx.r7.s64 = ctx.r3.s64 * 60;
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// li r31,0
	ctx.r31.s64 = 0;
	// divw r5,r6,r6
	ctx.r5.s32 = PPCDivide(ctx.r6.s32, ctx.r6.s32);
	// sth r6,96(r30)
	PPC_STORE_U16(ctx.r30.u32 + 96, ctx.r6.u16);
	// rotlwi r11,r6,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// mullw r4,r5,r6
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// subf r3,r4,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r3,94(r30)
	PPC_STORE_U16(ctx.r30.u32 + 94, ctx.r3.u16);
	// twllei r6,0
	// stw r31,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r31.u32);
	// andc r9,r6,r11
	ctx.r9.u64 = ctx.r6.u64 & ~ctx.r11.u64;
	// stb r31,4004(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4004, ctx.r31.u8);
	// twlgei r9,-1
	// bl 0x83740858
	ctx.lr = 0x82A58B28;
	sub_83740858(ctx, base);
	// stb r3,4005(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4005, ctx.r3.u8);
	// bl 0x830ff290
	ctx.lr = 0x82A58B30;
	sub_830FF290(ctx, base);
	// lwz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// stb r31,4007(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4007, ctx.r31.u8);
	// lis r6,-31778
	ctx.r6.s64 = -2082603008;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r3,r30,4008
	ctx.r3.s64 = ctx.r30.s64 + 4008;
	// stb r7,4006(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4006, ctx.r7.u8);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
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
	// lwz r10,18636(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 18636);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stb r31,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r31.u8);
	// stb r31,201(r1)
	PPC_STORE_U8(ctx.r1.u32 + 201, ctx.r31.u8);
	// stb r31,202(r1)
	PPC_STORE_U8(ctx.r1.u32 + 202, ctx.r31.u8);
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// bl 0x82a552d8
	ctx.lr = 0x82A58BDC;
	sub_82A552D8(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,255
	ctx.r11.s64 = 255;
	// sth r31,4144(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4144, ctx.r31.u16);
	// stb r31,4146(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4146, ctx.r31.u8);
	// li r4,25
	ctx.r4.s64 = 25;
	// stb r31,4147(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4147, ctx.r31.u8);
	// addi r3,r30,4332
	ctx.r3.s64 = ctx.r30.s64 + 4332;
	// stb r31,4150(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4150, ctx.r31.u8);
	// stw r4,4312(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4312, ctx.r4.u32);
	// stw r10,4316(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4316, ctx.r10.u32);
	// stw r11,4320(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4320, ctx.r11.u32);
	// stw r10,4324(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4324, ctx.r10.u32);
	// stw r11,4328(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4328, ctx.r11.u32);
	// bl 0x82a585f8
	ctx.lr = 0x82A58C14;
	sub_82A585F8(ctx, base);
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

__attribute__((alias("__imp__sub_82A58C2C"))) PPC_WEAK_FUNC(sub_82A58C2C);
PPC_FUNC_IMPL(__imp__sub_82A58C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A58C30"))) PPC_WEAK_FUNC(sub_82A58C30);
PPC_FUNC_IMPL(__imp__sub_82A58C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// li r5,25
	ctx.r5.s64 = 25;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A58C38:
	// li r8,4
	ctx.r8.s64 = 4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r3,10
	ctx.r9.s64 = ctx.r3.s64 + 10;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82A58C48:
	// stbx r11,r3,r10
	PPC_STORE_U8(ctx.r3.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r11,-6(r9)
	PPC_STORE_U16(ctx.r9.u32 + -6, ctx.r11.u16);
	// sthu r11,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x82a58c48
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A58C48;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r8,r3,20
	ctx.r8.s64 = ctx.r3.s64 + 20;
	// addi r9,r3,30
	ctx.r9.s64 = ctx.r3.s64 + 30;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_82A58C70:
	// stbx r11,r8,r10
	PPC_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r11,-6(r9)
	PPC_STORE_U16(ctx.r9.u32 + -6, ctx.r11.u16);
	// sthu r11,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x82a58c70
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A58C70;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r8,r3,40
	ctx.r8.s64 = ctx.r3.s64 + 40;
	// addi r7,r3,60
	ctx.r7.s64 = ctx.r3.s64 + 60;
	// addi r10,r3,70
	ctx.r10.s64 = ctx.r3.s64 + 70;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
loc_82A58C9C:
	// stbx r11,r8,r9
	PPC_STORE_U8(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u8);
	// sth r11,-26(r10)
	PPC_STORE_U16(ctx.r10.u32 + -26, ctx.r11.u16);
	// sth r11,-18(r10)
	PPC_STORE_U16(ctx.r10.u32 + -18, ctx.r11.u16);
	// stbx r11,r7,r9
	PPC_STORE_U8(ctx.r7.u32 + ctx.r9.u32, ctx.r11.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sth r11,-6(r10)
	PPC_STORE_U16(ctx.r10.u32 + -6, ctx.r11.u16);
	// sthu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x82a58c9c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A58C9C;
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// bne 0x82a58c38
	if (!cr0.eq) goto loc_82A58C38;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A58CCC"))) PPC_WEAK_FUNC(sub_82A58CCC);
PPC_FUNC_IMPL(__imp__sub_82A58CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A58CD0"))) PPC_WEAK_FUNC(sub_82A58CD0);
PPC_FUNC_IMPL(__imp__sub_82A58CD0) {
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
	// li r5,248
	ctx.r5.s64 = 248;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82A58CF0;
	sub_831CDCF0(ctx, base);
	// li r10,20
	ctx.r10.s64 = 20;
	// addi r11,r31,-2
	ctx.r11.s64 = ctx.r31.s64 + -2;
	// li r9,10430
	ctx.r9.s64 = 10430;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A58D04:
	// sth r10,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// sth r10,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// sth r10,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// sthu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x82a58d04
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A58D04;
	// li r11,32767
	ctx.r11.s64 = 32767;
	// stw r10,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r10.u32);
	// stb r10,218(r31)
	PPC_STORE_U8(ctx.r31.u32 + 218, ctx.r10.u8);
	// sth r11,172(r31)
	PPC_STORE_U16(ctx.r31.u32 + 172, ctx.r11.u16);
	// sth r10,210(r31)
	PPC_STORE_U16(ctx.r31.u32 + 210, ctx.r10.u16);
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

__attribute__((alias("__imp__sub_82A58D40"))) PPC_WEAK_FUNC(sub_82A58D40);
PPC_FUNC_IMPL(__imp__sub_82A58D40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bgt cr6,0x82a58db4
	if (cr6.gt) goto loc_82A58DB4;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82a58d5c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A58D5C;
	// bdzf 4*cr6+eq,0x82a58d5c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A58D5C;
	// bne cr6,0x82a58d5c
	if (!cr6.eq) goto loc_82A58D5C;
loc_82A58D5C:
	// cmplwi cr6,r5,2
	cr6.compare<uint32_t>(ctx.r5.u32, 2, xer);
	// bge cr6,0x82a58db4
	if (!cr6.lt) goto loc_82A58DB4;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82a58d84
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A58D84;
	// bdzf 4*cr6+eq,0x82a58d94
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A58D94;
	// bne cr6,0x82a58da4
	if (!cr6.eq) goto loc_82A58DA4;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
loc_82A58D84:
	// addi r11,r5,2
	ctx.r11.s64 = ctx.r5.s64 + 2;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
loc_82A58D94:
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
loc_82A58DA4:
	// addi r11,r5,6
	ctx.r11.s64 = ctx.r5.s64 + 6;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
loc_82A58DB4:
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r11,255
	ctx.r11.s64 = 255;
	// addi r7,r8,788
	ctx.r7.s64 = ctx.r8.s64 + 788;
	// li r10,255
	ctx.r10.s64 = 255;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,788(r8)
	PPC_STORE_U8(ctx.r8.u32 + 788, ctx.r11.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stb r10,1(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1, ctx.r10.u8);
	// sth r9,2(r7)
	PPC_STORE_U16(ctx.r7.u32 + 2, ctx.r9.u16);
	// sth r8,4(r7)
	PPC_STORE_U16(ctx.r7.u32 + 4, ctx.r8.u16);
	// sth r11,6(r7)
	PPC_STORE_U16(ctx.r7.u32 + 6, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A58DEC"))) PPC_WEAK_FUNC(sub_82A58DEC);
PPC_FUNC_IMPL(__imp__sub_82A58DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A58DF0"))) PPC_WEAK_FUNC(sub_82A58DF0);
PPC_FUNC_IMPL(__imp__sub_82A58DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82a58e0c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A58E0C;
	// bdzf 4*cr6+eq,0x82a58e0c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A58E0C;
	// bne cr6,0x82a58e0c
	if (!cr6.eq) goto loc_82A58E0C;
loc_82A58E0C:
	// cmplwi cr6,r5,2
	cr6.compare<uint32_t>(ctx.r5.u32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82a58e30
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A58E30;
	// bdzf 4*cr6+eq,0x82a58e38
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A58E38;
	// bne cr6,0x82a58e40
	if (!cr6.eq) goto loc_82A58E40;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x82a58e48
	goto loc_82A58E48;
loc_82A58E30:
	// addi r11,r5,2
	ctx.r11.s64 = ctx.r5.s64 + 2;
	// b 0x82a58e44
	goto loc_82A58E44;
loc_82A58E38:
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// b 0x82a58e44
	goto loc_82A58E44;
loc_82A58E40:
	// addi r11,r5,6
	ctx.r11.s64 = ctx.r5.s64 + 6;
loc_82A58E44:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_82A58E48:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// sth r8,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// sth r9,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r9.u16);
	// sth r10,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A58E6C"))) PPC_WEAK_FUNC(sub_82A58E6C);
PPC_FUNC_IMPL(__imp__sub_82A58E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A58E70"))) PPC_WEAK_FUNC(sub_82A58E70);
PPC_FUNC_IMPL(__imp__sub_82A58E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lhz r6,6200(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6200);
	// li r10,25
	ctx.r10.s64 = 25;
	// lhz r8,6202(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6202);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lhz r7,6204(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6204);
	// li r3,255
	ctx.r3.s64 = 255;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f13,20256(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20256);
	ctx.f13.f64 = double(temp.f32);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// addi r11,r11,174
	ctx.r11.s64 = ctx.r11.s64 + 174;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A58EA8:
	// lhz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// subf r9,r7,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r7.s64;
	// lhz r30,-2(r11)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// subf r4,r6,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r6.s64;
	// mullw r10,r10,r10
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	// mullw r9,r9,r9
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r9.s32);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r10,r4,r4
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r4.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r9.u64);
	// lfd f0,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// fsqrts f0,f12
	ctx.f0.f64 = double(float(sqrt(ctx.f12.f64)));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82a58f04
	if (!cr6.lt) goto loc_82A58F04;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
loc_82A58F04:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,248
	ctx.r11.s64 = ctx.r11.s64 + 248;
	// bdnz 0x82a58ea8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A58EA8;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A58F1C"))) PPC_WEAK_FUNC(sub_82A58F1C);
PPC_FUNC_IMPL(__imp__sub_82A58F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A58F20"))) PPC_WEAK_FUNC(sub_82A58F20);
PPC_FUNC_IMPL(__imp__sub_82A58F20) {
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
	ctx.lr = 0x82A58F28;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,32767
	ctx.r28.s64 = 32767;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a58f60
	if (cr6.eq) goto loc_82A58F60;
	// li r10,25
	ctx.r10.s64 = 25;
	// addi r11,r3,-76
	ctx.r11.s64 = ctx.r3.s64 + -76;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A58F54:
	// sthu r28,248(r11)
	ea = 248 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r28.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x82a58f54
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A58F54;
	// b 0x82a58f7c
	goto loc_82A58F7C;
loc_82A58F60:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// li r30,25
	ctx.r30.s64 = 25;
loc_82A58F68:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a58cd0
	ctx.lr = 0x82A58F70;
	sub_82A58CD0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,248
	ctx.r29.s64 = ctx.r29.s64 + 248;
	// bne 0x82a58f68
	if (!cr0.eq) goto loc_82A58F68;
loc_82A58F7C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// sth r28,6200(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6200, ctx.r28.u16);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r9,64
	ctx.r9.s64 = 64;
	// sth r30,6202(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6202, ctx.r30.u16);
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// sth r30,6204(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6204, ctx.r30.u16);
	// lfs f30,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f30.f64 = double(temp.f32);
	// stfs f31,6216(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6216, temp.u32);
	// stfs f31,6212(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6212, temp.u32);
	// stfs f31,6208(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6208, temp.u32);
	// stfs f30,6220(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6220, temp.u32);
	// lbz r7,6225(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6225);
	// lbz r6,6226(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6226);
	// lbz r8,6224(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6224);
	// clrlwi r3,r8,28
	ctx.r3.u64 = ctx.r8.u32 & 0xF;
	// clrlwi r5,r6,30
	ctx.r5.u64 = ctx.r6.u32 & 0x3;
	// stb r30,6227(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6227, ctx.r30.u8);
	// clrlwi r4,r7,30
	ctx.r4.u64 = ctx.r7.u32 & 0x3;
	// stb r3,6224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6224, ctx.r3.u8);
	// stb r5,6226(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6226, ctx.r5.u8);
	// stb r4,6225(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6225, ctx.r4.u8);
	// stb r30,6229(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6229, ctx.r30.u8);
	// stb r9,6230(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6230, ctx.r9.u8);
	// bl 0x83740858
	ctx.lr = 0x82A58FE4;
	sub_83740858(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// li r9,4
	ctx.r9.s64 = 4;
	// stfs f31,6232(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6232, temp.u32);
	// stb r11,6236(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6236, ctx.r11.u8);
	// stb r11,6258(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6258, ctx.r11.u8);
	// stb r11,6259(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6259, ctx.r11.u8);
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r3,6228(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6228, ctx.r3.u8);
	// stb r9,6240(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6240, ctx.r9.u8);
	// stfs f31,6260(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6260, temp.u32);
	// stfs f31,6268(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6268, temp.u32);
	// stfs f31,6264(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6264, temp.u32);
	// stfs f30,6272(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6272, temp.u32);
	// stfs f31,6284(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6284, temp.u32);
	// stfs f31,6280(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6280, temp.u32);
	// stfs f31,6276(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6276, temp.u32);
	// stfs f30,6288(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6288, temp.u32);
	// stfs f31,6300(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6300, temp.u32);
	// stfs f31,6296(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6296, temp.u32);
	// stfs f31,6292(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6292, temp.u32);
	// stfs f30,6304(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6304, temp.u32);
	// stfs f31,6316(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6316, temp.u32);
	// stfs f31,6312(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6312, temp.u32);
	// stfs f31,6308(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6308, temp.u32);
	// stfs f30,6320(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6320, temp.u32);
	// stfs f31,6324(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6324, temp.u32);
	// stfs f31,6332(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6332, temp.u32);
	// stfs f31,6328(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6328, temp.u32);
	// stfs f30,6336(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6336, temp.u32);
	// stfs f31,6348(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6348, temp.u32);
	// stfs f31,6344(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6344, temp.u32);
	// stfs f31,6340(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6340, temp.u32);
	// stfs f30,6352(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6352, temp.u32);
	// stfs f31,6364(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6364, temp.u32);
	// stfs f31,6360(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6360, temp.u32);
	// stfs f31,6356(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6356, temp.u32);
	// stfs f30,6368(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6368, temp.u32);
	// stfs f31,6380(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6380, temp.u32);
	// stfs f31,6376(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6376, temp.u32);
	// stfs f31,6372(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6372, temp.u32);
	// stfs f30,6384(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6384, temp.u32);
	// sth r30,6242(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6242, ctx.r30.u16);
	// sth r30,6244(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6244, ctx.r30.u16);
	// sth r30,6246(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6246, ctx.r30.u16);
	// sth r30,6248(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6248, ctx.r30.u16);
	// sth r30,6250(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6250, ctx.r30.u16);
	// sth r30,6252(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6252, ctx.r30.u16);
	// sth r30,6254(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6254, ctx.r30.u16);
	// stb r30,6256(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6256, ctx.r30.u8);
	// stb r30,6257(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6257, ctx.r30.u8);
	// stb r11,6392(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6392, ctx.r11.u8);
	// stb r11,6393(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6393, ctx.r11.u8);
	// sth r30,6394(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6394, ctx.r30.u16);
	// sth r30,6396(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6396, ctx.r30.u16);
	// sth r30,6398(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6398, ctx.r30.u16);
	// stb r11,6400(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6400, ctx.r11.u8);
	// addi r10,r31,6392
	ctx.r10.s64 = ctx.r31.s64 + 6392;
	// stb r11,6401(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6401, ctx.r11.u8);
	// sth r30,6402(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6402, ctx.r30.u16);
	// sth r30,6404(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6404, ctx.r30.u16);
	// sth r30,6406(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6406, ctx.r30.u16);
	// stb r11,6408(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6408, ctx.r11.u8);
	// stb r11,6409(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6409, ctx.r11.u8);
	// sth r30,6410(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6410, ctx.r30.u16);
	// sth r30,6412(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6412, ctx.r30.u16);
	// sth r30,6414(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6414, ctx.r30.u16);
	// stb r11,6416(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6416, ctx.r11.u8);
	// stb r11,6417(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6417, ctx.r11.u8);
	// sth r30,6418(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6418, ctx.r30.u16);
	// sth r30,6420(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6420, ctx.r30.u16);
	// sth r30,6422(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6422, ctx.r30.u16);
	// stb r11,6424(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6424, ctx.r11.u8);
	// stb r11,6425(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6425, ctx.r11.u8);
	// sth r30,6426(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6426, ctx.r30.u16);
	// sth r30,6428(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6428, ctx.r30.u16);
	// sth r30,6430(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6430, ctx.r30.u16);
	// stb r11,6432(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6432, ctx.r11.u8);
	// stb r11,6433(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6433, ctx.r11.u8);
	// sth r30,6434(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6434, ctx.r30.u16);
	// sth r30,6436(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6436, ctx.r30.u16);
	// sth r30,6438(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6438, ctx.r30.u16);
	// stb r11,6440(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6440, ctx.r11.u8);
	// stb r11,6441(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6441, ctx.r11.u8);
	// sth r30,6442(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6442, ctx.r30.u16);
	// sth r30,6444(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6444, ctx.r30.u16);
	// sth r30,6446(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6446, ctx.r30.u16);
	// stb r11,6448(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6448, ctx.r11.u8);
	// stb r11,6449(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6449, ctx.r11.u8);
	// sth r30,6450(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6450, ctx.r30.u16);
	// sth r30,6452(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6452, ctx.r30.u16);
	// sth r30,6454(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6454, ctx.r30.u16);
	// stb r11,6388(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6388, ctx.r11.u8);
	// sth r30,6390(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6390, ctx.r30.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A59168"))) PPC_WEAK_FUNC(sub_82A59168);
PPC_FUNC_IMPL(__imp__sub_82A59168) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lbz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a5919c
	if (!cr6.eq) goto loc_82A5919C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x825a9e30
	ctx.lr = 0x82A5919C;
	sub_825A9E30(ctx, base);
loc_82A5919C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a591bc
	if (!cr6.eq) goto loc_82A591BC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82A591BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A591D4"))) PPC_WEAK_FUNC(sub_82A591D4);
PPC_FUNC_IMPL(__imp__sub_82A591D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A591D8"))) PPC_WEAK_FUNC(sub_82A591D8);
PPC_FUNC_IMPL(__imp__sub_82A591D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lbz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a5920c
	if (!cr6.eq) goto loc_82A5920C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x825aa158
	ctx.lr = 0x82A5920C;
	sub_825AA158(ctx, base);
loc_82A5920C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a5922c
	if (!cr6.eq) goto loc_82A5922C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82A5922C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A59244"))) PPC_WEAK_FUNC(sub_82A59244);
PPC_FUNC_IMPL(__imp__sub_82A59244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A59248"))) PPC_WEAK_FUNC(sub_82A59248);
PPC_FUNC_IMPL(__imp__sub_82A59248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82A59250;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,0(r4)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lbz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a5927c
	if (!cr6.eq) goto loc_82A5927C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a12978
	ctx.lr = 0x82A5927C;
	sub_82A12978(ctx, base);
loc_82A5927C:
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a59298
	if (!cr6.eq) goto loc_82A59298;
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r10.u32);
loc_82A59298:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r26,12(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// bne cr6,0x82a592c4
	if (!cr6.eq) goto loc_82A592C4;
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a59450
	if (cr6.eq) goto loc_82A59450;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82A592C4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82a59168
	ctx.lr = 0x82A592D0;
	sub_82A59168(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r28,12(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x82a592e8
	if (!cr6.eq) goto loc_82A592E8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a5942c
	goto loc_82A5942C;
loc_82A592E8:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82a591d8
	ctx.lr = 0x82A592F4;
	sub_82A591D8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r29,12(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x82a5930c
	if (!cr6.eq) goto loc_82A5930C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a59418
	goto loc_82A59418;
loc_82A5930C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82a591d8
	ctx.lr = 0x82A59318;
	sub_82A591D8(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r30,12(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82a59400
	if (cr6.eq) goto loc_82A59400;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,4008
	ctx.r3.s64 = ctx.r31.s64 + 4008;
	// bl 0x82a552d8
	ctx.lr = 0x82A59334;
	sub_82A552D8(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,39068
	ctx.r11.u64 = ctx.r11.u64 | 39068;
	// ori r10,r10,39072
	ctx.r10.u64 = ctx.r10.u64 | 39072;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lis r7,0
	ctx.r7.s64 = 0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// ori r11,r7,39073
	ctx.r11.u64 = ctx.r7.u64 | 39073;
	// lis r6,-31778
	ctx.r6.s64 = -2082603008;
	// lwzx r5,r29,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	// stw r5,4136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4136, ctx.r5.u32);
	// lwzx r4,r30,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// stw r4,4140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4140, ctx.r4.u32);
	// lhz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + 20);
	// sth r3,4144(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4144, ctx.r3.u16);
	// lbzx r9,r29,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r10.u32);
	// stb r9,4146(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4146, ctx.r9.u8);
	// lbzx r8,r30,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// stb r8,4147(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4147, ctx.r8.u8);
	// lbzx r7,r29,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// stb r7,4148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4148, ctx.r7.u8);
	// lbzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// stb r5,4149(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4149, ctx.r5.u8);
	// lwz r3,2056(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 2056);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a593b4
	if (cr6.eq) goto loc_82A593B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A593AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r3,4150(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4150, ctx.r3.u8);
	// b 0x82a593d8
	goto loc_82A593D8;
loc_82A593B4:
	// lbz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// li r10,12
	ctx.r10.s64 = 12;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// addi r6,r11,-3
	ctx.r6.s64 = ctx.r11.s64 + -3;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r4,r5,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// stb r4,4150(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4150, ctx.r4.u8);
loc_82A593D8:
	// addi r3,r31,4152
	ctx.r3.s64 = ctx.r31.s64 + 4152;
	// li r5,160
	ctx.r5.s64 = 160;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A593E8;
	sub_831CE980(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82A593EC;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82A593F0;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,14
	cr6.compare<uint32_t>(ctx.r3.u32, 14, xer);
	// bne cr6,0x82a59400
	if (!cr6.eq) goto loc_82A59400;
	// li r11,25
	ctx.r11.s64 = 25;
	// stb r11,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r11.u8);
loc_82A59400:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a59418
	if (cr6.eq) goto loc_82A59418;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
loc_82A59418:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a5942c
	if (cr6.eq) goto loc_82A5942C;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
loc_82A5942C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a59440
	if (cr6.eq) goto loc_82A59440;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
loc_82A59440:
	// lwz r10,12(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a59450
	if (cr6.eq) goto loc_82A59450;
	// stw r11,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r11.u32);
loc_82A59450:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A59458"))) PPC_WEAK_FUNC(sub_82A59458);
PPC_FUNC_IMPL(__imp__sub_82A59458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A59460;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r31,0
	ctx.r31.s64 = 0;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r10,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82a594d4
	if (cr0.eq) goto loc_82A594D4;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// ble cr6,0x82a594e0
	if (!cr6.gt) goto loc_82A594E0;
loc_82A59498:
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A594B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r10,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82a59498
	if (cr6.gt) goto loc_82A59498;
loc_82A594D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82A594E0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A594EC;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82A594EC"))) PPC_WEAK_FUNC(sub_82A594EC);
PPC_FUNC_IMPL(__imp__sub_82A594EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A594F0"))) PPC_WEAK_FUNC(sub_82A594F0);
PPC_FUNC_IMPL(__imp__sub_82A594F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A594F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r10,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82a59560
	if (cr0.eq) goto loc_82A59560;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// ble cr6,0x82a59568
	if (!cr6.gt) goto loc_82A59568;
loc_82A59528:
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A59540;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r10,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82a59528
	if (cr6.gt) goto loc_82A59528;
loc_82A59560:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82A59568:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A59574;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82A59574"))) PPC_WEAK_FUNC(sub_82A59574);
PPC_FUNC_IMPL(__imp__sub_82A59574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A59578"))) PPC_WEAK_FUNC(sub_82A59578);
PPC_FUNC_IMPL(__imp__sub_82A59578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A59580;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r10,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82a595e8
	if (cr0.eq) goto loc_82A595E8;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// ble cr6,0x82a595f0
	if (!cr6.gt) goto loc_82A595F0;
loc_82A595B0:
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A595C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r10,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82a595b0
	if (cr6.gt) goto loc_82A595B0;
loc_82A595E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82A595F0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A595FC;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82A595FC"))) PPC_WEAK_FUNC(sub_82A595FC);
PPC_FUNC_IMPL(__imp__sub_82A595FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A59600"))) PPC_WEAK_FUNC(sub_82A59600);
PPC_FUNC_IMPL(__imp__sub_82A59600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A59608;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r10,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82a59670
	if (cr0.eq) goto loc_82A59670;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// ble cr6,0x82a59678
	if (!cr6.gt) goto loc_82A59678;
loc_82A59638:
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A59650;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r10,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82a59638
	if (cr6.gt) goto loc_82A59638;
loc_82A59670:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82A59678:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A59684;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82A59684"))) PPC_WEAK_FUNC(sub_82A59684);
PPC_FUNC_IMPL(__imp__sub_82A59684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A59688"))) PPC_WEAK_FUNC(sub_82A59688);
PPC_FUNC_IMPL(__imp__sub_82A59688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A59690;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r10,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82a596f0
	if (cr0.eq) goto loc_82A596F0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// ble cr6,0x82a596f8
	if (!cr6.gt) goto loc_82A596F8;
loc_82A596BC:
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A596D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r10,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82a596bc
	if (cr6.gt) goto loc_82A596BC;
loc_82A596F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A596F8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A59704;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82A59704"))) PPC_WEAK_FUNC(sub_82A59704);
PPC_FUNC_IMPL(__imp__sub_82A59704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A59708"))) PPC_WEAK_FUNC(sub_82A59708);
PPC_FUNC_IMPL(__imp__sub_82A59708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A59710;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r10,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82a59770
	if (cr0.eq) goto loc_82A59770;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// ble cr6,0x82a59778
	if (!cr6.gt) goto loc_82A59778;
loc_82A5973C:
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A59750;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r10,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82a5973c
	if (cr6.gt) goto loc_82A5973C;
loc_82A59770:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A59778:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A59784;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82A59784"))) PPC_WEAK_FUNC(sub_82A59784);
PPC_FUNC_IMPL(__imp__sub_82A59784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A59788"))) PPC_WEAK_FUNC(sub_82A59788);
PPC_FUNC_IMPL(__imp__sub_82A59788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A59790;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r10,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82a597f0
	if (cr0.eq) goto loc_82A597F0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// ble cr6,0x82a597f8
	if (!cr6.gt) goto loc_82A597F8;
loc_82A597BC:
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A597D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r10,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82a597bc
	if (cr6.gt) goto loc_82A597BC;
loc_82A597F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A597F8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A59804;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82A59804"))) PPC_WEAK_FUNC(sub_82A59804);
PPC_FUNC_IMPL(__imp__sub_82A59804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A59808"))) PPC_WEAK_FUNC(sub_82A59808);
PPC_FUNC_IMPL(__imp__sub_82A59808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A59810;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r10,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82a59870
	if (cr0.eq) goto loc_82A59870;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// ble cr6,0x82a59878
	if (!cr6.gt) goto loc_82A59878;
loc_82A5983C:
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A59850;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r10,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82a5983c
	if (cr6.gt) goto loc_82A5983C;
loc_82A59870:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A59878:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A59884;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82A59884"))) PPC_WEAK_FUNC(sub_82A59884);
PPC_FUNC_IMPL(__imp__sub_82A59884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A59888"))) PPC_WEAK_FUNC(sub_82A59888);
PPC_FUNC_IMPL(__imp__sub_82A59888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A59890;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r10,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82a598f0
	if (cr0.eq) goto loc_82A598F0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// ble cr6,0x82a598f8
	if (!cr6.gt) goto loc_82A598F8;
loc_82A598BC:
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A598D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r10,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82a598bc
	if (cr6.gt) goto loc_82A598BC;
loc_82A598F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A598F8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A59904;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82A59904"))) PPC_WEAK_FUNC(sub_82A59904);
PPC_FUNC_IMPL(__imp__sub_82A59904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A59908"))) PPC_WEAK_FUNC(sub_82A59908);
PPC_FUNC_IMPL(__imp__sub_82A59908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A59910;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r10,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82a59970
	if (cr0.eq) goto loc_82A59970;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// ble cr6,0x82a59978
	if (!cr6.gt) goto loc_82A59978;
loc_82A5993C:
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A59950;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r10,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82a5993c
	if (cr6.gt) goto loc_82A5993C;
loc_82A59970:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A59978:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A59984;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82A59984"))) PPC_WEAK_FUNC(sub_82A59984);
PPC_FUNC_IMPL(__imp__sub_82A59984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A59988"))) PPC_WEAK_FUNC(sub_82A59988);
PPC_FUNC_IMPL(__imp__sub_82A59988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A59990;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r10,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82a599f0
	if (cr0.eq) goto loc_82A599F0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// ble cr6,0x82a599f8
	if (!cr6.gt) goto loc_82A599F8;
loc_82A599BC:
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A599D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r10,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82a599bc
	if (cr6.gt) goto loc_82A599BC;
loc_82A599F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A599F8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A59A04;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82A59A04"))) PPC_WEAK_FUNC(sub_82A59A04);
PPC_FUNC_IMPL(__imp__sub_82A59A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A59A08"))) PPC_WEAK_FUNC(sub_82A59A08);
PPC_FUNC_IMPL(__imp__sub_82A59A08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A59A10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r10,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82a59a70
	if (cr0.eq) goto loc_82A59A70;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// ble cr6,0x82a59a78
	if (!cr6.gt) goto loc_82A59A78;
loc_82A59A3C:
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A59A50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r10,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82a59a3c
	if (cr6.gt) goto loc_82A59A3C;
loc_82A59A70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A59A78:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A59A84;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82A59A84"))) PPC_WEAK_FUNC(sub_82A59A84);
PPC_FUNC_IMPL(__imp__sub_82A59A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A59A88"))) PPC_WEAK_FUNC(sub_82A59A88);
PPC_FUNC_IMPL(__imp__sub_82A59A88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A59A90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r10,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82a59af0
	if (cr0.eq) goto loc_82A59AF0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// ble cr6,0x82a59af8
	if (!cr6.gt) goto loc_82A59AF8;
loc_82A59ABC:
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A59AD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r10,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82a59abc
	if (cr6.gt) goto loc_82A59ABC;
loc_82A59AF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A59AF8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A59B04;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82A59B04"))) PPC_WEAK_FUNC(sub_82A59B04);
PPC_FUNC_IMPL(__imp__sub_82A59B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A59B08"))) PPC_WEAK_FUNC(sub_82A59B08);
PPC_FUNC_IMPL(__imp__sub_82A59B08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A59B10;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// li r31,0
	ctx.r31.s64 = 0;
	// srawi. r10,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82a59b80
	if (cr0.eq) goto loc_82A59B80;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// ble cr6,0x82a59b88
	if (!cr6.gt) goto loc_82A59B88;
loc_82A59B44:
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A59B60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r10,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82a59b44
	if (cr6.gt) goto loc_82A59B44;
loc_82A59B80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82A59B88:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A59B94;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82A59B94"))) PPC_WEAK_FUNC(sub_82A59B94);
PPC_FUNC_IMPL(__imp__sub_82A59B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A59B98"))) PPC_WEAK_FUNC(sub_82A59B98);
PPC_FUNC_IMPL(__imp__sub_82A59B98) {
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
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi. r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82a59c1c
	if (cr0.eq) goto loc_82A59C1C;
loc_82A59BC4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,-4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82574b18
	ctx.lr = 0x82A59BD4;
	sub_82574B18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x82a59bf0
	if (cr6.gt) goto loc_82A59BF0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A59BF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82A59BF0:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// beq cr6,0x82a59c08
	if (cr6.eq) goto loc_82A59C08;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82A59C08:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82a59bc4
	if (!cr0.eq) goto loc_82A59BC4;
loc_82A59C1C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a59c34
	if (cr6.eq) goto loc_82A59C34;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82A59C34;
	sub_825952B8(ctx, base);
loc_82A59C34:
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
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A59C5C"))) PPC_WEAK_FUNC(sub_82A59C5C);
PPC_FUNC_IMPL(__imp__sub_82A59C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A59C60"))) PPC_WEAK_FUNC(sub_82A59C60);
PPC_FUNC_IMPL(__imp__sub_82A59C60) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r3,r4,4
	ctx.r3.s64 = ctx.r4.s64 + 4;
	// bl 0x825749e0
	ctx.lr = 0x82A59C80;
	sub_825749E0(ctx, base);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835977d8
	ctx.lr = 0x82A59C8C;
	sub_835977D8(ctx, base);
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

__attribute__((alias("__imp__sub_82A59CA0"))) PPC_WEAK_FUNC(sub_82A59CA0);
PPC_FUNC_IMPL(__imp__sub_82A59CA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f5,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f10,f5,f13,f10
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f10.f64));
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f4,f6,f8
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f6.f64 + ctx.f8.f64));
	// lfs f5,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f3,f6,f7
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f6.f64 + ctx.f7.f64));
	// fmadds f3,f6,f2,f10
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f2.f64 + ctx.f10.f64));
	// fmadds f2,f1,f0,f8
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fmadds f1,f12,f0,f4
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f4.f64));
	// fadds f0,f3,f11
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f11.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fadds f13,f2,f9
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f9.f64));
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fadds f12,f1,f5
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A59D1C"))) PPC_WEAK_FUNC(sub_82A59D1C);
PPC_FUNC_IMPL(__imp__sub_82A59D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A59D20"))) PPC_WEAK_FUNC(sub_82A59D20);
PPC_FUNC_IMPL(__imp__sub_82A59D20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f5,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f5,f13,f10
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f10,f4,f6,f8
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f6.f64 + ctx.f8.f64));
	// fmadds f9,f3,f6,f7
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f6.f64 + ctx.f7.f64));
	// fmadds f8,f6,f2,f11
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f2.f64 + ctx.f11.f64));
	// stfs f8,0(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmadds f7,f1,f0,f10
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f7,4(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmadds f6,f12,f0,f9
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f6,8(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A59D84"))) PPC_WEAK_FUNC(sub_82A59D84);
PPC_FUNC_IMPL(__imp__sub_82A59D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A59D88"))) PPC_WEAK_FUNC(sub_82A59D88);
PPC_FUNC_IMPL(__imp__sub_82A59D88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A59D90;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831ce768
	ctx.lr = 0x82A59D98;
	__savefpr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31778
	ctx.r29.s64 = -2082603008;
	// lfs f13,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f0,18796(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 18796);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f31,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,-23844(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23844);
	ctx.f30.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fadds f1,f12,f30
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f30.f64));
	// bl 0x82a5aa98
	ctx.lr = 0x82A59DD0;
	sub_82A5AA98(ctx, base);
	// lfs f11,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// lfs f0,18796(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 18796);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fadds f1,f10,f30
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f30.f64));
	// bl 0x82a5aa98
	ctx.lr = 0x82A59DEC;
	sub_82A5AA98(ctx, base);
	// lfs f9,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f29,f1,f29
	ctx.f29.f64 = double(float(ctx.f1.f64 * ctx.f29.f64));
	// lfs f0,18796(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 18796);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmuls f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fadds f1,f8,f30
	ctx.f1.f64 = double(float(ctx.f8.f64 + ctx.f30.f64));
	// bl 0x82a5aa98
	ctx.lr = 0x82A59E08;
	sub_82A5AA98(ctx, base);
	// lfs f7,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmr f28,f1
	ctx.f28.f64 = ctx.f1.f64;
	// lfs f0,18796(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 18796);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmuls f1,f7,f0
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// bl 0x82a5aa98
	ctx.lr = 0x82A59E20;
	sub_82A5AA98(ctx, base);
	// lfs f0,18796(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 18796);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f28,f1,f28
	ctx.f28.f64 = double(float(ctx.f1.f64 * ctx.f28.f64));
	// lfs f6,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f4,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f27,f0,f4
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fadds f1,f5,f30
	ctx.f1.f64 = double(float(ctx.f5.f64 + ctx.f30.f64));
	// bl 0x82a5aa98
	ctx.lr = 0x82A59E44;
	sub_82A5AA98(ctx, base);
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f1.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x82a5aa98
	ctx.lr = 0x82A59E54;
	sub_82A5AA98(ctx, base);
	// lfs f0,18796(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 18796);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f27,f1,f26
	ctx.f27.f64 = double(float(ctx.f1.f64 * ctx.f26.f64));
	// lfs f3,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f26,f0,f13
	ctx.f26.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x82a5aa98
	ctx.lr = 0x82A59E74;
	sub_82A5AA98(ctx, base);
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = ctx.f1.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x82a5aa98
	ctx.lr = 0x82A59E84;
	sub_82A5AA98(ctx, base);
	// stfs f29,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f29,f25,f1
	ctx.f29.f64 = double(float(ctx.f25.f64 * ctx.f1.f64));
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lfs f0,18796(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 18796);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f26,f0,f12
	ctx.f26.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fadds f1,f10,f30
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f30.f64));
	// bl 0x82a5aa98
	ctx.lr = 0x82A59EAC;
	sub_82A5AA98(ctx, base);
	// lfs f9,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmr f25,f1
	ctx.f25.f64 = ctx.f1.f64;
	// lfs f0,18796(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 18796);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmuls f1,f9,f0
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// bl 0x82a5aa98
	ctx.lr = 0x82A59EC4;
	sub_82A5AA98(ctx, base);
	// fmuls f24,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = double(float(ctx.f1.f64 * ctx.f28.f64));
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x82a5aa98
	ctx.lr = 0x82A59ED4;
	sub_82A5AA98(ctx, base);
	// fnmsubs f8,f1,f25,f24
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(-(ctx.f1.f64 * ctx.f25.f64 - ctx.f24.f64)));
	// stfs f8,4(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,18796(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 18796);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lfs f6,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f25,f0,f7
	ctx.f25.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fmuls f26,f6,f0
	ctx.f26.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fadds f1,f26,f30
	ctx.f1.f64 = double(float(ctx.f26.f64 + ctx.f30.f64));
	// bl 0x82a5aa98
	ctx.lr = 0x82A59EFC;
	sub_82A5AA98(ctx, base);
	// fmr f24,f1
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = ctx.f1.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x82a5aa98
	ctx.lr = 0x82A59F0C;
	sub_82A5AA98(ctx, base);
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f1.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// bl 0x82a5aa98
	ctx.lr = 0x82A59F1C;
	sub_82A5AA98(ctx, base);
	// fmuls f5,f24,f28
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f24.f64 * ctx.f28.f64));
	// stfs f27,16(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f0,18796(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 18796);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmadds f4,f26,f1,f5
	ctx.f4.f64 = double(float(ctx.f26.f64 * ctx.f1.f64 + ctx.f5.f64));
	// stfs f4,8(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f3,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f1,f0,f3
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// fadds f1,f1,f30
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// bl 0x82a5aa98
	ctx.lr = 0x82A59F44;
	sub_82A5AA98(ctx, base);
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmr f28,f1
	ctx.f28.f64 = ctx.f1.f64;
	// lfs f0,18796(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 18796);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fadds f1,f12,f30
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f30.f64));
	// bl 0x82a5aa98
	ctx.lr = 0x82A59F60;
	sub_82A5AA98(ctx, base);
	// lfs f11,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmr f27,f1
	ctx.f27.f64 = ctx.f1.f64;
	// lfs f0,18796(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 18796);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// bl 0x82a5aa98
	ctx.lr = 0x82A59F78;
	sub_82A5AA98(ctx, base);
	// fmuls f10,f27,f28
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f27.f64 * ctx.f28.f64));
	// lfs f0,18796(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 18796);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmadds f9,f1,f29,f10
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f29.f64 + ctx.f10.f64));
	// stfs f9,20(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f8,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fadds f1,f7,f30
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f30.f64));
	// bl 0x82a5aa98
	ctx.lr = 0x82A59F9C;
	sub_82A5AA98(ctx, base);
	// lfs f6,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmr f28,f1
	ctx.f28.f64 = ctx.f1.f64;
	// lfs f0,18796(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 18796);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmuls f27,f6,f0
	ctx.f27.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fadds f1,f27,f30
	ctx.f1.f64 = double(float(ctx.f27.f64 + ctx.f30.f64));
	// bl 0x82a5aa98
	ctx.lr = 0x82A59FB8;
	sub_82A5AA98(ctx, base);
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f1.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x82a5aa98
	ctx.lr = 0x82A59FC8;
	sub_82A5AA98(ctx, base);
	// fmuls f5,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f28.f64));
	// lfs f0,18796(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 18796);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmsubs f4,f26,f29,f5
	ctx.f4.f64 = double(float(ctx.f26.f64 * ctx.f29.f64 - ctx.f5.f64));
	// stfs f4,24(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f3,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// bl 0x82a5aa98
	ctx.lr = 0x82A59FE8;
	sub_82A5AA98(ctx, base);
	// fneg f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// stfs f2,32(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lfs f0,18796(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 18796);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fadds f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// bl 0x82a5aa98
	ctx.lr = 0x82A5A008;
	sub_82A5AA98(ctx, base);
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// lfs f0,18796(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 18796);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82a5aa98
	ctx.lr = 0x82A5A020;
	sub_82A5AA98(ctx, base);
	// fmuls f12,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f29.f64));
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lfs f0,18796(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 18796);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fadds f1,f10,f30
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f30.f64));
	// bl 0x82a5aa98
	ctx.lr = 0x82A5A040;
	sub_82A5AA98(ctx, base);
	// lfs f9,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// lfs f0,18796(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 18796);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fadds f1,f8,f30
	ctx.f1.f64 = double(float(ctx.f8.f64 + ctx.f30.f64));
	// bl 0x82a5aa98
	ctx.lr = 0x82A5A05C;
	sub_82A5AA98(ctx, base);
	// fmuls f7,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f29.f64));
	// stfs f7,40(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831ce7b4
	ctx.lr = 0x82A5A070;
	__restfpr_24(ctx, base);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A5A074"))) PPC_WEAK_FUNC(sub_82A5A074);
PPC_FUNC_IMPL(__imp__sub_82A5A074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A5A078"))) PPC_WEAK_FUNC(sub_82A5A078);
PPC_FUNC_IMPL(__imp__sub_82A5A078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f2,28(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f3,44(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5A088"))) PPC_WEAK_FUNC(sub_82A5A088);
PPC_FUNC_IMPL(__imp__sub_82A5A088) {
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
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831ce770
	ctx.lr = 0x82A5A0A0;
	__savefpr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31778
	ctx.r30.s64 = -2082603008;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// fmr f28,f3
	ctx.f28.f64 = ctx.f3.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f27,f4
	ctx.f27.f64 = ctx.f4.f64;
	// lfs f0,18796(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 18796);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f4
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// lfs f31,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,-23844(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23844);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bl 0x82a5aa98
	ctx.lr = 0x82A5A0E0;
	sub_82A5AA98(ctx, base);
	// lfs f0,18796(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 18796);
	ctx.f0.f64 = double(temp.f32);
	// fmr f26,f1
	ctx.f26.f64 = ctx.f1.f64;
	// fmuls f1,f0,f27
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x82a5aa98
	ctx.lr = 0x82A5A0F4;
	sub_82A5AA98(ctx, base);
	// fsubs f12,f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f26.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmuls f10,f1,f28
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f28.f64));
	// stfs f31,60(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// fmuls f9,f1,f29
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f29.f64));
	// fmuls f8,f1,f30
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// lfs f0,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// fmuls f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// fmuls f6,f12,f30
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// fmuls f7,f12,f30
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fmuls f5,f12,f30
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fmuls f4,f12,f29
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fmuls f3,f12,f29
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fmuls f2,f12,f30
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fmuls f1,f12,f29
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fmuls f0,f12,f28
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// fmadds f13,f11,f30,f26
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f30.f64 + ctx.f26.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmadds f11,f6,f28,f9
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f28.f64 + ctx.f9.f64));
	// stfs f11,8(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmsubs f12,f7,f29,f10
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f29.f64 - ctx.f10.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmadds f10,f5,f29,f10
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f29.f64 + ctx.f10.f64));
	// stfs f10,16(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fmadds f7,f4,f29,f26
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f29.f64 + ctx.f26.f64));
	// stfs f7,20(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fmsubs f6,f3,f28,f8
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f28.f64 - ctx.f8.f64));
	// stfs f6,24(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fmsubs f5,f2,f28,f9
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f28.f64 - ctx.f9.f64));
	// stfs f5,32(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// fmadds f4,f1,f28,f8
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f28.f64 + ctx.f8.f64));
	// stfs f4,36(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// fmadds f3,f0,f28,f26
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f28.f64 + ctx.f26.f64));
	// stfs f3,40(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831ce7bc
	ctx.lr = 0x82A5A1A0;
	__restfpr_26(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5A1B4"))) PPC_WEAK_FUNC(sub_82A5A1B4);
PPC_FUNC_IMPL(__imp__sub_82A5A1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A5A1B8"))) PPC_WEAK_FUNC(sub_82A5A1B8);
PPC_FUNC_IMPL(__imp__sub_82A5A1B8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f13,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f7,f9,f9,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fmadds f6,f8,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fadds f0,f6,f11
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f11.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a5a1fc
	if (!cr6.gt) goto loc_82A5A1FC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f10,-10804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10804);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
	// b 0x82a5a200
	goto loc_82A5A200;
loc_82A5A1FC:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_82A5A200:
	// lfs f10,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f10
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmuls f6,f8,f8
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// lfs f5,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f3,f8,f12
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// fmuls f1,f8,f10
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fmuls f11,f5,f10
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fmuls f4,f10,f12
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f13,56(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// fmuls f10,f5,f8
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// stfs f13,52(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// fmuls f2,f5,f12
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// stfs f13,48(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmuls f8,f7,f0
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f7,f6,f0
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f5,f3,f0
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f3,f1,f0
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f12,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,60(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// fmuls f6,f4,f0
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f1,f10,f0
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f4,f2,f0
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f2,f11,f0
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fadds f0,f8,f9
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// fadds f13,f7,f8
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// fadds f11,f7,f9
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// fsubs f8,f6,f1
	ctx.f8.f64 = double(float(ctx.f6.f64 - ctx.f1.f64));
	// stfs f8,4(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fadds f7,f1,f6
	ctx.f7.f64 = double(float(ctx.f1.f64 + ctx.f6.f64));
	// stfs f7,16(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fadds f9,f2,f5
	ctx.f9.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// stfs f9,8(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fsubs f6,f5,f2
	ctx.f6.f64 = double(float(ctx.f5.f64 - ctx.f2.f64));
	// stfs f6,32(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// fsubs f10,f3,f4
	ctx.f10.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// stfs f10,24(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fadds f5,f4,f3
	ctx.f5.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// stfs f5,36(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// fsubs f4,f12,f13
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f4,0(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fsubs f3,f12,f11
	ctx.f3.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f3,20(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fsubs f2,f12,f0
	ctx.f2.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f2,40(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5A2CC"))) PPC_WEAK_FUNC(sub_82A5A2CC);
PPC_FUNC_IMPL(__imp__sub_82A5A2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A5A2D0"))) PPC_WEAK_FUNC(sub_82A5A2D0);
PPC_FUNC_IMPL(__imp__sub_82A5A2D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831ce764
	ctx.lr = 0x82A5A2E0;
	__savefpr_23(ctx, base);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lfs f12,48(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f11,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// li r9,4
	ctx.r9.s64 = 4;
	// lfs f10,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// lfs f9,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,52(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r4,-16
	ctx.r11.s64 = ctx.r4.s64 + -16;
	// lfs f13,-26260(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,-12
	ctx.r10.s64 = ctx.r10.s64 + -12;
	// lfs f0,9008(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f7,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lfs f6,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,56(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,60(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,44(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f28.f64 = double(temp.f32);
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f13,40(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f13,60(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
loc_82A5A384:
	// lfs f13,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f27,f10,f13
	ctx.f27.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f26,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f25,f6,f13
	ctx.f25.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// lfs f24,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f23,f2,f13
	ctx.f23.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// lfsu f0,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmuls f13,f29,f13
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f13.f64));
	// fmadds f27,f9,f0,f27
	ctx.f27.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f27.f64));
	// fmadds f25,f5,f0,f25
	ctx.f25.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f25.f64));
	// fmadds f23,f1,f0,f23
	ctx.f23.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f23.f64));
	// fmadds f0,f28,f0,f13
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f13,f12,f26,f27
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f26.f64 + ctx.f27.f64));
	// fmadds f27,f8,f26,f25
	ctx.f27.f64 = double(float(ctx.f8.f64 * ctx.f26.f64 + ctx.f25.f64));
	// fmadds f25,f4,f26,f23
	ctx.f25.f64 = double(float(ctx.f4.f64 * ctx.f26.f64 + ctx.f23.f64));
	// fmadds f0,f31,f26,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f26.f64 + ctx.f0.f64));
	// fmadds f13,f11,f24,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f24.f64 + ctx.f13.f64));
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmadds f13,f7,f24,f27
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f24.f64 + ctx.f27.f64));
	// stfs f13,8(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmadds f13,f3,f24,f25
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f24.f64 + ctx.f25.f64));
	// stfs f13,12(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fmadds f0,f30,f24,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f24.f64 + ctx.f0.f64));
	// stfsu f0,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a5a384
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A5A384;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831ce7b0
	ctx.lr = 0x82A5A3F0;
	__restfpr_23(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5A3FC"))) PPC_WEAK_FUNC(sub_82A5A3FC);
PPC_FUNC_IMPL(__imp__sub_82A5A3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A5A400"))) PPC_WEAK_FUNC(sub_82A5A400);
PPC_FUNC_IMPL(__imp__sub_82A5A400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831ce770
	ctx.lr = 0x82A5A410;
	__savefpr_26(ctx, base);
	// lfs f13,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f12,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f0,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f8,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f5,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f8,f12
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// lfs f1,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f2,f8,f10
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// lfs f31,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f8,f5,f0
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f30,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f12,f5,f12
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// lfs f3,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f10,f5,f10
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// lfs f5,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f29,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f9,f31,f1,f9
	ctx.f9.f64 = double(float(ctx.f31.f64 * ctx.f1.f64 + ctx.f9.f64));
	// lfs f27,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f7,f30,f1,f7
	ctx.f7.f64 = double(float(ctx.f30.f64 * ctx.f1.f64 + ctx.f7.f64));
	// lfs f26,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f26.f64 = double(temp.f32);
	// fmadds f11,f1,f3,f11
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f3.f64 + ctx.f11.f64));
	// lfs f1,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f6,f5,f3,f6
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f3.f64 + ctx.f6.f64));
	// lfs f28,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f4,f5,f31,f4
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f31.f64 + ctx.f4.f64));
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f2,f5,f30,f2
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f30.f64 + ctx.f2.f64));
	// lfs f5,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f8,f29,f3,f8
	ctx.f8.f64 = double(float(ctx.f29.f64 * ctx.f3.f64 + ctx.f8.f64));
	// lfs f13,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f3,f29,f31,f12
	ctx.f3.f64 = double(float(ctx.f29.f64 * ctx.f31.f64 + ctx.f12.f64));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmadds f12,f29,f30,f10
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f30.f64 + ctx.f10.f64));
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fmadds f10,f1,f27,f9
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f27.f64 + ctx.f9.f64));
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fmadds f9,f26,f27,f7
	ctx.f9.f64 = double(float(ctx.f26.f64 * ctx.f27.f64 + ctx.f7.f64));
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fmadds f11,f27,f28,f11
	ctx.f11.f64 = double(float(ctx.f27.f64 * ctx.f28.f64 + ctx.f11.f64));
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// fmadds f7,f5,f28,f6
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f28.f64 + ctx.f6.f64));
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// fmadds f6,f5,f1,f4
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f1.f64 + ctx.f4.f64));
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// fmadds f5,f5,f26,f2
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f26.f64 + ctx.f2.f64));
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f13,40(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f13,60(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f11,0(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f10,4(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f9,8(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f4,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// stfs f7,16(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fmadds f2,f4,f28,f8
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f28.f64 + ctx.f8.f64));
	// stfs f6,20(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fmadds f1,f4,f1,f3
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f1.f64 + ctx.f3.f64));
	// stfs f5,24(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fmadds f0,f4,f26,f12
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f26.f64 + ctx.f12.f64));
	// stfs f2,32(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f1,36(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831ce7bc
	ctx.lr = 0x82A5A540;
	__restfpr_26(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5A54C"))) PPC_WEAK_FUNC(sub_82A5A54C);
PPC_FUNC_IMPL(__imp__sub_82A5A54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A5A550"))) PPC_WEAK_FUNC(sub_82A5A550);
PPC_FUNC_IMPL(__imp__sub_82A5A550) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f13,60(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// bl 0x82a59d88
	ctx.lr = 0x82A5A59C;
	sub_82A59D88(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5A5AC"))) PPC_WEAK_FUNC(sub_82A5A5AC);
PPC_FUNC_IMPL(__imp__sub_82A5A5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A5A5B0"))) PPC_WEAK_FUNC(sub_82A5A5B0);
PPC_FUNC_IMPL(__imp__sub_82A5A5B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A5A5B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A5A5BC:
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,-16
	ctx.r5.s64 = ctx.r1.s64 + -16;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stvx128 v63,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// lfsx f0,r6,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r4,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r3.u32, temp.u32);
	// blt cr6,0x82a5a5bc
	if (cr6.lt) goto loc_82A5A5BC;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmpwi cr6,r10,16
	cr6.compare<int32_t>(ctx.r10.s32, 16, xer);
	// blt cr6,0x82a5a5b8
	if (cr6.lt) goto loc_82A5A5B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5A600"))) PPC_WEAK_FUNC(sub_82A5A600);
PPC_FUNC_IMPL(__imp__sub_82A5A600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f10,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lfs f9,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lfs f8,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,24(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lfs f7,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,28(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// lfs f6,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,32(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// lfs f5,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,36(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// lfs f4,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,40(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// lfs f3,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,44(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 44, temp.u32);
	// lfs f2,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,48(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 48, temp.u32);
	// lfs f1,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,52(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 52, temp.u32);
	// lfs f0,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 56, temp.u32);
	// lfs f13,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,60(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 60, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5A684"))) PPC_WEAK_FUNC(sub_82A5A684);
PPC_FUNC_IMPL(__imp__sub_82A5A684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A5A688"))) PPC_WEAK_FUNC(sub_82A5A688);
PPC_FUNC_IMPL(__imp__sub_82A5A688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fmuls f8,f12,f12
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fsqrts f1,f7
	ctx.f1.f64 = double(float(sqrt(ctx.f7.f64)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5A6B0"))) PPC_WEAK_FUNC(sub_82A5A6B0);
PPC_FUNC_IMPL(__imp__sub_82A5A6B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsqrts f1,f3
	ctx.f1.f64 = double(float(sqrt(ctx.f3.f64)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5A6E8"))) PPC_WEAK_FUNC(sub_82A5A6E8);
PPC_FUNC_IMPL(__imp__sub_82A5A6E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fmuls f8,f12,f12
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f1,f9,f9,f8
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5A70C"))) PPC_WEAK_FUNC(sub_82A5A70C);
PPC_FUNC_IMPL(__imp__sub_82A5A70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A5A710"))) PPC_WEAK_FUNC(sub_82A5A710);
PPC_FUNC_IMPL(__imp__sub_82A5A710) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f1,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x82a5aa98
	ctx.lr = 0x82A5A740;
	sub_82A5AA98(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lfs f0,-23844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23844);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// bl 0x82a5aa98
	ctx.lr = 0x82A5A764;
	sub_82A5AA98(ctx, base);
	// lfs f11,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f1
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f1.f64));
	// stfs f10,8(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
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

__attribute__((alias("__imp__sub_82A5A78C"))) PPC_WEAK_FUNC(sub_82A5A78C);
PPC_FUNC_IMPL(__imp__sub_82A5A78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A5A790"))) PPC_WEAK_FUNC(sub_82A5A790);
PPC_FUNC_IMPL(__imp__sub_82A5A790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// stfs f11,0(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f8,4(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f6,8(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5A7C4"))) PPC_WEAK_FUNC(sub_82A5A7C4);
PPC_FUNC_IMPL(__imp__sub_82A5A7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A5A7C8"))) PPC_WEAK_FUNC(sub_82A5A7C8);
PPC_FUNC_IMPL(__imp__sub_82A5A7C8) {
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
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831ce778
	ctx.lr = 0x82A5A7E0;
	__savefpr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f30,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f31,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,-23844(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23844);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bl 0x82a5aa98
	ctx.lr = 0x82A5A814;
	sub_82A5AA98(ctx, base);
	// lfs f12,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmr f28,f1
	ctx.f28.f64 = ctx.f1.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f12
	ctx.f1.f64 = ctx.f12.f64;
	// bl 0x82a5aa98
	ctx.lr = 0x82A5A828;
	sub_82A5AA98(ctx, base);
	// fmuls f11,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f29.f64));
	// fmuls f10,f1,f30
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// fmsubs f9,f28,f30,f11
	ctx.f9.f64 = double(float(ctx.f28.f64 * ctx.f30.f64 - ctx.f11.f64));
	// stfs f9,4(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmadds f8,f28,f29,f10
	ctx.f8.f64 = double(float(ctx.f28.f64 * ctx.f29.f64 + ctx.f10.f64));
	// stfs f8,8(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831ce7c4
	ctx.lr = 0x82A5A84C;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5A860"))) PPC_WEAK_FUNC(sub_82A5A860);
PPC_FUNC_IMPL(__imp__sub_82A5A860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f0,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fmadds f10,f12,f11,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f13.f64));
	// stfs f10,0(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fmadds f6,f9,f11,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f7.f64));
	// stfs f6,4(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f5,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f1
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// fmadds f2,f5,f11,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f3.f64));
	// stfs f2,8(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5A8AC"))) PPC_WEAK_FUNC(sub_82A5A8AC);
PPC_FUNC_IMPL(__imp__sub_82A5A8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A5A8B0"))) PPC_WEAK_FUNC(sub_82A5A8B0);
PPC_FUNC_IMPL(__imp__sub_82A5A8B0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lfs f11,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f10,f11,f11
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmadds f9,f0,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f8,f13,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fsqrts f10,f8
	ctx.f10.f64 = double(float(sqrt(ctx.f8.f64)));
	// fcmpu cr6,f10,f12
	cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// bne cr6,0x82a5a8f8
	if (!cr6.eq) goto loc_82A5A8F8;
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f11,0(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
loc_82A5A8F8:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f12,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f10.f64));
	// fmuls f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f11,0(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f10,4(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f9,8(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5A920"))) PPC_WEAK_FUNC(sub_82A5A920);
PPC_FUNC_IMPL(__imp__sub_82A5A920) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// stfs f1,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lis r9,16096
	ctx.r9.s64 = 1054867456;
	// clrlwi r11,r10,1
	ctx.r11.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bge cr6,0x82a5a950
	if (!cr6.lt) goto loc_82A5A950;
	// fmuls f13,f1,f1
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,24552(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24552);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fnmsubs f1,f12,f1,f1
	ctx.f1.f64 = double(float(-(ctx.f12.f64 * ctx.f1.f64 - ctx.f1.f64)));
	// blr 
	return;
loc_82A5A950:
	// lis r9,16280
	ctx.r9.s64 = 1066926080;
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bge cr6,0x82a5a980
	if (!cr6.lt) goto loc_82A5A980;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lfs f12,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f13,-8044(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8044);
	ctx.f13.f64 = double(temp.f32);
	// fadds f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fdivs f0,f11,f10
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// b 0x82a5a9c8
	goto loc_82A5A9C8;
loc_82A5A980:
	// lis r9,16412
	ctx.r9.s64 = 1075576832;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bge cr6,0x82a5a9b4
	if (!cr6.lt) goto loc_82A5A9B4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lfs f13,-11316(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11316);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmadds f10,f0,f13,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// lfs f13,-8048(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -8048);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f11,f10
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// b 0x82a5a9c8
	goto loc_82A5A9C8;
loc_82A5A9B4:
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f12,20056(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20056);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4312(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4312);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
loc_82A5A9C8:
	// fmuls f11,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lfs f12,24552(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24552);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmsubs f9,f10,f0,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 - ctx.f0.f64));
	// fsubs f0,f13,f9
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// bge cr6,0x82a5a9ec
	if (!cr6.lt) goto loc_82A5A9EC;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82A5A9EC:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5A9F4"))) PPC_WEAK_FUNC(sub_82A5A9F4);
PPC_FUNC_IMPL(__imp__sub_82A5A9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A5A9F8"))) PPC_WEAK_FUNC(sub_82A5A9F8);
PPC_FUNC_IMPL(__imp__sub_82A5A9F8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = ctx.f1.f64;
	// lfs f8,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f2,f8
	cr6.compare(ctx.f2.f64, ctx.f8.f64);
	// bne cr6,0x82a5aa50
	if (!cr6.eq) goto loc_82A5AA50;
	// fcmpu cr6,f1,f8
	cr6.compare(ctx.f1.f64, ctx.f8.f64);
	// ble cr6,0x82a5aa38
	if (!cr6.gt) goto loc_82A5AA38;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,4312(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4312);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A5AA38:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,9388(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9388);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A5AA50:
	// fdivs f1,f7,f2
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f7.f64 / ctx.f2.f64));
	// bl 0x82a5a920
	ctx.lr = 0x82A5AA58;
	sub_82A5A920(ctx, base);
	// fcmpu cr6,f2,f8
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f2.f64, ctx.f8.f64);
	// bge cr6,0x82a5aa88
	if (!cr6.lt) goto loc_82A5AA88;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fcmpu cr6,f7,f8
	cr6.compare(ctx.f7.f64, ctx.f8.f64);
	// lfs f0,11112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11112);
	ctx.f0.f64 = double(temp.f32);
	// bge cr6,0x82a5aa84
	if (!cr6.lt) goto loc_82A5AA84;
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A5AA84:
	// fadds f1,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
loc_82A5AA88:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5AA98"))) PPC_WEAK_FUNC(sub_82A5AA98);
PPC_FUNC_IMPL(__imp__sub_82A5AA98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// addi r11,r11,-10184
	ctx.r11.s64 = ctx.r11.s64 + -10184;
	// lfs f0,-2068(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2068);
	ctx.f0.f64 = double(temp.f32);
	// bgt cr6,0x82a5aabc
	if (cr6.gt) goto loc_82A5AABC;
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// b 0x82a5aac8
	goto loc_82A5AAC8;
loc_82A5AABC:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82a5aac8
	if (cr6.lt) goto loc_82A5AAC8;
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
loc_82A5AAC8:
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f0,-2064(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2064);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// lfs f11,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f11.f64 = double(temp.f32);
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// blt cr6,0x82a5aaec
	if (cr6.lt) goto loc_82A5AAEC;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f13,20056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20056);
	ctx.f13.f64 = double(temp.f32);
loc_82A5AAEC:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f12,-23844(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23844);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f1,f12
	cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// blt cr6,0x82a5ab00
	if (cr6.lt) goto loc_82A5AB00;
	// fsubs f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
loc_82A5AB00:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lfs f0,-8036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8036);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f12.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmpwi cr6,r10,512
	cr6.compare<int32_t>(ctx.r10.s32, 512, xer);
	// bne cr6,0x82a5ab30
	if (!cr6.eq) goto loc_82A5AB30;
	// lfs f0,2048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2048);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f1,f0,f2
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// blr 
	return;
loc_82A5AB30:
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f12,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lfsx f8,r8,r7
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfsx f7,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f0,f9
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// fsubs f5,f11,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f6.f64));
	// fmuls f4,f8,f6
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fmadds f3,f7,f5,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f5.f64 + ctx.f4.f64));
	// fmuls f1,f3,f13
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmuls f1,f1,f2
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5AB70"))) PPC_WEAK_FUNC(sub_82A5AB70);
PPC_FUNC_IMPL(__imp__sub_82A5AB70) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,-12252
	ctx.r11.s64 = ctx.r11.s64 + -12252;
	// lfs f0,-23844(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23844);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f10
	cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// ble cr6,0x82a5abb4
	if (!cr6.gt) goto loc_82A5ABB4;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f13,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20056);
	ctx.f12.f64 = double(temp.f32);
	// fsel f13,f0,f13,f12
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fnmsubs f0,f13,f11,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f11.f64 - ctx.f0.f64)));
loc_82A5ABB4:
	// fabs f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f1
	cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x82a5abd0
	if (cr6.lt) goto loc_82A5ABD0;
	// fsubs f13,f10,f1
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f1.f64));
	// li r3,0
	ctx.r3.s64 = 0;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blelr cr6
	if (!cr6.gt) return;
loc_82A5ABD0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5ABD8"))) PPC_WEAK_FUNC(sub_82A5ABD8);
PPC_FUNC_IMPL(__imp__sub_82A5ABD8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// addi r11,r11,-12252
	ctx.r11.s64 = ctx.r11.s64 + -12252;
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f13,f10
	cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// ble cr6,0x82a5ac10
	if (!cr6.gt) goto loc_82A5AC10;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f13,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20056);
	ctx.f12.f64 = double(temp.f32);
	// fsel f13,f0,f13,f12
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fnmsubs f0,f13,f11,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f11.f64 - ctx.f0.f64)));
loc_82A5AC10:
	// fabs f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f1
	cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x82a5ac2c
	if (cr6.lt) goto loc_82A5AC2C;
	// fsubs f13,f10,f1
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f1.f64));
	// li r3,0
	ctx.r3.s64 = 0;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blelr cr6
	if (!cr6.gt) return;
loc_82A5AC2C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5AC34"))) PPC_WEAK_FUNC(sub_82A5AC34);
PPC_FUNC_IMPL(__imp__sub_82A5AC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A5AC38"))) PPC_WEAK_FUNC(sub_82A5AC38);
PPC_FUNC_IMPL(__imp__sub_82A5AC38) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f3
	ctx.f30.f64 = ctx.f3.f64;
	// bl 0x825ce9f8
	ctx.lr = 0x82A5AC58;
	sub_825CE9F8(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20056);
	ctx.f13.f64 = double(temp.f32);
	// fsel f0,f1,f0,f13
	ctx.f0.f64 = ctx.f1.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fcmpu cr6,f30,f13
	cr6.compare(ctx.f30.f64, ctx.f13.f64);
	// ble cr6,0x82a5ac7c
	if (!cr6.gt) goto loc_82A5AC7C;
	// fmr f30,f13
	ctx.f30.f64 = ctx.f13.f64;
loc_82A5AC7C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f11,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// lfs f12,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fcmpu cr6,f31,f12
	cr6.compare(ctx.f31.f64, ctx.f12.f64);
	// addi r11,r11,-12252
	ctx.r11.s64 = ctx.r11.s64 + -12252;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// bge cr6,0x82a5aca8
	if (!cr6.lt) goto loc_82A5ACA8;
	// fadds f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// b 0x82a5acb4
	goto loc_82A5ACB4;
loc_82A5ACA8:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x82a5acb4
	if (cr6.lt) goto loc_82A5ACB4;
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
loc_82A5ACB4:
	// fadds f1,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// fcmpu cr6,f1,f12
	cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// bge cr6,0x82a5acc8
	if (!cr6.lt) goto loc_82A5ACC8;
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// b 0x82a5acd4
	goto loc_82A5ACD4;
loc_82A5ACC8:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82a5acd4
	if (cr6.lt) goto loc_82A5ACD4;
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
loc_82A5ACD4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5ACEC"))) PPC_WEAK_FUNC(sub_82A5ACEC);
PPC_FUNC_IMPL(__imp__sub_82A5ACEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A5ACF0"))) PPC_WEAK_FUNC(sub_82A5ACF0);
PPC_FUNC_IMPL(__imp__sub_82A5ACF0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// addi r9,r11,-12252
	ctx.r9.s64 = ctx.r11.s64 + -12252;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f10,-12252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12252);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,20056(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20056);
	ctx.f13.f64 = double(temp.f32);
	// fabs f9,f0
	ctx.f9.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f9,f11
	cr6.compare(ctx.f9.f64, ctx.f11.f64);
	// ble cr6,0x82a5ad30
	if (!cr6.gt) goto loc_82A5AD30;
	// fsel f11,f0,f12,f13
	ctx.f11.f64 = ctx.f0.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// fnmsubs f0,f11,f10,f0
	ctx.f0.f64 = double(float(-(ctx.f11.f64 * ctx.f10.f64 - ctx.f0.f64)));
loc_82A5AD30:
	// fsel f13,f0,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82a5ad44
	if (!cr6.gt) goto loc_82A5AD44;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82A5AD44:
	// fmuls f0,f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82a5ad78
	if (!cr6.lt) goto loc_82A5AD78;
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
loc_82A5AD78:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bltlr cr6
	if (cr6.lt) return;
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5AD8C"))) PPC_WEAK_FUNC(sub_82A5AD8C);
PPC_FUNC_IMPL(__imp__sub_82A5AD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A5AD90"))) PPC_WEAK_FUNC(sub_82A5AD90);
PPC_FUNC_IMPL(__imp__sub_82A5AD90) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// addi r9,r11,-12252
	ctx.r9.s64 = ctx.r11.s64 + -12252;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f10,-12252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12252);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20056(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20056);
	ctx.f12.f64 = double(temp.f32);
	// fabs f9,f0
	ctx.f9.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f9,f13
	cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// ble cr6,0x82a5add0
	if (!cr6.gt) goto loc_82A5ADD0;
	// fsel f13,f0,f11,f12
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f11.f64 : ctx.f12.f64;
	// fnmsubs f0,f13,f10,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f10.f64 - ctx.f0.f64)));
loc_82A5ADD0:
	// fmuls f9,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f9,f13
	cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// bge cr6,0x82a5adec
	if (!cr6.lt) goto loc_82A5ADEC;
	// fsel f12,f0,f11,f12
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f11.f64 : ctx.f12.f64;
	// fnmsubs f0,f12,f10,f0
	ctx.f0.f64 = double(float(-(ctx.f12.f64 * ctx.f10.f64 - ctx.f0.f64)));
loc_82A5ADEC:
	// fabs f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fabs f11,f1
	ctx.f11.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x82a5ae00
	if (!cr6.lt) goto loc_82A5AE00;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82A5AE00:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82a5ae28
	if (!cr6.lt) goto loc_82A5AE28;
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
loc_82A5AE28:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bltlr cr6
	if (cr6.lt) return;
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5AE3C"))) PPC_WEAK_FUNC(sub_82A5AE3C);
PPC_FUNC_IMPL(__imp__sub_82A5AE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A5AE40"))) PPC_WEAK_FUNC(sub_82A5AE40);
PPC_FUNC_IMPL(__imp__sub_82A5AE40) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// addi r10,r11,-12252
	ctx.r10.s64 = ctx.r11.s64 + -12252;
	// lfs f11,-12252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12252);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x82a5ae80
	if (!cr6.gt) goto loc_82A5AE80;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20056);
	ctx.f12.f64 = double(temp.f32);
	// fsel f13,f0,f13,f12
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fnmsubs f0,f13,f11,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f11.f64 - ctx.f0.f64)));
loc_82A5AE80:
	// fabs f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fabs f10,f1
	ctx.f10.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lfs f13,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f10
	cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// bge cr6,0x82a5aea8
	if (!cr6.lt) goto loc_82A5AEA8;
	// fmuls f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x82a5aea8
	if (cr6.lt) goto loc_82A5AEA8;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82A5AEA8:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82a5aed0
	if (!cr6.lt) goto loc_82A5AED0;
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
loc_82A5AED0:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bltlr cr6
	if (cr6.lt) return;
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5AEE4"))) PPC_WEAK_FUNC(sub_82A5AEE4);
PPC_FUNC_IMPL(__imp__sub_82A5AEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A5AEE8"))) PPC_WEAK_FUNC(sub_82A5AEE8);
PPC_FUNC_IMPL(__imp__sub_82A5AEE8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lfs f10,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f12,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f6,f10,f8
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f7,f0,f12
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f5,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f2,f5,f10
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f10.f64));
	// lfs f3,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f4,f0,f11
	ctx.f4.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsubs f1,f3,f10
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f10.f64));
	// lfs f10,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f7,f6
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fmuls f7,f9,f6
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fmadds f6,f1,f4,f8
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f4.f64 + ctx.f8.f64));
	// fmadds f5,f2,f4,f7
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f4.f64 + ctx.f7.f64));
	// fmuls f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fcmpu cr6,f4,f10
	cr6.compare(ctx.f4.f64, ctx.f10.f64);
	// bge cr6,0x82a5af8c
	if (!cr6.lt) goto loc_82A5AF8C;
	// lfs f9,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsubs f5,f9,f3
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f3.f64));
	// lfs f4,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f6,f13,f11
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fmr f7,f3
	ctx.f7.f64 = ctx.f3.f64;
	// lfs f3,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f13,f12
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f1,f4,f9
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f9.f64));
	// fsubs f0,f3,f9
	ctx.f0.f64 = double(float(ctx.f3.f64 - ctx.f9.f64));
	// fmuls f13,f8,f5
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmuls f12,f6,f5
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmadds f11,f1,f2,f13
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f2.f64 + ctx.f13.f64));
	// fmadds f9,f0,f2,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f2.f64 + ctx.f12.f64));
	// fmuls f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fcmpu cr6,f8,f10
	cr6.compare(ctx.f8.f64, ctx.f10.f64);
	// bltlr cr6
	if (cr6.lt) return;
loc_82A5AF8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5AF94"))) PPC_WEAK_FUNC(sub_82A5AF94);
PPC_FUNC_IMPL(__imp__sub_82A5AF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A5AF98"))) PPC_WEAK_FUNC(sub_82A5AF98);
PPC_FUNC_IMPL(__imp__sub_82A5AF98) {
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
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82a5aee8
	ctx.lr = 0x82A5AFC0;
	sub_82A5AEE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a5afe0
	if (!cr6.eq) goto loc_82A5AFE0;
loc_82A5AFCC:
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
loc_82A5AFE0:
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f7,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f10,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f9,f7,f0
	ctx.f9.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fsubs f5,f10,f6
	ctx.f5.f64 = double(float(ctx.f10.f64 - ctx.f6.f64));
	// lfs f7,-11356(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11356);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f4,f8,f11
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmsubs f8,f5,f9,f4
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f9.f64 - ctx.f4.f64));
	// fabs f3,f8
	ctx.f3.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fcmpu cr6,f3,f7
	cr6.compare(ctx.f3.f64, ctx.f7.f64);
	// blt cr6,0x82a5afcc
	if (cr6.lt) goto loc_82A5AFCC;
	// lfs f7,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f12,f0
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f5,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f13,f7
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// fsubs f3,f5,f7
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f7.f64));
	// lfs f2,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f10,f5
	ctx.f1.f64 = double(float(ctx.f10.f64 - ctx.f5.f64));
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f2
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fmuls f11,f11,f3
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// fmsubs f10,f1,f6,f11
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f6.f64 - ctx.f11.f64));
	// fdivs f8,f10,f8
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f8.f64));
	// fmuls f6,f9,f8
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fmuls f5,f12,f8
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fmuls f4,f4,f8
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// fadds f3,f0,f6
	ctx.f3.f64 = double(float(ctx.f0.f64 + ctx.f6.f64));
	// stfs f3,0(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fadds f2,f2,f5
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// stfs f2,4(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fadds f1,f7,f4
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f4.f64));
	// stfs f1,8(r9)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5B094"))) PPC_WEAK_FUNC(sub_82A5B094);
PPC_FUNC_IMPL(__imp__sub_82A5B094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A5B098"))) PPC_WEAK_FUNC(sub_82A5B098);
PPC_FUNC_IMPL(__imp__sub_82A5B098) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lfs f12,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f9,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f9,f11
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fsubs f6,f12,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// lfs f9,-11356(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11356);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f5,f10,f13
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmsubs f10,f7,f6,f5
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 - ctx.f5.f64));
	// fabs f4,f10
	ctx.f4.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fcmpu cr6,f4,f9
	cr6.compare(ctx.f4.f64, ctx.f9.f64);
	// bge cr6,0x82a5b0f0
	if (!cr6.lt) goto loc_82A5B0F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A5B0F0:
	// lfs f9,8(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f7,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f12,f9
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fsubs f5,f9,f7
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f4,f0,f10
	ctx.f4.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fmuls f3,f5,f13
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmsubs f2,f6,f8,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f8.f64 - ctx.f3.f64));
	// fmuls f1,f2,f4
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f10,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fsubs f6,f12,f10
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fsubs f5,f11,f0
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fmuls f3,f8,f7
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fmsubs f2,f6,f5,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f5.f64 - ctx.f3.f64));
	// fmuls f1,f2,f4
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// stfs f1,0(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5B160"))) PPC_WEAK_FUNC(sub_82A5B160);
PPC_FUNC_IMPL(__imp__sub_82A5B160) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,-11356(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11356);
	ctx.f12.f64 = double(temp.f32);
	// fabs f11,f13
	ctx.f11.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bge cr6,0x82a5b18c
	if (!cr6.lt) goto loc_82A5B18C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A5B18C:
	// fsubs f0,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5B1A0"))) PPC_WEAK_FUNC(sub_82A5B1A0);
PPC_FUNC_IMPL(__imp__sub_82A5B1A0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fsubs f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f10,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f10,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f13,f13
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f9,f9,f8
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fcmpu cr6,f13,f10
	cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// beq cr6,0x82a5b290
	if (cr6.eq) goto loc_82A5B290;
	// lfs f9,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f7,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// lfs f5,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f11,f5
	ctx.f3.f64 = double(float(ctx.f11.f64 - ctx.f5.f64));
	// fsubs f2,f5,f4
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// lfs f12,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f7,f0,f12
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f5,f11,f9
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// lfs f11,-11356(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11356);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f4,f6,f6
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fmuls f0,f5,f6
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fmadds f12,f2,f2,f4
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f4.f64));
	// fmadds f9,f3,f2,f0
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f0.f64));
	// fmadds f6,f7,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f12.f64));
	// fmadds f0,f8,f7,f9
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f9.f64));
	// fnmsubs f5,f1,f1,f6
	ctx.f5.f64 = double(float(-(ctx.f1.f64 * ctx.f1.f64 - ctx.f6.f64)));
	// fmuls f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmsubs f12,f0,f0,f4
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 - ctx.f4.f64));
	// fabs f3,f12
	ctx.f3.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f3,f11
	cr6.compare(ctx.f3.f64, ctx.f11.f64);
	// bge cr6,0x82a5b254
	if (!cr6.lt) goto loc_82A5B254;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// blr 
	return;
loc_82A5B254:
	// fcmpu cr6,f12,f10
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// ble cr6,0x82a5b290
	if (!cr6.gt) goto loc_82A5B290;
	// fsqrts f11,f12
	ctx.f11.f64 = double(float(sqrt(ctx.f12.f64)));
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// li r3,2
	ctx.r3.s64 = 2;
	// lfs f12,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f12.f64 = double(temp.f32);
	// fneg f10,f0
	ctx.f10.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fdivs f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fsubs f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsubs f7,f10,f11
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fmuls f6,f8,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f5,f7,f9
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// stfs f5,0(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f6,0(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
loc_82A5B290:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5B298"))) PPC_WEAK_FUNC(sub_82A5B298);
PPC_FUNC_IMPL(__imp__sub_82A5B298) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r8,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r8.u32);
	// lfs f10,-24(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	ctx.f10.f64 = double(temp.f32);
	// stw r10,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r10.u32);
	// lfs f13,-8(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// stw r7,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r7.u32);
	// lfs f11,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f11.f64 = double(temp.f32);
	// stw r3,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r3.u32);
	// lfs f12,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lwz r3,4(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f9,-11356(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -11356);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f0,f0
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stw r4,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r4.u32);
	// stw r3,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r3.u32);
	// fmadds f12,f13,f13,f8
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fcmpu cr6,f12,f9
	cr6.compare(ctx.f12.f64, ctx.f9.f64);
	// bge cr6,0x82a5b304
	if (!cr6.lt) goto loc_82A5B304;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A5B304:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f9,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f8,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f7,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f11,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f5,f8,f11
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmadds f4,f13,f10,f9
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fmadds f3,f7,f13,f5
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fmadds f2,f6,f0,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f3.f64));
	// fsubs f1,f2,f4
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// fdivs f0,f1,f12
	ctx.f0.f64 = double(float(ctx.f1.f64 / ctx.f12.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5B340"))) PPC_WEAK_FUNC(sub_82A5B340);
PPC_FUNC_IMPL(__imp__sub_82A5B340) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lfs f9,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f13,f0
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f3,f9,f7
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// lfs f5,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f13,f11
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fsubs f1,f5,f9
	ctx.f1.f64 = double(float(ctx.f5.f64 - ctx.f9.f64));
	// lfs f2,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f12,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsubs f7,f2,f7
	ctx.f7.f64 = double(float(ctx.f2.f64 - ctx.f7.f64));
	// lfs f10,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f5,f12,f11
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fsubs f2,f2,f9
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f9.f64));
	// fmuls f11,f6,f3
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// fmuls f9,f1,f4
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// fmsubs f11,f8,f7,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 - ctx.f11.f64));
	// fmsubs f8,f5,f2,f9
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f2.f64 - ctx.f9.f64));
	// fmuls f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fcmpu cr6,f7,f10
	cr6.compare(ctx.f7.f64, ctx.f10.f64);
	// bge cr6,0x82a5b3ac
	if (!cr6.lt) goto loc_82A5B3AC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A5B3AC:
	// lfs f9,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f0,f12
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f5,f7,f9
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// lfs f4,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f9
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f9.f64));
	// li r3,0
	ctx.r3.s64 = 0;
	// fmuls f2,f5,f8
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// fmsubs f1,f6,f3,f2
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f3.f64 - ctx.f2.f64));
	// fmuls f0,f1,f11
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fcmpu cr6,f0,f10
	cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bltlr cr6
	if (cr6.lt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5B3E8"))) PPC_WEAK_FUNC(sub_82A5B3E8);
PPC_FUNC_IMPL(__imp__sub_82A5B3E8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f1,f11
	ctx.f9.f64 = double(float(ctx.f1.f64 - ctx.f11.f64));
	// fsubs f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f11,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f7,f12,f12
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fabs f6,f9
	ctx.f6.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fmadds f5,f8,f8,f7
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fmuls f4,f6,f6
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fsqrts f3,f5
	ctx.f3.f64 = double(float(sqrt(ctx.f5.f64)));
	// fmsubs f12,f3,f3,f4
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 - ctx.f4.f64));
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bgt cr6,0x82a5b438
	if (cr6.gt) goto loc_82A5B438;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A5B438:
	// fsubs f10,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fsqrts f9,f12
	ctx.f9.f64 = double(float(sqrt(ctx.f12.f64)));
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f1,8(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f13,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20056);
	ctx.f12.f64 = double(temp.f32);
	// fsel f8,f10,f13,f12
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fmadds f7,f9,f8,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f0.f64));
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5B46C"))) PPC_WEAK_FUNC(sub_82A5B46C);
PPC_FUNC_IMPL(__imp__sub_82A5B46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A5B470"))) PPC_WEAK_FUNC(sub_82A5B470);
PPC_FUNC_IMPL(__imp__sub_82A5B470) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f13,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fabs f7,f12
	ctx.f7.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fmuls f6,f11,f11
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmuls f5,f7,f7
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmadds f4,f8,f8,f6
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fsqrts f3,f4
	ctx.f3.f64 = double(float(sqrt(ctx.f4.f64)));
	// fmsubs f0,f3,f3,f5
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 - ctx.f5.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a5b4c0
	if (cr6.gt) goto loc_82A5B4C0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A5B4C0:
	// stfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fsqrts f12,f0
	ctx.f12.f64 = double(float(sqrt(ctx.f0.f64)));
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20056);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fsel f8,f9,f0,f13
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fmadds f7,f12,f8,f11
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f11.f64));
	// stfs f7,8(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5B4FC"))) PPC_WEAK_FUNC(sub_82A5B4FC);
PPC_FUNC_IMPL(__imp__sub_82A5B4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A5B500"))) PPC_WEAK_FUNC(sub_82A5B500);
PPC_FUNC_IMPL(__imp__sub_82A5B500) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,0(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f31,8(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f31,4(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// bl 0x82a5af98
	ctx.lr = 0x82A5B52C;
	sub_82A5AF98(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a5b548
	if (!cr6.eq) goto loc_82A5B548;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,20056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// b 0x82a5b54c
	goto loc_82A5B54C;
loc_82A5B548:
	// stfs f31,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
loc_82A5B54C:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
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

__attribute__((alias("__imp__sub_82A5B564"))) PPC_WEAK_FUNC(sub_82A5B564);
PPC_FUNC_IMPL(__imp__sub_82A5B564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A5B568"))) PPC_WEAK_FUNC(sub_82A5B568);
PPC_FUNC_IMPL(__imp__sub_82A5B568) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A5B570;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r30,r7,20
	ctx.r30.s64 = ctx.r7.s64 + 20;
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lfs f1,24(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// bl 0x82a5a710
	ctx.lr = 0x82A5B5BC;
	sub_82A5A710(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f13,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r29,r11,-7996
	ctx.r29.s64 = ctx.r11.s64 + -7996;
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f6,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f7,f12,f10
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f5,f8,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// lfs f30,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// lfs f13,-7996(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -7996);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// stfs f5,104(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f7,108(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bge cr6,0x82a5b614
	if (!cr6.lt) goto loc_82A5B614;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82a5b620
	goto loc_82A5B620;
loc_82A5B614:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a5b620
	if (cr6.lt) goto loc_82A5B620;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82A5B620:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,20056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82a5b640
	if (!cr6.lt) goto loc_82A5B640;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82a5b64c
	goto loc_82A5B64C;
loc_82A5B640:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a5b650
	if (cr6.lt) goto loc_82A5B650;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82A5B64C:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82A5B650:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82646fc0
	ctx.lr = 0x82A5B65C;
	sub_82646FC0(ctx, base);
	// lfs f13,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f8,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f12,f10
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f6,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f5,f8,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// stfs f5,120(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f9,128(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f7,124(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bge cr6,0x82a5b6a4
	if (!cr6.lt) goto loc_82A5B6A4;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82a5b6b0
	goto loc_82A5B6B0;
loc_82A5B6A4:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a5b6b0
	if (cr6.lt) goto loc_82A5B6B0;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82A5B6B0:
	// fmuls f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82a5b6c8
	if (!cr6.lt) goto loc_82A5B6C8;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82a5b6d4
	goto loc_82A5B6D4;
loc_82A5B6C8:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a5b6d8
	if (cr6.lt) goto loc_82A5B6D8;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82A5B6D4:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82A5B6D8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82646fc0
	ctx.lr = 0x82A5B6E4;
	sub_82646FC0(ctx, base);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f8,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fmuls f6,f8,f8
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f5,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f10,f13,f13
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f4,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f5,f5
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fsubs f2,f4,f13
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f11,-11356(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11356);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f1,f7,f7
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmuls f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmuls f9,f0,f7
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fmuls f8,f2,f2
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// fmuls f7,f13,f2
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// fmuls f5,f1,f6
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f6.f64));
	// fmadds f4,f10,f3,f12
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f3.f64 + ctx.f12.f64));
	// fmuls f2,f9,f6
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fmadds f12,f8,f3,f5
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f3.f64 + ctx.f5.f64));
	// fnmsubs f1,f6,f3,f4
	ctx.f1.f64 = double(float(-(ctx.f6.f64 * ctx.f3.f64 - ctx.f4.f64)));
	// fmadds f0,f7,f3,f2
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f3.f64 + ctx.f2.f64));
	// fmuls f13,f1,f12
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fmsubs f13,f0,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 - ctx.f13.f64));
	// fabs f10,f13
	ctx.f10.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f10,f11
	cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x82a5b780
	if (!cr6.lt) goto loc_82A5B780;
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,0(r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// stfs f13,0(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82A5B780:
	// fcmpu cr6,f13,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// ble cr6,0x82a5b7c8
	if (!cr6.gt) goto loc_82A5B7C8;
	// fsqrts f11,f13
	ctx.f11.f64 = double(float(sqrt(ctx.f13.f64)));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,2
	ctx.r3.s64 = 2;
	// lfs f13,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// fneg f10,f0
	ctx.f10.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fdivs f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fsubs f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsubs f7,f10,f11
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fmuls f6,f8,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f5,f7,f9
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// stfs f5,0(r27)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stfs f6,0(r26)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82A5B7C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A5B7DC"))) PPC_WEAK_FUNC(sub_82A5B7DC);
PPC_FUNC_IMPL(__imp__sub_82A5B7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A5B7E0"))) PPC_WEAK_FUNC(sub_82A5B7E0);
PPC_FUNC_IMPL(__imp__sub_82A5B7E0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A5B7E8;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmuls f8,f12,f12
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fsqrts f0,f7
	ctx.f0.f64 = double(float(sqrt(ctx.f7.f64)));
	// fcmpu cr6,f0,f1
	cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x82a5b844
	if (!cr6.lt) goto loc_82A5B844;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A5B844:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82a5b88c
	if (!cr6.eq) goto loc_82A5B88C;
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f13,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// lfs f11,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// lfs f10,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,20(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A5B88C:
	// fmuls f13,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmsubs f12,f0,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 - ctx.f13.f64));
	// fsqrts f1,f12
	ctx.f1.f64 = double(float(sqrt(ctx.f12.f64)));
	// bl 0x82a5a9f8
	ctx.lr = 0x82A5B8A0;
	sub_82A5A9F8(ctx, base);
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,19108(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19108);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f0,f1
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// bl 0x825ca9d8
	ctx.lr = 0x82A5B8BC;
	sub_825CA9D8(ctx, base);
	// lfs f11,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stfs f10,4(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,8(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x8262ac50
	ctx.lr = 0x82A5B8E4;
	sub_8262AC50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a5a710
	ctx.lr = 0x82A5B8F4;
	sub_82A5A710(ctx, base);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// lfs f8,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stfs f8,0(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f7,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,4(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f6,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,8(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x825f7e40
	ctx.lr = 0x82A5B920;
	sub_825F7E40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a5a710
	ctx.lr = 0x82A5B930;
	sub_82A5A710(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A5B944"))) PPC_WEAK_FUNC(sub_82A5B944);
PPC_FUNC_IMPL(__imp__sub_82A5B944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A5B948"))) PPC_WEAK_FUNC(sub_82A5B948);
PPC_FUNC_IMPL(__imp__sub_82A5B948) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r3,20
	ctx.r4.s64 = ctx.r3.s64 + 20;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x82a5a710
	ctx.lr = 0x82A5B98C;
	sub_82A5A710(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-7996
	ctx.r11.s64 = ctx.r11.s64 + -7996;
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f7,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f12,f9
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// lfs f5,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f4,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f5.f64));
	// lfs f11,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// stfs f4,104(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f8,112(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f6,108(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bge cr6,0x82a5b9e4
	if (!cr6.lt) goto loc_82A5B9E4;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82a5b9f0
	goto loc_82A5B9F0;
loc_82A5B9E4:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a5b9f0
	if (cr6.lt) goto loc_82A5B9F0;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82A5B9F0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,20056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82a5ba10
	if (!cr6.lt) goto loc_82A5BA10;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82a5ba1c
	goto loc_82A5BA1C;
loc_82A5BA10:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a5ba20
	if (cr6.lt) goto loc_82A5BA20;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82A5BA1C:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82A5BA20:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82646fc0
	ctx.lr = 0x82A5BA2C;
	sub_82646FC0(ctx, base);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f11,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f12
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmuls f9,f11,f11
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fdivs f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// fdivs f7,f0,f9
	ctx.f7.f64 = double(float(ctx.f0.f64 / ctx.f9.f64));
	// fadds f1,f7,f8
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
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

__attribute__((alias("__imp__sub_82A5BA70"))) PPC_WEAK_FUNC(sub_82A5BA70);
PPC_FUNC_IMPL(__imp__sub_82A5BA70) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,0(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f31,4(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f31,8(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// bl 0x82a5b298
	ctx.lr = 0x82A5BAAC;
	sub_82A5B298(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a5bb2c
	if (cr6.eq) goto loc_82A5BB2C;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82a5bb2c
	if (cr6.lt) goto loc_82A5BB2C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a5bb2c
	if (cr6.gt) goto loc_82A5BB2C;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f10
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// fsubs f5,f7,f9
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// fmuls f4,f11,f0
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fadds f1,f13,f4
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// stfs f1,4(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fadds f0,f10,f3
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f3.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fadds f13,f9,f2
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f2.f64));
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x82a5bb38
	if (!cr6.lt) goto loc_82A5BB38;
	// stfs f31,4(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// b 0x82a5bb38
	goto loc_82A5BB38;
loc_82A5BB2C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,20056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_82A5BB38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82A5BB58"))) PPC_WEAK_FUNC(sub_82A5BB58);
PPC_FUNC_IMPL(__imp__sub_82A5BB58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A5BB60;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f31,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A5BB84:
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// srawi r10,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r7,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r3,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r3.s64 = temp.s64;
	// subf r10,r6,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r6.s64;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82a5af98
	ctx.lr = 0x82A5BBE4;
	sub_82A5AF98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a5bc0c
	if (!cr6.eq) goto loc_82A5BC0C;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,4
	cr6.compare<int32_t>(ctx.r8.s32, 4, xer);
	// blt cr6,0x82a5bb84
	if (cr6.lt) goto loc_82A5BB84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82A5BC0C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A5BC1C"))) PPC_WEAK_FUNC(sub_82A5BC1C);
PPC_FUNC_IMPL(__imp__sub_82A5BC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A5BC20"))) PPC_WEAK_FUNC(sub_82A5BC20);
PPC_FUNC_IMPL(__imp__sub_82A5BC20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A5BC28;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lfs f31,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lfs f0,20056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20056);
	ctx.f0.f64 = double(temp.f32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stfs f31,0(r6)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f31,8(r6)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f0,4(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f31,12(r6)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// stfs f31,16(r6)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// stfs f31,20(r6)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r6.u32 + 20, temp.u32);
	// stfs f0,16(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
loc_82A5BC74:
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// srawi r9,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 2;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// rlwinm r11,r11,1,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x6;
	// addze r7,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r7.s64 = temp.s64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r5,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r5.s64;
	// add r6,r10,r30
	ctx.r6.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82a5af98
	ctx.lr = 0x82A5BCC8;
	sub_82A5AF98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a5bd04
	if (cr6.eq) goto loc_82A5BD04;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r29,1,23,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x1FE;
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r29,r9,24
	ctx.r29.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82A5BD04:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bge cr6,0x82a5bd1c
	if (!cr6.lt) goto loc_82A5BD1C;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,4
	cr6.compare<int32_t>(ctx.r8.s32, 4, xer);
	// blt cr6,0x82a5bc74
	if (cr6.lt) goto loc_82A5BC74;
loc_82A5BD1C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A5BD28"))) PPC_WEAK_FUNC(sub_82A5BD28);
PPC_FUNC_IMPL(__imp__sub_82A5BD28) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f29,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f29.u64);
	// stfd f30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fneg f0,f1
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// fsubs f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmr f30,f4
	ctx.f30.f64 = ctx.f4.f64;
	// lfs f13,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f11,f9
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// lfs f6,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f8,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f13,-7996(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -7996);
	ctx.f13.f64 = double(temp.f32);
	// stfs f7,92(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bge cr6,0x82a5bda4
	if (!cr6.lt) goto loc_82A5BDA4;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82a5bdb0
	goto loc_82A5BDB0;
loc_82A5BDA4:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a5bdb4
	if (cr6.lt) goto loc_82A5BDB4;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82A5BDB0:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82A5BDB4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82646fc0
	ctx.lr = 0x82A5BDC0;
	sub_82646FC0(ctx, base);
	// fneg f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82a5bdf4
	if (!cr6.lt) goto loc_82A5BDF4;
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82a5bdf4
	if (!cr6.lt) goto loc_82A5BDF4;
	// fneg f13,f30
	ctx.f13.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82a5bdf4
	if (!cr6.lt) goto loc_82A5BDF4;
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// blt cr6,0x82a5bdf8
	if (cr6.lt) goto loc_82A5BDF8;
loc_82A5BDF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A5BDF8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f30,-24(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5BE14"))) PPC_WEAK_FUNC(sub_82A5BE14);
PPC_FUNC_IMPL(__imp__sub_82A5BE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A5BE18"))) PPC_WEAK_FUNC(sub_82A5BE18);
PPC_FUNC_IMPL(__imp__sub_82A5BE18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A5BE20;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831ce774
	ctx.lr = 0x82A5BE28;
	__savefpr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82a5b948
	ctx.lr = 0x82A5BE40;
	sub_82A5B948(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f29,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f1,f29
	cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// bgt cr6,0x82a5be64
	if (cr6.gt) goto loc_82A5BE64;
loc_82A5BE50:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831ce7c0
	ctx.lr = 0x82A5BE60;
	__restfpr_27(ctx, base);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82A5BE64:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r27,r30,20
	ctx.r27.s64 = ctx.r30.s64 + 20;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lfs f1,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x82a5a710
	ctx.lr = 0x82A5BE90;
	sub_82A5A710(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f9,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f13,f9
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f31,20056(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20056);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f6,f11,f8
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stfs f7,108(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f6,112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x827e0918
	ctx.lr = 0x82A5BED8;
	sub_827E0918(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82646fc0
	ctx.lr = 0x82A5BEE4;
	sub_82646FC0(ctx, base);
	// lfs f11,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// lfs f3,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f5,f11,f11
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f2,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f0,f3,f3
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fmuls f12,f2,f2
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// fabs f4,f11
	ctx.f4.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// lfs f8,-11356(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -11356);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f13,f5,f0
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fsubs f7,f12,f5
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f5.f64));
	// fmuls f6,f0,f0
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fcmpu cr6,f4,f8
	cr6.compare(ctx.f4.f64, ctx.f8.f64);
	// lfs f30,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f9,f30,f12
	ctx.f9.f64 = double(float(ctx.f30.f64 * ctx.f12.f64));
	// fmuls f1,f30,f30
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// fmuls f4,f7,f6
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fmuls f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmadds f10,f1,f12,f13
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmuls f13,f5,f31
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// fmuls f3,f4,f10
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmsubs f9,f13,f13,f3
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 - ctx.f3.f64));
	// blt cr6,0x82a5c004
	if (cr6.lt) goto loc_82A5C004;
	// fabs f7,f9
	ctx.f7.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fcmpu cr6,f7,f8
	cr6.compare(ctx.f7.f64, ctx.f8.f64);
	// blt cr6,0x82a5c004
	if (cr6.lt) goto loc_82A5C004;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f27,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f27.f64 = double(temp.f32);
	// fcmpu cr6,f9,f27
	cr6.compare(ctx.f9.f64, ctx.f27.f64);
	// ble cr6,0x82a5be50
	if (!cr6.gt) goto loc_82A5BE50;
	// fsqrts f9,f9
	ctx.f9.f64 = double(float(sqrt(ctx.f9.f64)));
	// addi r31,r28,8
	ctx.r31.s64 = ctx.r28.s64 + 8;
	// li r30,2
	ctx.r30.s64 = 2;
	// fneg f8,f13
	ctx.f8.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fdivs f7,f29,f10
	ctx.f7.f64 = double(float(ctx.f29.f64 / ctx.f10.f64));
	// fsubs f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fdivs f31,f29,f0
	ctx.f31.f64 = double(float(ctx.f29.f64 / ctx.f0.f64));
	// fdivs f28,f12,f11
	ctx.f28.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fsubs f5,f8,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fmuls f4,f6,f7
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// stfs f4,12(r28)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r28.u32 + 12, temp.u32);
	// fmuls f3,f5,f7
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// stfs f3,0(r28)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
loc_82A5BF90:
	// lfs f0,-8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r31,-8
	ctx.r3.s64 = ctx.r31.s64 + -8;
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f27,-4(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// fnmsubs f12,f13,f30,f29
	ctx.f12.f64 = double(float(-(ctx.f13.f64 * ctx.f30.f64 - ctx.f29.f64)));
	// fmuls f11,f12,f28
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// bl 0x82646fc0
	ctx.lr = 0x82A5BFB4;
	sub_82646FC0(ctx, base);
	// lfs f10,-8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// lfs f8,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f10,f7
	ctx.f5.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// lfs f4,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f9,f6
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// fadds f2,f8,f4
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f4.f64));
	// stfs f5,-8(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// stfs f3,-4(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// stfs f2,0(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bne 0x82a5bf90
	if (!cr0.eq) goto loc_82A5BF90;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831ce7c0
	ctx.lr = 0x82A5C000;
	__restfpr_27(ctx, base);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82A5C004:
	// fdivs f13,f13,f10
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f12,12(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r28.u32 + 12, temp.u32);
	// stfs f12,0(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// fdivs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fnmsubs f0,f11,f12,f29
	ctx.f0.f64 = double(float(-(ctx.f11.f64 * ctx.f12.f64 - ctx.f29.f64)));
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82a5be50
	if (cr6.lt) goto loc_82A5BE50;
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f13,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addi r31,r28,4
	ctx.r31.s64 = ctx.r28.s64 + 4;
	// li r29,2
	ctx.r29.s64 = 2;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f11,8(r28)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// lfs f10,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,20(r28)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r28.u32 + 20, temp.u32);
loc_82A5C054:
	// stfs f31,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82646fc0
	ctx.lr = 0x82A5C064;
	sub_82646FC0(ctx, base);
	// lfs f0,-4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// lfs f8,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fadds f6,f12,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f9,-4(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// stfs f7,0(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f6,4(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bne 0x82a5c054
	if (!cr0.eq) goto loc_82A5C054;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831ce7c0
	ctx.lr = 0x82A5C0B0;
	__restfpr_27(ctx, base);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A5C0B4"))) PPC_WEAK_FUNC(sub_82A5C0B4);
PPC_FUNC_IMPL(__imp__sub_82A5C0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A5C0B8"))) PPC_WEAK_FUNC(sub_82A5C0B8);
PPC_FUNC_IMPL(__imp__sub_82A5C0B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// stb r7,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r7.u8);
	// clrlwi r8,r6,24
	ctx.r8.u64 = ctx.r6.u32 & 0xFF;
	// stfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,-10804(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -10804);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f2,8(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmuls f9,f2,f0
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stb r6,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r6.u8);
	// frsp f7,f11
	ctx.f7.f64 = double(float(ctx.f11.f64));
	// frsp f8,f12
	ctx.f8.f64 = double(float(ctx.f12.f64));
	// fdivs f5,f9,f7
	ctx.f5.f64 = double(float(ctx.f9.f64 / ctx.f7.f64));
	// stfs f5,16(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fdivs f6,f10,f8
	ctx.f6.f64 = double(float(ctx.f10.f64 / ctx.f8.f64));
	// stfs f6,12(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5C114"))) PPC_WEAK_FUNC(sub_82A5C114);
PPC_FUNC_IMPL(__imp__sub_82A5C114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A5C118"))) PPC_WEAK_FUNC(sub_82A5C118);
PPC_FUNC_IMPL(__imp__sub_82A5C118) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// lfs f13,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82a5c138
	if (!cr6.lt) goto loc_82A5C138;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A5C138:
	// lfs f13,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lbz r3,-9(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + -9);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmpw cr6,r10,r3
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5C16C"))) PPC_WEAK_FUNC(sub_82A5C16C);
PPC_FUNC_IMPL(__imp__sub_82A5C16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A5C170"))) PPC_WEAK_FUNC(sub_82A5C170);
PPC_FUNC_IMPL(__imp__sub_82A5C170) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// lfs f13,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82a5c190
	if (!cr6.lt) goto loc_82A5C190;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A5C190:
	// lfs f13,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lbz r3,-9(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + -9);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmpw cr6,r10,r3
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5C1C4"))) PPC_WEAK_FUNC(sub_82A5C1C4);
PPC_FUNC_IMPL(__imp__sub_82A5C1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A5C1C8"))) PPC_WEAK_FUNC(sub_82A5C1C8);
PPC_FUNC_IMPL(__imp__sub_82A5C1C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// lfs f13,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// clrlwi r7,r5,24
	ctx.r7.u64 = ctx.r5.u32 & 0xFF;
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f9,-16(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r6,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r6.u64);
	// lfd f8,-8(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f7,-16(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r10.u64);
	// lfd f6,-8(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f2,f9
	ctx.f2.f64 = double(ctx.f9.s64);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// fcfid f3,f8
	ctx.f3.f64 = double(ctx.f8.s64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fcfid f4,f7
	ctx.f4.f64 = double(ctx.f7.s64);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f7,f2
	ctx.f7.f64 = double(float(ctx.f2.f64));
	// lfs f0,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// frsp f8,f3
	ctx.f8.f64 = double(float(ctx.f3.f64));
	// frsp f9,f4
	ctx.f9.f64 = double(float(ctx.f4.f64));
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// fmsubs f3,f7,f11,f10
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 - ctx.f10.f64));
	// fmsubs f4,f8,f13,f12
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 - ctx.f12.f64));
	// fmsubs f5,f9,f11,f10
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 - ctx.f10.f64));
	// fmsubs f6,f1,f13,f12
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 - ctx.f12.f64));
	// fsubs f1,f3,f5
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f5.f64));
	// fsubs f2,f6,f4
	ctx.f2.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// fsubs f13,f5,f3
	ctx.f13.f64 = double(float(ctx.f5.f64 - ctx.f3.f64));
	// fsubs f12,f4,f6
	ctx.f12.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// fabs f10,f1
	ctx.f10.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// stfs f10,12(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// fabs f11,f2
	ctx.f11.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// stfs f11,16(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// fmadds f9,f13,f0,f3
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f3.f64));
	// stfs f9,0(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmadds f8,f12,f0,f6
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f6.f64));
	// stfs f8,8(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5C27C"))) PPC_WEAK_FUNC(sub_82A5C27C);
PPC_FUNC_IMPL(__imp__sub_82A5C27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A5C280"))) PPC_WEAK_FUNC(sub_82A5C280);
PPC_FUNC_IMPL(__imp__sub_82A5C280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// addi r6,r11,21716
	ctx.r6.s64 = ctx.r11.s64 + 21716;
	// ori r5,r10,62416
	ctx.r5.u64 = ctx.r10.u64 | 62416;
	// ori r4,r9,62417
	ctx.r4.u64 = ctx.r9.u64 | 62417;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// ori r10,r8,62418
	ctx.r10.u64 = ctx.r8.u64 | 62418;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// ori r9,r7,62419
	ctx.r9.u64 = ctx.r7.u64 | 62419;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5C2CC"))) PPC_WEAK_FUNC(sub_82A5C2CC);
PPC_FUNC_IMPL(__imp__sub_82A5C2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A5C2D0"))) PPC_WEAK_FUNC(sub_82A5C2D0);
PPC_FUNC_IMPL(__imp__sub_82A5C2D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// lis r10,11554
	ctx.r10.s64 = 757202944;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r9,r10,45795
	ctx.r9.u64 = ctx.r10.u64 | 45795;
	// lwzx r8,r11,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// subfic r6,r7,17683
	xer.ca = ctx.r7.u32 <= 17683;
	ctx.r6.s64 = 17683 - ctx.r7.s64;
	// clrlwi r5,r6,1
	ctx.r5.u64 = ctx.r6.u32 & 0x7FFFFFFF;
	// stwx r5,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5C2FC"))) PPC_WEAK_FUNC(sub_82A5C2FC);
PPC_FUNC_IMPL(__imp__sub_82A5C2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A5C300"))) PPC_WEAK_FUNC(sub_82A5C300);
PPC_FUNC_IMPL(__imp__sub_82A5C300) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// bne cr6,0x82a5c324
	if (!cr6.eq) goto loc_82A5C324;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mulli r11,r11,21
	ctx.r11.s64 = ctx.r11.s64 * 21;
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// clrlwi r9,r10,17
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFF;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
loc_82A5C324:
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,11554
	ctx.r9.s64 = 757202944;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// ori r8,r9,45795
	ctx.r8.u64 = ctx.r9.u64 | 45795;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r6,r7,-7712
	ctx.r6.s64 = ctx.r7.s64 + -7712;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// mullw r3,r5,r8
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// lfs f0,-5552(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -5552);
	ctx.f0.f64 = double(temp.f32);
	// subfic r9,r3,17683
	xer.ca = ctx.r3.u32 <= 17683;
	ctx.r9.s64 = 17683 - ctx.r3.s64;
	// clrlwi r8,r9,1
	ctx.r8.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lwzx r11,r10,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmuls f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// fctidz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f5.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5C3A8"))) PPC_WEAK_FUNC(sub_82A5C3A8);
PPC_FUNC_IMPL(__imp__sub_82A5C3A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A5C3B0;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831ce748
	ctx.lr = 0x82A5C3B8;
	__savefpr_16(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmr f16,f1
	ctx.fpscr.disableFlushMode();
	ctx.f16.f64 = ctx.f1.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f30,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f30.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f27,20056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20056);
	ctx.f27.f64 = double(temp.f32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lfs f28,30444(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 30444);
	ctx.f28.f64 = double(temp.f32);
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lfs f25,-23844(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -23844);
	ctx.f25.f64 = double(temp.f32);
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// lfs f21,9008(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f21.f64 = double(temp.f32);
	// lis r3,-32250
	ctx.r3.s64 = -2113536000;
	// lfs f26,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f26.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// fadds f19,f2,f30
	ctx.f19.f64 = double(float(ctx.f2.f64 + ctx.f30.f64));
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// lfs f22,-5548(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -5548);
	ctx.f22.f64 = double(temp.f32);
	// lis r8,11554
	ctx.r8.s64 = 757202944;
	// lfs f23,-29856(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -29856);
	ctx.f23.f64 = double(temp.f32);
	// lis r7,4194
	ctx.r7.s64 = 274857984;
	// lfs f24,-5560(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -5560);
	ctx.f24.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f17,-5556(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -5556);
	ctx.f17.f64 = double(temp.f32);
	// lfs f18,11412(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11412);
	ctx.f18.f64 = double(temp.f32);
	// ori r29,r8,45795
	ctx.r29.u64 = ctx.r8.u64 | 45795;
	// lfs f20,23372(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23372);
	ctx.f20.f64 = double(temp.f32);
	// ori r30,r7,19923
	ctx.r30.u64 = ctx.r7.u64 | 19923;
	// addi r27,r11,-7696
	ctx.r27.s64 = ctx.r11.s64 + -7696;
loc_82A5C440:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mullw r10,r11,r29
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// subfic r9,r10,17683
	xer.ca = ctx.r10.u32 <= 17683;
	ctx.r9.s64 = 17683 - ctx.r10.s64;
	// clrlwi r8,r9,1
	ctx.r8.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// mullw r7,r8,r29
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r29.s32);
	// subfic r6,r7,17683
	xer.ca = ctx.r7.u32 <= 17683;
	ctx.r6.s64 = 17683 - ctx.r7.s64;
	// mulhwu r5,r8,r30
	ctx.r5.u64 = (uint64_t(ctx.r8.u32) * uint64_t(ctx.r30.u32)) >> 32;
	// clrlwi r4,r6,1
	ctx.r4.u64 = ctx.r6.u32 & 0x7FFFFFFF;
	// rlwinm r3,r5,26,6,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 26) & 0x3FFFFFF;
	// mulhwu r11,r4,r30
	ctx.r11.u64 = (uint64_t(ctx.r4.u32) * uint64_t(ctx.r30.u32)) >> 32;
	// stw r4,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r4.u32);
	// mulli r10,r3,1000
	ctx.r10.s64 = ctx.r3.s64 * 1000;
	// rlwinm r9,r11,26,6,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// subf r11,r10,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r10.s64;
	// mulli r8,r9,1000
	ctx.r8.s64 = ctx.r9.s64 * 1000;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// subf r11,r8,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r8.s64;
	// clrldi r6,r7,32
	ctx.r6.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// clrldi r4,r5,32
	ctx.r4.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fmuls f10,f11,f20
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f20.f64));
	// fmuls f0,f10,f17
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f17.f64));
	// fctiwz f9,f0
	ctx.f9.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f9.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,512
	cr6.compare<int32_t>(ctx.r11.s32, 512, xer);
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f20
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f20.f64));
	// fmuls f29,f6,f18
	ctx.f29.f64 = double(float(ctx.f6.f64 * ctx.f18.f64));
	// bne cr6,0x82a5c4dc
	if (!cr6.eq) goto loc_82A5C4DC;
	// lfs f0,2048(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 2048);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82a5c50c
	goto loc_82A5C50C;
loc_82A5C4DC:
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f13,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// addi r8,r27,4
	ctx.r8.s64 = ctx.r27.s64 + 4;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfsx f10,r9,r27
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f9,r9,r8
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fsubs f7,f0,f11
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fmadds f0,f8,f7,f10
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f10.f64));
loc_82A5C50C:
	// fmuls f13,f0,f24
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f24.f64));
	// li r31,0
	ctx.r31.s64 = 0;
	// fmr f0,f21
	ctx.f0.f64 = ctx.f21.f64;
	// fmuls f12,f13,f23
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f23.f64));
	// fsqrts f11,f12
	ctx.f11.f64 = double(float(sqrt(ctx.f12.f64)));
	// fmuls f10,f11,f16
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f16.f64));
	// fmuls f31,f10,f22
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f22.f64));
loc_82A5C528:
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// blt cr6,0x82a5c53c
	if (cr6.lt) goto loc_82A5C53C;
	// bne cr6,0x82a5c54c
	if (!cr6.eq) goto loc_82A5C54C;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// b 0x82a5c540
	goto loc_82A5C540;
loc_82A5C53C:
	// fadds f1,f29,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f29.f64 + ctx.f25.f64));
loc_82A5C540:
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x82a5aa98
	ctx.lr = 0x82A5C548;
	sub_82A5AA98(ctx, base);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
loc_82A5C54C:
	// fadds f13,f19,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f19.f64 + ctx.f0.f64));
	// fmuls f12,f13,f28
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// fsel f11,f12,f30,f27
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f30.f64 : ctx.f27.f64;
	// fmadds f10,f11,f26,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f26.f64 + ctx.f12.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f9.u64);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r3,100
	cr6.compare<int32_t>(ctx.r3.s32, 100, xer);
	// bge cr6,0x82a5c57c
	if (!cr6.lt) goto loc_82A5C57C;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bge cr6,0x82a5c580
	if (!cr6.lt) goto loc_82A5C580;
loc_82A5C57C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A5C580:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a5c5a0
	if (!cr6.eq) goto loc_82A5C5A0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x82a5c528
	if (cr6.lt) goto loc_82A5C528;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a5c440
	if (cr6.eq) goto loc_82A5C440;
loc_82A5C5A0:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831ce794
	ctx.lr = 0x82A5C5AC;
	__restfpr_16(ctx, base);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A5C5B0"))) PPC_WEAK_FUNC(sub_82A5C5B0);
PPC_FUNC_IMPL(__imp__sub_82A5C5B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// addi r9,r5,1
	ctx.r9.s64 = ctx.r5.s64 + 1;
	// lis r8,11554
	ctx.r8.s64 = 757202944;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r5,r8,45795
	ctx.r5.u64 = ctx.r8.u64 | 45795;
	// clrldi r10,r4,32
	ctx.r10.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwzx r6,r11,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mullw r4,r6,r5
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// lfs f0,-5552(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -5552);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// subfic r10,r4,17683
	xer.ca = ctx.r4.u32 <= 17683;
	ctx.r10.s64 = 17683 - ctx.r4.s64;
	// clrlwi r9,r10,1
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// stwx r9,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fctidz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f6.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5C618"))) PPC_WEAK_FUNC(sub_82A5C618);
PPC_FUNC_IMPL(__imp__sub_82A5C618) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// xor r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// xor r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// xor r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5C638"))) PPC_WEAK_FUNC(sub_82A5C638);
PPC_FUNC_IMPL(__imp__sub_82A5C638) {
	PPC_FUNC_PROLOGUE();
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r5,r10,62417
	ctx.r5.u64 = ctx.r10.u64 | 62417;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// ori r10,r9,62418
	ctx.r10.u64 = ctx.r9.u64 | 62418;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// ori r6,r11,62416
	ctx.r6.u64 = ctx.r11.u64 | 62416;
	// ori r9,r8,62419
	ctx.r9.u64 = ctx.r8.u64 | 62419;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// addi r8,r7,21716
	ctx.r8.s64 = ctx.r7.s64 + 21716;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5C688"))) PPC_WEAK_FUNC(sub_82A5C688);
PPC_FUNC_IMPL(__imp__sub_82A5C688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,21716
	ctx.r10.s64 = ctx.r11.s64 + 21716;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5C698"))) PPC_WEAK_FUNC(sub_82A5C698);
PPC_FUNC_IMPL(__imp__sub_82A5C698) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bgt cr6,0x82a5c6a8
	if (cr6.gt) goto loc_82A5C6A8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A5C6A8:
	// lis r11,11554
	ctx.r11.s64 = 757202944;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// ori r8,r11,45795
	ctx.r8.u64 = ctx.r11.u64 | 45795;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// mullw r7,r10,r8
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// subfic r6,r7,17683
	xer.ca = ctx.r7.u32 <= 17683;
	ctx.r6.s64 = 17683 - ctx.r7.s64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// clrlwi r11,r6,1
	ctx.r11.u64 = ctx.r6.u32 & 0x7FFFFFFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lfs f0,-5552(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -5552);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fctiwz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f6.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// and r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpw cr6,r4,r3
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// addi r3,r4,-1
	ctx.r3.s64 = ctx.r4.s64 + -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5C720"))) PPC_WEAK_FUNC(sub_82A5C720);
PPC_FUNC_IMPL(__imp__sub_82A5C720) {
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
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// lbz r8,19296(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 19296);
	// srw r7,r8,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82a5c800
	if (cr6.eq) goto loc_82A5C800;
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// lfs f13,-11368(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11368);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a5c780
	if (cr6.gt) goto loc_82A5C780;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f12.f64 = double(temp.f32);
	// b 0x82a5c7ac
	goto loc_82A5C7AC;
loc_82A5C780:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f12,11792(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11792);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82a5c79c
	if (cr6.lt) goto loc_82A5C79C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f12,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f12.f64 = double(temp.f32);
	// b 0x82a5c7ac
	goto loc_82A5C7AC;
loc_82A5C79C:
	// fsubs f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,25252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25252);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82A5C7AC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lfs f0,-9976(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9976);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-7352(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -7352);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f1,f12,f0,f13
	ctx.f1.f64 = double(float(-(ctx.f12.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// bl 0x82a5c3a8
	ctx.lr = 0x82A5C7C4;
	sub_82A5C3A8(ctx, base);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r7,-32208
	ctx.r7.s64 = -2110783488;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,30444(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 30444);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,23304(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 23304);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmuls f1,f11,f13
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A5C800:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5C818"))) PPC_WEAK_FUNC(sub_82A5C818);
PPC_FUNC_IMPL(__imp__sub_82A5C818) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A5C820;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x831ce778
	ctx.lr = 0x82A5C828;
	__savefpr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lfs f9,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lfs f8,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lfs f7,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// li r28,1
	ctx.r28.s64 = 1;
	// lfs f6,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f5,f11,f10,f12
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f4,f8,f9,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f1,f7,f6,f4
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82a5c888
	if (!cr6.lt) goto loc_82A5C888;
	// fneg f1,f1
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_82A5C888:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f31,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f13,f31,f1
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// lfs f0,-23028(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23028);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a5c8e4
	if (!cr6.gt) goto loc_82A5C8E4;
	// bl 0x831d16d0
	ctx.lr = 0x82A5C8A8;
	sub_831D16D0(ctx, base);
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x831d1930
	ctx.lr = 0x82A5C8B4;
	sub_831D1930(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fsubs f13,f31,f30
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// fdivs f28,f31,f0
	ctx.f28.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// fmuls f1,f13,f29
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// bl 0x831d1930
	ctx.lr = 0x82A5C8C8;
	sub_831D1930(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fmuls f1,f29,f30
	ctx.f1.f64 = double(float(ctx.f29.f64 * ctx.f30.f64));
	// fmuls f31,f12,f28
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// bl 0x831d1930
	ctx.lr = 0x82A5C8D8;
	sub_831D1930(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// fmuls f30,f11,f28
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f28.f64));
	// b 0x82a5c8e8
	goto loc_82A5C8E8;
loc_82A5C8E4:
	// fsubs f31,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
loc_82A5C8E8:
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f30
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// fmuls f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmadds f7,f13,f31,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f8.f64));
	// stfs f7,0(r29)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f6,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fmadds f3,f6,f31,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f31.f64 + ctx.f4.f64));
	// stfs f3,4(r29)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lfs f2,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f9,f1
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fmadds f13,f2,f31,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfs f13,8(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// lfs f12,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f31,f11
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f11.f64));
	// fmadds f9,f12,f9,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f10.f64));
	// stfs f9,12(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x831ce7c4
	ctx.lr = 0x82A5C95C;
	__restfpr_28(ctx, base);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A5C960"))) PPC_WEAK_FUNC(sub_82A5C960);
PPC_FUNC_IMPL(__imp__sub_82A5C960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f30,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f8,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fneg f9,f12
	ctx.f9.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f5,f12,f8
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// lfs f6,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fneg f7,f10
	ctx.f7.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f3,f10,f6
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// lfs f4,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f31,f13,f8
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmuls f2,f13,f4
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// lfs f1,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmsubs f5,f13,f6,f5
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 - ctx.f5.f64));
	// fmsubs f3,f12,f4,f3
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f4.f64 - ctx.f3.f64));
	// fmsubs f31,f1,f0,f31
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 - ctx.f31.f64));
	// fmsubs f2,f10,f8,f2
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f8.f64 - ctx.f2.f64));
	// fmadds f5,f1,f4,f5
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f4.f64 + ctx.f5.f64));
	// fmadds f3,f1,f8,f3
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f8.f64 + ctx.f3.f64));
	// fmadds f2,f1,f6,f2
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f6.f64 + ctx.f2.f64));
	// fnmsubs f1,f12,f6,f31
	ctx.f1.f64 = double(float(-(ctx.f12.f64 * ctx.f6.f64 - ctx.f31.f64)));
	// fmadds f8,f10,f0,f5
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fmadds f6,f13,f0,f3
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f3.f64));
	// fmadds f5,f12,f0,f2
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f2.f64));
	// fnmsubs f4,f10,f4,f1
	ctx.f4.f64 = double(float(-(ctx.f10.f64 * ctx.f4.f64 - ctx.f1.f64)));
	// fmuls f3,f8,f9
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f2,f7,f6
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fmuls f1,f5,f11
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fmsubs f0,f5,f7,f3
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f7.f64 - ctx.f3.f64));
	// fmsubs f13,f8,f11,f2
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 - ctx.f2.f64));
	// fmsubs f12,f6,f9,f1
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f9.f64 - ctx.f1.f64));
	// fmadds f10,f30,f6,f0
	ctx.f10.f64 = double(float(ctx.f30.f64 * ctx.f6.f64 + ctx.f0.f64));
	// fmadds f6,f5,f30,f13
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f30.f64 + ctx.f13.f64));
	// fmadds f5,f4,f7,f12
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 + ctx.f12.f64));
	// fmadds f3,f4,f11,f10
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f10.f64));
	// stfs f3,0(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmadds f2,f4,f9,f6
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f9.f64 + ctx.f6.f64));
	// stfs f2,4(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmadds f1,f8,f30,f5
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f30.f64 + ctx.f5.f64));
	// stfs f1,8(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfd f30,-16(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f31,-8(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5CA24"))) PPC_WEAK_FUNC(sub_82A5CA24);
PPC_FUNC_IMPL(__imp__sub_82A5CA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A5CA28"))) PPC_WEAK_FUNC(sub_82A5CA28);
PPC_FUNC_IMPL(__imp__sub_82A5CA28) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// lfs f9,-8(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// stw r9,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r9.u32);
	// lfs f10,-12(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f10.f64 = double(temp.f32);
	// stw r7,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r7.u32);
	// lfs f11,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f11,f11
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// fmadds f13,f9,f9,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f0.f64));
	// lfs f7,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-26260(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26260);
	ctx.f6.f64 = double(temp.f32);
	// stw r6,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r6.u32);
	// stw r4,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r4.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// fmadds f12,f10,f10,f13
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fsqrts f0,f12
	ctx.f0.f64 = double(float(sqrt(ctx.f12.f64)));
	// fcmpu cr6,f0,f7
	cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// beq cr6,0x82a5ca9c
	if (cr6.eq) goto loc_82A5CA9C;
	// fdivs f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 / ctx.f0.f64));
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
loc_82A5CA9C:
	// lfs f13,-12(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f13,f13
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f12,-8(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f5,f12,f12,f8
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fmadds f4,f0,f0,f5
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fsqrts f8,f4
	ctx.f8.f64 = double(float(sqrt(ctx.f4.f64)));
	// fcmpu cr6,f8,f7
	cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// beq cr6,0x82a5cad0
	if (cr6.eq) goto loc_82A5CAD0;
	// fdivs f8,f6,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 / ctx.f8.f64));
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
loc_82A5CAD0:
	// fmuls f5,f13,f10
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f4,f13,f9
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmuls f3,f12,f11
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f2,f0,f10
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f7,-10804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10804);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,-23028(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23028);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f1,f12,f9,f5
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmsubs f12,f12,f10,f4
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 - ctx.f4.f64));
	// fmsubs f10,f9,f0,f3
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 - ctx.f3.f64));
	// fmsubs f13,f13,f11,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 - ctx.f2.f64));
	// fmadds f0,f0,f11,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f1.f64));
	// fadds f11,f0,f6
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f6.f64));
	// fmuls f0,f11,f7
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fcmpu cr6,f0,f8
	cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// blt cr6,0x82a5cb18
	if (cr6.lt) goto loc_82A5CB18;
	// fsqrts f8,f0
	ctx.f8.f64 = double(float(sqrt(ctx.f0.f64)));
loc_82A5CB18:
	// fdivs f11,f6,f8
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f6.f64 / ctx.f8.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f8,f0
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f9,12(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fmuls f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f8,0(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f7,f11,f10
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfs f7,4(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmuls f6,f11,f13
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f6,8(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5CB48"))) PPC_WEAK_FUNC(sub_82A5CB48);
PPC_FUNC_IMPL(__imp__sub_82A5CB48) {
	PPC_FUNC_PROLOGUE();
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
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831ce774
	ctx.lr = 0x82A5CB60;
	__savefpr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f31,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f27,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f27.f64 = double(temp.f32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fsubs f13,f27,f31
	ctx.f13.f64 = double(float(ctx.f27.f64 - ctx.f31.f64));
	// lfs f28,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// lfs f30,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// fsubs f12,f28,f30
	ctx.f12.f64 = double(float(ctx.f28.f64 - ctx.f30.f64));
	// lfs f0,-11356(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11356);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f10,f12,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fabs f9,f10
	ctx.f9.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fcmpu cr6,f9,f0
	cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bge cr6,0x82a5cbac
	if (!cr6.lt) goto loc_82A5CBAC;
	// lfs f1,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82a5cc40
	goto loc_82A5CC40;
loc_82A5CBAC:
	// lfs f29,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f29.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x825c3ec0
	ctx.lr = 0x82A5CBC8;
	sub_825C3EC0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8263eeb0
	ctx.lr = 0x82A5CBD8;
	sub_8263EEB0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f4,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// lfs f3,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x825c3ec0
	ctx.lr = 0x82A5CBF0;
	sub_825C3EC0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8263eeb0
	ctx.lr = 0x82A5CC00;
	sub_8263EEB0(ctx, base);
	// fmuls f0,f28,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f28.f64));
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f29,-23844(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23844);
	ctx.f29.f64 = double(temp.f32);
	// fadds f1,f12,f29
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f29.f64));
	// fmadds f13,f27,f27,f0
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f27.f64 + ctx.f0.f64));
	// fsqrts f2,f13
	ctx.f2.f64 = double(float(sqrt(ctx.f13.f64)));
	// bl 0x82a5aa98
	ctx.lr = 0x82A5CC20;
	sub_82A5AA98(ctx, base);
	// lfs f10,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f30,f30
	ctx.f11.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// fadds f1,f10,f29
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f29.f64));
	// fmadds f9,f31,f31,f11
	ctx.f9.f64 = double(float(ctx.f31.f64 * ctx.f31.f64 + ctx.f11.f64));
	// fsqrts f2,f9
	ctx.f2.f64 = double(float(sqrt(ctx.f9.f64)));
	// bl 0x82a5aa98
	ctx.lr = 0x82A5CC3C;
	sub_82A5AA98(ctx, base);
	// fsubs f1,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f30.f64 - ctx.f1.f64));
loc_82A5CC40:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831ce7c0
	ctx.lr = 0x82A5CC4C;
	__restfpr_27(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5CC60"))) PPC_WEAK_FUNC(sub_82A5CC60);
PPC_FUNC_IMPL(__imp__sub_82A5CC60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lbz r11,724(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 724);
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a5cc84
	if (!cr6.eq) goto loc_82A5CC84;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,720(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 720, temp.u32);
	// b 0x82a5ccc8
	goto loc_82A5CCC8;
loc_82A5CC84:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f12,-36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -36);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f10,-28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fmuls f8,f11,f11
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// stfs f6,-12(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// lfs f5,720(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 720);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// stfs f4,720(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 720, temp.u32);
loc_82A5CCC8:
	// lbz r11,724(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 724);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rotlwi r10,r11,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lbz r11,724(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 724);
	// rotlwi r10,r11,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stfs f1,28(r9)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// lbz r11,724(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 724);
	// rotlwi r10,r11,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r6,32(r7)
	PPC_STORE_U8(ctx.r7.u32 + 32, ctx.r6.u8);
	// lbz r11,724(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 724);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stb r6,724(r3)
	PPC_STORE_U8(ctx.r3.u32 + 724, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5CD34"))) PPC_WEAK_FUNC(sub_82A5CD34);
PPC_FUNC_IMPL(__imp__sub_82A5CD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A5CD38"))) PPC_WEAK_FUNC(sub_82A5CD38);
PPC_FUNC_IMPL(__imp__sub_82A5CD38) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,720(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 720);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f12,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f12
	cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blt cr6,0x82a5cd74
	if (cr6.lt) goto loc_82A5CD74;
	// lbz r11,724(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 724);
	// addi r11,r11,254
	ctx.r11.s64 = ctx.r11.s64 + 254;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_82A5CD74:
	// lfs f0,24(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgelr cr6
	if (!cr6.lt) return;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A5CD84:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f12,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,0(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r10,r11,3,21,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7F8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// lfs f0,24(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fadds f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fcmpu cr6,f9,f13
	cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// blt cr6,0x82a5cd84
	if (cr6.lt) goto loc_82A5CD84;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5CDC4"))) PPC_WEAK_FUNC(sub_82A5CDC4);
PPC_FUNC_IMPL(__imp__sub_82A5CDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A5CDC8"))) PPC_WEAK_FUNC(sub_82A5CDC8);
PPC_FUNC_IMPL(__imp__sub_82A5CDC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r8,724(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 724);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lfs f12,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f12.f64 = double(temp.f32);
	// bne cr6,0x82a5cde4
	if (!cr6.eq) goto loc_82A5CDE4;
	// stfs f12,720(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 720, temp.u32);
	// b 0x82a5ce2c
	goto loc_82A5CE2C;
loc_82A5CDE4:
	// addic. r10,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// li r11,0
	ctx.r11.s64 = 0;
	// ble 0x82a5ce14
	if (!cr0.gt) goto loc_82A5CE14;
	// lbz r9,724(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 724);
	// addi r10,r3,-12
	ctx.r10.s64 = ctx.r3.s64 + -12;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_82A5CE00:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfsu f13,36(r10)
	ctx.fpscr.disableFlushMode();
	ea = 36 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82a5ce00
	if (cr6.lt) goto loc_82A5CE00;
loc_82A5CE14:
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stfs f0,-12(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -12, temp.u32);
	// stfs f1,720(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 720, temp.u32);
loc_82A5CE2C:
	// lbz r11,724(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 724);
	// rotlwi r10,r11,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stfs f12,24(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lbz r11,724(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 724);
	// rotlwi r10,r11,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r8,724(r3)
	PPC_STORE_U8(ctx.r3.u32 + 724, ctx.r8.u8);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5CE7C"))) PPC_WEAK_FUNC(sub_82A5CE7C);
PPC_FUNC_IMPL(__imp__sub_82A5CE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A5CE80"))) PPC_WEAK_FUNC(sub_82A5CE80);
PPC_FUNC_IMPL(__imp__sub_82A5CE80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lbz r11,724(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 724);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// cmpwi cr6,r8,4
	cr6.compare<int32_t>(ctx.r8.s32, 4, xer);
	// lfs f0,-4460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4460);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x82a5d130
	if (cr6.lt) goto loc_82A5D130;
	// addi r8,r9,-3
	ctx.r8.s64 = ctx.r9.s64 + -3;
	// addi r11,r3,52
	ctx.r11.s64 = ctx.r3.s64 + 52;
loc_82A5CEB0:
	// lfs f13,-12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -48);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f8,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f3,-16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f3.f64 = double(temp.f32);
	// lfs f6,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// lfs f2,-52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -52);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f4,f6,f8
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// lfs f1,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f13,f3,f2
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// lfs f7,-44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -44);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f12,f1,f3
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f3.f64));
	// fsubs f5,f8,f7
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,-28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f10,f10
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmuls f3,f9,f9
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f2,f5,f5,f6
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f6.f64));
	// fmadds f1,f4,f4,f3
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f3.f64));
	// fmadds f13,f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f2.f64));
	// fmadds f12,f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f1.f64));
	// fdivs f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// fdivs f10,f12,f8
	ctx.f10.f64 = double(float(ctx.f12.f64 / ctx.f8.f64));
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// fmuls f8,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f6,f9,f9
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fdivs f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 / ctx.f6.f64));
	// fmuls f3,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f4.f64));
	// stfs f3,-4(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f2,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f4,f2
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f2.f64));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f4
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f3,-12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f10,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// lfs f11,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f1,f11,f4
	ctx.f1.f64 = double(float(ctx.f11.f64 - ctx.f4.f64));
	// fsubs f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f10,f9
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f13,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// lfs f9,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f4,f1,f1
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fsubs f6,f7,f6
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fsubs f5,f5,f7
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f7.f64));
	// fmuls f8,f2,f2
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// fmadds f2,f10,f10,f4
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f4.f64));
	// fmadds f3,f12,f12,f8
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fmadds f12,f5,f5,f2
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f2.f64));
	// fmadds f1,f6,f6,f3
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f3.f64));
	// fdivs f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fdivs f11,f1,f11
	ctx.f11.f64 = double(float(ctx.f1.f64 / ctx.f11.f64));
	// fadds f8,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// fmuls f7,f10,f11
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f6,f8,f8
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmuls f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fdivs f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 / ctx.f6.f64));
	// fmuls f3,f9,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// stfs f3,32(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f2,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f4
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// stfs f1,36(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f13,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f4
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// stfs f12,40(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f11,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f11,f10
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f6,96(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f9,f8
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fsubs f4,f6,f9
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f9.f64));
	// lfs f3,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f1,100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f13,f3,f2
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// fsubs f12,f1,f3
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f3.f64));
	// lfs f10,92(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f8,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f6.f64 = double(temp.f32);
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// lfs f3,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f5,f5
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fmuls f1,f4,f4
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// fmadds f13,f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f2.f64));
	// fmadds f12,f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f1.f64));
	// fmadds f11,f7,f7,f13
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f13.f64));
	// fmadds f10,f9,f9,f12
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f12.f64));
	// fdivs f9,f11,f8
	ctx.f9.f64 = double(float(ctx.f11.f64 / ctx.f8.f64));
	// fdivs f8,f10,f6
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f6.f64));
	// fadds f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// fmuls f6,f8,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f5,f7,f7
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmuls f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fdivs f2,f4,f5
	ctx.f2.f64 = double(float(ctx.f4.f64 / ctx.f5.f64));
	// fmuls f1,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// stfs f1,68(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// lfs f13,72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f2
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// stfs f12,72(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// lfs f11,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f2
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// stfs f10,76(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// lfs f5,96(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f5.f64 = double(temp.f32);
	// lfs f9,132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// lfs f3,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f3.f64 = double(temp.f32);
	// lfs f7,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f6.f64 = double(temp.f32);
	// lfs f1,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f10,f8,f12
	ctx.f10.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// lfs f11,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f9,f5
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f5.f64));
	// fsubs f2,f5,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f3.f64));
	// lfs f8,92(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f8.f64 = double(temp.f32);
	// lfs f3,116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f2,f2
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// fsubs f2,f8,f7
	ctx.f2.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fsubs f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fsubs f12,f6,f8
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// fmadds f9,f9,f9,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f8,f10,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fmadds f7,f2,f2,f9
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f9.f64));
	// fmadds f6,f12,f12,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fdivs f5,f7,f1
	ctx.f5.f64 = double(float(ctx.f7.f64 / ctx.f1.f64));
	// fdivs f3,f6,f3
	ctx.f3.f64 = double(float(ctx.f6.f64 / ctx.f3.f64));
	// fadds f2,f3,f5
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// fmuls f1,f3,f5
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// fmuls f13,f2,f2
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// fmuls f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fdivs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fmuls f10,f4,f11
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// stfs f10,104(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// lfs f9,108(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f8,108(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// lfs f7,112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// stfs f6,112(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// addi r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 + 144;
	// blt cr6,0x82a5ceb0
	if (cr6.lt) goto loc_82A5CEB0;
loc_82A5D130:
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
loc_82A5D154:
	// lfs f13,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f8,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// lfs f3,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// lfs f6,72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f6.f64 = double(temp.f32);
	// lfs f2,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f4,f6,f8
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f13,f3,f2
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// fsubs f5,f8,f7
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f1,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f12,f1,f3
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f3.f64));
	// lfs f11,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f10,f10
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f3,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f9,f9
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// lfs f1,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f10,f5,f5,f6
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f6.f64));
	// fmadds f9,f4,f4,f2
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f2.f64));
	// fmadds f6,f13,f13,f10
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f5,f12,f12,f9
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fdivs f4,f6,f11
	ctx.f4.f64 = double(float(ctx.f6.f64 / ctx.f11.f64));
	// fdivs f2,f5,f8
	ctx.f2.f64 = double(float(ctx.f5.f64 / ctx.f8.f64));
	// fadds f13,f2,f4
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// fmuls f12,f2,f4
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fdivs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f11.f64));
	// fmuls f8,f7,f9
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// stfs f8,40(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// fmuls f7,f9,f3
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// stfs f7,44(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// fmuls f6,f9,f1
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// stfs f6,48(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// bdnz 0x82a5d154
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A5D154;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5D1FC"))) PPC_WEAK_FUNC(sub_82A5D1FC);
PPC_FUNC_IMPL(__imp__sub_82A5D1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A5D200"))) PPC_WEAK_FUNC(sub_82A5D200);
PPC_FUNC_IMPL(__imp__sub_82A5D200) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-31778
	ctx.r9.s64 = -2082603008;
	// lfs f10,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f9,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f8,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// addi r5,r9,19720
	ctx.r5.s64 = ctx.r9.s64 + 19720;
	// lfs f0,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f8,132(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f6,120(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f5,136(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f4,108(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f3,124(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f2,140(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x82a5a2d0
	ctx.lr = 0x82A5D2AC;
	sub_82A5A2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x831ce980
	ctx.lr = 0x82A5D2BC;
	sub_831CE980(ctx, base);
	// fmuls f1,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmuls f0,f1,f31
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82a59ca0
	ctx.lr = 0x82A5D2E0;
	sub_82A59CA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5D2FC"))) PPC_WEAK_FUNC(sub_82A5D2FC);
PPC_FUNC_IMPL(__imp__sub_82A5D2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A5D300"))) PPC_WEAK_FUNC(sub_82A5D300);
PPC_FUNC_IMPL(__imp__sub_82A5D300) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x82a5d340
	if (!cr6.eq) goto loc_82A5D340;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// b 0x82a5d45c
	goto loc_82A5D45C;
loc_82A5D340:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f8,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f1,f8
	cr6.compare(ctx.f1.f64, ctx.f8.f64);
	// blt cr6,0x82a5d380
	if (cr6.lt) goto loc_82A5D380;
	// lbz r10,724(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 724);
	// rotlwi r11,r10,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r8,-36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -36);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lwz r7,-32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// lwz r6,-28(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// b 0x82a5d45c
	goto loc_82A5D45C;
loc_82A5D380:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82a5cd38
	ctx.lr = 0x82A5D390;
	sub_82A5CD38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// fcmpu cr6,f1,f8
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f8.f64);
	// bge cr6,0x82a5d3c0
	if (!cr6.lt) goto loc_82A5D3C0;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f0,720(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 720);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmsubs f12,f0,f1,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 - ctx.f13.f64));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lfs f11,24(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f8,f12,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
loc_82A5D3C0:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lbz r10,68(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 68);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82a5d3f8
	if (!cr6.eq) goto loc_82A5D3F8;
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// lfs f12,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// fmr f9,f12
	ctx.f9.f64 = ctx.f12.f64;
	// b 0x82a5d410
	goto loc_82A5D410;
loc_82A5D3F8:
	// lfs f0,48(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
loc_82A5D410:
	// lfs f7,24(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// addi r6,r4,36
	ctx.r6.s64 = ctx.r4.s64 + 36;
	// fmuls f1,f12,f7
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f5,f7,f10
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// stfs f5,108(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmuls f4,f9,f7
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// stfs f4,112(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f3,f7,f0
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f2,f13,f7
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// stfs f2,92(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// fmr f1,f8
	ctx.f1.f64 = ctx.f8.f64;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a5d200
	ctx.lr = 0x82A5D45C;
	sub_82A5D200(ctx, base);
loc_82A5D45C:
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

__attribute__((alias("__imp__sub_82A5D474"))) PPC_WEAK_FUNC(sub_82A5D474);
PPC_FUNC_IMPL(__imp__sub_82A5D474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A5D478"))) PPC_WEAK_FUNC(sub_82A5D478);
PPC_FUNC_IMPL(__imp__sub_82A5D478) {
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
	// lfs f30,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f30.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// lfs f29,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// stfs f31,0(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f31,4(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f31,8(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blt cr6,0x82a5d4f0
	if (cr6.lt) goto loc_82A5D4F0;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82a5aa98
	ctx.lr = 0x82A5D4CC;
	sub_82A5AA98(ctx, base);
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stfs f31,4(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// lfs f0,-23844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23844);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 + ctx.f0.f64));
	// bl 0x82a5aa98
	ctx.lr = 0x82A5D4E8;
	sub_82A5AA98(ctx, base);
	// stfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// b 0x82a5d524
	goto loc_82A5D524;
loc_82A5D4F0:
	// lfs f0,36(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r4,36
	ctx.r11.s64 = ctx.r4.s64 + 36;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f8,4(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f6,8(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_82A5D524:
	// lfs f12,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f10,f0,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f9,f13,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fsqrts f11,f9
	ctx.f11.f64 = double(float(sqrt(ctx.f9.f64)));
	// fcmpu cr6,f11,f31
	cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// beq cr6,0x82a5d568
	if (cr6.eq) goto loc_82A5D568;
	// fdivs f11,f29,f11
	ctx.f11.f64 = double(float(ctx.f29.f64 / ctx.f11.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f10,0(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f9,4(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f8,8(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_82A5D568:
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

__attribute__((alias("__imp__sub_82A5D588"))) PPC_WEAK_FUNC(sub_82A5D588);
PPC_FUNC_IMPL(__imp__sub_82A5D588) {
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
	// lbz r11,724(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 724);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f31,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f29,-26260(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26260);
	ctx.f29.f64 = double(temp.f32);
	// stfs f31,0(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f31,4(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f31,8(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lfs f30,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// blt cr6,0x82a5d618
	if (cr6.lt) goto loc_82A5D618;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82a5aa98
	ctx.lr = 0x82A5D5F4;
	sub_82A5AA98(ctx, base);
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stfs f31,4(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// lfs f0,-23844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23844);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 + ctx.f0.f64));
	// bl 0x82a5aa98
	ctx.lr = 0x82A5D610;
	sub_82A5AA98(ctx, base);
	// stfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// b 0x82a5d648
	goto loc_82A5D648;
loc_82A5D618:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,-32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f7,-28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f8,4(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f6,8(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_82A5D648:
	// lfs f12,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f10,f0,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f9,f13,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fsqrts f11,f9
	ctx.f11.f64 = double(float(sqrt(ctx.f9.f64)));
	// fcmpu cr6,f11,f31
	cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// beq cr6,0x82a5d68c
	if (cr6.eq) goto loc_82A5D68C;
	// fdivs f11,f29,f11
	ctx.f11.f64 = double(float(ctx.f29.f64 / ctx.f11.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f10,0(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f9,4(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f8,8(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_82A5D68C:
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

__attribute__((alias("__imp__sub_82A5D6AC"))) PPC_WEAK_FUNC(sub_82A5D6AC);
PPC_FUNC_IMPL(__imp__sub_82A5D6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A5D6B0"))) PPC_WEAK_FUNC(sub_82A5D6B0);
PPC_FUNC_IMPL(__imp__sub_82A5D6B0) {
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
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831ce764
	ctx.lr = 0x82A5D6C0;
	__savefpr_23(ctx, base);
	// lfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f12,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f9,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lbz r11,724(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 724);
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// lfs f0,21708(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21708);
	ctx.f0.f64 = double(temp.f32);
	// lfs f5,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lfs f12,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f4,f12,f5
	ctx.f4.f64 = double(float(ctx.f12.f64 / ctx.f5.f64));
	// lfs f3,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// lfs f1,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f13,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f8,f0
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f9,f6,f0
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f8,f4,f11
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmuls f7,f4,f10
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmuls f6,f4,f9
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f9.f64));
	// fsubs f5,f8,f3
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f3.f64));
	// fsubs f4,f7,f2
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f2.f64));
	// fsubs f3,f6,f1
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f1.f64));
	// fmuls f11,f5,f13
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f10,f4,f13
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmuls f9,f3,f13
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// ble cr6,0x82a5d868
	if (!cr6.gt) goto loc_82A5D868;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r11,r3,-16
	ctx.r11.s64 = ctx.r3.s64 + -16;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A5D75C:
	// lfs f8,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// lfs f5,88(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f5.f64 = double(temp.f32);
	// lfs f7,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f3,f5,f8
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f8.f64));
	// lfs f4,92(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f4.f64 = double(temp.f32);
	// lfs f6,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f1,f4,f7
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f7.f64));
	// lfs f2,96(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// lfs f5,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f2,f6
	ctx.f4.f64 = double(float(ctx.f2.f64 - ctx.f6.f64));
	// lfs f2,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f5.f64));
	// lfs f5,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f2,f7,f2
	ctx.f2.f64 = double(float(ctx.f7.f64 - ctx.f2.f64));
	// fsubs f7,f6,f5
	ctx.f7.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// lfs f6,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f6.f64 = double(temp.f32);
	// fdivs f31,f12,f6
	ctx.f31.f64 = double(float(ctx.f12.f64 / ctx.f6.f64));
	// lfs f5,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// lfs f29,100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f29.f64 = double(temp.f32);
	// fdivs f30,f12,f5
	ctx.f30.f64 = double(float(ctx.f12.f64 / ctx.f5.f64));
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f28,104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	ctx.f28.f64 = double(temp.f32);
	// lfs f26,108(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	ctx.f26.f64 = double(temp.f32);
	// fadds f27,f6,f5
	ctx.f27.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f25,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f23,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f11,28(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fmuls f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f10,32(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// fmuls f11,f7,f0
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfsu f9,36(r11)
	ea = 36 + ctx.r11.u32;
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmuls f7,f31,f3
	ctx.f7.f64 = double(float(ctx.f31.f64 * ctx.f3.f64));
	// fdivs f9,f12,f27
	ctx.f9.f64 = double(float(ctx.f12.f64 / ctx.f27.f64));
	// fmuls f3,f31,f1
	ctx.f3.f64 = double(float(ctx.f31.f64 * ctx.f1.f64));
	// fmuls f1,f31,f4
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f4.f64));
	// fmuls f10,f30,f8
	ctx.f10.f64 = double(float(ctx.f30.f64 * ctx.f8.f64));
	// fmuls f8,f30,f2
	ctx.f8.f64 = double(float(ctx.f30.f64 * ctx.f2.f64));
	// fmuls f4,f30,f11
	ctx.f4.f64 = double(float(ctx.f30.f64 * ctx.f11.f64));
	// fsubs f2,f7,f29
	ctx.f2.f64 = double(float(ctx.f7.f64 - ctx.f29.f64));
	// fsubs f11,f3,f28
	ctx.f11.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// fsubs f7,f1,f26
	ctx.f7.f64 = double(float(ctx.f1.f64 - ctx.f26.f64));
	// fsubs f3,f10,f25
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f25.f64));
	// fsubs f1,f8,f24
	ctx.f1.f64 = double(float(ctx.f8.f64 - ctx.f24.f64));
	// fsubs f10,f4,f23
	ctx.f10.f64 = double(float(ctx.f4.f64 - ctx.f23.f64));
	// fmuls f8,f2,f13
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmuls f4,f11,f13
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f2,f7,f13
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f11,f3,f13
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmuls f7,f1,f13
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmuls f3,f10,f13
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f1,f8,f5
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmuls f10,f4,f5
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// fmuls f8,f2,f5
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// fmuls f5,f11,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmuls f4,f7,f6
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fmuls f3,f3,f6
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f6.f64));
	// fadds f2,f5,f1
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f1.f64));
	// fadds f1,f4,f10
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f10.f64));
	// fadds f8,f3,f8
	ctx.f8.f64 = double(float(ctx.f3.f64 + ctx.f8.f64));
	// fmuls f11,f9,f2
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// fmuls f10,f9,f1
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fmuls f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// bdnz 0x82a5d75c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A5D75C;
loc_82A5D868:
	// lbz r11,724(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 724);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// rotlwi r9,r11,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r11,r9,r3
	ctx.r11.u64 = ctx.r9.u64 + ctx.r3.u64;
	// addi r9,r10,-24
	ctx.r9.s64 = ctx.r10.s64 + -24;
	// lfs f8,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f8,f7
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f4,-32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f6,f4
	ctx.f2.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// lfs f1,-28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f8,f3,f1
	ctx.f8.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// lfs f7,-12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f7.f64 = double(temp.f32);
	// fdivs f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 / ctx.f7.f64));
	// lfs f4,-24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,-20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,-16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f12,f5,f0
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f7,f2,f0
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f2,f6,f12
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f0,f6,f7
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmuls f12,f6,f5
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fsubs f8,f2,f4
	ctx.f8.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// fsubs f7,f0,f3
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f3.f64));
	// fsubs f6,f12,f1
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f1.f64));
	// fmuls f5,f8,f13
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f5,-24(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + -24, temp.u32);
	// fmuls f4,f7,f13
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f4,-20(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + -20, temp.u32);
	// fmuls f3,f6,f13
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// stfs f3,-16(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + -16, temp.u32);
	// lbz r11,724(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 724);
	// rotlwi r10,r11,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,-60
	ctx.r10.s64 = ctx.r11.s64 + -60;
	// stfs f11,-60(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + -60, temp.u32);
	// stfs f10,-56(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + -56, temp.u32);
	// stfs f9,-52(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + -52, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831ce7b0
	ctx.lr = 0x82A5D934;
	__restfpr_23(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5D940"))) PPC_WEAK_FUNC(sub_82A5D940);
PPC_FUNC_IMPL(__imp__sub_82A5D940) {
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
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831ce778
	ctx.lr = 0x82A5D958;
	__savefpr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,724(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 724);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// bl 0x82a5d478
	ctx.lr = 0x82A5D974;
	sub_82A5D478(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,20(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// bl 0x82a5d588
	ctx.lr = 0x82A5D99C;
	sub_82A5D588(ctx, base);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f11,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// ble cr6,0x82a5db18
	if (!cr6.gt) goto loc_82A5DB18;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r31,r31,52
	ctx.r31.s64 = ctx.r31.s64 + 52;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// lfs f28,-23844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23844);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
loc_82A5D9F0:
	// lfs f31,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// blt cr6,0x82a5da24
	if (cr6.lt) goto loc_82A5DA24;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a5aa98
	ctx.lr = 0x82A5DA08;
	sub_82A5AA98(ctx, base);
	// stfs f1,-4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// stfs f30,0(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fadds f1,f31,f28
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f28.f64));
	// bl 0x82a5aa98
	ctx.lr = 0x82A5DA1C;
	sub_82A5AA98(ctx, base);
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// b 0x82a5dacc
	goto loc_82A5DACC;
loc_82A5DA24:
	// lfs f10,-12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f0,f8,f10
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// lfs f9,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f13,f7,f9
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// lfs f6,-16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f12,f5,f6
	ctx.f12.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// lfs f4,-52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -52);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f11,f4,f6
	ctx.f11.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// lfs f3,-48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,-44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -44);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f10,f3,f10
	ctx.f10.f64 = double(float(ctx.f3.f64 - ctx.f10.f64));
	// fsubs f9,f2,f9
	ctx.f9.f64 = double(float(ctx.f2.f64 - ctx.f9.f64));
	// fmuls f1,f0,f0
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
	// fmadds f8,f13,f13,f1
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f1.f64));
	// fmadds f6,f12,f12,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fsqrts f8,f6
	ctx.f8.f64 = double(float(sqrt(ctx.f6.f64)));
	// fcmpu cr6,f8,f30
	cr6.compare(ctx.f8.f64, ctx.f30.f64);
	// beq cr6,0x82a5da8c
	if (cr6.eq) goto loc_82A5DA8C;
	// fdivs f8,f29,f8
	ctx.f8.f64 = double(float(ctx.f29.f64 / ctx.f8.f64));
	// fmuls f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
loc_82A5DA8C:
	// fmuls f0,f10,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f8,f9,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f0.f64));
	// fmadds f6,f11,f11,f8
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f8.f64));
	// fsqrts f0,f6
	ctx.f0.f64 = double(float(sqrt(ctx.f6.f64)));
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x82a5dab4
	if (cr6.eq) goto loc_82A5DAB4;
	// fdivs f0,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 / ctx.f0.f64));
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
loc_82A5DAB4:
	// fsubs f0,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f0,-4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// fsubs f12,f7,f10
	ctx.f12.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fsubs f11,f13,f9
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// stfs f11,4(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_82A5DACC:
	// lfs f12,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f10,f0,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f9,f13,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fsqrts f11,f9
	ctx.f11.f64 = double(float(sqrt(ctx.f9.f64)));
	// fcmpu cr6,f11,f30
	cr6.compare(ctx.f11.f64, ctx.f30.f64);
	// beq cr6,0x82a5db0c
	if (cr6.eq) goto loc_82A5DB0C;
	// fdivs f11,f29,f11
	ctx.f11.f64 = double(float(ctx.f29.f64 / ctx.f11.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f10,-4(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// fmuls f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f9,0(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f8,4(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_82A5DB0C:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// bne 0x82a5d9f0
	if (!cr0.eq) goto loc_82A5D9F0;
loc_82A5DB18:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831ce7c4
	ctx.lr = 0x82A5DB24;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5DB38"))) PPC_WEAK_FUNC(sub_82A5DB38);
PPC_FUNC_IMPL(__imp__sub_82A5DB38) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x82a5d940
	ctx.lr = 0x82A5DB50;
	sub_82A5D940(ctx, base);
	// lfs f11,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f9,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f7,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f6,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f9,f7
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// lfs f4,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fsubs f3,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// lfs f0,21708(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21708);
	ctx.f0.f64 = double(temp.f32);
	// lfs f2,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lfs f12,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f1,f12,f2
	ctx.f1.f64 = double(float(ctx.f12.f64 / ctx.f2.f64));
	// lfs f13,-24912(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24912);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f7,f5,f0
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f6,f3,f0
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f11,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f5,f1,f8
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// fmuls f4,f1,f7
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f7.f64));
	// fmuls f3,f1,f6
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f6.f64));
	// fsubs f2,f5,f11
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// fsubs f1,f4,f10
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f10.f64));
	// fsubs f11,f3,f9
	ctx.f11.f64 = double(float(ctx.f3.f64 - ctx.f9.f64));
	// fmuls f10,f2,f13
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// stfs f10,12(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmuls f9,f1,f13
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// stfs f9,16(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fmuls f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f8,20(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lbz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 724);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// rotlwi r9,r11,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 + ctx.r31.u64;
	// addi r9,r10,-24
	ctx.r9.s64 = ctx.r10.s64 + -24;
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -36);
	ctx.f6.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	ctx.f9.f64 = double(temp.f32);
	// lfs f3,-12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,-20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
	// lfs f11,-24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f4,-32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f5,f5,f4
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fsubs f4,f7,f6
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fdivs f3,f12,f3
	ctx.f3.f64 = double(float(ctx.f12.f64 / ctx.f3.f64));
	// fmuls f10,f5,f0
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f12,f8,f0
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f9,f4,f0
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f7,f3,f10
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// fmuls f8,f3,f12
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmuls f6,f3,f9
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f9.f64));
	// fsubs f4,f7,f2
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f2.f64));
	// fsubs f5,f8,f1
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f1.f64));
	// fsubs f3,f6,f11
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// fmuls f1,f4,f13
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// stfs f1,-20(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + -20, temp.u32);
	// fmuls f2,f5,f13
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// stfs f2,-16(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + -16, temp.u32);
	// fmuls f0,f3,f13
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// stfs f0,-24(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -24, temp.u32);
	// bl 0x82a5d6b0
	ctx.lr = 0x82A5DC84;
	sub_82A5D6B0(ctx, base);
	// bl 0x82a5ce80
	ctx.lr = 0x82A5DC88;
	sub_82A5CE80(ctx, base);
	// bl 0x82a5d6b0
	ctx.lr = 0x82A5DC8C;
	sub_82A5D6B0(ctx, base);
	// bl 0x82a5ce80
	ctx.lr = 0x82A5DC90;
	sub_82A5CE80(ctx, base);
	// bl 0x82a5d6b0
	ctx.lr = 0x82A5DC94;
	sub_82A5D6B0(ctx, base);
	// bl 0x82a5ce80
	ctx.lr = 0x82A5DC98;
	sub_82A5CE80(ctx, base);
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

__attribute__((alias("__imp__sub_82A5DCAC"))) PPC_WEAK_FUNC(sub_82A5DCAC);
PPC_FUNC_IMPL(__imp__sub_82A5DCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

