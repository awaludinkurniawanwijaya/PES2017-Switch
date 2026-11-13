#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_830CFB70"))) PPC_WEAK_FUNC(sub_830CFB70);
PPC_FUNC_IMPL(__imp__sub_830CFB70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830CFB78;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830d9ef0
	ctx.lr = 0x830CFB88;
	sub_830D9EF0(ctx, base);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r30,r3,24
	ctx.r30.u64 = ctx.r3.u32 & 0xFF;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r4,2
	ctx.r4.s64 = 2;
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x827b4aa0
	ctx.lr = 0x830CFBA8;
	sub_827B4AA0(ctx, base);
	// lfs f12,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r26,32(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// bne cr6,0x830cfbd4
	if (!cr6.eq) goto loc_830CFBD4;
loc_830CFBC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830CFBD4:
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(ctx.r28.s32, 4, xer);
	// beq cr6,0x830cfbf0
	if (cr6.eq) goto loc_830CFBF0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e1f98
	ctx.lr = 0x830CFBE8;
	sub_830E1F98(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x830cfbc8
	if (!cr6.eq) goto loc_830CFBC8;
loc_830CFBF0:
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(ctx.r29.s32, 3, xer);
	// beq cr6,0x830cfbc8
	if (cr6.eq) goto loc_830CFBC8;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e0bd8
	ctx.lr = 0x830CFC0C;
	sub_830E0BD8(ctx, base);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x827b4418
	ctx.lr = 0x830CFC1C;
	sub_827B4418(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830CFC24"))) PPC_WEAK_FUNC(sub_830CFC24);
PPC_FUNC_IMPL(__imp__sub_830CFC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830CFC28"))) PPC_WEAK_FUNC(sub_830CFC28);
PPC_FUNC_IMPL(__imp__sub_830CFC28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830CFC30;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r31,132(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x830cfcac
	if (cr6.eq) goto loc_830CFCAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82a225d0
	ctx.lr = 0x830CFC54;
	sub_82A225D0(ctx, base);
	// bl 0x8291ae08
	ctx.lr = 0x830CFC58;
	sub_8291AE08(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x830cfc64
	if (!cr6.eq) goto loc_830CFC64;
	// li r30,1
	ctx.r30.s64 = 1;
loc_830CFC64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a225d0
	ctx.lr = 0x830CFC6C;
	sub_82A225D0(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830cfcac
	if (!cr6.eq) goto loc_830CFCAC;
	// lis r11,5
	ctx.r11.s64 = 327680;
	// ori r10,r11,8025
	ctx.r10.u64 = ctx.r11.u64 | 8025;
	// lbzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x830cfcac
	if (!cr6.eq) goto loc_830CFCAC;
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x830d9308
	ctx.lr = 0x830CFCA4;
	sub_830D9308(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830CFCAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830CFCB8"))) PPC_WEAK_FUNC(sub_830CFCB8);
PPC_FUNC_IMPL(__imp__sub_830CFCB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x830CFCC0;
	__savegprlr_20(ctx, base);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,36(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(ctx.r24.s32, 2, xer);
	// bge cr6,0x830d00b0
	if (!cr6.lt) goto loc_830D00B0;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f12,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f11.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fctidz f8,f10
	ctx.f8.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// fctidz f7,f9
	ctx.f7.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f9.f64));
	// li r8,4
	ctx.r8.s64 = 4;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// stfd f8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f8.u64);
	// subfe r6,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stfd f7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f7.u64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r26,100(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r21,92(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r20,28(r4)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// bl 0x830e1328
	ctx.lr = 0x830CFD38;
	sub_830E1328(ctx, base);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r9,55
	cr6.compare<int32_t>(ctx.r9.s32, 55, xer);
	// beq cr6,0x830d00a8
	if (cr6.eq) goto loc_830D00A8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r25,120(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
	// lwz r28,132(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// beq cr6,0x830cfe68
	if (cr6.eq) goto loc_830CFE68;
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(ctx.r26.u32, 1, xer);
	// beq cr6,0x830cfe68
	if (cr6.eq) goto loc_830CFE68;
	// cmplwi cr6,r26,3
	cr6.compare<uint32_t>(ctx.r26.u32, 3, xer);
	// beq cr6,0x830cfe68
	if (cr6.eq) goto loc_830CFE68;
	// cmplwi cr6,r26,4
	cr6.compare<uint32_t>(ctx.r26.u32, 4, xer);
	// beq cr6,0x830cfe68
	if (cr6.eq) goto loc_830CFE68;
	// cmplwi cr6,r26,2
	cr6.compare<uint32_t>(ctx.r26.u32, 2, xer);
	// bne cr6,0x830d0094
	if (!cr6.eq) goto loc_830D0094;
	// lis r28,-31763
	ctx.r28.s64 = -2081619968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-3564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// lwz r27,292(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x830e1e68
	ctx.lr = 0x830CFD94;
	sub_830E1E68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r26,124(r1)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r1.u32 + 124);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a23e98
	ctx.lr = 0x830CFDA4;
	sub_82A23E98(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x830d7110
	ctx.lr = 0x830CFDAC;
	sub_830D7110(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e0f00
	ctx.lr = 0x830CFDB8;
	sub_830E0F00(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// beq cr6,0x830cfe28
	if (cr6.eq) goto loc_830CFE28;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x830cfdd0
	if (!cr6.eq) goto loc_830CFDD0;
	// li r30,45
	ctx.r30.s64 = 45;
	// b 0x830cfe40
	goto loc_830CFE40;
loc_830CFDD0:
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// bne cr6,0x830cfde0
	if (!cr6.eq) goto loc_830CFDE0;
	// li r30,90
	ctx.r30.s64 = 90;
	// b 0x830cfe40
	goto loc_830CFE40;
loc_830CFDE0:
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// bne cr6,0x830cfdf0
	if (!cr6.eq) goto loc_830CFDF0;
	// li r30,105
	ctx.r30.s64 = 105;
	// b 0x830cfe40
	goto loc_830CFE40;
loc_830CFDF0:
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(ctx.r29.s32, 3, xer);
	// bne cr6,0x830cfe00
	if (!cr6.eq) goto loc_830CFE00;
	// li r30,120
	ctx.r30.s64 = 120;
	// b 0x830cfe40
	goto loc_830CFE40;
loc_830CFE00:
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(ctx.r29.s32, 4, xer);
	// bne cr6,0x830cfe40
	if (!cr6.eq) goto loc_830CFE40;
	// lwz r11,-3564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// lwz r11,312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// lbz r10,97(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 97);
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,27,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1E;
	// addi r30,r11,90
	ctx.r30.s64 = ctx.r11.s64 + 90;
	// b 0x830cfe40
	goto loc_830CFE40;
loc_830CFE28:
	// lfs f1,4464(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4464);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a29110
	ctx.lr = 0x830CFE30;
	sub_82A29110(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d7110
	ctx.lr = 0x830CFE3C;
	sub_830D7110(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_830CFE40:
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// subf r3,r26,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r26.s64;
	// bl 0x827b4488
	ctx.lr = 0x830CFE50;
	sub_827B4488(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83102db0
	ctx.lr = 0x830CFE5C;
	sub_83102DB0(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_830CFE68:
	// cntlzw r11,r24
	ctx.r11.u64 = ctx.r24.u32 == 0 ? 32 : __builtin_clz(ctx.r24.u32);
	// sth r30,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r30.u16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// sth r30,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r30.u16);
	// rlwinm r23,r11,27,31,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82a22ac0
	ctx.lr = 0x830CFE80;
	sub_82A22AC0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x830cfee0
	if (!cr6.gt) goto loc_830CFEE0;
loc_830CFE90:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a22a50
	ctx.lr = 0x830CFE9C;
	sub_82A22A50(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x830cfed4
	if (cr6.eq) goto loc_830CFED4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// blt cr6,0x830cfed4
	if (cr6.lt) goto loc_830CFED4;
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x830cfed4
	if (!cr6.lt) goto loc_830CFED4;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// lhzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// sthx r8,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u16);
loc_830CFED4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r27
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, xer);
	// blt cr6,0x830cfe90
	if (cr6.lt) goto loc_830CFE90;
loc_830CFEE0:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// bne cr6,0x830cff6c
	if (!cr6.eq) goto loc_830CFF6C;
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// rlwinm r9,r20,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lhzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// beq cr6,0x830cff14
	if (cr6.eq) goto loc_830CFF14;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfc r11,r11,r21
	xer.ca = ctx.r21.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r21.s64 - ctx.r11.s64;
	// subfze r11,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x830cff3c
	goto loc_830CFF3C;
loc_830CFF14:
	// rlwinm r10,r20,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x830cff30
	if (cr6.eq) goto loc_830CFF30;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfc r11,r21,r11
	xer.ca = ctx.r11.u32 >= ctx.r21.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r21.s64;
	// subfze r11,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x830cff3c
	goto loc_830CFF3C;
loc_830CFF30:
	// subf r11,r11,r21
	ctx.r11.s64 = ctx.r21.s64 - ctx.r11.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_830CFF3C:
	// rlwinm r10,r20,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x830cff54
	if (cr6.eq) goto loc_830CFF54;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_830CFF54:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// bl 0x83102db0
	ctx.lr = 0x830CFF60;
	sub_83102DB0(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_830CFF6C:
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(ctx.r26.u32, 1, xer);
	// bne cr6,0x830cffa8
	if (!cr6.eq) goto loc_830CFFA8;
	// rlwinm r11,r23,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lhzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// bl 0x827b4488
	ctx.lr = 0x830CFF90;
	sub_827B4488(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83102db0
	ctx.lr = 0x830CFF9C;
	sub_83102DB0(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_830CFFA8:
	// cmplwi cr6,r26,3
	cr6.compare<uint32_t>(ctx.r26.u32, 3, xer);
	// beq cr6,0x830cffb8
	if (cr6.eq) goto loc_830CFFB8;
	// cmplwi cr6,r26,4
	cr6.compare<uint32_t>(ctx.r26.u32, 4, xer);
	// bne cr6,0x830d0094
	if (!cr6.eq) goto loc_830D0094;
loc_830CFFB8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_830CFFBC:
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e0c48
	ctx.lr = 0x830CFFCC;
	sub_830E0C48(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// clrlwi r4,r9,24
	ctx.r4.u64 = ctx.r9.u32 & 0xFF;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lhzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// subf r9,r10,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r10.s64;
	// sthx r3,r11,r7
	PPC_STORE_U16(ctx.r11.u32 + ctx.r7.u32, ctx.r3.u16);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sthx r8,r11,r5
	PPC_STORE_U16(ctx.r11.u32 + ctx.r5.u32, ctx.r8.u16);
	// blt cr6,0x830cffbc
	if (cr6.lt) goto loc_830CFFBC;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x830d00a8
	if (cr6.lt) goto loc_830D00A8;
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x830d00a8
	if (cr6.lt) goto loc_830D00A8;
	// cmplwi cr6,r26,3
	cr6.compare<uint32_t>(ctx.r26.u32, 3, xer);
	// bne cr6,0x830d005c
	if (!cr6.eq) goto loc_830D005C;
	// rlwinm r11,r23,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r24,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lhzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// lhzx r6,r9,r8
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// subf r3,r5,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r5.s64;
	// b 0x830d0088
	goto loc_830D0088;
loc_830D005C:
	// cmplwi cr6,r26,4
	cr6.compare<uint32_t>(ctx.r26.u32, 4, xer);
	// bne cr6,0x830d0094
	if (!cr6.eq) goto loc_830D0094;
	// rlwinm r11,r23,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r24,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lhzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// lhzx r6,r9,r8
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// subf r3,r4,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r4.s64;
loc_830D0088:
	// neg r11,r3
	ctx.r11.s64 = -ctx.r3.s64;
	// andc r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r3.u64;
	// rlwinm r22,r10,1,31,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
loc_830D0094:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83102db0
	ctx.lr = 0x830D009C;
	sub_83102DB0(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_830D00A8:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83102db0
	ctx.lr = 0x830D00B0;
	sub_83102DB0(ctx, base);
loc_830D00B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D00BC"))) PPC_WEAK_FUNC(sub_830D00BC);
PPC_FUNC_IMPL(__imp__sub_830D00BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D00C0"))) PPC_WEAK_FUNC(sub_830D00C0);
PPC_FUNC_IMPL(__imp__sub_830D00C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830D00C8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,36(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// blt cr6,0x830d00f0
	if (cr6.lt) goto loc_830D00F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830D00F0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827b4aa0
	ctx.lr = 0x830D00FC;
	sub_827B4AA0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f31,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r31,24(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a225d0
	ctx.lr = 0x830D0114;
	sub_82A225D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8291b4e0
	ctx.lr = 0x830D0120;
	sub_8291B4E0(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// rlwinm r9,r31,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lfs f0,-23488(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23488);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// beq cr6,0x830d0148
	if (cr6.eq) goto loc_830D0148;
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x830d0170
	if (!cr6.gt) goto loc_830D0170;
	// b 0x830d016c
	goto loc_830D016C;
loc_830D0148:
	// rlwinm r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830d0164
	if (cr6.eq) goto loc_830D0164;
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x830d0170
	if (!cr6.lt) goto loc_830D0170;
	// b 0x830d016c
	goto loc_830D016C;
loc_830D0164:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x830d0170
	if (cr6.eq) goto loc_830D0170;
loc_830D016C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D0170:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r11,r31,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x830d018c
	if (cr6.eq) goto loc_830D018C;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_830D018C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D0198"))) PPC_WEAK_FUNC(sub_830D0198);
PPC_FUNC_IMPL(__imp__sub_830D0198) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830D01A0;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,36(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// blt cr6,0x830d01c8
	if (cr6.lt) goto loc_830D01C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830D01C8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827b4aa0
	ctx.lr = 0x830D01D4;
	sub_827B4AA0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827b4aa0
	ctx.lr = 0x830D01E4;
	sub_827B4AA0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lfs f31,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// lwz r29,28(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a225d0
	ctx.lr = 0x830D01FC;
	sub_82A225D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8291b4e0
	ctx.lr = 0x830D0208;
	sub_8291B4E0(ctx, base);
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,132(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// bl 0x82a225d0
	ctx.lr = 0x830D0218;
	sub_82A225D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x8291b4e0
	ctx.lr = 0x830D0224;
	sub_8291B4E0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x830d0248
	if (!cr6.eq) goto loc_830D0248;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_830D0248:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x830d7648
	ctx.lr = 0x830D0258;
	sub_830D7648(ctx, base);
	// rlwinm r11,r29,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x830d0274
	if (cr6.eq) goto loc_830D0274;
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x830d029c
	if (!cr6.gt) goto loc_830D029C;
	// b 0x830d0298
	goto loc_830D0298;
loc_830D0274:
	// rlwinm r11,r29,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830d0290
	if (cr6.eq) goto loc_830D0290;
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x830d029c
	if (!cr6.lt) goto loc_830D029C;
	// b 0x830d0298
	goto loc_830D0298;
loc_830D0290:
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// beq cr6,0x830d029c
	if (cr6.eq) goto loc_830D029C;
loc_830D0298:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D029C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r11,r29,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x830d02b8
	if (cr6.eq) goto loc_830D02B8;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_830D02B8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D02C4"))) PPC_WEAK_FUNC(sub_830D02C4);
PPC_FUNC_IMPL(__imp__sub_830D02C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D02C8"))) PPC_WEAK_FUNC(sub_830D02C8);
PPC_FUNC_IMPL(__imp__sub_830D02C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830D02D0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x830d9ef0
	ctx.lr = 0x830D02E4;
	sub_830D9EF0(ctx, base);
	// lfs f0,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x830d0310
	if (!cr6.eq) goto loc_830D0310;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830D0310:
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// cntlzw r9,r4
	ctx.r9.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm r29,r9,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,-3564(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3564);
	// lwz r30,6132(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6132);
	// bne cr6,0x830d0340
	if (!cr6.eq) goto loc_830D0340;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a28860
	ctx.lr = 0x830D0338;
	sub_82A28860(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x830d03f8
	goto loc_830D03F8;
loc_830D0340:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x830d0358
	if (!cr6.eq) goto loc_830D0358;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a288f0
	ctx.lr = 0x830D0350;
	sub_82A288F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x830d03f8
	goto loc_830D03F8;
loc_830D0358:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x830d0394
	if (!cr6.eq) goto loc_830D0394;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a28860
	ctx.lr = 0x830D0368;
	sub_82A28860(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d03f0
	if (cr6.eq) goto loc_830D03F0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a28860
	ctx.lr = 0x830D0380;
	sub_82A28860(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x830d03f4
	if (!cr6.eq) goto loc_830D03F4;
	// b 0x830d03f0
	goto loc_830D03F0;
loc_830D0394:
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x830d03ac
	if (!cr6.eq) goto loc_830D03AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a26b98
	ctx.lr = 0x830D03A4;
	sub_82A26B98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x830d03f8
	goto loc_830D03F8;
loc_830D03AC:
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bne cr6,0x830d03c4
	if (!cr6.eq) goto loc_830D03C4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a28980
	ctx.lr = 0x830D03BC;
	sub_82A28980(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x830d03f8
	goto loc_830D03F8;
loc_830D03C4:
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bne cr6,0x830d03f8
	if (!cr6.eq) goto loc_830D03F8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a289b0
	ctx.lr = 0x830D03D4;
	sub_82A289B0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82a289b0
	ctx.lr = 0x830D03E4;
	sub_82A289B0(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830d03f4
	if (cr6.eq) goto loc_830D03F4;
loc_830D03F0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D03F4:
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
loc_830D03F8:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d041c
	if (cr6.eq) goto loc_830D041C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830e7e78
	ctx.lr = 0x830D040C;
	sub_830E7E78(ctx, base);
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
loc_830D041C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D042C"))) PPC_WEAK_FUNC(sub_830D042C);
PPC_FUNC_IMPL(__imp__sub_830D042C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D0430"))) PPC_WEAK_FUNC(sub_830D0430);
PPC_FUNC_IMPL(__imp__sub_830D0430) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r9,312(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// lbz r11,26(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 26);
	// bne cr6,0x830d0470
	if (!cr6.eq) goto loc_830D0470;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D0470:
	// cmplwi cr6,r10,29
	cr6.compare<uint32_t>(ctx.r10.u32, 29, xer);
	// bne cr6,0x830d048c
	if (!cr6.eq) goto loc_830D048C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D048C:
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x830d04a8
	if (!cr6.eq) goto loc_830D04A8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D04A8:
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x830d04c4
	if (!cr6.eq) goto loc_830D04C4;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D04C4:
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x830d04e0
	if (!cr6.eq) goto loc_830D04E0;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D04E0:
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bne cr6,0x830d04fc
	if (!cr6.eq) goto loc_830D04FC;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D04FC:
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// bne cr6,0x830d0518
	if (!cr6.eq) goto loc_830D0518;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D0518:
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// bne cr6,0x830d0534
	if (!cr6.eq) goto loc_830D0534;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-9
	ctx.r11.s64 = ctx.r11.s64 + -9;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D0534:
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// bne cr6,0x830d0550
	if (!cr6.eq) goto loc_830D0550;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-10
	ctx.r11.s64 = ctx.r11.s64 + -10;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D0550:
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bne cr6,0x830d056c
	if (!cr6.eq) goto loc_830D056C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-11
	ctx.r11.s64 = ctx.r11.s64 + -11;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D056C:
	// cmplwi cr6,r10,9
	cr6.compare<uint32_t>(ctx.r10.u32, 9, xer);
	// bne cr6,0x830d0588
	if (!cr6.eq) goto loc_830D0588;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D0588:
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// bne cr6,0x830d05a4
	if (!cr6.eq) goto loc_830D05A4;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-13
	ctx.r11.s64 = ctx.r11.s64 + -13;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D05A4:
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bne cr6,0x830d05c0
	if (!cr6.eq) goto loc_830D05C0;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-14
	ctx.r11.s64 = ctx.r11.s64 + -14;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D05C0:
	// cmplwi cr6,r10,12
	cr6.compare<uint32_t>(ctx.r10.u32, 12, xer);
	// bne cr6,0x830d05dc
	if (!cr6.eq) goto loc_830D05DC;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-15
	ctx.r11.s64 = ctx.r11.s64 + -15;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D05DC:
	// cmplwi cr6,r10,13
	cr6.compare<uint32_t>(ctx.r10.u32, 13, xer);
	// bne cr6,0x830d05f8
	if (!cr6.eq) goto loc_830D05F8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D05F8:
	// cmplwi cr6,r10,14
	cr6.compare<uint32_t>(ctx.r10.u32, 14, xer);
	// bne cr6,0x830d0614
	if (!cr6.eq) goto loc_830D0614;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-17
	ctx.r11.s64 = ctx.r11.s64 + -17;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D0614:
	// cmplwi cr6,r10,15
	cr6.compare<uint32_t>(ctx.r10.u32, 15, xer);
	// bne cr6,0x830d0630
	if (!cr6.eq) goto loc_830D0630;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-18
	ctx.r11.s64 = ctx.r11.s64 + -18;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D0630:
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bne cr6,0x830d064c
	if (!cr6.eq) goto loc_830D064C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-19
	ctx.r11.s64 = ctx.r11.s64 + -19;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D064C:
	// cmplwi cr6,r10,17
	cr6.compare<uint32_t>(ctx.r10.u32, 17, xer);
	// bne cr6,0x830d0668
	if (!cr6.eq) goto loc_830D0668;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D0668:
	// cmplwi cr6,r10,18
	cr6.compare<uint32_t>(ctx.r10.u32, 18, xer);
	// bne cr6,0x830d0684
	if (!cr6.eq) goto loc_830D0684;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-21
	ctx.r11.s64 = ctx.r11.s64 + -21;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D0684:
	// cmplwi cr6,r10,19
	cr6.compare<uint32_t>(ctx.r10.u32, 19, xer);
	// bne cr6,0x830d06a0
	if (!cr6.eq) goto loc_830D06A0;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-22
	ctx.r11.s64 = ctx.r11.s64 + -22;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D06A0:
	// cmplwi cr6,r10,20
	cr6.compare<uint32_t>(ctx.r10.u32, 20, xer);
	// bne cr6,0x830d06bc
	if (!cr6.eq) goto loc_830D06BC;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-23
	ctx.r11.s64 = ctx.r11.s64 + -23;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D06BC:
	// cmplwi cr6,r10,21
	cr6.compare<uint32_t>(ctx.r10.u32, 21, xer);
	// bne cr6,0x830d06d8
	if (!cr6.eq) goto loc_830D06D8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D06D8:
	// cmplwi cr6,r10,22
	cr6.compare<uint32_t>(ctx.r10.u32, 22, xer);
	// bne cr6,0x830d06f4
	if (!cr6.eq) goto loc_830D06F4;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-25
	ctx.r11.s64 = ctx.r11.s64 + -25;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D06F4:
	// cmplwi cr6,r10,23
	cr6.compare<uint32_t>(ctx.r10.u32, 23, xer);
	// bne cr6,0x830d0710
	if (!cr6.eq) goto loc_830D0710;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-26
	ctx.r11.s64 = ctx.r11.s64 + -26;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D0710:
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// bne cr6,0x830d072c
	if (!cr6.eq) goto loc_830D072C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-27
	ctx.r11.s64 = ctx.r11.s64 + -27;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D072C:
	// cmplwi cr6,r10,25
	cr6.compare<uint32_t>(ctx.r10.u32, 25, xer);
	// bne cr6,0x830d0748
	if (!cr6.eq) goto loc_830D0748;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D0748:
	// cmplwi cr6,r10,26
	cr6.compare<uint32_t>(ctx.r10.u32, 26, xer);
	// bne cr6,0x830d0764
	if (!cr6.eq) goto loc_830D0764;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-29
	ctx.r11.s64 = ctx.r11.s64 + -29;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D0764:
	// cmplwi cr6,r10,27
	cr6.compare<uint32_t>(ctx.r10.u32, 27, xer);
	// bne cr6,0x830d0780
	if (!cr6.eq) goto loc_830D0780;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-30
	ctx.r11.s64 = ctx.r11.s64 + -30;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D0780:
	// cmplwi cr6,r10,28
	cr6.compare<uint32_t>(ctx.r10.u32, 28, xer);
	// bne cr6,0x830d079c
	if (!cr6.eq) goto loc_830D079C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-31
	ctx.r11.s64 = ctx.r11.s64 + -31;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D079C:
	// cmplwi cr6,r10,33
	cr6.compare<uint32_t>(ctx.r10.u32, 33, xer);
	// bne cr6,0x830d07b8
	if (!cr6.eq) goto loc_830D07B8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D07B8:
	// cmplwi cr6,r10,34
	cr6.compare<uint32_t>(ctx.r10.u32, 34, xer);
	// bne cr6,0x830d07d4
	if (!cr6.eq) goto loc_830D07D4;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-33
	ctx.r11.s64 = ctx.r11.s64 + -33;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D07D4:
	// cmplwi cr6,r10,35
	cr6.compare<uint32_t>(ctx.r10.u32, 35, xer);
	// bne cr6,0x830d07f0
	if (!cr6.eq) goto loc_830D07F0;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-34
	ctx.r11.s64 = ctx.r11.s64 + -34;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D07F0:
	// cmplwi cr6,r10,36
	cr6.compare<uint32_t>(ctx.r10.u32, 36, xer);
	// bne cr6,0x830d080c
	if (!cr6.eq) goto loc_830D080C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-35
	ctx.r11.s64 = ctx.r11.s64 + -35;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D080C:
	// cmplwi cr6,r10,37
	cr6.compare<uint32_t>(ctx.r10.u32, 37, xer);
	// bne cr6,0x830d0828
	if (!cr6.eq) goto loc_830D0828;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-36
	ctx.r11.s64 = ctx.r11.s64 + -36;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D0828:
	// cmplwi cr6,r10,38
	cr6.compare<uint32_t>(ctx.r10.u32, 38, xer);
	// bne cr6,0x830d0844
	if (!cr6.eq) goto loc_830D0844;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-37
	ctx.r11.s64 = ctx.r11.s64 + -37;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D0844:
	// cmplwi cr6,r10,39
	cr6.compare<uint32_t>(ctx.r10.u32, 39, xer);
	// bne cr6,0x830d0860
	if (!cr6.eq) goto loc_830D0860;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-38
	ctx.r11.s64 = ctx.r11.s64 + -38;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D0860:
	// cmplwi cr6,r10,40
	cr6.compare<uint32_t>(ctx.r10.u32, 40, xer);
	// bne cr6,0x830d087c
	if (!cr6.eq) goto loc_830D087C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-39
	ctx.r11.s64 = ctx.r11.s64 + -39;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D087C:
	// cmplwi cr6,r10,41
	cr6.compare<uint32_t>(ctx.r10.u32, 41, xer);
	// bne cr6,0x830d0898
	if (!cr6.eq) goto loc_830D0898;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D0898:
	// cmplwi cr6,r10,42
	cr6.compare<uint32_t>(ctx.r10.u32, 42, xer);
	// bne cr6,0x830d08b4
	if (!cr6.eq) goto loc_830D08B4;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-41
	ctx.r11.s64 = ctx.r11.s64 + -41;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D08B4:
	// cmplwi cr6,r10,43
	cr6.compare<uint32_t>(ctx.r10.u32, 43, xer);
	// bne cr6,0x830d08d0
	if (!cr6.eq) goto loc_830D08D0;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-42
	ctx.r11.s64 = ctx.r11.s64 + -42;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D08D0:
	// cmplwi cr6,r10,44
	cr6.compare<uint32_t>(ctx.r10.u32, 44, xer);
	// bne cr6,0x830d08ec
	if (!cr6.eq) goto loc_830D08EC;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-43
	ctx.r11.s64 = ctx.r11.s64 + -43;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D08EC:
	// cmplwi cr6,r10,45
	cr6.compare<uint32_t>(ctx.r10.u32, 45, xer);
	// bne cr6,0x830d0908
	if (!cr6.eq) goto loc_830D0908;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-44
	ctx.r11.s64 = ctx.r11.s64 + -44;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D0908:
	// cmplwi cr6,r10,46
	cr6.compare<uint32_t>(ctx.r10.u32, 46, xer);
	// bne cr6,0x830d0924
	if (!cr6.eq) goto loc_830D0924;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-45
	ctx.r11.s64 = ctx.r11.s64 + -45;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D0924:
	// cmplwi cr6,r10,47
	cr6.compare<uint32_t>(ctx.r10.u32, 47, xer);
	// bne cr6,0x830d0940
	if (!cr6.eq) goto loc_830D0940;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-46
	ctx.r11.s64 = ctx.r11.s64 + -46;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D0940:
	// cmplwi cr6,r10,48
	cr6.compare<uint32_t>(ctx.r10.u32, 48, xer);
	// bne cr6,0x830d095c
	if (!cr6.eq) goto loc_830D095C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-47
	ctx.r11.s64 = ctx.r11.s64 + -47;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D095C:
	// cmplwi cr6,r10,49
	cr6.compare<uint32_t>(ctx.r10.u32, 49, xer);
	// bne cr6,0x830d0978
	if (!cr6.eq) goto loc_830D0978;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D0978:
	// cmplwi cr6,r10,50
	cr6.compare<uint32_t>(ctx.r10.u32, 50, xer);
	// bne cr6,0x830d0994
	if (!cr6.eq) goto loc_830D0994;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-49
	ctx.r11.s64 = ctx.r11.s64 + -49;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D0994:
	// cmplwi cr6,r10,51
	cr6.compare<uint32_t>(ctx.r10.u32, 51, xer);
	// bne cr6,0x830d09b0
	if (!cr6.eq) goto loc_830D09B0;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-50
	ctx.r11.s64 = ctx.r11.s64 + -50;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D09B0:
	// cmplwi cr6,r10,52
	cr6.compare<uint32_t>(ctx.r10.u32, 52, xer);
	// bne cr6,0x830d09cc
	if (!cr6.eq) goto loc_830D09CC;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-51
	ctx.r11.s64 = ctx.r11.s64 + -51;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D09CC:
	// cmplwi cr6,r10,53
	cr6.compare<uint32_t>(ctx.r10.u32, 53, xer);
	// bne cr6,0x830d09e8
	if (!cr6.eq) goto loc_830D09E8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-52
	ctx.r11.s64 = ctx.r11.s64 + -52;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830D09E8:
	// cmplwi cr6,r10,54
	cr6.compare<uint32_t>(ctx.r10.u32, 54, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-53
	ctx.r11.s64 = ctx.r11.s64 + -53;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D0A04"))) PPC_WEAK_FUNC(sub_830D0A04);
PPC_FUNC_IMPL(__imp__sub_830D0A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D0A08"))) PPC_WEAK_FUNC(sub_830D0A08);
PPC_FUNC_IMPL(__imp__sub_830D0A08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830D0A10;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31763
	ctx.r29.s64 = -2081619968;
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lfs f31,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// lwz r30,24(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r11,312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// bne cr6,0x830d0ad4
	if (!cr6.eq) goto loc_830D0AD4;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830d0c34
	if (cr6.eq) goto loc_830D0C34;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// li r5,1
	ctx.r5.s64 = 1;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x830d7648
	ctx.lr = 0x830D0AA4;
	sub_830D7648(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lfs f0,-23488(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -23488);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x830d0ab8
	if (!cr6.gt) goto loc_830D0AB8;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_830D0AB8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x830b16d8
	ctx.lr = 0x830D0AC4;
	sub_830B16D8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830D0AD4:
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x830d0b34
	if (!cr6.eq) goto loc_830D0B34;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x830d0af8
	if (!cr6.lt) goto loc_830D0AF8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_830D0AF8:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f0,-29844(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29844);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// bl 0x830b16d8
	ctx.lr = 0x830D0B24;
	sub_830B16D8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830D0B34:
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// beq cr6,0x830d0c30
	if (cr6.eq) goto loc_830D0C30;
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// bne cr6,0x830d0b64
	if (!cr6.eq) goto loc_830D0B64;
	// lbz r11,17(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r28,r10,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830D0B64:
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// bne cr6,0x830d0b88
	if (!cr6.eq) goto loc_830D0B88;
	// lbz r11,18(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r28,r10,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830D0B88:
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// bne cr6,0x830d0bb0
	if (!cr6.eq) goto loc_830D0BB0;
	// lbz r11,18(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r28,r10,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830D0BB0:
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bne cr6,0x830d0c34
	if (!cr6.eq) goto loc_830D0C34;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,46
	ctx.r4.s64 = 46;
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a227f0
	ctx.lr = 0x830D0BC8;
	sub_82A227F0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,55
	cr6.compare<int32_t>(ctx.r10.s32, 55, xer);
	// beq cr6,0x830d0c34
	if (cr6.eq) goto loc_830D0C34;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x830d0c34
	if (!cr6.eq) goto loc_830D0C34;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x830d0c34
	if (cr6.eq) goto loc_830D0C34;
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lfs f1,4464(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4464);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a29110
	ctx.lr = 0x830D0C00;
	sub_82A29110(ctx, base);
	// addi r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a23e98
	ctx.lr = 0x830D0C0C;
	sub_82A23E98(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e1e68
	ctx.lr = 0x830D0C18;
	sub_830E1E68(ctx, base);
	// cmpw cr6,r3,r27
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r27.s32, xer);
	// bne cr6,0x830d0c34
	if (!cr6.eq) goto loc_830D0C34;
	// lbz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// subf r10,r11,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r11.s64;
	// cmplwi cr6,r10,15
	cr6.compare<uint32_t>(ctx.r10.u32, 15, xer);
	// bgt cr6,0x830d0c34
	if (cr6.gt) goto loc_830D0C34;
loc_830D0C30:
	// li r28,1
	ctx.r28.s64 = 1;
loc_830D0C34:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D0C44"))) PPC_WEAK_FUNC(sub_830D0C44);
PPC_FUNC_IMPL(__imp__sub_830D0C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D0C48"))) PPC_WEAK_FUNC(sub_830D0C48);
PPC_FUNC_IMPL(__imp__sub_830D0C48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x830D0C50;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31763
	ctx.r29.s64 = -2081619968;
	// ld r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 52);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// addi r27,r11,5404
	ctx.r27.s64 = ctx.r11.s64 + 5404;
	// lwz r30,5412(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5412);
	// bne cr6,0x830d0ca0
	if (!cr6.eq) goto loc_830D0CA0;
	// bl 0x830e1d50
	ctx.lr = 0x830D0C94;
	sub_830E1D50(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_830D0CA0:
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// bne cr6,0x830d0cbc
	if (!cr6.eq) goto loc_830D0CBC;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82a4fd08
	ctx.lr = 0x830D0CB0;
	sub_82A4FD08(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_830D0CBC:
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bne cr6,0x830d0cd4
	if (!cr6.eq) goto loc_830D0CD4;
	// lbz r24,52(r27)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r27.u32 + 52);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_830D0CD4:
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// bne cr6,0x830d0cec
	if (!cr6.eq) goto loc_830D0CEC;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// beq cr6,0x830d0fdc
	if (cr6.eq) goto loc_830D0FDC;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// b 0x830d0fd4
	goto loc_830D0FD4;
loc_830D0CEC:
	// cmpwi cr6,r31,6
	cr6.compare<int32_t>(ctx.r31.s32, 6, xer);
	// bne cr6,0x830d0e1c
	if (!cr6.eq) goto loc_830D0E1C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830d7e10
	ctx.lr = 0x830D0D00;
	sub_830D7E10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// beq cr6,0x830d0d14
	if (cr6.eq) goto loc_830D0D14;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// blt cr6,0x830d0ec4
	if (cr6.lt) goto loc_830D0EC4;
loc_830D0D14:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830d9888
	ctx.lr = 0x830D0D24;
	sub_830D9888(ctx, base);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r25,84(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r10,r26
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r26.s32, xer);
	// bne cr6,0x830d0d50
	if (!cr6.eq) goto loc_830D0D50;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r25
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830d0d54
	if (cr6.eq) goto loc_830D0D54;
loc_830D0D50:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D0D54:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x830d0ec4
	if (!cr6.eq) goto loc_830D0EC4;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// ble cr6,0x830d0fe4
	if (!cr6.gt) goto loc_830D0FE4;
loc_830D0D74:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830d9888
	ctx.lr = 0x830D0D84;
	sub_830D9888(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x830d0fe4
	if (cr6.eq) goto loc_830D0FE4;
	// lbz r23,12(r3)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// bl 0x82a23e98
	ctx.lr = 0x830D0D9C;
	sub_82A23E98(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x830d7110
	ctx.lr = 0x830D0DA4;
	sub_830D7110(ctx, base);
	// lwz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// cmplwi cr6,r10,15
	cr6.compare<uint32_t>(ctx.r10.u32, 15, xer);
	// bge cr6,0x830d0fe4
	if (!cr6.lt) goto loc_830D0FE4;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x830d0df4
	if (!cr6.eq) goto loc_830D0DF4;
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r10,r26
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r26.s32, xer);
	// bne cr6,0x830d0de4
	if (!cr6.eq) goto loc_830D0DE4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r25
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830d0de8
	if (cr6.eq) goto loc_830D0DE8;
loc_830D0DE4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D0DE8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830d0e0c
	if (!cr6.eq) goto loc_830D0E0C;
loc_830D0DF4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, xer);
	// blt cr6,0x830d0d74
	if (cr6.lt) goto loc_830D0D74;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_830D0E0C:
	// li r24,1
	ctx.r24.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_830D0E1C:
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, xer);
	// beq cr6,0x830d0e2c
	if (cr6.eq) goto loc_830D0E2C;
	// cmpwi cr6,r31,5
	cr6.compare<int32_t>(ctx.r31.s32, 5, xer);
	// bne cr6,0x830d0fe4
	if (!cr6.eq) goto loc_830D0FE4;
loc_830D0E2C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r30,132(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a22ac0
	ctx.lr = 0x830D0E3C;
	sub_82A22AC0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830d0ec4
	if (cr6.eq) goto loc_830D0EC4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a22a30
	ctx.lr = 0x830D0E50;
	sub_82A22A30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830d0ec4
	if (cr6.eq) goto loc_830D0EC4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a22a50
	ctx.lr = 0x830D0E64;
	sub_82A22A50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a229e8
	ctx.lr = 0x830D0E78;
	sub_82A229E8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, xer);
	// bne cr6,0x830d0ed0
	if (!cr6.eq) goto loc_830D0ED0;
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,232(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83530640
	ctx.lr = 0x830D0E98;
	sub_83530640(ctx, base);
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
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830d0ec4
	if (cr6.eq) goto loc_830D0EC4;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82a17678
	ctx.lr = 0x830D0EB8;
	sub_82A17678(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830d0fc4
	if (!cr6.eq) goto loc_830D0FC4;
loc_830D0EC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_830D0ED0:
	// cmpwi cr6,r31,5
	cr6.compare<int32_t>(ctx.r31.s32, 5, xer);
	// bne cr6,0x830d0fe4
	if (!cr6.eq) goto loc_830D0FE4;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x830d0f04
	if (cr6.lt) goto loc_830D0F04;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x830d0f04
	if (!cr6.lt) goto loc_830D0F04;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x830d0f04
	if (cr6.lt) goto loc_830D0F04;
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830d0f08
	if (cr6.lt) goto loc_830D0F08;
loc_830D0F04:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D0F08:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d0ec4
	if (cr6.eq) goto loc_830D0EC4;
	// ld r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// bne cr6,0x830d0f38
	if (!cr6.eq) goto loc_830D0F38;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830d0f3c
	if (cr6.eq) goto loc_830D0F3C;
loc_830D0F38:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D0F3C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x830d0ec4
	if (!cr6.eq) goto loc_830D0EC4;
	// lwz r11,296(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 296);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bne cr6,0x830d0f6c
	if (!cr6.eq) goto loc_830D0F6C;
	// lwz r11,300(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 300);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830d0f70
	if (cr6.eq) goto loc_830D0F70;
loc_830D0F6C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D0F70:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x830d0ec4
	if (!cr6.eq) goto loc_830D0EC4;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a22a30
	ctx.lr = 0x830D0F90;
	sub_82A22A30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830d0ec4
	if (cr6.eq) goto loc_830D0EC4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a229e8
	ctx.lr = 0x830D0FA8;
	sub_82A229E8(ctx, base);
	// lwz r11,60(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x830d0fe4
	if (!cr6.lt) goto loc_830D0FE4;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x830d0fe4
	if (!cr6.lt) goto loc_830D0FE4;
loc_830D0FC4:
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x830d0fdc
	if (cr6.eq) goto loc_830D0FDC;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
loc_830D0FD4:
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x830d0fe0
	if (!cr6.eq) goto loc_830D0FE0;
loc_830D0FDC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830D0FE0:
	// clrlwi r24,r11,24
	ctx.r24.u64 = ctx.r11.u32 & 0xFF;
loc_830D0FE4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D0FF0"))) PPC_WEAK_FUNC(sub_830D0FF0);
PPC_FUNC_IMPL(__imp__sub_830D0FF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830D0FF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r29,132(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x830d1098
	if (cr6.eq) goto loc_830D1098;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d9ef0
	ctx.lr = 0x830D1018;
	sub_830D9EF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x830d1098
	if (cr6.eq) goto loc_830D1098;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830e0560
	ctx.lr = 0x830D1030;
	sub_830E0560(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d1098
	if (cr6.eq) goto loc_830D1098;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a229e8
	ctx.lr = 0x830D104C;
	sub_82A229E8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x830d1098
	if (cr6.eq) goto loc_830D1098;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_830D1068:
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmpwi cr6,r7,255
	cr6.compare<int32_t>(ctx.r7.s32, 255, xer);
	// bne cr6,0x830d10a4
	if (!cr6.eq) goto loc_830D10A4;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// blt cr6,0x830d1068
	if (cr6.lt) goto loc_830D1068;
loc_830D1098:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830D10A4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D10B0"))) PPC_WEAK_FUNC(sub_830D10B0);
PPC_FUNC_IMPL(__imp__sub_830D10B0) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r31,232(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x830d11a0
	if (cr6.eq) goto loc_830D11A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x830d11a0
	if (cr6.eq) goto loc_830D11A0;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x830d1158
	if (!cr6.eq) goto loc_830D1158;
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
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x830d112c
	if (!cr6.eq) goto loc_830D112C;
	// lbz r11,33(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 33);
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
	// beq cr6,0x830d11a0
	if (cr6.eq) goto loc_830D11A0;
loc_830D112C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a17f20
	ctx.lr = 0x830D1138;
	sub_82A17F20(ctx, base);
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// bne cr6,0x830d11a0
	if (!cr6.eq) goto loc_830D11A0;
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
loc_830D1158:
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x830e0560
	ctx.lr = 0x830D1160;
	sub_830E0560(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d11a0
	if (cr6.eq) goto loc_830D11A0;
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
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x830d11a0
	if (!cr6.eq) goto loc_830D11A0;
	// lbz r11,33(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 33);
	// li r3,1
	ctx.r3.s64 = 1;
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
	// beq cr6,0x830d11a4
	if (cr6.eq) goto loc_830D11A4;
loc_830D11A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830D11A4:
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

__attribute__((alias("__imp__sub_830D11B8"))) PPC_WEAK_FUNC(sub_830D11B8);
PPC_FUNC_IMPL(__imp__sub_830D11B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830D11C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x830d9ef0
	ctx.lr = 0x830D11E0;
	sub_830D9EF0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x830d12bc
	if (cr6.lt) goto loc_830D12BC;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// blt cr6,0x830d120c
	if (cr6.lt) goto loc_830D120C;
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bne cr6,0x830d12bc
	if (!cr6.eq) goto loc_830D12BC;
loc_830D120C:
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
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
	// beq cr6,0x830d124c
	if (cr6.eq) goto loc_830D124C;
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x82a17730
	ctx.lr = 0x830D123C;
	sub_82A17730(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d124c
	if (cr6.eq) goto loc_830D124C;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
loc_830D124C:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x830d1288
	if (cr6.lt) goto loc_830D1288;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a229e8
	ctx.lr = 0x830D1268;
	sub_82A229E8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,55
	cr6.compare<int32_t>(ctx.r10.s32, 55, xer);
	// beq cr6,0x830d12b0
	if (cr6.eq) goto loc_830D12B0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x830e0e38
	ctx.lr = 0x830D127C;
	sub_830E0E38(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830D1288:
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// beq cr6,0x830d12b0
	if (cr6.eq) goto loc_830D12B0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-3564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x830D129C;
	sub_82A0C710(ctx, base);
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// bl 0x825832e0
	ctx.lr = 0x830D12A4;
	sub_825832E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830d12b0
	if (cr6.eq) goto loc_830D12B0;
	// li r27,1
	ctx.r27.s64 = 1;
loc_830D12B0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830D12BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D12C8"))) PPC_WEAK_FUNC(sub_830D12C8);
PPC_FUNC_IMPL(__imp__sub_830D12C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x830D12D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x830d9ef0
	ctx.lr = 0x830D12E0;
	sub_830D9EF0(ctx, base);
	// lfs f0,8(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// fctiwz f11,f13
	ctx.f11.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// stfd f11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x830d15e8
	if (cr6.eq) goto loc_830D15E8;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// bge cr6,0x830d15e8
	if (!cr6.lt) goto loc_830D15E8;
	// cmpwi cr6,r29,7
	cr6.compare<int32_t>(ctx.r29.s32, 7, xer);
	// bge cr6,0x830d15e8
	if (!cr6.lt) goto loc_830D15E8;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x830D132C;
	sub_82A0C710(ctx, base);
	// bl 0x82a141d8
	ctx.lr = 0x830D1330;
	sub_82A141D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830d15e8
	if (!cr6.eq) goto loc_830D15E8;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
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
	// beq cr6,0x830d1378
	if (cr6.eq) goto loc_830D1378;
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x82a17730
	ctx.lr = 0x830D1368;
	sub_82A17730(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d1378
	if (cr6.eq) goto loc_830D1378;
	// li r25,1
	ctx.r25.s64 = 1;
loc_830D1378:
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, xer);
	// bne cr6,0x830d138c
	if (!cr6.eq) goto loc_830D138C;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d15e8
	if (cr6.eq) goto loc_830D15E8;
loc_830D138C:
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830e1c10
	ctx.lr = 0x830D13A0;
	sub_830E1C10(ctx, base);
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830e1ad0
	ctx.lr = 0x830D13B4;
	sub_830E1AD0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x830D13C0;
	sub_82A0C738(ctx, base);
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c710
	ctx.lr = 0x830D13D4;
	sub_82A0C710(ctx, base);
	// addi r30,r3,3612
	ctx.r30.s64 = ctx.r3.s64 + 3612;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x830d1470
	if (!cr6.eq) goto loc_830D1470;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_830D13E8:
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r4,255
	cr6.compare<int32_t>(ctx.r4.s32, 255, xer);
	// beq cr6,0x830d1448
	if (cr6.eq) goto loc_830D1448;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d1408
	if (cr6.eq) goto loc_830D1408;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
loc_830D1408:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a163f0
	ctx.lr = 0x830D1410;
	sub_82A163F0(ctx, base);
	// cmplwi cr6,r3,11
	cr6.compare<uint32_t>(ctx.r3.u32, 11, xer);
	// bge cr6,0x830d1428
	if (!cr6.lt) goto loc_830D1428;
	// addi r11,r3,3815
	ctx.r11.s64 = ctx.r3.s64 + 3815;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// b 0x830d142c
	goto loc_830D142C;
loc_830D1428:
	// lwz r11,15260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15260);
loc_830D142C:
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x830dff00
	ctx.lr = 0x830D143C;
	sub_830DFF00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830d1464
	if (!cr6.eq) goto loc_830D1464;
loc_830D1448:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x830d13e8
	if (cr6.lt) goto loc_830D13E8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830D1464:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830D1470:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// li r10,255
	ctx.r10.s64 = 255;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bgt cr6,0x830d15e8
	if (cr6.gt) goto loc_830D15E8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x830d14bc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830D14BC;
	// bdzf 4*cr6+eq,0x830d14d8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830D14D8;
	// bdzf 4*cr6+eq,0x830d14f4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830D14F4;
	// bdzf 4*cr6+eq,0x830d1510
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830D1510;
	// bne cr6,0x830d152c
	if (!cr6.eq) goto loc_830D152C;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x830d15e8
	if (!cr6.eq) goto loc_830D15E8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830e3278
	ctx.lr = 0x830D14B8;
	sub_830E3278(ctx, base);
	// b 0x830d1548
	goto loc_830D1548;
loc_830D14BC:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x830d15e8
	if (!cr6.eq) goto loc_830D15E8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830e3c88
	ctx.lr = 0x830D14D4;
	sub_830E3C88(ctx, base);
	// b 0x830d1548
	goto loc_830D1548;
loc_830D14D8:
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, xer);
	// bne cr6,0x830d15e8
	if (!cr6.eq) goto loc_830D15E8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830e22a0
	ctx.lr = 0x830D14F0;
	sub_830E22A0(ctx, base);
	// b 0x830d1548
	goto loc_830D1548;
loc_830D14F4:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x830d15e8
	if (!cr6.eq) goto loc_830D15E8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830e37f8
	ctx.lr = 0x830D150C;
	sub_830E37F8(ctx, base);
	// b 0x830d1548
	goto loc_830D1548;
loc_830D1510:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x830d15e8
	if (!cr6.eq) goto loc_830D15E8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830e3a40
	ctx.lr = 0x830D1528;
	sub_830E3A40(ctx, base);
	// b 0x830d1548
	goto loc_830D1548;
loc_830D152C:
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, xer);
	// bne cr6,0x830d15e8
	if (!cr6.eq) goto loc_830D15E8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830e2b08
	ctx.lr = 0x830D1548;
	sub_830E2B08(ctx, base);
loc_830D1548:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,255
	cr6.compare<int32_t>(ctx.r10.s32, 255, xer);
	// beq cr6,0x830d15e8
	if (cr6.eq) goto loc_830D15E8;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_830D155C:
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r4,255
	cr6.compare<int32_t>(ctx.r4.s32, 255, xer);
	// beq cr6,0x830d15d8
	if (cr6.eq) goto loc_830D15D8;
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// beq cr6,0x830d1580
	if (cr6.eq) goto loc_830D1580;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwzx r9,r31,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x830d15d8
	if (!cr6.eq) goto loc_830D15D8;
loc_830D1580:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d1594
	if (cr6.eq) goto loc_830D1594;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
loc_830D1594:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a163f0
	ctx.lr = 0x830D159C;
	sub_82A163F0(ctx, base);
	// cmplwi cr6,r3,11
	cr6.compare<uint32_t>(ctx.r3.u32, 11, xer);
	// bge cr6,0x830d15b4
	if (!cr6.lt) goto loc_830D15B4;
	// addi r11,r3,3815
	ctx.r11.s64 = ctx.r3.s64 + 3815;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// b 0x830d15b8
	goto loc_830D15B8;
loc_830D15B4:
	// lwz r11,15260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15260);
loc_830D15B8:
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x830dff00
	ctx.lr = 0x830D15C8;
	sub_830DFF00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830d1464
	if (!cr6.eq) goto loc_830D1464;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_830D15D8:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x830d155c
	if (cr6.lt) goto loc_830D155C;
loc_830D15E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D15F4"))) PPC_WEAK_FUNC(sub_830D15F4);
PPC_FUNC_IMPL(__imp__sub_830D15F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D15F8"))) PPC_WEAK_FUNC(sub_830D15F8);
PPC_FUNC_IMPL(__imp__sub_830D15F8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,132(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x830d168c
	if (cr6.eq) goto loc_830D168C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d9ef0
	ctx.lr = 0x830D1624;
	sub_830D9EF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x830d168c
	if (cr6.eq) goto loc_830D168C;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a229e8
	ctx.lr = 0x830D1640;
	sub_82A229E8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x830d168c
	if (cr6.eq) goto loc_830D168C;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_830D165C:
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmpwi cr6,r7,255
	cr6.compare<int32_t>(ctx.r7.s32, 255, xer);
	// bne cr6,0x830d16a8
	if (!cr6.eq) goto loc_830D16A8;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// blt cr6,0x830d165c
	if (cr6.lt) goto loc_830D165C;
loc_830D168C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830D1690:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_830D16A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830d1690
	goto loc_830D1690;
}

__attribute__((alias("__imp__sub_830D16B0"))) PPC_WEAK_FUNC(sub_830D16B0);
PPC_FUNC_IMPL(__imp__sub_830D16B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830D16B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830d9ef0
	ctx.lr = 0x830D16C8;
	sub_830D9EF0(ctx, base);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// blt cr6,0x830d16f4
	if (cr6.lt) goto loc_830D16F4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830D16F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x830e1ad0
	ctx.lr = 0x830D1708;
	sub_830E1AD0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// beq cr6,0x830d1718
	if (cr6.eq) goto loc_830D1718;
	// li r31,1
	ctx.r31.s64 = 1;
loc_830D1718:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// beq cr6,0x830d1728
	if (cr6.eq) goto loc_830D1728;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_830D1728:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// beq cr6,0x830d1738
	if (cr6.eq) goto loc_830D1738;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_830D1738:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// beq cr6,0x830d1748
	if (cr6.eq) goto loc_830D1748;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_830D1748:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// beq cr6,0x830d1758
	if (cr6.eq) goto loc_830D1758;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_830D1758:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// beq cr6,0x830d1768
	if (cr6.eq) goto loc_830D1768;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_830D1768:
	// rlwinm r11,r29,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x830d1784
	if (cr6.eq) goto loc_830D1784;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfc r11,r31,r30
	xer.ca = ctx.r30.u32 >= ctx.r31.u32;
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// subfze r3,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x830d17ac
	goto loc_830D17AC;
loc_830D1784:
	// rlwinm r11,r29,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x830d17a0
	if (cr6.eq) goto loc_830D17A0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfc r11,r30,r31
	xer.ca = ctx.r31.u32 >= ctx.r30.u32;
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// subfze r3,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x830d17ac
	goto loc_830D17AC;
loc_830D17A0:
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_830D17AC:
	// rlwinm r11,r29,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x830d17c4
	if (cr6.eq) goto loc_830D17C4;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_830D17C4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D17CC"))) PPC_WEAK_FUNC(sub_830D17CC);
PPC_FUNC_IMPL(__imp__sub_830D17CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D17D0"))) PPC_WEAK_FUNC(sub_830D17D0);
PPC_FUNC_IMPL(__imp__sub_830D17D0) {
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
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x830d188c
	if (cr6.eq) goto loc_830D188C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,132(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x830d188c
	if (cr6.eq) goto loc_830D188C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d9ef0
	ctx.lr = 0x830D1810;
	sub_830D9EF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x830d188c
	if (cr6.eq) goto loc_830D188C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a229e8
	ctx.lr = 0x830D182C;
	sub_82A229E8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x830d188c
	if (cr6.eq) goto loc_830D188C;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_830D1848:
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmpwi cr6,r7,255
	cr6.compare<int32_t>(ctx.r7.s32, 255, xer);
	// bne cr6,0x830d187c
	if (!cr6.eq) goto loc_830D187C;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// blt cr6,0x830d1848
	if (cr6.lt) goto loc_830D1848;
	// b 0x830d188c
	goto loc_830D188C;
loc_830D187C:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x830d1890
	if (cr6.eq) goto loc_830D1890;
loc_830D188C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830D1890:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D18A8"))) PPC_WEAK_FUNC(sub_830D18A8);
PPC_FUNC_IMPL(__imp__sub_830D18A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x830D18B0;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x830d9ef0
	ctx.lr = 0x830D18C0;
	sub_830D9EF0(ctx, base);
	// lfs f0,8(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r23,24(r25)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// lwz r22,100(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// beq cr6,0x830d1a70
	if (cr6.eq) goto loc_830D1A70;
	// lis r24,-31763
	ctx.r24.s64 = -2081619968;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,-3564(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3564);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
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
	// beq cr6,0x830d1920
	if (cr6.eq) goto loc_830D1920;
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x82a17730
	ctx.lr = 0x830D1910;
	sub_82A17730(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d1920
	if (cr6.eq) goto loc_830D1920;
	// li r31,1
	ctx.r31.s64 = 1;
loc_830D1920:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r27,132(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a225d0
	ctx.lr = 0x830D1930;
	sub_82A225D0(ctx, base);
	// lis r10,5
	ctx.r10.s64 = 327680;
	// li r26,0
	ctx.r26.s64 = 0;
	// ori r9,r10,18048
	ctx.r9.u64 = ctx.r10.u64 | 18048;
	// li r28,5
	ctx.r28.s64 = 5;
	// lbzx r29,r3,r9
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x830d1a70
	if (cr6.eq) goto loc_830D1A70;
	// clrlwi r31,r31,24
	ctx.r31.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x830d1960
	if (!cr6.eq) goto loc_830D1960;
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(ctx.r29.u32, 2, xer);
	// blt cr6,0x830d1a70
	if (cr6.lt) goto loc_830D1A70;
loc_830D1960:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a225d0
	ctx.lr = 0x830D1968;
	sub_82A225D0(ctx, base);
	// addi r11,r29,255
	ctx.r11.s64 = ctx.r29.s64 + 255;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8291b070
	ctx.lr = 0x830D1974;
	sub_8291B070(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x830d198c
	if (cr6.eq) goto loc_830D198C;
	// lwz r28,8(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lbz r26,12(r3)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// b 0x830d19ec
	goto loc_830D19EC;
loc_830D198C:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x830d1a70
	if (cr6.eq) goto loc_830D1A70;
loc_830D1998:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a225d0
	ctx.lr = 0x830D19A0;
	sub_82A225D0(ctx, base);
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// bl 0x8291b070
	ctx.lr = 0x830D19A8;
	sub_8291B070(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bne cr6,0x830d19e0
	if (!cr6.eq) goto loc_830D19E0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x830d19d8
	if (!cr6.eq) goto loc_830D19D8;
	// lbz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// lbz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x830d19e0
	if (cr6.eq) goto loc_830D19E0;
loc_830D19D8:
	// lbz r26,12(r3)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_830D19E0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x830d1998
	if (cr6.lt) goto loc_830D1998;
loc_830D19EC:
	// cmpwi cr6,r28,5
	cr6.compare<int32_t>(ctx.r28.s32, 5, xer);
	// beq cr6,0x830d1a70
	if (cr6.eq) goto loc_830D1A70;
	// clrlwi r4,r26,24
	ctx.r4.u64 = ctx.r26.u32 & 0xFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830d7110
	ctx.lr = 0x830D1A00;
	sub_830D7110(ctx, base);
	// lwz r11,-3564(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3564);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r30,292(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x830e1e68
	ctx.lr = 0x830D1A14;
	sub_830E1E68(ctx, base);
	// lfs f1,4464(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4464);
	ctx.f1.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82a29110
	ctx.lr = 0x830D1A20;
	sub_82A29110(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830d7110
	ctx.lr = 0x830D1A2C;
	sub_830D7110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x830e0cf0
	ctx.lr = 0x830D1A5C;
	sub_830E0CF0(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x827b4488
	ctx.lr = 0x830D1A68;
	sub_827B4488(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830D1A70:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D1A7C"))) PPC_WEAK_FUNC(sub_830D1A7C);
PPC_FUNC_IMPL(__imp__sub_830D1A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D1A80"))) PPC_WEAK_FUNC(sub_830D1A80);
PPC_FUNC_IMPL(__imp__sub_830D1A80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x830D1A88;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830d9ef0
	ctx.lr = 0x830D1A98;
	sub_830D9EF0(ctx, base);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r23,84(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r22,24(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x830d1c18
	if (cr6.eq) goto loc_830D1C18;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r29,292(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x830e1e68
	ctx.lr = 0x830D1ACC;
	sub_830E1E68(ctx, base);
	// lfs f1,4464(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4464);
	ctx.f1.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82a29110
	ctx.lr = 0x830D1AD8;
	sub_82A29110(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d7110
	ctx.lr = 0x830D1AE4;
	sub_830D7110(ctx, base);
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
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
	// beq cr6,0x830d1b24
	if (cr6.eq) goto loc_830D1B24;
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x82a17730
	ctx.lr = 0x830D1B14;
	sub_82A17730(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d1b24
	if (cr6.eq) goto loc_830D1B24;
	// li r30,1
	ctx.r30.s64 = 1;
loc_830D1B24:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r29,132(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a225d0
	ctx.lr = 0x830D1B34;
	sub_82A225D0(ctx, base);
	// lis r10,5
	ctx.r10.s64 = 327680;
	// li r26,0
	ctx.r26.s64 = 0;
	// ori r9,r10,18048
	ctx.r9.u64 = ctx.r10.u64 | 18048;
	// li r27,5
	ctx.r27.s64 = 5;
	// lbzx r28,r3,r9
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x830d1c18
	if (cr6.eq) goto loc_830D1C18;
	// clrlwi r31,r30,24
	ctx.r31.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x830d1b64
	if (!cr6.eq) goto loc_830D1B64;
	// cmplwi cr6,r28,2
	cr6.compare<uint32_t>(ctx.r28.u32, 2, xer);
	// blt cr6,0x830d1c18
	if (cr6.lt) goto loc_830D1C18;
loc_830D1B64:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a225d0
	ctx.lr = 0x830D1B6C;
	sub_82A225D0(ctx, base);
	// addi r11,r28,255
	ctx.r11.s64 = ctx.r28.s64 + 255;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8291b070
	ctx.lr = 0x830D1B78;
	sub_8291B070(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x830d1b90
	if (cr6.eq) goto loc_830D1B90;
	// lwz r27,8(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lbz r26,12(r3)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// b 0x830d1bec
	goto loc_830D1BEC;
loc_830D1B90:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x830d1c18
	if (cr6.eq) goto loc_830D1C18;
loc_830D1B9C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a225d0
	ctx.lr = 0x830D1BA4;
	sub_82A225D0(ctx, base);
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// bl 0x8291b070
	ctx.lr = 0x830D1BAC;
	sub_8291B070(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r25
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, xer);
	// bne cr6,0x830d1be0
	if (!cr6.eq) goto loc_830D1BE0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x830d1bd8
	if (!cr6.eq) goto loc_830D1BD8;
	// lbz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// lbz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x830d1be0
	if (cr6.eq) goto loc_830D1BE0;
loc_830D1BD8:
	// lbz r26,12(r3)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_830D1BE0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// blt cr6,0x830d1b9c
	if (cr6.lt) goto loc_830D1B9C;
loc_830D1BEC:
	// cmpwi cr6,r27,5
	cr6.compare<int32_t>(ctx.r27.s32, 5, xer);
	// beq cr6,0x830d1c18
	if (cr6.eq) goto loc_830D1C18;
	// clrlwi r4,r26,24
	ctx.r4.u64 = ctx.r26.u32 & 0xFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830d7110
	ctx.lr = 0x830D1C00;
	sub_830D7110(ctx, base);
	// subf r3,r3,r24
	ctx.r3.s64 = ctx.r24.s64 - ctx.r3.s64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// bl 0x827b4488
	ctx.lr = 0x830D1C10;
	sub_827B4488(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830D1C18:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D1C24"))) PPC_WEAK_FUNC(sub_830D1C24);
PPC_FUNC_IMPL(__imp__sub_830D1C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D1C28"))) PPC_WEAK_FUNC(sub_830D1C28);
PPC_FUNC_IMPL(__imp__sub_830D1C28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830D1C30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,6132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x830d1c58
	if (!cr6.eq) goto loc_830D1C58;
loc_830D1C4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830D1C58:
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// beq cr6,0x830d1c4c
	if (cr6.eq) goto loc_830D1C4C;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_830D1C78:
	// li r6,5
	ctx.r6.s64 = 5;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d8d38
	ctx.lr = 0x830D1C8C;
	sub_830D8D38(ctx, base);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// clrlwi r31,r10,24
	ctx.r31.u64 = ctx.r10.u32 & 0xFF;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x830d1c78
	if (cr6.lt) goto loc_830D1C78;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830d1cd4
	if (cr6.eq) goto loc_830D1CD4;
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r11,r30,r11
	xer.ca = ctx.r11.u32 >= ctx.r30.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// subfze r3,r9
	temp.u8 = ~ctx.r9.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x830d1cfc
	goto loc_830D1CFC;
loc_830D1CD4:
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830d1cf0
	if (cr6.eq) goto loc_830D1CF0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r11,r11,r30
	xer.ca = ctx.r30.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// subfze r3,r9
	temp.u8 = ~ctx.r9.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x830d1cfc
	goto loc_830D1CFC;
loc_830D1CF0:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
loc_830D1CFC:
	// rlwinm r11,r10,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x830d1d14
	if (cr6.eq) goto loc_830D1D14;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_830D1D14:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D1D1C"))) PPC_WEAK_FUNC(sub_830D1D1C);
PPC_FUNC_IMPL(__imp__sub_830D1D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D1D20"))) PPC_WEAK_FUNC(sub_830D1D20);
PPC_FUNC_IMPL(__imp__sub_830D1D20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x830D1D28;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x830d9ef0
	ctx.lr = 0x830D1D3C;
	sub_830D9EF0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x830d1d58
	if (!cr6.eq) goto loc_830D1D58;
loc_830D1D48:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830D1D58:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lfs f0,8(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r4,5
	ctx.r4.s64 = 5;
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r27,132(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a22a30
	ctx.lr = 0x830D1D7C;
	sub_82A22A30(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830d1d48
	if (cr6.eq) goto loc_830D1D48;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r28,32(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// ble cr6,0x830d1e1c
	if (!cr6.gt) goto loc_830D1E1C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f31,-23848(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23848);
	ctx.f31.f64 = double(temp.f32);
loc_830D1DAC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a229e8
	ctx.lr = 0x830D1DBC;
	sub_82A229E8(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x830d1e10
	if (!cr6.eq) goto loc_830D1E10;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpw cr6,r11,r24
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, xer);
	// bne cr6,0x830d1e10
	if (!cr6.eq) goto loc_830D1E10;
	// addi r4,r3,28
	ctx.r4.s64 = ctx.r3.s64 + 28;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a3fb88
	ctx.lr = 0x830D1DE0;
	sub_82A3FB88(ctx, base);
	// lfs f0,8144(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8152(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8152);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fmuls f8,f12,f12
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fcmpu cr6,f6,f31
	cr6.compare(ctx.f6.f64, ctx.f31.f64);
	// bgt cr6,0x830d1e10
	if (cr6.gt) goto loc_830D1E10;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_830D1E10:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, xer);
	// blt cr6,0x830d1dac
	if (cr6.lt) goto loc_830D1DAC;
loc_830D1E1C:
	// lwz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x830d1e40
	if (cr6.eq) goto loc_830D1E40;
	// srawi r10,r26,31
	xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r26.s32 >> 31;
	// rlwinm r9,r30,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1;
	// subfc r8,r30,r26
	xer.ca = ctx.r26.u32 >= ctx.r30.u32;
	ctx.r8.s64 = ctx.r26.s64 - ctx.r30.s64;
	// adde r3,r9,r10
	temp.u8 = (ctx.r9.u32 + ctx.r10.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x830d1e6c
	goto loc_830D1E6C;
loc_830D1E40:
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x830d1e60
	if (cr6.eq) goto loc_830D1E60;
	// srawi r10,r30,31
	xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 31;
	// rlwinm r9,r26,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0x1;
	// subfc r8,r26,r30
	xer.ca = ctx.r30.u32 >= ctx.r26.u32;
	ctx.r8.s64 = ctx.r30.s64 - ctx.r26.s64;
	// adde r3,r9,r10
	temp.u8 = (ctx.r9.u32 + ctx.r10.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x830d1e6c
	goto loc_830D1E6C;
loc_830D1E60:
	// subf r10,r30,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r30.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
loc_830D1E6C:
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x830d1e84
	if (cr6.eq) goto loc_830D1E84;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_830D1E84:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D1E90"))) PPC_WEAK_FUNC(sub_830D1E90);
PPC_FUNC_IMPL(__imp__sub_830D1E90) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,132(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a22b40
	ctx.lr = 0x830D1EB8;
	sub_82A22B40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a22b40
	ctx.lr = 0x830D1EC8;
	sub_82A22B40(ctx, base);
	// ld r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4);
	// ld r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// blt cr6,0x830d1f08
	if (cr6.lt) goto loc_830D1F08;
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bge cr6,0x830d1f08
	if (!cr6.lt) goto loc_830D1F08;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830d1f08
	if (cr6.lt) goto loc_830D1F08;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830d1f0c
	if (cr6.lt) goto loc_830D1F0C;
loc_830D1F08:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D1F0C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d1fdc
	if (cr6.eq) goto loc_830D1FDC;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x830d1f44
	if (cr6.lt) goto loc_830D1F44;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x830d1f44
	if (!cr6.lt) goto loc_830D1F44;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830d1f44
	if (cr6.lt) goto loc_830D1F44;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830d1f48
	if (cr6.lt) goto loc_830D1F48;
loc_830D1F44:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D1F48:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d1fdc
	if (cr6.eq) goto loc_830D1FDC;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// beq cr6,0x830d1fdc
	if (cr6.eq) goto loc_830D1FDC;
	// bl 0x83740868
	ctx.lr = 0x830D1F60;
	sub_83740868(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lfs f0,-24912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bgt cr6,0x830d1fdc
	if (cr6.gt) goto loc_830D1FDC;
	// addi r4,r31,68
	ctx.r4.s64 = ctx.r31.s64 + 68;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a3fca8
	ctx.lr = 0x830D1F98;
	sub_82A3FCA8(ctx, base);
	// addi r4,r30,68
	ctx.r4.s64 = ctx.r30.s64 + 68;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a3fca8
	ctx.lr = 0x830D1FA4;
	sub_82A3FCA8(ctx, base);
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f0,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f11,f11
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f6,f8,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fsqrts f5,f6
	ctx.f5.f64 = double(float(sqrt(ctx.f6.f64)));
	// fcmpu cr6,f5,f0
	cr6.compare(ctx.f5.f64, ctx.f0.f64);
	// ble cr6,0x830d1fe0
	if (!cr6.gt) goto loc_830D1FE0;
loc_830D1FDC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830D1FE0:
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

__attribute__((alias("__imp__sub_830D1FF8"))) PPC_WEAK_FUNC(sub_830D1FF8);
PPC_FUNC_IMPL(__imp__sub_830D1FF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830D2000;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830d9ef0
	ctx.lr = 0x830D2010;
	sub_830D9EF0(ctx, base);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bge cr6,0x830d2090
	if (!cr6.lt) goto loc_830D2090;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r28,132(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a22a50
	ctx.lr = 0x830D2040;
	sub_82A22A50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a22ac0
	ctx.lr = 0x830D204C;
	sub_82A22AC0(ctx, base);
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// blt cr6,0x830d2090
	if (cr6.lt) goto loc_830D2090;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x830d2090
	if (cr6.eq) goto loc_830D2090;
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// lwz r10,324(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x830d2080
	if (cr6.eq) goto loc_830D2080;
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830d2084
	if (cr6.eq) goto loc_830D2084;
loc_830D2080:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D2084:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830D2090:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D209C"))) PPC_WEAK_FUNC(sub_830D209C);
PPC_FUNC_IMPL(__imp__sub_830D209C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D20A0"))) PPC_WEAK_FUNC(sub_830D20A0);
PPC_FUNC_IMPL(__imp__sub_830D20A0) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830d20e0
	if (!cr6.eq) goto loc_830D20E0;
loc_830D20D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830d213c
	goto loc_830D213C;
loc_830D20E0:
	// bl 0x82a225d0
	ctx.lr = 0x830D20E4;
	sub_82A225D0(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// ori r10,r11,8025
	ctx.r10.u64 = ctx.r11.u64 | 8025;
	// lbzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830d20d8
	if (cr6.eq) goto loc_830D20D8;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// blt cr6,0x830d2134
	if (cr6.lt) goto loc_830D2134;
	// beq cr6,0x830d2120
	if (cr6.eq) goto loc_830D2120;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bge cr6,0x830d2138
	if (!cr6.lt) goto loc_830D2138;
	// lis r11,5
	ctx.r11.s64 = 327680;
	// ori r10,r11,8028
	ctx.r10.u64 = ctx.r11.u64 | 8028;
	// lwzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// b 0x830d2130
	goto loc_830D2130;
loc_830D2120:
	// lis r11,5
	ctx.r11.s64 = 327680;
	// ori r10,r11,8028
	ctx.r10.u64 = ctx.r11.u64 | 8028;
	// lwzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
loc_830D2130:
	// bne cr6,0x830d2138
	if (!cr6.eq) goto loc_830D2138;
loc_830D2134:
	// li r30,1
	ctx.r30.s64 = 1;
loc_830D2138:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_830D213C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D2154"))) PPC_WEAK_FUNC(sub_830D2154);
PPC_FUNC_IMPL(__imp__sub_830D2154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D2158"))) PPC_WEAK_FUNC(sub_830D2158);
PPC_FUNC_IMPL(__imp__sub_830D2158) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x830D2160;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,40(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// blt cr6,0x830d2184
	if (cr6.lt) goto loc_830D2184;
	// cmpwi cr6,r28,22
	cr6.compare<int32_t>(ctx.r28.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830d2188
	if (cr6.lt) goto loc_830D2188;
loc_830D2184:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D2188:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830d21a4
	if (!cr6.eq) goto loc_830D21A4;
loc_830D2194:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830D21A4:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bge cr6,0x830d21b4
	if (!cr6.lt) goto loc_830D21B4;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x830d21dc
	goto loc_830D21DC;
loc_830D21B4:
	// cmpwi cr6,r28,11
	cr6.compare<int32_t>(ctx.r28.s32, 11, xer);
	// bge cr6,0x830d21c4
	if (!cr6.lt) goto loc_830D21C4;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x830d21dc
	goto loc_830D21DC;
loc_830D21C4:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r28
	xer.ca = ctx.r28.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r28.s64 - ctx.r11.s64;
	// eqv r9,r11,r28
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r28.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r5,r7,31
	ctx.r5.u64 = ctx.r7.u32 & 0x1;
loc_830D21DC:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830d7c78
	ctx.lr = 0x830D21F0;
	sub_830D7C78(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d2194
	if (cr6.eq) goto loc_830D2194;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r25,-1
	ctx.r25.s64 = -1;
	// lwz r29,132(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x830d2194
	if (cr6.eq) goto loc_830D2194;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a22ac0
	ctx.lr = 0x830D2218;
	sub_82A22AC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d2194
	if (cr6.eq) goto loc_830D2194;
	// li r30,0
	ctx.r30.s64 = 0;
loc_830D222C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a22a50
	ctx.lr = 0x830D2238;
	sub_82A22A50(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82a2a558
	ctx.lr = 0x830D2248;
	sub_82A2A558(ctx, base);
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x830d2270
	if (!cr6.eq) goto loc_830D2270;
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830d2274
	if (cr6.eq) goto loc_830D2274;
loc_830D2270:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D2274:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d2284
	if (cr6.eq) goto loc_830D2284;
	// lwz r25,8(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_830D2284:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// blt cr6,0x830d222c
	if (cr6.lt) goto loc_830D222C;
	// cmpwi cr6,r25,-1
	cr6.compare<int32_t>(ctx.r25.s32, -1, xer);
	// beq cr6,0x830d2194
	if (cr6.eq) goto loc_830D2194;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r9,4472(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4472);
	// subf r3,r25,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r25.s64;
	// bl 0x830dffc8
	ctx.lr = 0x830D22B8;
	sub_830DFFC8(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x83740868
	ctx.lr = 0x830D22C0;
	sub_83740868(ctx, base);
	// fdivs f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f1.f64));
	// lfs f13,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r5,20(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// fctidz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctidz f11,f0
	ctx.f11.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x827b4488
	ctx.lr = 0x830D22E8;
	sub_827B4488(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D22F4"))) PPC_WEAK_FUNC(sub_830D22F4);
PPC_FUNC_IMPL(__imp__sub_830D22F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D22F8"))) PPC_WEAK_FUNC(sub_830D22F8);
PPC_FUNC_IMPL(__imp__sub_830D22F8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,36(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x830d2320
	if (cr6.lt) goto loc_830D2320;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830d23d8
	goto loc_830D23D8;
loc_830D2320:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r8,11
	ctx.r8.s64 = 11;
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// fctiwz f11,f13
	ctx.f11.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f10,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f9.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lfs f8,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fctidz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f7.u64);
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r30,28(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x830d7898
	ctx.lr = 0x830D2378;
	sub_830D7898(ctx, base);
	// rlwinm r9,r30,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830d2398
	if (cr6.eq) goto loc_830D2398;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfc r11,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// subfze r3,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x830d23c0
	goto loc_830D23C0;
loc_830D2398:
	// rlwinm r10,r30,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x830d23b4
	if (cr6.eq) goto loc_830D23B4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfc r11,r31,r11
	xer.ca = ctx.r11.u32 >= ctx.r31.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subfze r3,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x830d23c0
	goto loc_830D23C0;
loc_830D23B4:
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_830D23C0:
	// rlwinm r11,r30,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x830d23d8
	if (cr6.eq) goto loc_830D23D8;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_830D23D8:
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

__attribute__((alias("__imp__sub_830D23F0"))) PPC_WEAK_FUNC(sub_830D23F0);
PPC_FUNC_IMPL(__imp__sub_830D23F0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,36(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x830d2418
	if (cr6.lt) goto loc_830D2418;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830d24d4
	goto loc_830D24D4;
loc_830D2418:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r9,11
	ctx.r9.s64 = 11;
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// fctiwz f11,f13
	ctx.f11.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f10,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f9.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lfs f8,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fctidz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f7.u64);
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r30,28(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x830d7988
	ctx.lr = 0x830D2474;
	sub_830D7988(ctx, base);
	// rlwinm r9,r30,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830d2494
	if (cr6.eq) goto loc_830D2494;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfc r11,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// subfze r3,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x830d24bc
	goto loc_830D24BC;
loc_830D2494:
	// rlwinm r10,r30,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x830d24b0
	if (cr6.eq) goto loc_830D24B0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfc r11,r31,r11
	xer.ca = ctx.r11.u32 >= ctx.r31.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subfze r3,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x830d24bc
	goto loc_830D24BC;
loc_830D24B0:
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_830D24BC:
	// rlwinm r11,r30,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x830d24d4
	if (cr6.eq) goto loc_830D24D4;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_830D24D4:
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

__attribute__((alias("__imp__sub_830D24EC"))) PPC_WEAK_FUNC(sub_830D24EC);
PPC_FUNC_IMPL(__imp__sub_830D24EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D24F0"))) PPC_WEAK_FUNC(sub_830D24F0);
PPC_FUNC_IMPL(__imp__sub_830D24F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830D24F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830d7468
	ctx.lr = 0x830D2504;
	sub_830D7468(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830d2518
	if (!cr6.eq) goto loc_830D2518;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830D2518:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83767d18
	ctx.lr = 0x830D2520;
	sub_83767D18(ctx, base);
	// lwz r29,8(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83767d18
	ctx.lr = 0x830D252C;
	sub_83767D18(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r8,r29
	ctx.r3.u64 = ctx.r8.u64 & ctx.r29.u64;
	// bl 0x827b4418
	ctx.lr = 0x830D2554;
	sub_827B4418(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D255C"))) PPC_WEAK_FUNC(sub_830D255C);
PPC_FUNC_IMPL(__imp__sub_830D255C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D2560"))) PPC_WEAK_FUNC(sub_830D2560);
PPC_FUNC_IMPL(__imp__sub_830D2560) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830d7468
	ctx.lr = 0x830D2578;
	sub_830D7468(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830d2594
	if (!cr6.eq) goto loc_830D2594;
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
loc_830D2594:
	// bl 0x83530640
	ctx.lr = 0x830D2598;
	sub_83530640(ctx, base);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lbz r10,85(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 85);
	// rlwinm r8,r9,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x830d25cc
	if (cr6.eq) goto loc_830D25CC;
	// li r8,-1
	ctx.r8.s64 = -1;
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfze r3,r8
	temp.u8 = ~ctx.r8.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x830d25f4
	goto loc_830D25F4;
loc_830D25CC:
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x830d25e8
	if (cr6.eq) goto loc_830D25E8;
	// li r8,-1
	ctx.r8.s64 = -1;
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfze r3,r8
	temp.u8 = ~ctx.r8.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x830d25f4
	goto loc_830D25F4;
loc_830D25E8:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_830D25F4:
	// rlwinm r11,r9,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x830d260c
	if (cr6.eq) goto loc_830D260C;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_830D260C:
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

__attribute__((alias("__imp__sub_830D2620"))) PPC_WEAK_FUNC(sub_830D2620);
PPC_FUNC_IMPL(__imp__sub_830D2620) {
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
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// blt cr6,0x830d2650
	if (cr6.lt) goto loc_830D2650;
loc_830D263C:
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
loc_830D2650:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d263c
	if (cr6.eq) goto loc_830D263C;
	// lwz r11,5748(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5748);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r3,r11,-2
	ctx.r3.s64 = ctx.r11.s64 + -2;
	// bne cr6,0x830d2678
	if (!cr6.eq) goto loc_830D2678;
	// neg r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
loc_830D2678:
	// lfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,20(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x827b4418
	ctx.lr = 0x830D2690;
	sub_827B4418(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D26A0"))) PPC_WEAK_FUNC(sub_830D26A0);
PPC_FUNC_IMPL(__imp__sub_830D26A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x830D26A8;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x830d9ef0
	ctx.lr = 0x830D26BC;
	sub_830D9EF0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// blt cr6,0x830d26d8
	if (cr6.lt) goto loc_830D26D8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830D26D8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lfs f31,12(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f13,f31
	ctx.f13.s64 = (ctx.f31.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f31.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfd f12,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r22,28(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// addis r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 65536;
	// addi r30,r30,27316
	ctx.r30.s64 = ctx.r30.s64 + 27316;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4cca8
	ctx.lr = 0x830D2718;
	sub_82A4CCA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4ccd0
	ctx.lr = 0x830D2728;
	sub_82A4CCD0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lhz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x82a4cbe0
	ctx.lr = 0x830D2738;
	sub_82A4CBE0(ctx, base);
	// clrlwi r23,r3,16
	ctx.r23.u64 = ctx.r3.u32 & 0xFFFF;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x830d2768
	if (!cr6.eq) goto loc_830D2768;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827b4488
	ctx.lr = 0x830D2758;
	sub_827B4488(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830D2768:
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, xer);
	// bne cr6,0x830d2790
	if (!cr6.eq) goto loc_830D2790;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lhz r3,2(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x827b4488
	ctx.lr = 0x830D2780;
	sub_827B4488(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830D2790:
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// bne cr6,0x830d2800
	if (!cr6.eq) goto loc_830D2800;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x830d2f2c
	if (cr6.eq) goto loc_830D2F2C;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// clrldi r10,r30,32
	ctx.r10.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x830d7648
	ctx.lr = 0x830D27E4;
	sub_830D7648(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x830b16d8
	ctx.lr = 0x830D27F0;
	sub_830B16D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830D2800:
	// cmpwi cr6,r28,3
	cr6.compare<int32_t>(ctx.r28.s32, 3, xer);
	// blt cr6,0x830d298c
	if (cr6.lt) goto loc_830D298C;
	// cmpwi cr6,r28,6
	cr6.compare<int32_t>(ctx.r28.s32, 6, xer);
	// bgt cr6,0x830d298c
	if (cr6.gt) goto loc_830D298C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4c918
	ctx.lr = 0x830D281C;
	sub_82A4C918(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4c918
	ctx.lr = 0x830D282C;
	sub_82A4C918(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4c918
	ctx.lr = 0x830D283C;
	sub_82A4C918(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r31,r26,16
	ctx.r31.u64 = ctx.r26.u32 & 0xFFFF;
	// clrlwi r27,r27,16
	ctx.r27.u64 = ctx.r27.u32 & 0xFFFF;
	// bl 0x82a4c918
	ctx.lr = 0x830D2858;
	sub_82A4C918(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d2f2c
	if (cr6.eq) goto loc_830D2F2C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmpwi cr6,r28,3
	cr6.compare<int32_t>(ctx.r28.s32, 3, xer);
	// lfs f1,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// bne cr6,0x830d28b4
	if (!cr6.eq) goto loc_830D28B4;
	// extsw r10,r27
	ctx.r10.s64 = ctx.r27.s32;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// b 0x830d295c
	goto loc_830D295C;
loc_830D28B4:
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(ctx.r28.s32, 4, xer);
	// bne cr6,0x830d28f0
	if (!cr6.eq) goto loc_830D28F0;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// add r10,r31,r30
	ctx.r10.u64 = ctx.r31.u64 + ctx.r30.u64;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// b 0x830d295c
	goto loc_830D295C;
loc_830D28F0:
	// cmpwi cr6,r28,5
	cr6.compare<int32_t>(ctx.r28.s32, 5, xer);
	// bne cr6,0x830d2928
	if (!cr6.eq) goto loc_830D2928;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsw r10,r31
	ctx.r10.s64 = ctx.r31.s32;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// b 0x830d295c
	goto loc_830D295C;
loc_830D2928:
	// cmpwi cr6,r28,6
	cr6.compare<int32_t>(ctx.r28.s32, 6, xer);
	// bne cr6,0x830d2970
	if (!cr6.eq) goto loc_830D2970;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r30
	ctx.r10.s64 = ctx.r30.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f13,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_830D295C:
	// stfs f9,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830d7648
	ctx.lr = 0x830D2970;
	sub_830D7648(ctx, base);
loc_830D2970:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x830b16d8
	ctx.lr = 0x830D297C;
	sub_830B16D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830D298C:
	// cmpwi cr6,r28,7
	cr6.compare<int32_t>(ctx.r28.s32, 7, xer);
	// bne cr6,0x830d29c0
	if (!cr6.eq) goto loc_830D29C0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4c970
	ctx.lr = 0x830D29A0;
	sub_82A4C970(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// bl 0x827b4488
	ctx.lr = 0x830D29B0;
	sub_827B4488(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830D29C0:
	// cmpwi cr6,r28,8
	cr6.compare<int32_t>(ctx.r28.s32, 8, xer);
	// bne cr6,0x830d2a38
	if (!cr6.eq) goto loc_830D2A38;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x830d2f2c
	if (cr6.eq) goto loc_830D2F2C;
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82a4c970
	ctx.lr = 0x830D29F4;
	sub_82A4C970(ctx, base);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f11,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830d7648
	ctx.lr = 0x830D2A1C;
	sub_830D7648(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x830b16d8
	ctx.lr = 0x830D2A28;
	sub_830B16D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830D2A38:
	// cmpwi cr6,r28,9
	cr6.compare<int32_t>(ctx.r28.s32, 9, xer);
	// bne cr6,0x830d2ab0
	if (!cr6.eq) goto loc_830D2AB0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x830d2f2c
	if (cr6.eq) goto loc_830D2F2C;
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82a4c970
	ctx.lr = 0x830D2A6C;
	sub_82A4C970(ctx, base);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f11,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830d7648
	ctx.lr = 0x830D2A94;
	sub_830D7648(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x830b16d8
	ctx.lr = 0x830D2AA0;
	sub_830B16D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830D2AB0:
	// cmpwi cr6,r28,10
	cr6.compare<int32_t>(ctx.r28.s32, 10, xer);
	// bne cr6,0x830d2b28
	if (!cr6.eq) goto loc_830D2B28;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x830d2f2c
	if (cr6.eq) goto loc_830D2F2C;
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// li r4,3
	ctx.r4.s64 = 3;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82a4c970
	ctx.lr = 0x830D2AE4;
	sub_82A4C970(ctx, base);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfd f11,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x830d7648
	ctx.lr = 0x830D2B0C;
	sub_830D7648(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x830b16d8
	ctx.lr = 0x830D2B18;
	sub_830B16D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830D2B28:
	// cmpwi cr6,r28,11
	cr6.compare<int32_t>(ctx.r28.s32, 11, xer);
	// bne cr6,0x830d2ba0
	if (!cr6.eq) goto loc_830D2BA0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x830d2f2c
	if (cr6.eq) goto loc_830D2F2C;
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// li r4,2
	ctx.r4.s64 = 2;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82a4c970
	ctx.lr = 0x830D2B5C;
	sub_82A4C970(ctx, base);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfd f11,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x830d7648
	ctx.lr = 0x830D2B84;
	sub_830D7648(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x830b16d8
	ctx.lr = 0x830D2B90;
	sub_830B16D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830D2BA0:
	// cmpwi cr6,r28,12
	cr6.compare<int32_t>(ctx.r28.s32, 12, xer);
	// bne cr6,0x830d2c10
	if (!cr6.eq) goto loc_830D2C10;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x830d2f2c
	if (cr6.eq) goto loc_830D2F2C;
	// clrldi r10,r30,32
	ctx.r10.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// lhz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 28);
	// li r5,1
	ctx.r5.s64 = 1;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f11,104(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x830d7648
	ctx.lr = 0x830D2BF4;
	sub_830D7648(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x830b16d8
	ctx.lr = 0x830D2C00;
	sub_830B16D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830D2C10:
	// cmpwi cr6,r28,13
	cr6.compare<int32_t>(ctx.r28.s32, 13, xer);
	// bne cr6,0x830d2c38
	if (!cr6.eq) goto loc_830D2C38;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x827b4488
	ctx.lr = 0x830D2C28;
	sub_827B4488(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830D2C38:
	// cmpwi cr6,r28,14
	cr6.compare<int32_t>(ctx.r28.s32, 14, xer);
	// blt cr6,0x830d2d44
	if (cr6.lt) goto loc_830D2D44;
	// cmpwi cr6,r28,16
	cr6.compare<int32_t>(ctx.r28.s32, 16, xer);
	// bgt cr6,0x830d2d44
	if (cr6.gt) goto loc_830D2D44;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a4cbe0
	ctx.lr = 0x830D2C54;
	sub_82A4CBE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a4cbe0
	ctx.lr = 0x830D2C64;
	sub_82A4CBE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a4cbe0
	ctx.lr = 0x830D2C74;
	sub_82A4CBE0(ctx, base);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x830d2f2c
	if (cr6.eq) goto loc_830D2F2C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r28,14
	cr6.compare<int32_t>(ctx.r28.s32, 14, xer);
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// bne cr6,0x830d2cbc
	if (!cr6.eq) goto loc_830D2CBC;
	// clrldi r10,r23,32
	ctx.r10.u64 = ctx.r23.u64 & 0xFFFFFFFF;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f0,104(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f12,104(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// b 0x830d2d14
	goto loc_830D2D14;
loc_830D2CBC:
	// cmpwi cr6,r28,15
	cr6.compare<int32_t>(ctx.r28.s32, 15, xer);
	// bne cr6,0x830d2ce0
	if (!cr6.eq) goto loc_830D2CE0;
	// clrlwi r9,r31,16
	ctx.r9.u64 = ctx.r31.u32 & 0xFFFF;
	// clrldi r10,r23,32
	ctx.r10.u64 = ctx.r23.u64 & 0xFFFFFFFF;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// b 0x830d2d00
	goto loc_830D2D00;
loc_830D2CE0:
	// cmpwi cr6,r28,16
	cr6.compare<int32_t>(ctx.r28.s32, 16, xer);
	// bne cr6,0x830d2d28
	if (!cr6.eq) goto loc_830D2D28;
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// clrldi r10,r23,32
	ctx.r10.u64 = ctx.r23.u64 & 0xFFFFFFFF;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lfd f0,104(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
loc_830D2D00:
	// fcfid f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(ctx.f0.s64);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
loc_830D2D14:
	// stfs f9,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830d7648
	ctx.lr = 0x830D2D28;
	sub_830D7648(ctx, base);
loc_830D2D28:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x830b16d8
	ctx.lr = 0x830D2D34;
	sub_830B16D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830D2D44:
	// cmpwi cr6,r28,17
	cr6.compare<int32_t>(ctx.r28.s32, 17, xer);
	// bne cr6,0x830d2d78
	if (!cr6.eq) goto loc_830D2D78;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4ca88
	ctx.lr = 0x830D2D58;
	sub_82A4CA88(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// bl 0x827b4488
	ctx.lr = 0x830D2D68;
	sub_827B4488(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830D2D78:
	// cmpwi cr6,r28,18
	cr6.compare<int32_t>(ctx.r28.s32, 18, xer);
	// bne cr6,0x830d2e04
	if (!cr6.eq) goto loc_830D2E04;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4ca88
	ctx.lr = 0x830D2D8C;
	sub_82A4CA88(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4cad8
	ctx.lr = 0x830D2D9C;
	sub_82A4CAD8(ctx, base);
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d2f2c
	if (cr6.eq) goto loc_830D2F2C;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// li r5,1
	ctx.r5.s64 = 1;
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x830d7648
	ctx.lr = 0x830D2DE8;
	sub_830D7648(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x830b16d8
	ctx.lr = 0x830D2DF4;
	sub_830B16D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830D2E04:
	// cmpwi cr6,r28,19
	cr6.compare<int32_t>(ctx.r28.s32, 19, xer);
	// bne cr6,0x830d2e9c
	if (!cr6.eq) goto loc_830D2E9C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a225d0
	ctx.lr = 0x830D2E18;
	sub_82A225D0(ctx, base);
	// cntlzw r10,r24
	ctx.r10.u64 = ctx.r24.u32 == 0 ? 32 : __builtin_clz(ctx.r24.u32);
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x8291ad98
	ctx.lr = 0x830D2E24;
	sub_8291AD98(ctx, base);
	// li r4,44
	ctx.r4.s64 = 44;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x829194e8
	ctx.lr = 0x830D2E30;
	sub_829194E8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d2f2c
	if (cr6.eq) goto loc_830D2F2C;
	// lhz r10,6(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// li r5,1
	ctx.r5.s64 = 1;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x830d7648
	ctx.lr = 0x830D2E80;
	sub_830D7648(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x830b16d8
	ctx.lr = 0x830D2E8C;
	sub_830B16D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830D2E9C:
	// cmpwi cr6,r28,20
	cr6.compare<int32_t>(ctx.r28.s32, 20, xer);
	// bne cr6,0x830d2ec4
	if (!cr6.eq) goto loc_830D2EC4;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lbz r3,30(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 30);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x827b4488
	ctx.lr = 0x830D2EB4;
	sub_827B4488(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830D2EC4:
	// cmpwi cr6,r28,21
	cr6.compare<int32_t>(ctx.r28.s32, 21, xer);
	// bne cr6,0x830d2eec
	if (!cr6.eq) goto loc_830D2EEC;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lbz r3,31(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 31);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x827b4488
	ctx.lr = 0x830D2EDC;
	sub_827B4488(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830D2EEC:
	// cmpwi cr6,r28,22
	cr6.compare<int32_t>(ctx.r28.s32, 22, xer);
	// bne cr6,0x830d2f2c
	if (!cr6.eq) goto loc_830D2F2C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4c970
	ctx.lr = 0x830D2F00;
	sub_82A4C970(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4c970
	ctx.lr = 0x830D2F10;
	sub_82A4C970(ctx, base);
	// rlwinm r11,r3,1,15,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1FFFE;
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
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
loc_830D2F2C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D2F3C"))) PPC_WEAK_FUNC(sub_830D2F3C);
PPC_FUNC_IMPL(__imp__sub_830D2F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D2F40"))) PPC_WEAK_FUNC(sub_830D2F40);
PPC_FUNC_IMPL(__imp__sub_830D2F40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830D2F48;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r28,12(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x830d9ef0
	ctx.lr = 0x830D2F64;
	sub_830D9EF0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827b4aa0
	ctx.lr = 0x830D2F74;
	sub_827B4AA0(ctx, base);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// lfs f31,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f31.f64 = double(temp.f32);
	// lwz r27,32(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// bge cr6,0x830d3058
	if (!cr6.lt) goto loc_830D3058;
	// addis r3,r28,1
	ctx.r3.s64 = ctx.r28.s64 + 65536;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r3,27316
	ctx.r3.s64 = ctx.r3.s64 + 27316;
	// bl 0x82a4cca8
	ctx.lr = 0x830D2FA8;
	sub_82A4CCA8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82a4c9c8
	ctx.lr = 0x830D2FB8;
	sub_82A4C9C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a4c9c8
	ctx.lr = 0x830D2FCC;
	sub_82A4C9C8(ctx, base);
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(ctx.r29.s32, 3, xer);
	// bne cr6,0x830d2fdc
	if (!cr6.eq) goto loc_830D2FDC;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// b 0x830d2fe8
	goto loc_830D2FE8;
loc_830D2FDC:
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// bne cr6,0x830d3058
	if (!cr6.eq) goto loc_830D3058;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
loc_830D2FE8:
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d3058
	if (cr6.eq) goto loc_830D3058;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// li r5,1
	ctx.r5.s64 = 1;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x830d7648
	ctx.lr = 0x830D3040;
	sub_830D7648(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x830b16d8
	ctx.lr = 0x830D304C;
	sub_830B16D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830D3058:
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

__attribute__((alias("__imp__sub_830D3068"))) PPC_WEAK_FUNC(sub_830D3068);
PPC_FUNC_IMPL(__imp__sub_830D3068) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x830D3070;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,40(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r4,36(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x830d3098
	if (cr6.lt) goto loc_830D3098;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x830d309c
	if (cr6.lt) goto loc_830D309C;
loc_830D3098:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830D309C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830d3248
	if (cr6.eq) goto loc_830D3248;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// beq cr6,0x830d3248
	if (cr6.eq) goto loc_830D3248;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f31,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f13,f31
	ctx.f13.s64 = (ctx.f31.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f31.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// stfd f12,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r27,24(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addis r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 65536;
	// addi r3,r3,27316
	ctx.r3.s64 = ctx.r3.s64 + 27316;
	// bl 0x82a4cca8
	ctx.lr = 0x830D30E8;
	sub_82A4CCA8(ctx, base);
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a4cb28
	ctx.lr = 0x830D30F4;
	sub_82A4CB28(ctx, base);
	// clrlwi r25,r3,16
	ctx.r25.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x830d3124
	if (cr6.lt) goto loc_830D3124;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// bge cr6,0x830d3124
	if (!cr6.lt) goto loc_830D3124;
	// lis r11,-17874
	ctx.r11.s64 = -1171390464;
	// ori r10,r11,35747
	ctx.r10.u64 = ctx.r11.u64 | 35747;
	// mulhwu r9,r30,r10
	ctx.r9.u64 = (uint64_t(ctx.r30.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r8,r9,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r7,r8,11
	ctx.r7.s64 = ctx.r8.s64 * 11;
	// subf r30,r7,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r7.s64;
	// b 0x830d3128
	goto loc_830D3128;
loc_830D3124:
	// li r30,0
	ctx.r30.s64 = 0;
loc_830D3128:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4cb28
	ctx.lr = 0x830D3134;
	sub_82A4CB28(ctx, base);
	// clrlwi r29,r3,16
	ctx.r29.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4cb70
	ctx.lr = 0x830D3144;
	sub_82A4CB70(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x830d3170
	if (!cr6.eq) goto loc_830D3170;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827b4488
	ctx.lr = 0x830D3164;
	sub_827B4488(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830D3170:
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, xer);
	// bne cr6,0x830d31bc
	if (!cr6.eq) goto loc_830D31BC;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x830d324c
	if (cr6.eq) goto loc_830D324C;
	// clrldi r10,r29,32
	ctx.r10.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// clrldi r11,r25,32
	ctx.r11.u64 = ctx.r25.u64 & 0xFFFFFFFF;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// b 0x830d3228
	goto loc_830D3228;
loc_830D31BC:
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// bne cr6,0x830d31e0
	if (!cr6.eq) goto loc_830D31E0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x827b4488
	ctx.lr = 0x830D31D4;
	sub_827B4488(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830D31E0:
	// cmpwi cr6,r28,3
	cr6.compare<int32_t>(ctx.r28.s32, 3, xer);
	// bne cr6,0x830d324c
	if (!cr6.eq) goto loc_830D324C;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x830d324c
	if (cr6.eq) goto loc_830D324C;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r10,r29,32
	ctx.r10.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_830D3228:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x830d7648
	ctx.lr = 0x830D3230;
	sub_830D7648(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x830b16d8
	ctx.lr = 0x830D323C;
	sub_830B16D8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830D3248:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830D324C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D3258"))) PPC_WEAK_FUNC(sub_830D3258);
PPC_FUNC_IMPL(__imp__sub_830D3258) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830D3260;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,36(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// blt cr6,0x830d3280
	if (cr6.lt) goto loc_830D3280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830D3280:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctidz f11,f13
	ctx.f11.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addis r30,r9,1
	ctx.r30.s64 = ctx.r9.s64 + 65536;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r28,132(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// addi r30,r30,28040
	ctx.r30.s64 = ctx.r30.s64 + 28040;
	// bne cr6,0x830d32d8
	if (!cr6.eq) goto loc_830D32D8;
	// lbz r3,2(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// bl 0x827b4488
	ctx.lr = 0x830D32CC;
	sub_827B4488(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830D32D8:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x830d32f8
	if (!cr6.eq) goto loc_830D32F8;
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lbz r3,3(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// bl 0x827b4488
	ctx.lr = 0x830D32EC;
	sub_827B4488(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830D32F8:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x830d3318
	if (!cr6.eq) goto loc_830D3318;
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lbz r3,5(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// bl 0x827b4488
	ctx.lr = 0x830D330C;
	sub_827B4488(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830D3318:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x830d3358
	if (!cr6.eq) goto loc_830D3358;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x830d3340
	if (!cr6.eq) goto loc_830D3340;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x827b4488
	ctx.lr = 0x830D3334;
	sub_827B4488(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830D3340:
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x827b4488
	ctx.lr = 0x830D334C;
	sub_827B4488(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830D3358:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x830d3398
	if (!cr6.eq) goto loc_830D3398;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x830d3380
	if (!cr6.eq) goto loc_830D3380;
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x827b4488
	ctx.lr = 0x830D3374;
	sub_827B4488(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830D3380:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x827b4488
	ctx.lr = 0x830D338C;
	sub_827B4488(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830D3398:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x830d33c8
	if (!cr6.eq) goto loc_830D33C8;
	// lbz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d3580
	if (cr6.eq) goto loc_830D3580;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// bne cr6,0x830d3580
	if (!cr6.eq) goto loc_830D3580;
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830D33C8:
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x830d3424
	if (!cr6.eq) goto loc_830D3424;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a225d0
	ctx.lr = 0x830D33D8;
	sub_82A225D0(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r4,5
	ctx.r4.s64 = 5;
	// ori r10,r11,36400
	ctx.r10.u64 = ctx.r11.u64 | 36400;
	// mullw r11,r29,r10
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r10.s32);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x82919698
	ctx.lr = 0x830D33F0;
	sub_82919698(ctx, base);
	// lbz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d3580
	if (cr6.eq) goto loc_830D3580;
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmpw cr6,r10,r29
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, xer);
	// bne cr6,0x830d3580
	if (!cr6.eq) goto loc_830D3580;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x830d3580
	if (!cr6.eq) goto loc_830D3580;
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830D3424:
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bne cr6,0x830d34b8
	if (!cr6.eq) goto loc_830D34B8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830d8c08
	ctx.lr = 0x830D343C;
	sub_830D8C08(ctx, base);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, xer);
	// bne cr6,0x830d3580
	if (!cr6.eq) goto loc_830D3580;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830d8c08
	ctx.lr = 0x830D3454;
	sub_830D8C08(ctx, base);
	// clrlwi r26,r29,24
	ctx.r26.u64 = ctx.r29.u32 & 0xFF;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830d9140
	ctx.lr = 0x830D3470;
	sub_830D9140(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830d9140
	ctx.lr = 0x830D3488;
	sub_830D9140(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x830d3580
	if (cr6.eq) goto loc_830D3580;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830d3580
	if (!cr6.eq) goto loc_830D3580;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// beq cr6,0x830d34a8
	if (cr6.eq) goto loc_830D34A8;
	// cmpw cr6,r28,r29
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r29.s32, xer);
	// bne cr6,0x830d3580
	if (!cr6.eq) goto loc_830D3580;
loc_830D34A8:
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830D34B8:
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bne cr6,0x830d3530
	if (!cr6.eq) goto loc_830D3530;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830d8c08
	ctx.lr = 0x830D34D0;
	sub_830D8C08(ctx, base);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, xer);
	// bne cr6,0x830d3580
	if (!cr6.eq) goto loc_830D3580;
	// clrlwi r29,r29,24
	ctx.r29.u64 = ctx.r29.u32 & 0xFF;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830d9140
	ctx.lr = 0x830D34F0;
	sub_830D9140(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830d9140
	ctx.lr = 0x830D3508;
	sub_830D9140(ctx, base);
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(ctx.r30.s32, 3, xer);
	// beq cr6,0x830d3580
	if (cr6.eq) goto loc_830D3580;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x830d3580
	if (cr6.eq) goto loc_830D3580;
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, xer);
	// beq cr6,0x830d3580
	if (cr6.eq) goto loc_830D3580;
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830D3530:
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// bne cr6,0x830d3580
	if (!cr6.eq) goto loc_830D3580;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a22ac0
	ctx.lr = 0x830D3540;
	sub_82A22AC0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830d3580
	if (cr6.eq) goto loc_830D3580;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830d8c08
	ctx.lr = 0x830D3558;
	sub_830D8C08(ctx, base);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, xer);
	// bne cr6,0x830d3580
	if (!cr6.eq) goto loc_830D3580;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a22a50
	ctx.lr = 0x830D356C;
	sub_82A22A50(ctx, base);
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// lwz r10,296(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r27,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r27.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
loc_830D3580:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D358C"))) PPC_WEAK_FUNC(sub_830D358C);
PPC_FUNC_IMPL(__imp__sub_830D358C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D3590"))) PPC_WEAK_FUNC(sub_830D3590);
PPC_FUNC_IMPL(__imp__sub_830D3590) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x830D3598;
	__savegprlr_17(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830d7500
	ctx.lr = 0x830D35AC;
	sub_830D7500(ctx, base);
	// ld r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 52);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r19,88(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(ctx.r19.s32, 0, xer);
	// lwz r26,92(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// blt cr6,0x830d35e0
	if (cr6.lt) goto loc_830D35E0;
	// cmpwi cr6,r19,2
	cr6.compare<int32_t>(ctx.r19.s32, 2, xer);
	// bge cr6,0x830d35e0
	if (!cr6.lt) goto loc_830D35E0;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// blt cr6,0x830d35e0
	if (cr6.lt) goto loc_830D35E0;
	// cmpwi cr6,r26,32
	cr6.compare<int32_t>(ctx.r26.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830d35e4
	if (cr6.lt) goto loc_830D35E4;
loc_830D35E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D35E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d3b10
	if (cr6.eq) goto loc_830D3B10;
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// addi r11,r11,26072
	ctx.r11.s64 = ctx.r11.s64 + 26072;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830d3614
	if (!cr6.eq) goto loc_830D3614;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x830d363c
	goto loc_830D363C;
loc_830D3614:
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x830d3634
	if (!cr6.eq) goto loc_830D3634;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830d3638
	if (cr6.eq) goto loc_830D3638;
loc_830D3634:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D3638:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_830D363C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830d3b10
	if (!cr6.eq) goto loc_830D3B10;
	// lis r29,-31763
	ctx.r29.s64 = -2081619968;
	// lwz r22,40(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r3,-3564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// lwz r17,292(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// lwz r21,6132(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6132);
	// bl 0x82a0c710
	ctx.lr = 0x830D3664;
	sub_82A0C710(ctx, base);
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c738
	ctx.lr = 0x830D3678;
	sub_82A0C738(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x830d3b10
	if (cr6.eq) goto loc_830D3B10;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830d3b10
	if (cr6.eq) goto loc_830D3B10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830d9520
	ctx.lr = 0x830D3694;
	sub_830D9520(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a16248
	ctx.lr = 0x830D36A4;
	sub_82A16248(ctx, base);
	// addis r25,r30,1
	ctx.r25.s64 = ctx.r30.s64 + 65536;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r25,r25,-30988
	ctx.r25.s64 = ctx.r25.s64 + -30988;
	// bl 0x83530640
	ctx.lr = 0x830D36B4;
	sub_83530640(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a16c18
	ctx.lr = 0x830D36C0;
	sub_82A16C18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d3b10
	if (cr6.eq) goto loc_830D3B10;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x830d3b10
	if (cr6.eq) goto loc_830D3B10;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r20,24(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lfs f2,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// li r23,0
	ctx.r23.s64 = 0;
	// fctidz f12,f2
	ctx.f12.s64 = (ctx.f2.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f12,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// lwz r18,92(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x830d3778
	if (!cr6.eq) goto loc_830D3778;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, xer);
	// blt cr6,0x830d3718
	if (cr6.lt) goto loc_830D3718;
	// cmpwi cr6,r22,22
	cr6.compare<int32_t>(ctx.r22.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830d371c
	if (cr6.lt) goto loc_830D371C;
loc_830D3718:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D371C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d3b04
	if (cr6.eq) goto loc_830D3B04;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, xer);
	// blt cr6,0x830d373c
	if (cr6.lt) goto loc_830D373C;
	// cmpwi cr6,r22,22
	cr6.compare<int32_t>(ctx.r22.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830d3740
	if (cr6.lt) goto loc_830D3740;
loc_830D373C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D3740:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d3768
	if (cr6.eq) goto loc_830D3768;
	// add r11,r17,r22
	ctx.r11.u64 = ctx.r17.u64 + ctx.r22.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r23,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r23.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_830D3768:
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_830D3778:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x830d3790
	if (!cr6.eq) goto loc_830D3790;
	// lbz r23,4147(r28)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r28.u32 + 4147);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_830D3790:
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// bne cr6,0x830d37c8
	if (!cr6.eq) goto loc_830D37C8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82a16890
	ctx.lr = 0x830D37A4;
	sub_82A16890(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82917b90
	ctx.lr = 0x830D37B0;
	sub_82917B90(ctx, base);
	// subf r11,r3,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r23,r10,27,31,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_830D37C8:
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(ctx.r30.s32, 3, xer);
	// bne cr6,0x830d3824
	if (!cr6.eq) goto loc_830D3824;
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, xer);
	// lwz r3,192(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// blt cr6,0x830d37ec
	if (cr6.lt) goto loc_830D37EC;
	// cmpwi cr6,r22,22
	cr6.compare<int32_t>(ctx.r22.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830d37f0
	if (cr6.lt) goto loc_830D37F0;
loc_830D37EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D37F0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d3b04
	if (cr6.eq) goto loc_830D3B04;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830d3b04
	if (cr6.eq) goto loc_830D3B04;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x825ca6b8
	ctx.lr = 0x830D380C;
	sub_825CA6B8(ctx, base);
	// addi r11,r3,-24
	ctx.r11.s64 = ctx.r3.s64 + -24;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r23,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r23.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_830D3824:
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(ctx.r30.s32, 4, xer);
	// beq cr6,0x830d3a9c
	if (cr6.eq) goto loc_830D3A9C;
	// cmpwi cr6,r30,5
	cr6.compare<int32_t>(ctx.r30.s32, 5, xer);
	// beq cr6,0x830d3a9c
	if (cr6.eq) goto loc_830D3A9C;
	// cmpwi cr6,r30,6
	cr6.compare<int32_t>(ctx.r30.s32, 6, xer);
	// bne cr6,0x830d38ac
	if (!cr6.eq) goto loc_830D38AC;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82a26da0
	ctx.lr = 0x830D384C;
	sub_82A26DA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8261a110
	ctx.lr = 0x830D3854;
	sub_8261A110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d3b04
	if (cr6.eq) goto loc_830D3B04;
	// lwz r11,80(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 80);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgt cr6,0x830d3b04
	if (cr6.gt) goto loc_830D3B04;
	// lbz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 144);
	// lbz r10,142(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 142);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x830d3888
	if (!cr6.lt) goto loc_830D3888;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_830D3888:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfze r11,r9
	temp.u8 = ~ctx.r9.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r23,r11,24
	ctx.r23.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_830D38AC:
	// cmpwi cr6,r30,7
	cr6.compare<int32_t>(ctx.r30.s32, 7, xer);
	// bne cr6,0x830d38d8
	if (!cr6.eq) goto loc_830D38D8;
	// lbz r3,4076(r28)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r28.u32 + 4076);
	// cmplwi cr6,r3,255
	cr6.compare<uint32_t>(ctx.r3.u32, 255, xer);
	// beq cr6,0x830d3b04
	if (cr6.eq) goto loc_830D3B04;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// bl 0x827b4488
	ctx.lr = 0x830D38CC;
	sub_827B4488(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_830D38D8:
	// cmpwi cr6,r30,8
	cr6.compare<int32_t>(ctx.r30.s32, 8, xer);
	// bne cr6,0x830d3940
	if (!cr6.eq) goto loc_830D3940;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e1e68
	ctx.lr = 0x830D38E8;
	sub_830E1E68(ctx, base);
	// lfs f1,4464(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 4464);
	ctx.f1.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a29110
	ctx.lr = 0x830D38F4;
	sub_82A29110(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830d7110
	ctx.lr = 0x830D3900;
	sub_830D7110(ctx, base);
	// lbz r11,4076(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 4076);
	// lbz r9,4077(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 4077);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x830d3b04
	if (cr6.eq) goto loc_830D3B04;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// bne cr6,0x830d3920
	if (!cr6.eq) goto loc_830D3920;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_830D3920:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x827b4488
	ctx.lr = 0x830D3934;
	sub_827B4488(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_830D3940:
	// cmpwi cr6,r30,9
	cr6.compare<int32_t>(ctx.r30.s32, 9, xer);
	// bne cr6,0x830d3960
	if (!cr6.eq) goto loc_830D3960;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// lfs f1,4148(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4148);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x830b16d8
	ctx.lr = 0x830D3954;
	sub_830B16D8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_830D3960:
	// cmpwi cr6,r30,10
	cr6.compare<int32_t>(ctx.r30.s32, 10, xer);
	// bne cr6,0x830d3990
	if (!cr6.eq) goto loc_830D3990;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830d9680
	ctx.lr = 0x830D3974;
	sub_830D9680(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// bl 0x827b4488
	ctx.lr = 0x830D3984;
	sub_827B4488(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_830D3990:
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// bne cr6,0x830d39bc
	if (!cr6.eq) goto loc_830D39BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830d7680
	ctx.lr = 0x830D39A0;
	sub_830D7680(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// bl 0x827b4488
	ctx.lr = 0x830D39B0;
	sub_827B4488(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_830D39BC:
	// cmpwi cr6,r30,12
	cr6.compare<int32_t>(ctx.r30.s32, 12, xer);
	// bne cr6,0x830d3b04
	if (!cr6.eq) goto loc_830D3B04;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82a26da0
	ctx.lr = 0x830D39D4;
	sub_82A26DA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83102db0
	ctx.lr = 0x830D39E0;
	sub_83102DB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// bl 0x8261a110
	ctx.lr = 0x830D39F0;
	sub_8261A110(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830d3b04
	if (cr6.eq) goto loc_830D3B04;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d3a50
	if (cr6.eq) goto loc_830D3A50;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x830d3a30
	if (!cr6.eq) goto loc_830D3A30;
	// lbz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 148);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x827b4488
	ctx.lr = 0x830D3A24;
	sub_827B4488(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_830D3A30:
	// lbz r11,149(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 149);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x827b4488
	ctx.lr = 0x830D3A44;
	sub_827B4488(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_830D3A50:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83102db0
	ctx.lr = 0x830D3A58;
	sub_83102DB0(ctx, base);
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d3a80
	if (cr6.eq) goto loc_830D3A80;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// lbz r3,150(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 150);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// bl 0x827b4488
	ctx.lr = 0x830D3A74;
	sub_827B4488(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_830D3A80:
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// lbz r3,147(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 147);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// bl 0x827b4488
	ctx.lr = 0x830D3A90;
	sub_827B4488(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_830D3A9C:
	// li r3,34
	ctx.r3.s64 = 34;
	// bl 0x830d6ba0
	ctx.lr = 0x830D3AA4;
	sub_830D6BA0(ctx, base);
	// add r11,r3,r24
	ctx.r11.u64 = ctx.r3.u64 + ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lbz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// bl 0x830d9680
	ctx.lr = 0x830D3AB8;
	sub_830D9680(ctx, base);
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(ctx.r30.s32, 4, xer);
	// bne cr6,0x830d3ad8
	if (!cr6.eq) goto loc_830D3AD8;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// blt cr6,0x830d3afc
	if (cr6.lt) goto loc_830D3AFC;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,74
	cr6.compare<uint32_t>(ctx.r11.u32, 74, xer);
	// b 0x830d3af4
	goto loc_830D3AF4;
loc_830D3AD8:
	// cmpwi cr6,r30,5
	cr6.compare<int32_t>(ctx.r30.s32, 5, xer);
	// bne cr6,0x830d3b04
	if (!cr6.eq) goto loc_830D3B04;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// blt cr6,0x830d3afc
	if (cr6.lt) goto loc_830D3AFC;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,85
	cr6.compare<uint32_t>(ctx.r11.u32, 85, xer);
loc_830D3AF4:
	// li r11,1
	ctx.r11.s64 = 1;
	// bge cr6,0x830d3b00
	if (!cr6.lt) goto loc_830D3B00;
loc_830D3AFC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D3B00:
	// clrlwi r23,r11,24
	ctx.r23.u64 = ctx.r11.u32 & 0xFF;
loc_830D3B04:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_830D3B10:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D3B1C"))) PPC_WEAK_FUNC(sub_830D3B1C);
PPC_FUNC_IMPL(__imp__sub_830D3B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D3B20"))) PPC_WEAK_FUNC(sub_830D3B20);
PPC_FUNC_IMPL(__imp__sub_830D3B20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x830D3B28;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,36(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x830d3b48
	if (cr6.lt) goto loc_830D3B48;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830D3B48:
	// lis r28,-31763
	ctx.r28.s64 = -2081619968;
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mulli r9,r31,8248
	ctx.r9.s64 = ctx.r31.s64 * 8248;
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f11,f13
	ctx.f11.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r24,84(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,-3564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// lwz r23,24(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,6132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r26,312(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lwz r27,292(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// addis r25,r9,1
	ctx.r25.s64 = ctx.r9.s64 + 65536;
	// addi r25,r25,-16600
	ctx.r25.s64 = ctx.r25.s64 + -16600;
	// bne cr6,0x830d3bb8
	if (!cr6.eq) goto loc_830D3BB8;
	// lwz r11,48(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// srawi r10,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// clrlwi r29,r10,31
	ctx.r29.u64 = ctx.r10.u32 & 0x1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830D3BB8:
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x830d3bd8
	if (!cr6.eq) goto loc_830D3BD8;
	// lwz r11,48(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// srawi r10,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// clrlwi r29,r10,31
	ctx.r29.u64 = ctx.r10.u32 & 0x1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830D3BD8:
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x830d3c04
	if (!cr6.eq) goto loc_830D3C04;
	// lwz r11,40(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// blt cr6,0x830d3bf0
	if (cr6.lt) goto loc_830D3BF0;
	// li r11,4
	ctx.r11.s64 = 4;
loc_830D3BF0:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r29,r11,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830D3C04:
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x830d3c34
	if (!cr6.eq) goto loc_830D3C34;
	// lwz r11,40(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// blt cr6,0x830d3c1c
	if (cr6.lt) goto loc_830D3C1C;
	// li r11,4
	ctx.r11.s64 = 4;
loc_830D3C1C:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r29,r10,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830D3C34:
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bne cr6,0x830d3c54
	if (!cr6.eq) goto loc_830D3C54;
	// lwz r11,48(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// srawi r10,r11,6
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 6;
	// clrlwi r29,r10,31
	ctx.r29.u64 = ctx.r10.u32 & 0x1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830D3C54:
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// bne cr6,0x830d3c74
	if (!cr6.eq) goto loc_830D3C74;
	// lwz r11,48(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// srawi r10,r11,9
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 9;
	// clrlwi r29,r10,31
	ctx.r29.u64 = ctx.r10.u32 & 0x1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830D3C74:
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// bne cr6,0x830d3ce0
	if (!cr6.eq) goto loc_830D3CE0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c710
	ctx.lr = 0x830D3C88;
	sub_82A0C710(ctx, base);
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,-30988
	ctx.r3.s64 = ctx.r3.s64 + -30988;
	// bl 0x82917b98
	ctx.lr = 0x830D3C98;
	sub_82917B98(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,32
	cr6.compare<uint32_t>(ctx.r3.u32, 32, xer);
	// bge cr6,0x830d3e74
	if (!cr6.lt) goto loc_830D3E74;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x830D3CB0;
	sub_82A0C738(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82a16248
	ctx.lr = 0x830D3CB8;
	sub_82A16248(ctx, base);
	// bl 0x83530640
	ctx.lr = 0x830D3CBC;
	sub_83530640(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,10
	ctx.r6.s64 = 10;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830d6bc8
	ctx.lr = 0x830D3CD4;
	sub_830D6BC8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830D3CE0:
	// cmpwi cr6,r10,7
	cr6.compare<int32_t>(ctx.r10.s32, 7, xer);
	// bne cr6,0x830d3d10
	if (!cr6.eq) goto loc_830D3D10;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1a878
	ctx.lr = 0x830D3CF4;
	sub_82A1A878(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x827b4418
	ctx.lr = 0x830D3D04;
	sub_827B4418(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830D3D10:
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// bne cr6,0x830d3d58
	if (!cr6.eq) goto loc_830D3D58;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1a878
	ctx.lr = 0x830D3D24;
	sub_82A1A878(ctx, base);
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// clrlwi r31,r3,24
	ctx.r31.u64 = ctx.r3.u32 & 0xFF;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1a878
	ctx.lr = 0x830D3D38;
	sub_82A1A878(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// subf r3,r10,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r10.s64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x827b4418
	ctx.lr = 0x830D3D4C;
	sub_827B4418(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830D3D58:
	// cmpwi cr6,r10,9
	cr6.compare<int32_t>(ctx.r10.s32, 9, xer);
	// bne cr6,0x830d3d78
	if (!cr6.eq) goto loc_830D3D78;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830e19a0
	ctx.lr = 0x830D3D6C;
	sub_830E19A0(ctx, base);
	// lbz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 24);
	// subf r3,r3,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r3.s64;
	// b 0x830d3e64
	goto loc_830D3E64;
loc_830D3D78:
	// cmpwi cr6,r10,10
	cr6.compare<int32_t>(ctx.r10.s32, 10, xer);
	// bne cr6,0x830d3d90
	if (!cr6.eq) goto loc_830D3D90;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830e19a0
	ctx.lr = 0x830D3D8C;
	sub_830E19A0(ctx, base);
	// b 0x830d3e64
	goto loc_830D3E64;
loc_830D3D90:
	// cmpwi cr6,r10,11
	cr6.compare<int32_t>(ctx.r10.s32, 11, xer);
	// bne cr6,0x830d3da8
	if (!cr6.eq) goto loc_830D3DA8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830e1898
	ctx.lr = 0x830D3DA4;
	sub_830E1898(ctx, base);
	// b 0x830d3e64
	goto loc_830D3E64;
loc_830D3DA8:
	// cmpwi cr6,r10,12
	cr6.compare<int32_t>(ctx.r10.s32, 12, xer);
	// bne cr6,0x830d3dc0
	if (!cr6.eq) goto loc_830D3DC0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a26a88
	ctx.lr = 0x830D3DB8;
	sub_82A26A88(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// b 0x830d3e64
	goto loc_830D3E64;
loc_830D3DC0:
	// cmpwi cr6,r10,13
	cr6.compare<int32_t>(ctx.r10.s32, 13, xer);
	// bne cr6,0x830d3dd8
	if (!cr6.eq) goto loc_830D3DD8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839a3228
	ctx.lr = 0x830D3DD4;
	sub_839A3228(ctx, base);
	// b 0x830d3e64
	goto loc_830D3E64;
loc_830D3DD8:
	// cmpwi cr6,r10,14
	cr6.compare<int32_t>(ctx.r10.s32, 14, xer);
	// bne cr6,0x830d3e74
	if (!cr6.eq) goto loc_830D3E74;
	// li r30,0
	ctx.r30.s64 = 0;
loc_830D3DE4:
	// cmplwi cr6,r30,32
	cr6.compare<uint32_t>(ctx.r30.u32, 32, xer);
	// bge cr6,0x830d3dfc
	if (!cr6.lt) goto loc_830D3DFC;
	// mulli r11,r30,208
	ctx.r11.s64 = ctx.r30.s64 * 208;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r31,r11,64
	ctx.r31.s64 = ctx.r11.s64 + 64;
	// b 0x830d3e00
	goto loc_830D3E00;
loc_830D3DFC:
	// addi r31,r25,6720
	ctx.r31.s64 = ctx.r25.s64 + 6720;
loc_830D3E00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8261a110
	ctx.lr = 0x830D3E08;
	sub_8261A110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d3e4c
	if (cr6.eq) goto loc_830D3E4C;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830d3e38
	if (cr6.eq) goto loc_830D3E38;
	// srawi r11,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830d3e3c
	if (!cr6.eq) goto loc_830D3E3C;
loc_830D3E38:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D3E3C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d3e4c
	if (cr6.eq) goto loc_830D3E4C;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
loc_830D3E4C:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x830d3de4
	if (cr6.lt) goto loc_830D3DE4;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_830D3E64:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x827b4488
	ctx.lr = 0x830D3E70;
	sub_827B4488(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_830D3E74:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D3E80"))) PPC_WEAK_FUNC(sub_830D3E80);
PPC_FUNC_IMPL(__imp__sub_830D3E80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830D3E88;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,36(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// bge cr6,0x830d3f68
	if (!cr6.lt) goto loc_830D3F68;
	// bl 0x830ff290
	ctx.lr = 0x830D3EA0;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x830D3EA4;
	sub_830FF988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d3f68
	if (cr6.eq) goto loc_830D3F68;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mulli r10,r29,8248
	ctx.r10.s64 = ctx.r29.s64 * 8248;
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// fctidz f11,f13
	ctx.f11.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r31,24(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,6132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r27,r10,1
	ctx.r27.s64 = ctx.r10.s64 + 65536;
	// addi r27,r27,-9664
	ctx.r27.s64 = ctx.r27.s64 + -9664;
	// bl 0x830ff290
	ctx.lr = 0x830D3EF4;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x830D3EF8;
	sub_830FFAA8(ctx, base);
	// addi r9,r3,-21
	ctx.r9.s64 = ctx.r3.s64 + -21;
	// li r3,0
	ctx.r3.s64 = 0;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bne cr6,0x830d3f34
	if (!cr6.eq) goto loc_830D3F34;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d3f6c
	if (cr6.eq) goto loc_830D3F6C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lbz r3,1(r27)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r27.u32 + 1);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x827b4488
	ctx.lr = 0x830D3F2C;
	sub_827B4488(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830D3F34:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x830d3f6c
	if (!cr6.eq) goto loc_830D3F6C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d3f6c
	if (cr6.eq) goto loc_830D3F6C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839a3228
	ctx.lr = 0x830D3F54;
	sub_839A3228(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x827b4488
	ctx.lr = 0x830D3F60;
	sub_827B4488(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830D3F68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830D3F6C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D3F74"))) PPC_WEAK_FUNC(sub_830D3F74);
PPC_FUNC_IMPL(__imp__sub_830D3F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D3F78"))) PPC_WEAK_FUNC(sub_830D3F78);
PPC_FUNC_IMPL(__imp__sub_830D3F78) {
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
	// lis r9,-31763
	ctx.r9.s64 = -2081619968;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f2,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lwz r5,24(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,-3564(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3564);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r8,6132(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6132);
	// lwz r9,312(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 312);
	// bne cr6,0x830d3fd4
	if (!cr6.eq) goto loc_830D3FD4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x830e6858
	ctx.lr = 0x830D3FC4;
	sub_830E6858(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830D3FD4:
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x830d3ff4
	if (!cr6.eq) goto loc_830D3FF4;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82a269d0
	ctx.lr = 0x830D3FE4;
	sub_82A269D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830D3FF4:
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x830d4014
	if (!cr6.eq) goto loc_830D4014;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82a269e0
	ctx.lr = 0x830D4004;
	sub_82A269E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830D4014:
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x830d4034
	if (!cr6.eq) goto loc_830D4034;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82a269f8
	ctx.lr = 0x830D4024;
	sub_82A269F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830D4034:
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bne cr6,0x830d4058
	if (!cr6.eq) goto loc_830D4058;
	// lbz r11,97(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 97);
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
loc_830D4058:
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// bne cr6,0x830d407c
	if (!cr6.eq) goto loc_830D407C;
	// lbz r11,98(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 98);
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
loc_830D407C:
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// bne cr6,0x830d40a4
	if (!cr6.eq) goto loc_830D40A4;
	// lwz r11,24356(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24356);
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830D40A4:
	// cmpwi cr6,r10,7
	cr6.compare<int32_t>(ctx.r10.s32, 7, xer);
	// bne cr6,0x830d40c4
	if (!cr6.eq) goto loc_830D40C4;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x830ea3d8
	ctx.lr = 0x830D40B4;
	sub_830EA3D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830D40C4:
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// bne cr6,0x830d40e4
	if (!cr6.eq) goto loc_830D40E4;
	// bl 0x830ff290
	ctx.lr = 0x830D40D0;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x830D40D4;
	sub_830FF988(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830D40E4:
	// cmpwi cr6,r10,9
	cr6.compare<int32_t>(ctx.r10.s32, 9, xer);
	// bne cr6,0x830d412c
	if (!cr6.eq) goto loc_830D412C;
	// bl 0x830ff290
	ctx.lr = 0x830D40F0;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x830D40F4;
	sub_830FF988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d4114
	if (cr6.eq) goto loc_830D4114;
	// bl 0x830ff290
	ctx.lr = 0x830D4104;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x830D4108;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830d4118
	if (cr6.eq) goto loc_830D4118;
loc_830D4114:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D4118:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830D412C:
	// cmpwi cr6,r10,10
	cr6.compare<int32_t>(ctx.r10.s32, 10, xer);
	// bne cr6,0x830d4150
	if (!cr6.eq) goto loc_830D4150;
	// lbz r11,104(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 104);
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
loc_830D4150:
	// cmpwi cr6,r10,11
	cr6.compare<int32_t>(ctx.r10.s32, 11, xer);
	// bne cr6,0x830d4160
	if (!cr6.eq) goto loc_830D4160;
	// lfs f1,84(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x830b16d8
	ctx.lr = 0x830D4160;
	sub_830B16D8(ctx, base);
loc_830D4160:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D4170"))) PPC_WEAK_FUNC(sub_830D4170);
PPC_FUNC_IMPL(__imp__sub_830D4170) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a25b68
	ctx.lr = 0x830D4198;
	sub_82A25B68(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bge cr6,0x830d41b0
	if (!cr6.lt) goto loc_830D41B0;
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x830d41bc
	if (cr6.lt) goto loc_830D41BC;
loc_830D41B0:
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// lwz r11,26624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26624);
	// b 0x830d41cc
	goto loc_830D41CC;
loc_830D41BC:
	// mulli r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 * 52;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
loc_830D41CC:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_830D41EC"))) PPC_WEAK_FUNC(sub_830D41EC);
PPC_FUNC_IMPL(__imp__sub_830D41EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D41F0"))) PPC_WEAK_FUNC(sub_830D41F0);
PPC_FUNC_IMPL(__imp__sub_830D41F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830D41F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31763
	ctx.r28.s64 = -2081619968;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r11,-3564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// lwz r4,6132(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// bl 0x82a26a50
	ctx.lr = 0x830D421C;
	sub_82A26A50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830ae738
	ctx.lr = 0x830D422C;
	sub_830AE738(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825832f8
	ctx.lr = 0x830D4234;
	sub_825832F8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830ae738
	ctx.lr = 0x830D4240;
	sub_830AE738(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83131d70
	ctx.lr = 0x830D4248;
	sub_83131D70(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_830D424C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x830D4258;
	sub_82A0C738(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a16188
	ctx.lr = 0x830D4260;
	sub_82A16188(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,32
	cr6.compare<int32_t>(ctx.r3.s32, 32, xer);
	// bge cr6,0x830d42c8
	if (!cr6.lt) goto loc_830D42C8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x830D4278;
	sub_82A0C738(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a16248
	ctx.lr = 0x830D4280;
	sub_82A16248(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82be4eb8
	ctx.lr = 0x830D428C;
	sub_82BE4EB8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830ae738
	ctx.lr = 0x830D4298;
	sub_830AE738(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830af800
	ctx.lr = 0x830D42A0;
	sub_830AF800(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82583300
	ctx.lr = 0x830D42A8;
	sub_82583300(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ld r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x830ae738
	ctx.lr = 0x830D42B8;
	sub_830AE738(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830af800
	ctx.lr = 0x830D42C0;
	sub_830AF800(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8387a780
	ctx.lr = 0x830D42C8;
	sub_8387A780(ctx, base);
loc_830D42C8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,23
	cr6.compare<int32_t>(ctx.r30.s32, 23, xer);
	// blt cr6,0x830d424c
	if (cr6.lt) goto loc_830D424C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D42DC"))) PPC_WEAK_FUNC(sub_830D42DC);
PPC_FUNC_IMPL(__imp__sub_830D42DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D42E0"))) PPC_WEAK_FUNC(sub_830D42E0);
PPC_FUNC_IMPL(__imp__sub_830D42E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830D42E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mulli r8,r6,8248
	ctx.r8.s64 = ctx.r6.s64 * 8248;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r9,6132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// rlwinm r7,r6,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r3,r10,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addis r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 65536;
	// subfc r6,r10,r6
	xer.ca = ctx.r6.u32 >= ctx.r10.u32;
	ctx.r6.s64 = ctx.r6.s64 - ctx.r10.s64;
	// addi r11,r11,-16600
	ctx.r11.s64 = ctx.r11.s64 + -16600;
	// subfe r10,r7,r3
	temp.u8 = (~ctx.r7.u32 + ctx.r3.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r7.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r31,r11,7664
	ctx.r31.s64 = ctx.r11.s64 + 7664;
	// bl 0x82a26a50
	ctx.lr = 0x830D433C;
	sub_82A26A50(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x830d4170
	ctx.lr = 0x830D4350;
	sub_830D4170(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830ae770
	ctx.lr = 0x830D435C;
	sub_830AE770(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825832f8
	ctx.lr = 0x830D4368;
	sub_825832F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a25b68
	ctx.lr = 0x830D4374;
	sub_82A25B68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830ae770
	ctx.lr = 0x830D4384;
	sub_830AE770(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83131d70
	ctx.lr = 0x830D438C;
	sub_83131D70(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D4394"))) PPC_WEAK_FUNC(sub_830D4394);
PPC_FUNC_IMPL(__imp__sub_830D4394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D4398"))) PPC_WEAK_FUNC(sub_830D4398);
PPC_FUNC_IMPL(__imp__sub_830D4398) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830D43A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mulli r8,r6,8248
	ctx.r8.s64 = ctx.r6.s64 * 8248;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r9,6132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// rlwinm r7,r6,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r3,r10,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addis r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 65536;
	// subfc r6,r10,r6
	xer.ca = ctx.r6.u32 >= ctx.r10.u32;
	ctx.r6.s64 = ctx.r6.s64 - ctx.r10.s64;
	// addi r11,r11,-16600
	ctx.r11.s64 = ctx.r11.s64 + -16600;
	// subfe r10,r7,r3
	temp.u8 = (~ctx.r7.u32 + ctx.r3.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r7.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r31,r11,7996
	ctx.r31.s64 = ctx.r11.s64 + 7996;
	// bl 0x82a26a50
	ctx.lr = 0x830D43F4;
	sub_82A26A50(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x830d4170
	ctx.lr = 0x830D4408;
	sub_830D4170(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830ae7b0
	ctx.lr = 0x830D4414;
	sub_830AE7B0(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825832f8
	ctx.lr = 0x830D4420;
	sub_825832F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a25b68
	ctx.lr = 0x830D442C;
	sub_82A25B68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830ae7b0
	ctx.lr = 0x830D443C;
	sub_830AE7B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83131d70
	ctx.lr = 0x830D4444;
	sub_83131D70(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D444C"))) PPC_WEAK_FUNC(sub_830D444C);
PPC_FUNC_IMPL(__imp__sub_830D444C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D4450"))) PPC_WEAK_FUNC(sub_830D4450);
PPC_FUNC_IMPL(__imp__sub_830D4450) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830D4458;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_830D446C:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830d41f0
	ctx.lr = 0x830D4480;
	sub_830D41F0(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830d42e0
	ctx.lr = 0x830D4494;
	sub_830D42E0(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830d4398
	ctx.lr = 0x830D44A8;
	sub_830D4398(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x830d446c
	if (cr6.lt) goto loc_830D446C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D44BC"))) PPC_WEAK_FUNC(sub_830D44BC);
PPC_FUNC_IMPL(__imp__sub_830D44BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D44C0"))) PPC_WEAK_FUNC(sub_830D44C0);
PPC_FUNC_IMPL(__imp__sub_830D44C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830D44C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r11,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r10,26780(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26780);
	// rlwinm r9,r10,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x830d4508
	if (!cr6.eq) goto loc_830D4508;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r8,r11,14
	ctx.r8.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x830d450c
	if (cr6.eq) goto loc_830D450C;
loc_830D4508:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D450C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830d4550
	if (!cr6.eq) goto loc_830D4550;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r8,r11,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x830d453c
	if (!cr6.eq) goto loc_830D453C;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830d4540
	if (cr6.eq) goto loc_830D4540;
loc_830D453C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D4540:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x830d4554
	if (cr6.eq) goto loc_830D4554;
loc_830D4550:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830D4554:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d456c
	if (cr6.eq) goto loc_830D456C;
loc_830D4560:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830D456C:
	// lhz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 44);
	// bl 0x830e9be0
	ctx.lr = 0x830D4574;
	sub_830E9BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830d4614
	if (!cr6.eq) goto loc_830D4614;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x830ea6a8
	ctx.lr = 0x830D458C;
	sub_830EA6A8(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// srawi r10,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830d45a8
	if (cr6.eq) goto loc_830D45A8;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x830d45b0
	goto loc_830D45B0;
loc_830D45A8:
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// clrlwi r30,r11,31
	ctx.r30.u64 = ctx.r11.u32 & 0x1;
loc_830D45B0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x830aecb0
	ctx.lr = 0x830D45BC;
	sub_830AECB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830d4614
	if (cr6.eq) goto loc_830D4614;
loc_830D45C4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830aecc8
	ctx.lr = 0x830D45D0;
	sub_830AECC8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x830d4600
	if (!cr6.eq) goto loc_830D4600;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830aecc8
	ctx.lr = 0x830D45F0;
	sub_830AECC8(ctx, base);
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x830d4560
	if (cr6.eq) goto loc_830D4560;
loc_830D4600:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x830aecb0
	ctx.lr = 0x830D460C;
	sub_830AECB0(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x830d45c4
	if (cr6.lt) goto loc_830D45C4;
loc_830D4614:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D4620"))) PPC_WEAK_FUNC(sub_830D4620);
PPC_FUNC_IMPL(__imp__sub_830D4620) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830D4628;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// bge cr6,0x830d4690
	if (!cr6.lt) goto loc_830D4690;
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,26676
	ctx.r9.s64 = ctx.r11.s64 + 26676;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwzx r29,r10,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// beq cr6,0x830d466c
	if (cr6.eq) goto loc_830D466C;
	// bl 0x830fe878
	ctx.lr = 0x830D465C;
	sub_830FE878(ctx, base);
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// addi r11,r8,-3240
	ctx.r11.s64 = ctx.r8.s64 + -3240;
	// addi r5,r11,-12
	ctx.r5.s64 = ctx.r11.s64 + -12;
	// b 0x830d467c
	goto loc_830D467C;
loc_830D466C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830fe878
	ctx.lr = 0x830D4674;
	sub_830FE878(ctx, base);
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// addi r5,r8,-3240
	ctx.r5.s64 = ctx.r8.s64 + -3240;
loc_830D467C:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d0b08
	ctx.lr = 0x830D4690;
	sub_831D0B08(ctx, base);
loc_830D4690:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D4698"))) PPC_WEAK_FUNC(sub_830D4698);
PPC_FUNC_IMPL(__imp__sub_830D4698) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830D46A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// bl 0x830aba88
	ctx.lr = 0x830D46C4;
	sub_830ABA88(ctx, base);
	// rlwinm r11,r3,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// subfc r10,r31,r11
	xer.ca = ctx.r11.u32 >= ctx.r31.u32;
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r10,r8,31
	ctx.r10.u64 = ctx.r8.u32 & 0x1;
	// ble cr6,0x830d46e0
	if (!cr6.gt) goto loc_830D46E0;
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
loc_830D46E0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// beq cr6,0x830d46f8
	if (cr6.eq) goto loc_830D46F8;
	// lwz r30,26660(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26660);
	// b 0x830d4700
	goto loc_830D4700;
loc_830D46F8:
	// addi r9,r11,26660
	ctx.r9.s64 = ctx.r11.s64 + 26660;
	// lwz r30,4(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
loc_830D4700:
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,26684
	ctx.r9.s64 = ctx.r11.s64 + 26684;
	// lwzx r29,r10,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x830fe878
	ctx.lr = 0x830D4718;
	sub_830FE878(ctx, base);
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r8,-3208
	ctx.r5.s64 = ctx.r8.s64 + -3208;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// bl 0x831d0b08
	ctx.lr = 0x830D4740;
	sub_831D0B08(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D4748"))) PPC_WEAK_FUNC(sub_830D4748);
PPC_FUNC_IMPL(__imp__sub_830D4748) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830D4750;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// bl 0x830aba88
	ctx.lr = 0x830D4770;
	sub_830ABA88(ctx, base);
	// rlwinm r11,r3,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// subfc r10,r31,r11
	xer.ca = ctx.r11.u32 >= ctx.r31.u32;
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r10,r8,31
	ctx.r10.u64 = ctx.r8.u32 & 0x1;
	// ble cr6,0x830d478c
	if (!cr6.gt) goto loc_830D478C;
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
loc_830D478C:
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,26692
	ctx.r9.s64 = ctx.r11.s64 + 26692;
	// lwzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x830fe878
	ctx.lr = 0x830D47A4;
	sub_830FE878(ctx, base);
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r8,-3168
	ctx.r5.s64 = ctx.r8.s64 + -3168;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// bl 0x831d0b08
	ctx.lr = 0x830D47C8;
	sub_831D0B08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D47D0"))) PPC_WEAK_FUNC(sub_830D47D0);
PPC_FUNC_IMPL(__imp__sub_830D47D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x830D47D8;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// bl 0x830abb28
	ctx.lr = 0x830D4804;
	sub_830ABB28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d49a0
	if (cr6.eq) goto loc_830D49A0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r20,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r20.u64 = ~ctx.r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x830fe878
	ctx.lr = 0x830D4820;
	sub_830FE878(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x830abb68
	ctx.lr = 0x830D482C;
	sub_830ABB68(ctx, base);
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// beq cr6,0x830d4848
	if (cr6.eq) goto loc_830D4848;
	// lwz r24,26660(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26660);
	// b 0x830d4850
	goto loc_830D4850;
loc_830D4848:
	// addi r10,r11,26660
	ctx.r10.s64 = ctx.r11.s64 + 26660;
	// lwz r24,4(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_830D4850:
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// cmpwi cr6,r25,12
	cr6.compare<int32_t>(ctx.r25.s32, 12, xer);
	// addi r26,r11,-3380
	ctx.r26.s64 = ctx.r11.s64 + -3380;
	// bne cr6,0x830d4878
	if (!cr6.eq) goto loc_830D4878;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d4620
	ctx.lr = 0x830D4874;
	sub_830D4620(ctx, base);
	// b 0x830d48f0
	goto loc_830D48F0;
loc_830D4878:
	// cmpwi cr6,r25,18
	cr6.compare<int32_t>(ctx.r25.s32, 18, xer);
	// bne cr6,0x830d48ac
	if (!cr6.eq) goto loc_830D48AC;
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d48ac
	if (cr6.eq) goto loc_830D48AC;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d4698
	ctx.lr = 0x830D48A8;
	sub_830D4698(ctx, base);
	// b 0x830d48f0
	goto loc_830D48F0;
loc_830D48AC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x830aba18
	ctx.lr = 0x830D48B4;
	sub_830ABA18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x830d48e8
	if (cr6.eq) goto loc_830D48E8;
	// addi r5,r26,-80
	ctx.r5.s64 = ctx.r26.s64 + -80;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// bl 0x831d0b08
	ctx.lr = 0x830D48E4;
	sub_831D0B08(ctx, base);
	// b 0x830d48f0
	goto loc_830D48F0;
loc_830D48E8:
	// addi r5,r26,-60
	ctx.r5.s64 = ctx.r26.s64 + -60;
	// bl 0x831d0b08
	ctx.lr = 0x830D48F0;
	sub_831D0B08(ctx, base);
loc_830D48F0:
	// cmplwi cr6,r22,1
	cr6.compare<uint32_t>(ctx.r22.u32, 1, xer);
	// bne cr6,0x830d49e8
	if (!cr6.eq) goto loc_830D49E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830eb240
	ctx.lr = 0x830D4900;
	sub_830EB240(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830d49e8
	if (!cr6.eq) goto loc_830D49E8;
	// cmpwi cr6,r25,3
	cr6.compare<int32_t>(ctx.r25.s32, 3, xer);
	// beq cr6,0x830d4970
	if (cr6.eq) goto loc_830D4970;
	// cmpwi cr6,r25,7
	cr6.compare<int32_t>(ctx.r25.s32, 7, xer);
	// beq cr6,0x830d4970
	if (cr6.eq) goto loc_830D4970;
	// cmpwi cr6,r25,8
	cr6.compare<int32_t>(ctx.r25.s32, 8, xer);
	// beq cr6,0x830d4970
	if (cr6.eq) goto loc_830D4970;
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830d49e8
	if (!cr6.eq) goto loc_830D49E8;
	// cmpwi cr6,r25,34
	cr6.compare<int32_t>(ctx.r25.s32, 34, xer);
	// beq cr6,0x830d4940
	if (cr6.eq) goto loc_830D4940;
	// cmpwi cr6,r25,35
	cr6.compare<int32_t>(ctx.r25.s32, 35, xer);
	// bne cr6,0x830d49e8
	if (!cr6.eq) goto loc_830D49E8;
loc_830D4940:
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(ctx.r19.s32, 0, xer);
	// addi r8,r26,-28
	ctx.r8.s64 = ctx.r26.s64 + -28;
	// beq cr6,0x830d4950
	if (cr6.eq) goto loc_830D4950;
	// addi r8,r26,-20
	ctx.r8.s64 = ctx.r26.s64 + -20;
loc_830D4950:
	// addi r5,r26,-12
	ctx.r5.s64 = ctx.r26.s64 + -12;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d0b08
	ctx.lr = 0x830D4968;
	sub_831D0B08(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_830D4970:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x830abb68
	ctx.lr = 0x830D4978;
	sub_830ABB68(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r5,r26,-44
	ctx.r5.s64 = ctx.r26.s64 + -44;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d0b08
	ctx.lr = 0x830D4998;
	sub_831D0B08(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_830D49A0:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// beq cr6,0x830d49b8
	if (cr6.eq) goto loc_830D49B8;
	// lwz r29,26668(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26668);
	// b 0x830d49c0
	goto loc_830D49C0;
loc_830D49B8:
	// addi r10,r11,26668
	ctx.r10.s64 = ctx.r11.s64 + 26668;
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_830D49C0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x830abb68
	ctx.lr = 0x830D49C8;
	sub_830ABB68(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,-3380
	ctx.r5.s64 = ctx.r11.s64 + -3380;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d0b08
	ctx.lr = 0x830D49E8;
	sub_831D0B08(ctx, base);
loc_830D49E8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D49F0"))) PPC_WEAK_FUNC(sub_830D49F0);
PPC_FUNC_IMPL(__imp__sub_830D49F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x830D49F8;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// bl 0x830abb28
	ctx.lr = 0x830D4A20;
	sub_830ABB28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d4b90
	if (cr6.eq) goto loc_830D4B90;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r22,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r22.u64 = ~ctx.r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x830fe878
	ctx.lr = 0x830D4A3C;
	sub_830FE878(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830abb68
	ctx.lr = 0x830D4A48;
	sub_830ABB68(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,12
	cr6.compare<int32_t>(ctx.r26.s32, 12, xer);
	// addi r27,r11,-3296
	ctx.r27.s64 = ctx.r11.s64 + -3296;
	// bne cr6,0x830d4a74
	if (!cr6.eq) goto loc_830D4A74;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830d4620
	ctx.lr = 0x830D4A70;
	sub_830D4620(ctx, base);
	// b 0x830d4ae4
	goto loc_830D4AE4;
loc_830D4A74:
	// cmpwi cr6,r26,18
	cr6.compare<int32_t>(ctx.r26.s32, 18, xer);
	// bne cr6,0x830d4aa4
	if (!cr6.eq) goto loc_830D4AA4;
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d4aa4
	if (cr6.eq) goto loc_830D4AA4;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830d4748
	ctx.lr = 0x830D4AA0;
	sub_830D4748(ctx, base);
	// b 0x830d4ae4
	goto loc_830D4AE4;
loc_830D4AA4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830aba18
	ctx.lr = 0x830D4AAC;
	sub_830ABA18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x830d4adc
	if (cr6.eq) goto loc_830D4ADC;
	// addi r5,r27,-72
	ctx.r5.s64 = ctx.r27.s64 + -72;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// bl 0x831d0b08
	ctx.lr = 0x830D4AD8;
	sub_831D0B08(ctx, base);
	// b 0x830d4ae4
	goto loc_830D4AE4;
loc_830D4ADC:
	// addi r5,r27,-52
	ctx.r5.s64 = ctx.r27.s64 + -52;
	// bl 0x831d0b08
	ctx.lr = 0x830D4AE4;
	sub_831D0B08(ctx, base);
loc_830D4AE4:
	// cmplwi cr6,r23,1
	cr6.compare<uint32_t>(ctx.r23.u32, 1, xer);
	// bne cr6,0x830d4bb4
	if (!cr6.eq) goto loc_830D4BB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830eb240
	ctx.lr = 0x830D4AF4;
	sub_830EB240(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830d4bb4
	if (!cr6.eq) goto loc_830D4BB4;
	// cmpwi cr6,r26,3
	cr6.compare<int32_t>(ctx.r26.s32, 3, xer);
	// beq cr6,0x830d4b64
	if (cr6.eq) goto loc_830D4B64;
	// cmpwi cr6,r26,7
	cr6.compare<int32_t>(ctx.r26.s32, 7, xer);
	// beq cr6,0x830d4b64
	if (cr6.eq) goto loc_830D4B64;
	// cmpwi cr6,r26,8
	cr6.compare<int32_t>(ctx.r26.s32, 8, xer);
	// beq cr6,0x830d4b64
	if (cr6.eq) goto loc_830D4B64;
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830d4bb4
	if (!cr6.eq) goto loc_830D4BB4;
	// cmpwi cr6,r26,34
	cr6.compare<int32_t>(ctx.r26.s32, 34, xer);
	// beq cr6,0x830d4b34
	if (cr6.eq) goto loc_830D4B34;
	// cmpwi cr6,r26,35
	cr6.compare<int32_t>(ctx.r26.s32, 35, xer);
	// bne cr6,0x830d4bb4
	if (!cr6.eq) goto loc_830D4BB4;
loc_830D4B34:
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, xer);
	// addi r8,r27,-28
	ctx.r8.s64 = ctx.r27.s64 + -28;
	// beq cr6,0x830d4b44
	if (cr6.eq) goto loc_830D4B44;
	// addi r8,r27,-20
	ctx.r8.s64 = ctx.r27.s64 + -20;
loc_830D4B44:
	// addi r5,r27,-12
	ctx.r5.s64 = ctx.r27.s64 + -12;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d0b08
	ctx.lr = 0x830D4B5C;
	sub_831D0B08(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_830D4B64:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x830abb68
	ctx.lr = 0x830D4B6C;
	sub_830ABB68(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r5,r27,-40
	ctx.r5.s64 = ctx.r27.s64 + -40;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d0b08
	ctx.lr = 0x830D4B88;
	sub_831D0B08(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_830D4B90:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830abb68
	ctx.lr = 0x830D4B98;
	sub_830ABB68(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,-3296
	ctx.r5.s64 = ctx.r11.s64 + -3296;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// bl 0x831d0b08
	ctx.lr = 0x830D4BB4;
	sub_831D0B08(ctx, base);
loc_830D4BB4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D4BBC"))) PPC_WEAK_FUNC(sub_830D4BBC);
PPC_FUNC_IMPL(__imp__sub_830D4BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D4BC0"))) PPC_WEAK_FUNC(sub_830D4BC0);
PPC_FUNC_IMPL(__imp__sub_830D4BC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x830D4BC8;
	__savegprlr_21(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// bl 0x830aba88
	ctx.lr = 0x830D4BEC;
	sub_830ABA88(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x830d4d74
	if (cr6.lt) goto loc_830D4D74;
	// li r23,15
	ctx.r23.s64 = 15;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r21,2
	ctx.r21.s64 = 2;
loc_830D4C00:
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x831cdcf0
	ctx.lr = 0x830D4C10;
	sub_831CDCF0(ctx, base);
	// lhz r3,44(r25)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r25.u32 + 44);
	// bl 0x830e9be0
	ctx.lr = 0x830D4C18;
	sub_830E9BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d4c54
	if (cr6.eq) goto loc_830D4C54;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r31,44(r25)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r25.u32 + 44);
	// bl 0x831f8200
	ctx.lr = 0x830D4C30;
	sub_831F8200(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// bl 0x830d49f0
	ctx.lr = 0x830D4C50;
	sub_830D49F0(ctx, base);
	// b 0x830d4cb4
	goto loc_830D4CB4;
loc_830D4C54:
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// clrlwi r3,r11,14
	ctx.r3.u64 = ctx.r11.u32 & 0x3FFFF;
	// bl 0x830ea6a0
	ctx.lr = 0x830D4C60;
	sub_830EA6A0(ctx, base);
	// lwz r11,48(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// srawi r10,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830d4c80
	if (cr6.eq) goto loc_830D4C80;
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x830d4c88
	goto loc_830D4C88;
loc_830D4C80:
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// clrlwi r31,r11,31
	ctx.r31.u64 = ctx.r11.u32 & 0x1;
loc_830D4C88:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831f8200
	ctx.lr = 0x830D4C90;
	sub_831F8200(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// bl 0x830d47d0
	ctx.lr = 0x830D4CB4;
	sub_830D47D0(ctx, base);
loc_830D4CB4:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x830eb240
	ctx.lr = 0x830D4CBC;
	sub_830EB240(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d4d60
	if (cr6.eq) goto loc_830D4D60;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830d51f8
	ctx.lr = 0x830D4CD8;
	sub_830D51F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830d4d60
	if (!cr6.eq) goto loc_830D4D60;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r24,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r24.u8);
loc_830D4CF8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x830d4cf8
	if (!cr6.eq) goto loc_830D4CF8;
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
	ctx.lr = 0x830D4D20;
	sub_8259CC28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830af7d8
	ctx.lr = 0x830D4D2C;
	sub_830AF7D8(ctx, base);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8291fdc8
	ctx.lr = 0x830D4D38;
	sub_8291FDC8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x830d4d54
	if (cr6.lt) goto loc_830D4D54;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x830D4D54;
	sub_825952B8(ctx, base);
loc_830D4D54:
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// stb r24,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r24.u8);
loc_830D4D60:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// bl 0x830aba88
	ctx.lr = 0x830D4D6C;
	sub_830ABA88(ctx, base);
	// cmplw cr6,r27,r3
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, xer);
	// ble cr6,0x830d4c00
	if (!cr6.gt) goto loc_830D4C00;
loc_830D4D74:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830af7d8
	ctx.lr = 0x830D4D80;
	sub_830AF7D8(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// li r10,28
	ctx.r10.s64 = 28;
	// addi r3,r26,4
	ctx.r3.s64 = ctx.r26.s64 + 4;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// divw r4,r7,r10
	ctx.r4.s32 = PPCDivide(ctx.r7.s32, ctx.r10.s32);
	// bl 0x830fe218
	ctx.lr = 0x830D4DA0;
	sub_830FE218(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830af7d8
	ctx.lr = 0x830D4DB0;
	sub_830AF7D8(ctx, base);
	// stb r31,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r31.u8);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D4DBC"))) PPC_WEAK_FUNC(sub_830D4DBC);
PPC_FUNC_IMPL(__imp__sub_830D4DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D4DC0"))) PPC_WEAK_FUNC(sub_830D4DC0);
PPC_FUNC_IMPL(__imp__sub_830D4DC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x830D4DC8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-31763
	ctx.r26.s64 = -2081619968;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mulli r29,r7,8248
	ctx.r29.s64 = ctx.r7.s64 * 8248;
	// lwz r10,-3564(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// lwz r10,6132(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6132);
	// lis r9,0
	ctx.r9.s64 = 0;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// subfc r8,r11,r7
	xer.ca = ctx.r7.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r7.s64 - ctx.r11.s64;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r6,r29,r10
	ctx.r6.u64 = ctx.r29.u64 + ctx.r10.u64;
	// ori r30,r9,48936
	ctx.r30.u64 = ctx.r9.u64 | 48936;
	// rlwinm r5,r31,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// subfe r3,r5,r7
	temp.u8 = (~ctx.r5.u32 + ctx.r7.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r5.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// add r4,r6,r30
	ctx.r4.u64 = ctx.r6.u64 + ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// and r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 & ctx.r4.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830d44c0
	ctx.lr = 0x830D4E20;
	sub_830D44C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830d4e88
	if (!cr6.eq) goto loc_830D4E88;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r24,r29,r11
	ctx.r24.u64 = ctx.r29.u64 + ctx.r11.u64;
loc_830D4E38:
	// lwz r10,-3564(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r9,r31,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// subfc r8,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r31.s64 - ctx.r11.s64;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r29,6132(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6132);
	// subfe r23,r9,r7
	temp.u8 = (~ctx.r9.u32 + ctx.r7.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r23.u64 = ~ctx.r9.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x830ae738
	ctx.lr = 0x830D4E60;
	sub_830AE738(ctx, base);
	// add r6,r24,r29
	ctx.r6.u64 = ctx.r24.u64 + ctx.r29.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// and r5,r23,r6
	ctx.r5.u64 = ctx.r23.u64 & ctx.r6.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x830d4bc0
	ctx.lr = 0x830D4E7C;
	sub_830D4BC0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,41
	cr6.compare<int32_t>(ctx.r30.s32, 41, xer);
	// blt cr6,0x830d4e38
	if (cr6.lt) goto loc_830D4E38;
loc_830D4E88:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D4E90"))) PPC_WEAK_FUNC(sub_830D4E90);
PPC_FUNC_IMPL(__imp__sub_830D4E90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830D4E98;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mulli r9,r7,8248
	ctx.r9.s64 = ctx.r7.s64 * 8248;
	// lwz r10,-3564(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r10,6132(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6132);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// rlwinm r8,r7,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// subfc r7,r11,r7
	xer.ca = ctx.r7.u32 >= ctx.r11.u32;
	ctx.r7.s64 = ctx.r7.s64 - ctx.r11.s64;
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addis r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 65536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// subfe r3,r8,r6
	temp.u8 = (~ctx.r8.u32 + ctx.r6.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,-16600
	ctx.r11.s64 = ctx.r11.s64 + -16600;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// and r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 & ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r30,r11,7664
	ctx.r30.s64 = ctx.r11.s64 + 7664;
	// bl 0x830ae770
	ctx.lr = 0x830D4EF0;
	sub_830AE770(ctx, base);
	// bl 0x831f8200
	ctx.lr = 0x830D4EF4;
	sub_831F8200(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// blt cr6,0x830d4f04
	if (cr6.lt) goto loc_830D4F04;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// b 0x830d4f10
	goto loc_830D4F10;
loc_830D4F04:
	// mulli r11,r3,52
	ctx.r11.s64 = ctx.r3.s64 * 52;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
loc_830D4F10:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830d44c0
	ctx.lr = 0x830D4F20;
	sub_830D44C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830d4f50
	if (!cr6.eq) goto loc_830D4F50;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830ae770
	ctx.lr = 0x830D4F38;
	sub_830AE770(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// bl 0x830d4bc0
	ctx.lr = 0x830D4F50;
	sub_830D4BC0(ctx, base);
loc_830D4F50:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D4F58"))) PPC_WEAK_FUNC(sub_830D4F58);
PPC_FUNC_IMPL(__imp__sub_830D4F58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830D4F60;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mulli r9,r7,8248
	ctx.r9.s64 = ctx.r7.s64 * 8248;
	// lwz r10,-3564(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r10,6132(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6132);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// rlwinm r8,r7,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// subfc r7,r11,r7
	xer.ca = ctx.r7.u32 >= ctx.r11.u32;
	ctx.r7.s64 = ctx.r7.s64 - ctx.r11.s64;
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addis r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 65536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// subfe r3,r8,r6
	temp.u8 = (~ctx.r8.u32 + ctx.r6.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,-16600
	ctx.r11.s64 = ctx.r11.s64 + -16600;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// and r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 & ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r30,r11,7996
	ctx.r30.s64 = ctx.r11.s64 + 7996;
	// bl 0x830ae7b0
	ctx.lr = 0x830D4FB8;
	sub_830AE7B0(ctx, base);
	// bl 0x831f8200
	ctx.lr = 0x830D4FBC;
	sub_831F8200(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// blt cr6,0x830d4fcc
	if (cr6.lt) goto loc_830D4FCC;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// b 0x830d4fd8
	goto loc_830D4FD8;
loc_830D4FCC:
	// mulli r11,r3,52
	ctx.r11.s64 = ctx.r3.s64 * 52;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
loc_830D4FD8:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830d44c0
	ctx.lr = 0x830D4FE8;
	sub_830D44C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830d5018
	if (!cr6.eq) goto loc_830D5018;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830ae7b0
	ctx.lr = 0x830D5000;
	sub_830AE7B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// bl 0x830d4bc0
	ctx.lr = 0x830D5018;
	sub_830D4BC0(ctx, base);
loc_830D5018:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D5020"))) PPC_WEAK_FUNC(sub_830D5020);
PPC_FUNC_IMPL(__imp__sub_830D5020) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830D5028;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_830D5040:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830d4dc0
	ctx.lr = 0x830D5058;
	sub_830D4DC0(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830d4e90
	ctx.lr = 0x830D5070;
	sub_830D4E90(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830d4f58
	ctx.lr = 0x830D5088;
	sub_830D4F58(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x830d5040
	if (cr6.lt) goto loc_830D5040;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D509C"))) PPC_WEAK_FUNC(sub_830D509C);
PPC_FUNC_IMPL(__imp__sub_830D509C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D50A0"))) PPC_WEAK_FUNC(sub_830D50A0);
PPC_FUNC_IMPL(__imp__sub_830D50A0) {
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
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x830fe1b0
	ctx.lr = 0x830D50C0;
	sub_830FE1B0(ctx, base);
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

__attribute__((alias("__imp__sub_830D50D8"))) PPC_WEAK_FUNC(sub_830D50D8);
PPC_FUNC_IMPL(__imp__sub_830D50D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x830fe208
	sub_830FE208(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D50E0"))) PPC_WEAK_FUNC(sub_830D50E0);
PPC_FUNC_IMPL(__imp__sub_830D50E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830D50E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r5,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r5.u64);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// bne cr6,0x830d511c
	if (!cr6.eq) goto loc_830D511C;
	// addi r10,r11,26868
	ctx.r10.s64 = ctx.r11.s64 + 26868;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x830d5148
	goto loc_830D5148;
loc_830D511C:
	// addi r11,r11,26868
	ctx.r11.s64 = ctx.r11.s64 + 26868;
	// lhz r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 160);
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x830d5140
	if (!cr6.eq) goto loc_830D5140;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830d5144
	if (cr6.eq) goto loc_830D5144;
loc_830D5140:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D5144:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_830D5148:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830d51e8
	if (!cr6.eq) goto loc_830D51E8;
	// cmpwi cr6,r6,32
	cr6.compare<int32_t>(ctx.r6.s32, 32, xer);
	// bge cr6,0x830d51e8
	if (!cr6.lt) goto loc_830D51E8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830ea648
	ctx.lr = 0x830D5168;
	sub_830EA648(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830ea690
	ctx.lr = 0x830D5170;
	sub_830EA690(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm r29,r10,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x830aecd8
	ctx.lr = 0x830D5188;
	sub_830AECD8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830d51dc
	if (cr6.eq) goto loc_830D51DC;
loc_830D5190:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830aecf0
	ctx.lr = 0x830D519C;
	sub_830AECF0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x830d51c8
	if (!cr6.eq) goto loc_830D51C8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830aecf0
	ctx.lr = 0x830D51B8;
	sub_830AECF0(ctx, base);
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x830d51e8
	if (cr6.eq) goto loc_830D51E8;
loc_830D51C8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x830aecd8
	ctx.lr = 0x830D51D4;
	sub_830AECD8(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x830d5190
	if (cr6.lt) goto loc_830D5190;
loc_830D51DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830D51E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D51F4"))) PPC_WEAK_FUNC(sub_830D51F4);
PPC_FUNC_IMPL(__imp__sub_830D51F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D51F8"))) PPC_WEAK_FUNC(sub_830D51F8);
PPC_FUNC_IMPL(__imp__sub_830D51F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830D5200;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x830aec98
	ctx.lr = 0x830D5218;
	sub_830AEC98(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830d5270
	if (cr6.eq) goto loc_830D5270;
loc_830D5220:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830aed00
	ctx.lr = 0x830D522C;
	sub_830AED00(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_830D5230:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// beq cr6,0x830d5254
	if (cr6.eq) goto loc_830D5254;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x830d5230
	if (cr6.eq) goto loc_830D5230;
loc_830D5254:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x830d527c
	if (cr6.eq) goto loc_830D527C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x830aec98
	ctx.lr = 0x830D5268;
	sub_830AEC98(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x830d5220
	if (cr6.lt) goto loc_830D5220;
loc_830D5270:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830D527C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D5288"))) PPC_WEAK_FUNC(sub_830D5288);
PPC_FUNC_IMPL(__imp__sub_830D5288) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x830D5290;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r6,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r6.u64);
	// lwz r3,188(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// bl 0x830ea620
	ctx.lr = 0x830D52B8;
	sub_830EA620(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830ea690
	ctx.lr = 0x830D52C4;
	sub_830EA690(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r26,r10,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x830abb48
	ctx.lr = 0x830D52D8;
	sub_830ABB48(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830d53c8
	if (cr6.eq) goto loc_830D53C8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830aba48
	ctx.lr = 0x830D52EC;
	sub_830ABA48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// beq cr6,0x830d5364
	if (cr6.eq) goto loc_830D5364;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// beq cr6,0x830d5310
	if (cr6.eq) goto loc_830D5310;
	// lwz r26,26816(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26816);
	// b 0x830d5318
	goto loc_830D5318;
loc_830D5310:
	// addi r10,r11,26816
	ctx.r10.s64 = ctx.r11.s64 + 26816;
	// lwz r26,4(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_830D5318:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x830abb80
	ctx.lr = 0x830D5324;
	sub_830ABB80(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x830fe878
	ctx.lr = 0x830D5330;
	sub_830FE878(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r11,r11,-2960
	ctx.r11.s64 = ctx.r11.s64 + -2960;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r11,-36
	ctx.r5.s64 = ctx.r11.s64 + -36;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// bl 0x831d0b08
	ctx.lr = 0x830D535C;
	sub_831D0B08(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830D5364:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// beq cr6,0x830d5378
	if (cr6.eq) goto loc_830D5378;
	// lwz r26,26816(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26816);
	// b 0x830d5380
	goto loc_830D5380;
loc_830D5378:
	// addi r10,r11,26816
	ctx.r10.s64 = ctx.r11.s64 + 26816;
	// lwz r26,4(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_830D5380:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x830abb80
	ctx.lr = 0x830D538C;
	sub_830ABB80(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x830fe878
	ctx.lr = 0x830D5398;
	sub_830FE878(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r11,r11,-2960
	ctx.r11.s64 = ctx.r11.s64 + -2960;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// bl 0x831d0b08
	ctx.lr = 0x830D53C0;
	sub_831D0B08(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830D53C8:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// beq cr6,0x830d53e0
	if (cr6.eq) goto loc_830D53E0;
	// lwz r26,26816(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26816);
	// b 0x830d53e8
	goto loc_830D53E8;
loc_830D53E0:
	// addi r10,r11,26816
	ctx.r10.s64 = ctx.r11.s64 + 26816;
	// lwz r26,4(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_830D53E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x830abb80
	ctx.lr = 0x830D53F4;
	sub_830ABB80(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,-2960
	ctx.r5.s64 = ctx.r11.s64 + -2960;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// bl 0x831d0b08
	ctx.lr = 0x830D5414;
	sub_831D0B08(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D541C"))) PPC_WEAK_FUNC(sub_830D541C);
PPC_FUNC_IMPL(__imp__sub_830D541C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D5420"))) PPC_WEAK_FUNC(sub_830D5420);
PPC_FUNC_IMPL(__imp__sub_830D5420) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x830D5428;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x830abb48
	ctx.lr = 0x830D544C;
	sub_830ABB48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d557c
	if (cr6.eq) goto loc_830D557C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830aba48
	ctx.lr = 0x830D5460;
	sub_830ABA48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// rlwinm r11,r30,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x1;
	// beq cr6,0x830d54f8
	if (cr6.eq) goto loc_830D54F8;
	// clrlwi r25,r30,3
	ctx.r25.u64 = ctx.r30.u32 & 0x1FFFFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d548c
	if (cr6.eq) goto loc_830D548C;
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// addi r10,r11,26824
	ctx.r10.s64 = ctx.r11.s64 + 26824;
	// lwz r30,8(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x830d54ac
	goto loc_830D54AC;
loc_830D548C:
	// rlwinm r11,r30,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// beq cr6,0x830d54a8
	if (cr6.eq) goto loc_830D54A8;
	// addi r10,r11,26824
	ctx.r10.s64 = ctx.r11.s64 + 26824;
	// lwz r30,4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x830d54ac
	goto loc_830D54AC;
loc_830D54A8:
	// lwz r30,26824(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26824);
loc_830D54AC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x830abb80
	ctx.lr = 0x830D54B8;
	sub_830ABB80(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x830fe878
	ctx.lr = 0x830D54C4;
	sub_830FE878(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r11,r11,-2912
	ctx.r11.s64 = ctx.r11.s64 + -2912;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r11,-36
	ctx.r5.s64 = ctx.r11.s64 + -36;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// bl 0x831d0b08
	ctx.lr = 0x830D54F0;
	sub_831D0B08(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830D54F8:
	// clrlwi r26,r30,3
	ctx.r26.u64 = ctx.r30.u32 & 0x1FFFFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d5514
	if (cr6.eq) goto loc_830D5514;
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// addi r10,r11,26824
	ctx.r10.s64 = ctx.r11.s64 + 26824;
	// lwz r30,8(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x830d5534
	goto loc_830D5534;
loc_830D5514:
	// rlwinm r11,r30,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// beq cr6,0x830d5530
	if (cr6.eq) goto loc_830D5530;
	// addi r10,r11,26824
	ctx.r10.s64 = ctx.r11.s64 + 26824;
	// lwz r30,4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x830d5534
	goto loc_830D5534;
loc_830D5530:
	// lwz r30,26824(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26824);
loc_830D5534:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x830abb80
	ctx.lr = 0x830D5540;
	sub_830ABB80(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x830fe878
	ctx.lr = 0x830D554C;
	sub_830FE878(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r11,r11,-2912
	ctx.r11.s64 = ctx.r11.s64 + -2912;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// bl 0x831d0b08
	ctx.lr = 0x830D5574;
	sub_831D0B08(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830D557C:
	// rlwinm r11,r30,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x1;
	// clrlwi r26,r30,3
	ctx.r26.u64 = ctx.r30.u32 & 0x1FFFFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d559c
	if (cr6.eq) goto loc_830D559C;
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// addi r10,r11,26824
	ctx.r10.s64 = ctx.r11.s64 + 26824;
	// lwz r30,8(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x830d55bc
	goto loc_830D55BC;
loc_830D559C:
	// rlwinm r11,r30,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// beq cr6,0x830d55b8
	if (cr6.eq) goto loc_830D55B8;
	// addi r10,r11,26824
	ctx.r10.s64 = ctx.r11.s64 + 26824;
	// lwz r30,4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x830d55bc
	goto loc_830D55BC;
loc_830D55B8:
	// lwz r30,26824(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26824);
loc_830D55BC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x830abb80
	ctx.lr = 0x830D55C8;
	sub_830ABB80(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,-2912
	ctx.r5.s64 = ctx.r11.s64 + -2912;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// bl 0x831d0b08
	ctx.lr = 0x830D55E8;
	sub_831D0B08(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D55F0"))) PPC_WEAK_FUNC(sub_830D55F0);
PPC_FUNC_IMPL(__imp__sub_830D55F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x830D55F8;
	__savegprlr_23(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x830abad0
	ctx.lr = 0x830D561C;
	sub_830ABAD0(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x830d5758
	if (cr6.lt) goto loc_830D5758;
	// li r26,15
	ctx.r26.s64 = 15;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r23,2
	ctx.r23.s64 = 2;
loc_830D5630:
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x831cdcf0
	ctx.lr = 0x830D5640;
	sub_831CDCF0(ctx, base);
	// lwz r11,204(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 204);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830d5670
	if (cr6.eq) goto loc_830D5670;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r6,200(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 200);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d5420
	ctx.lr = 0x830D566C;
	sub_830D5420(ctx, base);
	// b 0x830d5698
	goto loc_830D5698;
loc_830D5670:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83102db0
	ctx.lr = 0x830D5678;
	sub_83102DB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x830d5288
	ctx.lr = 0x830D5698;
	sub_830D5288(ctx, base);
loc_830D5698:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x830eb240
	ctx.lr = 0x830D56A0;
	sub_830EB240(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d5744
	if (cr6.eq) goto loc_830D5744;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d51f8
	ctx.lr = 0x830D56BC;
	sub_830D51F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830d5744
	if (!cr6.eq) goto loc_830D5744;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r27.u8);
loc_830D56DC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x830d56dc
	if (!cr6.eq) goto loc_830D56DC;
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
	ctx.lr = 0x830D5704;
	sub_8259CC28(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830af928
	ctx.lr = 0x830D5710;
	sub_830AF928(ctx, base);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8291fdc8
	ctx.lr = 0x830D571C;
	sub_8291FDC8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x830d5738
	if (cr6.lt) goto loc_830D5738;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x830D5738;
	sub_825952B8(ctx, base);
loc_830D5738:
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r27.u8);
loc_830D5744:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x830abad0
	ctx.lr = 0x830D5750;
	sub_830ABAD0(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// ble cr6,0x830d5630
	if (!cr6.gt) goto loc_830D5630;
loc_830D5758:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830af928
	ctx.lr = 0x830D5764;
	sub_830AF928(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// li r10,28
	ctx.r10.s64 = 28;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// divw r4,r7,r10
	ctx.r4.s32 = PPCDivide(ctx.r7.s32, ctx.r10.s32);
	// bl 0x830fe218
	ctx.lr = 0x830D5784;
	sub_830FE218(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830af928
	ctx.lr = 0x830D5794;
	sub_830AF928(ctx, base);
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D57A0"))) PPC_WEAK_FUNC(sub_830D57A0);
PPC_FUNC_IMPL(__imp__sub_830D57A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x830D57A8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r23,-31763
	ctx.r23.s64 = -2081619968;
loc_830D57C4:
	// li r29,0
	ctx.r29.s64 = 0;
loc_830D57C8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830ae738
	ctx.lr = 0x830D57D4;
	sub_830AE738(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830af800
	ctx.lr = 0x830D57DC;
	sub_830AF800(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x830D57E0;
	sub_83102DB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x830ae738
	ctx.lr = 0x830D57F4;
	sub_830AE738(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830af800
	ctx.lr = 0x830D57FC;
	sub_830AF800(ctx, base);
	// bl 0x825832d8
	ctx.lr = 0x830D5800;
	sub_825832D8(ctx, base);
	// lwz r11,-3564(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -3564);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r3,6132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// bl 0x82a26da0
	ctx.lr = 0x830D5818;
	sub_82A26DA0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830d50e0
	ctx.lr = 0x830D5838;
	sub_830D50E0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830d58a8
	if (!cr6.eq) goto loc_830D58A8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_830D5848:
	// lwz r11,204(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 204);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830d5870
	if (cr6.eq) goto loc_830D5870;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x830d5870
	if (cr6.eq) goto loc_830D5870;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// beq cr6,0x830d5870
	if (cr6.eq) goto loc_830D5870;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// bne cr6,0x830d589c
	if (!cr6.eq) goto loc_830D589C;
loc_830D5870:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830ae738
	ctx.lr = 0x830D587C;
	sub_830AE738(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830af800
	ctx.lr = 0x830D5884;
	sub_830AF800(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x830d55f0
	ctx.lr = 0x830D589C;
	sub_830D55F0(ctx, base);
loc_830D589C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,31
	cr6.compare<int32_t>(ctx.r30.s32, 31, xer);
	// blt cr6,0x830d5848
	if (cr6.lt) goto loc_830D5848;
loc_830D58A8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,23
	cr6.compare<int32_t>(ctx.r29.s32, 23, xer);
	// blt cr6,0x830d57c8
	if (cr6.lt) goto loc_830D57C8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x830d57c4
	if (cr6.lt) goto loc_830D57C4;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D58C8"))) PPC_WEAK_FUNC(sub_830D58C8);
PPC_FUNC_IMPL(__imp__sub_830D58C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830D58D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r5,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r5.u64);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// bne cr6,0x830d5908
	if (!cr6.eq) goto loc_830D5908;
	// addi r10,r11,26984
	ctx.r10.s64 = ctx.r11.s64 + 26984;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x830d5934
	goto loc_830D5934;
loc_830D5908:
	// addi r11,r11,26984
	ctx.r11.s64 = ctx.r11.s64 + 26984;
	// lhz r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 160);
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x830d592c
	if (!cr6.eq) goto loc_830D592C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830d5930
	if (cr6.eq) goto loc_830D5930;
loc_830D592C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D5930:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_830D5934:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830d5a30
	if (!cr6.eq) goto loc_830D5A30;
	// cmpwi cr6,r6,32
	cr6.compare<int32_t>(ctx.r6.s32, 32, xer);
	// bge cr6,0x830d5a30
	if (!cr6.lt) goto loc_830D5A30;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830e9d40
	ctx.lr = 0x830D5954;
	sub_830E9D40(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x830d5a24
	if (cr6.eq) goto loc_830D5A24;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,6132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// bl 0x82a26da0
	ctx.lr = 0x830D5974;
	sub_82A26DA0(ctx, base);
	// lwz r10,204(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x830d5a30
	if (!cr6.eq) goto loc_830D5A30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830ea690
	ctx.lr = 0x830D598C;
	sub_830EA690(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d5a30
	if (cr6.eq) goto loc_830D5A30;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830ea648
	ctx.lr = 0x830D59B0;
	sub_830EA648(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x830aecd8
	ctx.lr = 0x830D59BC;
	sub_830AECD8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830d5a24
	if (cr6.eq) goto loc_830D5A24;
loc_830D59C4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830aecf0
	ctx.lr = 0x830D59D0;
	sub_830AECF0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x830d5a10
	if (!cr6.eq) goto loc_830D5A10;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830aecf0
	ctx.lr = 0x830D59EC;
	sub_830AECF0(ctx, base);
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x830d5a10
	if (!cr6.eq) goto loc_830D5A10;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830aecf0
	ctx.lr = 0x830D5A04;
	sub_830AECF0(ctx, base);
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830d5a30
	if (!cr6.eq) goto loc_830D5A30;
loc_830D5A10:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x830aecd8
	ctx.lr = 0x830D5A1C;
	sub_830AECD8(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x830d59c4
	if (cr6.lt) goto loc_830D59C4;
loc_830D5A24:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830D5A30:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D5A3C"))) PPC_WEAK_FUNC(sub_830D5A3C);
PPC_FUNC_IMPL(__imp__sub_830D5A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D5A40"))) PPC_WEAK_FUNC(sub_830D5A40);
PPC_FUNC_IMPL(__imp__sub_830D5A40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x830D5A48;
	__savegprlr_25(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// bl 0x83102db0
	ctx.lr = 0x830D5A6C;
	sub_83102DB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// bl 0x825832d8
	ctx.lr = 0x830D5A80;
	sub_825832D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830e9d40
	ctx.lr = 0x830D5A90;
	sub_830E9D40(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x830d5ab8
	if (!cr6.eq) goto loc_830D5AB8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830e9e18
	ctx.lr = 0x830D5AA8;
	sub_830E9E18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830d5b50
	if (cr6.eq) goto loc_830D5B50;
	// b 0x830d5b2c
	goto loc_830D5B2C;
loc_830D5AB8:
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x831cdcf0
	ctx.lr = 0x830D5AC8;
	sub_831CDCF0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x830ea620
	ctx.lr = 0x830D5AD0;
	sub_830EA620(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r3,r25,14
	ctx.r3.u64 = ctx.r25.u32 & 0x3FFFF;
	// bl 0x830ea6a0
	ctx.lr = 0x830D5ADC;
	sub_830EA6A0(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r5,r11,-2724
	ctx.r5.s64 = ctx.r11.s64 + -2724;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x831d0b08
	ctx.lr = 0x830D5AF8;
	sub_831D0B08(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x830eb240
	ctx.lr = 0x830D5B00;
	sub_830EB240(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830d5b50
	if (cr6.eq) goto loc_830D5B50;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830d51f8
	ctx.lr = 0x830D5B1C;
	sub_830D51F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830d5b50
	if (!cr6.eq) goto loc_830D5B50;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_830D5B2C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x830D5B34;
	sub_837B0C10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830af950
	ctx.lr = 0x830D5B3C;
	sub_830AF950(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x8291fdc8
	ctx.lr = 0x830D5B48;
	sub_8291FDC8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x830D5B50;
	sub_8387E8E0(ctx, base);
loc_830D5B50:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D5B58"))) PPC_WEAK_FUNC(sub_830D5B58);
PPC_FUNC_IMPL(__imp__sub_830D5B58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x830D5B60;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_830D5B78:
	// li r29,0
	ctx.r29.s64 = 0;
loc_830D5B7C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ae738
	ctx.lr = 0x830D5B88;
	sub_830AE738(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830af800
	ctx.lr = 0x830D5B90;
	sub_830AF800(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x830D5B94;
	sub_83102DB0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ae738
	ctx.lr = 0x830D5BA4;
	sub_830AE738(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830af800
	ctx.lr = 0x830D5BAC;
	sub_830AF800(ctx, base);
	// bl 0x825832d8
	ctx.lr = 0x830D5BB0;
	sub_825832D8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ld r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// bl 0x830d58c8
	ctx.lr = 0x830D5BCC;
	sub_830D58C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830d5c20
	if (!cr6.eq) goto loc_830D5C20;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ae738
	ctx.lr = 0x830D5BE4;
	sub_830AE738(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x830D5BE8;
	sub_83102DB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r25,0(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x830ae738
	ctx.lr = 0x830D5BFC;
	sub_830AE738(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830af800
	ctx.lr = 0x830D5C04;
	sub_830AF800(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// bl 0x830d5a40
	ctx.lr = 0x830D5C20;
	sub_830D5A40(ctx, base);
loc_830D5C20:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,23
	cr6.compare<int32_t>(ctx.r29.s32, 23, xer);
	// blt cr6,0x830d5b7c
	if (cr6.lt) goto loc_830D5B7C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x830d5b78
	if (cr6.lt) goto loc_830D5B78;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D5C40"))) PPC_WEAK_FUNC(sub_830D5C40);
PPC_FUNC_IMPL(__imp__sub_830D5C40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,27072
	ctx.r9.s64 = ctx.r11.s64 + 27072;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D5C54"))) PPC_WEAK_FUNC(sub_830D5C54);
PPC_FUNC_IMPL(__imp__sub_830D5C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D5C58"))) PPC_WEAK_FUNC(sub_830D5C58);
PPC_FUNC_IMPL(__imp__sub_830D5C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,27296
	ctx.r9.s64 = ctx.r11.s64 + 27296;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D5C6C"))) PPC_WEAK_FUNC(sub_830D5C6C);
PPC_FUNC_IMPL(__imp__sub_830D5C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D5C70"))) PPC_WEAK_FUNC(sub_830D5C70);
PPC_FUNC_IMPL(__imp__sub_830D5C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,27344
	ctx.r9.s64 = ctx.r11.s64 + 27344;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D5C84"))) PPC_WEAK_FUNC(sub_830D5C84);
PPC_FUNC_IMPL(__imp__sub_830D5C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D5C88"))) PPC_WEAK_FUNC(sub_830D5C88);
PPC_FUNC_IMPL(__imp__sub_830D5C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,27348
	ctx.r9.s64 = ctx.r11.s64 + 27348;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D5C9C"))) PPC_WEAK_FUNC(sub_830D5C9C);
PPC_FUNC_IMPL(__imp__sub_830D5C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D5CA0"))) PPC_WEAK_FUNC(sub_830D5CA0);
PPC_FUNC_IMPL(__imp__sub_830D5CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,27372
	ctx.r9.s64 = ctx.r11.s64 + 27372;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D5CB4"))) PPC_WEAK_FUNC(sub_830D5CB4);
PPC_FUNC_IMPL(__imp__sub_830D5CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D5CB8"))) PPC_WEAK_FUNC(sub_830D5CB8);
PPC_FUNC_IMPL(__imp__sub_830D5CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,27408
	ctx.r9.s64 = ctx.r11.s64 + 27408;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D5CCC"))) PPC_WEAK_FUNC(sub_830D5CCC);
PPC_FUNC_IMPL(__imp__sub_830D5CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D5CD0"))) PPC_WEAK_FUNC(sub_830D5CD0);
PPC_FUNC_IMPL(__imp__sub_830D5CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,27484
	ctx.r9.s64 = ctx.r11.s64 + 27484;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D5CE4"))) PPC_WEAK_FUNC(sub_830D5CE4);
PPC_FUNC_IMPL(__imp__sub_830D5CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D5CE8"))) PPC_WEAK_FUNC(sub_830D5CE8);
PPC_FUNC_IMPL(__imp__sub_830D5CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,27508
	ctx.r9.s64 = ctx.r11.s64 + 27508;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D5CFC"))) PPC_WEAK_FUNC(sub_830D5CFC);
PPC_FUNC_IMPL(__imp__sub_830D5CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D5D00"))) PPC_WEAK_FUNC(sub_830D5D00);
PPC_FUNC_IMPL(__imp__sub_830D5D00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,27540
	ctx.r9.s64 = ctx.r11.s64 + 27540;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D5D14"))) PPC_WEAK_FUNC(sub_830D5D14);
PPC_FUNC_IMPL(__imp__sub_830D5D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D5D18"))) PPC_WEAK_FUNC(sub_830D5D18);
PPC_FUNC_IMPL(__imp__sub_830D5D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,27556
	ctx.r9.s64 = ctx.r11.s64 + 27556;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D5D2C"))) PPC_WEAK_FUNC(sub_830D5D2C);
PPC_FUNC_IMPL(__imp__sub_830D5D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D5D30"))) PPC_WEAK_FUNC(sub_830D5D30);
PPC_FUNC_IMPL(__imp__sub_830D5D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,27568
	ctx.r9.s64 = ctx.r11.s64 + 27568;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D5D44"))) PPC_WEAK_FUNC(sub_830D5D44);
PPC_FUNC_IMPL(__imp__sub_830D5D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D5D48"))) PPC_WEAK_FUNC(sub_830D5D48);
PPC_FUNC_IMPL(__imp__sub_830D5D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,27584
	ctx.r9.s64 = ctx.r11.s64 + 27584;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D5D5C"))) PPC_WEAK_FUNC(sub_830D5D5C);
PPC_FUNC_IMPL(__imp__sub_830D5D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D5D60"))) PPC_WEAK_FUNC(sub_830D5D60);
PPC_FUNC_IMPL(__imp__sub_830D5D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,27596
	ctx.r9.s64 = ctx.r11.s64 + 27596;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D5D74"))) PPC_WEAK_FUNC(sub_830D5D74);
PPC_FUNC_IMPL(__imp__sub_830D5D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D5D78"))) PPC_WEAK_FUNC(sub_830D5D78);
PPC_FUNC_IMPL(__imp__sub_830D5D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,27644
	ctx.r9.s64 = ctx.r11.s64 + 27644;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D5D8C"))) PPC_WEAK_FUNC(sub_830D5D8C);
PPC_FUNC_IMPL(__imp__sub_830D5D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D5D90"))) PPC_WEAK_FUNC(sub_830D5D90);
PPC_FUNC_IMPL(__imp__sub_830D5D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,27672
	ctx.r9.s64 = ctx.r11.s64 + 27672;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D5DA4"))) PPC_WEAK_FUNC(sub_830D5DA4);
PPC_FUNC_IMPL(__imp__sub_830D5DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D5DA8"))) PPC_WEAK_FUNC(sub_830D5DA8);
PPC_FUNC_IMPL(__imp__sub_830D5DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,27728
	ctx.r9.s64 = ctx.r11.s64 + 27728;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D5DBC"))) PPC_WEAK_FUNC(sub_830D5DBC);
PPC_FUNC_IMPL(__imp__sub_830D5DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D5DC0"))) PPC_WEAK_FUNC(sub_830D5DC0);
PPC_FUNC_IMPL(__imp__sub_830D5DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,27744
	ctx.r9.s64 = ctx.r11.s64 + 27744;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D5DD4"))) PPC_WEAK_FUNC(sub_830D5DD4);
PPC_FUNC_IMPL(__imp__sub_830D5DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D5DD8"))) PPC_WEAK_FUNC(sub_830D5DD8);
PPC_FUNC_IMPL(__imp__sub_830D5DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,27768
	ctx.r9.s64 = ctx.r11.s64 + 27768;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D5DEC"))) PPC_WEAK_FUNC(sub_830D5DEC);
PPC_FUNC_IMPL(__imp__sub_830D5DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D5DF0"))) PPC_WEAK_FUNC(sub_830D5DF0);
PPC_FUNC_IMPL(__imp__sub_830D5DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,27780
	ctx.r9.s64 = ctx.r11.s64 + 27780;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D5E04"))) PPC_WEAK_FUNC(sub_830D5E04);
PPC_FUNC_IMPL(__imp__sub_830D5E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D5E08"))) PPC_WEAK_FUNC(sub_830D5E08);
PPC_FUNC_IMPL(__imp__sub_830D5E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,27792
	ctx.r9.s64 = ctx.r11.s64 + 27792;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D5E1C"))) PPC_WEAK_FUNC(sub_830D5E1C);
PPC_FUNC_IMPL(__imp__sub_830D5E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D5E20"))) PPC_WEAK_FUNC(sub_830D5E20);
PPC_FUNC_IMPL(__imp__sub_830D5E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,27860
	ctx.r9.s64 = ctx.r11.s64 + 27860;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D5E34"))) PPC_WEAK_FUNC(sub_830D5E34);
PPC_FUNC_IMPL(__imp__sub_830D5E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D5E38"))) PPC_WEAK_FUNC(sub_830D5E38);
PPC_FUNC_IMPL(__imp__sub_830D5E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,27872
	ctx.r9.s64 = ctx.r11.s64 + 27872;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D5E4C"))) PPC_WEAK_FUNC(sub_830D5E4C);
PPC_FUNC_IMPL(__imp__sub_830D5E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D5E50"))) PPC_WEAK_FUNC(sub_830D5E50);
PPC_FUNC_IMPL(__imp__sub_830D5E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,27880
	ctx.r9.s64 = ctx.r11.s64 + 27880;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D5E64"))) PPC_WEAK_FUNC(sub_830D5E64);
PPC_FUNC_IMPL(__imp__sub_830D5E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D5E68"))) PPC_WEAK_FUNC(sub_830D5E68);
PPC_FUNC_IMPL(__imp__sub_830D5E68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,27908
	ctx.r9.s64 = ctx.r11.s64 + 27908;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D5E7C"))) PPC_WEAK_FUNC(sub_830D5E7C);
PPC_FUNC_IMPL(__imp__sub_830D5E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D5E80"))) PPC_WEAK_FUNC(sub_830D5E80);
PPC_FUNC_IMPL(__imp__sub_830D5E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,27928
	ctx.r9.s64 = ctx.r11.s64 + 27928;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D5E94"))) PPC_WEAK_FUNC(sub_830D5E94);
PPC_FUNC_IMPL(__imp__sub_830D5E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D5E98"))) PPC_WEAK_FUNC(sub_830D5E98);
PPC_FUNC_IMPL(__imp__sub_830D5E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,27936
	ctx.r9.s64 = ctx.r11.s64 + 27936;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D5EAC"))) PPC_WEAK_FUNC(sub_830D5EAC);
PPC_FUNC_IMPL(__imp__sub_830D5EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D5EB0"))) PPC_WEAK_FUNC(sub_830D5EB0);
PPC_FUNC_IMPL(__imp__sub_830D5EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,27952
	ctx.r9.s64 = ctx.r11.s64 + 27952;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D5EC4"))) PPC_WEAK_FUNC(sub_830D5EC4);
PPC_FUNC_IMPL(__imp__sub_830D5EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D5EC8"))) PPC_WEAK_FUNC(sub_830D5EC8);
PPC_FUNC_IMPL(__imp__sub_830D5EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,27956
	ctx.r9.s64 = ctx.r11.s64 + 27956;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D5EDC"))) PPC_WEAK_FUNC(sub_830D5EDC);
PPC_FUNC_IMPL(__imp__sub_830D5EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D5EE0"))) PPC_WEAK_FUNC(sub_830D5EE0);
PPC_FUNC_IMPL(__imp__sub_830D5EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,28016
	ctx.r9.s64 = ctx.r11.s64 + 28016;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D5EF4"))) PPC_WEAK_FUNC(sub_830D5EF4);
PPC_FUNC_IMPL(__imp__sub_830D5EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D5EF8"))) PPC_WEAK_FUNC(sub_830D5EF8);
PPC_FUNC_IMPL(__imp__sub_830D5EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,28024
	ctx.r9.s64 = ctx.r11.s64 + 28024;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D5F0C"))) PPC_WEAK_FUNC(sub_830D5F0C);
PPC_FUNC_IMPL(__imp__sub_830D5F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D5F10"))) PPC_WEAK_FUNC(sub_830D5F10);
PPC_FUNC_IMPL(__imp__sub_830D5F10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,28036
	ctx.r9.s64 = ctx.r11.s64 + 28036;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D5F24"))) PPC_WEAK_FUNC(sub_830D5F24);
PPC_FUNC_IMPL(__imp__sub_830D5F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D5F28"))) PPC_WEAK_FUNC(sub_830D5F28);
PPC_FUNC_IMPL(__imp__sub_830D5F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,28068
	ctx.r9.s64 = ctx.r11.s64 + 28068;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D5F3C"))) PPC_WEAK_FUNC(sub_830D5F3C);
PPC_FUNC_IMPL(__imp__sub_830D5F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D5F40"))) PPC_WEAK_FUNC(sub_830D5F40);
PPC_FUNC_IMPL(__imp__sub_830D5F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,28120
	ctx.r9.s64 = ctx.r11.s64 + 28120;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D5F54"))) PPC_WEAK_FUNC(sub_830D5F54);
PPC_FUNC_IMPL(__imp__sub_830D5F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D5F58"))) PPC_WEAK_FUNC(sub_830D5F58);
PPC_FUNC_IMPL(__imp__sub_830D5F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,28168
	ctx.r9.s64 = ctx.r11.s64 + 28168;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D5F6C"))) PPC_WEAK_FUNC(sub_830D5F6C);
PPC_FUNC_IMPL(__imp__sub_830D5F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D5F70"))) PPC_WEAK_FUNC(sub_830D5F70);
PPC_FUNC_IMPL(__imp__sub_830D5F70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,28192
	ctx.r9.s64 = ctx.r11.s64 + 28192;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D5F84"))) PPC_WEAK_FUNC(sub_830D5F84);
PPC_FUNC_IMPL(__imp__sub_830D5F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D5F88"))) PPC_WEAK_FUNC(sub_830D5F88);
PPC_FUNC_IMPL(__imp__sub_830D5F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,28220
	ctx.r9.s64 = ctx.r11.s64 + 28220;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D5F9C"))) PPC_WEAK_FUNC(sub_830D5F9C);
PPC_FUNC_IMPL(__imp__sub_830D5F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D5FA0"))) PPC_WEAK_FUNC(sub_830D5FA0);
PPC_FUNC_IMPL(__imp__sub_830D5FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,28232
	ctx.r9.s64 = ctx.r11.s64 + 28232;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D5FB4"))) PPC_WEAK_FUNC(sub_830D5FB4);
PPC_FUNC_IMPL(__imp__sub_830D5FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D5FB8"))) PPC_WEAK_FUNC(sub_830D5FB8);
PPC_FUNC_IMPL(__imp__sub_830D5FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,28264
	ctx.r9.s64 = ctx.r11.s64 + 28264;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D5FCC"))) PPC_WEAK_FUNC(sub_830D5FCC);
PPC_FUNC_IMPL(__imp__sub_830D5FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D5FD0"))) PPC_WEAK_FUNC(sub_830D5FD0);
PPC_FUNC_IMPL(__imp__sub_830D5FD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,28272
	ctx.r9.s64 = ctx.r11.s64 + 28272;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D5FE4"))) PPC_WEAK_FUNC(sub_830D5FE4);
PPC_FUNC_IMPL(__imp__sub_830D5FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D5FE8"))) PPC_WEAK_FUNC(sub_830D5FE8);
PPC_FUNC_IMPL(__imp__sub_830D5FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,28352
	ctx.r9.s64 = ctx.r11.s64 + 28352;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D5FFC"))) PPC_WEAK_FUNC(sub_830D5FFC);
PPC_FUNC_IMPL(__imp__sub_830D5FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6000"))) PPC_WEAK_FUNC(sub_830D6000);
PPC_FUNC_IMPL(__imp__sub_830D6000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,28392
	ctx.r9.s64 = ctx.r11.s64 + 28392;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6014"))) PPC_WEAK_FUNC(sub_830D6014);
PPC_FUNC_IMPL(__imp__sub_830D6014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6018"))) PPC_WEAK_FUNC(sub_830D6018);
PPC_FUNC_IMPL(__imp__sub_830D6018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,28516
	ctx.r9.s64 = ctx.r11.s64 + 28516;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D602C"))) PPC_WEAK_FUNC(sub_830D602C);
PPC_FUNC_IMPL(__imp__sub_830D602C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6030"))) PPC_WEAK_FUNC(sub_830D6030);
PPC_FUNC_IMPL(__imp__sub_830D6030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,28532
	ctx.r9.s64 = ctx.r11.s64 + 28532;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6044"))) PPC_WEAK_FUNC(sub_830D6044);
PPC_FUNC_IMPL(__imp__sub_830D6044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6048"))) PPC_WEAK_FUNC(sub_830D6048);
PPC_FUNC_IMPL(__imp__sub_830D6048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,28552
	ctx.r9.s64 = ctx.r11.s64 + 28552;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D605C"))) PPC_WEAK_FUNC(sub_830D605C);
PPC_FUNC_IMPL(__imp__sub_830D605C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6060"))) PPC_WEAK_FUNC(sub_830D6060);
PPC_FUNC_IMPL(__imp__sub_830D6060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,28560
	ctx.r9.s64 = ctx.r11.s64 + 28560;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6074"))) PPC_WEAK_FUNC(sub_830D6074);
PPC_FUNC_IMPL(__imp__sub_830D6074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6078"))) PPC_WEAK_FUNC(sub_830D6078);
PPC_FUNC_IMPL(__imp__sub_830D6078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,28592
	ctx.r9.s64 = ctx.r11.s64 + 28592;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D608C"))) PPC_WEAK_FUNC(sub_830D608C);
PPC_FUNC_IMPL(__imp__sub_830D608C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6090"))) PPC_WEAK_FUNC(sub_830D6090);
PPC_FUNC_IMPL(__imp__sub_830D6090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,28628
	ctx.r9.s64 = ctx.r11.s64 + 28628;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D60A4"))) PPC_WEAK_FUNC(sub_830D60A4);
PPC_FUNC_IMPL(__imp__sub_830D60A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D60A8"))) PPC_WEAK_FUNC(sub_830D60A8);
PPC_FUNC_IMPL(__imp__sub_830D60A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,28644
	ctx.r9.s64 = ctx.r11.s64 + 28644;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D60BC"))) PPC_WEAK_FUNC(sub_830D60BC);
PPC_FUNC_IMPL(__imp__sub_830D60BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D60C0"))) PPC_WEAK_FUNC(sub_830D60C0);
PPC_FUNC_IMPL(__imp__sub_830D60C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,28656
	ctx.r9.s64 = ctx.r11.s64 + 28656;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D60D4"))) PPC_WEAK_FUNC(sub_830D60D4);
PPC_FUNC_IMPL(__imp__sub_830D60D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D60D8"))) PPC_WEAK_FUNC(sub_830D60D8);
PPC_FUNC_IMPL(__imp__sub_830D60D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,28672
	ctx.r9.s64 = ctx.r11.s64 + 28672;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D60EC"))) PPC_WEAK_FUNC(sub_830D60EC);
PPC_FUNC_IMPL(__imp__sub_830D60EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D60F0"))) PPC_WEAK_FUNC(sub_830D60F0);
PPC_FUNC_IMPL(__imp__sub_830D60F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,28700
	ctx.r9.s64 = ctx.r11.s64 + 28700;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6104"))) PPC_WEAK_FUNC(sub_830D6104);
PPC_FUNC_IMPL(__imp__sub_830D6104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6108"))) PPC_WEAK_FUNC(sub_830D6108);
PPC_FUNC_IMPL(__imp__sub_830D6108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,28744
	ctx.r9.s64 = ctx.r11.s64 + 28744;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D611C"))) PPC_WEAK_FUNC(sub_830D611C);
PPC_FUNC_IMPL(__imp__sub_830D611C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6120"))) PPC_WEAK_FUNC(sub_830D6120);
PPC_FUNC_IMPL(__imp__sub_830D6120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,28756
	ctx.r9.s64 = ctx.r11.s64 + 28756;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6134"))) PPC_WEAK_FUNC(sub_830D6134);
PPC_FUNC_IMPL(__imp__sub_830D6134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6138"))) PPC_WEAK_FUNC(sub_830D6138);
PPC_FUNC_IMPL(__imp__sub_830D6138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,28784
	ctx.r9.s64 = ctx.r11.s64 + 28784;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D614C"))) PPC_WEAK_FUNC(sub_830D614C);
PPC_FUNC_IMPL(__imp__sub_830D614C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6150"))) PPC_WEAK_FUNC(sub_830D6150);
PPC_FUNC_IMPL(__imp__sub_830D6150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,28812
	ctx.r9.s64 = ctx.r11.s64 + 28812;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6164"))) PPC_WEAK_FUNC(sub_830D6164);
PPC_FUNC_IMPL(__imp__sub_830D6164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6168"))) PPC_WEAK_FUNC(sub_830D6168);
PPC_FUNC_IMPL(__imp__sub_830D6168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,28832
	ctx.r9.s64 = ctx.r11.s64 + 28832;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D617C"))) PPC_WEAK_FUNC(sub_830D617C);
PPC_FUNC_IMPL(__imp__sub_830D617C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6180"))) PPC_WEAK_FUNC(sub_830D6180);
PPC_FUNC_IMPL(__imp__sub_830D6180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,28884
	ctx.r9.s64 = ctx.r11.s64 + 28884;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6194"))) PPC_WEAK_FUNC(sub_830D6194);
PPC_FUNC_IMPL(__imp__sub_830D6194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6198"))) PPC_WEAK_FUNC(sub_830D6198);
PPC_FUNC_IMPL(__imp__sub_830D6198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,28912
	ctx.r9.s64 = ctx.r11.s64 + 28912;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D61AC"))) PPC_WEAK_FUNC(sub_830D61AC);
PPC_FUNC_IMPL(__imp__sub_830D61AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D61B0"))) PPC_WEAK_FUNC(sub_830D61B0);
PPC_FUNC_IMPL(__imp__sub_830D61B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,29084
	ctx.r9.s64 = ctx.r11.s64 + 29084;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D61C4"))) PPC_WEAK_FUNC(sub_830D61C4);
PPC_FUNC_IMPL(__imp__sub_830D61C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D61C8"))) PPC_WEAK_FUNC(sub_830D61C8);
PPC_FUNC_IMPL(__imp__sub_830D61C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,29088
	ctx.r9.s64 = ctx.r11.s64 + 29088;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D61DC"))) PPC_WEAK_FUNC(sub_830D61DC);
PPC_FUNC_IMPL(__imp__sub_830D61DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D61E0"))) PPC_WEAK_FUNC(sub_830D61E0);
PPC_FUNC_IMPL(__imp__sub_830D61E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,29184
	ctx.r9.s64 = ctx.r11.s64 + 29184;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D61F4"))) PPC_WEAK_FUNC(sub_830D61F4);
PPC_FUNC_IMPL(__imp__sub_830D61F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D61F8"))) PPC_WEAK_FUNC(sub_830D61F8);
PPC_FUNC_IMPL(__imp__sub_830D61F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,29256
	ctx.r9.s64 = ctx.r11.s64 + 29256;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D620C"))) PPC_WEAK_FUNC(sub_830D620C);
PPC_FUNC_IMPL(__imp__sub_830D620C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6210"))) PPC_WEAK_FUNC(sub_830D6210);
PPC_FUNC_IMPL(__imp__sub_830D6210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,29296
	ctx.r9.s64 = ctx.r11.s64 + 29296;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6224"))) PPC_WEAK_FUNC(sub_830D6224);
PPC_FUNC_IMPL(__imp__sub_830D6224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6228"))) PPC_WEAK_FUNC(sub_830D6228);
PPC_FUNC_IMPL(__imp__sub_830D6228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,29332
	ctx.r9.s64 = ctx.r11.s64 + 29332;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D623C"))) PPC_WEAK_FUNC(sub_830D623C);
PPC_FUNC_IMPL(__imp__sub_830D623C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6240"))) PPC_WEAK_FUNC(sub_830D6240);
PPC_FUNC_IMPL(__imp__sub_830D6240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,29376
	ctx.r9.s64 = ctx.r11.s64 + 29376;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6254"))) PPC_WEAK_FUNC(sub_830D6254);
PPC_FUNC_IMPL(__imp__sub_830D6254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6258"))) PPC_WEAK_FUNC(sub_830D6258);
PPC_FUNC_IMPL(__imp__sub_830D6258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,29464
	ctx.r9.s64 = ctx.r11.s64 + 29464;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D626C"))) PPC_WEAK_FUNC(sub_830D626C);
PPC_FUNC_IMPL(__imp__sub_830D626C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6270"))) PPC_WEAK_FUNC(sub_830D6270);
PPC_FUNC_IMPL(__imp__sub_830D6270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,29848
	ctx.r9.s64 = ctx.r11.s64 + 29848;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6284"))) PPC_WEAK_FUNC(sub_830D6284);
PPC_FUNC_IMPL(__imp__sub_830D6284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6288"))) PPC_WEAK_FUNC(sub_830D6288);
PPC_FUNC_IMPL(__imp__sub_830D6288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,30084
	ctx.r9.s64 = ctx.r11.s64 + 30084;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D629C"))) PPC_WEAK_FUNC(sub_830D629C);
PPC_FUNC_IMPL(__imp__sub_830D629C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D62A0"))) PPC_WEAK_FUNC(sub_830D62A0);
PPC_FUNC_IMPL(__imp__sub_830D62A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,30108
	ctx.r9.s64 = ctx.r11.s64 + 30108;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D62B4"))) PPC_WEAK_FUNC(sub_830D62B4);
PPC_FUNC_IMPL(__imp__sub_830D62B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D62B8"))) PPC_WEAK_FUNC(sub_830D62B8);
PPC_FUNC_IMPL(__imp__sub_830D62B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,30120
	ctx.r9.s64 = ctx.r11.s64 + 30120;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D62CC"))) PPC_WEAK_FUNC(sub_830D62CC);
PPC_FUNC_IMPL(__imp__sub_830D62CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D62D0"))) PPC_WEAK_FUNC(sub_830D62D0);
PPC_FUNC_IMPL(__imp__sub_830D62D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,30136
	ctx.r9.s64 = ctx.r11.s64 + 30136;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D62E4"))) PPC_WEAK_FUNC(sub_830D62E4);
PPC_FUNC_IMPL(__imp__sub_830D62E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D62E8"))) PPC_WEAK_FUNC(sub_830D62E8);
PPC_FUNC_IMPL(__imp__sub_830D62E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,30276
	ctx.r9.s64 = ctx.r11.s64 + 30276;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D62FC"))) PPC_WEAK_FUNC(sub_830D62FC);
PPC_FUNC_IMPL(__imp__sub_830D62FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6300"))) PPC_WEAK_FUNC(sub_830D6300);
PPC_FUNC_IMPL(__imp__sub_830D6300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,30292
	ctx.r9.s64 = ctx.r11.s64 + 30292;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6314"))) PPC_WEAK_FUNC(sub_830D6314);
PPC_FUNC_IMPL(__imp__sub_830D6314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6318"))) PPC_WEAK_FUNC(sub_830D6318);
PPC_FUNC_IMPL(__imp__sub_830D6318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,30304
	ctx.r9.s64 = ctx.r11.s64 + 30304;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D632C"))) PPC_WEAK_FUNC(sub_830D632C);
PPC_FUNC_IMPL(__imp__sub_830D632C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6330"))) PPC_WEAK_FUNC(sub_830D6330);
PPC_FUNC_IMPL(__imp__sub_830D6330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,30312
	ctx.r9.s64 = ctx.r11.s64 + 30312;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6344"))) PPC_WEAK_FUNC(sub_830D6344);
PPC_FUNC_IMPL(__imp__sub_830D6344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6348"))) PPC_WEAK_FUNC(sub_830D6348);
PPC_FUNC_IMPL(__imp__sub_830D6348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,30328
	ctx.r9.s64 = ctx.r11.s64 + 30328;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D635C"))) PPC_WEAK_FUNC(sub_830D635C);
PPC_FUNC_IMPL(__imp__sub_830D635C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6360"))) PPC_WEAK_FUNC(sub_830D6360);
PPC_FUNC_IMPL(__imp__sub_830D6360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,30352
	ctx.r9.s64 = ctx.r11.s64 + 30352;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6374"))) PPC_WEAK_FUNC(sub_830D6374);
PPC_FUNC_IMPL(__imp__sub_830D6374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6378"))) PPC_WEAK_FUNC(sub_830D6378);
PPC_FUNC_IMPL(__imp__sub_830D6378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,30384
	ctx.r9.s64 = ctx.r11.s64 + 30384;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D638C"))) PPC_WEAK_FUNC(sub_830D638C);
PPC_FUNC_IMPL(__imp__sub_830D638C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6390"))) PPC_WEAK_FUNC(sub_830D6390);
PPC_FUNC_IMPL(__imp__sub_830D6390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,30500
	ctx.r9.s64 = ctx.r11.s64 + 30500;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D63A4"))) PPC_WEAK_FUNC(sub_830D63A4);
PPC_FUNC_IMPL(__imp__sub_830D63A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D63A8"))) PPC_WEAK_FUNC(sub_830D63A8);
PPC_FUNC_IMPL(__imp__sub_830D63A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,30528
	ctx.r9.s64 = ctx.r11.s64 + 30528;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D63BC"))) PPC_WEAK_FUNC(sub_830D63BC);
PPC_FUNC_IMPL(__imp__sub_830D63BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D63C0"))) PPC_WEAK_FUNC(sub_830D63C0);
PPC_FUNC_IMPL(__imp__sub_830D63C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,30564
	ctx.r9.s64 = ctx.r11.s64 + 30564;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

