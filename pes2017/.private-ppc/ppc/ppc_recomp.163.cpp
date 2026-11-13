#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82CA7F00"))) PPC_WEAK_FUNC(sub_82CA7F00);
PPC_FUNC_IMPL(__imp__sub_82CA7F00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82CA7F08;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CA7F1C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r31,r11,6644
	ctx.r31.s64 = ctx.r11.s64 + 6644;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-408
	ctx.r4.s64 = ctx.r31.s64 + -408;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CA7F3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca83fc
	if (cr6.eq) goto loc_82CA83FC;
	// bl 0x82d86078
	ctx.lr = 0x82CA7F4C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca83fc
	if (cr6.eq) goto loc_82CA83FC;
	// lwz r27,116(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825832d8
	ctx.lr = 0x82CA7F60;
	sub_825832D8(ctx, base);
	// bl 0x82d99c08
	ctx.lr = 0x82CA7F64;
	sub_82D99C08(ctx, base);
	// lwz r4,96(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// bl 0x82d9a978
	ctx.lr = 0x82CA7F6C;
	sub_82D9A978(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831f8200
	ctx.lr = 0x82CA7F78;
	sub_831F8200(ctx, base);
	// addi r26,r30,100
	ctx.r26.s64 = ctx.r30.s64 + 100;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r31,-392
	ctx.r4.s64 = ctx.r31.s64 + -392;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82CA7F8C;
	sub_82D2E228(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca83fc
	if (cr6.eq) goto loc_82CA83FC;
	// lbz r11,724(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// beq cr6,0x82ca7fdc
	if (cr6.eq) goto loc_82CA7FDC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,100
	ctx.r4.s64 = 100;
	// beq cr6,0x82ca7fbc
	if (cr6.eq) goto loc_82CA7FBC;
	// li r4,99
	ctx.r4.s64 = 99;
loc_82CA7FBC:
	// bl 0x82d17da0
	ctx.lr = 0x82CA7FC0;
	sub_82D17DA0(ctx, base);
	// addi r4,r31,-384
	ctx.r4.s64 = ctx.r31.s64 + -384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r30,r30,100
	ctx.r30.s64 = ctx.r30.s64 + 100;
	// bl 0x837b0c10
	ctx.lr = 0x82CA7FD0;
	sub_837B0C10(ctx, base);
	// lis r5,550
	ctx.r5.s64 = 36044800;
	// ori r5,r5,290
	ctx.r5.u64 = ctx.r5.u64 | 290;
	// b 0x82ca8024
	goto loc_82CA8024;
loc_82CA7FDC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ca8000
	if (!cr6.eq) goto loc_82CA8000;
	// addi r4,r31,-372
	ctx.r4.s64 = ctx.r31.s64 + -372;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r30,r30,100
	ctx.r30.s64 = ctx.r30.s64 + 100;
	// bl 0x837b0c10
	ctx.lr = 0x82CA7FF4;
	sub_837B0C10(ctx, base);
	// lis r5,550
	ctx.r5.s64 = 36044800;
	// ori r5,r5,291
	ctx.r5.u64 = ctx.r5.u64 | 291;
	// b 0x82ca8024
	goto loc_82CA8024;
loc_82CA8000:
	// li r4,99
	ctx.r4.s64 = 99;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82CA800C;
	sub_82D17DA0(ctx, base);
	// addi r4,r31,-360
	ctx.r4.s64 = ctx.r31.s64 + -360;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r30,r30,100
	ctx.r30.s64 = ctx.r30.s64 + 100;
	// bl 0x837b0c10
	ctx.lr = 0x82CA801C;
	sub_837B0C10(ctx, base);
	// lis r5,550
	ctx.r5.s64 = 36044800;
	// ori r5,r5,289
	ctx.r5.u64 = ctx.r5.u64 | 289;
loc_82CA8024:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82CA8030;
	sub_82A69A28(ctx, base);
	// addi r4,r31,-348
	ctx.r4.s64 = ctx.r31.s64 + -348;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82CA803C;
	sub_82D2E228(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca83fc
	if (cr6.eq) goto loc_82CA83FC;
	// lbz r10,724(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 724);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r30,r11,100
	ctx.r30.s64 = ctx.r11.s64 + 100;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ca8070
	if (cr6.eq) goto loc_82CA8070;
	// addi r4,r31,-336
	ctx.r4.s64 = ctx.r31.s64 + -336;
	// bl 0x837b0c10
	ctx.lr = 0x82CA8064;
	sub_837B0C10(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// ori r5,r5,391
	ctx.r5.u64 = ctx.r5.u64 | 391;
	// b 0x82ca8080
	goto loc_82CA8080;
loc_82CA8070:
	// addi r4,r31,-320
	ctx.r4.s64 = ctx.r31.s64 + -320;
	// bl 0x837b0c10
	ctx.lr = 0x82CA8078;
	sub_837B0C10(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// ori r5,r5,298
	ctx.r5.u64 = ctx.r5.u64 | 298;
loc_82CA8080:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82CA808C;
	sub_82A69A28(ctx, base);
	// addi r4,r31,-304
	ctx.r4.s64 = ctx.r31.s64 + -304;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82CA8098;
	sub_82D2E228(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca83fc
	if (cr6.eq) goto loc_82CA83FC;
	// addi r4,r31,-292
	ctx.r4.s64 = ctx.r31.s64 + -292;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r30,r11,100
	ctx.r30.s64 = ctx.r11.s64 + 100;
	// bl 0x837b0c10
	ctx.lr = 0x82CA80B4;
	sub_837B0C10(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r5,r5,393
	ctx.r5.u64 = ctx.r5.u64 | 393;
	// bl 0x82a69a28
	ctx.lr = 0x82CA80C8;
	sub_82A69A28(ctx, base);
	// addi r4,r31,-268
	ctx.r4.s64 = ctx.r31.s64 + -268;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r29,384(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 384);
	// bl 0x837b0c10
	ctx.lr = 0x82CA80D8;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82CA80E8;
	sub_82A6A1B8(ctx, base);
	// addi r4,r31,-256
	ctx.r4.s64 = ctx.r31.s64 + -256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r29,712(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 712);
	// bl 0x837b0c10
	ctx.lr = 0x82CA80F8;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82CA8108;
	sub_82A6A1B8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,-236
	ctx.r4.s64 = ctx.r31.s64 + -236;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CA8120;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca83fc
	if (cr6.eq) goto loc_82CA83FC;
	// lwz r7,712(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 712);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r6,384(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 384);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lfs f31,-23488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23488);
	ctx.f31.f64 = double(temp.f32);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f30,15760(r8)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r8.u32 + 15760);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fadd f6,f7,f30
	ctx.f6.f64 = ctx.f7.f64 + ctx.f30.f64;
	// frsp f0,f6
	ctx.f0.f64 = double(float(ctx.f6.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82ca8180
	if (cr6.lt) goto loc_82CA8180;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_82CA8180:
	// fctidz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// addi r4,r31,-216
	ctx.r4.s64 = ctx.r31.s64 + -216;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r25,84(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x837b0c10
	ctx.lr = 0x82CA8198;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82CA81A8;
	sub_82A6A1B8(ctx, base);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,100
	ctx.r4.s64 = 100;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d3d3b0
	ctx.lr = 0x82CA81BC;
	sub_82D3D3B0(ctx, base);
	// addi r4,r31,-196
	ctx.r4.s64 = ctx.r31.s64 + -196;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82CA81C8;
	sub_82D2E228(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca83fc
	if (cr6.eq) goto loc_82CA83FC;
	// addi r4,r31,-184
	ctx.r4.s64 = ctx.r31.s64 + -184;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r30,r11,100
	ctx.r30.s64 = ctx.r11.s64 + 100;
	// bl 0x837b0c10
	ctx.lr = 0x82CA81E4;
	sub_837B0C10(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r5,r5,394
	ctx.r5.u64 = ctx.r5.u64 | 394;
	// bl 0x82a69a28
	ctx.lr = 0x82CA81F8;
	sub_82A69A28(ctx, base);
	// addi r4,r31,-160
	ctx.r4.s64 = ctx.r31.s64 + -160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r29,388(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 388);
	// bl 0x837b0c10
	ctx.lr = 0x82CA8208;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82CA8218;
	sub_82A6A1B8(ctx, base);
	// addi r4,r31,-148
	ctx.r4.s64 = ctx.r31.s64 + -148;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r29,716(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 716);
	// bl 0x837b0c10
	ctx.lr = 0x82CA8228;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82CA8238;
	sub_82A6A1B8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,-128
	ctx.r4.s64 = ctx.r31.s64 + -128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CA8250;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca83fc
	if (cr6.eq) goto loc_82CA83FC;
	// lwz r8,716(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 716);
	// lwz r9,388(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 388);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f12,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fdivs f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f11.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fadd f6,f7,f30
	ctx.f6.f64 = ctx.f7.f64 + ctx.f30.f64;
	// frsp f0,f6
	ctx.f0.f64 = double(float(ctx.f6.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82ca82a0
	if (cr6.lt) goto loc_82CA82A0;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_82CA82A0:
	// fctidz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// addi r4,r31,-108
	ctx.r4.s64 = ctx.r31.s64 + -108;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r25,92(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x837b0c10
	ctx.lr = 0x82CA82B8;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82CA82C8;
	sub_82A6A1B8(ctx, base);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,100
	ctx.r4.s64 = 100;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d3d3b0
	ctx.lr = 0x82CA82DC;
	sub_82D3D3B0(ctx, base);
	// addi r4,r31,-88
	ctx.r4.s64 = ctx.r31.s64 + -88;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82CA82E8;
	sub_82D2E228(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca83fc
	if (cr6.eq) goto loc_82CA83FC;
	// addi r4,r31,-76
	ctx.r4.s64 = ctx.r31.s64 + -76;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r30,r11,100
	ctx.r30.s64 = ctx.r11.s64 + 100;
	// bl 0x837b0c10
	ctx.lr = 0x82CA8304;
	sub_837B0C10(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r5,r5,395
	ctx.r5.u64 = ctx.r5.u64 | 395;
	// bl 0x82a69a28
	ctx.lr = 0x82CA8318;
	sub_82A69A28(ctx, base);
	// addi r4,r31,-52
	ctx.r4.s64 = ctx.r31.s64 + -52;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r29,392(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 392);
	// bl 0x837b0c10
	ctx.lr = 0x82CA8328;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82CA8338;
	sub_82A6A1B8(ctx, base);
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r29,720(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 720);
	// bl 0x837b0c10
	ctx.lr = 0x82CA8348;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82CA8358;
	sub_82A6A1B8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CA8370;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca83fc
	if (cr6.eq) goto loc_82CA83FC;
	// lwz r9,720(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 720);
	// lwz r8,392(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 392);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fdivs f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 / ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fadd f6,f7,f30
	ctx.f6.f64 = ctx.f7.f64 + ctx.f30.f64;
	// frsp f0,f6
	ctx.f0.f64 = double(float(ctx.f6.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82ca83c0
	if (cr6.lt) goto loc_82CA83C0;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_82CA83C0:
	// fctidz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x837b0c10
	ctx.lr = 0x82CA83D8;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82CA83E8;
	sub_82A6A1B8(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,100
	ctx.r4.s64 = 100;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d3d3b0
	ctx.lr = 0x82CA83FC;
	sub_82D3D3B0(ctx, base);
loc_82CA83FC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA840C"))) PPC_WEAK_FUNC(sub_82CA840C);
PPC_FUNC_IMPL(__imp__sub_82CA840C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA8410"))) PPC_WEAK_FUNC(sub_82CA8410);
PPC_FUNC_IMPL(__imp__sub_82CA8410) {
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
	// bl 0x82d86078
	ctx.lr = 0x82CA842C;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca84e4
	if (cr6.eq) goto loc_82CA84E4;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82CA8440;
	sub_82DAB6D0(ctx, base);
	// bl 0x82df16a0
	ctx.lr = 0x82CA8444;
	sub_82DF16A0(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca7bd8
	ctx.lr = 0x82CA8450;
	sub_82CA7BD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca7f00
	ctx.lr = 0x82CA8458;
	sub_82CA7F00(ctx, base);
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82CA8460;
	sub_831F8200(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82ca84a8
	if (!cr6.eq) goto loc_82CA84A8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8291bd40
	ctx.lr = 0x82CA8478;
	sub_8291BD40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ca84a8
	if (cr6.eq) goto loc_82CA84A8;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// li r5,5
	ctx.r5.s64 = 5;
	// ori r4,r4,330
	ctx.r4.u64 = ctx.r4.u64 | 330;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d21730
	ctx.lr = 0x82CA8498;
	sub_82D21730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d9e3d8
	ctx.lr = 0x82CA84A8;
	sub_82D9E3D8(ctx, base);
loc_82CA84A8:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82ca84c8
	if (!cr6.eq) goto loc_82CA84C8;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// li r5,5
	ctx.r5.s64 = 5;
	// ori r4,r4,233
	ctx.r4.u64 = ctx.r4.u64 | 233;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d21730
	ctx.lr = 0x82CA84C8;
	sub_82D21730(ctx, base);
loc_82CA84C8:
	// li r4,226
	ctx.r4.s64 = 226;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1a998
	ctx.lr = 0x82CA84D4;
	sub_82D1A998(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CA84E4;
	sub_82D19788(ctx, base);
loc_82CA84E4:
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

__attribute__((alias("__imp__sub_82CA8500"))) PPC_WEAK_FUNC(sub_82CA8500);
PPC_FUNC_IMPL(__imp__sub_82CA8500) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stw r11,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r10,7504
	ctx.r5.s64 = ctx.r10.s64 + 7504;
	// b 0x82d20da8
	sub_82D20DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA8524"))) PPC_WEAK_FUNC(sub_82CA8524);
PPC_FUNC_IMPL(__imp__sub_82CA8524) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA8528"))) PPC_WEAK_FUNC(sub_82CA8528);
PPC_FUNC_IMPL(__imp__sub_82CA8528) {
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
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ca857c
	if (!cr6.eq) goto loc_82CA857C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r11,7568
	ctx.r3.s64 = ctx.r11.s64 + 7568;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f8b8
	ctx.lr = 0x82CA8560;
	sub_82D2F8B8(ctx, base);
	// stw r3,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r3.u32);
	// lis r4,206
	ctx.r4.s64 = 13500416;
	// ori r4,r4,269
	ctx.r4.u64 = ctx.r4.u64 | 269;
	// bl 0x82d2ada8
	ctx.lr = 0x82CA8570;
	sub_82D2ADA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// bl 0x83103100
	ctx.lr = 0x82CA857C;
	sub_83103100(ctx, base);
loc_82CA857C:
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

__attribute__((alias("__imp__sub_82CA8590"))) PPC_WEAK_FUNC(sub_82CA8590);
PPC_FUNC_IMPL(__imp__sub_82CA8590) {
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
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r10,68
	ctx.r10.s64 = 68;
	// lwz r9,96(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// divw r5,r8,r10
	ctx.r5.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d20f50
	ctx.lr = 0x82CA85C8;
	sub_82D20F50(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d21e48
	ctx.lr = 0x82CA85D8;
	sub_82D21E48(ctx, base);
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

__attribute__((alias("__imp__sub_82CA85F0"))) PPC_WEAK_FUNC(sub_82CA85F0);
PPC_FUNC_IMPL(__imp__sub_82CA85F0) {
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
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r10,68
	ctx.r10.s64 = 68;
	// lwz r9,96(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// divw r5,r8,r10
	ctx.r5.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d20f50
	ctx.lr = 0x82CA8628;
	sub_82D20F50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d21e48
	ctx.lr = 0x82CA8638;
	sub_82D21E48(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r6,-31776
	ctx.r6.s64 = -2082471936;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,1652(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1652);
	// bl 0x82d19b10
	ctx.lr = 0x82CA8654;
	sub_82D19B10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d1cda8
	ctx.lr = 0x82CA8660;
	sub_82D1CDA8(ctx, base);
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

__attribute__((alias("__imp__sub_82CA8678"))) PPC_WEAK_FUNC(sub_82CA8678);
PPC_FUNC_IMPL(__imp__sub_82CA8678) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82ca86dc
	if (cr6.eq) goto loc_82CA86DC;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82ca8700
	if (!cr6.eq) goto loc_82CA8700;
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82ca86b8
	if (!cr6.lt) goto loc_82CA86B8;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r10,68
	ctx.r10.s64 = 68;
	// lwz r9,96(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r11,r8,r10
	ctx.r11.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// b 0x82ca8700
	goto loc_82CA8700;
loc_82CA86B8:
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
	// subf r5,r6,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r6.s64;
	// b 0x82ca8700
	goto loc_82CA8700;
loc_82CA86DC:
	// lis r11,20971
	ctx.r11.s64 = 1374355456;
	// lwz r9,132(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
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
	// subf r5,r5,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r5.s64;
loc_82CA8700:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f2,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// b 0x82d1ebf8
	sub_82D1EBF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA8718"))) PPC_WEAK_FUNC(sub_82CA8718);
PPC_FUNC_IMPL(__imp__sub_82CA8718) {
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
	// bl 0x82d19a78
	ctx.lr = 0x82CA8730;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca877c
	if (cr6.eq) goto loc_82CA877C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CA8740;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// li r4,9
	ctx.r4.s64 = 9;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d2d510
	ctx.lr = 0x82CA8750;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca8768
	if (cr6.eq) goto loc_82CA8768;
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,367
	ctx.r4.u64 = ctx.r4.u64 | 367;
	// bl 0x82d30340
	ctx.lr = 0x82CA8768;
	sub_82D30340(ctx, base);
loc_82CA8768:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19730
	ctx.lr = 0x82CA8774;
	sub_82D19730(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca8590
	ctx.lr = 0x82CA877C;
	sub_82CA8590(ctx, base);
loc_82CA877C:
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

__attribute__((alias("__imp__sub_82CA8794"))) PPC_WEAK_FUNC(sub_82CA8794);
PPC_FUNC_IMPL(__imp__sub_82CA8794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA8798"))) PPC_WEAK_FUNC(sub_82CA8798);
PPC_FUNC_IMPL(__imp__sub_82CA8798) {
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x831156e8
	ctx.lr = 0x82CA87BC;
	sub_831156E8(ctx, base);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311bf98
	ctx.lr = 0x82CA87C8;
	sub_8311BF98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,224
	ctx.r5.s64 = 224;
	// bl 0x831ce980
	ctx.lr = 0x82CA87D8;
	sub_831CE980(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r11,r11,1716
	ctx.r11.s64 = ctx.r11.s64 + 1716;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ca87fc
	if (!cr6.eq) goto loc_82CA87FC;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82ca8824
	goto loc_82CA8824;
loc_82CA87FC:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r7,140(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 140);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82ca881c
	if (!cr6.eq) goto loc_82CA881C;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82ca8820
	if (cr6.eq) goto loc_82CA8820;
loc_82CA881C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CA8820:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82CA8824:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ca8860
	if (!cr6.eq) goto loc_82CA8860;
	// addi r11,r1,152
	ctx.r11.s64 = ctx.r1.s64 + 152;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82CA8838:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ca8838
	if (!cr6.eq) goto loc_82CA8838;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CA8860;
	sub_8259CC28(ctx, base);
loc_82CA8860:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA8874"))) PPC_WEAK_FUNC(sub_82CA8874);
PPC_FUNC_IMPL(__imp__sub_82CA8874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA8878"))) PPC_WEAK_FUNC(sub_82CA8878);
PPC_FUNC_IMPL(__imp__sub_82CA8878) {
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
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x831156e8
	ctx.lr = 0x82CA889C;
	sub_831156E8(ctx, base);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c260
	ctx.lr = 0x82CA88A8;
	sub_8311C260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,632
	ctx.r5.s64 = 632;
	// bl 0x831ce980
	ctx.lr = 0x82CA88B8;
	sub_831CE980(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lhz r8,140(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 140);
	// addi r11,r11,1780
	ctx.r11.s64 = ctx.r11.s64 + 1780;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ca88e4
	if (!cr6.eq) goto loc_82CA88E4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82ca88e8
	if (cr6.eq) goto loc_82CA88E8;
loc_82CA88E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CA88E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ca8924
	if (!cr6.eq) goto loc_82CA8924;
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82CA88FC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ca88fc
	if (!cr6.eq) goto loc_82CA88FC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CA8924;
	sub_8259CC28(ctx, base);
loc_82CA8924:
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA8938"))) PPC_WEAK_FUNC(sub_82CA8938);
PPC_FUNC_IMPL(__imp__sub_82CA8938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CA8940;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r28,-1
	ctx.r28.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82CA8990;
	sub_8259CB28(ctx, base);
	// stw r27,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r27.u32);
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stb r29,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r29.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,40
	ctx.r4.s64 = ctx.r30.s64 + 40;
	// bl 0x8259cb28
	ctx.lr = 0x82CA89B0;
	sub_8259CB28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA89BC"))) PPC_WEAK_FUNC(sub_82CA89BC);
PPC_FUNC_IMPL(__imp__sub_82CA89BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA89C0"))) PPC_WEAK_FUNC(sub_82CA89C0);
PPC_FUNC_IMPL(__imp__sub_82CA89C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CA89C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ca8a48
	if (cr6.eq) goto loc_82CA8A48;
	// addi r31,r3,60
	ctx.r31.s64 = ctx.r3.s64 + 60;
	// li r28,2
	ctx.r28.s64 = 2;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82CA89E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ca8a04
	if (cr6.lt) goto loc_82CA8A04;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// bl 0x825952b8
	ctx.lr = 0x82CA8A04;
	sub_825952B8(ctx, base);
loc_82CA8A04:
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
	// blt cr6,0x82ca8a2c
	if (cr6.lt) goto loc_82CA8A2C;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,-48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// bl 0x825952b8
	ctx.lr = 0x82CA8A2C;
	sub_825952B8(ctx, base);
loc_82CA8A2C:
	// stw r29,-28(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28, ctx.r29.u32);
	// stw r30,-32(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32, ctx.r30.u32);
	// stb r30,-48(r31)
	PPC_STORE_U8(ctx.r31.u32 + -48, ctx.r30.u8);
	// addi r31,r31,68
	ctx.r31.s64 = ctx.r31.s64 + 68;
	// addi r11,r31,-60
	ctx.r11.s64 = ctx.r31.s64 + -60;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bne cr6,0x82ca89e8
	if (!cr6.eq) goto loc_82CA89E8;
loc_82CA8A48:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA8A50"))) PPC_WEAK_FUNC(sub_82CA8A50);
PPC_FUNC_IMPL(__imp__sub_82CA8A50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CA8A58;
	__savegprlr_28(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,7122
	ctx.r30.s64 = ctx.r11.s64 + 7122;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r30,390
	ctx.r4.s64 = ctx.r30.s64 + 390;
	// bl 0x8259cc28
	ctx.lr = 0x82CA8A80;
	sub_8259CC28(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,14
	cr6.compare<uint32_t>(ctx.r11.u32, 14, xer);
	// bgt cr6,0x82ca8eb0
	if (cr6.gt) goto loc_82CA8EB0;
	// lis r12,-32053
	ctx.r12.s64 = -2100625408;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-30040
	ctx.r12.s64 = ctx.r12.s64 + -30040;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82CA8AE4;
	case 1:
		goto loc_82CA8B00;
	case 2:
		goto loc_82CA8B1C;
	case 3:
		goto loc_82CA8B6C;
	case 4:
		goto loc_82CA8BBC;
	case 5:
		goto loc_82CA8C0C;
	case 6:
		goto loc_82CA8C3C;
	case 7:
		goto loc_82CA8C6C;
	case 8:
		goto loc_82CA8C88;
	case 9:
		goto loc_82CA8EB0;
	case 10:
		goto loc_82CA8CA0;
	case 11:
		goto loc_82CA8CF0;
	case 12:
		goto loc_82CA8D40;
	case 13:
		goto loc_82CA8D58;
	case 14:
		goto loc_82CA8D70;
	default:
		return;
	}
	// lwz r22,-29980(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29980);
	// lwz r22,-29952(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29952);
	// lwz r22,-29924(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29924);
	// lwz r22,-29844(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29844);
	// lwz r22,-29764(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29764);
	// lwz r22,-29684(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29684);
	// lwz r22,-29636(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29636);
	// lwz r22,-29588(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29588);
	// lwz r22,-29560(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29560);
	// lwz r22,-29008(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29008);
	// lwz r22,-29536(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29536);
	// lwz r22,-29456(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29456);
	// lwz r22,-29376(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29376);
	// lwz r22,-29352(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29352);
	// lwz r22,-29328(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29328);
loc_82CA8AE4:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r4,r4,372
	ctx.r4.u64 = ctx.r4.u64 | 372;
	// bl 0x82d042a8
	ctx.lr = 0x82CA8AF8;
	sub_82D042A8(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA8B00:
	// lis r4,641
	ctx.r4.s64 = 42008576;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r4,r4,222
	ctx.r4.u64 = ctx.r4.u64 | 222;
	// bl 0x82d042a8
	ctx.lr = 0x82CA8B14;
	sub_82D042A8(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA8B1C:
	// addi r4,r30,394
	ctx.r4.s64 = ctx.r30.s64 + 394;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x837b0c10
	ctx.lr = 0x82CA8B28;
	sub_837B0C10(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82ca8798
	ctx.lr = 0x82CA8B38;
	sub_82CA8798(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ca8b4c
	if (!cr6.lt) goto loc_82CA8B4C;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
loc_82CA8B4C:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r4,r4,373
	ctx.r4.u64 = ctx.r4.u64 | 373;
	// bl 0x82d042a8
	ctx.lr = 0x82CA8B5C;
	sub_82D042A8(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8387e8e0
	ctx.lr = 0x82CA8B64;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA8B6C:
	// addi r4,r30,398
	ctx.r4.s64 = ctx.r30.s64 + 398;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x82CA8B78;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82ca8798
	ctx.lr = 0x82CA8B88;
	sub_82CA8798(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ca8b9c
	if (!cr6.lt) goto loc_82CA8B9C;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
loc_82CA8B9C:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r4,r4,377
	ctx.r4.u64 = ctx.r4.u64 | 377;
	// bl 0x82d042a8
	ctx.lr = 0x82CA8BAC;
	sub_82D042A8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x82CA8BB4;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA8BBC:
	// addi r4,r30,402
	ctx.r4.s64 = ctx.r30.s64 + 402;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82CA8BC8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82ca8878
	ctx.lr = 0x82CA8BD8;
	sub_82CA8878(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ca8bec
	if (!cr6.lt) goto loc_82CA8BEC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_82CA8BEC:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r4,r4,374
	ctx.r4.u64 = ctx.r4.u64 | 374;
	// bl 0x82d042a8
	ctx.lr = 0x82CA8BFC;
	sub_82D042A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82CA8C04;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA8C0C:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ca8c20
	if (cr6.lt) goto loc_82CA8C20;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82CA8C20:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// ori r4,r4,376
	ctx.r4.u64 = ctx.r4.u64 | 376;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d042a8
	ctx.lr = 0x82CA8C34;
	sub_82D042A8(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA8C3C:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ca8c50
	if (cr6.lt) goto loc_82CA8C50;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82CA8C50:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// ori r4,r4,442
	ctx.r4.u64 = ctx.r4.u64 | 442;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d042a8
	ctx.lr = 0x82CA8C64;
	sub_82D042A8(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA8C6C:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r4,r4,498
	ctx.r4.u64 = ctx.r4.u64 | 498;
	// bl 0x82d042a8
	ctx.lr = 0x82CA8C80;
	sub_82D042A8(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA8C88:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r4,r4,403
	ctx.r4.u64 = ctx.r4.u64 | 403;
	// bl 0x82d04220
	ctx.lr = 0x82CA8C98;
	sub_82D04220(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA8CA0:
	// addi r4,r30,406
	ctx.r4.s64 = ctx.r30.s64 + 406;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82CA8CAC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82ca8798
	ctx.lr = 0x82CA8CBC;
	sub_82CA8798(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ca8cd0
	if (!cr6.lt) goto loc_82CA8CD0;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
loc_82CA8CD0:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r4,r4,378
	ctx.r4.u64 = ctx.r4.u64 | 378;
	// bl 0x82d042a8
	ctx.lr = 0x82CA8CE0;
	sub_82D042A8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82CA8CE8;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA8CF0:
	// addi r4,r30,410
	ctx.r4.s64 = ctx.r30.s64 + 410;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x82CA8CFC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82ca8878
	ctx.lr = 0x82CA8D0C;
	sub_82CA8878(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ca8d20
	if (!cr6.lt) goto loc_82CA8D20;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
loc_82CA8D20:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r4,r4,378
	ctx.r4.u64 = ctx.r4.u64 | 378;
	// bl 0x82d042a8
	ctx.lr = 0x82CA8D30;
	sub_82D042A8(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x82CA8D38;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA8D40:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r4,r4,188
	ctx.r4.u64 = ctx.r4.u64 | 188;
	// bl 0x82d04220
	ctx.lr = 0x82CA8D50;
	sub_82D04220(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA8D58:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r4,r4,416
	ctx.r4.u64 = ctx.r4.u64 | 416;
	// bl 0x82d04220
	ctx.lr = 0x82CA8D68;
	sub_82D04220(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA8D70:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82ca8d98
	if (!cr6.eq) goto loc_82CA8D98;
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r4,r4,511
	ctx.r4.u64 = ctx.r4.u64 | 511;
	// bl 0x82d042a8
	ctx.lr = 0x82CA8D90;
	sub_82D042A8(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA8D98:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82ca8db8
	if (!cr6.eq) goto loc_82CA8DB8;
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r4,r4,166
	ctx.r4.u64 = ctx.r4.u64 | 166;
	// bl 0x82d04220
	ctx.lr = 0x82CA8DB0;
	sub_82D04220(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA8DB8:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82ca8e14
	if (!cr6.eq) goto loc_82CA8E14;
	// addi r4,r30,414
	ctx.r4.s64 = ctx.r30.s64 + 414;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x837b0c10
	ctx.lr = 0x82CA8DCC;
	sub_837B0C10(ctx, base);
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// ori r4,r4,414
	ctx.r4.u64 = ctx.r4.u64 | 414;
	// bl 0x82d04220
	ctx.lr = 0x82CA8DDC;
	sub_82D04220(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r5,240(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ca8df0
	if (!cr6.lt) goto loc_82CA8DF0;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
loc_82CA8DF0:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r4,r4,167
	ctx.r4.u64 = ctx.r4.u64 | 167;
	// bl 0x82d042a8
	ctx.lr = 0x82CA8E04;
	sub_82D042A8(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8387e8e0
	ctx.lr = 0x82CA8E0C;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA8E14:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bne cr6,0x82ca8e34
	if (!cr6.eq) goto loc_82CA8E34;
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// ori r4,r4,414
	ctx.r4.u64 = ctx.r4.u64 | 414;
	// bl 0x82d04220
	ctx.lr = 0x82CA8E2C;
	sub_82D04220(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA8E34:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x82ca8e50
	if (!cr6.eq) goto loc_82CA8E50;
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// ori r4,r4,555
	ctx.r4.u64 = ctx.r4.u64 | 555;
	// bl 0x82d04220
	ctx.lr = 0x82CA8E48;
	sub_82D04220(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA8E50:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82ca8e6c
	if (!cr6.eq) goto loc_82CA8E6C;
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// ori r4,r4,556
	ctx.r4.u64 = ctx.r4.u64 | 556;
	// bl 0x82d04220
	ctx.lr = 0x82CA8E64;
	sub_82D04220(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA8E6C:
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x82ca8e88
	if (!cr6.eq) goto loc_82CA8E88;
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// ori r4,r4,557
	ctx.r4.u64 = ctx.r4.u64 | 557;
	// bl 0x82d04220
	ctx.lr = 0x82CA8E80;
	sub_82D04220(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA8E88:
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bne cr6,0x82ca8ea8
	if (!cr6.eq) goto loc_82CA8EA8;
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// ori r4,r4,625
	ctx.r4.u64 = ctx.r4.u64 | 625;
	// bl 0x82d042a8
	ctx.lr = 0x82CA8EA0;
	sub_82D042A8(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CA8EA8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8259d6c0
	ctx.lr = 0x82CA8EB0;
	sub_8259D6C0(ctx, base);
loc_82CA8EB0:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA8EB8"))) PPC_WEAK_FUNC(sub_82CA8EB8);
PPC_FUNC_IMPL(__imp__sub_82CA8EB8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,7540
	ctx.r4.s64 = ctx.r11.s64 + 7540;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82CA8EE8;
	sub_8259CC28(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x82ca8f8c
	if (cr6.gt) goto loc_82CA8F8C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82ca8f28
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CA8F28;
	// bdzf 4*cr6+eq,0x82ca8f34
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CA8F34;
	// bdzf 4*cr6+eq,0x82ca8f40
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CA8F40;
	// bdzf 4*cr6+eq,0x82ca8f4c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CA8F4C;
	// bdzf 4*cr6+eq,0x82ca8f58
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CA8F58;
	// bdzf 4*cr6+eq,0x82ca8f64
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CA8F64;
	// bdzf 4*cr6+eq,0x82ca8f70
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CA8F70;
	// bne cr6,0x82ca8f7c
	if (!cr6.eq) goto loc_82CA8F7C;
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// ori r4,r4,368
	ctx.r4.u64 = ctx.r4.u64 | 368;
	// b 0x82ca8f84
	goto loc_82CA8F84;
loc_82CA8F28:
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// ori r4,r4,272
	ctx.r4.u64 = ctx.r4.u64 | 272;
	// b 0x82ca8f84
	goto loc_82CA8F84;
loc_82CA8F34:
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// ori r4,r4,193
	ctx.r4.u64 = ctx.r4.u64 | 193;
	// b 0x82ca8f84
	goto loc_82CA8F84;
loc_82CA8F40:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// ori r4,r4,380
	ctx.r4.u64 = ctx.r4.u64 | 380;
	// b 0x82ca8f84
	goto loc_82CA8F84;
loc_82CA8F4C:
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// ori r4,r4,312
	ctx.r4.u64 = ctx.r4.u64 | 312;
	// b 0x82ca8f84
	goto loc_82CA8F84;
loc_82CA8F58:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// ori r4,r4,626
	ctx.r4.u64 = ctx.r4.u64 | 626;
	// b 0x82ca8f84
	goto loc_82CA8F84;
loc_82CA8F64:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// ori r4,r4,627
	ctx.r4.u64 = ctx.r4.u64 | 627;
	// b 0x82ca8f84
	goto loc_82CA8F84;
loc_82CA8F70:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// ori r4,r4,628
	ctx.r4.u64 = ctx.r4.u64 | 628;
	// b 0x82ca8f84
	goto loc_82CA8F84;
loc_82CA8F7C:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// ori r4,r4,629
	ctx.r4.u64 = ctx.r4.u64 | 629;
loc_82CA8F84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d04220
	ctx.lr = 0x82CA8F8C;
	sub_82D04220(ctx, base);
loc_82CA8F8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA8FA4"))) PPC_WEAK_FUNC(sub_82CA8FA4);
PPC_FUNC_IMPL(__imp__sub_82CA8FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA8FA8"))) PPC_WEAK_FUNC(sub_82CA8FA8);
PPC_FUNC_IMPL(__imp__sub_82CA8FA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CA8FB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r10,68
	ctx.r10.s64 = 68;
	// lwz r9,96(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmplw cr6,r5,r7
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, xer);
	// bgt cr6,0x82ca9248
	if (cr6.gt) goto loc_82CA9248;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mulli r10,r5,68
	ctx.r10.s64 = ctx.r5.s64 * 68;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82ca8938
	ctx.lr = 0x82CA8FEC;
	sub_82CA8938(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r30,r11,7155
	ctx.r30.s64 = ctx.r11.s64 + 7155;
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// bl 0x837b0c10
	ctx.lr = 0x82CA9000;
	sub_837B0C10(ctx, base);
	// addi r4,r30,-1
	ctx.r4.s64 = ctx.r30.s64 + -1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82CA900C;
	sub_837B0C10(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r5,228(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// bl 0x82a6b9a8
	ctx.lr = 0x82CA901C;
	sub_82A6B9A8(ctx, base);
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,1656(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1656);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CA903C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca9080
	if (cr6.eq) goto loc_82CA9080;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ca905c
	if (!cr6.lt) goto loc_82CA905C;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_82CA905C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82CA9064;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CA9078;
	sub_82D291E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82CA9080;
	sub_8387E8E0(ctx, base);
loc_82CA9080:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82CA908C;
	sub_837B0C10(ctx, base);
	// addi r5,r1,232
	ctx.r5.s64 = ctx.r1.s64 + 232;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ca8eb8
	ctx.lr = 0x82CA909C;
	sub_82CA8EB8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,1660(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1660);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CA90B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca90fc
	if (cr6.eq) goto loc_82CA90FC;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ca90d8
	if (!cr6.lt) goto loc_82CA90D8;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82CA90D8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82CA90E0;
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
	ctx.lr = 0x82CA90F4;
	sub_82D291E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82CA90FC;
	sub_8387E8E0(ctx, base);
loc_82CA90FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,1664(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1664);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CA9118;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca915c
	if (cr6.eq) goto loc_82CA915C;
	// lwz r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r4,236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ca9138
	if (!cr6.lt) goto loc_82CA9138;
	// addi r4,r1,236
	ctx.r4.s64 = ctx.r1.s64 + 236;
loc_82CA9138:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82CA9140;
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
	ctx.lr = 0x82CA9154;
	sub_82D291E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82CA915C;
	sub_8387E8E0(ctx, base);
loc_82CA915C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,1668(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1668);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CA9178;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca91bc
	if (cr6.eq) goto loc_82CA91BC;
	// lwz r11,284(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r4,264(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ca9198
	if (!cr6.lt) goto loc_82CA9198;
	// addi r4,r1,264
	ctx.r4.s64 = ctx.r1.s64 + 264;
loc_82CA9198:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82CA91A0;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CA91B4;
	sub_82D291E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82CA91BC;
	sub_8387E8E0(ctx, base);
loc_82CA91BC:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r29,2
	ctx.r29.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ca91dc
	if (cr6.lt) goto loc_82CA91DC;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82CA91DC;
	sub_825952B8(ctx, base);
loc_82CA91DC:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x82ca920c
	if (cr6.lt) goto loc_82CA920C;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82CA920C;
	sub_825952B8(ctx, base);
loc_82CA920C:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// blt cr6,0x82ca9234
	if (cr6.lt) goto loc_82CA9234;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x82CA9234;
	sub_825952B8(ctx, base);
loc_82CA9234:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82c2bd78
	ctx.lr = 0x82CA9248;
	sub_82C2BD78(ctx, base);
loc_82CA9248:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA9250"))) PPC_WEAK_FUNC(sub_82CA9250);
PPC_FUNC_IMPL(__imp__sub_82CA9250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ca93f0
	if (!cr6.eq) goto loc_82CA93F0;
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// beq cr6,0x82ca9288
	if (cr6.eq) goto loc_82CA9288;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
loc_82CA9288:
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// bgt cr6,0x82ca93f0
	if (cr6.gt) goto loc_82CA93F0;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82ca92b4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CA92B4;
	// bdzf 4*cr6+eq,0x82ca9308
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CA9308;
	// bne cr6,0x82ca9384
	if (!cr6.eq) goto loc_82CA9384;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r9.u32);
	// stw r9,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r9.u32);
	// b 0x82ca938c
	goto loc_82CA938C;
loc_82CA92B4:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r10,68
	ctx.r10.s64 = 68;
	// lwz r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r9,0
	ctx.r9.s64 = 0;
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// divw. r10,r7,r10
	ctx.r10.s32 = PPCDivide(ctx.r7.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82ca92dc
	if (!cr0.eq) goto loc_82CA92DC;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r9,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r9.u32);
	// b 0x82ca9388
	goto loc_82CA9388;
loc_82CA92DC:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mulli r10,r10,68
	ctx.r10.s64 = ctx.r10.s64 * 68;
	// lwz r8,112(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-68(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -68);
	// stw r9,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subfc r6,r8,r11
	xer.ca = ctx.r11.u32 >= ctx.r8.u32;
	ctx.r6.s64 = ctx.r11.s64 - ctx.r8.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 & ctx.r11.u64;
	// b 0x82ca9388
	goto loc_82CA9388;
loc_82CA9308:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r10,68
	ctx.r10.s64 = 68;
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw. r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82ca9330
	if (!cr0.eq) goto loc_82CA9330;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// b 0x82ca9388
	goto loc_82CA9388;
loc_82CA9330:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, xer);
	// blt cr6,0x82ca9350
	if (cr6.lt) goto loc_82CA9350;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r11,r11,-100
	ctx.r11.s64 = ctx.r11.s64 + -100;
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// b 0x82ca9388
	goto loc_82CA9388;
loc_82CA9350:
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
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
	// bne 0x82ca9374
	if (!cr0.eq) goto loc_82CA9374;
	// li r10,100
	ctx.r10.s64 = 100;
loc_82CA9374:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// b 0x82ca9388
	goto loc_82CA9388;
loc_82CA9384:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
loc_82CA9388:
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
loc_82CA938C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,7544
	ctx.r4.s64 = ctx.r11.s64 + 7544;
	// bl 0x837b0c10
	ctx.lr = 0x82CA939C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x82CA93A8;
	sub_82D894E0(ctx, base);
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82CA93B4;
	sub_8387E8E0(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ca93d4
	if (!cr6.eq) goto loc_82CA93D4;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// b 0x82ca93f4
	goto loc_82CA93F4;
loc_82CA93D4:
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r10.u32);
	// stw r9,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// b 0x82ca93f4
	goto loc_82CA93F4;
loc_82CA93F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CA93F4:
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

__attribute__((alias("__imp__sub_82CA940C"))) PPC_WEAK_FUNC(sub_82CA940C);
PPC_FUNC_IMPL(__imp__sub_82CA940C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA9410"))) PPC_WEAK_FUNC(sub_82CA9410);
PPC_FUNC_IMPL(__imp__sub_82CA9410) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CA9418;
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
	// beq cr6,0x82ca9488
	if (cr6.eq) goto loc_82CA9488;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_82CA9434:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
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
	// bl 0x8259cb28
	ctx.lr = 0x82CA9460;
	sub_8259CB28(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x8259cb28
	ctx.lr = 0x82CA9474;
	sub_8259CB28(ctx, base);
	// addi r31,r31,68
	ctx.r31.s64 = ctx.r31.s64 + 68;
	// addi r30,r30,68
	ctx.r30.s64 = ctx.r30.s64 + 68;
	// addi r8,r31,-8
	ctx.r8.s64 = ctx.r31.s64 + -8;
	// cmplw cr6,r8,r28
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, xer);
	// bne cr6,0x82ca9434
	if (!cr6.eq) goto loc_82CA9434;
loc_82CA9488:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA9494"))) PPC_WEAK_FUNC(sub_82CA9494);
PPC_FUNC_IMPL(__imp__sub_82CA9494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA9498"))) PPC_WEAK_FUNC(sub_82CA9498);
PPC_FUNC_IMPL(__imp__sub_82CA9498) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82CA94A0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ca9540
	if (cr6.eq) goto loc_82CA9540;
	// addi r31,r5,32
	ctx.r31.s64 = ctx.r5.s64 + 32;
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// li r26,15
	ctx.r26.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_82CA94C8:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82ca9528
	if (cr6.eq) goto loc_82CA9528;
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// addi r3,r31,-20
	ctx.r3.s64 = ctx.r31.s64 + -20;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r10,-4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// stw r10,-28(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28, ctx.r10.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r9,-24(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24, ctx.r9.u32);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// stw r29,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r29.u32);
	// stb r29,-20(r31)
	PPC_STORE_U8(ctx.r31.u32 + -20, ctx.r29.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82CA9508;
	sub_8259CB28(ctx, base);
	// stw r26,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stb r29,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r29.u8);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// bl 0x8259cb28
	ctx.lr = 0x82CA9528;
	sub_8259CB28(ctx, base);
loc_82CA9528:
	// addi r30,r30,68
	ctx.r30.s64 = ctx.r30.s64 + 68;
	// addi r28,r28,68
	ctx.r28.s64 = ctx.r28.s64 + 68;
	// addi r11,r30,-8
	ctx.r11.s64 = ctx.r30.s64 + -8;
	// addi r31,r31,68
	ctx.r31.s64 = ctx.r31.s64 + 68;
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// bne cr6,0x82ca94c8
	if (!cr6.eq) goto loc_82CA94C8;
loc_82CA9540:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA954C"))) PPC_WEAK_FUNC(sub_82CA954C);
PPC_FUNC_IMPL(__imp__sub_82CA954C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA9550"))) PPC_WEAK_FUNC(sub_82CA9550);
PPC_FUNC_IMPL(__imp__sub_82CA9550) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82ca8fa8
	ctx.lr = 0x82CA9568;
	sub_82CA8FA8(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82CA957C;
	sub_82D2B608(ctx, base);
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

__attribute__((alias("__imp__sub_82CA9590"))) PPC_WEAK_FUNC(sub_82CA9590);
PPC_FUNC_IMPL(__imp__sub_82CA9590) {
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
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82ca95d8
	if (!cr6.eq) goto loc_82CA95D8;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, xer);
	// ble cr6,0x82ca95d8
	if (!cr6.gt) goto loc_82CA95D8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82ca9250
	ctx.lr = 0x82CA95C4;
	sub_82CA9250(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ca95d8
	if (!cr6.eq) goto loc_82CA95D8;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
loc_82CA95D8:
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

__attribute__((alias("__imp__sub_82CA95EC"))) PPC_WEAK_FUNC(sub_82CA95EC);
PPC_FUNC_IMPL(__imp__sub_82CA95EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA95F0"))) PPC_WEAK_FUNC(sub_82CA95F0);
PPC_FUNC_IMPL(__imp__sub_82CA95F0) {
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
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82ca9638
	if (!cr6.eq) goto loc_82CA9638;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, xer);
	// ble cr6,0x82ca9638
	if (!cr6.gt) goto loc_82CA9638;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82ca9250
	ctx.lr = 0x82CA9624;
	sub_82CA9250(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ca9638
	if (!cr6.eq) goto loc_82CA9638;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
loc_82CA9638:
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

__attribute__((alias("__imp__sub_82CA964C"))) PPC_WEAK_FUNC(sub_82CA964C);
PPC_FUNC_IMPL(__imp__sub_82CA964C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA9650"))) PPC_WEAK_FUNC(sub_82CA9650);
PPC_FUNC_IMPL(__imp__sub_82CA9650) {
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
	// beq cr6,0x82ca969c
	if (cr6.eq) goto loc_82CA969C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82ca9410
	ctx.lr = 0x82CA9684;
	sub_82CA9410(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82ca89c0
	ctx.lr = 0x82CA9698;
	sub_82CA89C0(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82CA969C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA96B4"))) PPC_WEAK_FUNC(sub_82CA96B4);
PPC_FUNC_IMPL(__imp__sub_82CA96B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA96B8"))) PPC_WEAK_FUNC(sub_82CA96B8);
PPC_FUNC_IMPL(__imp__sub_82CA96B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CA96C0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,963
	ctx.r11.s64 = 63111168;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,50115
	ctx.r10.u64 = ctx.r11.u64 | 50115;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82ca96e4
	if (!cr6.gt) goto loc_82CA96E4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82CA96E4;
	sub_831CC150(ctx, base);
loc_82CA96E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r26,68
	ctx.r26.s64 = 68;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r26
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x82ca978c
	if (!cr6.lt) goto loc_82CA978C;
	// li r27,2
	ctx.r27.s64 = 2;
	// mulli r28,r4,68
	ctx.r28.s64 = ctx.r4.s64 * 68;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82CA971C;
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
	// bl 0x82ca9498
	ctx.lr = 0x82CA9740;
	sub_82CA9498(ctx, base);
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
	// beq cr6,0x82ca9774
	if (cr6.eq) goto loc_82CA9774;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82ca89c0
	ctx.lr = 0x82CA9764;
	sub_82CA89C0(ctx, base);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82CA9774;
	sub_825952B8(ctx, base);
loc_82CA9774:
	// mulli r11,r26,68
	ctx.r11.s64 = ctx.r26.s64 * 68;
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
loc_82CA978C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA9794"))) PPC_WEAK_FUNC(sub_82CA9794);
PPC_FUNC_IMPL(__imp__sub_82CA9794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA9798"))) PPC_WEAK_FUNC(sub_82CA9798);
PPC_FUNC_IMPL(__imp__sub_82CA9798) {
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
	// addi r9,r11,7672
	ctx.r9.s64 = ctx.r11.s64 + 7672;
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
	// beq cr6,0x82ca97fc
	if (cr6.eq) goto loc_82CA97FC;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82ca89c0
	ctx.lr = 0x82CA97E8;
	sub_82CA89C0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CA97FC;
	sub_825952B8(ctx, base);
loc_82CA97FC:
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
	ctx.lr = 0x82CA9814;
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

__attribute__((alias("__imp__sub_82CA982C"))) PPC_WEAK_FUNC(sub_82CA982C);
PPC_FUNC_IMPL(__imp__sub_82CA982C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA9830"))) PPC_WEAK_FUNC(sub_82CA9830);
PPC_FUNC_IMPL(__imp__sub_82CA9830) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,963
	ctx.r10.s64 = 63111168;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,68
	ctx.r9.s64 = 68;
	// ori r8,r10,50115
	ctx.r8.u64 = ctx.r10.u64 | 50115;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ca9864
	if (!cr6.lt) goto loc_82CA9864;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82CA9864:
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
	// blt cr6,0x82ca9894
	if (cr6.lt) goto loc_82CA9894;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82CA9894:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ca98a0
	if (!cr6.lt) goto loc_82CA98A0;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82CA98A0:
	// b 0x82ca96b8
	sub_82CA96B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA98A4"))) PPC_WEAK_FUNC(sub_82CA98A4);
PPC_FUNC_IMPL(__imp__sub_82CA98A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA98A8"))) PPC_WEAK_FUNC(sub_82CA98A8);
PPC_FUNC_IMPL(__imp__sub_82CA98A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CA98B0;
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
	ctx.lr = 0x82CA98C4;
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
	ctx.lr = 0x82CA98DC;
	sub_82D253F8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,7672
	ctx.r9.s64 = ctx.r11.s64 + 7672;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r30,r31,96
	ctx.r30.s64 = ctx.r31.s64 + 96;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r7,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r7.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stb r11,148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 148, ctx.r11.u8);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ca996c
	if (cr6.eq) goto loc_82CA996C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82ca9410
	ctx.lr = 0x82CA9954;
	sub_82CA9410(ctx, base);
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82ca89c0
	ctx.lr = 0x82CA9968;
	sub_82CA89C0(ctx, base);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
loc_82CA996C:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1816(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1816);
	// bl 0x82d20ae0
	ctx.lr = 0x82CA997C;
	sub_82D20AE0(ctx, base);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1812(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1812);
	// bl 0x82d23390
	ctx.lr = 0x82CA9990;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA999C"))) PPC_WEAK_FUNC(sub_82CA999C);
PPC_FUNC_IMPL(__imp__sub_82CA999C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA99A0"))) PPC_WEAK_FUNC(sub_82CA99A0);
PPC_FUNC_IMPL(__imp__sub_82CA99A0) {
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
	// bl 0x82ca9798
	ctx.lr = 0x82CA99C0;
	sub_82CA9798(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ca99d8
	if (cr6.eq) goto loc_82CA99D8;
	// bl 0x82416268
	ctx.lr = 0x82CA99D4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CA99D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA99F0"))) PPC_WEAK_FUNC(sub_82CA99F0);
PPC_FUNC_IMPL(__imp__sub_82CA99F0) {
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
	// bge cr6,0x82ca9a28
	if (!cr6.lt) goto loc_82CA9A28;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82ca9a2c
	if (!cr6.gt) goto loc_82CA9A2C;
loc_82CA9A28:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82CA9A2C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ca9a7c
	if (cr6.eq) goto loc_82CA9A7C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,68
	ctx.r9.s64 = 68;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x82ca9a60
	if (!cr6.eq) goto loc_82CA9A60;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca9830
	ctx.lr = 0x82CA9A60;
	sub_82CA9830(ctx, base);
loc_82CA9A60:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca9aa8
	if (cr6.eq) goto loc_82CA9AA8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,68
	ctx.r11.s64 = ctx.r30.s64 * 68;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82ca9aa4
	goto loc_82CA9AA4;
loc_82CA9A7C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ca9a94
	if (!cr6.eq) goto loc_82CA9A94;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca9830
	ctx.lr = 0x82CA9A94;
	sub_82CA9830(ctx, base);
loc_82CA9A94:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca9aa8
	if (cr6.eq) goto loc_82CA9AA8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82CA9AA4:
	// bl 0x82ca8938
	ctx.lr = 0x82CA9AA8;
	sub_82CA8938(ctx, base);
loc_82CA9AA8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 + 68;
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

__attribute__((alias("__imp__sub_82CA9ACC"))) PPC_WEAK_FUNC(sub_82CA9ACC);
PPC_FUNC_IMPL(__imp__sub_82CA9ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA9AD0"))) PPC_WEAK_FUNC(sub_82CA9AD0);
PPC_FUNC_IMPL(__imp__sub_82CA9AD0) {
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
	// blt cr6,0x82ca9af8
	if (cr6.lt) goto loc_82CA9AF8;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ca9afc
	goto loc_82CA9AFC;
loc_82CA9AF8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82CA9AFC:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,156
	ctx.r4.s64 = 156;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CA9B18;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca9b30
	if (cr6.eq) goto loc_82CA9B30;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca98a8
	ctx.lr = 0x82CA9B2C;
	sub_82CA98A8(ctx, base);
	// b 0x82ca9b34
	goto loc_82CA9B34;
loc_82CA9B30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CA9B34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA9B4C"))) PPC_WEAK_FUNC(sub_82CA9B4C);
PPC_FUNC_IMPL(__imp__sub_82CA9B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA9B50"))) PPC_WEAK_FUNC(sub_82CA9B50);
PPC_FUNC_IMPL(__imp__sub_82CA9B50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82CA9B58;
	__savegprlr_21(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ca9b78
	if (!cr6.eq) goto loc_82CA9B78;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82CA9B78:
	// addi r24,r29,96
	ctx.r24.s64 = ctx.r29.s64 + 96;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ca9650
	ctx.lr = 0x82CA9B84;
	sub_82CA9650(ctx, base);
	// li r10,100
	ctx.r10.s64 = 100;
	// lwz r25,136(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// lwz r11,228(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 228);
	// lwz r9,212(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 212);
	// lwz r8,208(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 208);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r11,112(r29)
	PPC_STORE_U32(ctx.r29.u32 + 112, ctx.r11.u32);
	// lwz r23,224(r25)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r25.u32 + 224);
	// srawi r22,r7,7
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7F) != 0);
	ctx.r22.s64 = ctx.r7.s32 >> 7;
	// beq cr6,0x82ca9be0
	if (cr6.eq) goto loc_82CA9BE0;
	// lis r9,20971
	ctx.r9.s64 = 1374355456;
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// ori r7,r9,34079
	ctx.r7.u64 = ctx.r9.u64 | 34079;
	// divwu r11,r11,r10
	ctx.r11.u32 = PPCDivide(ctx.r11.u32, ctx.r10.u32);
	// mulhwu r6,r8,r7
	ctx.r6.u64 = (uint64_t(ctx.r8.u32) * uint64_t(ctx.r7.u32)) >> 32;
	// stw r11,116(r29)
	PPC_STORE_U32(ctx.r29.u32 + 116, ctx.r11.u32);
	// rlwinm r5,r6,27,5,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// mulli r4,r5,100
	ctx.r4.s64 = ctx.r5.s64 * 100;
	// subf. r3,r4,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82ca9be0
	if (cr0.eq) goto loc_82CA9BE0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,116(r29)
	PPC_STORE_U32(ctx.r29.u32 + 116, ctx.r11.u32);
loc_82CA9BE0:
	// divwu r11,r23,r10
	ctx.r11.u32 = PPCDivide(ctx.r23.u32, ctx.r10.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r11,120(r29)
	PPC_STORE_U32(ctx.r29.u32 + 120, ctx.r11.u32);
	// bl 0x82ca9650
	ctx.lr = 0x82CA9BF0;
	sub_82CA9650(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// beq cr6,0x82ca9cd0
	if (cr6.eq) goto loc_82CA9CD0;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r21,2
	ctx.r21.s64 = 2;
loc_82CA9C0C:
	// lwz r11,208(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 208);
	// add r10,r27,r23
	ctx.r10.u64 = ctx.r27.u64 + ctx.r23.u64;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// add r30,r26,r11
	ctx.r30.u64 = ctx.r26.u64 + ctx.r11.u64;
	// stb r31,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r31.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r28.u32);
	// addi r5,r30,8
	ctx.r5.s64 = ctx.r30.s64 + 8;
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// stb r31,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r31.u8);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwzx r9,r26,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// bl 0x82ca8a50
	ctx.lr = 0x82CA9C54;
	sub_82CA8A50(ctx, base);
	// addi r5,r30,68
	ctx.r5.s64 = ctx.r30.s64 + 68;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca8a50
	ctx.lr = 0x82CA9C64;
	sub_82CA8A50(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ca99f0
	ctx.lr = 0x82CA9C70;
	sub_82CA99F0(ctx, base);
	// lwz r7,156(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82ca9c8c
	if (cr6.lt) goto loc_82CA9C8C;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x825952b8
	ctx.lr = 0x82CA9C8C;
	sub_825952B8(ctx, base);
loc_82CA9C8C:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r28,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r28.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r31.u8);
	// blt cr6,0x82ca9cb4
	if (cr6.lt) goto loc_82CA9CB4;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x825952b8
	ctx.lr = 0x82CA9CB4;
	sub_825952B8(ctx, base);
loc_82CA9CB4:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// addi r26,r26,128
	ctx.r26.s64 = ctx.r26.s64 + 128;
	// stb r31,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r31.u8);
	// cmplw cr6,r27,r22
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r22.u32, xer);
	// blt cr6,0x82ca9c0c
	if (cr6.lt) goto loc_82CA9C0C;
loc_82CA9CD0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CA9CDC"))) PPC_WEAK_FUNC(sub_82CA9CDC);
PPC_FUNC_IMPL(__imp__sub_82CA9CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CA9CE0"))) PPC_WEAK_FUNC(sub_82CA9CE0);
PPC_FUNC_IMPL(__imp__sub_82CA9CE0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ca9b50
	ctx.lr = 0x82CA9CFC;
	sub_82CA9B50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ca9dd8
	if (cr6.eq) goto loc_82CA9DD8;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r10,68
	ctx.r10.s64 = 68;
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw. r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82ca9de0
	if (!cr0.eq) goto loc_82CA9DE0;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82ca9dc8
	if (cr6.eq) goto loc_82CA9DC8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82ca9dc8
	if (cr6.eq) goto loc_82CA9DC8;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// li r30,4
	ctx.r30.s64 = 4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ca9d4c
	if (cr6.eq) goto loc_82CA9D4C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82ca9db0
	goto loc_82CA9DB0;
loc_82CA9D4C:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,7544
	ctx.r4.s64 = ctx.r10.s64 + 7544;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// bl 0x837b0c10
	ctx.lr = 0x82CA9D64;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x82CA9D70;
	sub_82D894E0(ctx, base);
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82CA9D7C;
	sub_8387E8E0(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ca9d94
	if (!cr6.eq) goto loc_82CA9D94;
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// b 0x82ca9dac
	goto loc_82CA9DAC;
loc_82CA9D94:
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r9,3
	ctx.r9.s64 = 3;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r10.u32);
	// stw r8,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r8.u32);
	// stw r9,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r9.u32);
loc_82CA9DAC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82CA9DB0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ca9dd8
	if (!cr6.eq) goto loc_82CA9DD8;
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ca9e10
	goto loc_82CA9E10;
loc_82CA9DC8:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r11,148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 148, ctx.r11.u8);
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
loc_82CA9DD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ca9e10
	goto loc_82CA9E10;
loc_82CA9DE0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca8590
	ctx.lr = 0x82CA9DE8;
	sub_82CA8590(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca85f0
	ctx.lr = 0x82CA9DF0;
	sub_82CA85F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca8678
	ctx.lr = 0x82CA9DF8;
	sub_82CA8678(ctx, base);
	// lbz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 148);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ca9e0c
	if (!cr6.eq) goto loc_82CA9E0C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 148, ctx.r11.u8);
loc_82CA9E0C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82CA9E10:
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

__attribute__((alias("__imp__sub_82CA9E28"))) PPC_WEAK_FUNC(sub_82CA9E28);
PPC_FUNC_IMPL(__imp__sub_82CA9E28) {
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
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82ca9f40
	if (cr6.gt) goto loc_82CA9F40;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82ca9ef8
	if (cr6.eq) goto loc_82CA9EF8;
	// bdz 0x82ca9e64
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CA9E64;
	// bdz 0x82ca9e74
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CA9E74;
	// b 0x82ca9ebc
	goto loc_82CA9EBC;
loc_82CA9E64:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// b 0x82ca9f90
	goto loc_82CA9F90;
loc_82CA9E74:
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ca9e90
	if (!cr6.eq) goto loc_82CA9E90;
loc_82CA9E80:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// b 0x82ca9f90
	goto loc_82CA9F90;
loc_82CA9E90:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CA9EA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82ca9ef8
	if (!cr6.eq) goto loc_82CA9EF8;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// b 0x82ca9f90
	goto loc_82CA9F90;
loc_82CA9EBC:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ca9e80
	if (cr6.eq) goto loc_82CA9E80;
	// lbz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 108);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82ca9ee4
	if (!cr6.eq) goto loc_82CA9EE4;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// b 0x82ca9f90
	goto loc_82CA9F90;
loc_82CA9EE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca9ce0
	ctx.lr = 0x82CA9EEC;
	sub_82CA9CE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ca9f00
	if (!cr6.eq) goto loc_82CA9F00;
loc_82CA9EF8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ca9f90
	goto loc_82CA9F90;
loc_82CA9F00:
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca9f24
	if (cr6.eq) goto loc_82CA9F24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CA9F20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
loc_82CA9F24:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// b 0x82ca9f90
	goto loc_82CA9F90;
loc_82CA9F40:
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ca9f64
	if (cr6.eq) goto loc_82CA9F64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CA9F60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
loc_82CA9F64:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// bl 0x82ca8528
	ctx.lr = 0x82CA9F78;
	sub_82CA8528(ctx, base);
	// lbz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 148);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ca9f8c
	if (!cr6.eq) goto loc_82CA9F8C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 148, ctx.r11.u8);
loc_82CA9F8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CA9F90:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CA9FA8"))) PPC_WEAK_FUNC(sub_82CA9FA8);
PPC_FUNC_IMPL(__imp__sub_82CA9FA8) {
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
	// lbz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 148);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82caa06c
	if (!cr6.eq) goto loc_82CAA06C;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82caa05c
	if (!cr6.eq) goto loc_82CAA05C;
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82caa064
	if (!cr6.eq) goto loc_82CAA064;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stw r30,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// addi r4,r10,7544
	ctx.r4.s64 = ctx.r10.s64 + 7544;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// bl 0x837b0c10
	ctx.lr = 0x82CAA008;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x82CAA014;
	sub_82D894E0(ctx, base);
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82CAA020;
	sub_8387E8E0(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82caa040
	if (!cr6.eq) goto loc_82CAA040;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// b 0x82caa088
	goto loc_82CAA088;
loc_82CAA040:
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r10.u32);
	// stw r9,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// b 0x82caa088
	goto loc_82CAA088;
loc_82CAA05C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca9e28
	ctx.lr = 0x82CAA064;
	sub_82CA9E28(ctx, base);
loc_82CAA064:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82caa088
	goto loc_82CAA088;
loc_82CAA06C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca8718
	ctx.lr = 0x82CAA074;
	sub_82CA8718(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CAA084;
	sub_82D19788(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82CAA088:
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

__attribute__((alias("__imp__sub_82CAA0A0"))) PPC_WEAK_FUNC(sub_82CAA0A0);
PPC_FUNC_IMPL(__imp__sub_82CAA0A0) {
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
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82caa0c0
	if (cr6.eq) goto loc_82CAA0C0;
	// bl 0x82ca9e28
	ctx.lr = 0x82CAA0BC;
	sub_82CA9E28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
loc_82CAA0C0:
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

__attribute__((alias("__imp__sub_82CAA0D4"))) PPC_WEAK_FUNC(sub_82CAA0D4);
PPC_FUNC_IMPL(__imp__sub_82CAA0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAA0D8"))) PPC_WEAK_FUNC(sub_82CAA0D8);
PPC_FUNC_IMPL(__imp__sub_82CAA0D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stw r11,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r10,8484
	ctx.r5.s64 = ctx.r10.s64 + 8484;
	// b 0x82d20da8
	sub_82D20DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAA0FC"))) PPC_WEAK_FUNC(sub_82CAA0FC);
PPC_FUNC_IMPL(__imp__sub_82CAA0FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAA100"))) PPC_WEAK_FUNC(sub_82CAA100);
PPC_FUNC_IMPL(__imp__sub_82CAA100) {
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
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82caa154
	if (!cr6.eq) goto loc_82CAA154;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r11,8524
	ctx.r3.s64 = ctx.r11.s64 + 8524;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f8b8
	ctx.lr = 0x82CAA138;
	sub_82D2F8B8(ctx, base);
	// stw r3,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r3.u32);
	// lis r4,206
	ctx.r4.s64 = 13500416;
	// ori r4,r4,269
	ctx.r4.u64 = ctx.r4.u64 | 269;
	// bl 0x82d2ada8
	ctx.lr = 0x82CAA148;
	sub_82D2ADA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,160(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x83103100
	ctx.lr = 0x82CAA154;
	sub_83103100(ctx, base);
loc_82CAA154:
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

__attribute__((alias("__imp__sub_82CAA168"))) PPC_WEAK_FUNC(sub_82CAA168);
PPC_FUNC_IMPL(__imp__sub_82CAA168) {
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
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r10,24
	ctx.r10.s64 = 24;
	// lwz r9,96(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// divw r5,r8,r10
	ctx.r5.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d20f50
	ctx.lr = 0x82CAA1A0;
	sub_82D20F50(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d21e48
	ctx.lr = 0x82CAA1B0;
	sub_82D21E48(ctx, base);
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

__attribute__((alias("__imp__sub_82CAA1C8"))) PPC_WEAK_FUNC(sub_82CAA1C8);
PPC_FUNC_IMPL(__imp__sub_82CAA1C8) {
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
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r10,24
	ctx.r10.s64 = 24;
	// lwz r9,96(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// divw r5,r8,r10
	ctx.r5.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d20f50
	ctx.lr = 0x82CAA200;
	sub_82D20F50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d21e48
	ctx.lr = 0x82CAA210;
	sub_82D21E48(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r6,-31776
	ctx.r6.s64 = -2082471936;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,1824(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1824);
	// bl 0x82d19b10
	ctx.lr = 0x82CAA22C;
	sub_82D19B10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d1cda8
	ctx.lr = 0x82CAA238;
	sub_82D1CDA8(ctx, base);
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

__attribute__((alias("__imp__sub_82CAA250"))) PPC_WEAK_FUNC(sub_82CAA250);
PPC_FUNC_IMPL(__imp__sub_82CAA250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CAA258;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CAA264;
	sub_82D19A78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82caa33c
	if (cr6.eq) goto loc_82CAA33C;
	// bl 0x82d35198
	ctx.lr = 0x82CAA274;
	sub_82D35198(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,321
	ctx.r5.u64 = ctx.r5.u64 | 321;
	// bl 0x82d36ab8
	ctx.lr = 0x82CAA284;
	sub_82D36AB8(ctx, base);
	// lwz r29,116(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x82d35198
	ctx.lr = 0x82CAA28C;
	sub_82D35198(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82d37bb8
	ctx.lr = 0x82CAA298;
	sub_82D37BB8(ctx, base);
	// bl 0x82d35198
	ctx.lr = 0x82CAA29C;
	sub_82D35198(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// li r4,4
	ctx.r4.s64 = 4;
	// ori r5,r5,319
	ctx.r5.u64 = ctx.r5.u64 | 319;
	// bl 0x82d36ab8
	ctx.lr = 0x82CAA2AC;
	sub_82D36AB8(ctx, base);
	// lwz r29,112(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// bl 0x82d35198
	ctx.lr = 0x82CAA2B4;
	sub_82D35198(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82d37bb8
	ctx.lr = 0x82CAA2C0;
	sub_82D37BB8(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,1848(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1848);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CAA2DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82caa33c
	if (cr6.eq) goto loc_82CAA33C;
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// ori r4,r4,329
	ctx.r4.u64 = ctx.r4.u64 | 329;
	// bl 0x82d39ab8
	ctx.lr = 0x82CAA2F0;
	sub_82D39AB8(ctx, base);
	// lbz r11,164(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 164);
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// beq cr6,0x82caa31c
	if (cr6.eq) goto loc_82CAA31C;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lwz r4,1852(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1852);
	// b 0x82caa324
	goto loc_82CAA324;
loc_82CAA31C:
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lwz r4,1856(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1856);
loc_82CAA324:
	// bctrl 
	ctx.lr = 0x82CAA328;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19730
	ctx.lr = 0x82CAA334;
	sub_82D19730(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82caa168
	ctx.lr = 0x82CAA33C;
	sub_82CAA168(ctx, base);
loc_82CAA33C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAA348"))) PPC_WEAK_FUNC(sub_82CAA348);
PPC_FUNC_IMPL(__imp__sub_82CAA348) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,8624
	ctx.r9.s64 = ctx.r11.s64 + 8624;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// bl 0x82d35198
	ctx.lr = 0x82CAA378;
	sub_82D35198(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d36760
	ctx.lr = 0x82CAA384;
	sub_82D36760(ctx, base);
	// bl 0x82d35198
	ctx.lr = 0x82CAA388;
	sub_82D35198(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d36760
	ctx.lr = 0x82CAA394;
	sub_82D36760(ctx, base);
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82caa3b0
	if (cr6.eq) goto loc_82CAA3B0;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CAA3B0;
	sub_825952B8(ctx, base);
loc_82CAA3B0:
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
	ctx.lr = 0x82CAA3C8;
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

__attribute__((alias("__imp__sub_82CAA3DC"))) PPC_WEAK_FUNC(sub_82CAA3DC);
PPC_FUNC_IMPL(__imp__sub_82CAA3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAA3E0"))) PPC_WEAK_FUNC(sub_82CAA3E0);
PPC_FUNC_IMPL(__imp__sub_82CAA3E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CAA3E8;
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
	ctx.lr = 0x82CAA3FC;
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
	ctx.lr = 0x82CAA414;
	sub_82D253F8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,8624
	ctx.r9.s64 = ctx.r11.s64 + 8624;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r7,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r7.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stb r11,156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 156, ctx.r11.u8);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// stb r11,164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 164, ctx.r11.u8);
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// beq cr6,0x82caa4c0
	if (cr6.eq) goto loc_82CAA4C0;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r5
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r5.u32, xer);
	// beq cr6,0x82caa4bc
	if (cr6.eq) goto loc_82CAA4BC;
loc_82CAA490:
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// addi r9,r6,-4
	ctx.r9.s64 = ctx.r6.s64 + -4;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_82CAA4A0:
	// lwzu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82caa4a0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CAA4A0;
	// addi r8,r8,24
	ctx.r8.s64 = ctx.r8.s64 + 24;
	// addi r6,r6,24
	ctx.r6.s64 = ctx.r6.s64 + 24;
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// bne cr6,0x82caa490
	if (!cr6.eq) goto loc_82CAA490;
loc_82CAA4BC:
	// stw r6,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r6.u32);
loc_82CAA4C0:
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,2004(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2004);
	// bl 0x82d20ae0
	ctx.lr = 0x82CAA4D8;
	sub_82D20AE0(ctx, base);
	// lis r9,-31776
	ctx.r9.s64 = -2082471936;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,2000(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2000);
	// bl 0x82d23390
	ctx.lr = 0x82CAA4EC;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAA4F8"))) PPC_WEAK_FUNC(sub_82CAA4F8);
PPC_FUNC_IMPL(__imp__sub_82CAA4F8) {
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
	// bl 0x82caa348
	ctx.lr = 0x82CAA518;
	sub_82CAA348(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82caa530
	if (cr6.eq) goto loc_82CAA530;
	// bl 0x82416268
	ctx.lr = 0x82CAA52C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CAA530:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAA548"))) PPC_WEAK_FUNC(sub_82CAA548);
PPC_FUNC_IMPL(__imp__sub_82CAA548) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CAA550;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82caa570
	if (!cr6.eq) goto loc_82CAA570;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82CAA570:
	// addi r28,r31,96
	ctx.r28.s64 = ctx.r31.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x835d6cb0
	ctx.lr = 0x82CAA57C;
	sub_835D6CB0(ctx, base);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r9,100
	ctx.r9.s64 = 100;
	// lwz r30,144(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r8,236(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// lwz r7,212(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// lwz r6,208(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// subf r5,r6,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r6.s64;
	// stw r8,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r8.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r4,224(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// divw r27,r5,r10
	ctx.r27.s32 = PPCDivide(ctx.r5.s32, ctx.r10.s32);
	// stw r4,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r4.u32);
	// lwz r3,228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// lbz r10,240(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 240);
	// stb r10,164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 164, ctx.r10.u8);
	// lwz r26,204(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// beq cr6,0x82caa5f4
	if (cr6.eq) goto loc_82CAA5F4;
	// lis r8,20971
	ctx.r8.s64 = 1374355456;
	// divwu r10,r11,r9
	ctx.r10.u32 = PPCDivide(ctx.r11.u32, ctx.r9.u32);
	// ori r7,r8,34079
	ctx.r7.u64 = ctx.r8.u64 | 34079;
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
	// mulhwu r6,r11,r7
	ctx.r6.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r7.u32)) >> 32;
	// rlwinm r5,r6,27,5,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// mulli r4,r5,100
	ctx.r4.s64 = ctx.r5.s64 * 100;
	// subf. r3,r4,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82caa5f4
	if (cr0.eq) goto loc_82CAA5F4;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
loc_82CAA5F4:
	// divwu r11,r26,r9
	ctx.r11.u32 = PPCDivide(ctx.r26.u32, ctx.r9.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// bl 0x835d6cb0
	ctx.lr = 0x82CAA604;
	sub_835D6CB0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82caa668
	if (cr6.eq) goto loc_82CAA668;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82CAA614:
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// add r10,r31,r26
	ctx.r10.u64 = ctx.r31.u64 + ctx.r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// bl 0x82d208d0
	ctx.lr = 0x82CAA658;
	sub_82D208D0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// blt cr6,0x82caa614
	if (cr6.lt) goto loc_82CAA614;
loc_82CAA668:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAA674"))) PPC_WEAK_FUNC(sub_82CAA674);
PPC_FUNC_IMPL(__imp__sub_82CAA674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAA678"))) PPC_WEAK_FUNC(sub_82CAA678);
PPC_FUNC_IMPL(__imp__sub_82CAA678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CAA680;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,96(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r11,24
	ctx.r11.s64 = 24;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// subf r9,r8,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
	// divw r7,r9,r11
	ctx.r7.s32 = PPCDivide(ctx.r9.s32, ctx.r11.s32);
	// cmplw cr6,r5,r7
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, xer);
	// bgt cr6,0x82caa884
	if (cr6.gt) goto loc_82CAA884;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// li r11,6
	ctx.r11.s64 = 6;
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
loc_82CAA6C8:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82caa6c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CAA6C8;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r30,r11,8042
	ctx.r30.s64 = ctx.r11.s64 + 8042;
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// bl 0x837b0c10
	ctx.lr = 0x82CAA6E8;
	sub_837B0C10(ctx, base);
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,1828(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1828);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CAA708;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82caa718
	if (cr6.eq) goto loc_82CAA718;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82d294d0
	ctx.lr = 0x82CAA718;
	sub_82D294D0(ctx, base);
loc_82CAA718:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,1832(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1832);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CAA734;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82caa744
	if (cr6.eq) goto loc_82CAA744;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x82d294d0
	ctx.lr = 0x82CAA744;
	sub_82D294D0(ctx, base);
loc_82CAA744:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,1836(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1836);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CAA760;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82caa788
	if (cr6.eq) goto loc_82CAA788;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82caa780
	if (!cr6.eq) goto loc_82CAA780;
	// ori r4,r4,320
	ctx.r4.u64 = ctx.r4.u64 | 320;
	// b 0x82caa784
	goto loc_82CAA784;
loc_82CAA780:
	// ori r4,r4,322
	ctx.r4.u64 = ctx.r4.u64 | 322;
loc_82CAA784:
	// bl 0x82d29598
	ctx.lr = 0x82CAA788;
	sub_82D29598(ctx, base);
loc_82CAA788:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a6b9a8
	ctx.lr = 0x82CAA798;
	sub_82A6B9A8(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r4,1840(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1840);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CAA7B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82caa7cc
	if (cr6.eq) goto loc_82CAA7CC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82d291e0
	ctx.lr = 0x82CAA7CC;
	sub_82D291E0(ctx, base);
loc_82CAA7CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,1844(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1844);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CAA7E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82caa864
	if (cr6.eq) goto loc_82CAA864;
	// lbz r11,164(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 164);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82caa83c
	if (cr6.eq) goto loc_82CAA83C;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82caa834
	if (cr6.eq) goto loc_82CAA834;
	// clrldi r5,r11,32
	ctx.r5.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a6b9a8
	ctx.lr = 0x82CAA81C;
	sub_82A6B9A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CAA830;
	sub_82D291E0(ctx, base);
	// b 0x82caa864
	goto loc_82CAA864;
loc_82CAA834:
	// addi r4,r30,-31
	ctx.r4.s64 = ctx.r30.s64 + -31;
	// b 0x82caa840
	goto loc_82CAA840;
loc_82CAA83C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82CAA840:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82CAA848;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CAA85C;
	sub_82D291E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82CAA864;
	sub_8387E8E0(ctx, base);
loc_82CAA864:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82caa884
	if (cr6.lt) goto loc_82CAA884;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CAA884;
	sub_825952B8(ctx, base);
loc_82CAA884:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAA88C"))) PPC_WEAK_FUNC(sub_82CAA88C);
PPC_FUNC_IMPL(__imp__sub_82CAA88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAA890"))) PPC_WEAK_FUNC(sub_82CAA890);
PPC_FUNC_IMPL(__imp__sub_82CAA890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82caaa38
	if (!cr6.eq) goto loc_82CAAA38;
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// beq cr6,0x82caa8c8
	if (cr6.eq) goto loc_82CAA8C8;
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// stw r11,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
loc_82CAA8C8:
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// bgt cr6,0x82caaa38
	if (cr6.gt) goto loc_82CAAA38;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82caa8f4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CAA8F4;
	// bdzf 4*cr6+eq,0x82caa950
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CAA950;
	// bne cr6,0x82caa9cc
	if (!cr6.eq) goto loc_82CAA9CC;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r8.u32);
	// stw r8,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r8.u32);
	// b 0x82caa9d4
	goto loc_82CAA9D4;
loc_82CAA8F4:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r10,24
	ctx.r10.s64 = 24;
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r8,0
	ctx.r8.s64 = 0;
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw. r11,r7,r10
	ctx.r11.s32 = PPCDivide(ctx.r7.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x82caa91c
	if (!cr0.eq) goto loc_82CAA91C;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stw r8,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r8.u32);
	// b 0x82caa9d0
	goto loc_82CAA9D0;
loc_82CAA91C:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r7,120(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,-24(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -24);
	// stw r8,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subfc r4,r7,r11
	xer.ca = ctx.r11.u32 >= ctx.r7.u32;
	ctx.r4.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subfe r10,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r3.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// b 0x82caa9d0
	goto loc_82CAA9D0;
loc_82CAA950:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r10,24
	ctx.r10.s64 = 24;
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw. r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82caa978
	if (!cr0.eq) goto loc_82CAA978;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
	// b 0x82caa9d0
	goto loc_82CAA9D0;
loc_82CAA978:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, xer);
	// blt cr6,0x82caa998
	if (cr6.lt) goto loc_82CAA998;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r11,r11,-100
	ctx.r11.s64 = ctx.r11.s64 + -100;
	// stw r10,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
	// b 0x82caa9d0
	goto loc_82CAA9D0;
loc_82CAA998:
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
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
	// bne 0x82caa9bc
	if (!cr0.eq) goto loc_82CAA9BC;
	// li r10,100
	ctx.r10.s64 = 100;
loc_82CAA9BC:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
	// b 0x82caa9d0
	goto loc_82CAA9D0;
loc_82CAA9CC:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
loc_82CAA9D0:
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
loc_82CAA9D4:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8492
	ctx.r4.s64 = ctx.r11.s64 + 8492;
	// bl 0x837b0c10
	ctx.lr = 0x82CAA9E4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x82CAA9F0;
	sub_82D894E0(ctx, base);
	// stw r3,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82CAA9FC;
	sub_8387E8E0(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82caaa1c
	if (!cr6.eq) goto loc_82CAAA1C;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// b 0x82caaa3c
	goto loc_82CAAA3C;
loc_82CAAA1C:
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r10.u32);
	// stw r9,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r9.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// b 0x82caaa3c
	goto loc_82CAAA3C;
loc_82CAAA38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CAAA3C:
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

__attribute__((alias("__imp__sub_82CAAA54"))) PPC_WEAK_FUNC(sub_82CAAA54);
PPC_FUNC_IMPL(__imp__sub_82CAAA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAAA58"))) PPC_WEAK_FUNC(sub_82CAAA58);
PPC_FUNC_IMPL(__imp__sub_82CAAA58) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82caa548
	ctx.lr = 0x82CAAA74;
	sub_82CAA548(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82caab50
	if (cr6.eq) goto loc_82CAAB50;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r10,24
	ctx.r10.s64 = 24;
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw. r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82caab58
	if (!cr0.eq) goto loc_82CAAB58;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82caab40
	if (cr6.eq) goto loc_82CAAB40;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82caab40
	if (cr6.eq) goto loc_82CAAB40;
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// li r30,4
	ctx.r30.s64 = 4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82caaac4
	if (cr6.eq) goto loc_82CAAAC4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82caab28
	goto loc_82CAAB28;
loc_82CAAAC4:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,8492
	ctx.r4.s64 = ctx.r10.s64 + 8492;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// bl 0x837b0c10
	ctx.lr = 0x82CAAADC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x82CAAAE8;
	sub_82D894E0(ctx, base);
	// stw r3,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82CAAAF4;
	sub_8387E8E0(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82caab0c
	if (!cr6.eq) goto loc_82CAAB0C;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// b 0x82caab24
	goto loc_82CAAB24;
loc_82CAAB0C:
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// li r9,3
	ctx.r9.s64 = 3;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r10.u32);
	// stw r8,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r8.u32);
	// stw r9,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r9.u32);
loc_82CAAB24:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82CAAB28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82caab50
	if (!cr6.eq) goto loc_82CAAB50;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82caab80
	goto loc_82CAAB80;
loc_82CAAB40:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r11,156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 156, ctx.r11.u8);
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
loc_82CAAB50:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82caab80
	goto loc_82CAAB80;
loc_82CAAB58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82caa168
	ctx.lr = 0x82CAAB60;
	sub_82CAA168(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82caa1c8
	ctx.lr = 0x82CAAB68;
	sub_82CAA1C8(ctx, base);
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82caab7c
	if (!cr6.eq) goto loc_82CAAB7C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 156, ctx.r11.u8);
loc_82CAAB7C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82CAAB80:
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

__attribute__((alias("__imp__sub_82CAAB98"))) PPC_WEAK_FUNC(sub_82CAAB98);
PPC_FUNC_IMPL(__imp__sub_82CAAB98) {
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
	// blt cr6,0x82caabc0
	if (cr6.lt) goto loc_82CAABC0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82caabc4
	goto loc_82CAABC4;
loc_82CAABC0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82CAABC4:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,168
	ctx.r4.s64 = 168;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CAABE0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82caabf8
	if (cr6.eq) goto loc_82CAABF8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82caa3e0
	ctx.lr = 0x82CAABF4;
	sub_82CAA3E0(ctx, base);
	// b 0x82caabfc
	goto loc_82CAABFC;
loc_82CAABF8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CAABFC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAAC14"))) PPC_WEAK_FUNC(sub_82CAAC14);
PPC_FUNC_IMPL(__imp__sub_82CAAC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAAC18"))) PPC_WEAK_FUNC(sub_82CAAC18);
PPC_FUNC_IMPL(__imp__sub_82CAAC18) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82caa678
	ctx.lr = 0x82CAAC30;
	sub_82CAA678(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82CAAC44;
	sub_82D2B608(ctx, base);
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

__attribute__((alias("__imp__sub_82CAAC58"))) PPC_WEAK_FUNC(sub_82CAAC58);
PPC_FUNC_IMPL(__imp__sub_82CAAC58) {
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
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82caaca0
	if (!cr6.eq) goto loc_82CAACA0;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, xer);
	// ble cr6,0x82caaca0
	if (!cr6.gt) goto loc_82CAACA0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82caa890
	ctx.lr = 0x82CAAC8C;
	sub_82CAA890(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82caaca0
	if (!cr6.eq) goto loc_82CAACA0;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
loc_82CAACA0:
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

__attribute__((alias("__imp__sub_82CAACB4"))) PPC_WEAK_FUNC(sub_82CAACB4);
PPC_FUNC_IMPL(__imp__sub_82CAACB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAACB8"))) PPC_WEAK_FUNC(sub_82CAACB8);
PPC_FUNC_IMPL(__imp__sub_82CAACB8) {
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
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82caad00
	if (!cr6.eq) goto loc_82CAAD00;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, xer);
	// ble cr6,0x82caad00
	if (!cr6.gt) goto loc_82CAAD00;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82caa890
	ctx.lr = 0x82CAACEC;
	sub_82CAA890(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82caad00
	if (!cr6.eq) goto loc_82CAAD00;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
loc_82CAAD00:
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

__attribute__((alias("__imp__sub_82CAAD14"))) PPC_WEAK_FUNC(sub_82CAAD14);
PPC_FUNC_IMPL(__imp__sub_82CAAD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAAD18"))) PPC_WEAK_FUNC(sub_82CAAD18);
PPC_FUNC_IMPL(__imp__sub_82CAAD18) {
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
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82caae30
	if (cr6.gt) goto loc_82CAAE30;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82caade8
	if (cr6.eq) goto loc_82CAADE8;
	// bdz 0x82caad54
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CAAD54;
	// bdz 0x82caad64
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CAAD64;
	// b 0x82caadac
	goto loc_82CAADAC;
loc_82CAAD54:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// b 0x82caae6c
	goto loc_82CAAE6C;
loc_82CAAD64:
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82caad80
	if (!cr6.eq) goto loc_82CAAD80;
loc_82CAAD70:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// b 0x82caae6c
	goto loc_82CAAE6C;
loc_82CAAD80:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CAAD90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82caade8
	if (!cr6.eq) goto loc_82CAADE8;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// b 0x82caae6c
	goto loc_82CAAE6C;
loc_82CAADAC:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82caad70
	if (cr6.eq) goto loc_82CAAD70;
	// lbz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 108);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82caadd4
	if (!cr6.eq) goto loc_82CAADD4;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// b 0x82caae6c
	goto loc_82CAAE6C;
loc_82CAADD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82caaa58
	ctx.lr = 0x82CAADDC;
	sub_82CAAA58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82caadf0
	if (!cr6.eq) goto loc_82CAADF0;
loc_82CAADE8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82caae6c
	goto loc_82CAAE6C;
loc_82CAADF0:
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82caae14
	if (cr6.eq) goto loc_82CAAE14;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CAAE10;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
loc_82CAAE14:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// b 0x82caae6c
	goto loc_82CAAE6C;
loc_82CAAE30:
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82caae54
	if (cr6.eq) goto loc_82CAAE54;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CAAE50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
loc_82CAAE54:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// bl 0x82caa100
	ctx.lr = 0x82CAAE68;
	sub_82CAA100(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CAAE6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAAE84"))) PPC_WEAK_FUNC(sub_82CAAE84);
PPC_FUNC_IMPL(__imp__sub_82CAAE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAAE88"))) PPC_WEAK_FUNC(sub_82CAAE88);
PPC_FUNC_IMPL(__imp__sub_82CAAE88) {
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
	// lbz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 156);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82caaf4c
	if (!cr6.eq) goto loc_82CAAF4C;
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82caaf3c
	if (!cr6.eq) goto loc_82CAAF3C;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82caaf44
	if (!cr6.eq) goto loc_82CAAF44;
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stw r30,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// addi r4,r10,8492
	ctx.r4.s64 = ctx.r10.s64 + 8492;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// bl 0x837b0c10
	ctx.lr = 0x82CAAEE8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x82CAAEF4;
	sub_82D894E0(ctx, base);
	// stw r3,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82CAAF00;
	sub_8387E8E0(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82caaf20
	if (!cr6.eq) goto loc_82CAAF20;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// b 0x82caaf68
	goto loc_82CAAF68;
loc_82CAAF20:
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r10.u32);
	// stw r9,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r9.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// b 0x82caaf68
	goto loc_82CAAF68;
loc_82CAAF3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82caad18
	ctx.lr = 0x82CAAF44;
	sub_82CAAD18(ctx, base);
loc_82CAAF44:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82caaf68
	goto loc_82CAAF68;
loc_82CAAF4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82caa250
	ctx.lr = 0x82CAAF54;
	sub_82CAA250(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CAAF64;
	sub_82D19788(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82CAAF68:
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

__attribute__((alias("__imp__sub_82CAAF80"))) PPC_WEAK_FUNC(sub_82CAAF80);
PPC_FUNC_IMPL(__imp__sub_82CAAF80) {
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
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82caafa0
	if (cr6.eq) goto loc_82CAAFA0;
	// bl 0x82caad18
	ctx.lr = 0x82CAAF9C;
	sub_82CAAD18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
loc_82CAAFA0:
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

__attribute__((alias("__imp__sub_82CAAFB4"))) PPC_WEAK_FUNC(sub_82CAAFB4);
PPC_FUNC_IMPL(__imp__sub_82CAAFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAAFB8"))) PPC_WEAK_FUNC(sub_82CAAFB8);
PPC_FUNC_IMPL(__imp__sub_82CAAFB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CAAFC0;
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
	// li r4,248
	ctx.r4.s64 = 248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CAAFE4;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cab020
	if (cr6.eq) goto loc_82CAB020;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c30658
	ctx.lr = 0x82CAAFFC;
	sub_82C30658(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,9264
	ctx.r9.s64 = ctx.r11.s64 + 9264;
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
loc_82CAB020:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAB02C"))) PPC_WEAK_FUNC(sub_82CAB02C);
PPC_FUNC_IMPL(__imp__sub_82CAB02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAB030"))) PPC_WEAK_FUNC(sub_82CAB030);
PPC_FUNC_IMPL(__imp__sub_82CAB030) {
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
	// addi r9,r11,9264
	ctx.r9.s64 = ctx.r11.s64 + 9264;
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
	// bl 0x82c2fdf8
	ctx.lr = 0x82CAB068;
	sub_82C2FDF8(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82cab080
	if (cr6.eq) goto loc_82CAB080;
	// bl 0x82416268
	ctx.lr = 0x82CAB07C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CAB080:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAB098"))) PPC_WEAK_FUNC(sub_82CAB098);
PPC_FUNC_IMPL(__imp__sub_82CAB098) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cab0a8
	if (cr6.lt) goto loc_82CAB0A8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82CAB0A8:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82caafb8
	sub_82CAAFB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAB0B0"))) PPC_WEAK_FUNC(sub_82CAB0B0);
PPC_FUNC_IMPL(__imp__sub_82CAB0B0) {
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
	ctx.lr = 0x82CAB0C8;
	sub_82D86078(ctx, base);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82CAB0D0;
	sub_82DAB6D0(ctx, base);
	// lwz r11,3492(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3492);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x82cab10c
	if (cr6.lt) goto loc_82CAB10C;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r5,r11,9884
	ctx.r5.s64 = ctx.r11.s64 + 9884;
	// bl 0x82d20da8
	ctx.lr = 0x82CAB0F0;
	sub_82D20DA8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,248(r31)
	PPC_STORE_U8(ctx.r31.u32 + 248, ctx.r10.u8);
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
loc_82CAB10C:
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r10,9884
	ctx.r11.s64 = ctx.r10.s64 + 9884;
	// addi r8,r11,24
	ctx.r8.s64 = ctx.r11.s64 + 24;
	// lwzx r5,r9,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x82d20da8
	ctx.lr = 0x82CAB124;
	sub_82D20DA8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,248(r31)
	PPC_STORE_U8(ctx.r31.u32 + 248, ctx.r7.u8);
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

__attribute__((alias("__imp__sub_82CAB140"))) PPC_WEAK_FUNC(sub_82CAB140);
PPC_FUNC_IMPL(__imp__sub_82CAB140) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CAB148;
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
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CAB16C;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cab1b0
	if (cr6.eq) goto loc_82CAB1B0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82abe748
	ctx.lr = 0x82CAB184;
	sub_82ABE748(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,10008
	ctx.r9.s64 = ctx.r11.s64 + 10008;
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
	// stb r7,248(r31)
	PPC_STORE_U8(ctx.r31.u32 + 248, ctx.r7.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CAB1B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAB1BC"))) PPC_WEAK_FUNC(sub_82CAB1BC);
PPC_FUNC_IMPL(__imp__sub_82CAB1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAB1C0"))) PPC_WEAK_FUNC(sub_82CAB1C0);
PPC_FUNC_IMPL(__imp__sub_82CAB1C0) {
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
	// addi r9,r11,10008
	ctx.r9.s64 = ctx.r11.s64 + 10008;
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
	// bl 0x82abe488
	ctx.lr = 0x82CAB1F8;
	sub_82ABE488(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82cab210
	if (cr6.eq) goto loc_82CAB210;
	// bl 0x82416268
	ctx.lr = 0x82CAB20C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CAB210:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAB228"))) PPC_WEAK_FUNC(sub_82CAB228);
PPC_FUNC_IMPL(__imp__sub_82CAB228) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cab238
	if (cr6.lt) goto loc_82CAB238;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82CAB238:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82cab140
	sub_82CAB140(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAB240"))) PPC_WEAK_FUNC(sub_82CAB240);
PPC_FUNC_IMPL(__imp__sub_82CAB240) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CAB248;
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
	ctx.lr = 0x82CAB264;
	sub_82D17D90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82CAB270;
	sub_82D1C1A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830efe48
	ctx.lr = 0x82CAB280;
	sub_830EFE48(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830efe70
	ctx.lr = 0x82CAB28C;
	sub_830EFE70(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x830ef9d8
	ctx.lr = 0x82CAB294;
	sub_830EF9D8(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82CAB298;
	sub_82D86078(ctx, base);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82CAB2A0;
	sub_82DAB6D0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x82cab330
	if (cr6.eq) goto loc_82CAB330;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cab330
	if (cr6.eq) goto loc_82CAB330;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82cab324
	if (!cr6.lt) goto loc_82CAB324;
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
	ctx.lr = 0x82CAB2F8;
	sub_830F00A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82cab31c
	if (!cr6.eq) goto loc_82CAB31C;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cab314
	if (!cr6.lt) goto loc_82CAB314;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
loc_82CAB314:
	// bl 0x830e9ae0
	ctx.lr = 0x82CAB318;
	sub_830E9AE0(ctx, base);
	// sth r3,84(r29)
	PPC_STORE_U16(ctx.r29.u32 + 84, ctx.r3.u16);
loc_82CAB31C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837e41d8
	ctx.lr = 0x82CAB324;
	sub_837E41D8(ctx, base);
loc_82CAB324:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CAB330:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAB33C"))) PPC_WEAK_FUNC(sub_82CAB33C);
PPC_FUNC_IMPL(__imp__sub_82CAB33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAB340"))) PPC_WEAK_FUNC(sub_82CAB340);
PPC_FUNC_IMPL(__imp__sub_82CAB340) {
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
	// lbz r11,248(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 248);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cab35c
	if (cr6.eq) goto loc_82CAB35C;
	// bl 0x82cab240
	ctx.lr = 0x82CAB35C;
	sub_82CAB240(ctx, base);
loc_82CAB35C:
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

__attribute__((alias("__imp__sub_82CAB370"))) PPC_WEAK_FUNC(sub_82CAB370);
PPC_FUNC_IMPL(__imp__sub_82CAB370) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CAB378;
	__savegprlr_29(ctx, base);
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
	// beq cr6,0x82cab3f8
	if (cr6.eq) goto loc_82CAB3F8;
	// bl 0x82d1c1a8
	ctx.lr = 0x82CAB390;
	sub_82D1C1A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CAB398;
	sub_82D86078(ctx, base);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82CAB3A0;
	sub_82DAB6D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac1d78
	ctx.lr = 0x82CAB3AC;
	sub_83AC1D78(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// bne cr6,0x82cab3c8
	if (!cr6.eq) goto loc_82CAB3C8;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r11,84(r29)
	PPC_STORE_U16(ctx.r29.u32 + 84, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CAB3C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82abe8c0
	ctx.lr = 0x82CAB3D0;
	sub_82ABE8C0(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// bne cr6,0x82cab3ec
	if (!cr6.eq) goto loc_82CAB3EC;
	// li r11,-2
	ctx.r11.s64 = -2;
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r11,84(r29)
	PPC_STORE_U16(ctx.r29.u32 + 84, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CAB3EC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17d80
	ctx.lr = 0x82CAB3F8;
	sub_82D17D80(ctx, base);
loc_82CAB3F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAB404"))) PPC_WEAK_FUNC(sub_82CAB404);
PPC_FUNC_IMPL(__imp__sub_82CAB404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAB408"))) PPC_WEAK_FUNC(sub_82CAB408);
PPC_FUNC_IMPL(__imp__sub_82CAB408) {
	PPC_FUNC_PROLOGUE();
	// b 0x82abe8d0
	sub_82ABE8D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAB40C"))) PPC_WEAK_FUNC(sub_82CAB40C);
PPC_FUNC_IMPL(__imp__sub_82CAB40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAB410"))) PPC_WEAK_FUNC(sub_82CAB410);
PPC_FUNC_IMPL(__imp__sub_82CAB410) {
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
	ctx.lr = 0x82CAB428;
	sub_82D86078(ctx, base);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82CAB430;
	sub_82DAB6D0(ctx, base);
	// lwz r11,3492(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3492);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x82cab450
	if (cr6.lt) goto loc_82CAB450;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r5,r11,10612
	ctx.r5.s64 = ctx.r11.s64 + 10612;
	// b 0x82cab464
	goto loc_82CAB464;
loc_82CAB450:
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r10,10612
	ctx.r11.s64 = ctx.r10.s64 + 10612;
	// addi r8,r11,36
	ctx.r8.s64 = ctx.r11.s64 + 36;
	// lwzx r5,r9,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
loc_82CAB464:
	// bl 0x82d20da8
	ctx.lr = 0x82CAB468;
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

__attribute__((alias("__imp__sub_82CAB47C"))) PPC_WEAK_FUNC(sub_82CAB47C);
PPC_FUNC_IMPL(__imp__sub_82CAB47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAB480"))) PPC_WEAK_FUNC(sub_82CAB480);
PPC_FUNC_IMPL(__imp__sub_82CAB480) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CAB488;
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
	// li r4,224
	ctx.r4.s64 = 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CAB4AC;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cab4e8
	if (cr6.eq) goto loc_82CAB4E8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82abeba0
	ctx.lr = 0x82CAB4C4;
	sub_82ABEBA0(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,10760
	ctx.r9.s64 = ctx.r11.s64 + 10760;
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
loc_82CAB4E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAB4F4"))) PPC_WEAK_FUNC(sub_82CAB4F4);
PPC_FUNC_IMPL(__imp__sub_82CAB4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAB4F8"))) PPC_WEAK_FUNC(sub_82CAB4F8);
PPC_FUNC_IMPL(__imp__sub_82CAB4F8) {
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
	// addi r9,r11,10760
	ctx.r9.s64 = ctx.r11.s64 + 10760;
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
	// bl 0x82abeb08
	ctx.lr = 0x82CAB530;
	sub_82ABEB08(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82cab548
	if (cr6.eq) goto loc_82CAB548;
	// bl 0x82416268
	ctx.lr = 0x82CAB544;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CAB548:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAB560"))) PPC_WEAK_FUNC(sub_82CAB560);
PPC_FUNC_IMPL(__imp__sub_82CAB560) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cab570
	if (cr6.lt) goto loc_82CAB570;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82CAB570:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82cab480
	sub_82CAB480(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAB578"))) PPC_WEAK_FUNC(sub_82CAB578);
PPC_FUNC_IMPL(__imp__sub_82CAB578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CAB580;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// bl 0x82d19bc0
	ctx.lr = 0x82CAB5A0;
	sub_82D19BC0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cab5ac
	if (cr6.eq) goto loc_82CAB5AC;
	// lwz r27,132(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
loc_82CAB5AC:
	// lwz r10,100(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r29,100
	ctx.r3.s64 = ctx.r29.s64 + 100;
	// addi r28,r11,10612
	ctx.r28.s64 = ctx.r11.s64 + 10612;
	// subf r27,r27,r31
	ctx.r27.s64 = ctx.r31.s64 - ctx.r27.s64;
	// addi r4,r28,48
	ctx.r4.s64 = ctx.r28.s64 + 48;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CAB5D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cab6a8
	if (cr6.eq) goto loc_82CAB6A8;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// stb r26,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r26.u8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82abeac8
	ctx.lr = 0x82CAB5FC;
	sub_82ABEAC8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CAB610;
	sub_82D291E0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bdc948
	ctx.lr = 0x82CAB624;
	sub_82BDC948(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83ac1d78
	ctx.lr = 0x82CAB62C;
	sub_83AC1D78(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// beq cr6,0x82cab64c
	if (cr6.eq) goto loc_82CAB64C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82abe8c0
	ctx.lr = 0x82CAB63C;
	sub_82ABE8C0(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// beq cr6,0x82cab64c
	if (cr6.eq) goto loc_82CAB64C;
	// addi r4,r28,56
	ctx.r4.s64 = ctx.r28.s64 + 56;
	// b 0x82cab678
	goto loc_82CAB678;
loc_82CAB64C:
	// bl 0x82d86078
	ctx.lr = 0x82CAB650;
	sub_82D86078(ctx, base);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82CAB658;
	sub_82DAB6D0(ctx, base);
	// lwz r11,3492(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3492);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x82cab66c
	if (cr6.lt) goto loc_82CAB66C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x82cab678
	goto loc_82CAB678;
loc_82CAB66C:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r28,36
	ctx.r10.s64 = ctx.r28.s64 + 36;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_82CAB678:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d233b0
	ctx.lr = 0x82CAB688;
	sub_82D233B0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cab6a8
	if (cr6.lt) goto loc_82CAB6A8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CAB6A8;
	sub_825952B8(ctx, base);
loc_82CAB6A8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAB6B0"))) PPC_WEAK_FUNC(sub_82CAB6B0);
PPC_FUNC_IMPL(__imp__sub_82CAB6B0) {
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
	// bl 0x830efd90
	ctx.lr = 0x82CAB6C0;
	sub_830EFD90(ctx, base);
	// bl 0x83763ef8
	ctx.lr = 0x82CAB6C4;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cab6d0
	if (cr6.eq) goto loc_82CAB6D0;
	// bl 0x83763ea8
	ctx.lr = 0x82CAB6D0;
	sub_83763EA8(ctx, base);
loc_82CAB6D0:
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

__attribute__((alias("__imp__sub_82CAB6E4"))) PPC_WEAK_FUNC(sub_82CAB6E4);
PPC_FUNC_IMPL(__imp__sub_82CAB6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAB6E8"))) PPC_WEAK_FUNC(sub_82CAB6E8);
PPC_FUNC_IMPL(__imp__sub_82CAB6E8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r11,11632
	ctx.r3.s64 = ctx.r11.s64 + 11632;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x82CAB71C;
	sub_82D2F6D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cab75c
	if (cr6.eq) goto loc_82CAB75C;
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
	ctx.lr = 0x82CAB748;
	sub_82D2AC30(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x82CAB754;
	sub_83103100(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,256(r30)
	PPC_STORE_U8(ctx.r30.u32 + 256, ctx.r8.u8);
loc_82CAB75C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAB774"))) PPC_WEAK_FUNC(sub_82CAB774);
PPC_FUNC_IMPL(__imp__sub_82CAB774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAB778"))) PPC_WEAK_FUNC(sub_82CAB778);
PPC_FUNC_IMPL(__imp__sub_82CAB778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CAB780;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82d19a78
	ctx.lr = 0x82CAB788;
	sub_82D19A78(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r30,r11,11668
	ctx.r30.s64 = ctx.r11.s64 + 11668;
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// bl 0x82d2f098
	ctx.lr = 0x82CAB798;
	sub_82D2F098(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cab83c
	if (cr6.eq) goto loc_82CAB83C;
	// bl 0x82d86078
	ctx.lr = 0x82CAB7A8;
	sub_82D86078(ctx, base);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82CAB7B0;
	sub_82DAB6D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CAB7C0;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cab83c
	if (cr6.eq) goto loc_82CAB83C;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CAB7E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cab83c
	if (cr6.eq) goto loc_82CAB83C;
	// bl 0x82d3a1c8
	ctx.lr = 0x82CAB7EC;
	sub_82D3A1C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d979f0
	ctx.lr = 0x82CAB7F8;
	sub_82D979F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CAB804;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cab83c
	if (cr6.eq) goto loc_82CAB83C;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CAB824;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cab83c
	if (cr6.eq) goto loc_82CAB83C;
	// bl 0x82d3a1c8
	ctx.lr = 0x82CAB830;
	sub_82D3A1C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d97a00
	ctx.lr = 0x82CAB83C;
	sub_82D97A00(ctx, base);
loc_82CAB83C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAB844"))) PPC_WEAK_FUNC(sub_82CAB844);
PPC_FUNC_IMPL(__imp__sub_82CAB844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAB848"))) PPC_WEAK_FUNC(sub_82CAB848);
PPC_FUNC_IMPL(__imp__sub_82CAB848) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,11680
	ctx.r5.s64 = ctx.r11.s64 + 11680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82CAB86C;
	sub_82D20DA8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19858
	ctx.lr = 0x82CAB878;
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

__attribute__((alias("__imp__sub_82CAB88C"))) PPC_WEAK_FUNC(sub_82CAB88C);
PPC_FUNC_IMPL(__imp__sub_82CAB88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAB890"))) PPC_WEAK_FUNC(sub_82CAB890);
PPC_FUNC_IMPL(__imp__sub_82CAB890) {
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
	// bl 0x82d19bb0
	ctx.lr = 0x82CAB8A8;
	sub_82D19BB0(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// bne cr6,0x82cab8cc
	if (!cr6.eq) goto loc_82CAB8CC;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stb r11,257(r31)
	PPC_STORE_U8(ctx.r31.u32 + 257, ctx.r11.u8);
	// addi r11,r10,11700
	ctx.r11.s64 = ctx.r10.s64 + 11700;
	// addi r5,r11,-12
	ctx.r5.s64 = ctx.r11.s64 + -12;
	// b 0x82cab8d4
	goto loc_82CAB8D4;
loc_82CAB8CC:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r5,r11,11700
	ctx.r5.s64 = ctx.r11.s64 + 11700;
loc_82CAB8D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82CAB8DC;
	sub_82D20DA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cab778
	ctx.lr = 0x82CAB8E4;
	sub_82CAB778(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19858
	ctx.lr = 0x82CAB8F0;
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

__attribute__((alias("__imp__sub_82CAB904"))) PPC_WEAK_FUNC(sub_82CAB904);
PPC_FUNC_IMPL(__imp__sub_82CAB904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAB908"))) PPC_WEAK_FUNC(sub_82CAB908);
PPC_FUNC_IMPL(__imp__sub_82CAB908) {
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
	// lbz r11,257(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 257);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cab934
	if (!cr6.eq) goto loc_82CAB934;
	// bl 0x830efd90
	ctx.lr = 0x82CAB924;
	sub_830EFD90(ctx, base);
	// bl 0x83763ef8
	ctx.lr = 0x82CAB928;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cab934
	if (cr6.eq) goto loc_82CAB934;
	// bl 0x83763ea8
	ctx.lr = 0x82CAB934;
	sub_83763EA8(ctx, base);
loc_82CAB934:
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

__attribute__((alias("__imp__sub_82CAB948"))) PPC_WEAK_FUNC(sub_82CAB948);
PPC_FUNC_IMPL(__imp__sub_82CAB948) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r11,11716
	ctx.r3.s64 = ctx.r11.s64 + 11716;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2ee48
	ctx.lr = 0x82CAB978;
	sub_82D2EE48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cab99c
	if (cr6.eq) goto loc_82CAB99C;
	// lis r4,229
	ctx.r4.s64 = 15007744;
	// ori r4,r4,51
	ctx.r4.u64 = ctx.r4.u64 | 51;
	// bl 0x82d2ada8
	ctx.lr = 0x82CAB990;
	sub_82D2ADA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x82CAB99C;
	sub_83103100(ctx, base);
loc_82CAB99C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAB9B4"))) PPC_WEAK_FUNC(sub_82CAB9B4);
PPC_FUNC_IMPL(__imp__sub_82CAB9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAB9B8"))) PPC_WEAK_FUNC(sub_82CAB9B8);
PPC_FUNC_IMPL(__imp__sub_82CAB9B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CAB9C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82d19a78
	ctx.lr = 0x82CAB9C8;
	sub_82D19A78(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r31,r11,11760
	ctx.r31.s64 = ctx.r11.s64 + 11760;
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// bl 0x82d2f098
	ctx.lr = 0x82CAB9D8;
	sub_82D2F098(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82caba7c
	if (cr6.eq) goto loc_82CABA7C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82CAB9EC;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82caba7c
	if (cr6.eq) goto loc_82CABA7C;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CABA0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82caba7c
	if (cr6.eq) goto loc_82CABA7C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CABA24;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82caba7c
	if (cr6.eq) goto loc_82CABA7C;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CABA44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82caba7c
	if (cr6.eq) goto loc_82CABA7C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d3a1c8
	ctx.lr = 0x82CABA58;
	sub_82D3A1C8(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82caba7c
	if (!cr6.gt) goto loc_82CABA7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d3a1c8
	ctx.lr = 0x82CABA6C;
	sub_82D3A1C8(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bgt cr6,0x82caba80
	if (cr6.gt) goto loc_82CABA80;
loc_82CABA7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CABA80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CABA88"))) PPC_WEAK_FUNC(sub_82CABA88);
PPC_FUNC_IMPL(__imp__sub_82CABA88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CABA90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CABAA0;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cabb10
	if (cr6.eq) goto loc_82CABB10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CABAB0;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r4,r11,11708
	ctx.r4.s64 = ctx.r11.s64 + 11708;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CABACC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82cabae4
	if (!cr6.eq) goto loc_82CABAE4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CABAE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cab9b8
	ctx.lr = 0x82CABAEC;
	sub_82CAB9B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r6,2
	ctx.r6.s64 = 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bne cr6,0x82cabb0c
	if (!cr6.eq) goto loc_82CABB0C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82CABB0C:
	// bl 0x82d2b608
	ctx.lr = 0x82CABB10;
	sub_82D2B608(ctx, base);
loc_82CABB10:
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// ori r9,r11,19
	ctx.r9.u64 = ctx.r11.u64 | 19;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82cabb3c
	if (!cr6.eq) goto loc_82CABB3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82CABB2C;
	sub_82D1C1A8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82cabb3c
	if (!cr6.eq) goto loc_82CABB3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cab948
	ctx.lr = 0x82CABB3C;
	sub_82CAB948(ctx, base);
loc_82CABB3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CABB48"))) PPC_WEAK_FUNC(sub_82CABB48);
PPC_FUNC_IMPL(__imp__sub_82CABB48) {
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
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// addi r4,r4,2220
	ctx.r4.s64 = ctx.r4.s64 + 2220;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82CABB80;
	sub_8259CB28(ctx, base);
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

__attribute__((alias("__imp__sub_82CABB98"))) PPC_WEAK_FUNC(sub_82CABB98);
PPC_FUNC_IMPL(__imp__sub_82CABB98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82CABBA0;
	__savegprlr_24(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// bl 0x8308e078
	ctx.lr = 0x82CABBB8;
	sub_8308E078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82CABBD0;
	sub_82D253F8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,11864
	ctx.r9.s64 = ctx.r11.s64 + 11864;
	// addi r8,r10,11856
	ctx.r8.s64 = ctx.r10.s64 + 11856;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r8,72(r27)
	PPC_STORE_U32(ctx.r27.u32 + 72, ctx.r8.u32);
	// stw r31,116(r27)
	PPC_STORE_U32(ctx.r27.u32 + 116, ctx.r31.u32);
	// addi r30,r27,96
	ctx.r30.s64 = ctx.r27.s64 + 96;
	// stw r29,120(r27)
	PPC_STORE_U32(ctx.r27.u32 + 120, ctx.r29.u32);
	// stb r31,100(r27)
	PPC_STORE_U8(ctx.r27.u32 + 100, ctx.r31.u8);
	// addi r11,r30,84
	ctx.r11.s64 = ctx.r30.s64 + 84;
	// stw r29,148(r27)
	PPC_STORE_U32(ctx.r27.u32 + 148, ctx.r29.u32);
	// stw r31,144(r27)
	PPC_STORE_U32(ctx.r27.u32 + 144, ctx.r31.u32);
	// stb r31,128(r27)
	PPC_STORE_U8(ctx.r27.u32 + 128, ctx.r31.u8);
	// stw r29,200(r27)
	PPC_STORE_U32(ctx.r27.u32 + 200, ctx.r29.u32);
	// stw r31,196(r27)
	PPC_STORE_U32(ctx.r27.u32 + 196, ctx.r31.u32);
	// lwz r7,200(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 200);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82cabc28
	if (cr6.lt) goto loc_82CABC28;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82CABC28:
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r10,r30,112
	ctx.r10.s64 = ctx.r30.s64 + 112;
	// stw r29,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r29.u32);
	// stw r31,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r31.u32);
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cabc48
	if (cr6.lt) goto loc_82CABC48;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82CABC48:
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// stb r31,256(r27)
	PPC_STORE_U8(ctx.r27.u32 + 256, ctx.r31.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r31,257(r27)
	PPC_STORE_U8(ctx.r27.u32 + 257, ctx.r31.u8);
	// addi r28,r11,11412
	ctx.r28.s64 = ctx.r11.s64 + 11412;
	// addi r4,r28,-44
	ctx.r4.s64 = ctx.r28.s64 + -44;
	// bl 0x82d20ae0
	ctx.lr = 0x82CABC68;
	sub_82D20AE0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d23390
	ctx.lr = 0x82CABC78;
	sub_82D23390(ctx, base);
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82CABC88;
	sub_831CDCF0(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82CABC8C;
	sub_82D86078(ctx, base);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82CABC94;
	sub_82DAB6D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CABC9C;
	sub_82D86078(ctx, base);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82CABCA4;
	sub_825832D8(ctx, base);
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cabd70
	if (!cr6.eq) goto loc_82CABD70;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// li r26,-1
	ctx.r26.s64 = -1;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r4,r3,2192
	ctx.r4.s64 = ctx.r3.s64 + 2192;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82CABCD8;
	sub_8259CB28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d979f0
	ctx.lr = 0x82CABCE4;
	sub_82D979F0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r25,2
	ctx.r25.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cabd04
	if (cr6.lt) goto loc_82CABD04;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82CABD04;
	sub_825952B8(ctx, base);
loc_82CABD04:
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r4,r28,2220
	ctx.r4.s64 = ctx.r28.s64 + 2220;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82CABD30;
	sub_8259CB28(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d97a00
	ctx.lr = 0x82CABD3C;
	sub_82D97A00(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cabd58
	if (cr6.lt) goto loc_82CABD58;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82CABD58;
	sub_825952B8(ctx, base);
loc_82CABD58:
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// lhz r11,2248(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2248);
	// stw r24,3492(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3492, ctx.r24.u32);
	// sth r11,84(r30)
	PPC_STORE_U16(ctx.r30.u32 + 84, ctx.r11.u16);
loc_82CABD70:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83542800
	ctx.lr = 0x82CABD78;
	sub_83542800(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cabe0c
	if (!cr6.eq) goto loc_82CABE0C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82638f20
	ctx.lr = 0x82CABD8C;
	sub_82638F20(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cabe0c
	if (!cr6.eq) goto loc_82CABE0C;
	// lwz r3,2188(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2188);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82cabdac
	if (!cr6.eq) goto loc_82CABDAC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8307e040
	ctx.lr = 0x82CABDAC;
	sub_8307E040(ctx, base);
loc_82CABDAC:
	// clrlwi r31,r3,14
	ctx.r31.u64 = ctx.r3.u32 & 0x3FFFF;
	// bl 0x831156e8
	ctx.lr = 0x82CABDB4;
	sub_831156E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c148
	ctx.lr = 0x82CABDC0;
	sub_8311C148(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// bl 0x837b0c10
	ctx.lr = 0x82CABDD0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d979f0
	ctx.lr = 0x82CABDDC;
	sub_82D979F0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82CABDE4;
	sub_8387E8E0(ctx, base);
	// addi r4,r31,74
	ctx.r4.s64 = ctx.r31.s64 + 74;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82CABDF0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d97a00
	ctx.lr = 0x82CABDFC;
	sub_82D97A00(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82CABE04;
	sub_8387E8E0(ctx, base);
	// lhz r11,78(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 78);
	// sth r11,84(r30)
	PPC_STORE_U16(ctx.r30.u32 + 84, ctx.r11.u16);
loc_82CABE0C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8307e040
	ctx.lr = 0x82CABE14;
	sub_8307E040(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82cabe28
	if (!cr6.eq) goto loc_82CABE28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,2188(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2188);
	// bl 0x82dab6c8
	ctx.lr = 0x82CABE28;
	sub_82DAB6C8(ctx, base);
loc_82CABE28:
	// bl 0x83763ef8
	ctx.lr = 0x82CABE2C;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82cabe38
	if (!cr6.eq) goto loc_82CABE38;
	// bl 0x83768598
	ctx.lr = 0x82CABE38;
	sub_83768598(ctx, base);
loc_82CABE38:
	// bl 0x830efe98
	ctx.lr = 0x82CABE3C;
	sub_830EFE98(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CABE48"))) PPC_WEAK_FUNC(sub_82CABE48);
PPC_FUNC_IMPL(__imp__sub_82CABE48) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,17536
	ctx.r9.s64 = ctx.r11.s64 + 17536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82cabe7c
	if (cr6.eq) goto loc_82CABE7C;
	// bl 0x82416268
	ctx.lr = 0x82CABE78;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CABE7C:
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

__attribute__((alias("__imp__sub_82CABE90"))) PPC_WEAK_FUNC(sub_82CABE90);
PPC_FUNC_IMPL(__imp__sub_82CABE90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CABE98;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,11864
	ctx.r9.s64 = ctx.r11.s64 + 11864;
	// addi r8,r10,11856
	ctx.r8.s64 = ctx.r10.s64 + 11856;
	// addi r11,r3,256
	ctx.r11.s64 = ctx.r3.s64 + 256;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r31,r11,52
	ctx.r31.s64 = ctx.r11.s64 + 52;
	// li r27,2
	ctx.r27.s64 = 2;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82CABED0:
	// lwzu r11,-80(r31)
	ea = -80 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cabeec
	if (cr6.lt) goto loc_82CABEEC;
	// lwz r4,-20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CABEEC;
	sub_825952B8(ctx, base);
loc_82CABEEC:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r30,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r30.u32);
	// stb r30,-20(r31)
	PPC_STORE_U8(ctx.r31.u32 + -20, ctx.r30.u8);
	// lwz r11,-28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cabf14
	if (cr6.lt) goto loc_82CABF14;
	// lwz r4,-48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CABF14;
	sub_825952B8(ctx, base);
loc_82CABF14:
	// stw r28,-28(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28, ctx.r28.u32);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r30,-32(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32, ctx.r30.u32);
	// stb r30,-48(r31)
	PPC_STORE_U8(ctx.r31.u32 + -48, ctx.r30.u8);
	// bge 0x82cabed0
	if (!cr0.lt) goto loc_82CABED0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d25548
	ctx.lr = 0x82CABF30;
	sub_82D25548(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CABF38"))) PPC_WEAK_FUNC(sub_82CABF38);
PPC_FUNC_IMPL(__imp__sub_82CABF38) {
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
	// bl 0x82cabe90
	ctx.lr = 0x82CABF58;
	sub_82CABE90(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cabf70
	if (cr6.eq) goto loc_82CABF70;
	// bl 0x82416268
	ctx.lr = 0x82CABF6C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CABF70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CABF88"))) PPC_WEAK_FUNC(sub_82CABF88);
PPC_FUNC_IMPL(__imp__sub_82CABF88) {
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
	ctx.lr = 0x82CABFB4;
	sub_82595718(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cabfd0
	if (cr6.eq) goto loc_82CABFD0;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r10,r11,12152
	ctx.r10.s64 = ctx.r11.s64 + 12152;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82cabfd4
	goto loc_82CABFD4;
loc_82CABFD0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82CABFD4:
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
	ctx.lr = 0x82CABFF0;
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

__attribute__((alias("__imp__sub_82CAC008"))) PPC_WEAK_FUNC(sub_82CAC008);
PPC_FUNC_IMPL(__imp__sub_82CAC008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82CAC010;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,256(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 256);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cac1c4
	if (cr6.eq) goto loc_82CAC1C4;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82cac1bc
	if (!cr6.eq) goto loc_82CAC1BC;
	// bl 0x82d86078
	ctx.lr = 0x82CAC030;
	sub_82D86078(ctx, base);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82CAC038;
	sub_82DAB6D0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x8307e040
	ctx.lr = 0x82CAC040;
	sub_8307E040(ctx, base);
	// clrlwi r31,r3,14
	ctx.r31.u64 = ctx.r3.u32 & 0x3FFFF;
	// bl 0x831156e8
	ctx.lr = 0x82CAC048;
	sub_831156E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c148
	ctx.lr = 0x82CAC054;
	sub_8311C148(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CAC060;
	sub_82D19A78(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r27,r11,11624
	ctx.r27.s64 = ctx.r11.s64 + 11624;
	// addi r4,r27,-32
	ctx.r4.s64 = ctx.r27.s64 + -32;
	// bl 0x82d2f098
	ctx.lr = 0x82CAC070;
	sub_82D2F098(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cac1c4
	if (cr6.eq) goto loc_82CAC1C4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82CAC084;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cac1c4
	if (cr6.eq) goto loc_82CAC1C4;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CAC0A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cac1c4
	if (cr6.eq) goto loc_82CAC1C4;
	// addi r30,r26,4
	ctx.r30.s64 = ctx.r26.s64 + 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d3a900
	ctx.lr = 0x82CAC0C0;
	sub_82D3A900(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r28,100
	ctx.r3.s64 = ctx.r28.s64 + 100;
	// bl 0x8259d6c0
	ctx.lr = 0x82CAC0CC;
	sub_8259D6C0(ctx, base);
	// addi r4,r28,96
	ctx.r4.s64 = ctx.r28.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d3a988
	ctx.lr = 0x82CAC0D8;
	sub_82D3A988(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CAC0E4;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cac1c4
	if (cr6.eq) goto loc_82CAC1C4;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r27,-12
	ctx.r4.s64 = ctx.r27.s64 + -12;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CAC104;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cac1c4
	if (cr6.eq) goto loc_82CAC1C4;
	// addi r30,r26,74
	ctx.r30.s64 = ctx.r26.s64 + 74;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d3a900
	ctx.lr = 0x82CAC120;
	sub_82D3A900(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r28,180
	ctx.r3.s64 = ctx.r28.s64 + 180;
	// bl 0x8259d6c0
	ctx.lr = 0x82CAC12C;
	sub_8259D6C0(ctx, base);
	// addi r4,r28,176
	ctx.r4.s64 = ctx.r28.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d3a988
	ctx.lr = 0x82CAC138;
	sub_82D3A988(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CAC144;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cac1c4
	if (cr6.eq) goto loc_82CAC1C4;
	// addi r4,r27,-441
	ctx.r4.s64 = ctx.r27.s64 + -441;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82CAC15C;
	sub_837B0C10(ctx, base);
	// lis r4,990
	ctx.r4.s64 = 64880640;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,180
	ctx.r4.u64 = ctx.r4.u64 | 180;
	// bl 0x82d042a8
	ctx.lr = 0x82CAC16C;
	sub_82D042A8(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CAC184;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82cac19c
	if (!cr6.eq) goto loc_82CAC19C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82CAC194;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82CAC19C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d291e0
	ctx.lr = 0x82CAC1AC;
	sub_82D291E0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r11,84(r25)
	PPC_STORE_U16(ctx.r25.u32 + 84, ctx.r11.u16);
	// bl 0x8387e8e0
	ctx.lr = 0x82CAC1BC;
	sub_8387E8E0(ctx, base);
loc_82CAC1BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,256(r28)
	PPC_STORE_U8(ctx.r28.u32 + 256, ctx.r11.u8);
loc_82CAC1C4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAC1CC"))) PPC_WEAK_FUNC(sub_82CAC1CC);
PPC_FUNC_IMPL(__imp__sub_82CAC1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAC1D0"))) PPC_WEAK_FUNC(sub_82CAC1D0);
PPC_FUNC_IMPL(__imp__sub_82CAC1D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CAC1D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
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
	ctx.lr = 0x82CAC218;
	sub_830E9BF8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cac230
	if (!cr6.lt) goto loc_82CAC230;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_82CAC230:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830efb28
	ctx.lr = 0x82CAC238;
	sub_830EFB28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82cac270
	if (!cr6.eq) goto loc_82CAC270;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82CAC248:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cac248
	if (!cr6.eq) goto loc_82CAC248;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CAC26C;
	sub_8259CC28(ctx, base);
	// b 0x82cac298
	goto loc_82CAC298;
loc_82CAC270:
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,65534
	cr6.compare<uint32_t>(ctx.r11.u32, 65534, xer);
	// bne cr6,0x82cac28c
	if (!cr6.eq) goto loc_82CAC28C;
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// ori r4,r4,11
	ctx.r4.u64 = ctx.r4.u64 | 11;
	// b 0x82cac294
	goto loc_82CAC294;
loc_82CAC28C:
	// lis r4,990
	ctx.r4.s64 = 64880640;
	// ori r4,r4,180
	ctx.r4.u64 = ctx.r4.u64 | 180;
loc_82CAC294:
	// bl 0x82d04220
	ctx.lr = 0x82CAC298;
	sub_82D04220(ctx, base);
loc_82CAC298:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837e41d8
	ctx.lr = 0x82CAC2A0;
	sub_837E41D8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cac2c0
	if (cr6.lt) goto loc_82CAC2C0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CAC2C0;
	sub_825952B8(ctx, base);
loc_82CAC2C0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAC2C8"))) PPC_WEAK_FUNC(sub_82CAC2C8);
PPC_FUNC_IMPL(__imp__sub_82CAC2C8) {
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
	// blt cr6,0x82cac2f0
	if (cr6.lt) goto loc_82CAC2F0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82cac2f4
	goto loc_82CAC2F4;
loc_82CAC2F0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82CAC2F4:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CAC310;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cac32c
	if (cr6.eq) goto loc_82CAC32C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cabb98
	ctx.lr = 0x82CAC328;
	sub_82CABB98(ctx, base);
	// b 0x82cac330
	goto loc_82CAC330;
loc_82CAC32C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CAC330:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAC348"))) PPC_WEAK_FUNC(sub_82CAC348);
PPC_FUNC_IMPL(__imp__sub_82CAC348) {
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
	// blt cr6,0x82cac370
	if (cr6.lt) goto loc_82CAC370;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82cac374
	goto loc_82CAC374;
loc_82CAC370:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82CAC374:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CAC390;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cac3ac
	if (cr6.eq) goto loc_82CAC3AC;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cabb98
	ctx.lr = 0x82CAC3A8;
	sub_82CABB98(ctx, base);
	// b 0x82cac3b0
	goto loc_82CAC3B0;
loc_82CAC3AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CAC3B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAC3C8"))) PPC_WEAK_FUNC(sub_82CAC3C8);
PPC_FUNC_IMPL(__imp__sub_82CAC3C8) {
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
	// blt cr6,0x82cac3f0
	if (cr6.lt) goto loc_82CAC3F0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82cac3f4
	goto loc_82CAC3F4;
loc_82CAC3F0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82CAC3F4:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CAC410;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cac42c
	if (cr6.eq) goto loc_82CAC42C;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cabb98
	ctx.lr = 0x82CAC428;
	sub_82CABB98(ctx, base);
	// b 0x82cac430
	goto loc_82CAC430;
loc_82CAC42C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CAC430:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAC448"))) PPC_WEAK_FUNC(sub_82CAC448);
PPC_FUNC_IMPL(__imp__sub_82CAC448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82CAC450;
	__savegprlr_22(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830ef8e8
	ctx.lr = 0x82CAC45C;
	sub_830EF8E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cac474
	if (cr6.eq) goto loc_82CAC474;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82CAC474:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CAC47C;
	sub_82D19A78(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r29,r11,11584
	ctx.r29.s64 = ctx.r11.s64 + 11584;
	// addi r4,r29,-160
	ctx.r4.s64 = ctx.r29.s64 + -160;
	// bl 0x82d2f098
	ctx.lr = 0x82CAC48C;
	sub_82D2F098(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cac9fc
	if (cr6.eq) goto loc_82CAC9FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r29,-152
	ctx.r4.s64 = ctx.r29.s64 + -152;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CAC4B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1ed60
	ctx.lr = 0x82CAC4C0;
	sub_82D1ED60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CAC4C8;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r29,-136
	ctx.r4.s64 = ctx.r29.s64 + -136;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CAC4E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cac9fc
	if (cr6.eq) goto loc_82CAC9FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r29,-128
	ctx.r4.s64 = ctx.r29.s64 + -128;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CAC504;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CAC514;
	sub_82D2AEC8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CAC524;
	sub_82D19788(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r5,r5,56
	ctx.r5.u64 = ctx.r5.u64 | 56;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,96(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CAC544;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d21408
	ctx.lr = 0x82CAC558;
	sub_82D21408(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d21408
	ctx.lr = 0x82CAC56C;
	sub_82D21408(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d21408
	ctx.lr = 0x82CAC580;
	sub_82D21408(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CAC588;
	sub_82D19A78(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r29,-116
	ctx.r4.s64 = ctx.r29.s64 + -116;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,72(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82CAC5A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r26,3
	ctx.r26.s64 = 3;
	// addi r27,r11,12160
	ctx.r27.s64 = ctx.r11.s64 + 12160;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// li r25,2
	ctx.r25.s64 = 2;
loc_82CAC5C4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// stw r28,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stb r30,228(r1)
	PPC_STORE_U8(ctx.r1.u32 + 228, ctx.r30.u8);
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// bl 0x830f6558
	ctx.lr = 0x82CAC5E4;
	sub_830F6558(ctx, base);
	// lwz r10,248(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82cac600
	if (cr6.lt) goto loc_82CAC600;
	// stw r25,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r25.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r4,228(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// bl 0x825952b8
	ctx.lr = 0x82CAC600;
	sub_825952B8(ctx, base);
loc_82CAC600:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// stw r28,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r28.u32);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// stb r30,228(r1)
	PPC_STORE_U8(ctx.r1.u32 + 228, ctx.r30.u8);
	// bne 0x82cac5c4
	if (!cr0.eq) goto loc_82CAC5C4;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d24c38
	ctx.lr = 0x82CAC628;
	sub_82D24C38(ctx, base);
	// li r26,-1
	ctx.r26.s64 = -1;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r4,r29,-96
	ctx.r4.s64 = ctx.r29.s64 + -96;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// stw r26,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r26.u32);
	// stw r28,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r28.u32);
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// stb r30,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r30.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82CAC658;
	sub_8259CC28(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830f6558
	ctx.lr = 0x82CAC664;
	sub_830F6558(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d24c38
	ctx.lr = 0x82CAC674;
	sub_82D24C38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CAC67C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r29,-92
	ctx.r4.s64 = ctx.r29.s64 + -92;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CAC694;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cac9e4
	if (cr6.eq) goto loc_82CAC9E4;
	// lis r4,38
	ctx.r4.s64 = 2490368;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82d30340
	ctx.lr = 0x82CAC6AC;
	sub_82D30340(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82CAC6B0;
	sub_82D86078(ctx, base);
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82CAC6B8;
	sub_82DAB6D0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x83542800
	ctx.lr = 0x82CAC6C0;
	sub_83542800(ctx, base);
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8259cb28
	ctx.lr = 0x82CAC6E0;
	sub_8259CB28(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82638f20
	ctx.lr = 0x82CAC6E8;
	sub_82638F20(ctx, base);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cb28
	ctx.lr = 0x82CAC708;
	sub_8259CB28(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lhz r23,84(r27)
	ctx.r23.u64 = PPC_LOAD_U16(ctx.r27.u32 + 84);
	// bl 0x82d33db0
	ctx.lr = 0x82CAC718;
	sub_82D33DB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cac9d4
	if (cr6.eq) goto loc_82CAC9D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r29,-80
	ctx.r4.s64 = ctx.r29.s64 + -80;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CAC73C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r28,r28,100
	ctx.r28.s64 = ctx.r28.s64 + 100;
	// addi r4,r29,-68
	ctx.r4.s64 = ctx.r29.s64 + -68;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CAC758;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cac9d4
	if (cr6.eq) goto loc_82CAC9D4;
	// lis r4,38
	ctx.r4.s64 = 2490368;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82d29598
	ctx.lr = 0x82CAC76C;
	sub_82D29598(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r29,-60
	ctx.r4.s64 = ctx.r29.s64 + -60;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CAC784;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cac9d4
	if (cr6.eq) goto loc_82CAC9D4;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// addi r28,r31,96
	ctx.r28.s64 = ctx.r31.s64 + 96;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x8259cb28
	ctx.lr = 0x82CAC7AC;
	sub_8259CB28(ctx, base);
	// addi r3,r28,32
	ctx.r3.s64 = ctx.r28.s64 + 32;
	// addi r4,r29,-434
	ctx.r4.s64 = ctx.r29.s64 + -434;
	// bl 0x8259d6c0
	ctx.lr = 0x82CAC7B8;
	sub_8259D6C0(ctx, base);
	// lis r11,81
	ctx.r11.s64 = 5308416;
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// ori r10,r11,95
	ctx.r10.u64 = ctx.r11.u64 | 95;
	// li r9,23
	ctx.r9.s64 = 23;
	// stw r27,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r27.u32);
	// stw r10,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r10.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r9,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r9.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stb r27,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r27.u8);
	// bl 0x82d3a988
	ctx.lr = 0x82CAC7E8;
	sub_82D3A988(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d3a520
	ctx.lr = 0x82CAC7F8;
	sub_82D3A520(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CAC804;
	sub_82D33DB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cac9d4
	if (cr6.eq) goto loc_82CAC9D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r29,-48
	ctx.r4.s64 = ctx.r29.s64 + -48;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CAC828;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r28,r28,100
	ctx.r28.s64 = ctx.r28.s64 + 100;
	// addi r4,r29,-36
	ctx.r4.s64 = ctx.r29.s64 + -36;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CAC844;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cac9d4
	if (cr6.eq) goto loc_82CAC9D4;
	// lis r4,38
	ctx.r4.s64 = 2490368;
	// ori r4,r4,4
	ctx.r4.u64 = ctx.r4.u64 | 4;
	// bl 0x82d29598
	ctx.lr = 0x82CAC858;
	sub_82D29598(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r29,-28
	ctx.r4.s64 = ctx.r29.s64 + -28;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CAC870;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cac9d4
	if (cr6.eq) goto loc_82CAC9D4;
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// addi r28,r31,176
	ctx.r28.s64 = ctx.r31.s64 + 176;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cb28
	ctx.lr = 0x82CAC898;
	sub_8259CB28(ctx, base);
	// addi r3,r28,32
	ctx.r3.s64 = ctx.r28.s64 + 32;
	// addi r4,r29,-433
	ctx.r4.s64 = ctx.r29.s64 + -433;
	// bl 0x8259d6c0
	ctx.lr = 0x82CAC8A4;
	sub_8259D6C0(ctx, base);
	// lis r11,-32066
	ctx.r11.s64 = -2101477376;
	// lis r10,81
	ctx.r10.s64 = 5308416;
	// stw r27,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r27.u32);
	// addi r9,r11,9896
	ctx.r9.s64 = ctx.r11.s64 + 9896;
	// stw r27,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r27.u32);
	// ori r8,r10,96
	ctx.r8.u64 = ctx.r10.u64 | 96;
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r9,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r9.u32);
	// stw r8,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r8.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r7,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r7.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d3a988
	ctx.lr = 0x82CAC8D8;
	sub_82D3A988(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d3a520
	ctx.lr = 0x82CAC8E8;
	sub_82D3A520(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CAC8F4;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cac9d4
	if (cr6.eq) goto loc_82CAC9D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CAC918;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,100
	ctx.r30.s64 = ctx.r30.s64 + 100;
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CAC934;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cac9d4
	if (cr6.eq) goto loc_82CAC9D4;
	// lis r4,32
	ctx.r4.s64 = 2097152;
	// ori r4,r4,52
	ctx.r4.u64 = ctx.r4.u64 | 52;
	// bl 0x82d29598
	ctx.lr = 0x82CAC948;
	sub_82D29598(ctx, base);
	// addi r4,r29,-402
	ctx.r4.s64 = ctx.r29.s64 + -402;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x837b0c10
	ctx.lr = 0x82CAC954;
	sub_837B0C10(ctx, base);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cac1d0
	ctx.lr = 0x82CAC964;
	sub_82CAC1D0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CAC97C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82cac990
	if (!cr6.eq) goto loc_82CAC990;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x82CAC98C;
	sub_8387E8E0(ctx, base);
	// b 0x82cac9d4
	goto loc_82CAC9D4;
loc_82CAC990:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// bl 0x82d291e0
	ctx.lr = 0x82CAC9A0;
	sub_82D291E0(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x82CAC9A8;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cab9b8
	ctx.lr = 0x82CAC9B0;
	sub_82CAB9B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r6,2
	ctx.r6.s64 = 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bne cr6,0x82cac9d0
	if (!cr6.eq) goto loc_82CAC9D0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82CAC9D0:
	// bl 0x82d2b608
	ctx.lr = 0x82CAC9D4;
	sub_82D2B608(ctx, base);
loc_82CAC9D4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82CAC9DC;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x82CAC9E4;
	sub_8387E8E0(ctx, base);
loc_82CAC9E4:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x838760e0
	ctx.lr = 0x82CAC9EC;
	sub_838760E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82acdc18
	ctx.lr = 0x82CAC9F4;
	sub_82ACDC18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82acdc18
	ctx.lr = 0x82CAC9FC;
	sub_82ACDC18(ctx, base);
loc_82CAC9FC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CACA08"))) PPC_WEAK_FUNC(sub_82CACA08);
PPC_FUNC_IMPL(__imp__sub_82CACA08) {
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
	ctx.lr = 0x82CACA20;
	sub_82D19A78(ctx, base);
	// bl 0x82d2b0f8
	ctx.lr = 0x82CACA24;
	sub_82D2B0F8(ctx, base);
	// bl 0x82d39100
	ctx.lr = 0x82CACA28;
	sub_82D39100(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,12624
	ctx.r5.s64 = ctx.r11.s64 + 12624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82CACA3C;
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

__attribute__((alias("__imp__sub_82CACA50"))) PPC_WEAK_FUNC(sub_82CACA50);
PPC_FUNC_IMPL(__imp__sub_82CACA50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CACA58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82CACA7C;
	sub_82D2B608(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r30,r11,12608
	ctx.r30.s64 = ctx.r11.s64 + 12608;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r30,-381
	ctx.r6.s64 = ctx.r30.s64 + -381;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a8810
	ctx.lr = 0x82CACA9C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// bne cr6,0x82cacac8
	if (!cr6.eq) goto loc_82CACAC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,-72
	ctx.r4.s64 = ctx.r30.s64 + -72;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CACAC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CACAC8:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x82cacaf4
	if (!cr6.eq) goto loc_82CACAF4;
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
	// bctrl 
	ctx.lr = 0x82CACAEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
	// b 0x82cacb00
	goto loc_82CACB00;
loc_82CACAF4:
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// bctrl 
	ctx.lr = 0x82CACAFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82CACB00:
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CACB14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cacb2c
	if (cr6.eq) goto loc_82CACB2C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CACB2C;
	sub_82D291E0(ctx, base);
loc_82CACB2C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CACB34"))) PPC_WEAK_FUNC(sub_82CACB34);
PPC_FUNC_IMPL(__imp__sub_82CACB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CACB38"))) PPC_WEAK_FUNC(sub_82CACB38);
PPC_FUNC_IMPL(__imp__sub_82CACB38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CACB40;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r10,28
	ctx.r10.s64 = 28;
	// lwz r9,100(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// divw r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// bgt cr6,0x82cacb78
	if (cr6.gt) goto loc_82CACB78;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CACB78;
	sub_831CC188(ctx, base);
loc_82CACB78:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mulli r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 * 28;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82CACBA4;
	sub_8259CB28(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x82cacbb4
	if (!cr6.eq) goto loc_82CACBB4;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82CACBB4:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82caca50
	ctx.lr = 0x82CACBC4;
	sub_82CACA50(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cacbe4
	if (cr6.lt) goto loc_82CACBE4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CACBE4;
	sub_825952B8(ctx, base);
loc_82CACBE4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CACBEC"))) PPC_WEAK_FUNC(sub_82CACBEC);
PPC_FUNC_IMPL(__imp__sub_82CACBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CACBF0"))) PPC_WEAK_FUNC(sub_82CACBF0);
PPC_FUNC_IMPL(__imp__sub_82CACBF0) {
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
	// addi r9,r11,12720
	ctx.r9.s64 = ctx.r11.s64 + 12720;
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
	// beq cr6,0x82cacc54
	if (cr6.eq) goto loc_82CACC54;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x838adab0
	ctx.lr = 0x82CACC40;
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
	ctx.lr = 0x82CACC54;
	sub_825952B8(ctx, base);
loc_82CACC54:
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
	ctx.lr = 0x82CACC6C;
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

__attribute__((alias("__imp__sub_82CACC84"))) PPC_WEAK_FUNC(sub_82CACC84);
PPC_FUNC_IMPL(__imp__sub_82CACC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CACC88"))) PPC_WEAK_FUNC(sub_82CACC88);
PPC_FUNC_IMPL(__imp__sub_82CACC88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CACC90;
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
	ctx.lr = 0x82CACCA4;
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
	ctx.lr = 0x82CACCBC;
	sub_82D253F8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,12720
	ctx.r9.s64 = ctx.r11.s64 + 12720;
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
	// lwz r4,2528(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 2528);
	// bl 0x82d20ae0
	ctx.lr = 0x82CACCF4;
	sub_82D20AE0(ctx, base);
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r6,12492
	ctx.r4.s64 = ctx.r6.s64 + 12492;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d23390
	ctx.lr = 0x82CACD08;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CACD14"))) PPC_WEAK_FUNC(sub_82CACD14);
PPC_FUNC_IMPL(__imp__sub_82CACD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CACD18"))) PPC_WEAK_FUNC(sub_82CACD18);
PPC_FUNC_IMPL(__imp__sub_82CACD18) {
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
	// bl 0x82cacbf0
	ctx.lr = 0x82CACD38;
	sub_82CACBF0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cacd50
	if (cr6.eq) goto loc_82CACD50;
	// bl 0x82416268
	ctx.lr = 0x82CACD4C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CACD50:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CACD68"))) PPC_WEAK_FUNC(sub_82CACD68);
PPC_FUNC_IMPL(__imp__sub_82CACD68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82CACD70;
	__savegprlr_24(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82CACD80;
	sub_82D17DA0(ctx, base);
	// bl 0x82d34e50
	ctx.lr = 0x82CACD84;
	sub_82D34E50(ctx, base);
	// bl 0x82d34d38
	ctx.lr = 0x82CACD88;
	sub_82D34D38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cacdec
	if (cr6.eq) goto loc_82CACDEC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CACD9C;
	sub_82D19A78(ctx, base);
	// bl 0x82d2b0f8
	ctx.lr = 0x82CACDA0;
	sub_82D2B0F8(ctx, base);
	// bl 0x82d390c0
	ctx.lr = 0x82CACDA4;
	sub_82D390C0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CACDB4;
	sub_82D19788(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82CACDCC;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82CACDD4;
	sub_82D33DB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82CACDDC;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82cacdf8
	if (!cr6.eq) goto loc_82CACDF8;
loc_82CACDE4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x838ae2a8
	ctx.lr = 0x82CACDEC;
	sub_838AE2A8(ctx, base);
loc_82CACDEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82CACDF8:
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r28,r11,12528
	ctx.r28.s64 = ctx.r11.s64 + 12528;
	// addi r4,r28,-16
	ctx.r4.s64 = ctx.r28.s64 + -16;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CACE18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cacde4
	if (cr6.eq) goto loc_82CACDE4;
	// addi r4,r28,-302
	ctx.r4.s64 = ctx.r28.s64 + -302;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82CACE30;
	sub_837B0C10(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// ori r4,r4,177
	ctx.r4.u64 = ctx.r4.u64 | 177;
	// bl 0x82d042a8
	ctx.lr = 0x82CACE40;
	sub_82D042A8(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8292a3f8
	ctx.lr = 0x82CACE4C;
	sub_8292A3F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a6c6c0
	ctx.lr = 0x82CACE5C;
	sub_82A6C6C0(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r29,28
	ctx.r29.s64 = 28;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r11,r9,r29
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r29.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82caceb0
	if (cr0.eq) goto loc_82CACEB0;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// ble cr6,0x82cad0d8
	if (!cr6.gt) goto loc_82CAD0D8;
loc_82CACE84:
	// addi r3,r27,96
	ctx.r3.s64 = ctx.r27.s64 + 96;
	// add r4,r30,r10
	ctx.r4.u64 = ctx.r30.u64 + ctx.r10.u64;
	// bl 0x8291fdc8
	ctx.lr = 0x82CACE90;
	sub_8291FDC8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r11,r9,r29
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r29.s32);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82cace84
	if (cr6.gt) goto loc_82CACE84;
loc_82CACEB0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CACEB8;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82CACEC0;
	sub_82D33DB0(ctx, base);
	// bl 0x82d33c10
	ctx.lr = 0x82CACEC4;
	sub_82D33C10(ctx, base);
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// lwz r10,100(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// addi r30,r27,96
	ctx.r30.s64 = ctx.r27.s64 + 96;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r31,r9,r29
	ctx.r31.s32 = PPCDivide(ctx.r9.s32, ctx.r29.s32);
	// cmplwi cr6,r31,7
	cr6.compare<uint32_t>(ctx.r31.u32, 7, xer);
	// ble cr6,0x82cacee8
	if (!cr6.gt) goto loc_82CACEE8;
	// li r31,7
	ctx.r31.s64 = 7;
loc_82CACEE8:
	// li r25,15
	ctx.r25.s64 = 15;
	// stw r26,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r26.u32);
	// stb r26,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r26.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r25,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r25.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82CACF08;
	sub_8259CC28(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r4,r31,32
	ctx.r4.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x83161f10
	ctx.lr = 0x82CACF1C;
	sub_83161F10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a1da8
	ctx.lr = 0x82CACF30;
	sub_825A1DA8(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// li r28,2
	ctx.r28.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cacf50
	if (cr6.lt) goto loc_82CACF50;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x82CACF50;
	sub_825952B8(ctx, base);
loc_82CACF50:
	// stw r25,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r25.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r26,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r26.u32);
	// stb r26,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r26.u8);
	// bl 0x82d19a78
	ctx.lr = 0x82CACF64;
	sub_82D19A78(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cacf78
	if (!cr6.lt) goto loc_82CACF78;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82CACF78:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CACF8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// divw. r5,r7,r29
	ctx.r5.s32 = PPCDivide(ctx.r7.s32, ctx.r29.s32);
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x82cad024
	if (cr0.eq) goto loc_82CAD024;
loc_82CACFA4:
	// cmplw cr6,r31,r24
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r24.u32, xer);
	// bge cr6,0x82cad024
	if (!cr6.lt) goto loc_82CAD024;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CACFB4;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82CACFBC;
	sub_82D33DB0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CACFC4;
	sub_82D33DB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cad008
	if (cr6.eq) goto loc_82CAD008;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x82cacfe0
	if (!cr6.eq) goto loc_82CACFE0;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82CACFE0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r29
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r29.s32);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// ble cr6,0x82cad0e4
	if (!cr6.gt) goto loc_82CAD0E4;
	// mulli r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 * 28;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82caca50
	ctx.lr = 0x82CAD008;
	sub_82CACA50(ctx, base);
loc_82CAD008:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r5,r9,r29
	ctx.r5.s32 = PPCDivide(ctx.r9.s32, ctx.r29.s32);
	// cmplw cr6,r31,r5
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r5.u32, xer);
	// blt cr6,0x82cacfa4
	if (cr6.lt) goto loc_82CACFA4;
loc_82CAD024:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d20f50
	ctx.lr = 0x82CAD038;
	sub_82D20F50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83102db0
	ctx.lr = 0x82CAD044;
	sub_83102DB0(ctx, base);
	// bl 0x82d26ed8
	ctx.lr = 0x82CAD048;
	sub_82D26ED8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d26900
	ctx.lr = 0x82CAD050;
	sub_82D26900(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cad06c
	if (cr6.lt) goto loc_82CAD06C;
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82CAD06C;
	sub_825952B8(ctx, base);
loc_82CAD06C:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r25,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r25.u32);
	// stw r26,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r26.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r26,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r26.u8);
	// blt cr6,0x82cad094
	if (cr6.lt) goto loc_82CAD094;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82CAD094;
	sub_825952B8(ctx, base);
loc_82CAD094:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r25,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r25.u32);
	// stw r26,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r26.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stb r26,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r26.u8);
	// beq cr6,0x82cad0cc
	if (cr6.eq) goto loc_82CAD0CC;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x838adab0
	ctx.lr = 0x82CAD0BC;
	sub_838ADAB0(ctx, base);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82CAD0CC;
	sub_825952B8(ctx, base);
loc_82CAD0CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82CAD0D8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CAD0E4;
	sub_831CC188(ctx, base);
loc_82CAD0E4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CAD0F0;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82CAD0F0"))) PPC_WEAK_FUNC(sub_82CAD0F0);
PPC_FUNC_IMPL(__imp__sub_82CAD0F0) {
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
	// blt cr6,0x82cad118
	if (cr6.lt) goto loc_82CAD118;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82cad11c
	goto loc_82CAD11C;
loc_82CAD118:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82CAD11C:
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
	ctx.lr = 0x82CAD138;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cad154
	if (cr6.eq) goto loc_82CAD154;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cacc88
	ctx.lr = 0x82CAD14C;
	sub_82CACC88(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82cad158
	if (!cr6.eq) goto loc_82CAD158;
loc_82CAD154:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CAD158:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAD170"))) PPC_WEAK_FUNC(sub_82CAD170);
PPC_FUNC_IMPL(__imp__sub_82CAD170) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CAD194;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d19788
	ctx.lr = 0x82CAD1A4;
	sub_82D19788(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,23
	ctx.r5.s64 = 1507328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,166
	ctx.r5.u64 = ctx.r5.u64 | 166;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CAD1C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r9,13292
	ctx.r3.s64 = ctx.r9.s64 + 13292;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x82CAD1DC;
	sub_82D2FA90(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r4,r4,387
	ctx.r4.u64 = ctx.r4.u64 | 387;
	// bl 0x82d2ada8
	ctx.lr = 0x82CAD1EC;
	sub_82D2ADA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82CAD1F8;
	sub_83103100(ctx, base);
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

__attribute__((alias("__imp__sub_82CAD214"))) PPC_WEAK_FUNC(sub_82CAD214);
PPC_FUNC_IMPL(__imp__sub_82CAD214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAD218"))) PPC_WEAK_FUNC(sub_82CAD218);
PPC_FUNC_IMPL(__imp__sub_82CAD218) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CAD220;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r5,r8
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, xer);
	// bge cr6,0x82cad33c
	if (!cr6.lt) goto loc_82CAD33C;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r9,r5,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r11,r11,2692
	ctx.r11.s64 = ctx.r11.s64 + 2692;
	// ldx r28,r9,r10
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// std r28,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r28.u64);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bne cr6,0x82cad278
	if (!cr6.eq) goto loc_82CAD278;
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82cad29c
	goto loc_82CAD29C;
loc_82CAD278:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82cad294
	if (!cr6.eq) goto loc_82CAD294;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82cad298
	if (cr6.eq) goto loc_82CAD298;
loc_82CAD294:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CAD298:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82CAD29C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cad33c
	if (!cr6.eq) goto loc_82CAD33C;
	// bl 0x82d86078
	ctx.lr = 0x82CAD2AC;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cad33c
	if (cr6.eq) goto loc_82CAD33C;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82CAD2BC;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82CAD2C0;
	sub_83102DB0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d9a8a8
	ctx.lr = 0x82CAD2CC;
	sub_82D9A8A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cad33c
	if (cr6.eq) goto loc_82CAD33C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d9a868
	ctx.lr = 0x82CAD2E4;
	sub_82D9A868(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cad33c
	if (cr6.eq) goto loc_82CAD33C;
	// lwz r6,96(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cf0138
	ctx.lr = 0x82CAD308;
	sub_82CF0138(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cf0628
	ctx.lr = 0x82CAD318;
	sub_82CF0628(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82cf0708
	ctx.lr = 0x82CAD328;
	sub_82CF0708(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cefeb8
	ctx.lr = 0x82CAD33C;
	sub_82CEFEB8(ctx, base);
loc_82CAD33C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAD344"))) PPC_WEAK_FUNC(sub_82CAD344);
PPC_FUNC_IMPL(__imp__sub_82CAD344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAD348"))) PPC_WEAK_FUNC(sub_82CAD348);
PPC_FUNC_IMPL(__imp__sub_82CAD348) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,168(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// addi r11,r3,148
	ctx.r11.s64 = ctx.r3.s64 + 148;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82cad35c
	if (cr6.lt) goto loc_82CAD35C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82CAD35C:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82d20da8
	sub_82D20DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAD368"))) PPC_WEAK_FUNC(sub_82CAD368);
PPC_FUNC_IMPL(__imp__sub_82CAD368) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82CAD370;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CAD37C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cad4a4
	if (cr6.eq) goto loc_82CAD4A4;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82CAD38C;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82CAD390;
	sub_83102DB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d99fa0
	ctx.lr = 0x82CAD398;
	sub_82D99FA0(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// beq cr6,0x82cad494
	if (cr6.eq) goto loc_82CAD494;
	// addi r31,r25,128
	ctx.r31.s64 = ctx.r25.s64 + 128;
loc_82CAD3B0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// sth r27,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r27.u16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d99fb8
	ctx.lr = 0x82CAD3C0;
	sub_82D99FB8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bge cr6,0x82cad3ec
	if (!cr6.lt) goto loc_82CAD3EC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82cad3f0
	if (!cr6.gt) goto loc_82CAD3F0;
loc_82CAD3EC:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_82CAD3F0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cad450
	if (cr6.eq) goto loc_82CAD450;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// srawi r30,r7,3
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r30.s64 = ctx.r7.s32 >> 3;
	// bne cr6,0x82cad424
	if (!cr6.eq) goto loc_82CAD424;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83547fe8
	ctx.lr = 0x82CAD424;
	sub_83547FE8(ctx, base);
loc_82CAD424:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cad47c
	if (cr6.eq) goto loc_82CAD47C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r30,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// b 0x82cad47c
	goto loc_82CAD47C;
loc_82CAD450:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82cad468
	if (!cr6.eq) goto loc_82CAD468;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83547fe8
	ctx.lr = 0x82CAD468;
	sub_83547FE8(ctx, base);
loc_82CAD468:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cad47c
	if (cr6.eq) goto loc_82CAD47C;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
loc_82CAD47C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r29,r26
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// blt cr6,0x82cad3b0
	if (cr6.lt) goto loc_82CAD3B0;
loc_82CAD494:
	// lis r11,560
	ctx.r11.s64 = 36700160;
	// stb r27,144(r25)
	PPC_STORE_U8(ctx.r25.u32 + 144, ctx.r27.u8);
	// ori r10,r11,185
	ctx.r10.u64 = ctx.r11.u64 | 185;
	// stw r10,96(r25)
	PPC_STORE_U32(ctx.r25.u32 + 96, ctx.r10.u32);
loc_82CAD4A4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAD4AC"))) PPC_WEAK_FUNC(sub_82CAD4AC);
PPC_FUNC_IMPL(__imp__sub_82CAD4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAD4B0"))) PPC_WEAK_FUNC(sub_82CAD4B0);
PPC_FUNC_IMPL(__imp__sub_82CAD4B0) {
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
	// bl 0x82c8e008
	ctx.lr = 0x82CAD4E8;
	sub_82C8E008(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82cad500
	if (cr6.eq) goto loc_82CAD500;
	// bl 0x82416268
	ctx.lr = 0x82CAD4FC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CAD500:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAD518"))) PPC_WEAK_FUNC(sub_82CAD518);
PPC_FUNC_IMPL(__imp__sub_82CAD518) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CAD520;
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
	// li r4,208
	ctx.r4.s64 = 208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CAD544;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cad594
	if (cr6.eq) goto loc_82CAD594;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cf0470
	ctx.lr = 0x82CAD55C;
	sub_82CF0470(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,13392
	ctx.r9.s64 = ctx.r11.s64 + 13392;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r4,r7,13276
	ctx.r4.s64 = ctx.r7.s64 + 13276;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x8259cc28
	ctx.lr = 0x82CAD588;
	sub_8259CC28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CAD594:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAD5A0"))) PPC_WEAK_FUNC(sub_82CAD5A0);
PPC_FUNC_IMPL(__imp__sub_82CAD5A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cad5b0
	if (cr6.lt) goto loc_82CAD5B0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82CAD5B0:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82cad518
	sub_82CAD518(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAD5B8"))) PPC_WEAK_FUNC(sub_82CAD5B8);
PPC_FUNC_IMPL(__imp__sub_82CAD5B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,13980
	ctx.r3.s64 = ctx.r11.s64 + 13980;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAD5C4"))) PPC_WEAK_FUNC(sub_82CAD5C4);
PPC_FUNC_IMPL(__imp__sub_82CAD5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAD5C8"))) PPC_WEAK_FUNC(sub_82CAD5C8);
PPC_FUNC_IMPL(__imp__sub_82CAD5C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r11,13988
	ctx.r3.s64 = ctx.r11.s64 + 13988;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAD5D4"))) PPC_WEAK_FUNC(sub_82CAD5D4);
PPC_FUNC_IMPL(__imp__sub_82CAD5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAD5D8"))) PPC_WEAK_FUNC(sub_82CAD5D8);
PPC_FUNC_IMPL(__imp__sub_82CAD5D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CAD5E0;
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
	// li r4,248
	ctx.r4.s64 = 248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CAD604;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cad640
	if (cr6.eq) goto loc_82CAD640;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c30658
	ctx.lr = 0x82CAD61C;
	sub_82C30658(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,14080
	ctx.r9.s64 = ctx.r11.s64 + 14080;
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
loc_82CAD640:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAD64C"))) PPC_WEAK_FUNC(sub_82CAD64C);
PPC_FUNC_IMPL(__imp__sub_82CAD64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAD650"))) PPC_WEAK_FUNC(sub_82CAD650);
PPC_FUNC_IMPL(__imp__sub_82CAD650) {
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
	// addi r9,r11,14080
	ctx.r9.s64 = ctx.r11.s64 + 14080;
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
	// bl 0x82c2fdf8
	ctx.lr = 0x82CAD688;
	sub_82C2FDF8(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82cad6a0
	if (cr6.eq) goto loc_82CAD6A0;
	// bl 0x82416268
	ctx.lr = 0x82CAD69C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CAD6A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAD6B8"))) PPC_WEAK_FUNC(sub_82CAD6B8);
PPC_FUNC_IMPL(__imp__sub_82CAD6B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cad6c8
	if (cr6.lt) goto loc_82CAD6C8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82CAD6C8:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82cad5d8
	sub_82CAD5D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAD6D0"))) PPC_WEAK_FUNC(sub_82CAD6D0);
PPC_FUNC_IMPL(__imp__sub_82CAD6D0) {
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
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// ori r4,r4,328
	ctx.r4.u64 = ctx.r4.u64 | 328;
	// bl 0x82d04220
	ctx.lr = 0x82CAD704;
	sub_82D04220(ctx, base);
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

__attribute__((alias("__imp__sub_82CAD71C"))) PPC_WEAK_FUNC(sub_82CAD71C);
PPC_FUNC_IMPL(__imp__sub_82CAD71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAD720"))) PPC_WEAK_FUNC(sub_82CAD720);
PPC_FUNC_IMPL(__imp__sub_82CAD720) {
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
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,13762
	ctx.r4.s64 = ctx.r9.s64 + 13762;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82CAD760;
	sub_8259CC28(ctx, base);
	// lwz r8,208(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r8,6
	cr6.compare<int32_t>(ctx.r8.s32, 6, xer);
	// bne cr6,0x82cad78c
	if (!cr6.eq) goto loc_82CAD78C;
	// lwz r11,224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// li r10,90
	ctx.r10.s64 = 90;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// divwu r5,r11,r10
	ctx.r5.u32 = PPCDivide(ctx.r11.u32, ctx.r10.u32);
	// ori r4,r4,393
	ctx.r4.u64 = ctx.r4.u64 | 393;
	// bl 0x82d042a8
	ctx.lr = 0x82CAD788;
	sub_82D042A8(ctx, base);
	// b 0x82cad798
	goto loc_82CAD798;
loc_82CAD78C:
	// lis r4,513
	ctx.r4.s64 = 33619968;
	// ori r4,r4,197
	ctx.r4.u64 = ctx.r4.u64 | 197;
	// bl 0x82d04220
	ctx.lr = 0x82CAD798;
	sub_82D04220(ctx, base);
loc_82CAD798:
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

__attribute__((alias("__imp__sub_82CAD7B4"))) PPC_WEAK_FUNC(sub_82CAD7B4);
PPC_FUNC_IMPL(__imp__sub_82CAD7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAD7B8"))) PPC_WEAK_FUNC(sub_82CAD7B8);
PPC_FUNC_IMPL(__imp__sub_82CAD7B8) {
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
	// bl 0x82d968e8
	ctx.lr = 0x82CAD7D0;
	sub_82D968E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82cad7f0
	if (!cr6.eq) goto loc_82CAD7F0;
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
loc_82CAD7F0:
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82b57f88
	ctx.lr = 0x82CAD7F8;
	sub_82B57F88(ctx, base);
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

__attribute__((alias("__imp__sub_82CAD810"))) PPC_WEAK_FUNC(sub_82CAD810);
PPC_FUNC_IMPL(__imp__sub_82CAD810) {
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
	// bl 0x82d19a68
	ctx.lr = 0x82CAD820;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cad830
	if (cr6.eq) goto loc_82CAD830;
	// bl 0x82d2b0f8
	ctx.lr = 0x82CAD82C;
	sub_82D2B0F8(ctx, base);
	// bl 0x82d39100
	ctx.lr = 0x82CAD830;
	sub_82D39100(ctx, base);
loc_82CAD830:
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

__attribute__((alias("__imp__sub_82CAD844"))) PPC_WEAK_FUNC(sub_82CAD844);
PPC_FUNC_IMPL(__imp__sub_82CAD844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAD848"))) PPC_WEAK_FUNC(sub_82CAD848);
PPC_FUNC_IMPL(__imp__sub_82CAD848) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CAD850;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,14984
	ctx.r9.s64 = ctx.r11.s64 + 14984;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// addi r30,r3,136
	ctx.r30.s64 = ctx.r3.s64 + 136;
	// lwz r7,156(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// li r26,2
	ctx.r26.s64 = 2;
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82cad894
	if (cr6.lt) goto loc_82CAD894;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82CAD894;
	sub_825952B8(ctx, base);
loc_82CAD894:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// addi r31,r29,100
	ctx.r31.s64 = ctx.r29.s64 + 100;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// lwz r11,120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cad8c8
	if (cr6.lt) goto loc_82CAD8C8;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82CAD8C8;
	sub_825952B8(ctx, base);
loc_82CAD8C8:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bl 0x82d25548
	ctx.lr = 0x82CAD8DC;
	sub_82D25548(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAD8E4"))) PPC_WEAK_FUNC(sub_82CAD8E4);
PPC_FUNC_IMPL(__imp__sub_82CAD8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAD8E8"))) PPC_WEAK_FUNC(sub_82CAD8E8);
PPC_FUNC_IMPL(__imp__sub_82CAD8E8) {
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
	// bl 0x82cad848
	ctx.lr = 0x82CAD908;
	sub_82CAD848(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cad920
	if (cr6.eq) goto loc_82CAD920;
	// bl 0x82416268
	ctx.lr = 0x82CAD91C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CAD920:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAD938"))) PPC_WEAK_FUNC(sub_82CAD938);
PPC_FUNC_IMPL(__imp__sub_82CAD938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CAD940;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CAD94C;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cadca4
	if (cr6.eq) goto loc_82CADCA4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CAD95C;
	sub_82D19A78(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cadca4
	if (cr6.eq) goto loc_82CADCA4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d1ed60
	ctx.lr = 0x82CAD978;
	sub_82D1ED60(ctx, base);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r4,3084(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CAD998;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,100(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// lis r8,-31776
	ctx.r8.s64 = -2082471936;
	// addi r28,r27,100
	ctx.r28.s64 = ctx.r27.s64 + 100;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r4,3080(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3080);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82CAD9B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cadca4
	if (cr6.eq) goto loc_82CADCA4;
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cad9f8
	if (!cr6.eq) goto loc_82CAD9F8;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,128(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// bl 0x82c31838
	ctx.lr = 0x82CAD9DC;
	sub_82C31838(ctx, base);
	// lwz r11,112(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CAD9F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82cada50
	goto loc_82CADA50;
loc_82CAD9F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82c325e8
	ctx.lr = 0x82CADA00;
	sub_82C325E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r3.u32);
	// beq cr6,0x82cada34
	if (cr6.eq) goto loc_82CADA34;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x82CADA18;
	sub_83103100(ctx, base);
	// addi r4,r30,136
	ctx.r4.s64 = ctx.r30.s64 + 136;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8292a3f8
	ctx.lr = 0x82CADA24;
	sub_8292A3F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// bl 0x82c32758
	ctx.lr = 0x82CADA34;
	sub_82C32758(ctx, base);
loc_82CADA34:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d39d50
	ctx.lr = 0x82CADA40;
	sub_82D39D50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d39cd0
	ctx.lr = 0x82CADA48;
	sub_82D39CD0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,164(r30)
	PPC_STORE_U8(ctx.r30.u32 + 164, ctx.r11.u8);
loc_82CADA50:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,3076(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3076);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CADA6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cadca4
	if (cr6.eq) goto loc_82CADCA4;
	// lwz r10,168(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r29,r11,14880
	ctx.r29.s64 = ctx.r11.s64 + 14880;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x82cadaf8
	if (cr6.eq) goto loc_82CADAF8;
	// bl 0x82d86078
	ctx.lr = 0x82CADA90;
	sub_82D86078(ctx, base);
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82da27f0
	ctx.lr = 0x82CADA98;
	sub_82DA27F0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r4,r29,-366
	ctx.r4.s64 = ctx.r29.s64 + -366;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82CADAA8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82dad268
	ctx.lr = 0x82CADAB4;
	sub_82DAD268(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cadac8
	if (!cr6.lt) goto loc_82CADAC8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82CADAC8:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82CADAD0;
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
	ctx.lr = 0x82CADAE4;
	sub_82D291E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82CADAEC;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82CADAF4;
	sub_8387E8E0(ctx, base);
	// b 0x82cadb08
	goto loc_82CADB08;
loc_82CADAF8:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,328
	ctx.r4.u64 = ctx.r4.u64 | 328;
	// bl 0x82d29598
	ctx.lr = 0x82CADB08;
	sub_82D29598(ctx, base);
loc_82CADB08:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,3072(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3072);
	// bl 0x82d2f098
	ctx.lr = 0x82CADB18;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cadca4
	if (cr6.eq) goto loc_82CADCA4;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,3068(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3068);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CADB3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cadca4
	if (cr6.eq) goto loc_82CADCA4;
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// addi r4,r30,100
	ctx.r4.s64 = ctx.r30.s64 + 100;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cadb5c
	if (cr6.lt) goto loc_82CADB5C;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82CADB5C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82CADB64;
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
	ctx.lr = 0x82CADB78;
	sub_82D291E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82CADB80;
	sub_8387E8E0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d21188
	ctx.lr = 0x82CADB90;
	sub_82D21188(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,3064(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3064);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CADBAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cadca4
	if (cr6.eq) goto loc_82CADCA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r4,3060(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3060);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CADBD4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// lis r8,-31776
	ctx.r8.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,3056(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3056);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82CADBF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cadca4
	if (cr6.eq) goto loc_82CADCA4;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CADC14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cadca4
	if (cr6.eq) goto loc_82CADCA4;
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// ori r4,r4,25
	ctx.r4.u64 = ctx.r4.u64 | 25;
	// bl 0x82d29598
	ctx.lr = 0x82CADC28;
	sub_82D29598(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,3052(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3052);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CADC44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cadca4
	if (cr6.eq) goto loc_82CADCA4;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b6e0
	ctx.lr = 0x82CADC5C;
	sub_82D2B6E0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CADC6C;
	sub_82D19788(ctx, base);
	// lwz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82cadc88
	if (cr6.eq) goto loc_82CADC88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CADC88;
	sub_82D19788(ctx, base);
loc_82CADC88:
	// lwz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82cadca4
	if (!cr6.eq) goto loc_82CADCA4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CADC9C;
	sub_82D19A68(ctx, base);
	// bl 0x82d2b0f8
	ctx.lr = 0x82CADCA0;
	sub_82D2B0F8(ctx, base);
	// bl 0x82d390c0
	ctx.lr = 0x82CADCA4;
	sub_82D390C0(ctx, base);
loc_82CADCA4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CADCB0"))) PPC_WEAK_FUNC(sub_82CADCB0);
PPC_FUNC_IMPL(__imp__sub_82CADCB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CADCB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CADCC4;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82caddb8
	if (cr6.eq) goto loc_82CADDB8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CADCD4;
	sub_82D19A78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82caddb8
	if (cr6.eq) goto loc_82CADDB8;
	// lwz r11,132(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82caddb8
	if (cr6.eq) goto loc_82CADDB8;
	// lwz r11,152(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82caddb8
	if (cr6.eq) goto loc_82CADDB8;
	// addi r4,r29,136
	ctx.r4.s64 = ctx.r29.s64 + 136;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8292a3f8
	ctx.lr = 0x82CADD04;
	sub_8292A3F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,132(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// bl 0x82c31be0
	ctx.lr = 0x82CADD10;
	sub_82C31BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82caddb8
	if (!cr6.eq) goto loc_82CADDB8;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,3088(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3088);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CADD38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82caddb8
	if (cr6.eq) goto loc_82CADDB8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,132(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c31ed8
	ctx.lr = 0x82CADD54;
	sub_82C31ED8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cadd84
	if (cr6.eq) goto loc_82CADD84;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cadd74
	if (!cr6.lt) goto loc_82CADD74;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82CADD74:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// b 0x82cadd9c
	goto loc_82CADD9C;
loc_82CADD84:
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82c319a0
	ctx.lr = 0x82CADD90;
	sub_82C319A0(ctx, base);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82CADD9C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82CADDA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r11,164(r29)
	PPC_STORE_U8(ctx.r29.u32 + 164, ctx.r11.u8);
	// bl 0x8387e8e0
	ctx.lr = 0x82CADDB8;
	sub_8387E8E0(ctx, base);
loc_82CADDB8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CADDC0"))) PPC_WEAK_FUNC(sub_82CADDC0);
PPC_FUNC_IMPL(__imp__sub_82CADDC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82CADDC8;
	__savegprlr_24(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r27,15
	ctx.r27.s64 = 15;
	// li r24,2
	ctx.r24.s64 = 2;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// li r28,6
	ctx.r28.s64 = 6;
	// stw r27,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r27.u32);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// addi r26,r11,14515
	ctx.r26.s64 = ctx.r11.s64 + 14515;
	// stb r31,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r31.u8);
	// stw r27,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r27.u32);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// stb r31,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r31.u8);
	// stw r27,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r27.u32);
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// stb r31,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r31.u8);
	// stw r27,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r27.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// stw r27,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r27.u32);
	// stw r31,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r31.u32);
	// stb r31,268(r1)
	PPC_STORE_U8(ctx.r1.u32 + 268, ctx.r31.u8);
loc_82CADE60:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82CADE70;
	sub_8259CC28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82d971c8
	ctx.lr = 0x82CADE7C;
	sub_82D971C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cade94
	if (cr6.eq) goto loc_82CADE94;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cadea4
	if (!cr6.eq) goto loc_82CADEA4;
loc_82CADE94:
	// lis r4,6
	ctx.r4.s64 = 393216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,43
	ctx.r4.u64 = ctx.r4.u64 | 43;
	// bl 0x82d04220
	ctx.lr = 0x82CADEA4;
	sub_82D04220(ctx, base);
loc_82CADEA4:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// bne 0x82cade60
	if (!cr0.eq) goto loc_82CADE60;
	// lwz r11,288(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r10,268(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cadec8
	if (!cr6.lt) goto loc_82CADEC8;
	// addi r10,r1,268
	ctx.r10.s64 = ctx.r1.s64 + 268;
loc_82CADEC8:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r9,240(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cadedc
	if (!cr6.lt) goto loc_82CADEDC;
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
loc_82CADEDC:
	// lwz r11,232(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r8,212(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cadef0
	if (!cr6.lt) goto loc_82CADEF0;
	// addi r8,r1,212
	ctx.r8.s64 = ctx.r1.s64 + 212;
loc_82CADEF0:
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r7,184(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cadf04
	if (!cr6.lt) goto loc_82CADF04;
	// addi r7,r1,184
	ctx.r7.s64 = ctx.r1.s64 + 184;
loc_82CADF04:
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r6,156(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cadf18
	if (!cr6.lt) goto loc_82CADF18;
	// addi r6,r1,156
	ctx.r6.s64 = ctx.r1.s64 + 156;
loc_82CADF18:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cadf2c
	if (!cr6.lt) goto loc_82CADF2C;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
loc_82CADF2C:
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r3,r25,100
	ctx.r3.s64 = ctx.r25.s64 + 100;
	// ori r4,r4,235
	ctx.r4.u64 = ctx.r4.u64 | 235;
	// bl 0x82d042a8
	ctx.lr = 0x82CADF3C;
	sub_82D042A8(ctx, base);
	// addi r30,r1,296
	ctx.r30.s64 = ctx.r1.s64 + 296;
	// li r29,5
	ctx.r29.s64 = 5;
loc_82CADF44:
	// addi r30,r30,-28
	ctx.r30.s64 = ctx.r30.s64 + -28;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cadf64
	if (cr6.lt) goto loc_82CADF64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CADF64;
	sub_825952B8(ctx, base);
loc_82CADF64:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// bge 0x82cadf44
	if (!cr0.lt) goto loc_82CADF44;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CADF80"))) PPC_WEAK_FUNC(sub_82CADF80);
PPC_FUNC_IMPL(__imp__sub_82CADF80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CADF88;
	__savegprlr_26(ctx, base);
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
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x8308e078
	ctx.lr = 0x82CADFA0;
	sub_8308E078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82CADFB8;
	sub_82D253F8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r9,r11,14984
	ctx.r9.s64 = ctx.r11.s64 + 14984;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stb r29,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r29.u8);
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// stw r27,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r27.u32);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// stw r29,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r29.u32);
	// addi r28,r7,14483
	ctx.r28.s64 = ctx.r7.s64 + 14483;
	// stb r29,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r29.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r28,-1
	ctx.r4.s64 = ctx.r28.s64 + -1;
	// bl 0x8259cc28
	ctx.lr = 0x82CAE000;
	sub_8259CC28(ctx, base);
	// li r6,5
	ctx.r6.s64 = 5;
	// stw r29,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r29.u32);
	// addi r30,r31,136
	ctx.r30.s64 = ctx.r31.s64 + 136;
	// stw r6,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r6.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r27,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r29.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82CAE02C;
	sub_8259CC28(ctx, base);
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(ctx.r26.s32, 1, xer);
	// stb r29,164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 164, ctx.r29.u8);
	// stw r26,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r26.u32);
	// beq cr6,0x82cae044
	if (cr6.eq) goto loc_82CAE044;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d191f8
	ctx.lr = 0x82CAE044;
	sub_82D191F8(ctx, base);
loc_82CAE044:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,2916
	ctx.r29.s64 = ctx.r11.s64 + 2916;
	// lwz r4,2916(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2916);
	// bl 0x82d20ae0
	ctx.lr = 0x82CAE058;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d23390
	ctx.lr = 0x82CAE068;
	sub_82D23390(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82CAE06C;
	sub_82D86078(ctx, base);
	// lwz r29,28(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da27f0
	ctx.lr = 0x82CAE078;
	sub_82DA27F0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da2650
	ctx.lr = 0x82CAE084;
	sub_82DA2650(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246e3e8
	ctx.lr = 0x82CAE098;
	sub_8246E3E8(ctx, base);
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82cae0bc
	if (!cr6.eq) goto loc_82CAE0BC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82dedf88
	ctx.lr = 0x82CAE0B0;
	sub_82DEDF88(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8353c978
	ctx.lr = 0x82CAE0B8;
	sub_8353C978(ctx, base);
	// b 0x82cae0cc
	goto loc_82CAE0CC;
loc_82CAE0BC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82dad290
	ctx.lr = 0x82CAE0C4;
	sub_82DAD290(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x835d31b0
	ctx.lr = 0x82CAE0CC;
	sub_835D31B0(ctx, base);
loc_82CAE0CC:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cae0f0
	if (!cr6.eq) goto loc_82CAE0F0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da2650
	ctx.lr = 0x82CAE0E4;
	sub_82DA2650(ctx, base);
	// bl 0x8353c978
	ctx.lr = 0x82CAE0E8;
	sub_8353C978(ctx, base);
	// bl 0x82c317d8
	ctx.lr = 0x82CAE0EC;
	sub_82C317D8(ctx, base);
	// b 0x82cae0f8
	goto loc_82CAE0F8;
loc_82CAE0F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82c31968
	ctx.lr = 0x82CAE0F8;
	sub_82C31968(ctx, base);
loc_82CAE0F8:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20b30
	ctx.lr = 0x82CAE104;
	sub_82D20B30(ctx, base);
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82cae11c
	if (!cr6.eq) goto loc_82CAE11C;
	// bl 0x82caddc0
	ctx.lr = 0x82CAE118;
	sub_82CADDC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CAE11C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAE124"))) PPC_WEAK_FUNC(sub_82CAE124);
PPC_FUNC_IMPL(__imp__sub_82CAE124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAE128"))) PPC_WEAK_FUNC(sub_82CAE128);
PPC_FUNC_IMPL(__imp__sub_82CAE128) {
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
	// bl 0x82cad938
	ctx.lr = 0x82CAE140;
	sub_82CAD938(ctx, base);
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82cae158
	if (cr6.eq) goto loc_82CAE158;
	// li r4,38
	ctx.r4.s64 = 38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82CAE158;
	sub_82D17DA0(ctx, base);
loc_82CAE158:
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

__attribute__((alias("__imp__sub_82CAE170"))) PPC_WEAK_FUNC(sub_82CAE170);
PPC_FUNC_IMPL(__imp__sub_82CAE170) {
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
	// lbz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82cae1b8
	if (!cr6.eq) goto loc_82CAE1B8;
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82cae1a4
	if (!cr6.eq) goto loc_82CAE1A4;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,14764
	ctx.r5.s64 = ctx.r11.s64 + 14764;
	// bl 0x82d20da8
	ctx.lr = 0x82CAE1A4;
	sub_82D20DA8(ctx, base);
loc_82CAE1A4:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82CAE1B8:
	// lbz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 164);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82cae1c8
	if (!cr6.eq) goto loc_82CAE1C8;
	// bl 0x82cadcb0
	ctx.lr = 0x82CAE1C8;
	sub_82CADCB0(ctx, base);
loc_82CAE1C8:
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

__attribute__((alias("__imp__sub_82CAE1DC"))) PPC_WEAK_FUNC(sub_82CAE1DC);
PPC_FUNC_IMPL(__imp__sub_82CAE1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAE1E0"))) PPC_WEAK_FUNC(sub_82CAE1E0);
PPC_FUNC_IMPL(__imp__sub_82CAE1E0) {
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
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82CAE204;
	sub_8259CB28(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cae224
	if (cr6.lt) goto loc_82CAE224;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CAE224;
	sub_825952B8(ctx, base);
loc_82CAE224:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82CAE24C"))) PPC_WEAK_FUNC(sub_82CAE24C);
PPC_FUNC_IMPL(__imp__sub_82CAE24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAE250"))) PPC_WEAK_FUNC(sub_82CAE250);
PPC_FUNC_IMPL(__imp__sub_82CAE250) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CAE258;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,172
	ctx.r4.s64 = 172;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CAE280;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cae2a0
	if (cr6.eq) goto loc_82CAE2A0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cadf80
	ctx.lr = 0x82CAE298;
	sub_82CADF80(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CAE2A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAE2AC"))) PPC_WEAK_FUNC(sub_82CAE2AC);
PPC_FUNC_IMPL(__imp__sub_82CAE2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAE2B0"))) PPC_WEAK_FUNC(sub_82CAE2B0);
PPC_FUNC_IMPL(__imp__sub_82CAE2B0) {
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
	// blt cr6,0x82cae2d8
	if (cr6.lt) goto loc_82CAE2D8;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82cae2dc
	goto loc_82CAE2DC;
loc_82CAE2D8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82CAE2DC:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,172
	ctx.r4.s64 = 172;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CAE2F8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cae314
	if (cr6.eq) goto loc_82CAE314;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cadf80
	ctx.lr = 0x82CAE310;
	sub_82CADF80(ctx, base);
	// b 0x82cae318
	goto loc_82CAE318;
loc_82CAE314:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CAE318:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAE330"))) PPC_WEAK_FUNC(sub_82CAE330);
PPC_FUNC_IMPL(__imp__sub_82CAE330) {
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
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cae3ec
	if (cr6.eq) goto loc_82CAE3EC;
	// lwz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82cae378
	if (!cr6.gt) goto loc_82CAE378;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82d19788
	ctx.lr = 0x82CAE368;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CAE378;
	sub_82D19788(ctx, base);
loc_82CAE378:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CAE388;
	sub_82D19788(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,211
	ctx.r5.u64 = ctx.r5.u64 | 211;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CAE3A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CAE3B8;
	sub_82D19788(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,41
	ctx.r5.u64 = ctx.r5.u64 | 41;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,96(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CAE3D8;
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
loc_82CAE3EC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CAE3FC;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CAE40C;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CAE41C;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CAE42C;
	sub_82D19788(ctx, base);
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

__attribute__((alias("__imp__sub_82CAE440"))) PPC_WEAK_FUNC(sub_82CAE440);
PPC_FUNC_IMPL(__imp__sub_82CAE440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,7
	ctx.r11.s64 = 7;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bgt cr6,0x82cae4ac
	if (cr6.gt) goto loc_82CAE4AC;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82cae478
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CAE478;
	// bdzf 4*cr6+eq,0x82cae490
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CAE490;
	// bne cr6,0x82cae4a8
	if (!cr6.eq) goto loc_82CAE4A8;
	// li r11,7
	ctx.r11.s64 = 7;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,3212
	ctx.r8.s64 = ctx.r10.s64 + 3212;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// blr 
	return;
loc_82CAE478:
	// li r11,3
	ctx.r11.s64 = 3;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,3212
	ctx.r8.s64 = ctx.r10.s64 + 3212;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// blr 
	return;
loc_82CAE490:
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,3212
	ctx.r8.s64 = ctx.r10.s64 + 3212;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// blr 
	return;
loc_82CAE4A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CAE4AC:
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,3212
	ctx.r8.s64 = ctx.r10.s64 + 3212;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAE4C0"))) PPC_WEAK_FUNC(sub_82CAE4C0);
PPC_FUNC_IMPL(__imp__sub_82CAE4C0) {
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
	// lbz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 160);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cae57c
	if (cr6.eq) goto loc_82CAE57C;
	// ld r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 176);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// ble cr6,0x82cae548
	if (!cr6.gt) goto loc_82CAE548;
	// bl 0x83a7d958
	ctx.lr = 0x82CAE4F4;
	sub_83A7D958(ctx, base);
	// stw r3,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r3.u32);
	// bl 0x83524138
	ctx.lr = 0x82CAE4FC;
	sub_83524138(ctx, base);
	// ld r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 176);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmpldi cr6,r10,3000
	cr6.compare<uint64_t>(ctx.r10.u64, 3000, xer);
	// blt cr6,0x82cae57c
	if (cr6.lt) goto loc_82CAE57C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CAE514;
	sub_82D19A68(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r4,3196(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3196);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CAE530;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r8,16352
	ctx.r5.s64 = ctx.r8.s64 + 16352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82CAE544;
	sub_82D20DA8(ctx, base);
	// b 0x82cae57c
	goto loc_82CAE57C;
loc_82CAE548:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,3192(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3192);
	// bl 0x82d19a68
	ctx.lr = 0x82CAE558;
	sub_82D19A68(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d2bb40
	ctx.lr = 0x82CAE560;
	sub_82D2BB40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cae57c
	if (cr6.eq) goto loc_82CAE57C;
	// bl 0x83a7d958
	ctx.lr = 0x82CAE570;
	sub_83A7D958(ctx, base);
	// stw r3,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r3.u32);
	// bl 0x83524138
	ctx.lr = 0x82CAE578;
	sub_83524138(ctx, base);
	// std r3,176(r31)
	PPC_STORE_U64(ctx.r31.u32 + 176, ctx.r3.u64);
loc_82CAE57C:
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

__attribute__((alias("__imp__sub_82CAE598"))) PPC_WEAK_FUNC(sub_82CAE598);
PPC_FUNC_IMPL(__imp__sub_82CAE598) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CAE5B4;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cae614
	if (cr6.eq) goto loc_82CAE614;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cae614
	if (cr6.eq) goto loc_82CAE614;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b5e118
	ctx.lr = 0x82CAE5D4;
	sub_82B5E118(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CAE5E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r11,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r11.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r11,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r11.u8);
	// bl 0x82da8e68
	ctx.lr = 0x82CAE600;
	sub_82DA8E68(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x82da9740
	ctx.lr = 0x82CAE60C;
	sub_82DA9740(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da8c38
	ctx.lr = 0x82CAE614;
	sub_82DA8C38(ctx, base);
loc_82CAE614:
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

__attribute__((alias("__imp__sub_82CAE62C"))) PPC_WEAK_FUNC(sub_82CAE62C);
PPC_FUNC_IMPL(__imp__sub_82CAE62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAE630"))) PPC_WEAK_FUNC(sub_82CAE630);
PPC_FUNC_IMPL(__imp__sub_82CAE630) {
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
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CAE654;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31776
	ctx.r9.s64 = -2082471936;
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,3324(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3324);
	// rlwimi r8,r11,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// stw r8,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r8.u32);
	// lwz r11,3324(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3324);
	// rlwimi r7,r11,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// lwz r6,72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// blt cr6,0x82cae6a8
	if (cr6.lt) goto loc_82CAE6A8;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
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
loc_82CAE6A8:
	// stb r10,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_82CAE6C0"))) PPC_WEAK_FUNC(sub_82CAE6C0);
PPC_FUNC_IMPL(__imp__sub_82CAE6C0) {
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
	// bl 0x82cae630
	ctx.lr = 0x82CAE6D8;
	sub_82CAE630(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cae630
	ctx.lr = 0x82CAE6E0;
	sub_82CAE630(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,164
	ctx.r10.s64 = ctx.r31.s64 + 164;
	// stb r11,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r11.u8);
	// addi r10,r31,184
	ctx.r10.s64 = ctx.r31.s64 + 184;
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82CAE72C"))) PPC_WEAK_FUNC(sub_82CAE72C);
PPC_FUNC_IMPL(__imp__sub_82CAE72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAE730"))) PPC_WEAK_FUNC(sub_82CAE730);
PPC_FUNC_IMPL(__imp__sub_82CAE730) {
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
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r3,52
	ctx.r31.s64 = ctx.r3.s64 + 52;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cae76c
	if (cr6.lt) goto loc_82CAE76C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CAE76C;
	sub_825952B8(ctx, base);
loc_82CAE76C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// bl 0x82da8c38
	ctx.lr = 0x82CAE788;
	sub_82DA8C38(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAE7A0"))) PPC_WEAK_FUNC(sub_82CAE7A0);
PPC_FUNC_IMPL(__imp__sub_82CAE7A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CAE7A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82da8d18
	ctx.lr = 0x82CAE7B4;
	sub_82DA8D18(ctx, base);
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r28,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r27.u32);
	// stb r30,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r30.u8);
	// bl 0x82cae630
	ctx.lr = 0x82CAE7D8;
	sub_82CAE630(ctx, base);
	// addi r29,r31,80
	ctx.r29.s64 = ctx.r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da8d18
	ctx.lr = 0x82CAE7E4;
	sub_82DA8D18(ctx, base);
	// stw r28,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r28.u32);
	// stw r27,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stb r30,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r30.u8);
	// bl 0x82cae630
	ctx.lr = 0x82CAE7FC;
	sub_82CAE630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cae630
	ctx.lr = 0x82CAE804;
	sub_82CAE630(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cae630
	ctx.lr = 0x82CAE80C;
	sub_82CAE630(ctx, base);
	// stb r30,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r30.u8);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// addi r11,r31,164
	ctx.r11.s64 = ctx.r31.s64 + 164;
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// addi r11,r31,184
	ctx.r11.s64 = ctx.r31.s64 + 184;
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAE84C"))) PPC_WEAK_FUNC(sub_82CAE84C);
PPC_FUNC_IMPL(__imp__sub_82CAE84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAE850"))) PPC_WEAK_FUNC(sub_82CAE850);
PPC_FUNC_IMPL(__imp__sub_82CAE850) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82CAE858;
	__savegprlr_25(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CAE864;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cae9e0
	if (cr6.eq) goto loc_82CAE9E0;
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x82da9678
	ctx.lr = 0x82CAE878;
	sub_82DA9678(ctx, base);
	// li r3,10
	ctx.r3.s64 = 10;
	// lwz r30,52(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82da9f18
	ctx.lr = 0x82CAE884;
	sub_82DA9F18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,200
	ctx.r6.s64 = 200;
	// bl 0x82da9890
	ctx.lr = 0x82CAE898;
	sub_82DA9890(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82da29f8
	ctx.lr = 0x82CAE8A0;
	sub_82DA29F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82dee260
	ctx.lr = 0x82CAE8AC;
	sub_82DEE260(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// beq cr6,0x82cae974
	if (cr6.eq) goto loc_82CAE974;
	// li r26,2
	ctx.r26.s64 = 2;
	// li r29,15
	ctx.r29.s64 = 15;
loc_82CAE8C8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82cae7a0
	ctx.lr = 0x82CAE8D0;
	sub_82CAE7A0(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82dee2e0
	ctx.lr = 0x82CAE8E4;
	sub_82DEE2E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cae980
	if (cr6.eq) goto loc_82CAE980;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82cae598
	ctx.lr = 0x82CAE8FC;
	sub_82CAE598(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82cae598
	ctx.lr = 0x82CAE908;
	sub_82CAE598(ctx, base);
	// lwz r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cae924
	if (cr6.lt) goto loc_82CAE924;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,228(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// bl 0x825952b8
	ctx.lr = 0x82CAE924;
	sub_825952B8(ctx, base);
loc_82CAE924:
	// stw r29,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r29.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stb r30,228(r1)
	PPC_STORE_U8(ctx.r1.u32 + 228, ctx.r30.u8);
	// bl 0x82da8c38
	ctx.lr = 0x82CAE938;
	sub_82DA8C38(ctx, base);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cae954
	if (cr6.lt) goto loc_82CAE954;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x825952b8
	ctx.lr = 0x82CAE954;
	sub_825952B8(ctx, base);
loc_82CAE954:
	// stw r29,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stb r30,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r30.u8);
	// bl 0x82da8c38
	ctx.lr = 0x82CAE968;
	sub_82DA8C38(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// blt cr6,0x82cae8c8
	if (cr6.lt) goto loc_82CAE8C8;
loc_82CAE974:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82CAE980:
	// lwz r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cae99c
	if (cr6.lt) goto loc_82CAE99C;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,228(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// bl 0x825952b8
	ctx.lr = 0x82CAE99C;
	sub_825952B8(ctx, base);
loc_82CAE99C:
	// stw r29,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r29.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stb r30,228(r1)
	PPC_STORE_U8(ctx.r1.u32 + 228, ctx.r30.u8);
	// bl 0x82da8c38
	ctx.lr = 0x82CAE9B0;
	sub_82DA8C38(ctx, base);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cae9cc
	if (cr6.lt) goto loc_82CAE9CC;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x825952b8
	ctx.lr = 0x82CAE9CC;
	sub_825952B8(ctx, base);
loc_82CAE9CC:
	// stw r29,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stb r30,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r30.u8);
	// bl 0x82da8c38
	ctx.lr = 0x82CAE9E0;
	sub_82DA8C38(ctx, base);
loc_82CAE9E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAE9EC"))) PPC_WEAK_FUNC(sub_82CAE9EC);
PPC_FUNC_IMPL(__imp__sub_82CAE9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAE9F0"))) PPC_WEAK_FUNC(sub_82CAE9F0);
PPC_FUNC_IMPL(__imp__sub_82CAE9F0) {
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
	// lbz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 160);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82caea50
	if (!cr6.eq) goto loc_82CAEA50;
	// bl 0x82cae850
	ctx.lr = 0x82CAEA18;
	sub_82CAE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82caea50
	if (cr6.eq) goto loc_82CAEA50;
	// bl 0x82d86078
	ctx.lr = 0x82CAEA28;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82caea44
	if (cr6.eq) goto loc_82CAEA44;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r30,168(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x82da29f8
	ctx.lr = 0x82CAEA3C;
	sub_82DA29F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82dee130
	ctx.lr = 0x82CAEA44;
	sub_82DEE130(ctx, base);
loc_82CAEA44:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19858
	ctx.lr = 0x82CAEA50;
	sub_82D19858(ctx, base);
loc_82CAEA50:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAEA68"))) PPC_WEAK_FUNC(sub_82CAEA68);
PPC_FUNC_IMPL(__imp__sub_82CAEA68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CAEA70;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82caeb00
	if (cr6.eq) goto loc_82CAEB00;
	// addi r31,r3,132
	ctx.r31.s64 = ctx.r3.s64 + 132;
	// li r28,2
	ctx.r28.s64 = 2;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82CAEA90:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82caeaac
	if (cr6.lt) goto loc_82CAEAAC;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82CAEAAC;
	sub_825952B8(ctx, base);
loc_82CAEAAC:
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// addi r3,r31,-52
	ctx.r3.s64 = ctx.r31.s64 + -52;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// bl 0x82da8c38
	ctx.lr = 0x82CAEAC0;
	sub_82DA8C38(ctx, base);
	// lwz r11,-60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -60);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82caeadc
	if (cr6.lt) goto loc_82CAEADC;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,-80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -80);
	// bl 0x825952b8
	ctx.lr = 0x82CAEADC;
	sub_825952B8(ctx, base);
loc_82CAEADC:
	// stw r29,-60(r31)
	PPC_STORE_U32(ctx.r31.u32 + -60, ctx.r29.u32);
	// addi r3,r31,-132
	ctx.r3.s64 = ctx.r31.s64 + -132;
	// stw r30,-64(r31)
	PPC_STORE_U32(ctx.r31.u32 + -64, ctx.r30.u32);
	// stb r30,-80(r31)
	PPC_STORE_U8(ctx.r31.u32 + -80, ctx.r30.u8);
	// bl 0x82da8c38
	ctx.lr = 0x82CAEAF0;
	sub_82DA8C38(ctx, base);
	// addi r31,r31,208
	ctx.r31.s64 = ctx.r31.s64 + 208;
	// addi r11,r31,-132
	ctx.r11.s64 = ctx.r31.s64 + -132;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bne cr6,0x82caea90
	if (!cr6.eq) goto loc_82CAEA90;
loc_82CAEB00:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAEB08"))) PPC_WEAK_FUNC(sub_82CAEB08);
PPC_FUNC_IMPL(__imp__sub_82CAEB08) {
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
	// bl 0x82da8e68
	ctx.lr = 0x82CAEB28;
	sub_82DA8E68(ctx, base);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwimi r11,r10,0,14,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r9,48(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// rlwimi r9,r8,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// lwz r7,72(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82caeb5c
	if (cr6.lt) goto loc_82CAEB5C;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82CAEB5C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82CAEB60:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82caeb60
	if (!cr6.eq) goto loc_82CAEB60;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CAEB84;
	sub_8259CC28(ctx, base);
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

__attribute__((alias("__imp__sub_82CAEBA0"))) PPC_WEAK_FUNC(sub_82CAEBA0);
PPC_FUNC_IMPL(__imp__sub_82CAEBA0) {
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
	// bl 0x82caeb08
	ctx.lr = 0x82CAEBC0;
	sub_82CAEB08(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r30,80
	ctx.r4.s64 = ctx.r30.s64 + 80;
	// bl 0x82caeb08
	ctx.lr = 0x82CAEBCC;
	sub_82CAEB08(ctx, base);
	// lbz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 160);
	// stb r11,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r11.u8);
	// lwz r10,164(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// stw r10,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r10.u32);
	// lwz r9,168(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// stw r9,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r9.u32);
	// lwz r8,172(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// stw r8,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r8.u32);
	// lwz r7,176(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// stw r7,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r7.u32);
	// lwz r6,180(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// stw r6,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r6.u32);
	// lwz r5,184(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// stw r5,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r5.u32);
	// lwz r4,188(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// stw r4,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r4.u32);
	// lwz r3,192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// stw r3,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,196(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// lwz r10,200(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// stw r10,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAEC40"))) PPC_WEAK_FUNC(sub_82CAEC40);
PPC_FUNC_IMPL(__imp__sub_82CAEC40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CAEC48;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CAEC54;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82caee70
	if (cr6.eq) goto loc_82CAEE70;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CAEC64;
	sub_82D19A78(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82caee70
	if (cr6.eq) goto loc_82CAEE70;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82CAEC78;
	sub_82D33DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82caee70
	if (cr6.eq) goto loc_82CAEE70;
	// bl 0x82d96138
	ctx.lr = 0x82CAEC88;
	sub_82D96138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82caecec
	if (!cr6.eq) goto loc_82CAECEC;
	// bl 0x83572958
	ctx.lr = 0x82CAEC98;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82caecec
	if (!cr6.eq) goto loc_82CAECEC;
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r3,r28,100
	ctx.r3.s64 = ctx.r28.s64 + 100;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,3128(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3128);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CAECC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82caee70
	if (cr6.eq) goto loc_82CAEE70;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r10,168(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r31,r11,16340
	ctx.r31.s64 = ctx.r11.s64 + 16340;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r31,-52
	ctx.r8.s64 = ctx.r31.s64 + -52;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x82d30340
	ctx.lr = 0x82CAECE8;
	sub_82D30340(ctx, base);
	// b 0x82caed2c
	goto loc_82CAED2C;
loc_82CAECEC:
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r3,r29,100
	ctx.r3.s64 = ctx.r29.s64 + 100;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,3140(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3140);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CAED08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82caee70
	if (cr6.eq) goto loc_82CAEE70;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r10,168(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// addi r31,r11,16340
	ctx.r31.s64 = ctx.r11.s64 + 16340;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r31,-52
	ctx.r8.s64 = ctx.r31.s64 + -52;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x82d29598
	ctx.lr = 0x82CAED2C;
	sub_82D29598(ctx, base);
loc_82CAED2C:
	// bl 0x82d96138
	ctx.lr = 0x82CAED30;
	sub_82D96138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82caed4c
	if (!cr6.eq) goto loc_82CAED4C;
	// bl 0x83572958
	ctx.lr = 0x82CAED40;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82caedcc
	if (cr6.eq) goto loc_82CAEDCC;
loc_82CAED4C:
	// addi r4,r31,-986
	ctx.r4.s64 = ctx.r31.s64 + -986;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82CAED58;
	sub_837B0C10(ctx, base);
	// lwz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// lwz r6,164(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,40
	ctx.r4.u64 = ctx.r4.u64 | 40;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x82d042a8
	ctx.lr = 0x82CAED74;
	sub_82D042A8(ctx, base);
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// addi r3,r29,100
	ctx.r3.s64 = ctx.r29.s64 + 100;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CAED8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82caedc4
	if (cr6.eq) goto loc_82CAEDC4;
	// lwz r11,164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82caedc4
	if (!cr6.gt) goto loc_82CAEDC4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82CAEDB0;
	sub_82D2AEC8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CAEDC4;
	sub_82D291E0(ctx, base);
loc_82CAEDC4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82CAEDCC;
	sub_8387E8E0(ctx, base);
loc_82CAEDCC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r4,168(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// bl 0x82cae440
	ctx.lr = 0x82CAEDDC;
	sub_82CAE440(ctx, base);
	// lwz r6,72(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82CAEDF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82caee64
	if (cr6.gt) goto loc_82CAEE64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82caee30
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CAEE30;
	// bdzf 4*cr6+eq,0x82caee48
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CAEE48;
	// bne cr6,0x82caee60
	if (!cr6.eq) goto loc_82CAEE60;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d1ed60
	ctx.lr = 0x82CAEE28;
	sub_82D1ED60(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CAEE30:
	// li r4,4
	ctx.r4.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d1ed60
	ctx.lr = 0x82CAEE40;
	sub_82D1ED60(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CAEE48:
	// li r4,2
	ctx.r4.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d1ed60
	ctx.lr = 0x82CAEE58;
	sub_82D1ED60(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CAEE60:
	// li r4,1
	ctx.r4.s64 = 1;
loc_82CAEE64:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d1ed60
	ctx.lr = 0x82CAEE70;
	sub_82D1ED60(ctx, base);
loc_82CAEE70:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAEE78"))) PPC_WEAK_FUNC(sub_82CAEE78);
PPC_FUNC_IMPL(__imp__sub_82CAEE78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82CAEE80;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82caf0d0
	if (cr6.eq) goto loc_82CAF0D0;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82caf0d0
	if (cr6.eq) goto loc_82CAF0D0;
	// lwz r11,20(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82caeeb0
	if (cr6.eq) goto loc_82CAEEB0;
	// li r26,1
	ctx.r26.s64 = 1;
loc_82CAEEB0:
	// lwz r11,100(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// rlwinm r29,r7,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,3152
	ctx.r9.s64 = ctx.r10.s64 + 3152;
	// addi r31,r4,100
	ctx.r31.s64 = ctx.r4.s64 + 100;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r29,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CAEED8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82caef64
	if (cr6.eq) goto loc_82CAEF64;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82caef54
	if (cr6.eq) goto loc_82CAEF54;
	// bl 0x82d96138
	ctx.lr = 0x82CAEEF4;
	sub_82D96138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82caef54
	if (!cr6.eq) goto loc_82CAEF54;
	// bl 0x83572958
	ctx.lr = 0x82CAEF04;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82caef54
	if (!cr6.eq) goto loc_82CAEF54;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CAEF20;
	sub_82D2AEC8(ctx, base);
	// lwz r10,324(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r11.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82caef3c
	if (cr6.eq) goto loc_82CAEF3C;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82CAEF3C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r28,48
	ctx.r4.s64 = ctx.r28.s64 + 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d329f8
	ctx.lr = 0x82CAEF50;
	sub_82D329F8(ctx, base);
	// b 0x82caef64
	goto loc_82CAEF64;
loc_82CAEF54:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CAEF64;
	sub_82D2AEC8(ctx, base);
loc_82CAEF64:
	// bl 0x82d860f0
	ctx.lr = 0x82CAEF68;
	sub_82D860F0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lis r9,-31776
	ctx.r9.s64 = -2082471936;
	// subf r8,r3,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r3.s64;
	// addi r7,r9,3160
	ctx.r7.s64 = ctx.r9.s64 + 3160;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cntlzw r5,r8
	ctx.r5.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r27,r5,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// lwzx r4,r29,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82CAEF98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82caf01c
	if (cr6.eq) goto loc_82CAF01C;
	// addi r4,r28,4
	ctx.r4.s64 = ctx.r28.s64 + 4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8292a3f8
	ctx.lr = 0x82CAEFB0;
	sub_8292A3F8(ctx, base);
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82caefec
	if (!cr6.eq) goto loc_82CAEFEC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15355
	ctx.r4.s64 = ctx.r11.s64 + 15355;
	// bl 0x837b0c10
	ctx.lr = 0x82CAEFCC;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CAEFE0;
	sub_82D291E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82CAEFE8;
	sub_8387E8E0(ctx, base);
	// b 0x82caf014
	goto loc_82CAF014;
loc_82CAEFEC:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CAF000;
	sub_82D291E0(ctx, base);
	// bl 0x82d96138
	ctx.lr = 0x82CAF004;
	sub_82D96138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82caf014
	if (!cr6.eq) goto loc_82CAF014;
	// bl 0x83572958
	ctx.lr = 0x82CAF014;
	sub_83572958(ctx, base);
loc_82CAF014:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82CAF01C;
	sub_8387E8E0(ctx, base);
loc_82CAF01C:
	// bl 0x82d96138
	ctx.lr = 0x82CAF020;
	sub_82D96138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82caf070
	if (!cr6.eq) goto loc_82CAF070;
	// bl 0x83572958
	ctx.lr = 0x82CAF030;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82caf070
	if (!cr6.eq) goto loc_82CAF070;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r10,3168
	ctx.r9.s64 = ctx.r10.s64 + 3168;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r4,r29,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CAF05C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82caf070
	if (cr6.eq) goto loc_82CAF070;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CAF070;
	sub_82D2AEC8(ctx, base);
loc_82CAF070:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r8,-31776
	ctx.r8.s64 = -2082471936;
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r7,r8,3176
	ctx.r7.s64 = ctx.r8.s64 + 3176;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwzx r4,r29,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82CAF09C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrldi r4,r30,32
	ctx.r4.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// bl 0x82d294d0
	ctx.lr = 0x82CAF0A4;
	sub_82D294D0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r5,3184
	ctx.r4.s64 = ctx.r5.s64 + 3184;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lwzx r4,r29,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r4.u32);
	// lwz r31,16(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// bctrl 
	ctx.lr = 0x82CAF0C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d294d0
	ctx.lr = 0x82CAF0D0;
	sub_82D294D0(ctx, base);
loc_82CAF0D0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAF0D8"))) PPC_WEAK_FUNC(sub_82CAF0D8);
PPC_FUNC_IMPL(__imp__sub_82CAF0D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CAF0E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x82da8d18
	ctx.lr = 0x82CAF0F0;
	sub_82DA8D18(ctx, base);
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r28,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r27.u32);
	// stb r30,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r30.u8);
	// bl 0x82cae630
	ctx.lr = 0x82CAF114;
	sub_82CAE630(ctx, base);
	// addi r29,r31,80
	ctx.r29.s64 = ctx.r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da8d18
	ctx.lr = 0x82CAF120;
	sub_82DA8D18(ctx, base);
	// stw r28,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r28.u32);
	// stw r27,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stb r30,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r30.u8);
	// bl 0x82cae630
	ctx.lr = 0x82CAF138;
	sub_82CAE630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cae630
	ctx.lr = 0x82CAF140;
	sub_82CAE630(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cae630
	ctx.lr = 0x82CAF148;
	sub_82CAE630(ctx, base);
	// stb r30,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r30.u8);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// addi r11,r31,164
	ctx.r11.s64 = ctx.r31.s64 + 164;
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// addi r11,r31,184
	ctx.r11.s64 = ctx.r31.s64 + 184;
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// bl 0x82caeba0
	ctx.lr = 0x82CAF188;
	sub_82CAEBA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAF194"))) PPC_WEAK_FUNC(sub_82CAF194);
PPC_FUNC_IMPL(__imp__sub_82CAF194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAF198"))) PPC_WEAK_FUNC(sub_82CAF198);
PPC_FUNC_IMPL(__imp__sub_82CAF198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82CAF1A0;
	__savegprlr_14(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r3,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r16,r29
	ctx.r16.u64 = ctx.r29.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// bl 0x82d86078
	ctx.lr = 0x82CAF1BC;
	sub_82D86078(ctx, base);
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82da29f8
	ctx.lr = 0x82CAF1C4;
	sub_82DA29F8(ctx, base);
	// lwz r4,168(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// bl 0x82dee260
	ctx.lr = 0x82CAF1D4;
	sub_82DEE260(ctx, base);
	// mr r17,r29
	ctx.r17.u64 = ctx.r29.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82caf590
	if (cr6.eq) goto loc_82CAF590;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r14,513
	ctx.r14.s64 = 513;
	// li r15,6
	ctx.r15.s64 = 6;
	// li r22,15
	ctx.r22.s64 = 15;
	// lis r18,-31776
	ctx.r18.s64 = -2082471936;
	// lis r19,-31776
	ctx.r19.s64 = -2082471936;
	// lis r24,-31776
	ctx.r24.s64 = -2082471936;
	// lis r20,-31776
	ctx.r20.s64 = -2082471936;
	// addi r27,r10,15448
	ctx.r27.s64 = ctx.r10.s64 + 15448;
	// addi r26,r9,-22836
	ctx.r26.s64 = ctx.r9.s64 + -22836;
	// addi r25,r8,15324
	ctx.r25.s64 = ctx.r8.s64 + 15324;
	// addi r21,r7,15320
	ctx.r21.s64 = ctx.r7.s64 + 15320;
	// addi r28,r6,-7164
	ctx.r28.s64 = ctx.r6.s64 + -7164;
	// addi r23,r11,-56
	ctx.r23.s64 = ctx.r11.s64 + -56;
loc_82CAF230:
	// stw r23,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r23.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r25,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r25.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r29.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r29,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r29.u32);
	// ori r16,r16,1
	ctx.r16.u64 = ctx.r16.u64 | 1;
	// stw r29,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r29.u32);
	// stw r14,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r14.u32);
	// std r15,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r15.u64);
	// std r29,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r29.u64);
	// stw r29,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r29.u32);
	// stw r29,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r29.u32);
	// bl 0x8246c218
	ctx.lr = 0x82CAF26C;
	sub_8246C218(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82416260
	ctx.lr = 0x82CAF274;
	sub_82416260(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82caf2c4
	if (cr6.eq) goto loc_82CAF2C4;
	// bl 0x831ccb50
	ctx.lr = 0x82CAF284;
	sub_831CCB50(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bl 0x831cc6c8
	ctx.lr = 0x82CAF28C;
	sub_831CC6C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831cc4f0
	ctx.lr = 0x82CAF29C;
	sub_831CC4F0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82caf2b4
	if (!cr6.lt) goto loc_82CAF2B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_82CAF2B4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831cc540
	ctx.lr = 0x82CAF2BC;
	sub_831CC540(ctx, base);
	// lwz r30,692(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 692);
	// b 0x82caf2c8
	goto loc_82CAF2C8;
loc_82CAF2C4:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82CAF2C8:
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stw r29,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r29.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// stw r11,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r11.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82470f60
	ctx.lr = 0x82CAF2E4;
	sub_82470F60(ctx, base);
	// lwz r10,280(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// stb r3,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r3.u8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82caf30c
	if (!cr6.eq) goto loc_82CAF30C;
	// lwz r11,236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// ori r4,r10,4
	ctx.r4.u64 = ctx.r10.u64 | 4;
	// bl 0x8246c218
	ctx.lr = 0x82CAF30C;
	sub_8246C218(ctx, base);
loc_82CAF30C:
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r28,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r28.u32);
	// bl 0x82a8c160
	ctx.lr = 0x82CAF328;
	sub_82A8C160(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,3136(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 3136);
	// bl 0x82473550
	ctx.lr = 0x82CAF334;
	sub_82473550(ctx, base);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x82474170
	ctx.lr = 0x82CAF33C;
	sub_82474170(ctx, base);
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a79bf8
	ctx.lr = 0x82CAF348;
	sub_82A79BF8(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// lwz r31,112(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bge cr6,0x82caf35c
	if (!cr6.lt) goto loc_82CAF35C;
	// addi r31,r1,112
	ctx.r31.s64 = ctx.r1.s64 + 112;
loc_82CAF35C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CAF364;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82CAF36C;
	sub_82D33DB0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d2f098
	ctx.lr = 0x82CAF374;
	sub_82D2F098(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82caf38c
	if (cr6.lt) goto loc_82CAF38C;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x82CAF38C;
	sub_82416268(ctx, base);
loc_82CAF38C:
	// stw r22,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r22.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
	// bne cr6,0x82caf3b4
	if (!cr6.eq) goto loc_82CAF3B4;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r28,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r28.u32);
	// b 0x82caf508
	goto loc_82CAF508;
loc_82CAF3B4:
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82cae7a0
	ctx.lr = 0x82CAF3BC;
	sub_82CAE7A0(ctx, base);
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82dee2e0
	ctx.lr = 0x82CAF3D0;
	sub_82DEE2E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82caf490
	if (cr6.eq) goto loc_82CAF490;
	// lbz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82caf3f0
	if (cr6.eq) goto loc_82CAF3F0;
	// lwz r4,3200(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 3200);
	// b 0x82caf448
	goto loc_82CAF448;
loc_82CAF3F0:
	// lbz r10,464(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 464);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82caf404
	if (!cr6.eq) goto loc_82CAF404;
	// lwz r4,3200(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 3200);
	// b 0x82caf448
	goto loc_82CAF448;
loc_82CAF404:
	// lwz r11,416(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82caf424
	if (!cr6.eq) goto loc_82CAF424;
	// lwz r11,336(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82caf424
	if (!cr6.eq) goto loc_82CAF424;
	// lwz r4,3200(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 3200);
	// b 0x82caf448
	goto loc_82CAF448;
loc_82CAF424:
	// lwz r11,484(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82caf444
	if (!cr6.eq) goto loc_82CAF444;
	// lwz r11,504(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 504);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82caf444
	if (!cr6.eq) goto loc_82CAF444;
	// lwz r4,3204(r18)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3204);
	// b 0x82caf448
	goto loc_82CAF448;
loc_82CAF444:
	// lwz r4,3208(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 3208);
loc_82CAF448:
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
	ctx.lr = 0x82CAF460;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,468
	ctx.r6.s64 = ctx.r1.s64 + 468;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82caee78
	ctx.lr = 0x82CAF478;
	sub_82CAEE78(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,488
	ctx.r6.s64 = ctx.r1.s64 + 488;
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82caee78
	ctx.lr = 0x82CAF490;
	sub_82CAEE78(ctx, base);
loc_82CAF490:
	// lwz r11,456(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 456);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82caf4b0
	if (cr6.lt) goto loc_82CAF4B0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,436(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CAF4B0;
	sub_825952B8(ctx, base);
loc_82CAF4B0:
	// stw r22,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r22.u32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stw r29,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r29.u32);
	// stb r29,436(r1)
	PPC_STORE_U8(ctx.r1.u32 + 436, ctx.r29.u8);
	// bl 0x82da8c38
	ctx.lr = 0x82CAF4C4;
	sub_82DA8C38(ctx, base);
	// lwz r11,376(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82caf4e4
	if (cr6.lt) goto loc_82CAF4E4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,356(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CAF4E4;
	sub_825952B8(ctx, base);
loc_82CAF4E4:
	// stw r22,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r22.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stw r29,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r29.u32);
	// stb r29,356(r1)
	PPC_STORE_U8(ctx.r1.u32 + 356, ctx.r29.u8);
	// bl 0x82da8c38
	ctx.lr = 0x82CAF4F8;
	sub_82DA8C38(ctx, base);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stwx r28,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r28.u32);
loc_82CAF508:
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x82a78610
	ctx.lr = 0x82CAF514;
	sub_82A78610(ctx, base);
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82caf55c
	if (cr6.eq) goto loc_82CAF55C;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82caf554
	if (cr6.eq) goto loc_82CAF554;
	// bl 0x8246b968
	ctx.lr = 0x82CAF538;
	sub_8246B968(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82caf554
	if (cr6.eq) goto loc_82CAF554;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CAF554;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CAF554:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82CAF55C;
	sub_82416268(ctx, base);
loc_82CAF55C:
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x831ccff8
	ctx.lr = 0x82CAF564;
	sub_831CCFF8(ctx, base);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stwx r25,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r25.u32);
	// stw r21,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r21.u32);
	// bl 0x831ccf00
	ctx.lr = 0x82CAF580;
	sub_831CCF00(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// cmplw cr6,r17,r11
	cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, xer);
	// blt cr6,0x82caf230
	if (cr6.lt) goto loc_82CAF230;
loc_82CAF590:
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAF598"))) PPC_WEAK_FUNC(sub_82CAF598);
PPC_FUNC_IMPL(__imp__sub_82CAF598) {
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
	ctx.lr = 0x82CAF5B4;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,3128(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3128);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CAF5D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82caf5f8
	if (cr6.eq) goto loc_82CAF5F8;
	// bl 0x82d2fe58
	ctx.lr = 0x82CAF5DC;
	sub_82D2FE58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82caf610
	if (cr6.eq) goto loc_82CAF610;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d3d908
	ctx.lr = 0x82CAF5F0;
	sub_82D3D908(ctx, base);
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// b 0x82caf608
	goto loc_82CAF608;
loc_82CAF5F8:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x82caf608
	if (cr6.gt) goto loc_82CAF608;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
loc_82CAF608:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
loc_82CAF610:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82caf198
	ctx.lr = 0x82CAF618;
	sub_82CAF198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82caec40
	ctx.lr = 0x82CAF620;
	sub_82CAEC40(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAF638"))) PPC_WEAK_FUNC(sub_82CAF638);
PPC_FUNC_IMPL(__imp__sub_82CAF638) {
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
	ctx.lr = 0x82CAF654;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,3128(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3128);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CAF670;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82caf69c
	if (cr6.eq) goto loc_82CAF69C;
	// bl 0x82d2fe58
	ctx.lr = 0x82CAF67C;
	sub_82D2FE58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82caf6bc
	if (cr6.eq) goto loc_82CAF6BC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d3d8a8
	ctx.lr = 0x82CAF690;
	sub_82D3D8A8(ctx, base);
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82caf6b8
	goto loc_82CAF6B8;
loc_82CAF69C:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// lwz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82caf6bc
	if (cr6.lt) goto loc_82CAF6BC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CAF6B8:
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
loc_82CAF6BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82caf198
	ctx.lr = 0x82CAF6C4;
	sub_82CAF198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82caec40
	ctx.lr = 0x82CAF6CC;
	sub_82CAEC40(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAF6E4"))) PPC_WEAK_FUNC(sub_82CAF6E4);
PPC_FUNC_IMPL(__imp__sub_82CAF6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAF6E8"))) PPC_WEAK_FUNC(sub_82CAF6E8);
PPC_FUNC_IMPL(__imp__sub_82CAF6E8) {
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
	// beq cr6,0x82caf734
	if (cr6.eq) goto loc_82CAF734;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82dee390
	ctx.lr = 0x82CAF71C;
	sub_82DEE390(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82caea68
	ctx.lr = 0x82CAF730;
	sub_82CAEA68(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82CAF734:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAF74C"))) PPC_WEAK_FUNC(sub_82CAF74C);
PPC_FUNC_IMPL(__imp__sub_82CAF74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAF750"))) PPC_WEAK_FUNC(sub_82CAF750);
PPC_FUNC_IMPL(__imp__sub_82CAF750) {
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
	// beq cr6,0x82caf794
	if (cr6.eq) goto loc_82CAF794;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82caea68
	ctx.lr = 0x82CAF780;
	sub_82CAEA68(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CAF794;
	sub_825952B8(ctx, base);
loc_82CAF794:
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

__attribute__((alias("__imp__sub_82CAF7B8"))) PPC_WEAK_FUNC(sub_82CAF7B8);
PPC_FUNC_IMPL(__imp__sub_82CAF7B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CAF7C0;
	__savegprlr_26(ctx, base);
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8308e078
	ctx.lr = 0x82CAF7D8;
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
	ctx.lr = 0x82CAF7F0;
	sub_82D253F8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lbz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r9,r11,16448
	ctx.r9.s64 = ctx.r11.s64 + 16448;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r27,4
	ctx.r27.s64 = 4;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stb r28,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r28.u8);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// std r11,176(r31)
	PPC_STORE_U64(ctx.r31.u32 + 176, ctx.r11.u64);
	// lbz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
loc_82CAF864:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,-4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82caf898
	if (cr6.eq) goto loc_82CAF898;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82dee390
	ctx.lr = 0x82CAF880;
	sub_82DEE390(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r30,8
	ctx.r5.s64 = ctx.r30.s64 + 8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82caea68
	ctx.lr = 0x82CAF894;
	sub_82CAEA68(ctx, base);
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
loc_82CAF898:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x82caf864
	if (!cr0.eq) goto loc_82CAF864;
	// bl 0x82d96138
	ctx.lr = 0x82CAF8A8;
	sub_82D96138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82caf8e0
	if (cr6.eq) goto loc_82CAF8E0;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,3096(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3096);
	// bl 0x82d20ae0
	ctx.lr = 0x82CAF8C4;
	sub_82D20AE0(ctx, base);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,3092(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3092);
	// bl 0x82d20ae0
	ctx.lr = 0x82CAF8D4;
	sub_82D20AE0(ctx, base);
	// lis r9,-31776
	ctx.r9.s64 = -2082471936;
	// lwz r4,3100(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3100);
	// b 0x82caf940
	goto loc_82CAF940;
loc_82CAF8E0:
	// bl 0x83572958
	ctx.lr = 0x82CAF8E4;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82caf91c
	if (cr6.eq) goto loc_82CAF91C;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r4,3108(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3108);
	// bl 0x82d20ae0
	ctx.lr = 0x82CAF900;
	sub_82D20AE0(ctx, base);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,3104(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3104);
	// bl 0x82d20ae0
	ctx.lr = 0x82CAF910;
	sub_82D20AE0(ctx, base);
	// lis r9,-31776
	ctx.r9.s64 = -2082471936;
	// lwz r4,3112(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3112);
	// b 0x82caf940
	goto loc_82CAF940;
loc_82CAF91C:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r4,3120(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3120);
	// bl 0x82d20ae0
	ctx.lr = 0x82CAF928;
	sub_82D20AE0(ctx, base);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,3116(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3116);
	// bl 0x82d20ae0
	ctx.lr = 0x82CAF938;
	sub_82D20AE0(ctx, base);
	// lis r9,-31776
	ctx.r9.s64 = -2082471936;
	// lwz r4,3124(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3124);
loc_82CAF940:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d23390
	ctx.lr = 0x82CAF94C;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAF958"))) PPC_WEAK_FUNC(sub_82CAF958);
PPC_FUNC_IMPL(__imp__sub_82CAF958) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CAF960;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lbz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,16448
	ctx.r9.s64 = ctx.r11.s64 + 16448;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r31,r3,160
	ctx.r31.s64 = ctx.r3.s64 + 160;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// li r30,3
	ctx.r30.s64 = 3;
	// li r27,2
	ctx.r27.s64 = 2;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82CAF994:
	// lwzu r3,-16(r31)
	ea = -16 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82caf9c0
	if (cr6.eq) goto loc_82CAF9C0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// bl 0x82caea68
	ctx.lr = 0x82CAF9B0;
	sub_82CAEA68(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82CAF9C0;
	sub_825952B8(ctx, base);
loc_82CAF9C0:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// bge 0x82caf994
	if (!cr0.lt) goto loc_82CAF994;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d25548
	ctx.lr = 0x82CAF9DC;
	sub_82D25548(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAF9E4"))) PPC_WEAK_FUNC(sub_82CAF9E4);
PPC_FUNC_IMPL(__imp__sub_82CAF9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAF9E8"))) PPC_WEAK_FUNC(sub_82CAF9E8);
PPC_FUNC_IMPL(__imp__sub_82CAF9E8) {
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
	// bl 0x82caf958
	ctx.lr = 0x82CAFA08;
	sub_82CAF958(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cafa20
	if (cr6.eq) goto loc_82CAFA20;
	// bl 0x82416268
	ctx.lr = 0x82CAFA1C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CAFA20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAFA38"))) PPC_WEAK_FUNC(sub_82CAFA38);
PPC_FUNC_IMPL(__imp__sub_82CAFA38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82CAFA40;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,315
	ctx.r11.s64 = 20643840;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,5041
	ctx.r10.u64 = ctx.r11.u64 | 5041;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82cafa64
	if (!cr6.gt) goto loc_82CAFA64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82CAFA64;
	sub_831CC150(ctx, base);
loc_82CAFA64:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r24,208
	ctx.r24.s64 = 208;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r24
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r24.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x82cafb24
	if (!cr6.lt) goto loc_82CAFB24;
	// li r25,2
	ctx.r25.s64 = 2;
	// mulli r26,r4,208
	ctx.r26.s64 = ctx.r4.s64 * 208;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82CAFA9C;
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
	// beq cr6,0x82cafad8
	if (cr6.eq) goto loc_82CAFAD8;
loc_82CAFAB4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82cafac8
	if (cr6.eq) goto loc_82CAFAC8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82caf0d8
	ctx.lr = 0x82CAFAC8;
	sub_82CAF0D8(ctx, base);
loc_82CAFAC8:
	// addi r30,r30,208
	ctx.r30.s64 = ctx.r30.s64 + 208;
	// addi r29,r29,208
	ctx.r29.s64 = ctx.r29.s64 + 208;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// bne cr6,0x82cafab4
	if (!cr6.eq) goto loc_82CAFAB4;
loc_82CAFAD8:
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
	// beq cr6,0x82cafb0c
	if (cr6.eq) goto loc_82CAFB0C;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82caea68
	ctx.lr = 0x82CAFAFC;
	sub_82CAEA68(ctx, base);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82CAFB0C;
	sub_825952B8(ctx, base);
loc_82CAFB0C:
	// mulli r11,r30,208
	ctx.r11.s64 = ctx.r30.s64 * 208;
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
loc_82CAFB24:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAFB2C"))) PPC_WEAK_FUNC(sub_82CAFB2C);
PPC_FUNC_IMPL(__imp__sub_82CAFB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAFB30"))) PPC_WEAK_FUNC(sub_82CAFB30);
PPC_FUNC_IMPL(__imp__sub_82CAFB30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,315
	ctx.r10.s64 = 20643840;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,208
	ctx.r9.s64 = 208;
	// ori r8,r10,5041
	ctx.r8.u64 = ctx.r10.u64 | 5041;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x82cafb64
	if (!cr6.lt) goto loc_82CAFB64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82CAFB64:
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
	// blt cr6,0x82cafb94
	if (cr6.lt) goto loc_82CAFB94;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82CAFB94:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82cafba0
	if (!cr6.lt) goto loc_82CAFBA0;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82CAFBA0:
	// b 0x82cafa38
	sub_82CAFA38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAFBA4"))) PPC_WEAK_FUNC(sub_82CAFBA4);
PPC_FUNC_IMPL(__imp__sub_82CAFBA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAFBA8"))) PPC_WEAK_FUNC(sub_82CAFBA8);
PPC_FUNC_IMPL(__imp__sub_82CAFBA8) {
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
	// blt cr6,0x82cafbd0
	if (cr6.lt) goto loc_82CAFBD0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82cafbd4
	goto loc_82CAFBD4;
loc_82CAFBD0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82CAFBD4:
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
	ctx.lr = 0x82CAFBF0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cafc0c
	if (cr6.eq) goto loc_82CAFC0C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82caf7b8
	ctx.lr = 0x82CAFC08;
	sub_82CAF7B8(ctx, base);
	// b 0x82cafc10
	goto loc_82CAFC10;
loc_82CAFC0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CAFC10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAFC28"))) PPC_WEAK_FUNC(sub_82CAFC28);
PPC_FUNC_IMPL(__imp__sub_82CAFC28) {
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
	// blt cr6,0x82cafc50
	if (cr6.lt) goto loc_82CAFC50;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82cafc54
	goto loc_82CAFC54;
loc_82CAFC50:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82CAFC54:
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
	ctx.lr = 0x82CAFC70;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cafc8c
	if (cr6.eq) goto loc_82CAFC8C;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82caf7b8
	ctx.lr = 0x82CAFC88;
	sub_82CAF7B8(ctx, base);
	// b 0x82cafc90
	goto loc_82CAFC90;
loc_82CAFC8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CAFC90:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAFCA8"))) PPC_WEAK_FUNC(sub_82CAFCA8);
PPC_FUNC_IMPL(__imp__sub_82CAFCA8) {
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
	// bge cr6,0x82cafce0
	if (!cr6.lt) goto loc_82CAFCE0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82cafce4
	if (!cr6.gt) goto loc_82CAFCE4;
loc_82CAFCE0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82CAFCE4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cafd34
	if (cr6.eq) goto loc_82CAFD34;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,208
	ctx.r9.s64 = 208;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x82cafd18
	if (!cr6.eq) goto loc_82CAFD18;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cafb30
	ctx.lr = 0x82CAFD18;
	sub_82CAFB30(ctx, base);
loc_82CAFD18:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cafd60
	if (cr6.eq) goto loc_82CAFD60;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,208
	ctx.r11.s64 = ctx.r30.s64 * 208;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82cafd5c
	goto loc_82CAFD5C;
loc_82CAFD34:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82cafd4c
	if (!cr6.eq) goto loc_82CAFD4C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cafb30
	ctx.lr = 0x82CAFD4C;
	sub_82CAFB30(ctx, base);
loc_82CAFD4C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cafd60
	if (cr6.eq) goto loc_82CAFD60;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82CAFD5C:
	// bl 0x82caf0d8
	ctx.lr = 0x82CAFD60;
	sub_82CAF0D8(ctx, base);
loc_82CAFD60:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,208
	ctx.r11.s64 = ctx.r11.s64 + 208;
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

__attribute__((alias("__imp__sub_82CAFD84"))) PPC_WEAK_FUNC(sub_82CAFD84);
PPC_FUNC_IMPL(__imp__sub_82CAFD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CAFD88"))) PPC_WEAK_FUNC(sub_82CAFD88);
PPC_FUNC_IMPL(__imp__sub_82CAFD88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82CAFD90;
	__savegprlr_22(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CAFD9C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cb0318
	if (cr6.eq) goto loc_82CB0318;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82da29f8
	ctx.lr = 0x82CAFDAC;
	sub_82DA29F8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x83ac2480
	ctx.lr = 0x82CAFDB4;
	sub_83AC2480(ctx, base);
	// lbz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 160);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r22,2
	ctx.r22.s64 = 2;
	// stw r3,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cafe88
	if (cr6.eq) goto loc_82CAFE88;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82dee260
	ctx.lr = 0x82CAFDD4;
	sub_82DEE260(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cafe40
	if (cr6.eq) goto loc_82CAFE40;
loc_82CAFDE4:
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82cae7a0
	ctx.lr = 0x82CAFDEC;
	sub_82CAE7A0(ctx, base);
	// addi r6,r1,336
	ctx.r6.s64 = ctx.r1.s64 + 336;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,172(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82dee2e0
	ctx.lr = 0x82CAFE00;
	sub_82DEE2E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cafe6c
	if (cr6.eq) goto loc_82CAFE6C;
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82cafca8
	ctx.lr = 0x82CAFE24;
	sub_82CAFCA8(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82cae730
	ctx.lr = 0x82CAFE2C;
	sub_82CAE730(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82cae730
	ctx.lr = 0x82CAFE34;
	sub_82CAE730(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x82cafde4
	if (cr6.lt) goto loc_82CAFDE4;
loc_82CAFE40:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,164(r30)
	PPC_STORE_U32(ctx.r30.u32 + 164, ctx.r11.u32);
loc_82CAFE48:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d199f0
	ctx.lr = 0x82CAFE50;
	sub_82D199F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cafff4
	if (cr6.eq) goto loc_82CAFFF4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82dee128
	ctx.lr = 0x82CAFE64;
	sub_82DEE128(ctx, base);
	// stw r3,168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 168, ctx.r3.u32);
	// b 0x82cafffc
	goto loc_82CAFFFC;
loc_82CAFE6C:
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82cae730
	ctx.lr = 0x82CAFE74;
	sub_82CAE730(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82cae730
	ctx.lr = 0x82CAFE7C;
	sub_82CAE730(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82CAFE88:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r23,r30,96
	ctx.r23.s64 = ctx.r30.s64 + 96;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// li r24,15
	ctx.r24.s64 = 15;
loc_82CAFE98:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// bl 0x82dee260
	ctx.lr = 0x82CAFEA8;
	sub_82DEE260(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82caff5c
	if (cr6.eq) goto loc_82CAFF5C;
loc_82CAFEB8:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82cae7a0
	ctx.lr = 0x82CAFEC0;
	sub_82CAE7A0(ctx, base);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82dee2e0
	ctx.lr = 0x82CAFED4;
	sub_82DEE2E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82caff88
	if (cr6.eq) goto loc_82CAFF88;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82cafca8
	ctx.lr = 0x82CAFEEC;
	sub_82CAFCA8(ctx, base);
	// lwz r11,280(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82caff0c
	if (cr6.lt) goto loc_82CAFF0C;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,260(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// bl 0x825952b8
	ctx.lr = 0x82CAFF0C;
	sub_825952B8(ctx, base);
loc_82CAFF0C:
	// stw r24,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r24.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stw r29,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r29.u32);
	// stb r29,260(r1)
	PPC_STORE_U8(ctx.r1.u32 + 260, ctx.r29.u8);
	// bl 0x82da8c38
	ctx.lr = 0x82CAFF20;
	sub_82DA8C38(ctx, base);
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82caff3c
	if (cr6.lt) goto loc_82CAFF3C;
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x825952b8
	ctx.lr = 0x82CAFF3C;
	sub_825952B8(ctx, base);
loc_82CAFF3C:
	// stw r24,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r24.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// stb r29,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r29.u8);
	// bl 0x82da8c38
	ctx.lr = 0x82CAFF50;
	sub_82DA8C38(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// blt cr6,0x82cafeb8
	if (cr6.lt) goto loc_82CAFEB8;
loc_82CAFF5C:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82caff74
	if (cr6.eq) goto loc_82CAFF74;
	// lwz r11,164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,164(r30)
	PPC_STORE_U32(ctx.r30.u32 + 164, ctx.r11.u32);
loc_82CAFF74:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r23,r23,16
	ctx.r23.s64 = ctx.r23.s64 + 16;
	// cmplwi cr6,r26,4
	cr6.compare<uint32_t>(ctx.r26.u32, 4, xer);
	// blt cr6,0x82cafe98
	if (cr6.lt) goto loc_82CAFE98;
	// b 0x82cafe48
	goto loc_82CAFE48;
loc_82CAFF88:
	// lwz r11,280(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82caffa4
	if (cr6.lt) goto loc_82CAFFA4;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,260(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// bl 0x825952b8
	ctx.lr = 0x82CAFFA4;
	sub_825952B8(ctx, base);
loc_82CAFFA4:
	// stw r24,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r24.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stw r29,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r29.u32);
	// stb r29,260(r1)
	PPC_STORE_U8(ctx.r1.u32 + 260, ctx.r29.u8);
	// bl 0x82da8c38
	ctx.lr = 0x82CAFFB8;
	sub_82DA8C38(ctx, base);
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82caffd4
	if (cr6.lt) goto loc_82CAFFD4;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x825952b8
	ctx.lr = 0x82CAFFD4;
	sub_825952B8(ctx, base);
loc_82CAFFD4:
	// stw r24,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r24.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// stb r29,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r29.u8);
	// bl 0x82da8c38
	ctx.lr = 0x82CAFFE8;
	sub_82DA8C38(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82CAFFF4:
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// stw r11,168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 168, ctx.r11.u32);
loc_82CAFFFC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CB0004;
	sub_82D19A68(ctx, base);
	// bl 0x82d2ec40
	ctx.lr = 0x82CB0008;
	sub_82D2EC40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x82d2b608
	ctx.lr = 0x82CB0018;
	sub_82D2B608(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83102db0
	ctx.lr = 0x82CB0024;
	sub_83102DB0(ctx, base);
	// bl 0x82d96138
	ctx.lr = 0x82CB0028;
	sub_82D96138(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r27,r11,16328
	ctx.r27.s64 = ctx.r11.s64 + 16328;
	// bne cr6,0x82cb00ec
	if (!cr6.eq) goto loc_82CB00EC;
	// bl 0x83572958
	ctx.lr = 0x82CB0040;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cb00ec
	if (!cr6.eq) goto loc_82CB00EC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CB0054;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,3128(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3128);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CB0070;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cb0318
	if (cr6.eq) goto loc_82CB0318;
	// bl 0x82d2fe58
	ctx.lr = 0x82CB0080;
	sub_82D2FE58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cb0318
	if (cr6.eq) goto loc_82CB0318;
	// lwz r11,164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82cb00e0
	if (!cr6.gt) goto loc_82CB00E0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d30530
	ctx.lr = 0x82CB00A4;
	sub_82D30530(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d199f0
	ctx.lr = 0x82CB00AC;
	sub_82D199F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cb00d0
	if (cr6.eq) goto loc_82CB00D0;
	// lwz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// lwz r5,164(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82d3d968
	ctx.lr = 0x82CB00CC;
	sub_82D3D968(ctx, base);
	// b 0x82cb0264
	goto loc_82CB0264;
loc_82CB00D0:
	// lwz r4,164(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// bl 0x82d3d968
	ctx.lr = 0x82CB00DC;
	sub_82D3D968(ctx, base);
	// b 0x82cb0264
	goto loc_82CB0264;
loc_82CB00E0:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d30530
	ctx.lr = 0x82CB00E8;
	sub_82D30530(ctx, base);
	// b 0x82cb0264
	goto loc_82CB0264;
loc_82CB00EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CB00F4;
	sub_82D19A68(ctx, base);
	// bl 0x82d2ec40
	ctx.lr = 0x82CB00F8;
	sub_82D2EC40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82CB0100;
	sub_82D33DB0(ctx, base);
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,3144(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3144);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CB0120;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r4,3148(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 3148);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82CB0140;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82cb0318
	if (cr6.eq) goto loc_82CB0318;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cb0318
	if (cr6.eq) goto loc_82CB0318;
	// lwz r11,164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bgt cr6,0x82cb01d8
	if (cr6.gt) goto loc_82CB01D8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82CB0170;
	sub_82D2AEC8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CB0180;
	sub_82D2AEC8(ctx, base);
	// addi r4,r27,-1006
	ctx.r4.s64 = ctx.r27.s64 + -1006;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82CB018C;
	sub_837B0C10(ctx, base);
	// lwz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// lwz r6,164(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,40
	ctx.r4.u64 = ctx.r4.u64 | 40;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x82d042a8
	ctx.lr = 0x82CB01A8;
	sub_82D042A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CB01C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cb025c
	if (cr6.eq) goto loc_82CB025C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82CB01D4;
	sub_82D2AEC8(ctx, base);
	// b 0x82cb025c
	goto loc_82CB025C;
loc_82CB01D8:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82CB01E0;
	sub_82D2AEC8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CB01F0;
	sub_82D2AEC8(ctx, base);
	// addi r4,r27,-1005
	ctx.r4.s64 = ctx.r27.s64 + -1005;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82CB01FC;
	sub_837B0C10(ctx, base);
	// lwz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// lwz r6,164(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,40
	ctx.r4.u64 = ctx.r4.u64 | 40;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x82d042a8
	ctx.lr = 0x82CB0218;
	sub_82D042A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r27,-12
	ctx.r4.s64 = ctx.r27.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CB0230;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cb025c
	if (cr6.eq) goto loc_82CB025C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82CB0248;
	sub_82D2AEC8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CB025C;
	sub_82D291E0(ctx, base);
loc_82CB025C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82CB0264;
	sub_8387E8E0(ctx, base);
loc_82CB0264:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82caec40
	ctx.lr = 0x82CB026C;
	sub_82CAEC40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82caf198
	ctx.lr = 0x82CB0274;
	sub_82CAF198(ctx, base);
	// lbz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 160);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82cae330
	ctx.lr = 0x82CB0288;
	sub_82CAE330(ctx, base);
	// bl 0x82d96138
	ctx.lr = 0x82CB028C;
	sub_82D96138(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82cb02e0
	if (cr6.eq) goto loc_82CB02E0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CB02A0;
	sub_82D19A78(ctx, base);
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
	ctx.lr = 0x82CB02B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cb02e0
	if (cr6.eq) goto loc_82CB02E0;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82aa38e0
	ctx.lr = 0x82CB02CC;
	sub_82AA38E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d32c58
	ctx.lr = 0x82CB02E0;
	sub_82D32C58(ctx, base);
loc_82CB02E0:
	// bl 0x82d96138
	ctx.lr = 0x82CB02E4;
	sub_82D96138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cb02fc
	if (cr6.eq) goto loc_82CB02FC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d198d0
	ctx.lr = 0x82CB02FC;
	sub_82D198D0(ctx, base);
loc_82CB02FC:
	// lbz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cb0318
	if (cr6.eq) goto loc_82CB0318;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a689e8
	ctx.lr = 0x82CB0310;
	sub_82A689E8(ctx, base);
	// bl 0x82d26640
	ctx.lr = 0x82CB0314;
	sub_82D26640(ctx, base);
	// bl 0x82d25ab8
	ctx.lr = 0x82CB0318;
	sub_82D25AB8(ctx, base);
loc_82CB0318:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB0324"))) PPC_WEAK_FUNC(sub_82CB0324);
PPC_FUNC_IMPL(__imp__sub_82CB0324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CB0328"))) PPC_WEAK_FUNC(sub_82CB0328);
PPC_FUNC_IMPL(__imp__sub_82CB0328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CB0330;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8308e078
	ctx.lr = 0x82CB0344;
	sub_8308E078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82CB035C;
	sub_82D253F8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-31776
	ctx.r9.s64 = -2082471936;
	// addi r8,r11,17704
	ctx.r8.s64 = ctx.r11.s64 + 17704;
	// addi r7,r10,-17088
	ctx.r7.s64 = ctx.r10.s64 + -17088;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// addi r10,r9,3380
	ctx.r10.s64 = ctx.r9.s64 + 3380;
	// stw r7,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r7.u32);
	// addi r28,r30,96
	ctx.r28.s64 = ctx.r30.s64 + 96;
	// stw r11,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r11.u32);
	// stw r11,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r11.u32);
	// li r31,4
	ctx.r31.s64 = 4;
	// stw r11,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r11.u32);
	// addi r29,r10,-4
	ctx.r29.s64 = ctx.r10.s64 + -4;
loc_82CB0398:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzu r4,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// bl 0x82d20ae0
	ctx.lr = 0x82CB03A4;
	sub_82D20AE0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82cb0398
	if (!cr0.eq) goto loc_82CB0398;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,3372(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3372);
	// bl 0x82d20ae0
	ctx.lr = 0x82CB03BC;
	sub_82D20AE0(ctx, base);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,3376(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3376);
	// bl 0x82d23390
	ctx.lr = 0x82CB03D0;
	sub_82D23390(ctx, base);
	// lwz r6,4(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// beq cr6,0x82cb041c
	if (cr6.eq) goto loc_82CB041C;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r6
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r6.u32, xer);
	// beq cr6,0x82cb0418
	if (cr6.eq) goto loc_82CB0418;
loc_82CB03EC:
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// addi r10,r7,-4
	ctx.r10.s64 = ctx.r7.s64 + -4;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82CB03FC:
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82cb03fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CB03FC;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// addi r7,r7,24
	ctx.r7.s64 = ctx.r7.s64 + 24;
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// bne cr6,0x82cb03ec
	if (!cr6.eq) goto loc_82CB03EC;
loc_82CB0418:
	// stw r7,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r7.u32);
loc_82CB041C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CB042C;
	sub_82D19788(ctx, base);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,41
	ctx.r5.u64 = ctx.r5.u64 | 41;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82CB0440;
	sub_82D20EB8(ctx, base);
	// li r4,213
	ctx.r4.s64 = 213;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d1a998
	ctx.lr = 0x82CB044C;
	sub_82D1A998(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CB045C;
	sub_82D19788(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83102db0
	ctx.lr = 0x82CB0468;
	sub_83102DB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB0474"))) PPC_WEAK_FUNC(sub_82CB0474);
PPC_FUNC_IMPL(__imp__sub_82CB0474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CB0478"))) PPC_WEAK_FUNC(sub_82CB0478);
PPC_FUNC_IMPL(__imp__sub_82CB0478) {
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,17704
	ctx.r9.s64 = ctx.r11.s64 + 17704;
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
	// beq cr6,0x82cb04c0
	if (cr6.eq) goto loc_82CB04C0;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CB04C0;
	sub_825952B8(ctx, base);
loc_82CB04C0:
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
	ctx.lr = 0x82CB04D8;
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

__attribute__((alias("__imp__sub_82CB04EC"))) PPC_WEAK_FUNC(sub_82CB04EC);
PPC_FUNC_IMPL(__imp__sub_82CB04EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CB04F0"))) PPC_WEAK_FUNC(sub_82CB04F0);
PPC_FUNC_IMPL(__imp__sub_82CB04F0) {
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
	// bl 0x82cb0478
	ctx.lr = 0x82CB0510;
	sub_82CB0478(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cb0528
	if (cr6.eq) goto loc_82CB0528;
	// bl 0x82416268
	ctx.lr = 0x82CB0524;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CB0528:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB0540"))) PPC_WEAK_FUNC(sub_82CB0540);
PPC_FUNC_IMPL(__imp__sub_82CB0540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CB0548;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cb0728
	if (cr6.eq) goto loc_82CB0728;
	// lwz r10,96(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r11,24
	ctx.r11.s64 = 24;
	// lwz r9,100(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r7,r8,r11
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// ble cr6,0x82cb0728
	if (!cr6.gt) goto loc_82CB0728;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831156e8
	ctx.lr = 0x82CB0588;
	sub_831156E8(ctx, base);
	// ld r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311bf98
	ctx.lr = 0x82CB0594;
	sub_8311BF98(ctx, base);
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,3400(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3400);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CB05B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cb05e8
	if (cr6.eq) goto loc_82CB05E8;
	// li r11,12
	ctx.r11.s64 = 12;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83120738
	ctx.lr = 0x82CB05DC;
	sub_83120738(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d39310
	ctx.lr = 0x82CB05E8;
	sub_82D39310(ctx, base);
loc_82CB05E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,3412(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3412);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CB0604;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cb0638
	if (cr6.eq) goto loc_82CB0638;
	// addi r4,r29,56
	ctx.r4.s64 = ctx.r29.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82CB061C;
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
	ctx.lr = 0x82CB0630;
	sub_82D291E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82CB0638;
	sub_8387E8E0(ctx, base);
loc_82CB0638:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,3420(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3420);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CB0654;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cb0668
	if (cr6.eq) goto loc_82CB0668;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// bl 0x82d294d0
	ctx.lr = 0x82CB0668;
	sub_82D294D0(ctx, base);
loc_82CB0668:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,3424(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3424);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CB0684;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cb0698
	if (cr6.eq) goto loc_82CB0698;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// bl 0x82d294d0
	ctx.lr = 0x82CB0698;
	sub_82D294D0(ctx, base);
loc_82CB0698:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,3432(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3432);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CB06B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cb06c8
	if (cr6.eq) goto loc_82CB06C8;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// bl 0x82d294d0
	ctx.lr = 0x82CB06C8;
	sub_82D294D0(ctx, base);
loc_82CB06C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,3436(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3436);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CB06E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cb06f8
	if (cr6.eq) goto loc_82CB06F8;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// bl 0x82d294d0
	ctx.lr = 0x82CB06F8;
	sub_82D294D0(ctx, base);
loc_82CB06F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,3440(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3440);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CB0714;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cb0728
	if (cr6.eq) goto loc_82CB0728;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82CB0728;
	sub_82D2AEC8(ctx, base);
loc_82CB0728:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB0730"))) PPC_WEAK_FUNC(sub_82CB0730);
PPC_FUNC_IMPL(__imp__sub_82CB0730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82CB0738;
	__savegprlr_20(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CB0744;
	sub_82D86078(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82cb0760
	if (!cr6.eq) goto loc_82CB0760;
	// bl 0x82d885b0
	ctx.lr = 0x82CB0754;
	sub_82D885B0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82CB0760:
	// lwz r3,28(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28);
	// bl 0x82da2858
	ctx.lr = 0x82CB0768;
	sub_82DA2858(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x82da8160
	ctx.lr = 0x82CB0770;
	sub_82DA8160(ctx, base);
	// addi r20,r22,96
	ctx.r20.s64 = ctx.r22.s64 + 96;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d1d980
	ctx.lr = 0x82CB0784;
	sub_82D1D980(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// beq cr6,0x82cb0800
	if (cr6.eq) goto loc_82CB0800;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,65535
	ctx.r29.u64 = ctx.r11.u64 | 65535;
loc_82CB079C:
	// sth r29,296(r1)
	PPC_STORE_U16(ctx.r1.u32 + 296, ctx.r29.u16);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// stw r24,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r24.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da8178
	ctx.lr = 0x82CB07B4;
	sub_82DA8178(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cb07f4
	if (cr6.eq) goto loc_82CB07F4;
	// lwz r10,304(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,308(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r8,312(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r7,316(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// ld r11,296(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 296);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x82d208d0
	ctx.lr = 0x82CB07F4;
	sub_82D208D0(ctx, base);
loc_82CB07F4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// blt cr6,0x82cb079c
	if (cr6.lt) goto loc_82CB079C;
loc_82CB0800:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CB0808;
	sub_82D19A78(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r23,r11,16787
	ctx.r23.s64 = ctx.r11.s64 + 16787;
	// addi r4,r23,817
	ctx.r4.s64 = ctx.r23.s64 + 817;
	// bl 0x82d2f098
	ctx.lr = 0x82CB0818;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cb083c
	if (cr6.eq) goto loc_82CB083C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r4,3460(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3460);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CB083C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CB083C:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CB0844;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82CB084C;
	sub_82D33DB0(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,3408(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3408);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CB0868;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cb0878
	if (cr6.eq) goto loc_82CB0878;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d47120
	ctx.lr = 0x82CB0878;
	sub_82D47120(ctx, base);
loc_82CB0878:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CB0880;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82CB0888;
	sub_82D33DB0(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,3404(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3404);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CB08A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cb08b4
	if (cr6.eq) goto loc_82CB08B4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d47120
	ctx.lr = 0x82CB08B4;
	sub_82D47120(ctx, base);
loc_82CB08B4:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r9,-31776
	ctx.r9.s64 = -2082471936;
	// lis r8,-31776
	ctx.r8.s64 = -2082471936;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// lwz r11,3444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3444);
	// li r29,4
	ctx.r29.s64 = 4;
	// lwz r10,3448(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3448);
	// lis r28,-31776
	ctx.r28.s64 = -2082471936;
	// lwz r9,3452(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3452);
	// lis r27,-31776
	ctx.r27.s64 = -2082471936;
	// lwz r8,3456(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3456);
	// lis r26,-31776
	ctx.r26.s64 = -2082471936;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
loc_82CB08F8:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CB0900;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82CB0908;
	sub_82D33DB0(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CB0920;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cb0978
	if (cr6.eq) goto loc_82CB0978;
	// bl 0x82d96138
	ctx.lr = 0x82CB0930;
	sub_82D96138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cb0944
	if (cr6.eq) goto loc_82CB0944;
	// lwz r4,3464(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3464);
	// b 0x82cb0960
	goto loc_82CB0960;
loc_82CB0944:
	// bl 0x83572958
	ctx.lr = 0x82CB0948;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cb095c
	if (cr6.eq) goto loc_82CB095C;
	// lwz r4,3468(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3468);
	// b 0x82cb0960
	goto loc_82CB0960;
loc_82CB095C:
	// lwz r4,3472(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3472);
loc_82CB0960:
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
	ctx.lr = 0x82CB0978;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CB0978:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82cb08f8
	if (!cr0.eq) goto loc_82CB08F8;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CB098C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,3396(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3396);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CB09A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cb0c78
	if (cr6.eq) goto loc_82CB0C78;
	// bl 0x82d96138
	ctx.lr = 0x82CB09B8;
	sub_82D96138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// bne cr6,0x82cb09d0
	if (!cr6.eq) goto loc_82CB09D0;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82CB09D0:
	// bl 0x82d30450
	ctx.lr = 0x82CB09D4;
	sub_82D30450(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82CB09D8;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// lwz r31,48(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82da8118
	ctx.lr = 0x82CB09EC;
	sub_82DA8118(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x8311c148
	ctx.lr = 0x82CB09FC;
	sub_8311C148(ctx, base);
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r24,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r24.u32);
	// stb r24,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r24.u8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r27,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r27.u32);
	// addi r4,r23,-1
	ctx.r4.s64 = ctx.r23.s64 + -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8259cc28
	ctx.lr = 0x82CB0A20;
	sub_8259CC28(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da86b8
	ctx.lr = 0x82CB0A2C;
	sub_82DA86B8(ctx, base);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// li r30,-1
	ctx.r30.s64 = -1;
	// stb r24,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r24.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cb28
	ctx.lr = 0x82CB0A50;
	sub_8259CB28(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82d96f18
	ctx.lr = 0x82CB0A60;
	sub_82D96F18(ctx, base);
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82cb0a74
	if (!cr6.lt) goto loc_82CB0A74;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_82CB0A74:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d30138
	ctx.lr = 0x82CB0A80;
	sub_82D30138(ctx, base);
	// bl 0x82d96138
	ctx.lr = 0x82CB0A84;
	sub_82D96138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r25,2
	ctx.r25.s64 = 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cb0ad0
	if (cr6.eq) goto loc_82CB0AD0;
	// lwz r11,100(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cb0bb8
	if (cr6.eq) goto loc_82CB0BB8;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// addi r4,r23,825
	ctx.r4.s64 = ctx.r23.s64 + 825;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CB0AB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cb0bb8
	if (cr6.eq) goto loc_82CB0BB8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82CB0ACC;
	sub_82D2AEC8(ctx, base);
	// b 0x82cb0bb8
	goto loc_82CB0BB8;
loc_82CB0AD0:
	// lis r31,-31758
	ctx.r31.s64 = -2081292288;
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r11,-13896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13896);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82cb0b04
	if (!cr6.eq) goto loc_82CB0B04;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x82cb0b00
	if (cr6.eq) goto loc_82CB0B00;
	// stb r28,57(r11)
	PPC_STORE_U8(ctx.r11.u32 + 57, ctx.r28.u8);
	// lwz r11,-13896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13896);
loc_82CB0B00:
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
loc_82CB0B04:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cb0b18
	if (!cr6.lt) goto loc_82CB0B18;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_82CB0B18:
	// stw r27,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r27.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r24,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r24.u32);
	// stb r24,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r24.u8);
loc_82CB0B28:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cb0b28
	if (!cr6.eq) goto loc_82CB0B28;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CB0B4C;
	sub_8259CC28(ctx, base);
	// lwz r11,-13896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13896);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82cb0b90
	if (!cr6.eq) goto loc_82CB0B90;
	// stb r28,57(r11)
	PPC_STORE_U8(ctx.r11.u32 + 57, ctx.r28.u8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r11,-13896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13896);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r11,-13896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13896);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bl 0x8259cb28
	ctx.lr = 0x82CB0B88;
	sub_8259CB28(ctx, base);
	// lwz r11,-13896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13896);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
loc_82CB0B90:
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cb0bac
	if (cr6.lt) goto loc_82CB0BAC;
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x82CB0BAC;
	sub_825952B8(ctx, base);
loc_82CB0BAC:
	// stw r27,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r27.u32);
	// stw r24,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r24.u32);
	// stb r24,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r24.u8);
loc_82CB0BB8:
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r24,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r24.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r24,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r24.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82CB0BD4;
	sub_8259CC28(ctx, base);
	// lwz r3,28(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28);
	// bl 0x82da24b0
	ctx.lr = 0x82CB0BDC;
	sub_82DA24B0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82dedf88
	ctx.lr = 0x82CB0BE4;
	sub_82DEDF88(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cb0bf8
	if (!cr6.lt) goto loc_82CB0BF8;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82CB0BF8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d30208
	ctx.lr = 0x82CB0C00;
	sub_82D30208(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cb0c1c
	if (cr6.lt) goto loc_82CB0C1C;
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r25.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82CB0C1C;
	sub_825952B8(ctx, base);
loc_82CB0C1C:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r24,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r24.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r24,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r24.u8);
	// blt cr6,0x82cb0c44
	if (cr6.lt) goto loc_82CB0C44;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82CB0C44;
	sub_825952B8(ctx, base);
loc_82CB0C44:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// stw r24,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r24.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r24,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r24.u8);
	// blt cr6,0x82cb0c6c
	if (cr6.lt) goto loc_82CB0C6C;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x82CB0C6C;
	sub_825952B8(ctx, base);
loc_82CB0C6C:
	// stw r27,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r27.u32);
	// stw r24,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r24.u32);
	// stb r24,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r24.u8);
loc_82CB0C78:
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// li r10,24
	ctx.r10.s64 = 24;
	// lwz r9,0(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// divw r5,r8,r10
	ctx.r5.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d20f50
	ctx.lr = 0x82CB0CA0;
	sub_82D20F50(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB0CAC"))) PPC_WEAK_FUNC(sub_82CB0CAC);
PPC_FUNC_IMPL(__imp__sub_82CB0CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CB0CB0"))) PPC_WEAK_FUNC(sub_82CB0CB0);
PPC_FUNC_IMPL(__imp__sub_82CB0CB0) {
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
	// blt cr6,0x82cb0cd8
	if (cr6.lt) goto loc_82CB0CD8;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82cb0cdc
	goto loc_82CB0CDC;
loc_82CB0CD8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82CB0CDC:
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
	ctx.lr = 0x82CB0CF8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cb0d10
	if (cr6.eq) goto loc_82CB0D10;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb0328
	ctx.lr = 0x82CB0D0C;
	sub_82CB0328(ctx, base);
	// b 0x82cb0d14
	goto loc_82CB0D14;
loc_82CB0D10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CB0D14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB0D2C"))) PPC_WEAK_FUNC(sub_82CB0D2C);
PPC_FUNC_IMPL(__imp__sub_82CB0D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CB0D30"))) PPC_WEAK_FUNC(sub_82CB0D30);
PPC_FUNC_IMPL(__imp__sub_82CB0D30) {
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
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CB0D54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31776
	ctx.r9.s64 = -2082471936;
	// li r8,6
	ctx.r8.s64 = 6;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r8.u32);
	// lwz r7,52(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,3728(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3728);
	// rlwimi r7,r11,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r7,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r7.u32);
	// lwz r11,3728(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3728);
	// rlwimi r6,r11,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r6.u32);
	// lwz r5,76(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// blt cr6,0x82cb0db0
	if (cr6.lt) goto loc_82CB0DB0;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
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
loc_82CB0DB0:
	// stb r10,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_82CB0DC8"))) PPC_WEAK_FUNC(sub_82CB0DC8);
PPC_FUNC_IMPL(__imp__sub_82CB0DC8) {
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
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r3,56
	ctx.r31.s64 = ctx.r3.s64 + 56;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cb0e04
	if (cr6.lt) goto loc_82CB0E04;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CB0E04;
	sub_825952B8(ctx, base);
loc_82CB0E04:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// bl 0x82da8c38
	ctx.lr = 0x82CB0E20;
	sub_82DA8C38(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB0E38"))) PPC_WEAK_FUNC(sub_82CB0E38);
PPC_FUNC_IMPL(__imp__sub_82CB0E38) {
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
	// bl 0x82da8d18
	ctx.lr = 0x82CB0E50;
	sub_82DA8D18(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// stb r11,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r11.u8);
	// bl 0x82cb0d30
	ctx.lr = 0x82CB0E74;
	sub_82CB0D30(ctx, base);
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

__attribute__((alias("__imp__sub_82CB0E8C"))) PPC_WEAK_FUNC(sub_82CB0E8C);
PPC_FUNC_IMPL(__imp__sub_82CB0E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CB0E90"))) PPC_WEAK_FUNC(sub_82CB0E90);
PPC_FUNC_IMPL(__imp__sub_82CB0E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CB0E98;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cb0f98
	if (cr6.eq) goto loc_82CB0F98;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cb0f98
	if (cr6.eq) goto loc_82CB0F98;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r4,r3,116
	ctx.r4.s64 = ctx.r3.s64 + 116;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r28,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r28.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cb28
	ctx.lr = 0x82CB0EE0;
	sub_8259CB28(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// bl 0x82c31be0
	ctx.lr = 0x82CB0EEC;
	sub_82C31BE0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cb0f98
	if (cr6.eq) goto loc_82CB0F98;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CB0F00;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,3616(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3616);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CB0F1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cb0f94
	if (cr6.eq) goto loc_82CB0F94;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,112(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c31ed8
	ctx.lr = 0x82CB0F38;
	sub_82C31ED8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cb0f60
	if (!cr6.eq) goto loc_82CB0F60;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82c319a0
	ctx.lr = 0x82CB0F50;
	sub_82C319A0(ctx, base);
	// lwz r11,112(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// b 0x82cb0f80
	goto loc_82CB0F80;
loc_82CB0F60:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cb0f74
	if (!cr6.lt) goto loc_82CB0F74;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82CB0F74:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82CB0F80:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82CB0F8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82CB0F94;
	sub_8387E8E0(ctx, base);
loc_82CB0F94:
	// stb r28,144(r30)
	PPC_STORE_U8(ctx.r30.u32 + 144, ctx.r28.u8);
loc_82CB0F98:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB0FA4"))) PPC_WEAK_FUNC(sub_82CB0FA4);
PPC_FUNC_IMPL(__imp__sub_82CB0FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CB0FA8"))) PPC_WEAK_FUNC(sub_82CB0FA8);
PPC_FUNC_IMPL(__imp__sub_82CB0FA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CB0FB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82cb1010
	if (cr6.eq) goto loc_82CB1010;
	// addi r31,r3,56
	ctx.r31.s64 = ctx.r3.s64 + 56;
	// li r27,2
	ctx.r27.s64 = 2;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82CB0FD0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cb0fec
	if (cr6.lt) goto loc_82CB0FEC;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82CB0FEC;
	sub_825952B8(ctx, base);
loc_82CB0FEC:
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// addi r3,r31,-56
	ctx.r3.s64 = ctx.r31.s64 + -56;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// bl 0x82da8c38
	ctx.lr = 0x82CB1000;
	sub_82DA8C38(ctx, base);
	// addi r31,r31,88
	ctx.r31.s64 = ctx.r31.s64 + 88;
	// addi r11,r31,-56
	ctx.r11.s64 = ctx.r31.s64 + -56;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x82cb0fd0
	if (!cr6.eq) goto loc_82CB0FD0;
loc_82CB1010:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB1018"))) PPC_WEAK_FUNC(sub_82CB1018);
PPC_FUNC_IMPL(__imp__sub_82CB1018) {
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
	// bl 0x82da8e68
	ctx.lr = 0x82CB1038;
	sub_82DA8E68(ctx, base);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r4,r30,56
	ctx.r4.s64 = ctx.r30.s64 + 56;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// rlwimi r10,r9,0,14,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// lwz r8,52(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// rlwimi r8,r7,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// lwz r6,76(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// blt cr6,0x82cb1074
	if (cr6.lt) goto loc_82CB1074;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82CB1074:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82CB1078:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cb1078
	if (!cr6.eq) goto loc_82CB1078;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CB109C;
	sub_8259CC28(ctx, base);
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

__attribute__((alias("__imp__sub_82CB10B8"))) PPC_WEAK_FUNC(sub_82CB10B8);
PPC_FUNC_IMPL(__imp__sub_82CB10B8) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82CB10D4;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cb1188
	if (cr6.eq) goto loc_82CB1188;
	// lwz r31,56(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19cd0
	ctx.lr = 0x82CB10EC;
	sub_82D19CD0(ctx, base);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r10,100(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// li r9,88
	ctx.r9.s64 = 88;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r7,r8,r9
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r9.s32);
	// cmplw cr6,r7,r3
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, xer);
	// ble cr6,0x82cb1158
	if (!cr6.gt) goto loc_82CB1158;
	// mulli r10,r3,88
	ctx.r10.s64 = ctx.r3.s64 * 88;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da8fd0
	ctx.lr = 0x82CB1118;
	sub_82DA8FD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82da6520
	ctx.lr = 0x82CB1124;
	sub_82DA6520(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82b5e118
	ctx.lr = 0x82CB112C;
	sub_82B5E118(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82da8e68
	ctx.lr = 0x82CB1138;
	sub_82DA8E68(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82b65738
	ctx.lr = 0x82CB1144;
	sub_82B65738(ctx, base);
	// bl 0x82daa040
	ctx.lr = 0x82CB1148;
	sub_82DAA040(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82da8c38
	ctx.lr = 0x82CB1150;
	sub_82DA8C38(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da8c38
	ctx.lr = 0x82CB1158;
	sub_82DA8C38(ctx, base);
loc_82CB1158:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r4,3644(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3644);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82CB1164:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cb1164
	if (!cr6.eq) goto loc_82CB1164;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,488
	ctx.r3.s64 = ctx.r31.s64 + 488;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CB1188;
	sub_8259CC28(ctx, base);
loc_82CB1188:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19858
	ctx.lr = 0x82CB1194;
	sub_82D19858(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB11AC"))) PPC_WEAK_FUNC(sub_82CB11AC);
PPC_FUNC_IMPL(__imp__sub_82CB11AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CB11B0"))) PPC_WEAK_FUNC(sub_82CB11B0);
PPC_FUNC_IMPL(__imp__sub_82CB11B0) {
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
	ctx.lr = 0x82CB11B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cb13e8
	if (cr6.eq) goto loc_82CB13E8;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r10,88
	ctx.r10.s64 = 88;
	// lwz r9,96(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw. r11,r8,r10
	ctx.r11.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82cb13e8
	if (cr0.eq) goto loc_82CB13E8;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// ble cr6,0x82cb13e8
	if (!cr6.gt) goto loc_82CB13E8;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mulli r29,r5,88
	ctx.r29.s64 = ctx.r5.s64 * 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r28,r29,r11
	ctx.r28.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82d19d40
	ctx.lr = 0x82CB1204;
	sub_82D19D40(ctx, base);
	// subf r10,r3,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r3.s64;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82cb1238
	if (cr6.eq) goto loc_82CB1238;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r9,48(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r7,-40(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + -40);
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// bne cr6,0x82cb1238
	if (!cr6.eq) goto loc_82CB1238;
	// addic r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r27,r9,r27
	ctx.r27.u64 = ctx.r9.u64 & ctx.r27.u64;
loc_82CB1238:
	// lwz r11,100(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 100);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r31,r26,100
	ctx.r31.s64 = ctx.r26.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,3632(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3632);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CB1258;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cb13e8
	if (cr6.eq) goto loc_82CB13E8;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cb1288
	if (cr6.eq) goto loc_82CB1288;
	// lwz r3,48(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82cdc348
	ctx.lr = 0x82CB1278;
	sub_82CDC348(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d29598
	ctx.lr = 0x82CB1284;
	sub_82D29598(ctx, base);
	// b 0x82cb12b4
	goto loc_82CB12B4;
loc_82CB1288:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,18448
	ctx.r4.s64 = ctx.r11.s64 + 18448;
	// bl 0x837b0c10
	ctx.lr = 0x82CB1298;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CB12AC;
	sub_82D291E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82CB12B4;
	sub_8387E8E0(ctx, base);
loc_82CB12B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,3640(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3640);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CB12D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cb1338
	if (cr6.eq) goto loc_82CB1338;
	// bl 0x82d96138
	ctx.lr = 0x82CB12E0;
	sub_82D96138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cb1324
	if (!cr6.eq) goto loc_82CB1324;
	// bl 0x83572958
	ctx.lr = 0x82CB12F0;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cb1324
	if (!cr6.eq) goto loc_82CB1324;
	// bl 0x82d860f0
	ctx.lr = 0x82CB1300;
	sub_82D860F0(ctx, base);
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// li r10,70
	ctx.r10.s64 = 70;
	// subf r9,r3,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r3.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r6,r10
	ctx.r4.u64 = ctx.r6.u64 & ctx.r10.u64;
	// bl 0x82d28130
	ctx.lr = 0x82CB1324;
	sub_82D28130(ctx, base);
loc_82CB1324:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r28,4
	ctx.r4.s64 = ctx.r28.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CB1338;
	sub_82D291E0(ctx, base);
loc_82CB1338:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,3636(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3636);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CB1354;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cb13e8
	if (cr6.eq) goto loc_82CB13E8;
	// addi r4,r28,56
	ctx.r4.s64 = ctx.r28.s64 + 56;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r29,r28,52
	ctx.r29.s64 = ctx.r28.s64 + 52;
	// bl 0x8292a3f8
	ctx.lr = 0x82CB1370;
	sub_8292A3F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,52(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// bl 0x82d96f18
	ctx.lr = 0x82CB1380;
	sub_82D96F18(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CB1394;
	sub_82D291E0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,3628(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3628);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CB13B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cb13e0
	if (cr6.eq) goto loc_82CB13E0;
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r5,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r5.u32);
	// beq cr6,0x82cb13d0
	if (cr6.eq) goto loc_82CB13D0;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82CB13D0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d329f8
	ctx.lr = 0x82CB13E0;
	sub_82D329F8(ctx, base);
loc_82CB13E0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82CB13E8;
	sub_8387E8E0(ctx, base);
loc_82CB13E8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB13F0"))) PPC_WEAK_FUNC(sub_82CB13F0);
PPC_FUNC_IMPL(__imp__sub_82CB13F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CB13F8;
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
	// beq cr6,0x82cb1498
	if (cr6.eq) goto loc_82CB1498;
	// addi r31,r3,52
	ctx.r31.s64 = ctx.r3.s64 + 52;
loc_82CB1410:
	// addi r4,r31,-52
	ctx.r4.s64 = ctx.r31.s64 + -52;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da8e68
	ctx.lr = 0x82CB141C;
	sub_82DA8E68(ctx, base);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r10,r9,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r10,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r10.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r8,r7,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r8.u32);
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// blt cr6,0x82cb1458
	if (cr6.lt) goto loc_82CB1458;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82cb145c
	goto loc_82CB145C;
loc_82CB1458:
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
loc_82CB145C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82CB1460:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cb1460
	if (!cr6.eq) goto loc_82CB1460;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CB1484;
	sub_8259CC28(ctx, base);
	// addi r31,r31,88
	ctx.r31.s64 = ctx.r31.s64 + 88;
	// addi r30,r30,88
	ctx.r30.s64 = ctx.r30.s64 + 88;
	// addi r10,r31,-52
	ctx.r10.s64 = ctx.r31.s64 + -52;
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, xer);
	// bne cr6,0x82cb1410
	if (!cr6.eq) goto loc_82CB1410;
loc_82CB1498:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB14A4"))) PPC_WEAK_FUNC(sub_82CB14A4);
PPC_FUNC_IMPL(__imp__sub_82CB14A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CB14A8"))) PPC_WEAK_FUNC(sub_82CB14A8);
PPC_FUNC_IMPL(__imp__sub_82CB14A8) {
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
	// bl 0x82da8d18
	ctx.lr = 0x82CB14C8;
	sub_82DA8D18(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// stb r11,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r11.u8);
	// bl 0x82cb0d30
	ctx.lr = 0x82CB14EC;
	sub_82CB0D30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb1018
	ctx.lr = 0x82CB14F8;
	sub_82CB1018(ctx, base);
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

__attribute__((alias("__imp__sub_82CB1514"))) PPC_WEAK_FUNC(sub_82CB1514);
PPC_FUNC_IMPL(__imp__sub_82CB1514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CB1518"))) PPC_WEAK_FUNC(sub_82CB1518);
PPC_FUNC_IMPL(__imp__sub_82CB1518) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CB1520;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82cb1588
	if (cr6.eq) goto loc_82CB1588;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82CB1544:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82cb1578
	if (cr6.eq) goto loc_82CB1578;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da8d18
	ctx.lr = 0x82CB1554;
	sub_82DA8D18(ctx, base);
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
	// stw r27,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// stb r29,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r29.u8);
	// bl 0x82cb0d30
	ctx.lr = 0x82CB156C;
	sub_82CB0D30(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb1018
	ctx.lr = 0x82CB1578;
	sub_82CB1018(ctx, base);
loc_82CB1578:
	// addi r30,r30,88
	ctx.r30.s64 = ctx.r30.s64 + 88;
	// addi r31,r31,88
	ctx.r31.s64 = ctx.r31.s64 + 88;
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, xer);
	// bne cr6,0x82cb1544
	if (!cr6.eq) goto loc_82CB1544;
loc_82CB1588:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB1594"))) PPC_WEAK_FUNC(sub_82CB1594);
PPC_FUNC_IMPL(__imp__sub_82CB1594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

