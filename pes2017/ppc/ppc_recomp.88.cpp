#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82916ED0"))) PPC_WEAK_FUNC(sub_82916ED0);
PPC_FUNC_IMPL(__imp__sub_82916ED0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82916ED8;
	__savegprlr_23(ctx, base);
	// stfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f29.u64);
	// stfd f30,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r1,152
	ctx.r9.s64 = ctx.r1.s64 + 152;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r11,20
	ctx.r11.s64 = 20;
	// li r8,255
	ctx.r8.s64 = 255;
	// stb r26,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r26.u8);
	// lfs f29,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f29.f64 = double(temp.f32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// stfs f29,132(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// stfs f29,136(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f29,140(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stw r26,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r26.u32);
	// stfs f29,172(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stb r26,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r26.u8);
	// stfs f29,176(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stb r26,209(r1)
	PPC_STORE_U8(ctx.r1.u32 + 209, ctx.r26.u8);
	// stfs f29,180(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfs f29,184(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// stfs f29,188(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f29,192(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f29,196(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stw r26,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r26.u32);
	// stw r26,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r26.u32);
	// stw r26,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r26.u32);
	// stw r26,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r26.u32);
	// sth r26,16(r9)
	PPC_STORE_U16(ctx.r9.u32 + 16, ctx.r26.u16);
	// stb r26,18(r9)
	PPC_STORE_U8(ctx.r9.u32 + 18, ctx.r26.u8);
	// bl 0x835f6d58
	ctx.lr = 0x82916F68;
	sub_835F6D58(ctx, base);
	// lbz r7,36(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 36);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82917344
	if (cr6.eq) goto loc_82917344;
	// stfs f29,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r24,r31,1408
	ctx.r24.s64 = ctx.r31.s64 + 1408;
	// stfs f29,92(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stfs f29,96(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82915bc8
	ctx.lr = 0x82916F94;
	sub_82915BC8(ctx, base);
	// clrlwi r23,r3,24
	ctx.r23.u64 = ctx.r3.u32 & 0xFF;
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// bne cr6,0x82916fc0
	if (!cr6.eq) goto loc_82916FC0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829163d0
	ctx.lr = 0x82916FBC;
	sub_829163D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82916FC0:
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x82916FD0;
	sub_82A0C760(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// bl 0x829156d0
	ctx.lr = 0x82916FE0;
	sub_829156D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r25,1
	ctx.r25.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82917090
	if (cr6.eq) goto loc_82917090;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1840(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1840);
	// bl 0x82a2b4e0
	ctx.lr = 0x82916FFC;
	sub_82A2B4E0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// beq cr6,0x82917090
	if (cr6.eq) goto loc_82917090;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82a3d138
	ctx.lr = 0x82917018;
	sub_82A3D138(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82917090
	if (cr6.eq) goto loc_82917090;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82a2e0e8
	ctx.lr = 0x82917034;
	sub_82A2E0E8(ctx, base);
	// bl 0x825ae5b0
	ctx.lr = 0x82917038;
	sub_825AE5B0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,-23844(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23844);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82917050
	if (!cr6.gt) goto loc_82917050;
	// li r5,14
	ctx.r5.s64 = 14;
	// b 0x8291707c
	goto loc_8291707C;
loc_82917050:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lfs f0,24504(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24504);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82917068
	if (!cr6.gt) goto loc_82917068;
	// li r5,13
	ctx.r5.s64 = 13;
	// b 0x8291707c
	goto loc_8291707C;
loc_82917068:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,-23848(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23848);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82917090
	if (!cr6.gt) goto loc_82917090;
	// li r5,12
	ctx.r5.s64 = 12;
loc_8291707C:
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lbz r6,1828(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1828);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,192(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// bl 0x82a160a0
	ctx.lr = 0x82917090;
	sub_82A160A0(ctx, base);
loc_82917090:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82916c60
	ctx.lr = 0x8291709C;
	sub_82916C60(ctx, base);
	// lfs f31,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f31,f29
	cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// bgt cr6,0x829170ac
	if (cr6.gt) goto loc_829170AC;
	// fmr f31,f29
	ctx.f31.f64 = ctx.f29.f64;
loc_829170AC:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// bne cr6,0x829170d0
	if (!cr6.eq) goto loc_829170D0;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x829170d0
	if (!cr6.eq) goto loc_829170D0;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// beq cr6,0x829170d4
	if (cr6.eq) goto loc_829170D4;
loc_829170D0:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_829170D4:
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82917190
	if (cr6.eq) goto loc_82917190;
	// lbz r11,2160(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8291718c
	if (!cr6.eq) goto loc_8291718C;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82a3cff8
	ctx.lr = 0x829170FC;
	sub_82A3CFF8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82917138
	if (cr6.eq) goto loc_82917138;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lis r10,3072
	ctx.r10.s64 = 201326592;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r9,r11,0,0,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// li r5,9
	ctx.r5.s64 = 9;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// lwz r3,192(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// beq cr6,0x82917134
	if (cr6.eq) goto loc_82917134;
	// li r5,8
	ctx.r5.s64 = 8;
loc_82917134:
	// bl 0x82a160a0
	ctx.lr = 0x82917138;
	sub_82A160A0(ctx, base);
loc_82917138:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82a3cfd0
	ctx.lr = 0x82917144;
	sub_82A3CFD0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82917164
	if (!cr6.eq) goto loc_82917164;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// rlwinm r10,r11,15,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82917168
	if (cr6.eq) goto loc_82917168;
loc_82917164:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82917168:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8291718c
	if (cr6.eq) goto loc_8291718C;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,192(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// bl 0x82a160a0
	ctx.lr = 0x8291718C;
	sub_82A160A0(ctx, base);
loc_8291718C:
	// stb r25,2160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2160, ctx.r25.u8);
loc_82917190:
	// bl 0x83740868
	ctx.lr = 0x82917194;
	sub_83740868(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// lfs f0,-23868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23868);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,26160(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26160);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f30,f0,f13
	ctx.f30.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// blt cr6,0x829171c4
	if (cr6.lt) goto loc_829171C4;
	// cmpwi cr6,r5,22
	cr6.compare<int32_t>(ctx.r5.s32, 22, xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// blt cr6,0x829171c8
	if (cr6.lt) goto loc_829171C8;
loc_829171C4:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_829171C8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829171e0
	if (cr6.eq) goto loc_829171E0;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,1840(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1840);
	// bl 0x82a3dca8
	ctx.lr = 0x829171E0;
	sub_82A3DCA8(ctx, base);
loc_829171E0:
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82a0c760
	ctx.lr = 0x829171EC;
	sub_82A0C760(ctx, base);
	// bl 0x83740868
	ctx.lr = 0x829171F0;
	sub_83740868(ctx, base);
	// bl 0x83740868
	ctx.lr = 0x829171F4;
	sub_83740868(ctx, base);
	// bl 0x83740868
	ctx.lr = 0x829171F8;
	sub_83740868(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,1836(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// bl 0x827e5b48
	ctx.lr = 0x82917204;
	sub_827E5B48(ctx, base);
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f0,f0
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fadds f10,f0,f31
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// lfs f7,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// fadds f11,f13,f8
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// fadds f0,f12,f7
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// fmadds f6,f12,f12,f9
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f5,f13,f13,f6
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fcmpu cr6,f5,f29
	cr6.compare(ctx.f5.f64, ctx.f29.f64);
	// bne cr6,0x82917240
	if (!cr6.eq) goto loc_82917240;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82917240:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// stb r11,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r11.u8);
	// bne cr6,0x829172b8
	if (!cr6.eq) goto loc_829172B8;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x829172b8
	if (!cr6.eq) goto loc_829172B8;
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// lfs f9,172(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,-23432(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23432);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-10804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10804);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f13,f13,f12,f9
	ctx.f13.f64 = double(float(-(ctx.f13.f64 * ctx.f12.f64 - ctx.f9.f64)));
	// fcmpu cr6,f13,f30
	cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// bgt cr6,0x8291727c
	if (cr6.gt) goto loc_8291727C;
	// fmr f13,f30
	ctx.f13.f64 = ctx.f30.f64;
loc_8291727C:
	// fneg f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f11,f13
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// ble cr6,0x82917290
	if (!cr6.gt) goto loc_82917290;
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// b 0x8291729c
	goto loc_8291729C;
loc_82917290:
	// fcmpu cr6,f11,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bge cr6,0x8291729c
	if (!cr6.lt) goto loc_8291729C;
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
loc_8291729C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x829172ac
	if (!cr6.gt) goto loc_829172AC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x829172b8
	goto loc_829172B8;
loc_829172AC:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x829172b8
	if (!cr6.lt) goto loc_829172B8;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_829172B8:
	// lwz r11,1836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// lfs f13,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1416(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1416);
	ctx.f12.f64 = double(temp.f32);
	// fadds f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// addi r11,r11,4328
	ctx.r11.s64 = ctx.r11.s64 + 4328;
	// fadds f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f9,0(r24)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r24.u32 + 0, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f8,1416(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1416, temp.u32);
	// stb r25,209(r1)
	PPC_STORE_U8(ctx.r1.u32 + 209, ctx.r25.u8);
	// stfs f11,188(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f10,192(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fadds f2,f7,f11
	ctx.f2.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// fadds f3,f6,f10
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// stfs f3,4(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// stfs f2,0(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f4,8(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f1,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f11,f11,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f1.f64));
	// lfs f13,22688(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 22688);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f12,f12
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f9,f13
	cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// bge cr6,0x82917344
	if (!cr6.lt) goto loc_82917344;
	// lwz r11,1836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// stfs f29,4328(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4328, temp.u32);
	// stfs f29,4332(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4332, temp.u32);
	// stfs f29,4336(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4336, temp.u32);
loc_82917344:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82917388
	if (cr6.eq) goto loc_82917388;
	// addi r11,r31,128
	ctx.r11.s64 = ctx.r31.s64 + 128;
	// addi r30,r11,1460
	ctx.r30.s64 = ctx.r11.s64 + 1460;
	// addi r3,r11,1544
	ctx.r3.s64 = ctx.r11.s64 + 1544;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825b7518
	ctx.lr = 0x82917364;
	sub_825B7518(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825b7518
	ctx.lr = 0x82917370;
	sub_825B7518(ctx, base);
	// stb r26,1753(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1753, ctx.r26.u8);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f30,-96(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82917388:
	// stb r26,1669(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1669, ctx.r26.u8);
	// stb r26,2160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2160, ctx.r26.u8);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f30,-96(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829173A4"))) PPC_WEAK_FUNC(sub_829173A4);
PPC_FUNC_IMPL(__imp__sub_829173A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829173A8"))) PPC_WEAK_FUNC(sub_829173A8);
PPC_FUNC_IMPL(__imp__sub_829173A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x829173B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r3,9788
	ctx.r29.s64 = ctx.r3.s64 + 9788;
	// subfic r27,r3,-9788
	xer.ca = ctx.r3.u32 <= 4294957508;
	ctx.r27.s64 = -9788 - ctx.r3.s64;
	// li r26,2
	ctx.r26.s64 = 2;
loc_829173C4:
	// add r30,r27,r29
	ctx.r30.u64 = ctx.r27.u64 + ctx.r29.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_829173CC:
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x8291a570
	ctx.lr = 0x829173D8;
	sub_8291A570(ctx, base);
	// addi r31,r31,164
	ctx.r31.s64 = ctx.r31.s64 + 164;
	// cmpwi cr6,r31,5248
	cr6.compare<int32_t>(ctx.r31.s32, 5248, xer);
	// blt cr6,0x829173cc
	if (cr6.lt) goto loc_829173CC;
	// addi r3,r29,-4540
	ctx.r3.s64 = ctx.r29.s64 + -4540;
	// bl 0x82917d70
	ctx.lr = 0x829173EC;
	sub_82917D70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8291b9a0
	ctx.lr = 0x829173F4;
	sub_8291B9A0(ctx, base);
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// addi r29,r29,9800
	ctx.r29.s64 = ctx.r29.s64 + 9800;
	// bne 0x829173c4
	if (!cr0.eq) goto loc_829173C4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82917408"))) PPC_WEAK_FUNC(sub_82917408);
PPC_FUNC_IMPL(__imp__sub_82917408) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r10,r4,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r4
	xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// li r7,32
	ctx.r7.s64 = 32;
	// subfe r11,r10,r8
	temp.u8 = (~ctx.r10.u32 + ctx.r8.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfc r10,r7,r5
	xer.ca = ctx.r5.u32 >= ctx.r7.u32;
	ctx.r10.s64 = ctx.r5.s64 - ctx.r7.s64;
	// and r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 & ctx.r4.u64;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// mulli r10,r8,9800
	ctx.r10.s64 = ctx.r8.s64 * 9800;
	// and r4,r7,r5
	ctx.r4.u64 = ctx.r7.u64 & ctx.r5.u64;
	// li r5,164
	ctx.r5.s64 = 164;
	// mulli r11,r4,164
	ctx.r11.s64 = ctx.r4.s64 * 164;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x831ce980
	sub_831CE980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8291744C"))) PPC_WEAK_FUNC(sub_8291744C);
PPC_FUNC_IMPL(__imp__sub_8291744C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82917450"))) PPC_WEAK_FUNC(sub_82917450);
PPC_FUNC_IMPL(__imp__sub_82917450) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r10,r4,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r4
	xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// li r7,32
	ctx.r7.s64 = 32;
	// subfe r6,r10,r8
	temp.u8 = (~ctx.r10.u32 + ctx.r8.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfc r11,r7,r5
	xer.ca = ctx.r5.u32 >= ctx.r7.u32;
	ctx.r11.s64 = ctx.r5.s64 - ctx.r7.s64;
	// and r9,r6,r4
	ctx.r9.u64 = ctx.r6.u64 & ctx.r4.u64;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// mulli r10,r9,9800
	ctx.r10.s64 = ctx.r9.s64 * 9800;
	// and r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 & ctx.r5.u64;
	// mulli r11,r7,164
	ctx.r11.s64 = ctx.r7.s64 * 164;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291748C"))) PPC_WEAK_FUNC(sub_8291748C);
PPC_FUNC_IMPL(__imp__sub_8291748C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82917490"))) PPC_WEAK_FUNC(sub_82917490);
PPC_FUNC_IMPL(__imp__sub_82917490) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,9800
	ctx.r11.s64 = ctx.r4.s64 * 9800;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r11,5248
	ctx.r3.s64 = ctx.r11.s64 + 5248;
	// b 0x825a23f8
	sub_825A23F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829174A4"))) PPC_WEAK_FUNC(sub_829174A4);
PPC_FUNC_IMPL(__imp__sub_829174A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829174A8"))) PPC_WEAK_FUNC(sub_829174A8);
PPC_FUNC_IMPL(__imp__sub_829174A8) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,9800
	ctx.r11.s64 = ctx.r4.s64 * 9800;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,5248
	ctx.r3.s64 = ctx.r11.s64 + 5248;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829174B8"))) PPC_WEAK_FUNC(sub_829174B8);
PPC_FUNC_IMPL(__imp__sub_829174B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mulli r11,r4,9800
	ctx.r11.s64 = ctx.r4.s64 * 9800;
	// li r9,10
	ctx.r9.s64 = 10;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// addi r10,r10,9787
	ctx.r10.s64 = ctx.r10.s64 + 9787;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_829174D0:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x829174d0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_829174D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829174E0"))) PPC_WEAK_FUNC(sub_829174E0);
PPC_FUNC_IMPL(__imp__sub_829174E0) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,9800
	ctx.r11.s64 = ctx.r4.s64 * 9800;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,9788
	ctx.r3.s64 = ctx.r11.s64 + 9788;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829174F0"))) PPC_WEAK_FUNC(sub_829174F0);
PPC_FUNC_IMPL(__imp__sub_829174F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x829174F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r31,r3,9788
	ctx.r31.s64 = ctx.r3.s64 + 9788;
loc_82917508:
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r6,r11,-22944
	ctx.r6.s64 = ctx.r11.s64 + -22944;
	// li r4,164
	ctx.r4.s64 = 164;
	// addi r3,r31,-9788
	ctx.r3.s64 = ctx.r31.s64 + -9788;
	// bl 0x823fca98
	ctx.lr = 0x82917520;
	sub_823FCA98(ctx, base);
	// addi r3,r31,-4540
	ctx.r3.s64 = ctx.r31.s64 + -4540;
	// bl 0x82918eb8
	ctx.lr = 0x82917528;
	sub_82918EB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8291b9a0
	ctx.lr = 0x82917530;
	sub_8291B9A0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,9800
	ctx.r31.s64 = ctx.r31.s64 + 9800;
	// bge 0x82917508
	if (!cr0.lt) goto loc_82917508;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829173a8
	ctx.lr = 0x82917544;
	sub_829173A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82917550"))) PPC_WEAK_FUNC(sub_82917550);
PPC_FUNC_IMPL(__imp__sub_82917550) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,3
	cr6.compare<int32_t>(ctx.r6.s32, 3, xer);
	// bne cr6,0x82917568
	if (!cr6.eq) goto loc_82917568;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82917568:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829175AC"))) PPC_WEAK_FUNC(sub_829175AC);
PPC_FUNC_IMPL(__imp__sub_829175AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829175B0"))) PPC_WEAK_FUNC(sub_829175B0);
PPC_FUNC_IMPL(__imp__sub_829175B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,12
	ctx.r11.s64 = 12;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,3
	cr6.compare<int32_t>(ctx.r6.s32, 3, xer);
	// bne cr6,0x829175cc
	if (!cr6.eq) goto loc_829175CC;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_829175CC:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82917614
	if (cr6.lt) goto loc_82917614;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bge cr6,0x82917614
	if (!cr6.lt) goto loc_82917614;
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bge cr6,0x82917614
	if (!cr6.lt) goto loc_82917614;
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// bge cr6,0x82917614
	if (!cr6.lt) goto loc_82917614;
	// mulli r11,r10,11
	ctx.r11.s64 = ctx.r10.s64 * 11;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bgtlr cr6
	if (cr6.gt) return;
loc_82917614:
	// lis r12,-32111
	ctx.r12.s64 = -2104426496;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,30252
	ctx.r12.s64 = ctx.r12.s64 + 30252;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82917660;
	case 1:
		goto loc_82917668;
	case 2:
		goto loc_82917670;
	case 3:
		goto loc_82917670;
	case 4:
		goto loc_82917678;
	case 5:
		goto loc_82917680;
	case 6:
		goto loc_82917688;
	case 7:
		goto loc_82917688;
	case 8:
		goto loc_82917690;
	case 9:
		goto loc_82917698;
	case 10:
		goto loc_82917698;
	case 11:
		goto loc_829176A0;
	case 12:
		goto loc_829176A8;
	default:
		return;
	}
	// lwz r20,30304(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 30304);
	// lwz r20,30312(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 30312);
	// lwz r20,30320(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 30320);
	// lwz r20,30320(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 30320);
	// lwz r20,30328(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 30328);
	// lwz r20,30336(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 30336);
	// lwz r20,30344(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 30344);
	// lwz r20,30344(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 30344);
	// lwz r20,30352(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 30352);
	// lwz r20,30360(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 30360);
	// lwz r20,30360(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 30360);
	// lwz r20,30368(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 30368);
	// lwz r20,30376(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 30376);
loc_82917660:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82917668:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82917670:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82917678:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82917680:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82917688:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_82917690:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_82917698:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_829176A0:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_829176A8:
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829176B0"))) PPC_WEAK_FUNC(sub_829176B0);
PPC_FUNC_IMPL(__imp__sub_829176B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r8,3
	cr6.compare<int32_t>(ctx.r8.s32, 3, xer);
	// bne cr6,0x829176bc
	if (!cr6.eq) goto loc_829176BC;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_829176BC:
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r8,3
	cr6.compare<int32_t>(ctx.r8.s32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmplwi cr6,r4,10
	cr6.compare<uint32_t>(ctx.r4.u32, 10, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r11,104
	cr6.compare<int32_t>(ctx.r11.s32, 104, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// cmpwi cr6,r7,3
	cr6.compare<int32_t>(ctx.r7.s32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r10,r11,218
	ctx.r10.s64 = ctx.r11.s64 + 218;
	// addi r9,r11,308
	ctx.r9.s64 = ctx.r11.s64 + 308;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r5,r8,r3
	PPC_STORE_U16(ctx.r8.u32 + ctx.r3.u32, ctx.r5.u16);
	// sthx r6,r7,r3
	PPC_STORE_U16(ctx.r7.u32 + ctx.r3.u32, ctx.r6.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291773C"))) PPC_WEAK_FUNC(sub_8291773C);
PPC_FUNC_IMPL(__imp__sub_8291773C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82917740"))) PPC_WEAK_FUNC(sub_82917740);
PPC_FUNC_IMPL(__imp__sub_82917740) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r6,3
	cr6.compare<int32_t>(ctx.r6.s32, 3, xer);
	// bne cr6,0x8291774c
	if (!cr6.eq) goto loc_8291774C;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8291774C:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// blt cr6,0x82917798
	if (cr6.lt) goto loc_82917798;
	// cmpwi cr6,r6,3
	cr6.compare<int32_t>(ctx.r6.s32, 3, xer);
	// bge cr6,0x82917798
	if (!cr6.lt) goto loc_82917798;
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bge cr6,0x82917798
	if (!cr6.lt) goto loc_82917798;
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// bge cr6,0x82917798
	if (!cr6.lt) goto loc_82917798;
	// mulli r11,r6,11
	ctx.r11.s64 = ctx.r6.s64 * 11;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,796
	ctx.r3.s64 = ctx.r11.s64 + 796;
	// blr 
	return;
loc_82917798:
	// addi r3,r3,796
	ctx.r3.s64 = ctx.r3.s64 + 796;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829177A0"))) PPC_WEAK_FUNC(sub_829177A0);
PPC_FUNC_IMPL(__imp__sub_829177A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r6,3
	cr6.compare<int32_t>(ctx.r6.s32, 3, xer);
	// bne cr6,0x829177b8
	if (!cr6.eq) goto loc_829177B8;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_829177B8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmplwi cr6,r4,10
	cr6.compare<uint32_t>(ctx.r4.u32, 10, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r10,r11,218
	ctx.r10.s64 = ctx.r11.s64 + 218;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82917804"))) PPC_WEAK_FUNC(sub_82917804);
PPC_FUNC_IMPL(__imp__sub_82917804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82917808"))) PPC_WEAK_FUNC(sub_82917808);
PPC_FUNC_IMPL(__imp__sub_82917808) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r6,3
	cr6.compare<int32_t>(ctx.r6.s32, 3, xer);
	// bne cr6,0x82917820
	if (!cr6.eq) goto loc_82917820;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82917820:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmplwi cr6,r4,10
	cr6.compare<uint32_t>(ctx.r4.u32, 10, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r10,r11,308
	ctx.r10.s64 = ctx.r11.s64 + 308;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291786C"))) PPC_WEAK_FUNC(sub_8291786C);
PPC_FUNC_IMPL(__imp__sub_8291786C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82917870"))) PPC_WEAK_FUNC(sub_82917870);
PPC_FUNC_IMPL(__imp__sub_82917870) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r7,3
	cr6.compare<int32_t>(ctx.r7.s32, 3, xer);
	// bne cr6,0x8291787c
	if (!cr6.eq) goto loc_8291787C;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8291787C:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r7,3
	cr6.compare<int32_t>(ctx.r7.s32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r5,13
	cr6.compare<int32_t>(ctx.r5.s32, 13, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmpwi cr6,r6,3
	cr6.compare<int32_t>(ctx.r6.s32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r7,11
	ctx.r11.s64 = ctx.r7.s64 * 11;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r11,r11,562
	ctx.r11.s64 = ctx.r11.s64 + 562;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829178D0"))) PPC_WEAK_FUNC(sub_829178D0);
PPC_FUNC_IMPL(__imp__sub_829178D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r7,3
	cr6.compare<int32_t>(ctx.r7.s32, 3, xer);
	// bne cr6,0x829178dc
	if (!cr6.eq) goto loc_829178DC;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_829178DC:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r7,3
	cr6.compare<int32_t>(ctx.r7.s32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmpwi cr6,r6,3
	cr6.compare<int32_t>(ctx.r6.s32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r7,11
	ctx.r11.s64 = ctx.r7.s64 * 11;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,2644
	ctx.r10.s64 = ctx.r11.s64 + 2644;
	// stfs f0,2644(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2644, temp.u32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,2648(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2648, temp.u32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,2652(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2652, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82917940"))) PPC_WEAK_FUNC(sub_82917940);
PPC_FUNC_IMPL(__imp__sub_82917940) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,3
	cr6.compare<int32_t>(ctx.r6.s32, 3, xer);
	// bne cr6,0x82917958
	if (!cr6.eq) goto loc_82917958;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82917958:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r11,562
	ctx.r11.s64 = ctx.r11.s64 + 562;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291799C"))) PPC_WEAK_FUNC(sub_8291799C);
PPC_FUNC_IMPL(__imp__sub_8291799C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829179A0"))) PPC_WEAK_FUNC(sub_829179A0);
PPC_FUNC_IMPL(__imp__sub_829179A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x829179b8
	if (cr6.lt) goto loc_829179B8;
	// cmpwi cr6,r5,32
	cr6.compare<int32_t>(ctx.r5.s32, 32, xer);
	// blt cr6,0x829179c0
	if (cr6.lt) goto loc_829179C0;
loc_829179B8:
	// cmpwi cr6,r5,255
	cr6.compare<int32_t>(ctx.r5.s32, 255, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_829179C0:
	// addi r11,r4,1124
	ctx.r11.s64 = ctx.r4.s64 + 1124;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829179D0"))) PPC_WEAK_FUNC(sub_829179D0);
PPC_FUNC_IMPL(__imp__sub_829179D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,255
	ctx.r3.s64 = 255;
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r10,r4,1124
	ctx.r10.s64 = ctx.r4.s64 + 1124;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829179F0"))) PPC_WEAK_FUNC(sub_829179F0);
PPC_FUNC_IMPL(__imp__sub_829179F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// stw r4,4508(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4508, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82917A08"))) PPC_WEAK_FUNC(sub_82917A08);
PPC_FUNC_IMPL(__imp__sub_82917A08) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4508(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4508);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82917A10"))) PPC_WEAK_FUNC(sub_82917A10);
PPC_FUNC_IMPL(__imp__sub_82917A10) {
	PPC_FUNC_PROLOGUE();
	// stb r4,4512(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4512, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82917A18"))) PPC_WEAK_FUNC(sub_82917A18);
PPC_FUNC_IMPL(__imp__sub_82917A18) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,4512(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4512);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82917A20"))) PPC_WEAK_FUNC(sub_82917A20);
PPC_FUNC_IMPL(__imp__sub_82917A20) {
	PPC_FUNC_PROLOGUE();
	// stb r4,4513(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4513, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82917A28"))) PPC_WEAK_FUNC(sub_82917A28);
PPC_FUNC_IMPL(__imp__sub_82917A28) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,4513(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4513);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82917A30"))) PPC_WEAK_FUNC(sub_82917A30);
PPC_FUNC_IMPL(__imp__sub_82917A30) {
	PPC_FUNC_PROLOGUE();
	// stb r4,4514(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4514, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82917A38"))) PPC_WEAK_FUNC(sub_82917A38);
PPC_FUNC_IMPL(__imp__sub_82917A38) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,4514(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4514);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82917A40"))) PPC_WEAK_FUNC(sub_82917A40);
PPC_FUNC_IMPL(__imp__sub_82917A40) {
	PPC_FUNC_PROLOGUE();
	// stb r4,4516(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4516, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82917A48"))) PPC_WEAK_FUNC(sub_82917A48);
PPC_FUNC_IMPL(__imp__sub_82917A48) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,4516(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4516);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82917A50"))) PPC_WEAK_FUNC(sub_82917A50);
PPC_FUNC_IMPL(__imp__sub_82917A50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// add r11,r5,r3
	ctx.r11.u64 = ctx.r5.u64 + ctx.r3.u64;
	// stb r4,4517(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4517, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82917A64"))) PPC_WEAK_FUNC(sub_82917A64);
PPC_FUNC_IMPL(__imp__sub_82917A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82917A68"))) PPC_WEAK_FUNC(sub_82917A68);
PPC_FUNC_IMPL(__imp__sub_82917A68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// blt cr6,0x82917a78
	if (cr6.lt) goto loc_82917A78;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82917A78:
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r3,4517(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4517);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82917A84"))) PPC_WEAK_FUNC(sub_82917A84);
PPC_FUNC_IMPL(__imp__sub_82917A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82917A88"))) PPC_WEAK_FUNC(sub_82917A88);
PPC_FUNC_IMPL(__imp__sub_82917A88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x82917a9c
	if (cr6.lt) goto loc_82917A9C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82917A9C:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r3,4517(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4517);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82917AA8"))) PPC_WEAK_FUNC(sub_82917AA8);
PPC_FUNC_IMPL(__imp__sub_82917AA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r6,3
	cr6.compare<int32_t>(ctx.r6.s32, 3, xer);
	// bne cr6,0x82917ab4
	if (!cr6.eq) goto loc_82917AB4;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82917AB4:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r6,3
	cr6.compare<int32_t>(ctx.r6.s32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x82917adc
	if (cr6.lt) goto loc_82917ADC;
	// cmpwi cr6,r5,11
	cr6.compare<int32_t>(ctx.r5.s32, 11, xer);
	// blt cr6,0x82917ae4
	if (cr6.lt) goto loc_82917AE4;
loc_82917ADC:
	// cmpwi cr6,r5,255
	cr6.compare<int32_t>(ctx.r5.s32, 255, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82917AE4:
	// mulli r11,r6,11
	ctx.r11.s64 = ctx.r6.s64 * 11;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r11,r11,529
	ctx.r11.s64 = ctx.r11.s64 + 529;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82917AFC"))) PPC_WEAK_FUNC(sub_82917AFC);
PPC_FUNC_IMPL(__imp__sub_82917AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82917B00"))) PPC_WEAK_FUNC(sub_82917B00);
PPC_FUNC_IMPL(__imp__sub_82917B00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,255
	ctx.r3.s64 = 255;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// bne cr6,0x82917b18
	if (!cr6.eq) goto loc_82917B18;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82917B18:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r11,r11,529
	ctx.r11.s64 = ctx.r11.s64 + 529;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82917B48"))) PPC_WEAK_FUNC(sub_82917B48);
PPC_FUNC_IMPL(__imp__sub_82917B48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// bne cr6,0x82917b54
	if (!cr6.eq) goto loc_82917B54;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82917B54:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x82917b84
	if (cr6.lt) goto loc_82917B84;
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// bge cr6,0x82917b84
	if (!cr6.lt) goto loc_82917B84;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bge cr6,0x82917b84
	if (!cr6.lt) goto loc_82917B84;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mulli r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 * 52;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,3844
	ctx.r3.s64 = ctx.r11.s64 + 3844;
	// blr 
	return;
loc_82917B84:
	// addi r3,r3,3844
	ctx.r3.s64 = ctx.r3.s64 + 3844;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82917B8C"))) PPC_WEAK_FUNC(sub_82917B8C);
PPC_FUNC_IMPL(__imp__sub_82917B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82917B90"))) PPC_WEAK_FUNC(sub_82917B90);
PPC_FUNC_IMPL(__imp__sub_82917B90) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4468(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4468);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82917B98"))) PPC_WEAK_FUNC(sub_82917B98);
PPC_FUNC_IMPL(__imp__sub_82917B98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,255
	ctx.r3.s64 = 255;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r4,6
	cr6.compare<int32_t>(ctx.r4.s32, 6, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r10,r4,1118
	ctx.r10.s64 = ctx.r4.s64 + 1118;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82917BC0"))) PPC_WEAK_FUNC(sub_82917BC0);
PPC_FUNC_IMPL(__imp__sub_82917BC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// bne cr6,0x82917bd8
	if (!cr6.eq) goto loc_82917BD8;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82917BD8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r4,5
	cr6.compare<int32_t>(ctx.r4.s32, 5, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82917C10"))) PPC_WEAK_FUNC(sub_82917C10);
PPC_FUNC_IMPL(__imp__sub_82917C10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// bne cr6,0x82917c28
	if (!cr6.eq) goto loc_82917C28;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82917C28:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r4,7
	cr6.compare<int32_t>(ctx.r4.s32, 7, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r3,19(r8)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + 19);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82917C60"))) PPC_WEAK_FUNC(sub_82917C60);
PPC_FUNC_IMPL(__imp__sub_82917C60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82917c70
	if (cr6.lt) goto loc_82917C70;
	// cmpwi cr6,r4,32
	cr6.compare<int32_t>(ctx.r4.s32, 32, xer);
	// blt cr6,0x82917c78
	if (cr6.lt) goto loc_82917C78;
loc_82917C70:
	// cmpwi cr6,r4,255
	cr6.compare<int32_t>(ctx.r4.s32, 255, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82917C78:
	// stw r4,4468(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4468, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82917C80"))) PPC_WEAK_FUNC(sub_82917C80);
PPC_FUNC_IMPL(__imp__sub_82917C80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r5,6
	cr6.compare<int32_t>(ctx.r5.s32, 6, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82917ca0
	if (cr6.lt) goto loc_82917CA0;
	// cmpwi cr6,r4,32
	cr6.compare<int32_t>(ctx.r4.s32, 32, xer);
	// blt cr6,0x82917ca8
	if (cr6.lt) goto loc_82917CA8;
loc_82917CA0:
	// cmpwi cr6,r4,255
	cr6.compare<int32_t>(ctx.r4.s32, 255, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82917CA8:
	// addi r11,r5,1118
	ctx.r11.s64 = ctx.r5.s64 + 1118;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82917CB8"))) PPC_WEAK_FUNC(sub_82917CB8);
PPC_FUNC_IMPL(__imp__sub_82917CB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r6,3
	cr6.compare<int32_t>(ctx.r6.s32, 3, xer);
	// bne cr6,0x82917cc4
	if (!cr6.eq) goto loc_82917CC4;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82917CC4:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r6,3
	cr6.compare<int32_t>(ctx.r6.s32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r4,5
	cr6.compare<int32_t>(ctx.r4.s32, 5, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r5,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82917CFC"))) PPC_WEAK_FUNC(sub_82917CFC);
PPC_FUNC_IMPL(__imp__sub_82917CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82917D00"))) PPC_WEAK_FUNC(sub_82917D00);
PPC_FUNC_IMPL(__imp__sub_82917D00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,3
	cr6.compare<int32_t>(ctx.r6.s32, 3, xer);
	// bne cr6,0x82917d10
	if (!cr6.eq) goto loc_82917D10;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82917D10:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r6,3
	cr6.compare<int32_t>(ctx.r6.s32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r4,7
	cr6.compare<int32_t>(ctx.r4.s32, 7, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x82917d40
	if (!cr6.gt) goto loc_82917D40;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82917D40:
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r10,19(r9)
	PPC_STORE_U8(ctx.r9.u32 + 19, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82917D58"))) PPC_WEAK_FUNC(sub_82917D58);
PPC_FUNC_IMPL(__imp__sub_82917D58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82917D70"))) PPC_WEAK_FUNC(sub_82917D70);
PPC_FUNC_IMPL(__imp__sub_82917D70) {
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
	ctx.lr = 0x82917D78;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// li r25,5
	ctx.r25.s64 = 5;
	// lwz r11,-23112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23112);
	// li r24,2
	ctx.r24.s64 = 2;
	// stw r11,4520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4520, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stb r28,4524(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4524, ctx.r28.u8);
	// stb r28,4525(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4525, ctx.r28.u8);
	// li r26,255
	ctx.r26.s64 = 255;
	// li r23,10
	ctx.r23.s64 = 10;
loc_82917DBC:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,3
	cr6.compare<int32_t>(ctx.r27.s32, 3, xer);
	// bne cr6,0x82917dcc
	if (!cr6.eq) goto loc_82917DCC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82917DCC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82917de8
	if (cr6.lt) goto loc_82917DE8;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x82917de8
	if (!cr6.lt) goto loc_82917DE8;
	// addi r11,r11,958
	ctx.r11.s64 = ctx.r11.s64 + 958;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r28.u32);
loc_82917DE8:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,3
	cr6.compare<int32_t>(ctx.r27.s32, 3, xer);
	// bne cr6,0x82917df8
	if (!cr6.eq) goto loc_82917DF8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82917DF8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82917e18
	if (cr6.lt) goto loc_82917E18;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x82917e18
	if (!cr6.lt) goto loc_82917E18;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r25,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r25.u8);
loc_82917E18:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,3
	cr6.compare<int32_t>(ctx.r27.s32, 3, xer);
	// bne cr6,0x82917e28
	if (!cr6.eq) goto loc_82917E28;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82917E28:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82917e48
	if (cr6.lt) goto loc_82917E48;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x82917e48
	if (!cr6.lt) goto loc_82917E48;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stbx r24,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r24.u8);
loc_82917E48:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,3
	cr6.compare<int32_t>(ctx.r27.s32, 3, xer);
	// bne cr6,0x82917e58
	if (!cr6.eq) goto loc_82917E58;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82917E58:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82917e78
	if (cr6.lt) goto loc_82917E78;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x82917e78
	if (!cr6.lt) goto loc_82917E78;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r25,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r25.u8);
loc_82917E78:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,3
	cr6.compare<int32_t>(ctx.r27.s32, 3, xer);
	// bne cr6,0x82917e88
	if (!cr6.eq) goto loc_82917E88;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82917E88:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82917ea8
	if (cr6.lt) goto loc_82917EA8;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x82917ea8
	if (!cr6.lt) goto loc_82917EA8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r25,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r25.u8);
loc_82917EA8:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,3
	cr6.compare<int32_t>(ctx.r27.s32, 3, xer);
	// bne cr6,0x82917eb8
	if (!cr6.eq) goto loc_82917EB8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82917EB8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82917ed8
	if (cr6.lt) goto loc_82917ED8;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x82917ed8
	if (!cr6.lt) goto loc_82917ED8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r24,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r24.u8);
loc_82917ED8:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,3
	cr6.compare<int32_t>(ctx.r27.s32, 3, xer);
	// bne cr6,0x82917ee8
	if (!cr6.eq) goto loc_82917EE8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82917EE8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82917f08
	if (cr6.lt) goto loc_82917F08;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x82917f08
	if (!cr6.lt) goto loc_82917F08;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r28,19(r9)
	PPC_STORE_U8(ctx.r9.u32 + 19, ctx.r28.u8);
loc_82917F08:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,3
	cr6.compare<int32_t>(ctx.r27.s32, 3, xer);
	// bne cr6,0x82917f18
	if (!cr6.eq) goto loc_82917F18;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82917F18:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82917f38
	if (cr6.lt) goto loc_82917F38;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x82917f38
	if (!cr6.lt) goto loc_82917F38;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r28,20(r9)
	PPC_STORE_U8(ctx.r9.u32 + 20, ctx.r28.u8);
loc_82917F38:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,3
	cr6.compare<int32_t>(ctx.r27.s32, 3, xer);
	// bne cr6,0x82917f48
	if (!cr6.eq) goto loc_82917F48;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82917F48:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82917f68
	if (cr6.lt) goto loc_82917F68;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x82917f68
	if (!cr6.lt) goto loc_82917F68;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stbx r28,r9,r31
	PPC_STORE_U8(ctx.r9.u32 + ctx.r31.u32, ctx.r28.u8);
loc_82917F68:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,3
	cr6.compare<int32_t>(ctx.r27.s32, 3, xer);
	// bne cr6,0x82917f78
	if (!cr6.eq) goto loc_82917F78;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82917F78:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82917f98
	if (cr6.lt) goto loc_82917F98;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x82917f98
	if (!cr6.lt) goto loc_82917F98;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r28,22(r9)
	PPC_STORE_U8(ctx.r9.u32 + 22, ctx.r28.u8);
loc_82917F98:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,3
	cr6.compare<int32_t>(ctx.r27.s32, 3, xer);
	// bne cr6,0x82917fa8
	if (!cr6.eq) goto loc_82917FA8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82917FA8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82917fc8
	if (cr6.lt) goto loc_82917FC8;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x82917fc8
	if (!cr6.lt) goto loc_82917FC8;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r28,23(r9)
	PPC_STORE_U8(ctx.r9.u32 + 23, ctx.r28.u8);
loc_82917FC8:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,3
	cr6.compare<int32_t>(ctx.r27.s32, 3, xer);
	// bne cr6,0x82917fd8
	if (!cr6.eq) goto loc_82917FD8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82917FD8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82917ff8
	if (cr6.lt) goto loc_82917FF8;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x82917ff8
	if (!cr6.lt) goto loc_82917FF8;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r28,24(r9)
	PPC_STORE_U8(ctx.r9.u32 + 24, ctx.r28.u8);
loc_82917FF8:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,3
	cr6.compare<int32_t>(ctx.r27.s32, 3, xer);
	// bne cr6,0x82918008
	if (!cr6.eq) goto loc_82918008;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82918008:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82918028
	if (cr6.lt) goto loc_82918028;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x82918028
	if (!cr6.lt) goto loc_82918028;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r28,25(r9)
	PPC_STORE_U8(ctx.r9.u32 + 25, ctx.r28.u8);
loc_82918028:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
loc_82918034:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r28,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r28.u8);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// blt cr6,0x82918034
	if (cr6.lt) goto loc_82918034;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// stb r28,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r28.u8);
	// li r29,4
	ctx.r29.s64 = 4;
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
loc_82918064:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,3
	cr6.compare<int32_t>(ctx.r27.s32, 3, xer);
	// bne cr6,0x82918074
	if (!cr6.eq) goto loc_82918074;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82918074:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x829180ac
	if (cr6.lt) goto loc_829180AC;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x829180ac
	if (!cr6.lt) goto loc_829180AC;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, xer);
	// bge cr6,0x829180ac
	if (!cr6.lt) goto loc_829180AC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r5,52
	ctx.r5.s64 = 52;
	// mulli r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 * 52;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,3844
	ctx.r3.s64 = ctx.r11.s64 + 3844;
	// bl 0x831ce980
	ctx.lr = 0x829180AC;
	sub_831CE980(ctx, base);
loc_829180AC:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bne 0x82918064
	if (!cr0.eq) goto loc_82918064;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
loc_829180BC:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,3
	cr6.compare<int32_t>(ctx.r27.s32, 3, xer);
	// bne cr6,0x829180cc
	if (!cr6.eq) goto loc_829180CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_829180CC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x829180f8
	if (cr6.lt) goto loc_829180F8;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x829180f8
	if (!cr6.lt) goto loc_829180F8;
	// cmpwi cr6,r8,11
	cr6.compare<int32_t>(ctx.r8.s32, 11, xer);
	// bge cr6,0x829180f8
	if (!cr6.lt) goto loc_829180F8;
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,529
	ctx.r11.s64 = ctx.r11.s64 + 529;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r26,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r26.u32);
loc_829180F8:
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82918104:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,3
	cr6.compare<int32_t>(ctx.r27.s32, 3, xer);
	// bne cr6,0x82918114
	if (!cr6.eq) goto loc_82918114;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82918114:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82918154
	if (cr6.lt) goto loc_82918154;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x82918154
	if (!cr6.lt) goto loc_82918154;
	// cmpwi cr6,r8,11
	cr6.compare<int32_t>(ctx.r8.s32, 11, xer);
	// bge cr6,0x82918154
	if (!cr6.lt) goto loc_82918154;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bge cr6,0x82918154
	if (!cr6.lt) goto loc_82918154;
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r28.u32);
loc_82918154:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,3
	cr6.compare<int32_t>(ctx.r27.s32, 3, xer);
	// bne cr6,0x82918164
	if (!cr6.eq) goto loc_82918164;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82918164:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x829181a4
	if (cr6.lt) goto loc_829181A4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x829181a4
	if (!cr6.lt) goto loc_829181A4;
	// cmpwi cr6,r8,11
	cr6.compare<int32_t>(ctx.r8.s32, 11, xer);
	// bge cr6,0x829181a4
	if (!cr6.lt) goto loc_829181A4;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bge cr6,0x829181a4
	if (!cr6.lt) goto loc_829181A4;
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,562
	ctx.r11.s64 = ctx.r11.s64 + 562;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r28.u32);
loc_829181A4:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,3
	cr6.compare<int32_t>(ctx.r27.s32, 3, xer);
	// bne cr6,0x829181b4
	if (!cr6.eq) goto loc_829181B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_829181B4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82918208
	if (cr6.lt) goto loc_82918208;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x82918208
	if (!cr6.lt) goto loc_82918208;
	// cmpwi cr6,r8,11
	cr6.compare<int32_t>(ctx.r8.s32, 11, xer);
	// bge cr6,0x82918208
	if (!cr6.lt) goto loc_82918208;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bge cr6,0x82918208
	if (!cr6.lt) goto loc_82918208;
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r9,r11,796
	ctx.r9.s64 = ctx.r11.s64 + 796;
	// stfs f31,796(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 796, temp.u32);
	// stfs f31,800(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 800, temp.u32);
	// stfs f31,804(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 804, temp.u32);
loc_82918208:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,3
	cr6.compare<int32_t>(ctx.r27.s32, 3, xer);
	// bne cr6,0x82918218
	if (!cr6.eq) goto loc_82918218;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82918218:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8291826c
	if (cr6.lt) goto loc_8291826C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x8291826c
	if (!cr6.lt) goto loc_8291826C;
	// cmpwi cr6,r8,11
	cr6.compare<int32_t>(ctx.r8.s32, 11, xer);
	// bge cr6,0x8291826c
	if (!cr6.lt) goto loc_8291826C;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bge cr6,0x8291826c
	if (!cr6.lt) goto loc_8291826C;
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r9,r11,2644
	ctx.r9.s64 = ctx.r11.s64 + 2644;
	// stfs f31,2644(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2644, temp.u32);
	// stfs f31,2648(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2648, temp.u32);
	// stfs f31,2652(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2652, temp.u32);
loc_8291826C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82918104
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82918104;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r8,11
	cr6.compare<int32_t>(ctx.r8.s32, 11, xer);
	// blt cr6,0x829180bc
	if (cr6.lt) goto loc_829180BC;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// mtctr r23
	ctr.u64 = ctx.r23.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
loc_8291828C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,3
	cr6.compare<int32_t>(ctx.r27.s32, 3, xer);
	// bne cr6,0x8291829c
	if (!cr6.eq) goto loc_8291829C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8291829C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x829182e4
	if (cr6.lt) goto loc_829182E4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x829182e4
	if (!cr6.lt) goto loc_829182E4;
	// cmplwi cr6,r9,10
	cr6.compare<uint32_t>(ctx.r9.u32, 10, xer);
	// bge cr6,0x829182e4
	if (!cr6.lt) goto loc_829182E4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,218
	ctx.r10.s64 = ctx.r11.s64 + 218;
	// addi r8,r11,308
	ctx.r8.s64 = ctx.r11.s64 + 308;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r7,r31
	PPC_STORE_U16(ctx.r7.u32 + ctx.r31.u32, ctx.r28.u16);
	// sthx r28,r6,r31
	PPC_STORE_U16(ctx.r6.u32 + ctx.r31.u32, ctx.r28.u16);
loc_829182E4:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,3
	cr6.compare<int32_t>(ctx.r27.s32, 3, xer);
	// bne cr6,0x829182f4
	if (!cr6.eq) goto loc_829182F4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_829182F4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82918340
	if (cr6.lt) goto loc_82918340;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x82918340
	if (!cr6.lt) goto loc_82918340;
	// cmplwi cr6,r9,10
	cr6.compare<uint32_t>(ctx.r9.u32, 10, xer);
	// bge cr6,0x82918340
	if (!cr6.lt) goto loc_82918340;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r11,218
	ctx.r10.s64 = ctx.r11.s64 + 218;
	// addi r8,r11,308
	ctx.r8.s64 = ctx.r11.s64 + 308;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r7,r31
	PPC_STORE_U16(ctx.r7.u32 + ctx.r31.u32, ctx.r28.u16);
	// sthx r28,r6,r31
	PPC_STORE_U16(ctx.r6.u32 + ctx.r31.u32, ctx.r28.u16);
loc_82918340:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,3
	cr6.compare<int32_t>(ctx.r27.s32, 3, xer);
	// bne cr6,0x82918350
	if (!cr6.eq) goto loc_82918350;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82918350:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8291839c
	if (cr6.lt) goto loc_8291839C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x8291839c
	if (!cr6.lt) goto loc_8291839C;
	// cmplwi cr6,r9,10
	cr6.compare<uint32_t>(ctx.r9.u32, 10, xer);
	// bge cr6,0x8291839c
	if (!cr6.lt) goto loc_8291839C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r10,r11,218
	ctx.r10.s64 = ctx.r11.s64 + 218;
	// addi r8,r11,308
	ctx.r8.s64 = ctx.r11.s64 + 308;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r7,r31
	PPC_STORE_U16(ctx.r7.u32 + ctx.r31.u32, ctx.r28.u16);
	// sthx r28,r6,r31
	PPC_STORE_U16(ctx.r6.u32 + ctx.r31.u32, ctx.r28.u16);
loc_8291839C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x8291828c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8291828C;
	// cmplwi cr6,r27,3
	cr6.compare<uint32_t>(ctx.r27.u32, 3, xer);
	// bge cr6,0x829183b4
	if (!cr6.lt) goto loc_829183B4;
	// add r11,r27,r31
	ctx.r11.u64 = ctx.r27.u64 + ctx.r31.u64;
	// stb r28,4517(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4517, ctx.r28.u8);
loc_829183B4:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,3
	cr6.compare<int32_t>(ctx.r27.s32, 3, xer);
	// blt cr6,0x82917dbc
	if (cr6.lt) goto loc_82917DBC;
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r23,4468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4468, ctx.r23.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r10,r31,4472
	ctx.r10.s64 = ctx.r31.s64 + 4472;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_829183D4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x829183e8
	if (cr6.lt) goto loc_829183E8;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bge cr6,0x829183e8
	if (!cr6.lt) goto loc_829183E8;
	// stw r23,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r23.u32);
loc_829183E8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x829183d4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_829183D4;
	// stw r26,4496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4496, ctx.r26.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r26,4500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4500, ctx.r26.u32);
	// add r10,r28,r31
	ctx.r10.u64 = ctx.r28.u64 + ctx.r31.u64;
	// stw r26,4504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4504, ctx.r26.u32);
	// stw r28,4508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4508, ctx.r28.u32);
	// stb r28,4512(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4512, ctx.r28.u8);
	// stb r28,4513(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4513, ctx.r28.u8);
	// stb r28,4514(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4514, ctx.r28.u8);
	// stb r28,4515(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4515, ctx.r28.u8);
	// stb r28,4516(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4516, ctx.r28.u8);
loc_82918420:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r26,4526(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4526, ctx.r26.u8);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// blt cr6,0x82918420
	if (cr6.lt) goto loc_82918420;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82918444"))) PPC_WEAK_FUNC(sub_82918444);
PPC_FUNC_IMPL(__imp__sub_82918444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82918448"))) PPC_WEAK_FUNC(sub_82918448);
PPC_FUNC_IMPL(__imp__sub_82918448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// li r8,0
	ctx.r8.s64 = 0;
loc_8291844C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82918450:
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// blt cr6,0x82918460
	if (cr6.lt) goto loc_82918460;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82918468
	goto loc_82918468;
loc_82918460:
	// add r11,r5,r3
	ctx.r11.u64 = ctx.r5.u64 + ctx.r3.u64;
	// lbz r11,4517(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4517);
loc_82918468:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82918628
	if (cr6.eq) goto loc_82918628;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
loc_8291847C:
	// li r7,12
	ctx.r7.s64 = 12;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// bne cr6,0x82918490
	if (!cr6.eq) goto loc_82918490;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82918490:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x829184d0
	if (cr6.lt) goto loc_829184D0;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x829184d0
	if (!cr6.lt) goto loc_829184D0;
	// cmpwi cr6,r8,11
	cr6.compare<int32_t>(ctx.r8.s32, 11, xer);
	// bge cr6,0x829184d0
	if (!cr6.lt) goto loc_829184D0;
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// bge cr6,0x829184d0
	if (!cr6.lt) goto loc_829184D0;
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,562
	ctx.r11.s64 = ctx.r11.s64 + 562;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
loc_829184D0:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// bne cr6,0x829184e0
	if (!cr6.eq) goto loc_829184E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_829184E0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82918530
	if (cr6.lt) goto loc_82918530;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x82918530
	if (!cr6.lt) goto loc_82918530;
	// cmpwi cr6,r8,11
	cr6.compare<int32_t>(ctx.r8.s32, 11, xer);
	// bge cr6,0x82918530
	if (!cr6.lt) goto loc_82918530;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// blt cr6,0x82918530
	if (cr6.lt) goto loc_82918530;
	// cmpwi cr6,r7,13
	cr6.compare<int32_t>(ctx.r7.s32, 13, xer);
	// bge cr6,0x82918530
	if (!cr6.lt) goto loc_82918530;
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// bge cr6,0x82918530
	if (!cr6.lt) goto loc_82918530;
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r7.u32);
loc_82918530:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// bne cr6,0x82918540
	if (!cr6.eq) goto loc_82918540;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82918540:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8291858c
	if (cr6.lt) goto loc_8291858C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x8291858c
	if (!cr6.lt) goto loc_8291858C;
	// cmpwi cr6,r8,11
	cr6.compare<int32_t>(ctx.r8.s32, 11, xer);
	// bge cr6,0x8291858c
	if (!cr6.lt) goto loc_8291858C;
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// bge cr6,0x8291858c
	if (!cr6.lt) goto loc_8291858C;
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,2644
	ctx.r11.s64 = ctx.r11.s64 + 2644;
	// b 0x82918590
	goto loc_82918590;
loc_8291858C:
	// addi r11,r3,2644
	ctx.r11.s64 = ctx.r3.s64 + 2644;
loc_82918590:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r7.u32);
	// stw r4,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r4.u32);
	// stw r11,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r11.u32);
	// bne cr6,0x829185b8
	if (!cr6.eq) goto loc_829185B8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_829185B8:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82918618
	if (cr6.lt) goto loc_82918618;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bge cr6,0x82918618
	if (!cr6.lt) goto loc_82918618;
	// cmpwi cr6,r8,11
	cr6.compare<int32_t>(ctx.r8.s32, 11, xer);
	// bge cr6,0x82918618
	if (!cr6.lt) goto loc_82918618;
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// bge cr6,0x82918618
	if (!cr6.lt) goto loc_82918618;
	// mulli r11,r10,11
	ctx.r11.s64 = ctx.r10.s64 * 11;
	// lfs f0,-32(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-24(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,796
	ctx.r10.s64 = ctx.r11.s64 + 796;
	// stfs f0,796(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 796, temp.u32);
	// stfs f13,800(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 800, temp.u32);
	// stfs f12,804(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 804, temp.u32);
loc_82918618:
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne 0x8291847c
	if (!cr0.eq) goto loc_8291847C;
	// b 0x829187b8
	goto loc_829187B8;
loc_82918628:
	// li r7,12
	ctx.r7.s64 = 12;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// bne cr6,0x8291863c
	if (!cr6.eq) goto loc_8291863C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8291863C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82918670
	if (cr6.lt) goto loc_82918670;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x82918670
	if (!cr6.lt) goto loc_82918670;
	// cmpwi cr6,r8,11
	cr6.compare<int32_t>(ctx.r8.s32, 11, xer);
	// bge cr6,0x82918670
	if (!cr6.lt) goto loc_82918670;
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r7,2248(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2248);
loc_82918670:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// bne cr6,0x82918680
	if (!cr6.eq) goto loc_82918680;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82918680:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x829186b8
	if (cr6.lt) goto loc_829186B8;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x829186b8
	if (!cr6.lt) goto loc_829186B8;
	// cmpwi cr6,r8,11
	cr6.compare<int32_t>(ctx.r8.s32, 11, xer);
	// bge cr6,0x829186b8
	if (!cr6.lt) goto loc_829186B8;
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,2644
	ctx.r11.s64 = ctx.r11.s64 + 2644;
	// b 0x829186bc
	goto loc_829186BC;
loc_829186B8:
	// addi r11,r3,2644
	ctx.r11.s64 = ctx.r3.s64 + 2644;
loc_829186BC:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r6.u32);
	// lfs f12,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// stw r4,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r4.u32);
	// lfs f13,-12(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// lfs f0,-8(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_829186EC:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// bne cr6,0x829186fc
	if (!cr6.eq) goto loc_829186FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_829186FC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8291874c
	if (cr6.lt) goto loc_8291874C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x8291874c
	if (!cr6.lt) goto loc_8291874C;
	// cmpwi cr6,r8,11
	cr6.compare<int32_t>(ctx.r8.s32, 11, xer);
	// bge cr6,0x8291874c
	if (!cr6.lt) goto loc_8291874C;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// blt cr6,0x8291874c
	if (cr6.lt) goto loc_8291874C;
	// cmpwi cr6,r7,13
	cr6.compare<int32_t>(ctx.r7.s32, 13, xer);
	// bge cr6,0x8291874c
	if (!cr6.lt) goto loc_8291874C;
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// bge cr6,0x8291874c
	if (!cr6.lt) goto loc_8291874C;
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r7.u32);
loc_8291874C:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// bne cr6,0x8291875c
	if (!cr6.eq) goto loc_8291875C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8291875C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x829187b0
	if (cr6.lt) goto loc_829187B0;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x829187b0
	if (!cr6.lt) goto loc_829187B0;
	// cmpwi cr6,r8,11
	cr6.compare<int32_t>(ctx.r8.s32, 11, xer);
	// bge cr6,0x829187b0
	if (!cr6.lt) goto loc_829187B0;
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// bge cr6,0x829187b0
	if (!cr6.lt) goto loc_829187B0;
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,796
	ctx.r10.s64 = ctx.r11.s64 + 796;
	// stfs f12,796(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 796, temp.u32);
	// stfs f13,800(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 800, temp.u32);
	// stfs f0,804(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 804, temp.u32);
loc_829187B0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x829186ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_829186EC;
loc_829187B8:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// blt cr6,0x82918450
	if (cr6.lt) goto loc_82918450;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r8,11
	cr6.compare<int32_t>(ctx.r8.s32, 11, xer);
	// blt cr6,0x8291844c
	if (cr6.lt) goto loc_8291844C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829187D4"))) PPC_WEAK_FUNC(sub_829187D4);
PPC_FUNC_IMPL(__imp__sub_829187D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829187D8"))) PPC_WEAK_FUNC(sub_829187D8);
PPC_FUNC_IMPL(__imp__sub_829187D8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
loc_829187F0:
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x82918800
	if (cr6.lt) goto loc_82918800;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82918808
	goto loc_82918808;
loc_82918800:
	// add r11,r31,r3
	ctx.r11.u64 = ctx.r31.u64 + ctx.r3.u64;
	// lbz r11,4517(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4517);
loc_82918808:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82918b64
	if (cr6.eq) goto loc_82918B64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
loc_8291881C:
	// li r7,12
	ctx.r7.s64 = 12;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// bne cr6,0x82918830
	if (!cr6.eq) goto loc_82918830;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82918830:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82918870
	if (cr6.lt) goto loc_82918870;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x82918870
	if (!cr6.lt) goto loc_82918870;
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bge cr6,0x82918870
	if (!cr6.lt) goto loc_82918870;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bge cr6,0x82918870
	if (!cr6.lt) goto loc_82918870;
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
loc_82918870:
	// li r8,12
	ctx.r8.s64 = 12;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// bne cr6,0x82918884
	if (!cr6.eq) goto loc_82918884;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82918884:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x829188c4
	if (cr6.lt) goto loc_829188C4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x829188c4
	if (!cr6.lt) goto loc_829188C4;
	// cmpwi cr6,r5,11
	cr6.compare<int32_t>(ctx.r5.s32, 11, xer);
	// bge cr6,0x829188c4
	if (!cr6.lt) goto loc_829188C4;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bge cr6,0x829188c4
	if (!cr6.lt) goto loc_829188C4;
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
loc_829188C4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// bne cr6,0x829188d4
	if (!cr6.eq) goto loc_829188D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_829188D4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82918924
	if (cr6.lt) goto loc_82918924;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x82918924
	if (!cr6.lt) goto loc_82918924;
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bge cr6,0x82918924
	if (!cr6.lt) goto loc_82918924;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt cr6,0x82918924
	if (cr6.lt) goto loc_82918924;
	// cmpwi cr6,r8,13
	cr6.compare<int32_t>(ctx.r8.s32, 13, xer);
	// bge cr6,0x82918924
	if (!cr6.lt) goto loc_82918924;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bge cr6,0x82918924
	if (!cr6.lt) goto loc_82918924;
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,562
	ctx.r11.s64 = ctx.r11.s64 + 562;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r8.u32);
loc_82918924:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// bne cr6,0x82918934
	if (!cr6.eq) goto loc_82918934;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82918934:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82918984
	if (cr6.lt) goto loc_82918984;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x82918984
	if (!cr6.lt) goto loc_82918984;
	// cmpwi cr6,r5,11
	cr6.compare<int32_t>(ctx.r5.s32, 11, xer);
	// bge cr6,0x82918984
	if (!cr6.lt) goto loc_82918984;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// blt cr6,0x82918984
	if (cr6.lt) goto loc_82918984;
	// cmpwi cr6,r7,13
	cr6.compare<int32_t>(ctx.r7.s32, 13, xer);
	// bge cr6,0x82918984
	if (!cr6.lt) goto loc_82918984;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bge cr6,0x82918984
	if (!cr6.lt) goto loc_82918984;
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,562
	ctx.r11.s64 = ctx.r11.s64 + 562;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r7.u32);
loc_82918984:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// bne cr6,0x82918994
	if (!cr6.eq) goto loc_82918994;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82918994:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x829189e0
	if (cr6.lt) goto loc_829189E0;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x829189e0
	if (!cr6.lt) goto loc_829189E0;
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bge cr6,0x829189e0
	if (!cr6.lt) goto loc_829189E0;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bge cr6,0x829189e0
	if (!cr6.lt) goto loc_829189E0;
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,796
	ctx.r11.s64 = ctx.r11.s64 + 796;
	// b 0x829189e4
	goto loc_829189E4;
loc_829189E0:
	// addi r11,r3,796
	ctx.r11.s64 = ctx.r3.s64 + 796;
loc_829189E4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bne cr6,0x82918a0c
	if (!cr6.eq) goto loc_82918A0C;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82918A0C:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x82918a58
	if (cr6.lt) goto loc_82918A58;
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// bge cr6,0x82918a58
	if (!cr6.lt) goto loc_82918A58;
	// cmpwi cr6,r5,11
	cr6.compare<int32_t>(ctx.r5.s32, 11, xer);
	// bge cr6,0x82918a58
	if (!cr6.lt) goto loc_82918A58;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bge cr6,0x82918a58
	if (!cr6.lt) goto loc_82918A58;
	// mulli r11,r9,11
	ctx.r11.s64 = ctx.r9.s64 * 11;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,796
	ctx.r11.s64 = ctx.r11.s64 + 796;
	// b 0x82918a5c
	goto loc_82918A5C;
loc_82918A58:
	// addi r11,r3,796
	ctx.r11.s64 = ctx.r3.s64 + 796;
loc_82918A5C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bne cr6,0x82918a84
	if (!cr6.eq) goto loc_82918A84;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82918A84:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x82918ae4
	if (cr6.lt) goto loc_82918AE4;
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// bge cr6,0x82918ae4
	if (!cr6.lt) goto loc_82918AE4;
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bge cr6,0x82918ae4
	if (!cr6.lt) goto loc_82918AE4;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bge cr6,0x82918ae4
	if (!cr6.lt) goto loc_82918AE4;
	// mulli r11,r9,11
	ctx.r11.s64 = ctx.r9.s64 * 11;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r9,r11,2644
	ctx.r9.s64 = ctx.r11.s64 + 2644;
	// stfs f0,2644(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2644, temp.u32);
	// stfs f13,2648(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2648, temp.u32);
	// stfs f12,2652(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2652, temp.u32);
loc_82918AE4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// bne cr6,0x82918af4
	if (!cr6.eq) goto loc_82918AF4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82918AF4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82918b54
	if (cr6.lt) goto loc_82918B54;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x82918b54
	if (!cr6.lt) goto loc_82918B54;
	// cmpwi cr6,r5,11
	cr6.compare<int32_t>(ctx.r5.s32, 11, xer);
	// bge cr6,0x82918b54
	if (!cr6.lt) goto loc_82918B54;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bge cr6,0x82918b54
	if (!cr6.lt) goto loc_82918B54;
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r9,r11,2644
	ctx.r9.s64 = ctx.r11.s64 + 2644;
	// stfs f0,2644(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2644, temp.u32);
	// stfs f13,2648(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2648, temp.u32);
	// stfs f12,2652(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2652, temp.u32);
loc_82918B54:
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x8291881c
	if (!cr0.eq) goto loc_8291881C;
	// b 0x82918e70
	goto loc_82918E70;
loc_82918B64:
	// li r7,12
	ctx.r7.s64 = 12;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// bne cr6,0x82918b78
	if (!cr6.eq) goto loc_82918B78;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82918B78:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82918bac
	if (cr6.lt) goto loc_82918BAC;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x82918bac
	if (!cr6.lt) goto loc_82918BAC;
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bge cr6,0x82918bac
	if (!cr6.lt) goto loc_82918BAC;
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r7,40(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
loc_82918BAC:
	// li r8,12
	ctx.r8.s64 = 12;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// bne cr6,0x82918bc0
	if (!cr6.eq) goto loc_82918BC0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82918BC0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82918bf4
	if (cr6.lt) goto loc_82918BF4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x82918bf4
	if (!cr6.lt) goto loc_82918BF4;
	// cmpwi cr6,r5,11
	cr6.compare<int32_t>(ctx.r5.s32, 11, xer);
	// bge cr6,0x82918bf4
	if (!cr6.lt) goto loc_82918BF4;
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r8,40(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
loc_82918BF4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// bne cr6,0x82918c04
	if (!cr6.eq) goto loc_82918C04;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82918C04:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82918c3c
	if (cr6.lt) goto loc_82918C3C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x82918c3c
	if (!cr6.lt) goto loc_82918C3C;
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bge cr6,0x82918c3c
	if (!cr6.lt) goto loc_82918C3C;
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,796
	ctx.r11.s64 = ctx.r11.s64 + 796;
	// b 0x82918c40
	goto loc_82918C40;
loc_82918C3C:
	// addi r11,r3,796
	ctx.r11.s64 = ctx.r3.s64 + 796;
loc_82918C40:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bne cr6,0x82918c68
	if (!cr6.eq) goto loc_82918C68;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82918C68:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82918ca0
	if (cr6.lt) goto loc_82918CA0;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bge cr6,0x82918ca0
	if (!cr6.lt) goto loc_82918CA0;
	// cmpwi cr6,r5,11
	cr6.compare<int32_t>(ctx.r5.s32, 11, xer);
	// bge cr6,0x82918ca0
	if (!cr6.lt) goto loc_82918CA0;
	// mulli r11,r10,11
	ctx.r11.s64 = ctx.r10.s64 * 11;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,796
	ctx.r11.s64 = ctx.r11.s64 + 796;
	// b 0x82918ca4
	goto loc_82918CA4;
loc_82918CA0:
	// addi r11,r3,796
	ctx.r11.s64 = ctx.r3.s64 + 796;
loc_82918CA4:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// lfs f9,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f9.f64 = double(temp.f32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// lfs f10,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// lfs f11,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82918CE0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// bne cr6,0x82918cf0
	if (!cr6.eq) goto loc_82918CF0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82918CF0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82918d40
	if (cr6.lt) goto loc_82918D40;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x82918d40
	if (!cr6.lt) goto loc_82918D40;
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bge cr6,0x82918d40
	if (!cr6.lt) goto loc_82918D40;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt cr6,0x82918d40
	if (cr6.lt) goto loc_82918D40;
	// cmpwi cr6,r8,13
	cr6.compare<int32_t>(ctx.r8.s32, 13, xer);
	// bge cr6,0x82918d40
	if (!cr6.lt) goto loc_82918D40;
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// bge cr6,0x82918d40
	if (!cr6.lt) goto loc_82918D40;
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,562
	ctx.r11.s64 = ctx.r11.s64 + 562;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r8.u32);
loc_82918D40:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// bne cr6,0x82918d50
	if (!cr6.eq) goto loc_82918D50;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82918D50:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82918da0
	if (cr6.lt) goto loc_82918DA0;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x82918da0
	if (!cr6.lt) goto loc_82918DA0;
	// cmpwi cr6,r5,11
	cr6.compare<int32_t>(ctx.r5.s32, 11, xer);
	// bge cr6,0x82918da0
	if (!cr6.lt) goto loc_82918DA0;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// blt cr6,0x82918da0
	if (cr6.lt) goto loc_82918DA0;
	// cmpwi cr6,r7,13
	cr6.compare<int32_t>(ctx.r7.s32, 13, xer);
	// bge cr6,0x82918da0
	if (!cr6.lt) goto loc_82918DA0;
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// bge cr6,0x82918da0
	if (!cr6.lt) goto loc_82918DA0;
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,562
	ctx.r11.s64 = ctx.r11.s64 + 562;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r7.u32);
loc_82918DA0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// bne cr6,0x82918db0
	if (!cr6.eq) goto loc_82918DB0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82918DB0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82918e04
	if (cr6.lt) goto loc_82918E04;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x82918e04
	if (!cr6.lt) goto loc_82918E04;
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bge cr6,0x82918e04
	if (!cr6.lt) goto loc_82918E04;
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// bge cr6,0x82918e04
	if (!cr6.lt) goto loc_82918E04;
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,2644
	ctx.r10.s64 = ctx.r11.s64 + 2644;
	// stfs f9,2644(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2644, temp.u32);
	// stfs f10,2648(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2648, temp.u32);
	// stfs f11,2652(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2652, temp.u32);
loc_82918E04:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// bne cr6,0x82918e14
	if (!cr6.eq) goto loc_82918E14;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82918E14:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82918e68
	if (cr6.lt) goto loc_82918E68;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x82918e68
	if (!cr6.lt) goto loc_82918E68;
	// cmpwi cr6,r5,11
	cr6.compare<int32_t>(ctx.r5.s32, 11, xer);
	// bge cr6,0x82918e68
	if (!cr6.lt) goto loc_82918E68;
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// bge cr6,0x82918e68
	if (!cr6.lt) goto loc_82918E68;
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,2644
	ctx.r10.s64 = ctx.r11.s64 + 2644;
	// stfs f12,2644(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2644, temp.u32);
	// stfs f13,2648(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2648, temp.u32);
	// stfs f0,2652(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2652, temp.u32);
loc_82918E68:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82918ce0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82918CE0;
loc_82918E70:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// blt cr6,0x829187f0
	if (cr6.lt) goto loc_829187F0;
	// add r11,r5,r3
	ctx.r11.u64 = ctx.r5.u64 + ctx.r3.u64;
	// add r10,r4,r3
	ctx.r10.u64 = ctx.r4.u64 + ctx.r3.u64;
	// addi r9,r11,4526
	ctx.r9.s64 = ctx.r11.s64 + 4526;
	// addi r9,r10,4526
	ctx.r9.s64 = ctx.r10.s64 + 4526;
	// lbz r9,4526(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4526);
	// lbz r8,4526(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4526);
	// stb r9,4526(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4526, ctx.r9.u8);
	// stb r8,4526(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4526, ctx.r8.u8);
	// bl 0x82918448
	ctx.lr = 0x82918EA0;
	sub_82918448(ctx, base);
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

__attribute__((alias("__imp__sub_82918EB8"))) PPC_WEAK_FUNC(sub_82918EB8);
PPC_FUNC_IMPL(__imp__sub_82918EB8) {
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
	// li r10,99
	ctx.r10.s64 = 99;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r3,792
	ctx.r11.s64 = ctx.r3.s64 + 792;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
loc_82918EE0:
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfsu f0,12(r11)
	ea = 12 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82918ee0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82918EE0;
	// li r10,99
	ctx.r10.s64 = 99;
	// addi r11,r31,2640
	ctx.r11.s64 = ctx.r31.s64 + 2640;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82918EFC:
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfsu f0,12(r11)
	ea = 12 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82918efc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82918EFC;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r9,r31,4526
	ctx.r9.s64 = ctx.r31.s64 + 4526;
	// stw r11,4520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4520, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,255
	ctx.r8.s64 = 255;
loc_82918F20:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r8,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u8);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// blt cr6,0x82918f20
	if (cr6.lt) goto loc_82918F20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82917d70
	ctx.lr = 0x82918F40;
	sub_82917D70(ctx, base);
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

__attribute__((alias("__imp__sub_82918F58"))) PPC_WEAK_FUNC(sub_82918F58);
PPC_FUNC_IMPL(__imp__sub_82918F58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82918F60;
	__savegprlr_28(ctx, base);
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// subf r28,r3,r4
	ctx.r28.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82918F74:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// lwzx r9,r11,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// add r9,r6,r8
	ctx.r9.u64 = ctx.r6.u64 + ctx.r8.u64;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// lwz r8,24(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r31,20(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// lwz r8,28(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// add r6,r31,r8
	ctx.r6.u64 = ctx.r31.u64 + ctx.r8.u64;
	// lwz r30,24(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// lwz r8,32(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r5,r30,r8
	ctx.r5.u64 = ctx.r30.u64 + ctx.r8.u64;
	// lwz r29,28(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r5,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r5.u32);
	// lwz r8,36(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// add r8,r29,r8
	ctx.r8.u64 = ctx.r29.u64 + ctx.r8.u64;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r8,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// lwz r8,40(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r7,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r7.u32);
	// lwz r8,44(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r6,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r5,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r5.u32);
	// lwz r8,52(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r8,56(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r8,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// lwz r8,60(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r7,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r7.u32);
	// lwz r8,64(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r6,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r6.u32);
	// lwz r8,68(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r5,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r5.u32);
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// lwz r9,68(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r8,76(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r8,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r8.u32);
	// lwz r8,72(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwzu r9,80(r10)
	ea = 80 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r7,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r7.u32);
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// bdnz 0x82918f74
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82918F74;
	// lwz r10,560(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	// lwz r11,560(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 560);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 560, ctx.r11.u32);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829190D0"))) PPC_WEAK_FUNC(sub_829190D0);
PPC_FUNC_IMPL(__imp__sub_829190D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r10,15
	ctx.r10.s64 = 15;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// sth r9,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r9.u16);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_829190E8:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x829190e8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_829190E8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829190F4"))) PPC_WEAK_FUNC(sub_829190F4);
PPC_FUNC_IMPL(__imp__sub_829190F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829190F8"))) PPC_WEAK_FUNC(sub_829190F8);
PPC_FUNC_IMPL(__imp__sub_829190F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,14
	cr6.compare<int32_t>(ctx.r4.s32, 14, xer);
	// blt cr6,0x82919108
	if (cr6.lt) goto loc_82919108;
loc_82919100:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82919108:
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82919100
	if (cr6.eq) goto loc_82919100;
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lwzx r4,r8,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,6472(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6472);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f13,-23488(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -23488);
	ctx.f13.f64 = double(temp.f32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fdivs f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f12.f64));
	// fadds f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// fmuls f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fctidz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f5.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82919174"))) PPC_WEAK_FUNC(sub_82919174);
PPC_FUNC_IMPL(__imp__sub_82919174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82919178"))) PPC_WEAK_FUNC(sub_82919178);
PPC_FUNC_IMPL(__imp__sub_82919178) {
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
	// li r5,2256
	ctx.r5.s64 = 2256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x8291919C;
	sub_831CDCF0(ctx, base);
	// li r5,560
	ctx.r5.s64 = 560;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x829191AC;
	sub_831CDCF0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,564
	ctx.r3.s64 = ctx.r31.s64 + 564;
	// li r5,560
	ctx.r5.s64 = 560;
	// stw r30,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x829191C4;
	sub_831CDCF0(ctx, base);
	// addi r3,r31,1128
	ctx.r3.s64 = ctx.r31.s64 + 1128;
	// li r5,560
	ctx.r5.s64 = 560;
	// stw r30,1124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1124, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x829191D8;
	sub_831CDCF0(ctx, base);
	// stw r30,1688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1688, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829191F4"))) PPC_WEAK_FUNC(sub_829191F4);
PPC_FUNC_IMPL(__imp__sub_829191F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829191F8"))) PPC_WEAK_FUNC(sub_829191F8);
PPC_FUNC_IMPL(__imp__sub_829191F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82919200;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,36400
	ctx.r5.u64 = ctx.r5.u64 | 36400;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x8291921C;
	sub_831CDCF0(ctx, base);
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lwz r11,-23008(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23008);
	// rlwimi r9,r11,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stw r9,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r9.u32);
	// lwz r11,-23008(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23008);
	// rlwimi r7,r11,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r7.u32);
loc_8291924C:
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
loc_82919258:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,125
	ctx.r10.s64 = ctx.r10.s64 + 125;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// stwx r28,r7,r29
	PPC_STORE_U32(ctx.r7.u32 + ctx.r29.u32, ctx.r28.u32);
	// blt cr6,0x82919258
	if (cr6.lt) goto loc_82919258;
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(ctx.r11.u32, 62, xer);
	// blt cr6,0x8291924c
	if (cr6.lt) goto loc_8291924C;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_82919290:
	// mulli r11,r27,2256
	ctx.r11.s64 = ctx.r27.s64 * 2256;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r5,2256
	ctx.r5.s64 = 2256;
	// addi r30,r31,2732
	ctx.r30.s64 = ctx.r31.s64 + 2732;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x829192AC;
	sub_831CDCF0(ctx, base);
	// li r5,560
	ctx.r5.s64 = 560;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x829192BC;
	sub_831CDCF0(ctx, base);
	// addi r3,r30,564
	ctx.r3.s64 = ctx.r30.s64 + 564;
	// li r5,560
	ctx.r5.s64 = 560;
	// stw r28,3292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3292, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x829192D0;
	sub_831CDCF0(ctx, base);
	// addi r3,r30,1128
	ctx.r3.s64 = ctx.r30.s64 + 1128;
	// li r5,560
	ctx.r5.s64 = 560;
	// stw r28,3856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3856, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x829192E4;
	sub_831CDCF0(ctx, base);
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// stw r28,4420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4420, ctx.r28.u32);
	// clrlwi r27,r11,24
	ctx.r27.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r27,5
	cr6.compare<uint32_t>(ctx.r27.u32, 5, xer);
	// blt cr6,0x82919290
	if (cr6.lt) goto loc_82919290;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_829192FC:
	// mulli r11,r31,4784
	ctx.r11.s64 = ctx.r31.s64 * 4784;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r11,14340
	ctx.r3.s64 = ctx.r11.s64 + 14340;
	// bl 0x8291a758
	ctx.lr = 0x8291930C;
	sub_8291A758(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// blt cr6,0x829192fc
	if (cr6.lt) goto loc_829192FC;
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// ori r10,r10,41857
	ctx.r10.u64 = ctx.r10.u64 | 41857;
loc_8291932C:
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// stwx r9,r6,r29
	PPC_STORE_U32(ctx.r6.u32 + ctx.r29.u32, ctx.r9.u32);
	// blt cr6,0x8291932c
	if (cr6.lt) goto loc_8291932C;
	// addi r11,r29,14276
	ctx.r11.s64 = ctx.r29.s64 + 14276;
	// sth r28,14276(r29)
	PPC_STORE_U16(ctx.r29.u32 + 14276, ctx.r28.u16);
	// li r10,15
	ctx.r10.s64 = 15;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82919364:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82919364
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82919364;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// stw r28,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82919380"))) PPC_WEAK_FUNC(sub_82919380);
PPC_FUNC_IMPL(__imp__sub_82919380) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x829193a0
	if (cr6.lt) goto loc_829193A0;
	// cmplwi cr6,r4,5
	cr6.compare<uint32_t>(ctx.r4.u32, 5, xer);
	// bge cr6,0x829193a0
	if (!cr6.lt) goto loc_829193A0;
	// mulli r11,r4,2256
	ctx.r11.s64 = ctx.r4.s64 * 2256;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,2732
	ctx.r3.s64 = ctx.r11.s64 + 2732;
	// blr 
	return;
loc_829193A0:
	// addi r3,r3,2732
	ctx.r3.s64 = ctx.r3.s64 + 2732;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829193A8"))) PPC_WEAK_FUNC(sub_829193A8);
PPC_FUNC_IMPL(__imp__sub_829193A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r4,62
	cr6.compare<int32_t>(ctx.r4.s32, 62, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r5,9
	cr6.compare<int32_t>(ctx.r5.s32, 9, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// li r10,-1
	ctx.r10.s64 = -1;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// clrldi r9,r6,32
	ctx.r9.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// addi r7,r11,125
	ctx.r7.s64 = ctx.r11.s64 + 125;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpld cr6,r5,r8
	cr6.compare<uint64_t>(ctx.r5.u64, ctx.r8.u64, xer);
	// ble cr6,0x82919404
	if (!cr6.gt) goto loc_82919404;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
loc_82919404:
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82919414"))) PPC_WEAK_FUNC(sub_82919414);
PPC_FUNC_IMPL(__imp__sub_82919414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82919418"))) PPC_WEAK_FUNC(sub_82919418);
PPC_FUNC_IMPL(__imp__sub_82919418) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bgt cr6,0x829194cc
	if (cr6.gt) goto loc_829194CC;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8291945c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8291945C;
	// bdzf 4*cr6+eq,0x82919470
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82919470;
	// bne cr6,0x82919484
	if (!cr6.eq) goto loc_82919484;
	// cmplwi cr6,r5,44
	cr6.compare<uint32_t>(ctx.r5.u32, 44, xer);
	// ble cr6,0x82919494
	if (!cr6.gt) goto loc_82919494;
	// li r5,44
	ctx.r5.s64 = 44;
	// b 0x82919494
	goto loc_82919494;
loc_8291945C:
	// addi r5,r5,45
	ctx.r5.s64 = ctx.r5.s64 + 45;
	// cmplwi cr6,r5,89
	cr6.compare<uint32_t>(ctx.r5.u32, 89, xer);
	// ble cr6,0x82919494
	if (!cr6.gt) goto loc_82919494;
	// li r5,89
	ctx.r5.s64 = 89;
	// b 0x82919494
	goto loc_82919494;
loc_82919470:
	// addi r5,r5,90
	ctx.r5.s64 = ctx.r5.s64 + 90;
	// cmplwi cr6,r5,104
	cr6.compare<uint32_t>(ctx.r5.u32, 104, xer);
	// ble cr6,0x82919494
	if (!cr6.gt) goto loc_82919494;
	// li r5,104
	ctx.r5.s64 = 104;
	// b 0x82919494
	goto loc_82919494;
loc_82919484:
	// addi r5,r5,105
	ctx.r5.s64 = ctx.r5.s64 + 105;
	// cmplwi cr6,r5,119
	cr6.compare<uint32_t>(ctx.r5.u32, 119, xer);
	// ble cr6,0x82919494
	if (!cr6.gt) goto loc_82919494;
	// li r5,119
	ctx.r5.s64 = 119;
loc_82919494:
	// addi r11,r5,5
	ctx.r11.s64 = ctx.r5.s64 + 5;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83740858
	ctx.lr = 0x829194A0;
	sub_83740858(ctx, base);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lfsx f13,r31,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfs f0,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fadds f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfsx f8,r31,r30
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, temp.u32);
loc_829194CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829194E4"))) PPC_WEAK_FUNC(sub_829194E4);
PPC_FUNC_IMPL(__imp__sub_829194E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829194E8"))) PPC_WEAK_FUNC(sub_829194E8);
PPC_FUNC_IMPL(__imp__sub_829194E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x829194F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82919508:
	// mulli r11,r31,4784
	ctx.r11.s64 = ctx.r31.s64 * 4784;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,14340
	ctx.r3.s64 = ctx.r11.s64 + 14340;
	// bl 0x8291a868
	ctx.lr = 0x82919520;
	sub_8291A868(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// blt cr6,0x82919508
	if (cr6.lt) goto loc_82919508;
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bgt cr6,0x82919548
	if (cr6.gt) goto loc_82919548;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82919548:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82919550"))) PPC_WEAK_FUNC(sub_82919550);
PPC_FUNC_IMPL(__imp__sub_82919550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x8291968c
	if (cr6.lt) goto loc_8291968C;
	// cmpwi cr6,r4,62
	cr6.compare<int32_t>(ctx.r4.s32, 62, xer);
	// bge cr6,0x8291968c
	if (!cr6.lt) goto loc_8291968C;
	// cmplwi cr6,r5,5
	cr6.compare<uint32_t>(ctx.r5.u32, 5, xer);
	// bgt cr6,0x8291968c
	if (cr6.gt) goto loc_8291968C;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bdzf 4*cr6+eq,0x829195bc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_829195BC;
	// bdzf 4*cr6+eq,0x829195e4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_829195E4;
	// bdzf 4*cr6+eq,0x829195fc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_829195FC;
	// bdzf 4*cr6+eq,0x82919614
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82919614;
	// bne cr6,0x8291962c
	if (!cr6.eq) goto loc_8291962C;
	// addi r11,r4,14
	ctx.r11.s64 = ctx.r4.s64 + 14;
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwzx r9,r7,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// lwz r8,508(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 508);
	// lwz r10,500(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 500);
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_829195BC:
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r9,520(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// lwz r8,516(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// lwz r10,512(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 512);
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_829195E4:
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,524(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 524);
	// blr 
	return;
loc_829195FC:
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,528(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 528);
	// blr 
	return;
loc_82919614:
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,532(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 532);
	// blr 
	return;
loc_8291962C:
	// addi r11,r4,14
	ctx.r11.s64 = ctx.r4.s64 + 14;
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwzx r10,r7,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// lwz r8,528(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 528);
	// lwz r9,524(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,520(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// lwz r6,516(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r8,512(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 512);
	// lwz r9,508(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 508);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r10,500(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 500);
	// add r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_8291968C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82919694"))) PPC_WEAK_FUNC(sub_82919694);
PPC_FUNC_IMPL(__imp__sub_82919694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82919698"))) PPC_WEAK_FUNC(sub_82919698);
PPC_FUNC_IMPL(__imp__sub_82919698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,5
	cr6.compare<uint32_t>(ctx.r4.u32, 5, xer);
	// bgt cr6,0x8291975c
	if (cr6.gt) goto loc_8291975C;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bdzf 4*cr6+eq,0x829196d8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_829196D8;
	// bdzf 4*cr6+eq,0x829196f4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_829196F4;
	// bdzf 4*cr6+eq,0x82919700
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82919700;
	// bdzf 4*cr6+eq,0x8291970c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8291970C;
	// bne cr6,0x82919718
	if (!cr6.eq) goto loc_82919718;
	// lwz r11,508(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// lwz r9,504(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 504);
	// lwz r10,500(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 500);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_829196D8:
	// lwz r11,520(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// lwz r9,516(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// lwz r10,512(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 512);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_829196F4:
	// lwz r11,524(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 524);
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_82919700:
	// lwz r11,528(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_8291970C:
	// lwz r11,532(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_82919718:
	// lwz r10,524(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 524);
	// lwz r11,528(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// lwz r9,520(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,516(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// lwz r7,512(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 512);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r8,508(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// lwz r9,504(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 504);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,500(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 500);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_8291975C:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82919768"))) PPC_WEAK_FUNC(sub_82919768);
PPC_FUNC_IMPL(__imp__sub_82919768) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,9
	cr6.compare<int32_t>(ctx.r4.s32, 9, xer);
	// blt cr6,0x8291977c
	if (cr6.lt) goto loc_8291977C;
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_8291977C:
	// addi r11,r4,125
	ctx.r11.s64 = ctx.r4.s64 + 125;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// clrlwi r3,r9,24
	ctx.r3.u64 = ctx.r9.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82919790"))) PPC_WEAK_FUNC(sub_82919790);
PPC_FUNC_IMPL(__imp__sub_82919790) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r4,9
	cr6.compare<int32_t>(ctx.r4.s32, 9, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r4,125
	ctx.r11.s64 = ctx.r4.s64 + 125;
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// cmpld cr6,r8,r9
	cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, xer);
	// ble cr6,0x829197cc
	if (!cr6.gt) goto loc_829197CC;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
loc_829197CC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829197D8"))) PPC_WEAK_FUNC(sub_829197D8);
PPC_FUNC_IMPL(__imp__sub_829197D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,14012
	ctx.r3.s64 = ctx.r3.s64 + 14012;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829197E0"))) PPC_WEAK_FUNC(sub_829197E0);
PPC_FUNC_IMPL(__imp__sub_829197E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x829197f0
	if (cr6.lt) goto loc_829197F0;
	// cmplwi cr6,r4,32
	cr6.compare<uint32_t>(ctx.r4.u32, 32, xer);
	// blt cr6,0x829197f4
	if (cr6.lt) goto loc_829197F4;
loc_829197F0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829197F4:
	// mulli r11,r4,4784
	ctx.r11.s64 = ctx.r4.s64 * 4784;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,14340
	ctx.r3.s64 = ctx.r11.s64 + 14340;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82919804"))) PPC_WEAK_FUNC(sub_82919804);
PPC_FUNC_IMPL(__imp__sub_82919804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82919808"))) PPC_WEAK_FUNC(sub_82919808);
PPC_FUNC_IMPL(__imp__sub_82919808) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82919810;
	__savegprlr_29(ctx, base);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,5
	cr6.compare<int32_t>(ctx.r5.s32, 5, xer);
	// bge cr6,0x82919834
	if (!cr6.lt) goto loc_82919834;
	// mulli r11,r5,2256
	ctx.r11.s64 = ctx.r5.s64 * 2256;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r4,r11,2732
	ctx.r4.s64 = ctx.r11.s64 + 2732;
	// b 0x8291987c
	goto loc_8291987C;
loc_82919834:
	// li r5,560
	ctx.r5.s64 = 560;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831cdcf0
	ctx.lr = 0x82919844;
	sub_831CDCF0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r31,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r31.u32);
loc_8291984C:
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(ctx.r31.u32, 4, xer);
	// beq cr6,0x82919868
	if (cr6.eq) goto loc_82919868;
	// mulli r11,r31,2256
	ctx.r11.s64 = ctx.r31.s64 * 2256;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,2732
	ctx.r4.s64 = ctx.r11.s64 + 2732;
	// bl 0x82918f58
	ctx.lr = 0x82919868;
	sub_82918F58(ctx, base);
loc_82919868:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,5
	cr6.compare<uint32_t>(ctx.r31.u32, 5, xer);
	// blt cr6,0x8291984c
	if (cr6.lt) goto loc_8291984C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_8291987C:
	// li r5,564
	ctx.r5.s64 = 564;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x82919888;
	sub_831CE980(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82919894"))) PPC_WEAK_FUNC(sub_82919894);
PPC_FUNC_IMPL(__imp__sub_82919894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82919898"))) PPC_WEAK_FUNC(sub_82919898);
PPC_FUNC_IMPL(__imp__sub_82919898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x829198A0;
	__savegprlr_25(ctx, base);
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82919808
	ctx.lr = 0x829198D0;
	sub_82919808(ctx, base);
	// li r6,9
	ctx.r6.s64 = 9;
loc_829198D4:
	// li r11,5
	ctx.r11.s64 = 5;
	// clrlwi r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
	// rlwinm r10,r6,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3FC;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_829198F8:
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bge cr6,0x82919920
	if (!cr6.lt) goto loc_82919920;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// b 0x82919934
	goto loc_82919934;
loc_82919920:
	// cmplwi cr6,r9,6
	cr6.compare<uint32_t>(ctx.r9.u32, 6, xer);
	// ble cr6,0x82919930
	if (!cr6.gt) goto loc_82919930;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x82919934
	goto loc_82919934;
loc_82919930:
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82919934:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r3,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// bge cr6,0x82919964
	if (!cr6.lt) goto loc_82919964;
	// add r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 + ctx.r28.u64;
	// b 0x82919978
	goto loc_82919978;
loc_82919964:
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// ble cr6,0x82919974
	if (!cr6.gt) goto loc_82919974;
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// b 0x82919978
	goto loc_82919978;
loc_82919974:
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
loc_82919978:
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// bdnz 0x829198f8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_829198F8;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// add r31,r7,r31
	ctx.r31.u64 = ctx.r7.u64 + ctx.r31.u64;
	// cmplwi cr6,r6,14
	cr6.compare<uint32_t>(ctx.r6.u32, 14, xer);
	// blt cr6,0x829198d4
	if (cr6.lt) goto loc_829198D4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x829199b8
	if (!cr6.eq) goto loc_829199B8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_829199B8:
	// clrldi r11,r28,32
	ctx.r11.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// clrldi r10,r30,32
	ctx.r10.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// clrldi r9,r29,32
	ctx.r9.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// clrldi r8,r31,32
	ctx.r8.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// fcfid f7,f12
	ctx.f7.f64 = double(ctx.f12.s64);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// frsp f6,f10
	ctx.f6.f64 = double(float(ctx.f10.f64));
	// fdivs f2,f5,f6
	ctx.f2.f64 = double(float(ctx.f5.f64 / ctx.f6.f64));
	// stfs f2,0(r27)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// fdivs f1,f4,f6
	ctx.f1.f64 = double(float(ctx.f4.f64 / ctx.f6.f64));
	// stfs f1,0(r26)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// fdivs f0,f3,f6
	ctx.f0.f64 = double(float(ctx.f3.f64 / ctx.f6.f64));
	// stfs f0,0(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82919A28"))) PPC_WEAK_FUNC(sub_82919A28);
PPC_FUNC_IMPL(__imp__sub_82919A28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82919A30;
	__savegprlr_29(ctx, base);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,5
	cr6.compare<int32_t>(ctx.r5.s32, 5, xer);
	// bge cr6,0x82919a54
	if (!cr6.lt) goto loc_82919A54;
	// mulli r11,r5,2256
	ctx.r11.s64 = ctx.r5.s64 * 2256;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r4,r11,3296
	ctx.r4.s64 = ctx.r11.s64 + 3296;
	// b 0x82919a9c
	goto loc_82919A9C;
loc_82919A54:
	// li r5,560
	ctx.r5.s64 = 560;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831cdcf0
	ctx.lr = 0x82919A64;
	sub_831CDCF0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r31,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r31.u32);
loc_82919A6C:
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(ctx.r31.u32, 4, xer);
	// beq cr6,0x82919a88
	if (cr6.eq) goto loc_82919A88;
	// mulli r11,r31,2256
	ctx.r11.s64 = ctx.r31.s64 * 2256;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,3296
	ctx.r4.s64 = ctx.r11.s64 + 3296;
	// bl 0x82918f58
	ctx.lr = 0x82919A88;
	sub_82918F58(ctx, base);
loc_82919A88:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,5
	cr6.compare<uint32_t>(ctx.r31.u32, 5, xer);
	// blt cr6,0x82919a6c
	if (cr6.lt) goto loc_82919A6C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82919A9C:
	// li r5,564
	ctx.r5.s64 = 564;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x82919AA8;
	sub_831CE980(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82919AB4"))) PPC_WEAK_FUNC(sub_82919AB4);
PPC_FUNC_IMPL(__imp__sub_82919AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82919AB8"))) PPC_WEAK_FUNC(sub_82919AB8);
PPC_FUNC_IMPL(__imp__sub_82919AB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82919AC0;
	__savegprlr_25(ctx, base);
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82919a28
	ctx.lr = 0x82919AF0;
	sub_82919A28(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
loc_82919AF4:
	// li r11,5
	ctx.r11.s64 = 5;
	// clrlwi r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
	// rlwinm r10,r6,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3FC;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_82919B18:
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bge cr6,0x82919b40
	if (!cr6.lt) goto loc_82919B40;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// b 0x82919b54
	goto loc_82919B54;
loc_82919B40:
	// cmplwi cr6,r9,6
	cr6.compare<uint32_t>(ctx.r9.u32, 6, xer);
	// ble cr6,0x82919b50
	if (!cr6.gt) goto loc_82919B50;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x82919b54
	goto loc_82919B54;
loc_82919B50:
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82919B54:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r3,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// bge cr6,0x82919b84
	if (!cr6.lt) goto loc_82919B84;
	// add r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 + ctx.r28.u64;
	// b 0x82919b98
	goto loc_82919B98;
loc_82919B84:
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// ble cr6,0x82919b94
	if (!cr6.gt) goto loc_82919B94;
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// b 0x82919b98
	goto loc_82919B98;
loc_82919B94:
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
loc_82919B98:
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// bdnz 0x82919b18
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82919B18;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// add r31,r7,r31
	ctx.r31.u64 = ctx.r7.u64 + ctx.r31.u64;
	// cmplwi cr6,r6,14
	cr6.compare<uint32_t>(ctx.r6.u32, 14, xer);
	// blt cr6,0x82919af4
	if (cr6.lt) goto loc_82919AF4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x82919bd8
	if (!cr6.eq) goto loc_82919BD8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82919BD8:
	// clrldi r11,r28,32
	ctx.r11.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// clrldi r10,r30,32
	ctx.r10.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// clrldi r9,r29,32
	ctx.r9.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// clrldi r8,r31,32
	ctx.r8.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// fcfid f7,f12
	ctx.f7.f64 = double(ctx.f12.s64);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// frsp f6,f10
	ctx.f6.f64 = double(float(ctx.f10.f64));
	// fdivs f2,f5,f6
	ctx.f2.f64 = double(float(ctx.f5.f64 / ctx.f6.f64));
	// stfs f2,0(r27)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// fdivs f1,f4,f6
	ctx.f1.f64 = double(float(ctx.f4.f64 / ctx.f6.f64));
	// stfs f1,0(r26)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// fdivs f0,f3,f6
	ctx.f0.f64 = double(float(ctx.f3.f64 / ctx.f6.f64));
	// stfs f0,0(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82919C48"))) PPC_WEAK_FUNC(sub_82919C48);
PPC_FUNC_IMPL(__imp__sub_82919C48) {
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
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,2
	ctx.r10.s64 = 2;
	// lfs f30,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
loc_82919C6C:
	// addic. r11,r10,-2
	xer.ca = ctx.r10.u32 > 1;
	ctx.r11.s64 = ctx.r10.s64 + -2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x82919c80
	if (cr0.lt) goto loc_82919C80;
	// addi r9,r10,-2
	ctx.r9.s64 = ctx.r10.s64 + -2;
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// blt cr6,0x82919c84
	if (cr6.lt) goto loc_82919C84;
loc_82919C80:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82919C84:
	// mulli r11,r11,4784
	ctx.r11.s64 = ctx.r11.s64 * 4784;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r9,18416(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18416);
	// cmplwi cr6,r9,255
	cr6.compare<uint32_t>(ctx.r9.u32, 255, xer);
	// beq cr6,0x82919ca0
	if (cr6.eq) goto loc_82919CA0;
	// lfs f0,19080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19080);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
loc_82919CA0:
	// addic. r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x82919cb4
	if (cr0.lt) goto loc_82919CB4;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// blt cr6,0x82919cb8
	if (cr6.lt) goto loc_82919CB8;
loc_82919CB4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82919CB8:
	// mulli r11,r11,4784
	ctx.r11.s64 = ctx.r11.s64 * 4784;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r9,18416(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18416);
	// cmplwi cr6,r9,255
	cr6.compare<uint32_t>(ctx.r9.u32, 255, xer);
	// beq cr6,0x82919cd4
	if (cr6.eq) goto loc_82919CD4;
	// lfs f0,19080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19080);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
loc_82919CD4:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82919ce8
	if (cr6.lt) goto loc_82919CE8;
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// blt cr6,0x82919cec
	if (cr6.lt) goto loc_82919CEC;
loc_82919CE8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82919CEC:
	// mulli r11,r11,4784
	ctx.r11.s64 = ctx.r11.s64 * 4784;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r9,18416(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18416);
	// cmplwi cr6,r9,255
	cr6.compare<uint32_t>(ctx.r9.u32, 255, xer);
	// beq cr6,0x82919d08
	if (cr6.eq) goto loc_82919D08;
	// lfs f0,19080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19080);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
loc_82919D08:
	// addic. r11,r10,1
	xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r11.s64 = ctx.r10.s64 + 1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x82919d18
	if (cr0.lt) goto loc_82919D18;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x82919d1c
	if (cr6.lt) goto loc_82919D1C;
loc_82919D18:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82919D1C:
	// mulli r11,r11,4784
	ctx.r11.s64 = ctx.r11.s64 * 4784;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r9,18416(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18416);
	// cmplwi cr6,r9,255
	cr6.compare<uint32_t>(ctx.r9.u32, 255, xer);
	// beq cr6,0x82919d38
	if (cr6.eq) goto loc_82919D38;
	// lfs f0,19080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19080);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
loc_82919D38:
	// addic. r11,r10,2
	xer.ca = ctx.r10.u32 > 4294967293;
	ctx.r11.s64 = ctx.r10.s64 + 2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x82919d48
	if (cr0.lt) goto loc_82919D48;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x82919d4c
	if (cr6.lt) goto loc_82919D4C;
loc_82919D48:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82919D4C:
	// mulli r11,r11,4784
	ctx.r11.s64 = ctx.r11.s64 * 4784;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r9,18416(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18416);
	// cmplwi cr6,r9,255
	cr6.compare<uint32_t>(ctx.r9.u32, 255, xer);
	// beq cr6,0x82919d68
	if (cr6.eq) goto loc_82919D68;
	// lfs f0,19080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19080);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
loc_82919D68:
	// addic. r11,r10,3
	xer.ca = ctx.r10.u32 > 4294967292;
	ctx.r11.s64 = ctx.r10.s64 + 3;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x82919d78
	if (cr0.lt) goto loc_82919D78;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x82919d7c
	if (cr6.lt) goto loc_82919D7C;
loc_82919D78:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82919D7C:
	// mulli r11,r11,4784
	ctx.r11.s64 = ctx.r11.s64 * 4784;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r9,18416(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18416);
	// cmplwi cr6,r9,255
	cr6.compare<uint32_t>(ctx.r9.u32, 255, xer);
	// beq cr6,0x82919d98
	if (cr6.eq) goto loc_82919D98;
	// lfs f0,19080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19080);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
loc_82919D98:
	// addic. r11,r10,4
	xer.ca = ctx.r10.u32 > 4294967291;
	ctx.r11.s64 = ctx.r10.s64 + 4;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x82919da8
	if (cr0.lt) goto loc_82919DA8;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x82919dac
	if (cr6.lt) goto loc_82919DAC;
loc_82919DA8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82919DAC:
	// mulli r11,r11,4784
	ctx.r11.s64 = ctx.r11.s64 * 4784;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r9,18416(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18416);
	// cmplwi cr6,r9,255
	cr6.compare<uint32_t>(ctx.r9.u32, 255, xer);
	// beq cr6,0x82919dc8
	if (cr6.eq) goto loc_82919DC8;
	// lfs f0,19080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19080);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
loc_82919DC8:
	// addic. r11,r10,5
	xer.ca = ctx.r10.u32 > 4294967290;
	ctx.r11.s64 = ctx.r10.s64 + 5;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x82919dd8
	if (cr0.lt) goto loc_82919DD8;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x82919ddc
	if (cr6.lt) goto loc_82919DDC;
loc_82919DD8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82919DDC:
	// mulli r11,r11,4784
	ctx.r11.s64 = ctx.r11.s64 * 4784;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r9,18416(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18416);
	// cmplwi cr6,r9,255
	cr6.compare<uint32_t>(ctx.r9.u32, 255, xer);
	// beq cr6,0x82919df8
	if (cr6.eq) goto loc_82919DF8;
	// lfs f0,19080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19080);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
loc_82919DF8:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x82919c6c
	if (cr6.lt) goto loc_82919C6C;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x829194e8
	ctx.lr = 0x82919E14;
	sub_829194E8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82919e24
	if (!cr6.eq) goto loc_82919E24;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// b 0x82919e3c
	goto loc_82919E3C;
loc_82919E24:
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f1,f31,f12
	ctx.f1.f64 = double(float(ctx.f31.f64 / ctx.f12.f64));
loc_82919E3C:
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

__attribute__((alias("__imp__sub_82919E54"))) PPC_WEAK_FUNC(sub_82919E54);
PPC_FUNC_IMPL(__imp__sub_82919E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82919E58"))) PPC_WEAK_FUNC(sub_82919E58);
PPC_FUNC_IMPL(__imp__sub_82919E58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82919E60;
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
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmpw cr6,r31,r5
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, xer);
	// bge cr6,0x82919ee8
	if (!cr6.lt) goto loc_82919EE8;
loc_82919E8C:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r3,-8
	ctx.r4.s64 = ctx.r3.s64 + -8;
	// bctrl 
	ctx.lr = 0x82919EA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82919eb0
	if (cr6.eq) goto loc_82919EB0;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_82919EB0:
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 1;
	// lwzx r6,r10,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// rlwinm r31,r7,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// stwx r6,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r6.u32);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r5,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r5.u32);
	// blt cr6,0x82919e8c
	if (cr6.lt) goto loc_82919E8C;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
loc_82919EE8:
	// bne cr6,0x82919f10
	if (!cr6.eq) goto loc_82919F10;
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r29,r28,-1
	ctx.r29.s64 = ctx.r28.s64 + -1;
	// lwz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stwx r8,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r8.u32);
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
loc_82919F10:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// cmpw cr6,r25,r29
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r29.s32, xer);
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r31.s64 = temp.s64;
	// bge cr6,0x82919f7c
	if (!cr6.lt) goto loc_82919F7C;
loc_82919F28:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82919F40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82919f7c
	if (cr6.eq) goto loc_82919F7C;
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r9,r31,-1
	ctx.r9.s64 = ctx.r31.s64 + -1;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// srawi r7,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// cmpw cr6,r25,r31
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r31.s32, xer);
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addze r31,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r31.s64 = temp.s64;
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// blt cr6,0x82919f28
	if (cr6.lt) goto loc_82919F28;
loc_82919F7C:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// lwz r8,4(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82919F9C"))) PPC_WEAK_FUNC(sub_82919F9C);
PPC_FUNC_IMPL(__imp__sub_82919F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82919FA0"))) PPC_WEAK_FUNC(sub_82919FA0);
PPC_FUNC_IMPL(__imp__sub_82919FA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82919FA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82919fcc
	if (!cr6.gt) goto loc_82919FCC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82919FCC;
	sub_831CC150(ctx, base);
loc_82919FCC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x8291a074
	if (!cr6.lt) goto loc_8291A074;
	// li r27,2
	ctx.r27.s64 = 2;
	// rlwinm r28,r4,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8291A000;
	sub_82595718(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8291a038
	if (cr6.eq) goto loc_8291A038;
loc_8291A018:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8291a028
	if (cr6.eq) goto loc_8291A028;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_8291A028:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x8291a018
	if (!cr6.eq) goto loc_8291A018;
loc_8291A038:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r29,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r10.s32 >> 2;
	// beq cr6,0x8291a05c
	if (cr6.eq) goto loc_8291A05C;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x8291A05C;
	sub_825952B8(ctx, base);
loc_8291A05C:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
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
loc_8291A074:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8291A07C"))) PPC_WEAK_FUNC(sub_8291A07C);
PPC_FUNC_IMPL(__imp__sub_8291A07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291A080"))) PPC_WEAK_FUNC(sub_8291A080);
PPC_FUNC_IMPL(__imp__sub_8291A080) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r6,r4,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r4.s64;
	// srawi r10,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 2;
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bge cr6,0x8291a0b0
	if (!cr6.lt) goto loc_8291A0B0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_8291A0B0:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// srawi r11,r6,2
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 2;
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
	// blt cr6,0x8291a0e0
	if (cr6.lt) goto loc_8291A0E0;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8291A0E0:
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// bge cr6,0x8291a0ec
	if (!cr6.lt) goto loc_8291A0EC;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
loc_8291A0EC:
	// b 0x82919fa0
	sub_82919FA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8291A0F0"))) PPC_WEAK_FUNC(sub_8291A0F0);
PPC_FUNC_IMPL(__imp__sub_8291A0F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291A0F4"))) PPC_WEAK_FUNC(sub_8291A0F4);
PPC_FUNC_IMPL(__imp__sub_8291A0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291A0F8"))) PPC_WEAK_FUNC(sub_8291A0F8);
PPC_FUNC_IMPL(__imp__sub_8291A0F8) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bge cr6,0x8291a130
	if (!cr6.lt) goto loc_8291A130;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x8291a134
	if (!cr6.gt) goto loc_8291A134;
loc_8291A130:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8291A134:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8291a180
	if (cr6.eq) goto loc_8291A180;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r10,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// srawi r30,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r8.s32 >> 2;
	// bne cr6,0x8291a164
	if (!cr6.eq) goto loc_8291A164;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8291a080
	ctx.lr = 0x8291A164;
	sub_8291A080(ctx, base);
loc_8291A164:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8291a1ac
	if (cr6.eq) goto loc_8291A1AC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8291a1a8
	goto loc_8291A1A8;
loc_8291A180:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8291a198
	if (!cr6.eq) goto loc_8291A198;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8291a080
	ctx.lr = 0x8291A198;
	sub_8291A080(ctx, base);
loc_8291A198:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8291a1ac
	if (cr6.eq) goto loc_8291A1AC;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
loc_8291A1A8:
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_8291A1AC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
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

__attribute__((alias("__imp__sub_8291A1D0"))) PPC_WEAK_FUNC(sub_8291A1D0);
PPC_FUNC_IMPL(__imp__sub_8291A1D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8291A1D8;
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
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x8291a21c
	if (cr6.eq) goto loc_8291A21C;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x831ce420
	ctx.lr = 0x8291A214;
	sub_831CE420(ctx, base);
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
loc_8291A21C:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// srawi. r10,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8291a35c
	if (cr0.eq) goto loc_8291A35C;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// lfs f31,-23488(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23488);
	ctx.f31.f64 = double(temp.f32);
	// ble cr6,0x8291a36c
	if (!cr6.gt) goto loc_8291A36C;
loc_8291A25C:
	// lfsx f0,r30,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmuls f30,f0,f31
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fctidz f13,f30
	ctx.f13.s64 = (ctx.f30.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f30.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x8291A280;
	sub_835977D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f12,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fsubs f9,f30,f10
	ctx.f9.f64 = double(float(ctx.f30.f64 - ctx.f10.f64));
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x83546fd8
	ctx.lr = 0x8291A2B4;
	sub_83546FD8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r10,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// bgt cr6,0x8291a25c
	if (cr6.gt) goto loc_8291A25C;
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8291a340
	if (cr6.eq) goto loc_8291A340;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subf r10,r30,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r30.s64;
	// addi r6,r11,18760
	ctx.r6.s64 = ctx.r11.s64 + 18760;
	// srawi r31,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r10.s32 >> 3;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82c85c88
	ctx.lr = 0x8291A300;
	sub_82C85C88(ctx, base);
	// subfic r6,r29,100
	xer.ca = ctx.r29.u32 <= 100;
	ctx.r6.s64 = 100 - ctx.r29.s64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8291a340
	if (cr6.eq) goto loc_8291A340;
	// addi r7,r30,-8
	ctx.r7.s64 = ctx.r30.s64 + -8;
loc_8291A314:
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bge cr6,0x8291a340
	if (!cr6.lt) goto loc_8291A340;
	// lwzu r9,8(r7)
	ea = 8 + ctx.r7.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// blt cr6,0x8291a314
	if (cr6.lt) goto loc_8291A314;
loc_8291A340:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8291a35c
	if (cr6.eq) goto loc_8291A35C;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x8291A35C;
	sub_825952B8(ctx, base);
loc_8291A35C:
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
loc_8291A36C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x8291A378;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_8291A378"))) PPC_WEAK_FUNC(sub_8291A378);
PPC_FUNC_IMPL(__imp__sub_8291A378) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8291A380;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82919898
	ctx.lr = 0x8291A3A0;
	sub_82919898(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// bl 0x8291a0f8
	ctx.lr = 0x8291A3C8;
	sub_8291A0F8(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8291a0f8
	ctx.lr = 0x8291A3D4;
	sub_8291A0F8(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8291a0f8
	ctx.lr = 0x8291A3E0;
	sub_8291A0F8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8291a1d0
	ctx.lr = 0x8291A3EC;
	sub_8291A1D0(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi. r11,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x8291a40c
	if (!cr0.eq) goto loc_8291A40C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x8291A40C;
	sub_831CC188(ctx, base);
loc_8291A40C:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bgt cr6,0x8291a428
	if (cr6.gt) goto loc_8291A428;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x8291A428;
	sub_831CC188(ctx, base);
loc_8291A428:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bgt cr6,0x8291a444
	if (cr6.gt) goto loc_8291A444;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x8291A444;
	sub_831CC188(ctx, base);
loc_8291A444:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r31,2
	ctx.r31.s64 = 2;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8291A45C;
	sub_825952B8(ctx, base);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8291a474
	if (cr6.eq) goto loc_8291A474;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825952b8
	ctx.lr = 0x8291A474;
	sub_825952B8(ctx, base);
loc_8291A474:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8291A47C"))) PPC_WEAK_FUNC(sub_8291A47C);
PPC_FUNC_IMPL(__imp__sub_8291A47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291A480"))) PPC_WEAK_FUNC(sub_8291A480);
PPC_FUNC_IMPL(__imp__sub_8291A480) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,13
	cr6.compare<int32_t>(ctx.r4.s32, 13, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// stb r5,127(r11)
	PPC_STORE_U8(ctx.r11.u32 + 127, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291A494"))) PPC_WEAK_FUNC(sub_8291A494);
PPC_FUNC_IMPL(__imp__sub_8291A494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291A498"))) PPC_WEAK_FUNC(sub_8291A498);
PPC_FUNC_IMPL(__imp__sub_8291A498) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,6
	cr6.compare<int32_t>(ctx.r4.s32, 6, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// stb r5,141(r11)
	PPC_STORE_U8(ctx.r11.u32 + 141, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291A4AC"))) PPC_WEAK_FUNC(sub_8291A4AC);
PPC_FUNC_IMPL(__imp__sub_8291A4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291A4B0"))) PPC_WEAK_FUNC(sub_8291A4B0);
PPC_FUNC_IMPL(__imp__sub_8291A4B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// li r5,72
	ctx.r5.s64 = 72;
	// b 0x831ce980
	sub_831CE980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8291A4BC"))) PPC_WEAK_FUNC(sub_8291A4BC);
PPC_FUNC_IMPL(__imp__sub_8291A4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291A4C0"))) PPC_WEAK_FUNC(sub_8291A4C0);
PPC_FUNC_IMPL(__imp__sub_8291A4C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,13
	cr6.compare<int32_t>(ctx.r4.s32, 13, xer);
	// bge cr6,0x8291a4d4
	if (!cr6.lt) goto loc_8291A4D4;
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r3,127(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 127);
	// blr 
	return;
loc_8291A4D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291A4DC"))) PPC_WEAK_FUNC(sub_8291A4DC);
PPC_FUNC_IMPL(__imp__sub_8291A4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291A4E0"))) PPC_WEAK_FUNC(sub_8291A4E0);
PPC_FUNC_IMPL(__imp__sub_8291A4E0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,140(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 140);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291A4E8"))) PPC_WEAK_FUNC(sub_8291A4E8);
PPC_FUNC_IMPL(__imp__sub_8291A4E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,6
	cr6.compare<int32_t>(ctx.r4.s32, 6, xer);
	// bge cr6,0x8291a4fc
	if (!cr6.lt) goto loc_8291A4FC;
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r3,141(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 141);
	// blr 
	return;
loc_8291A4FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291A504"))) PPC_WEAK_FUNC(sub_8291A504);
PPC_FUNC_IMPL(__imp__sub_8291A504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291A508"))) PPC_WEAK_FUNC(sub_8291A508);
PPC_FUNC_IMPL(__imp__sub_8291A508) {
	PPC_FUNC_PROLOGUE();
	// stb r4,84(r3)
	PPC_STORE_U8(ctx.r3.u32 + 84, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291A510"))) PPC_WEAK_FUNC(sub_8291A510);
PPC_FUNC_IMPL(__imp__sub_8291A510) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 84);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291A518"))) PPC_WEAK_FUNC(sub_8291A518);
PPC_FUNC_IMPL(__imp__sub_8291A518) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r6,13
	cr6.compare<int32_t>(ctx.r6.s32, 13, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r5,13
	ctx.r11.s64 = ctx.r5.s64 * 13;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r4,86(r11)
	PPC_STORE_U8(ctx.r11.u32 + 86, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291A53C"))) PPC_WEAK_FUNC(sub_8291A53C);
PPC_FUNC_IMPL(__imp__sub_8291A53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291A540"))) PPC_WEAK_FUNC(sub_8291A540);
PPC_FUNC_IMPL(__imp__sub_8291A540) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r5,13
	cr6.compare<int32_t>(ctx.r5.s32, 13, xer);
	// bge cr6,0x8291a564
	if (!cr6.lt) goto loc_8291A564;
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// bge cr6,0x8291a564
	if (!cr6.lt) goto loc_8291A564;
	// mulli r11,r4,13
	ctx.r11.s64 = ctx.r4.s64 * 13;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r3,86(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 86);
	// blr 
	return;
loc_8291A564:
	// li r3,99
	ctx.r3.s64 = 99;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291A56C"))) PPC_WEAK_FUNC(sub_8291A56C);
PPC_FUNC_IMPL(__imp__sub_8291A56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291A570"))) PPC_WEAK_FUNC(sub_8291A570);
PPC_FUNC_IMPL(__imp__sub_8291A570) {
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
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r3,86
	ctx.r9.s64 = ctx.r3.s64 + 86;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// ld r11,-22952(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -22952);
	// li r6,99
	ctx.r6.s64 = 99;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
loc_8291A5A0:
	// li r10,13
	ctx.r10.s64 = 13;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8291A5AC:
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// bge cr6,0x8291a5c0
	if (!cr6.lt) goto loc_8291A5C0;
	// cmpwi cr6,r7,3
	cr6.compare<int32_t>(ctx.r7.s32, 3, xer);
	// bge cr6,0x8291a5c0
	if (!cr6.lt) goto loc_8291A5C0;
	// stbx r6,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r6.u8);
loc_8291A5C0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8291a5ac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8291A5AC;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,13
	ctx.r9.s64 = ctx.r9.s64 + 13;
	// cmpwi cr6,r7,3
	cr6.compare<int32_t>(ctx.r7.s32, 3, xer);
	// blt cr6,0x8291a5a0
	if (cr6.lt) goto loc_8291A5A0;
	// li r10,13
	ctx.r10.s64 = 13;
	// stb r8,125(r31)
	PPC_STORE_U8(ctx.r31.u32 + 125, ctx.r8.u8);
	// li r11,100
	ctx.r11.s64 = 100;
	// stb r8,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r8.u8);
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r8,126(r31)
	PPC_STORE_U8(ctx.r31.u32 + 126, ctx.r8.u8);
	// stb r11,85(r31)
	PPC_STORE_U8(ctx.r31.u32 + 85, ctx.r11.u8);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// addi r9,r31,127
	ctx.r9.s64 = ctx.r31.s64 + 127;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8291A604:
	// stbx r8,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8291a604
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8291A604;
	// li r9,6
	ctx.r9.s64 = 6;
	// stb r8,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r8.u8);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r31,141
	ctx.r10.s64 = ctx.r31.s64 + 141;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8291A624:
	// stbx r8,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8291a624
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8291A624;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r5,r11,29324
	ctx.r5.s64 = ctx.r11.s64 + 29324;
	// addi r3,r31,147
	ctx.r3.s64 = ctx.r31.s64 + 147;
	// bl 0x831ce7d8
	ctx.lr = 0x8291A644;
	sub_831CE7D8(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8291b548
	ctx.lr = 0x8291A64C;
	sub_8291B548(ctx, base);
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

__attribute__((alias("__imp__sub_8291A660"))) PPC_WEAK_FUNC(sub_8291A660);
PPC_FUNC_IMPL(__imp__sub_8291A660) {
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
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x8291b548
	ctx.lr = 0x8291A68C;
	sub_8291B548(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8291a570
	ctx.lr = 0x8291A694;
	sub_8291A570(ctx, base);
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

__attribute__((alias("__imp__sub_8291A6AC"))) PPC_WEAK_FUNC(sub_8291A6AC);
PPC_FUNC_IMPL(__imp__sub_8291A6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291A6B0"))) PPC_WEAK_FUNC(sub_8291A6B0);
PPC_FUNC_IMPL(__imp__sub_8291A6B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bgt cr6,0x8291a74c
	if (cr6.gt) goto loc_8291A74C;
	// lis r12,-32110
	ctx.r12.s64 = -2104360960;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-22832
	ctx.r12.s64 = ctx.r12.s64 + -22832;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u32) {
	case 0:
		goto loc_8291A74C;
	case 1:
		goto loc_8291A704;
	case 2:
		goto loc_8291A70C;
	case 3:
		goto loc_8291A70C;
	case 4:
		goto loc_8291A714;
	case 5:
		goto loc_8291A71C;
	case 6:
		goto loc_8291A724;
	case 7:
		goto loc_8291A724;
	case 8:
		goto loc_8291A72C;
	case 9:
		goto loc_8291A734;
	case 10:
		goto loc_8291A734;
	case 11:
		goto loc_8291A73C;
	case 12:
		goto loc_8291A744;
	default:
		return;
	}
	// lwz r20,-22708(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -22708);
	// lwz r20,-22780(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -22780);
	// lwz r20,-22772(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -22772);
	// lwz r20,-22772(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -22772);
	// lwz r20,-22764(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -22764);
	// lwz r20,-22756(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -22756);
	// lwz r20,-22748(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -22748);
	// lwz r20,-22748(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -22748);
	// lwz r20,-22740(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -22740);
	// lwz r20,-22732(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -22732);
	// lwz r20,-22732(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -22732);
	// lwz r20,-22724(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -22724);
	// lwz r20,-22716(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -22716);
loc_8291A704:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8291A70C:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_8291A714:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_8291A71C:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_8291A724:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_8291A72C:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_8291A734:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_8291A73C:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_8291A744:
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
loc_8291A74C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291A754"))) PPC_WEAK_FUNC(sub_8291A754);
PPC_FUNC_IMPL(__imp__sub_8291A754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291A758"))) PPC_WEAK_FUNC(sub_8291A758);
PPC_FUNC_IMPL(__imp__sub_8291A758) {
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
	// li r5,4784
	ctx.r5.s64 = 4784;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x8291A780;
	sub_831CDCF0(ctx, base);
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r30,0
	ctx.r30.s64 = 0;
	// ld r11,-22836(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -22836);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
loc_8291A794:
	// li r10,9
	ctx.r10.s64 = 9;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8291A7A0:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r30.u32);
	// bdnz 0x8291a7a0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8291A7A0;
	// addi r9,r9,9
	ctx.r9.s64 = ctx.r9.s64 + 9;
	// cmplwi cr6,r9,1019
	cr6.compare<uint32_t>(ctx.r9.u32, 1019, xer);
	// blt cr6,0x8291a794
	if (cr6.lt) goto loc_8291A794;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// sth r30,4144(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4144, ctx.r30.u16);
	// li r11,5
	ctx.r11.s64 = 5;
	// stb r30,4146(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4146, ctx.r30.u8);
	// li r10,255
	ctx.r10.s64 = 255;
	// stb r30,4147(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4147, ctx.r30.u8);
	// li r8,13
	ctx.r8.s64 = 13;
	// stw r11,4080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4080, ctx.r11.u32);
	// stw r11,4084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4084, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lfs f31,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stb r10,4076(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4076, ctx.r10.u8);
	// stfs f31,4148(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4148, temp.u32);
	// stb r10,4077(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4077, ctx.r10.u8);
	// stw r8,4088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4088, ctx.r8.u32);
loc_8291A7FC:
	// addi r10,r11,1023
	ctx.r10.s64 = ctx.r11.s64 + 1023;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// stwx r30,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r30.u32);
	// blt cr6,0x8291a7fc
	if (cr6.lt) goto loc_8291A7FC;
	// addi r3,r31,4152
	ctx.r3.s64 = ctx.r31.s64 + 4152;
	// li r5,560
	ctx.r5.s64 = 560;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x8291A828;
	sub_831CDCF0(ctx, base);
	// stw r30,4712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4712, ctx.r30.u32);
	// stfs f31,4716(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4716, temp.u32);
	// stb r30,4720(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4720, ctx.r30.u8);
	// stfs f31,4732(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4732, temp.u32);
	// stb r30,4728(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4728, ctx.r30.u8);
	// stfs f31,4736(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4736, temp.u32);
	// stb r30,4744(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4744, ctx.r30.u8);
	// stfs f31,4740(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4740, temp.u32);
	// stw r30,4780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4780, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_8291A868"))) PPC_WEAK_FUNC(sub_8291A868);
PPC_FUNC_IMPL(__imp__sub_8291A868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x8291a984
	if (cr6.lt) goto loc_8291A984;
	// cmpwi cr6,r4,113
	cr6.compare<int32_t>(ctx.r4.s32, 113, xer);
	// bge cr6,0x8291a984
	if (!cr6.lt) goto loc_8291A984;
	// cmplwi cr6,r5,5
	cr6.compare<uint32_t>(ctx.r5.u32, 5, xer);
	// bgt cr6,0x8291a984
	if (cr6.gt) goto loc_8291A984;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8291a8c4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8291A8C4;
	// bdzf 4*cr6+eq,0x8291a8ec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8291A8EC;
	// bdzf 4*cr6+eq,0x8291a904
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8291A904;
	// bdzf 4*cr6+eq,0x8291a91c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8291A91C;
	// bne cr6,0x8291a934
	if (!cr6.eq) goto loc_8291A934;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_8291A8C4:
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_8291A8EC:
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,32(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// blr 
	return;
loc_8291A904:
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_8291A91C:
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,40(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// blr 
	return;
loc_8291A934:
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_8291A984:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291A98C"))) PPC_WEAK_FUNC(sub_8291A98C);
PPC_FUNC_IMPL(__imp__sub_8291A98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291A990"))) PPC_WEAK_FUNC(sub_8291A990);
PPC_FUNC_IMPL(__imp__sub_8291A990) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r4,113
	cr6.compare<int32_t>(ctx.r4.s32, 113, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r5,9
	cr6.compare<int32_t>(ctx.r5.s32, 9, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// li r10,-1
	ctx.r10.s64 = -1;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// clrldi r9,r6,32
	ctx.r9.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpld cr6,r5,r8
	cr6.compare<uint64_t>(ctx.r5.u64, ctx.r8.u64, xer);
	// ble cr6,0x8291a9ec
	if (!cr6.gt) goto loc_8291A9EC;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
loc_8291A9EC:
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291A9FC"))) PPC_WEAK_FUNC(sub_8291A9FC);
PPC_FUNC_IMPL(__imp__sub_8291A9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291AA00"))) PPC_WEAK_FUNC(sub_8291AA00);
PPC_FUNC_IMPL(__imp__sub_8291AA00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r7,13
	ctx.r7.s64 = 13;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
loc_8291AA10:
	// addi r11,r8,1023
	ctx.r11.s64 = ctx.r8.s64 + 1023;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x8291aa2c
	if (!cr6.gt) goto loc_8291AA2C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_8291AA2C:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,13
	cr6.compare<uint32_t>(ctx.r10.u32, 13, xer);
	// blt cr6,0x8291aa10
	if (cr6.lt) goto loc_8291AA10;
	// clrlwi r3,r7,24
	ctx.r3.u64 = ctx.r7.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291AA48"))) PPC_WEAK_FUNC(sub_8291AA48);
PPC_FUNC_IMPL(__imp__sub_8291AA48) {
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
	// bl 0x8291aa00
	ctx.lr = 0x8291AA58;
	sub_8291AA00(ctx, base);
	// bl 0x8291a6b0
	ctx.lr = 0x8291AA5C;
	sub_8291A6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291AA6C"))) PPC_WEAK_FUNC(sub_8291AA6C);
PPC_FUNC_IMPL(__imp__sub_8291AA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291AA70"))) PPC_WEAK_FUNC(sub_8291AA70);
PPC_FUNC_IMPL(__imp__sub_8291AA70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r10,10
	ctx.r10.s64 = 10;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8291AA80:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8291aa80
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8291AA80;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r8,255
	ctx.r8.s64 = 255;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stb r8,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291AAB0"))) PPC_WEAK_FUNC(sub_8291AAB0);
PPC_FUNC_IMPL(__imp__sub_8291AAB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// stb r11,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r11.u8);
	// stb r11,14(r3)
	PPC_STORE_U8(ctx.r3.u32 + 14, ctx.r11.u8);
	// stb r11,15(r3)
	PPC_STORE_U8(ctx.r3.u32 + 15, ctx.r11.u8);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// stb r11,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r11.u8);
	// stb r11,18(r3)
	PPC_STORE_U8(ctx.r3.u32 + 18, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291AB00"))) PPC_WEAK_FUNC(sub_8291AB00);
PPC_FUNC_IMPL(__imp__sub_8291AB00) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291AB1C"))) PPC_WEAK_FUNC(sub_8291AB1C);
PPC_FUNC_IMPL(__imp__sub_8291AB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291AB20"))) PPC_WEAK_FUNC(sub_8291AB20);
PPC_FUNC_IMPL(__imp__sub_8291AB20) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291AB3C"))) PPC_WEAK_FUNC(sub_8291AB3C);
PPC_FUNC_IMPL(__imp__sub_8291AB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291AB40"))) PPC_WEAK_FUNC(sub_8291AB40);
PPC_FUNC_IMPL(__imp__sub_8291AB40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8291AB48;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x829191f8
	ctx.lr = 0x8291AB58;
	sub_829191F8(ctx, base);
	// addis r3,r31,3
	ctx.r3.s64 = ctx.r31.s64 + 196608;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,-29136
	ctx.r3.s64 = ctx.r3.s64 + -29136;
	// bl 0x829191f8
	ctx.lr = 0x8291AB68;
	sub_829191F8(ctx, base);
	// addis r3,r31,5
	ctx.r3.s64 = ctx.r31.s64 + 327680;
	// addi r3,r3,7264
	ctx.r3.s64 = ctx.r3.s64 + 7264;
	// bl 0x8291ba58
	ctx.lr = 0x8291AB74;
	sub_8291BA58(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lis r3,5
	ctx.r3.s64 = 327680;
	// lis r6,5
	ctx.r6.s64 = 327680;
	// lis r10,5
	ctx.r10.s64 = 327680;
	// lis r8,5
	ctx.r8.s64 = 327680;
	// lis r7,5
	ctx.r7.s64 = 327680;
	// ori r30,r11,8012
	ctx.r30.u64 = ctx.r11.u64 | 8012;
	// lis r5,5
	ctx.r5.s64 = 327680;
	// lis r4,5
	ctx.r4.s64 = 327680;
	// lis r29,-31778
	ctx.r29.s64 = -2082603008;
	// ori r6,r6,8028
	ctx.r6.u64 = ctx.r6.u64 | 8028;
	// ori r25,r3,8037
	ctx.r25.u64 = ctx.r3.u64 | 8037;
	// ori r27,r8,8024
	ctx.r27.u64 = ctx.r8.u64 | 8024;
	// ori r28,r10,8016
	ctx.r28.u64 = ctx.r10.u64 | 8016;
	// ori r26,r7,8025
	ctx.r26.u64 = ctx.r7.u64 | 8025;
	// li r3,2
	ctx.r3.s64 = 2;
	// ori r5,r5,8032
	ctx.r5.u64 = ctx.r5.u64 | 8032;
	// ori r4,r4,8036
	ctx.r4.u64 = ctx.r4.u64 | 8036;
	// stwx r3,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,5
	ctx.r8.s64 = 327680;
	// ld r7,-22732(r29)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r29.u32 + -22732);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stwx r9,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r9.u32);
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// ori r8,r8,15960
	ctx.r8.u64 = ctx.r8.u64 | 15960;
	// stbx r9,r31,r27
	PPC_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r9.u8);
	// stbx r9,r31,r26
	PPC_STORE_U8(ctx.r31.u32 + ctx.r26.u32, ctx.r9.u8);
	// li r6,255
	ctx.r6.s64 = 255;
	// stwx r3,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r3.u32);
	// stdx r7,r31,r28
	PPC_STORE_U64(ctx.r31.u32 + ctx.r28.u32, ctx.r7.u64);
	// stbx r9,r31,r4
	PPC_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r9.u8);
	// stbx r9,r31,r25
	PPC_STORE_U8(ctx.r31.u32 + ctx.r25.u32, ctx.r9.u8);
loc_8291ABF8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r6,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r6.u8);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// blt cr6,0x8291abf8
	if (cr6.lt) goto loc_8291ABF8;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r5,5
	ctx.r5.s64 = 5;
loc_8291AC1C:
	// addi r11,r10,8393
	ctx.r11.s64 = ctx.r10.s64 + 8393;
	// li r8,10
	ctx.r8.s64 = 10;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
loc_8291AC3C:
	// stwu r9,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8291ac3c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8291AC3C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// stb r6,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r6.u8);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// cmplwi cr6,r10,198
	cr6.compare<uint32_t>(ctx.r10.u32, 198, xer);
	// blt cr6,0x8291ac1c
	if (cr6.lt) goto loc_8291AC1C;
	// lis r11,5
	ctx.r11.s64 = 327680;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// ori r7,r11,15964
	ctx.r7.u64 = ctx.r11.u64 | 15964;
loc_8291AC74:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,10
	ctx.r8.s64 = 10;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
loc_8291AC94:
	// stwu r9,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8291ac94
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8291AC94;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// stb r6,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r6.u8);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// cmplwi cr6,r10,40
	cr6.compare<uint32_t>(ctx.r10.u32, 40, xer);
	// blt cr6,0x8291ac74
	if (cr6.lt) goto loc_8291AC74;
	// lis r11,5
	ctx.r11.s64 = 327680;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// ori r7,r11,17568
	ctx.r7.u64 = ctx.r11.u64 | 17568;
loc_8291ACCC:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,10
	ctx.r8.s64 = 10;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
loc_8291ACEC:
	// stwu r9,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8291acec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8291ACEC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// stb r6,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r6.u8);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// cmplwi cr6,r10,12
	cr6.compare<uint32_t>(ctx.r10.u32, 12, xer);
	// blt cr6,0x8291accc
	if (cr6.lt) goto loc_8291ACCC;
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lis r10,5
	ctx.r10.s64 = 327680;
	// lis r8,5
	ctx.r8.s64 = 327680;
	// lis r7,5
	ctx.r7.s64 = 327680;
	// ori r4,r11,15963
	ctx.r4.u64 = ctx.r11.u64 | 15963;
	// lis r6,5
	ctx.r6.s64 = 327680;
	// ori r11,r10,17564
	ctx.r11.u64 = ctx.r10.u64 | 17564;
	// ori r10,r8,18048
	ctx.r10.u64 = ctx.r8.u64 | 18048;
	// lis r5,5
	ctx.r5.s64 = 327680;
	// ori r8,r7,18056
	ctx.r8.u64 = ctx.r7.u64 | 18056;
	// stbx r9,r31,r4
	PPC_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r9.u8);
	// ori r7,r6,18060
	ctx.r7.u64 = ctx.r6.u64 | 18060;
	// ori r6,r5,18052
	ctx.r6.u64 = ctx.r5.u64 | 18052;
	// stbx r9,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// stbx r9,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
	// stwx r9,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u32);
	// stwx r9,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r9.u32);
	// stwx r3,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8291AD68"))) PPC_WEAK_FUNC(sub_8291AD68);
PPC_FUNC_IMPL(__imp__sub_8291AD68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// bge cr6,0x8291ad88
	if (!cr6.lt) goto loc_8291AD88;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,36400
	ctx.r10.u64 = ctx.r11.u64 | 36400;
	// mullw r11,r4,r10
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// blr 
	return;
loc_8291AD88:
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// addi r3,r11,-22684
	ctx.r3.s64 = ctx.r11.s64 + -22684;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291AD94"))) PPC_WEAK_FUNC(sub_8291AD94);
PPC_FUNC_IMPL(__imp__sub_8291AD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291AD98"))) PPC_WEAK_FUNC(sub_8291AD98);
PPC_FUNC_IMPL(__imp__sub_8291AD98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,36400
	ctx.r10.u64 = ctx.r11.u64 | 36400;
	// mullw r11,r4,r10
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291ADBC"))) PPC_WEAK_FUNC(sub_8291ADBC);
PPC_FUNC_IMPL(__imp__sub_8291ADBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291ADC0"))) PPC_WEAK_FUNC(sub_8291ADC0);
PPC_FUNC_IMPL(__imp__sub_8291ADC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x8291add0
	if (cr6.lt) goto loc_8291ADD0;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x8291add4
	if (cr6.lt) goto loc_8291ADD4;
loc_8291ADD0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8291ADD4:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x8291ade4
	if (cr6.lt) goto loc_8291ADE4;
	// cmplwi cr6,r5,32
	cr6.compare<uint32_t>(ctx.r5.u32, 32, xer);
	// blt cr6,0x8291ade8
	if (cr6.lt) goto loc_8291ADE8;
loc_8291ADE4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8291ADE8:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// mulli r11,r5,4784
	ctx.r11.s64 = ctx.r5.s64 * 4784;
	// ori r9,r10,36400
	ctx.r9.u64 = ctx.r10.u64 | 36400;
	// mullw r10,r4,r9
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,14340
	ctx.r3.s64 = ctx.r11.s64 + 14340;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291AE08"))) PPC_WEAK_FUNC(sub_8291AE08);
PPC_FUNC_IMPL(__imp__sub_8291AE08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lis r10,5
	ctx.r10.s64 = 327680;
	// li r11,4
	ctx.r11.s64 = 4;
	// ori r9,r10,8024
	ctx.r9.u64 = ctx.r10.u64 | 8024;
	// lbzx r10,r3,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
loc_8291AE18:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// srw r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8291ae3c
	if (!cr6.eq) goto loc_8291AE3C;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge 0x8291ae18
	if (!cr0.lt) goto loc_8291AE18;
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_8291AE3C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291AE44"))) PPC_WEAK_FUNC(sub_8291AE44);
PPC_FUNC_IMPL(__imp__sub_8291AE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291AE48"))) PPC_WEAK_FUNC(sub_8291AE48);
PPC_FUNC_IMPL(__imp__sub_8291AE48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,5
	ctx.r11.s64 = 327680;
	// ori r11,r11,8024
	ctx.r11.u64 = ctx.r11.u64 | 8024;
	// lbzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r3,r10,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291AE5C"))) PPC_WEAK_FUNC(sub_8291AE5C);
PPC_FUNC_IMPL(__imp__sub_8291AE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291AE60"))) PPC_WEAK_FUNC(sub_8291AE60);
PPC_FUNC_IMPL(__imp__sub_8291AE60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8291AE68;
	__savegprlr_26(ctx, base);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x8291ae88
	if (cr6.eq) goto loc_8291AE88;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// beq cr6,0x8291ae88
	if (cr6.eq) goto loc_8291AE88;
loc_8291AE7C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8291AE88:
	// cmplwi cr6,r10,120
	cr6.compare<uint32_t>(ctx.r10.u32, 120, xer);
	// bge cr6,0x8291ae7c
	if (!cr6.lt) goto loc_8291AE7C;
	// cmplwi cr6,r6,120
	cr6.compare<uint32_t>(ctx.r6.u32, 120, xer);
	// bge cr6,0x8291ae7c
	if (!cr6.lt) goto loc_8291AE7C;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bgt cr6,0x8291ae7c
	if (cr6.gt) goto loc_8291AE7C;
	// addi r9,r1,-80
	ctx.r9.s64 = ctx.r1.s64 + -80;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// std r11,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// lfd f0,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f13,-80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// bge cr6,0x8291afa4
	if (!cr6.lt) goto loc_8291AFA4;
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r30,r9,41872
	ctx.r30.u64 = ctx.r9.u64 | 41872;
	// ori r31,r8,36396
	ctx.r31.u64 = ctx.r8.u64 | 36396;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x8291af68
	if (cr6.lt) goto loc_8291AF68;
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r29,2
	ctx.r29.s64 = 131072;
	// ori r7,r9,36392
	ctx.r7.u64 = ctx.r9.u64 | 36392;
	// addi r5,r6,-3
	ctx.r5.s64 = ctx.r6.s64 + -3;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ori r8,r8,36388
	ctx.r8.u64 = ctx.r8.u64 | 36388;
	// ori r9,r29,36384
	ctx.r9.u64 = ctx.r29.u64 | 36384;
loc_8291AF04:
	// subf r29,r31,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r31.s64;
	// lfs f12,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadd f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 + ctx.f0.f64;
	// subf r28,r7,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r7.s64;
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// subf r27,r8,r11
	ctx.r27.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// subf r26,r9,r11
	ctx.r26.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfsu f0,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// lfs f8,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fadd f7,f8,f13
	ctx.f7.f64 = ctx.f8.f64 + ctx.f13.f64;
	// lfs f6,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// lfs f4,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fadd f3,f10,f11
	ctx.f3.f64 = ctx.f10.f64 + ctx.f11.f64;
	// fadd f2,f6,f7
	ctx.f2.f64 = ctx.f6.f64 + ctx.f7.f64;
	// fadd f1,f9,f3
	ctx.f1.f64 = ctx.f9.f64 + ctx.f3.f64;
	// fadd f13,f5,f2
	ctx.f13.f64 = ctx.f5.f64 + ctx.f2.f64;
	// fadd f0,f0,f1
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fadd f13,f4,f13
	ctx.f13.f64 = ctx.f4.f64 + ctx.f13.f64;
	// blt cr6,0x8291af04
	if (cr6.lt) goto loc_8291AF04;
	// stfd f13,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f13.u64);
	// stfd f0,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f0.u64);
loc_8291AF68:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bge cr6,0x8291afa4
	if (!cr6.lt) goto loc_8291AFA4;
	// subf r9,r10,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r10.s64;
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8291AF84:
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// lfsu f12,4(r11)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fadd f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 + ctx.f0.f64;
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadd f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 + ctx.f13.f64;
	// bdnz 0x8291af84
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8291AF84;
	// stfd f13,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f13.u64);
	// stfd f0,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f0.u64);
loc_8291AFA4:
	// fadd f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f13.f64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfd f13,29688(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 29688);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8291ae7c
	if (!cr6.gt) goto loc_8291AE7C;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,-80
	ctx.r10.s64 = ctx.r1.s64 + -80;
	// lfdx f13,r11,r10
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// fdiv f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 / ctx.f0.f64;
	// frsp f1,f12
	ctx.f1.f64 = double(float(ctx.f12.f64));
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8291AFD0"))) PPC_WEAK_FUNC(sub_8291AFD0);
PPC_FUNC_IMPL(__imp__sub_8291AFD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// bge cr6,0x8291afec
	if (!cr6.lt) goto loc_8291AFEC;
	// lis r11,5
	ctx.r11.s64 = 327680;
	// add r10,r4,r3
	ctx.r10.u64 = ctx.r4.u64 + ctx.r3.u64;
	// ori r9,r11,15960
	ctx.r9.u64 = ctx.r11.u64 | 15960;
	// lbzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
loc_8291AFEC:
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291AFF4"))) PPC_WEAK_FUNC(sub_8291AFF4);
PPC_FUNC_IMPL(__imp__sub_8291AFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291AFF8"))) PPC_WEAK_FUNC(sub_8291AFF8);
PPC_FUNC_IMPL(__imp__sub_8291AFF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,5
	ctx.r10.s64 = 327680;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// ori r9,r10,15963
	ctx.r9.u64 = ctx.r10.u64 | 15963;
	// lbzx r8,r3,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x8291b018
	if (cr6.lt) goto loc_8291B018;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8291B018:
	// addi r11,r11,8393
	ctx.r11.s64 = ctx.r11.s64 + 8393;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291B030"))) PPC_WEAK_FUNC(sub_8291B030);
PPC_FUNC_IMPL(__imp__sub_8291B030) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,5
	ctx.r10.s64 = 327680;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// ori r9,r10,17564
	ctx.r9.u64 = ctx.r10.u64 | 17564;
	// lbzx r8,r3,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x8291b050
	if (cr6.lt) goto loc_8291B050;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8291B050:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addis r3,r10,5
	ctx.r3.s64 = ctx.r10.s64 + 327680;
	// addi r3,r3,15964
	ctx.r3.s64 = ctx.r3.s64 + 15964;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291B06C"))) PPC_WEAK_FUNC(sub_8291B06C);
PPC_FUNC_IMPL(__imp__sub_8291B06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291B070"))) PPC_WEAK_FUNC(sub_8291B070);
PPC_FUNC_IMPL(__imp__sub_8291B070) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,5
	ctx.r10.s64 = 327680;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// ori r9,r10,18048
	ctx.r9.u64 = ctx.r10.u64 | 18048;
	// lbzx r8,r3,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x8291b090
	if (cr6.lt) goto loc_8291B090;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8291B090:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addis r3,r10,5
	ctx.r3.s64 = ctx.r10.s64 + 327680;
	// addi r3,r3,17568
	ctx.r3.s64 = ctx.r3.s64 + 17568;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291B0AC"))) PPC_WEAK_FUNC(sub_8291B0AC);
PPC_FUNC_IMPL(__imp__sub_8291B0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291B0B0"))) PPC_WEAK_FUNC(sub_8291B0B0);
PPC_FUNC_IMPL(__imp__sub_8291B0B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// addis r7,r3,5
	ctx.r7.s64 = ctx.r3.s64 + 327680;
	// addi r7,r7,15963
	ctx.r7.s64 = ctx.r7.s64 + 15963;
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,197
	cr6.compare<uint32_t>(ctx.r11.u32, 197, xer);
	// bge cr6,0x8291b110
	if (!cr6.lt) goto loc_8291B110;
	// addi r11,r11,8393
	ctx.r11.s64 = ctx.r11.s64 + 8393;
	// li r10,10
	ctx.r10.s64 = 10;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r4,-4
	ctx.r8.s64 = ctx.r4.s64 + -4;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8291B0E8:
	// lwzu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8291b0e8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8291B0E8;
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r11,255
	ctx.r10.s64 = ctx.r11.s64 + 255;
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// blr 
	return;
loc_8291B110:
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291B118"))) PPC_WEAK_FUNC(sub_8291B118);
PPC_FUNC_IMPL(__imp__sub_8291B118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// addis r8,r3,5
	ctx.r8.s64 = ctx.r3.s64 + 327680;
	// addi r8,r8,17564
	ctx.r8.s64 = ctx.r8.s64 + 17564;
	// lbz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,39
	cr6.compare<uint32_t>(ctx.r11.u32, 39, xer);
	// bge cr6,0x8291b17c
	if (!cr6.lt) goto loc_8291B17C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r4,-4
	ctx.r9.s64 = ctx.r4.s64 + -4;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r11,10
	ctx.r11.s64 = 10;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r10,r3
	ctx.r7.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addis r10,r7,5
	ctx.r10.s64 = ctx.r7.s64 + 327680;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r10,r10,15964
	ctx.r10.s64 = ctx.r10.s64 + 15964;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
loc_8291B154:
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8291b154
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8291B154;
	// lbz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r11,255
	ctx.r10.s64 = ctx.r11.s64 + 255;
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// blr 
	return;
loc_8291B17C:
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291B184"))) PPC_WEAK_FUNC(sub_8291B184);
PPC_FUNC_IMPL(__imp__sub_8291B184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291B188"))) PPC_WEAK_FUNC(sub_8291B188);
PPC_FUNC_IMPL(__imp__sub_8291B188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// addis r8,r3,5
	ctx.r8.s64 = ctx.r3.s64 + 327680;
	// addi r8,r8,18048
	ctx.r8.s64 = ctx.r8.s64 + 18048;
	// lbz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bge cr6,0x8291b1ec
	if (!cr6.lt) goto loc_8291B1EC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r4,-4
	ctx.r9.s64 = ctx.r4.s64 + -4;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r11,10
	ctx.r11.s64 = 10;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r10,r3
	ctx.r7.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addis r10,r7,5
	ctx.r10.s64 = ctx.r7.s64 + 327680;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r10,r10,17568
	ctx.r10.s64 = ctx.r10.s64 + 17568;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
loc_8291B1C4:
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8291b1c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8291B1C4;
	// lbz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r11,255
	ctx.r10.s64 = ctx.r11.s64 + 255;
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// blr 
	return;
loc_8291B1EC:
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291B1F4"))) PPC_WEAK_FUNC(sub_8291B1F4);
PPC_FUNC_IMPL(__imp__sub_8291B1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291B1F8"))) PPC_WEAK_FUNC(sub_8291B1F8);
PPC_FUNC_IMPL(__imp__sub_8291B1F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x8291b214
	if (!cr6.lt) goto loc_8291B214;
	// addis r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 65536;
	// addi r11,r11,20898
	ctx.r11.s64 = ctx.r11.s64 + 20898;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_8291B214:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291B21C"))) PPC_WEAK_FUNC(sub_8291B21C);
PPC_FUNC_IMPL(__imp__sub_8291B21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291B220"))) PPC_WEAK_FUNC(sub_8291B220);
PPC_FUNC_IMPL(__imp__sub_8291B220) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// bge cr6,0x8291b23c
	if (!cr6.lt) goto loc_8291B23C;
	// addis r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 65536;
	// addi r11,r11,20900
	ctx.r11.s64 = ctx.r11.s64 + 20900;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_8291B23C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291B244"))) PPC_WEAK_FUNC(sub_8291B244);
PPC_FUNC_IMPL(__imp__sub_8291B244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291B248"))) PPC_WEAK_FUNC(sub_8291B248);
PPC_FUNC_IMPL(__imp__sub_8291B248) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8291B250;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r29,r3,2732
	ctx.r29.s64 = ctx.r3.s64 + 2732;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r28,4
	ctx.r28.s64 = 4;
	// addi r31,r29,1688
	ctx.r31.s64 = ctx.r29.s64 + 1688;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8291B270:
	// li r5,560
	ctx.r5.s64 = 560;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x8291B280;
	sub_831CDCF0(ctx, base);
	// li r5,560
	ctx.r5.s64 = 560;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,-1128(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1128, ctx.r30.u32);
	// addi r3,r31,-1124
	ctx.r3.s64 = ctx.r31.s64 + -1124;
	// bl 0x831cdcf0
	ctx.lr = 0x8291B294;
	sub_831CDCF0(ctx, base);
	// li r5,560
	ctx.r5.s64 = 560;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,-564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -564, ctx.r30.u32);
	// addi r3,r31,-560
	ctx.r3.s64 = ctx.r31.s64 + -560;
	// bl 0x831cdcf0
	ctx.lr = 0x8291B2A8;
	sub_831CDCF0(ctx, base);
	// li r5,560
	ctx.r5.s64 = 560;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x831cdcf0
	ctx.lr = 0x8291B2BC;
	sub_831CDCF0(ctx, base);
	// stw r30,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82919178
	ctx.lr = 0x8291B2C8;
	sub_82919178(ctx, base);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,2256
	ctx.r29.s64 = ctx.r29.s64 + 2256;
	// addi r31,r31,2256
	ctx.r31.s64 = ctx.r31.s64 + 2256;
	// bge 0x8291b270
	if (!cr0.lt) goto loc_8291B270;
	// addi r3,r27,14012
	ctx.r3.s64 = ctx.r27.s64 + 14012;
	// bl 0x8291bbe0
	ctx.lr = 0x8291B2E0;
	sub_8291BBE0(ctx, base);
	// addi r3,r27,14276
	ctx.r3.s64 = ctx.r27.s64 + 14276;
	// bl 0x829190d0
	ctx.lr = 0x8291B2E8;
	sub_829190D0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r31,r27,14340
	ctx.r31.s64 = ctx.r27.s64 + 14340;
	// li r29,31
	ctx.r29.s64 = 31;
	// ori r28,r11,65535
	ctx.r28.u64 = ctx.r11.u64 | 65535;
loc_8291B2F8:
	// li r5,560
	ctx.r5.s64 = 560;
	// sth r28,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r28.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r3,r31,4152
	ctx.r3.s64 = ctx.r31.s64 + 4152;
	// bl 0x831cdcf0
	ctx.lr = 0x8291B310;
	sub_831CDCF0(ctx, base);
	// stw r30,4712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4712, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8291a758
	ctx.lr = 0x8291B31C;
	sub_8291A758(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,4784
	ctx.r31.s64 = ctx.r31.s64 + 4784;
	// bge 0x8291b2f8
	if (!cr0.lt) goto loc_8291B2F8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x829191f8
	ctx.lr = 0x8291B334;
	sub_829191F8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8291B340"))) PPC_WEAK_FUNC(sub_8291B340);
PPC_FUNC_IMPL(__imp__sub_8291B340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r10,10
	ctx.r10.s64 = 10;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8291B350:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8291b350
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8291B350;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r7,255
	ctx.r7.s64 = 255;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stb r7,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r7.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291B380"))) PPC_WEAK_FUNC(sub_8291B380);
PPC_FUNC_IMPL(__imp__sub_8291B380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8291B388;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// ori r29,r11,36400
	ctx.r29.u64 = ctx.r11.u64 | 36400;
loc_8291B3A0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8291b248
	ctx.lr = 0x8291B3A8;
	sub_8291B248(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// bge 0x8291b3a0
	if (!cr0.lt) goto loc_8291B3A0;
	// addis r31,r28,5
	ctx.r31.s64 = ctx.r28.s64 + 327680;
	// li r5,560
	ctx.r5.s64 = 560;
	// addi r31,r31,7264
	ctx.r31.s64 = ctx.r31.s64 + 7264;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x831cdcf0
	ctx.lr = 0x8291B3CC;
	sub_831CDCF0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r30.u32);
	// bl 0x8291ba58
	ctx.lr = 0x8291B3DC;
	sub_8291BA58(ctx, base);
	// addis r10,r28,5
	ctx.r10.s64 = ctx.r28.s64 + 327680;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r10,r10,8016
	ctx.r10.s64 = ctx.r10.s64 + 8016;
	// addis r11,r28,5
	ctx.r11.s64 = ctx.r28.s64 + 327680;
	// li r8,197
	ctx.r8.s64 = 197;
	// addi r11,r11,8040
	ctx.r11.s64 = ctx.r11.s64 + 8040;
	// li r3,3
	ctx.r3.s64 = 3;
	// sth r9,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// li r6,255
	ctx.r6.s64 = 255;
loc_8291B40C:
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8291B41C:
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8291b41c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8291B41C;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// stb r6,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r6.u8);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// bge 0x8291b40c
	if (!cr0.lt) goto loc_8291B40C;
	// addis r11,r28,5
	ctx.r11.s64 = ctx.r28.s64 + 327680;
	// li r9,39
	ctx.r9.s64 = 39;
	// addi r11,r11,15964
	ctx.r11.s64 = ctx.r11.s64 + 15964;
loc_8291B450:
	// li r8,10
	ctx.r8.s64 = 10;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_8291B460:
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8291b460
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8291B460;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// stb r6,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r6.u8);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// bge 0x8291b450
	if (!cr0.lt) goto loc_8291B450;
	// addis r11,r28,5
	ctx.r11.s64 = ctx.r28.s64 + 327680;
	// li r9,11
	ctx.r9.s64 = 11;
	// addi r11,r11,17568
	ctx.r11.s64 = ctx.r11.s64 + 17568;
loc_8291B494:
	// li r8,10
	ctx.r8.s64 = 10;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_8291B4A4:
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8291b4a4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8291B4A4;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// stb r6,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r6.u8);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// bge 0x8291b494
	if (!cr0.lt) goto loc_8291B494;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8291ab40
	ctx.lr = 0x8291B4D4;
	sub_8291AB40(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8291B4E0"))) PPC_WEAK_FUNC(sub_8291B4E0);
PPC_FUNC_IMPL(__imp__sub_8291B4E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,119
	ctx.r6.s64 = 119;
	// cmplwi cr6,r5,5
	cr6.compare<uint32_t>(ctx.r5.u32, 5, xer);
	// bgt cr6,0x8291b540
	if (cr6.gt) goto loc_8291B540;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8291b514
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8291B514;
	// bdzf 4*cr6+eq,0x8291b520
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8291B520;
	// bdzf 4*cr6+eq,0x8291b52c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8291B52C;
	// bdzf 4*cr6+eq,0x8291b540
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8291B540;
	// bne cr6,0x8291b538
	if (!cr6.eq) goto loc_8291B538;
	// li r6,44
	ctx.r6.s64 = 44;
	// b 0x8291b53c
	goto loc_8291B53C;
loc_8291B514:
	// li r11,45
	ctx.r11.s64 = 45;
	// li r6,89
	ctx.r6.s64 = 89;
	// b 0x8291b540
	goto loc_8291B540;
loc_8291B520:
	// li r11,90
	ctx.r11.s64 = 90;
	// li r6,104
	ctx.r6.s64 = 104;
	// b 0x8291b540
	goto loc_8291B540;
loc_8291B52C:
	// li r11,105
	ctx.r11.s64 = 105;
	// li r6,119
	ctx.r6.s64 = 119;
	// b 0x8291b540
	goto loc_8291B540;
loc_8291B538:
	// li r6,119
	ctx.r6.s64 = 119;
loc_8291B53C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8291B540:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x8291ae60
	sub_8291AE60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8291B548"))) PPC_WEAK_FUNC(sub_8291B548);
PPC_FUNC_IMPL(__imp__sub_8291B548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r10,58
	ctx.r10.s64 = 58;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8291B558:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8291b558
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8291B558;
	// stb r9,58(r3)
	PPC_STORE_U8(ctx.r3.u32 + 58, ctx.r9.u8);
	// stw r9,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r9.u32);
	// stw r9,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r9.u32);
	// stw r9,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291B574"))) PPC_WEAK_FUNC(sub_8291B574);
PPC_FUNC_IMPL(__imp__sub_8291B574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291B578"))) PPC_WEAK_FUNC(sub_8291B578);
PPC_FUNC_IMPL(__imp__sub_8291B578) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x8291b5b4
	if (cr6.lt) goto loc_8291B5B4;
	// cmpwi cr6,r5,58
	cr6.compare<int32_t>(ctx.r5.s32, 58, xer);
	// bge cr6,0x8291b5b4
	if (!cr6.lt) goto loc_8291B5B4;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,29744
	ctx.r10.s64 = ctx.r10.s64 + 29744;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r7,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r7.u8);
	// blr 
	return;
loc_8291B5B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291B5BC"))) PPC_WEAK_FUNC(sub_8291B5BC);
PPC_FUNC_IMPL(__imp__sub_8291B5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291B5C0"))) PPC_WEAK_FUNC(sub_8291B5C0);
PPC_FUNC_IMPL(__imp__sub_8291B5C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,12
	cr6.compare<uint32_t>(ctx.r4.u32, 12, xer);
	// bgt cr6,0x8291b6ac
	if (cr6.gt) goto loc_8291B6AC;
	// lis r12,-32110
	ctx.r12.s64 = -2104360960;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-18972
	ctx.r12.s64 = ctx.r12.s64 + -18972;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u32) {
	case 0:
		goto loc_8291B618;
	case 1:
		goto loc_8291B624;
	case 2:
		goto loc_8291B630;
	case 3:
		goto loc_8291B63C;
	case 4:
		goto loc_8291B648;
	case 5:
		goto loc_8291B654;
	case 6:
		goto loc_8291B660;
	case 7:
		goto loc_8291B66C;
	case 8:
		goto loc_8291B678;
	case 9:
		goto loc_8291B684;
	case 10:
		goto loc_8291B690;
	case 11:
		goto loc_8291B69C;
	case 12:
		goto loc_8291B6A8;
	default:
		return;
	}
	// lwz r20,-18920(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18920);
	// lwz r20,-18908(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18908);
	// lwz r20,-18896(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18896);
	// lwz r20,-18884(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18884);
	// lwz r20,-18872(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18872);
	// lwz r20,-18860(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18860);
	// lwz r20,-18848(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18848);
	// lwz r20,-18836(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18836);
	// lwz r20,-18824(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18824);
	// lwz r20,-18812(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18812);
	// lwz r20,-18800(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18800);
	// lwz r20,-18788(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18788);
	// lwz r20,-18776(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18776);
loc_8291B618:
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_8291B624:
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_8291B630:
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_8291B63C:
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_8291B648:
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_8291B654:
	// lbz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_8291B660:
	// lbz r11,7(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_8291B66C:
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_8291B678:
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_8291B684:
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_8291B690:
	// lbz r11,11(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_8291B69C:
	// lbz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_8291B6A8:
	// lbz r11,13(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
loc_8291B6AC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291B6B4"))) PPC_WEAK_FUNC(sub_8291B6B4);
PPC_FUNC_IMPL(__imp__sub_8291B6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291B6B8"))) PPC_WEAK_FUNC(sub_8291B6B8);
PPC_FUNC_IMPL(__imp__sub_8291B6B8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291B6CC"))) PPC_WEAK_FUNC(sub_8291B6CC);
PPC_FUNC_IMPL(__imp__sub_8291B6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291B6D0"))) PPC_WEAK_FUNC(sub_8291B6D0);
PPC_FUNC_IMPL(__imp__sub_8291B6D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,12
	cr6.compare<uint32_t>(ctx.r4.u32, 12, xer);
	// bgt cr6,0x8291b81c
	if (cr6.gt) goto loc_8291B81C;
	// lis r12,-32110
	ctx.r12.s64 = -2104360960;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-18700
	ctx.r12.s64 = ctx.r12.s64 + -18700;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u32) {
	case 0:
		goto loc_8291B728;
	case 1:
		goto loc_8291B73C;
	case 2:
		goto loc_8291B750;
	case 3:
		goto loc_8291B764;
	case 4:
		goto loc_8291B778;
	case 5:
		goto loc_8291B78C;
	case 6:
		goto loc_8291B7A0;
	case 7:
		goto loc_8291B7B4;
	case 8:
		goto loc_8291B7C8;
	case 9:
		goto loc_8291B7DC;
	case 10:
		goto loc_8291B7F0;
	case 11:
		goto loc_8291B804;
	case 12:
		goto loc_8291B818;
	default:
		return;
	}
	// lwz r20,-18648(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18648);
	// lwz r20,-18628(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18628);
	// lwz r20,-18608(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18608);
	// lwz r20,-18588(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18588);
	// lwz r20,-18568(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18568);
	// lwz r20,-18548(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18548);
	// lwz r20,-18528(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18528);
	// lwz r20,-18508(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18508);
	// lwz r20,-18488(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18488);
	// lwz r20,-18468(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18468);
	// lwz r20,-18448(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18448);
	// lwz r20,-18428(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18428);
	// lwz r20,-18408(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18408);
loc_8291B728:
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
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
loc_8291B73C:
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
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
loc_8291B750:
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
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
loc_8291B764:
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
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
loc_8291B778:
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
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
loc_8291B78C:
	// lbz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
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
loc_8291B7A0:
	// lbz r11,7(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
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
loc_8291B7B4:
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
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
loc_8291B7C8:
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
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
loc_8291B7DC:
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
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
loc_8291B7F0:
	// lbz r11,11(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
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
loc_8291B804:
	// lbz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
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
loc_8291B818:
	// lbz r11,13(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
loc_8291B81C:
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

__attribute__((alias("__imp__sub_8291B82C"))) PPC_WEAK_FUNC(sub_8291B82C);
PPC_FUNC_IMPL(__imp__sub_8291B82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291B830"))) PPC_WEAK_FUNC(sub_8291B830);
PPC_FUNC_IMPL(__imp__sub_8291B830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,9
	cr6.compare<uint32_t>(ctx.r4.u32, 9, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// lis r12,-32110
	ctx.r12.s64 = -2104360960;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-18344
	ctx.r12.s64 = ctx.r12.s64 + -18344;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u32) {
	case 0:
		goto loc_8291B880;
	case 1:
		goto loc_8291B888;
	case 2:
		goto loc_8291B890;
	case 3:
		goto loc_8291B8A4;
	case 4:
		goto loc_8291B8AC;
	case 5:
		goto loc_8291B8B4;
	case 6:
		goto loc_8291B8C8;
	case 7:
		goto loc_8291B8D0;
	case 8:
		goto loc_8291B8D8;
	case 9:
		goto loc_8291B8EC;
	default:
		return;
	}
	// lwz r20,-18304(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18304);
	// lwz r20,-18296(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18296);
	// lwz r20,-18288(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18288);
	// lwz r20,-18268(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18268);
	// lwz r20,-18260(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18260);
	// lwz r20,-18252(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18252);
	// lwz r20,-18232(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18232);
	// lwz r20,-18224(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18224);
	// lwz r20,-18216(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18216);
	// lwz r20,-18196(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18196);
loc_8291B880:
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// b 0x8291b8f0
	goto loc_8291B8F0;
loc_8291B888:
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// b 0x8291b8f0
	goto loc_8291B8F0;
loc_8291B890:
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8291b8f8
	if (!cr6.eq) goto loc_8291B8F8;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// b 0x8291b8f0
	goto loc_8291B8F0;
loc_8291B8A4:
	// lbz r11,5(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// b 0x8291b8f0
	goto loc_8291B8F0;
loc_8291B8AC:
	// lbz r11,6(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// b 0x8291b8f0
	goto loc_8291B8F0;
loc_8291B8B4:
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8291b8f8
	if (!cr6.eq) goto loc_8291B8F8;
	// lbz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// b 0x8291b8f0
	goto loc_8291B8F0;
loc_8291B8C8:
	// lbz r11,9(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// b 0x8291b8f0
	goto loc_8291B8F0;
loc_8291B8D0:
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// b 0x8291b8f0
	goto loc_8291B8F0;
loc_8291B8D8:
	// lbz r10,10(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8291b8f8
	if (!cr6.eq) goto loc_8291B8F8;
	// lbz r11,11(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// b 0x8291b8f0
	goto loc_8291B8F0;
loc_8291B8EC:
	// lbz r11,13(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
loc_8291B8F0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_8291B8F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291B900"))) PPC_WEAK_FUNC(sub_8291B900);
PPC_FUNC_IMPL(__imp__sub_8291B900) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,58(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 58);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291B908"))) PPC_WEAK_FUNC(sub_8291B908);
PPC_FUNC_IMPL(__imp__sub_8291B908) {
	PPC_FUNC_PROLOGUE();
	// stb r4,58(r3)
	PPC_STORE_U8(ctx.r3.u32 + 58, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291B910"))) PPC_WEAK_FUNC(sub_8291B910);
PPC_FUNC_IMPL(__imp__sub_8291B910) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// slw r11,r11,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8291b948
	if (cr6.eq) goto loc_8291B948;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,29944
	ctx.r8.s64 = ctx.r10.s64 + 29944;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// and r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 & ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8291b94c
	if (!cr6.eq) goto loc_8291B94C;
loc_8291B948:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8291B94C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291B954"))) PPC_WEAK_FUNC(sub_8291B954);
PPC_FUNC_IMPL(__imp__sub_8291B954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291B958"))) PPC_WEAK_FUNC(sub_8291B958);
PPC_FUNC_IMPL(__imp__sub_8291B958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-22552
	ctx.r9.s64 = ctx.r11.s64 + -22552;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291B96C"))) PPC_WEAK_FUNC(sub_8291B96C);
PPC_FUNC_IMPL(__imp__sub_8291B96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291B970"))) PPC_WEAK_FUNC(sub_8291B970);
PPC_FUNC_IMPL(__imp__sub_8291B970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-22440
	ctx.r9.s64 = ctx.r11.s64 + -22440;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291B984"))) PPC_WEAK_FUNC(sub_8291B984);
PPC_FUNC_IMPL(__imp__sub_8291B984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291B988"))) PPC_WEAK_FUNC(sub_8291B988);
PPC_FUNC_IMPL(__imp__sub_8291B988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-22368
	ctx.r9.s64 = ctx.r11.s64 + -22368;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291B99C"))) PPC_WEAK_FUNC(sub_8291B99C);
PPC_FUNC_IMPL(__imp__sub_8291B99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291B9A0"))) PPC_WEAK_FUNC(sub_8291B9A0);
PPC_FUNC_IMPL(__imp__sub_8291B9A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r10,9
	ctx.r10.s64 = 9;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8291B9B0:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8291b9b0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8291B9B0;
	// stb r9,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291B9C0"))) PPC_WEAK_FUNC(sub_8291B9C0);
PPC_FUNC_IMPL(__imp__sub_8291B9C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r4,8
	cr6.compare<uint32_t>(ctx.r4.u32, 8, xer);
	// bgt cr6,0x8291ba14
	if (cr6.gt) goto loc_8291BA14;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8291b9fc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8291B9FC;
	// bdzf 4*cr6+eq,0x8291b9fc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8291B9FC;
	// bdzf 4*cr6+eq,0x8291b9fc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8291B9FC;
	// bdzf 4*cr6+eq,0x8291ba08
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8291BA08;
	// bdzf 4*cr6+eq,0x8291ba08
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8291BA08;
	// bdzf 4*cr6+eq,0x8291ba08
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8291BA08;
	// bdzf 4*cr6+eq,0x8291ba08
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8291BA08;
	// bne cr6,0x8291ba08
	if (!cr6.eq) goto loc_8291BA08;
loc_8291B9FC:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,100
	ctx.r11.s64 = 100;
	// b 0x8291ba18
	goto loc_8291BA18;
loc_8291BA08:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8291ba18
	goto loc_8291BA18;
loc_8291BA14:
	// li r9,0
	ctx.r9.s64 = 0;
loc_8291BA18:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r8,r5,24
	ctx.r8.u64 = ctx.r5.u32 & 0xFF;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bge cr6,0x8291ba38
	if (!cr6.lt) goto loc_8291BA38;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_8291BA38:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bge cr6,0x8291ba4c
	if (!cr6.lt) goto loc_8291BA4C;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_8291BA4C:
	// stbx r5,r4,r3
	PPC_STORE_U8(ctx.r4.u32 + ctx.r3.u32, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291BA54"))) PPC_WEAK_FUNC(sub_8291BA54);
PPC_FUNC_IMPL(__imp__sub_8291BA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291BA58"))) PPC_WEAK_FUNC(sub_8291BA58);
PPC_FUNC_IMPL(__imp__sub_8291BA58) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,76
	ctx.r3.s64 = ctx.r3.s64 + 76;
	// li r5,560
	ctx.r5.s64 = 560;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x8291BAC4;
	sub_831CDCF0(ctx, base);
	// li r10,27
	ctx.r10.s64 = 27;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r31,640
	ctx.r11.s64 = ctx.r31.s64 + 640;
	// stw r9,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r9.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8291BADC:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8291badc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8291BADC;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_8291BB04"))) PPC_WEAK_FUNC(sub_8291BB04);
PPC_FUNC_IMPL(__imp__sub_8291BB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291BB08"))) PPC_WEAK_FUNC(sub_8291BB08);
PPC_FUNC_IMPL(__imp__sub_8291BB08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmplwi cr6,r4,27
	cr6.compare<uint32_t>(ctx.r4.u32, 27, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r4,160
	ctx.r11.s64 = ctx.r4.s64 + 160;
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// clrldi r9,r5,32
	ctx.r9.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpld cr6,r7,r8
	cr6.compare<uint64_t>(ctx.r7.u64, ctx.r8.u64, xer);
	// ble cr6,0x8291bb48
	if (!cr6.gt) goto loc_8291BB48;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
loc_8291BB48:
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291BB58"))) PPC_WEAK_FUNC(sub_8291BB58);
PPC_FUNC_IMPL(__imp__sub_8291BB58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmplwi cr6,r4,27
	cr6.compare<uint32_t>(ctx.r4.u32, 27, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r4,160
	ctx.r11.s64 = ctx.r4.s64 + 160;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291BB78"))) PPC_WEAK_FUNC(sub_8291BB78);
PPC_FUNC_IMPL(__imp__sub_8291BB78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,560(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8291bb90
	if (!cr6.eq) goto loc_8291BB90;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8291BB90:
	// clrlwi r8,r4,24
	ctx.r8.u64 = ctx.r4.u32 & 0xFF;
	// rlwinm r9,r4,2,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3FC;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r7,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fdivs f1,f9,f12
	ctx.f1.f64 = double(float(ctx.f9.f64 / ctx.f12.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291BBDC"))) PPC_WEAK_FUNC(sub_8291BBDC);
PPC_FUNC_IMPL(__imp__sub_8291BBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291BBE0"))) PPC_WEAK_FUNC(sub_8291BBE0);
PPC_FUNC_IMPL(__imp__sub_8291BBE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// li r10,32
	ctx.r10.s64 = 32;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r3,132
	ctx.r11.s64 = ctx.r3.s64 + 132;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
loc_8291BC00:
	// stfs f0,-124(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -124, temp.u32);
	// stfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8291bc00
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8291BC00;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291BC10"))) PPC_WEAK_FUNC(sub_8291BC10);
PPC_FUNC_IMPL(__imp__sub_8291BC10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r11,34
	ctx.r9.s64 = ctx.r11.s64 + 34;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f2,r8,r3
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x8291bc4c
	if (cr6.lt) goto loc_8291BC4C;
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_8291BC4C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291BC6C"))) PPC_WEAK_FUNC(sub_8291BC6C);
PPC_FUNC_IMPL(__imp__sub_8291BC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291BC70"))) PPC_WEAK_FUNC(sub_8291BC70);
PPC_FUNC_IMPL(__imp__sub_8291BC70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8291bc98
	if (!cr6.eq) goto loc_8291BC98;
loc_8291BC80:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
loc_8291BC98:
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bge cr6,0x8291bc80
	if (!cr6.lt) goto loc_8291BC80;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r9,r6,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r6.s64;
	// addic. r10,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r10.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge 0x8291bcb4
	if (!cr0.lt) goto loc_8291BCB4;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
loc_8291BCB4:
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// addi r8,r10,34
	ctx.r8.s64 = ctx.r10.s64 + 34;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfsx f0,r7,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfsx f13,r6,r11
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291BCDC"))) PPC_WEAK_FUNC(sub_8291BCDC);
PPC_FUNC_IMPL(__imp__sub_8291BCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291BCE0"))) PPC_WEAK_FUNC(sub_8291BCE0);
PPC_FUNC_IMPL(__imp__sub_8291BCE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r7,4
	ctx.r7.s64 = 4;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_8291BD04:
	// stbx r9,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8291bd04
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8291BD04;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291BD18"))) PPC_WEAK_FUNC(sub_8291BD18);
PPC_FUNC_IMPL(__imp__sub_8291BD18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r4,3
	ctx.r11.s64 = ctx.r4.s64 + 3;
	// add r10,r4,r3
	ctx.r10.u64 = ctx.r4.u64 + ctx.r3.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r8.u8);
	// stwx r5,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291BD3C"))) PPC_WEAK_FUNC(sub_8291BD3C);
PPC_FUNC_IMPL(__imp__sub_8291BD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291BD40"))) PPC_WEAK_FUNC(sub_8291BD40);
PPC_FUNC_IMPL(__imp__sub_8291BD40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// blt cr6,0x8291bd50
	if (cr6.lt) goto loc_8291BD50;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8291BD50:
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291BD5C"))) PPC_WEAK_FUNC(sub_8291BD5C);
PPC_FUNC_IMPL(__imp__sub_8291BD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291BD60"))) PPC_WEAK_FUNC(sub_8291BD60);
PPC_FUNC_IMPL(__imp__sub_8291BD60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// blt cr6,0x8291bd70
	if (cr6.lt) goto loc_8291BD70;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8291BD70:
	// addi r11,r4,3
	ctx.r11.s64 = ctx.r4.s64 + 3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// subfc r8,r9,r5
	xer.ca = ctx.r5.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r5.s64 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r6,31
	ctx.r3.u64 = ctx.r6.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291BD8C"))) PPC_WEAK_FUNC(sub_8291BD8C);
PPC_FUNC_IMPL(__imp__sub_8291BD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291BD90"))) PPC_WEAK_FUNC(sub_8291BD90);
PPC_FUNC_IMPL(__imp__sub_8291BD90) {
	PPC_FUNC_PROLOGUE();
	// stw r4,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r4.u32);
	// addi r3,r4,4
	ctx.r3.s64 = ctx.r4.s64 + 4;
	// b 0x825749e0
	sub_825749E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8291BD9C"))) PPC_WEAK_FUNC(sub_8291BD9C);
PPC_FUNC_IMPL(__imp__sub_8291BD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291BDA0"))) PPC_WEAK_FUNC(sub_8291BDA0);
PPC_FUNC_IMPL(__imp__sub_8291BDA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8291BDA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,261
	ctx.r10.s64 = 17104896;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r10,13
	ctx.r10.u64 = ctx.r10.u64 | 13;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x8291be4c
	if (cr6.gt) goto loc_8291BE4C;
	// beq cr6,0x8291be2c
	if (cr6.eq) goto loc_8291BE2C;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x8291bdf4
	if (cr6.eq) goto loc_8291BDF4;
	// lis r10,261
	ctx.r10.s64 = 17104896;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
loc_8291BDE0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8291c438
	ctx.lr = 0x8291BDEC;
	sub_8291C438(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8291BDF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8291c6f0
	ctx.lr = 0x8291BDFC;
	sub_8291C6F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8291be20
	if (cr6.eq) goto loc_8291BE20;
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
	ctx.lr = 0x8291BE20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8291BE20:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8291BE2C:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8291BE40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8291BE4C:
	// lis r10,261
	ctx.r10.s64 = 17104896;
	// ori r9,r10,15
	ctx.r9.u64 = ctx.r10.u64 | 15;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x8291bde0
	if (!cr6.eq) goto loc_8291BDE0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8291c438
	ctx.lr = 0x8291BE68;
	sub_8291C438(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8291BE84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8291BE90"))) PPC_WEAK_FUNC(sub_8291BE90);
PPC_FUNC_IMPL(__imp__sub_8291BE90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8291BE98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r30,40(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,31784
	ctx.r10.s64 = ctx.r11.s64 + 31784;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8291bedc
	if (cr6.eq) goto loc_8291BEDC;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82574b18
	ctx.lr = 0x8291BEC0;
	sub_82574B18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x8291bedc
	if (cr6.gt) goto loc_8291BEDC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8291BEDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8291BEDC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r31,84
	ctx.r30.s64 = ctx.r31.s64 + 84;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x8291BEF4;
	sub_825E0CF8(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8291bf20
	if (cr6.eq) goto loc_8291BF20;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x8291BF1C;
	sub_8353F3B8(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_8291BF20:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r31,64
	ctx.r30.s64 = ctx.r31.s64 + 64;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x8291BF38;
	sub_825E0CF8(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8291bf60
	if (cr6.eq) goto loc_8291BF60;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x8291BF5C;
	sub_8353F3B8(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_8291BF60:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r31,44
	ctx.r30.s64 = ctx.r31.s64 + 44;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x8291BF78;
	sub_825E0CF8(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8291bfa0
	if (cr6.eq) goto loc_8291BFA0;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x8291BF9C;
	sub_8353F3B8(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_8291BFA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8291c428
	ctx.lr = 0x8291BFA8;
	sub_8291C428(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8291BFB0"))) PPC_WEAK_FUNC(sub_8291BFB0);
PPC_FUNC_IMPL(__imp__sub_8291BFB0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8291c3e0
	ctx.lr = 0x8291BFCC;
	sub_8291C3E0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,31784
	ctx.r10.s64 = ctx.r11.s64 + 31784;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r31,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r31.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r7,r9,-24672
	ctx.r7.s64 = ctx.r9.s64 + -24672;
	// stb r31,48(r30)
	PPC_STORE_U8(ctx.r30.u32 + 48, ctx.r31.u8);
	// stw r31,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r31.u32);
	// addi r6,r8,-24692
	ctx.r6.s64 = ctx.r8.s64 + -24692;
	// stw r7,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r7.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r31,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r31.u32);
	// stw r31,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r31.u32);
	// addi r4,r5,-24656
	ctx.r4.s64 = ctx.r5.s64 + -24656;
	// stb r31,68(r30)
	PPC_STORE_U8(ctx.r30.u32 + 68, ctx.r31.u8);
	// stw r31,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r31.u32);
	// stw r6,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r6.u32);
	// stw r31,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r31.u32);
	// stw r31,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r31.u32);
	// stb r31,88(r30)
	PPC_STORE_U8(ctx.r30.u32 + 88, ctx.r31.u8);
	// stw r31,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r31.u32);
	// stw r4,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r4.u32);
	// stw r31,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r31.u32);
	// stw r31,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r31.u32);
	// bl 0x83740858
	ctx.lr = 0x8291C038;
	sub_83740858(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r31,112(r30)
	PPC_STORE_U8(ctx.r30.u32 + 112, ctx.r31.u8);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 108, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291C068"))) PPC_WEAK_FUNC(sub_8291C068);
PPC_FUNC_IMPL(__imp__sub_8291C068) {
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
	// bl 0x8291be90
	ctx.lr = 0x8291C088;
	sub_8291BE90(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8291c0a8
	if (cr6.eq) goto loc_8291C0A8;
	// bl 0x82595188
	ctx.lr = 0x8291C098;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8291C0A8;
	sub_825952B8(ctx, base);
loc_8291C0A8:
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

__attribute__((alias("__imp__sub_8291C0C4"))) PPC_WEAK_FUNC(sub_8291C0C4);
PPC_FUNC_IMPL(__imp__sub_8291C0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291C0C8"))) PPC_WEAK_FUNC(sub_8291C0C8);
PPC_FUNC_IMPL(__imp__sub_8291C0C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8291C0D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 68);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r3,64
	ctx.r31.s64 = ctx.r3.s64 + 64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8291c0f0
	if (!cr6.eq) goto loc_8291C0F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ab6c8
	ctx.lr = 0x8291C0F0;
	sub_825AB6C8(ctx, base);
loc_8291C0F0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8291c10c
	if (!cr6.eq) goto loc_8291C10C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_8291C10C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// lwz r11,4456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4456);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x8291c168
	if (cr6.gt) goto loc_8291C168;
	// lis r12,-32110
	ctx.r12.s64 = -2104360960;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-16068
	ctx.r12.s64 = ctx.r12.s64 + -16068;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8291C168;
	case 1:
		goto loc_8291C164;
	case 2:
		goto loc_8291C168;
	case 3:
		goto loc_8291C164;
	case 4:
		goto loc_8291C168;
	case 5:
		goto loc_8291C164;
	case 6:
		goto loc_8291C168;
	case 7:
		goto loc_8291C164;
	case 8:
		goto loc_8291C168;
	case 9:
		goto loc_8291C164;
	default:
		return;
	}
	// lwz r20,-16024(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -16024);
	// lwz r20,-16028(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -16028);
	// lwz r20,-16024(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -16024);
	// lwz r20,-16028(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -16028);
	// lwz r20,-16024(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -16024);
	// lwz r20,-16028(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -16028);
	// lwz r20,-16024(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -16024);
	// lwz r20,-16028(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -16028);
	// lwz r20,-16024(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -16024);
	// lwz r20,-16028(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -16028);
loc_8291C164:
	// li r30,1
	ctx.r30.s64 = 1;
loc_8291C168:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8291c178
	if (cr6.eq) goto loc_8291C178;
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
loc_8291C178:
	// lbz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 88);
	// addi r31,r29,84
	ctx.r31.s64 = ctx.r29.s64 + 84;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8291c190
	if (!cr6.eq) goto loc_8291C190;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa000
	ctx.lr = 0x8291C190;
	sub_825AA000(ctx, base);
loc_8291C190:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8291c1ac
	if (!cr6.eq) goto loc_8291C1AC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_8291C1AC:
	// clrlwi r28,r30,24
	ctx.r28.u64 = ctx.r30.u32 & 0xFF;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8291c1ec
	if (cr6.eq) goto loc_8291C1EC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
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
	// bne cr6,0x8291c1ec
	if (!cr6.eq) goto loc_8291C1EC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8291c758
	ctx.lr = 0x8291C1E0;
	sub_8291C758(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8291c1f0
	if (cr6.eq) goto loc_8291C1F0;
loc_8291C1EC:
	// li r30,1
	ctx.r30.s64 = 1;
loc_8291C1F0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8291c200
	if (cr6.eq) goto loc_8291C200;
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
loc_8291C200:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lbz r11,112(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 112);
	// beq cr6,0x8291c23c
	if (cr6.eq) goto loc_8291C23C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8291c268
	if (!cr6.eq) goto loc_8291C268;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,112(r29)
	PPC_STORE_U8(ctx.r29.u32 + 112, ctx.r11.u8);
	// bl 0x8291ce38
	ctx.lr = 0x8291C224;
	sub_8291CE38(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8291d270
	ctx.lr = 0x8291C230;
	sub_8291D270(ctx, base);
	// bl 0x8291ce38
	ctx.lr = 0x8291C234;
	sub_8291CE38(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8291c260
	goto loc_8291C260;
loc_8291C23C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8291c268
	if (cr6.eq) goto loc_8291C268;
	// stb r27,112(r29)
	PPC_STORE_U8(ctx.r29.u32 + 112, ctx.r27.u8);
	// bl 0x8291ce38
	ctx.lr = 0x8291C24C;
	sub_8291CE38(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x8291d270
	ctx.lr = 0x8291C258;
	sub_8291D270(ctx, base);
	// bl 0x8291ce38
	ctx.lr = 0x8291C25C;
	sub_8291CE38(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
loc_8291C260:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8291d270
	ctx.lr = 0x8291C268;
	sub_8291D270(ctx, base);
loc_8291C268:
	// bl 0x830ff290
	ctx.lr = 0x8291C26C;
	sub_830FF290(ctx, base);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,104(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x8291c2c0
	if (cr6.eq) goto loc_8291C2C0;
	// stw r11,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r11.u32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x8291ce38
	ctx.lr = 0x8291C28C;
	sub_8291CE38(ctx, base);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// li r4,0
	ctx.r4.s64 = 0;
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x8291d2d8
	ctx.lr = 0x8291C2A0;
	sub_8291D2D8(ctx, base);
	// lwz r9,104(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// bl 0x8291ce38
	ctx.lr = 0x8291C2AC;
	sub_8291CE38(ctx, base);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r4,1
	ctx.r4.s64 = 1;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// bl 0x8291d2d8
	ctx.lr = 0x8291C2C0;
	sub_8291D2D8(ctx, base);
loc_8291C2C0:
	// lbz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 48);
	// addi r31,r29,44
	ctx.r31.s64 = ctx.r29.s64 + 44;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8291c2d8
	if (!cr6.eq) goto loc_8291C2D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a9e30
	ctx.lr = 0x8291C2D8;
	sub_825A9E30(ctx, base);
loc_8291C2D8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8291c2f4
	if (!cr6.eq) goto loc_8291C2F4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_8291C2F4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8291c758
	ctx.lr = 0x8291C300;
	sub_8291C758(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8291c31c
	if (cr6.eq) goto loc_8291C31C;
	// lwz r9,104(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x8291c354
	goto loc_8291C354;
loc_8291C31C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8291c348
	if (cr6.eq) goto loc_8291C348;
	// lwz r10,104(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// lfs f0,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// stfs f10,108(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 108, temp.u32);
	// b 0x8291c36c
	goto loc_8291C36C;
loc_8291C348:
	// lwz r9,104(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_8291C354:
	// fcfid f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f0,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// stfs f11,108(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 108, temp.u32);
loc_8291C36C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8291c37c
	if (cr6.eq) goto loc_8291C37C;
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
loc_8291C37C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8291C384"))) PPC_WEAK_FUNC(sub_8291C384);
PPC_FUNC_IMPL(__imp__sub_8291C384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291C388"))) PPC_WEAK_FUNC(sub_8291C388);
PPC_FUNC_IMPL(__imp__sub_8291C388) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8291c0c8
	ctx.lr = 0x8291C3A8;
	sub_8291C0C8(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f1,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8291C3C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291C3DC"))) PPC_WEAK_FUNC(sub_8291C3DC);
PPC_FUNC_IMPL(__imp__sub_8291C3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291C3E0"))) PPC_WEAK_FUNC(sub_8291C3E0);
PPC_FUNC_IMPL(__imp__sub_8291C3E0) {
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
	// bl 0x835360c0
	ctx.lr = 0x8291C3F8;
	sub_835360C0(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,31932
	ctx.r9.s64 = ctx.r10.s64 + 31932;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8291C428"))) PPC_WEAK_FUNC(sub_8291C428);
PPC_FUNC_IMPL(__imp__sub_8291C428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r11,31932
	ctx.r10.s64 = ctx.r11.s64 + 31932;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x83535be8
	sub_83535BE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8291C438"))) PPC_WEAK_FUNC(sub_8291C438);
PPC_FUNC_IMPL(__imp__sub_8291C438) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,261
	ctx.r9.s64 = 17104896;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r9,14
	ctx.r9.u64 = ctx.r9.u64 | 14;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8291c590
	if (cr6.gt) goto loc_8291C590;
	// beq cr6,0x8291c574
	if (cr6.eq) goto loc_8291C574;
	// lis r9,261
	ctx.r9.s64 = 17104896;
	// ori r9,r9,3
	ctx.r9.u64 = ctx.r9.u64 | 3;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8291c520
	if (cr6.gt) goto loc_8291C520;
	// beq cr6,0x8291c504
	if (cr6.eq) goto loc_8291C504;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// beq cr6,0x8291c4d0
	if (cr6.eq) goto loc_8291C4D0;
	// addis r10,r10,-261
	ctx.r10.s64 = ctx.r10.s64 + -17104896;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8291c4b4
	if (cr0.eq) goto loc_8291C4B4;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x8291c6e0
	if (!cr6.eq) goto loc_8291C6E0;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8291C4B4:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8291C4D0:
	// stw r3,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r3.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8291C4F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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
loc_8291C504:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8291C520:
	// addis r10,r10,-261
	ctx.r10.s64 = ctx.r10.s64 + -17104896;
	// addic. r10,r10,-4
	xer.ca = ctx.r10.u32 > 3;
	ctx.r10.s64 = ctx.r10.s64 + -4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8291c558
	if (cr0.eq) goto loc_8291C558;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x8291c53c
	if (cr6.eq) goto loc_8291C53C;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x8291c6e0
	if (!cr6.eq) goto loc_8291C6E0;
loc_8291C53C:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// ori r9,r10,64
	ctx.r9.u64 = ctx.r10.u64 | 64;
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8291C558:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r9,r10,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8291C574:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// ori r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 8;
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8291C590:
	// addis r10,r10,-261
	ctx.r10.s64 = ctx.r10.s64 + -17104896;
	// addi r10,r10,-15
	ctx.r10.s64 = ctx.r10.s64 + -15;
	// cmplwi cr6,r10,28
	cr6.compare<uint32_t>(ctx.r10.u32, 28, xer);
	// bgt cr6,0x8291c6e0
	if (cr6.gt) goto loc_8291C6E0;
	// lis r12,-32110
	ctx.r12.s64 = -2104360960;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-14920
	ctx.r12.s64 = ctx.r12.s64 + -14920;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_8291C6D4;
	case 1:
		goto loc_8291C6E0;
	case 2:
		goto loc_8291C6E0;
	case 3:
		goto loc_8291C6E0;
	case 4:
		goto loc_8291C6E0;
	case 5:
		goto loc_8291C6E0;
	case 6:
		goto loc_8291C6E0;
	case 7:
		goto loc_8291C664;
	case 8:
		goto loc_8291C680;
	case 9:
		goto loc_8291C6E0;
	case 10:
		goto loc_8291C6E0;
	case 11:
		goto loc_8291C6E0;
	case 12:
		goto loc_8291C62C;
	case 13:
		goto loc_8291C6E0;
	case 14:
		goto loc_8291C6E0;
	case 15:
		goto loc_8291C6E0;
	case 16:
		goto loc_8291C648;
	case 17:
		goto loc_8291C6E0;
	case 18:
		goto loc_8291C6E0;
	case 19:
		goto loc_8291C6E0;
	case 20:
		goto loc_8291C6E0;
	case 21:
		goto loc_8291C6E0;
	case 22:
		goto loc_8291C6E0;
	case 23:
		goto loc_8291C6E0;
	case 24:
		goto loc_8291C6E0;
	case 25:
		goto loc_8291C6E0;
	case 26:
		goto loc_8291C6E0;
	case 27:
		goto loc_8291C69C;
	case 28:
		goto loc_8291C6B8;
	default:
		return;
	}
	// lwz r20,-14636(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -14636);
	// lwz r20,-14624(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -14624);
	// lwz r20,-14624(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -14624);
	// lwz r20,-14624(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -14624);
	// lwz r20,-14624(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -14624);
	// lwz r20,-14624(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -14624);
	// lwz r20,-14624(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -14624);
	// lwz r20,-14748(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -14748);
	// lwz r20,-14720(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -14720);
	// lwz r20,-14624(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -14624);
	// lwz r20,-14624(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -14624);
	// lwz r20,-14624(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -14624);
	// lwz r20,-14804(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -14804);
	// lwz r20,-14624(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -14624);
	// lwz r20,-14624(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -14624);
	// lwz r20,-14624(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -14624);
	// lwz r20,-14776(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -14776);
	// lwz r20,-14624(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -14624);
	// lwz r20,-14624(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -14624);
	// lwz r20,-14624(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -14624);
	// lwz r20,-14624(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -14624);
	// lwz r20,-14624(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -14624);
	// lwz r20,-14624(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -14624);
	// lwz r20,-14624(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -14624);
	// lwz r20,-14624(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -14624);
	// lwz r20,-14624(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -14624);
	// lwz r20,-14624(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -14624);
	// lwz r20,-14692(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -14692);
	// lwz r20,-14664(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + -14664);
loc_8291C62C:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8291C648:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r9,r10,0,28,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8291C664:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// ori r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 32;
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8291C680:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r9,r10,0,27,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8291C69C:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// ori r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 4;
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8291C6B8:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r9,r10,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8291C6D4:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r9,r10,0,29,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
loc_8291C6E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291C6F0"))) PPC_WEAK_FUNC(sub_8291C6F0);
PPC_FUNC_IMPL(__imp__sub_8291C6F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8291c708
	if (cr6.eq) goto loc_8291C708;
loc_8291C700:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8291C708:
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8291c750
	if (!cr6.eq) goto loc_8291C750;
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8291c750
	if (!cr6.eq) goto loc_8291C750;
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8291c750
	if (!cr6.eq) goto loc_8291C750;
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8291c750
	if (!cr6.eq) goto loc_8291C750;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8291c700
	if (cr6.eq) goto loc_8291C700;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8291c700
	if (cr6.eq) goto loc_8291C700;
loc_8291C750:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291C758"))) PPC_WEAK_FUNC(sub_8291C758);
PPC_FUNC_IMPL(__imp__sub_8291C758) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r3,r11,29,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291C764"))) PPC_WEAK_FUNC(sub_8291C764);
PPC_FUNC_IMPL(__imp__sub_8291C764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291C768"))) PPC_WEAK_FUNC(sub_8291C768);
PPC_FUNC_IMPL(__imp__sub_8291C768) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,31932
	ctx.r10.s64 = ctx.r11.s64 + 31932;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83535be8
	ctx.lr = 0x8291C794;
	sub_83535BE8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8291c7b4
	if (cr6.eq) goto loc_8291C7B4;
	// bl 0x82595188
	ctx.lr = 0x8291C7A4;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8291C7B4;
	sub_825952B8(ctx, base);
loc_8291C7B4:
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

__attribute__((alias("__imp__sub_8291C7D0"))) PPC_WEAK_FUNC(sub_8291C7D0);
PPC_FUNC_IMPL(__imp__sub_8291C7D0) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// li r9,7
	ctx.r9.s64 = 7;
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// addi r10,r11,32104
	ctx.r10.s64 = ctx.r11.s64 + 32104;
	// std r6,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r6.u64);
	// li r30,0
	ctx.r30.s64 = 0;
	// std r7,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r7.u64);
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8291C81C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8291c81c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8291C81C;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// bl 0x83572958
	ctx.lr = 0x8291C830;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8291c884
	if (!cr6.eq) goto loc_8291C884;
	// li r11,23
	ctx.r11.s64 = 23;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,188
	ctx.r4.s64 = 188;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8291C854;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8291c878
	if (cr6.eq) goto loc_8291C878;
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// ld r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,152(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// ld r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// bl 0x82920380
	ctx.lr = 0x8291C874;
	sub_82920380(ctx, base);
	// b 0x8291c87c
	goto loc_8291C87C;
loc_8291C878:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8291C87C:
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// bl 0x82920760
	ctx.lr = 0x8291C884;
	sub_82920760(ctx, base);
loc_8291C884:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83102db0
	ctx.lr = 0x8291C88C;
	sub_83102DB0(ctx, base);
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

__attribute__((alias("__imp__sub_8291C8A8"))) PPC_WEAK_FUNC(sub_8291C8A8);
PPC_FUNC_IMPL(__imp__sub_8291C8A8) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8291c8f4
	if (cr6.eq) goto loc_8291C8F4;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f8200
	ctx.lr = 0x8291C8E0;
	sub_831F8200(ctx, base);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82920578
	ctx.lr = 0x8291C8EC;
	sub_82920578(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f8200
	ctx.lr = 0x8291C8F4;
	sub_831F8200(ctx, base);
loc_8291C8F4:
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

__attribute__((alias("__imp__sub_8291C910"))) PPC_WEAK_FUNC(sub_8291C910);
PPC_FUNC_IMPL(__imp__sub_8291C910) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x8291d8f8
	sub_8291D8F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8291C920"))) PPC_WEAK_FUNC(sub_8291C920);
PPC_FUNC_IMPL(__imp__sub_8291C920) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291C924"))) PPC_WEAK_FUNC(sub_8291C924);
PPC_FUNC_IMPL(__imp__sub_8291C924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291C928"))) PPC_WEAK_FUNC(sub_8291C928);
PPC_FUNC_IMPL(__imp__sub_8291C928) {
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
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8291c968
	if (cr6.eq) goto loc_8291C968;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f8200
	ctx.lr = 0x8291C958;
	sub_831F8200(ctx, base);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x8291e4d8
	ctx.lr = 0x8291C960;
	sub_8291E4D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f8200
	ctx.lr = 0x8291C968;
	sub_831F8200(ctx, base);
loc_8291C968:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291C980"))) PPC_WEAK_FUNC(sub_8291C980);
PPC_FUNC_IMPL(__imp__sub_8291C980) {
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
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8291c9c0
	if (cr6.eq) goto loc_8291C9C0;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f8200
	ctx.lr = 0x8291C9B0;
	sub_831F8200(ctx, base);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x8291fb98
	ctx.lr = 0x8291C9B8;
	sub_8291FB98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f8200
	ctx.lr = 0x8291C9C0;
	sub_831F8200(ctx, base);
loc_8291C9C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291C9D8"))) PPC_WEAK_FUNC(sub_8291C9D8);
PPC_FUNC_IMPL(__imp__sub_8291C9D8) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,32104
	ctx.r9.s64 = ctx.r11.s64 + 32104;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8291ca48
	if (cr6.eq) goto loc_8291CA48;
	// li r11,23
	ctx.r11.s64 = 23;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x8291CA18;
	sub_82595150(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8291ca38
	if (cr6.eq) goto loc_8291CA38;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8291CA38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8291CA38:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x8291CA40;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_8291CA48:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x83102db0
	ctx.lr = 0x8291CA50;
	sub_83102DB0(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r10,r11,-32552
	ctx.r10.s64 = ctx.r11.s64 + -32552;
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

__attribute__((alias("__imp__sub_8291CA70"))) PPC_WEAK_FUNC(sub_8291CA70);
PPC_FUNC_IMPL(__imp__sub_8291CA70) {
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
	// bl 0x8291c9d8
	ctx.lr = 0x8291CA90;
	sub_8291C9D8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8291cab0
	if (cr6.eq) goto loc_8291CAB0;
	// bl 0x82595188
	ctx.lr = 0x8291CAA0;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8291CAB0;
	sub_825952B8(ctx, base);
loc_8291CAB0:
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

__attribute__((alias("__imp__sub_8291CACC"))) PPC_WEAK_FUNC(sub_8291CACC);
PPC_FUNC_IMPL(__imp__sub_8291CACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291CAD0"))) PPC_WEAK_FUNC(sub_8291CAD0);
PPC_FUNC_IMPL(__imp__sub_8291CAD0) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,32328
	ctx.r10.s64 = ctx.r11.s64 + 32328;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// bl 0x83572958
	ctx.lr = 0x8291CB08;
	sub_83572958(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8291cb48
	if (!cr6.eq) goto loc_8291CB48;
	// li r11,23
	ctx.r11.s64 = 23;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,660
	ctx.r4.s64 = 660;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8291CB2C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8291cb3c
	if (cr6.eq) goto loc_8291CB3C;
	// bl 0x82920bb8
	ctx.lr = 0x8291CB38;
	sub_82920BB8(ctx, base);
	// b 0x8291cb40
	goto loc_8291CB40;
loc_8291CB3C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8291CB40:
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bl 0x82920c20
	ctx.lr = 0x8291CB48;
	sub_82920C20(ctx, base);
loc_8291CB48:
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

__attribute__((alias("__imp__sub_8291CB64"))) PPC_WEAK_FUNC(sub_8291CB64);
PPC_FUNC_IMPL(__imp__sub_8291CB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291CB68"))) PPC_WEAK_FUNC(sub_8291CB68);
PPC_FUNC_IMPL(__imp__sub_8291CB68) {
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
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8291cb94
	if (cr6.eq) goto loc_8291CB94;
	// bl 0x82920ff8
	ctx.lr = 0x8291CB94;
	sub_82920FF8(ctx, base);
loc_8291CB94:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8291cba8
	if (cr6.eq) goto loc_8291CBA8;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82921a40
	ctx.lr = 0x8291CBA8;
	sub_82921A40(ctx, base);
loc_8291CBA8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_8291CBC0"))) PPC_WEAK_FUNC(sub_8291CBC0);
PPC_FUNC_IMPL(__imp__sub_8291CBC0) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8291cbec
	if (cr6.eq) goto loc_8291CBEC;
	// bl 0x82920c90
	ctx.lr = 0x8291CBEC;
	sub_82920C90(ctx, base);
loc_8291CBEC:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8291cc00
	if (cr6.eq) goto loc_8291CC00;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83102db0
	ctx.lr = 0x8291CC00;
	sub_83102DB0(ctx, base);
loc_8291CC00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291CC18"))) PPC_WEAK_FUNC(sub_8291CC18);
PPC_FUNC_IMPL(__imp__sub_8291CC18) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8291cc3c
	if (cr6.eq) goto loc_8291CC3C;
	// bl 0x82920c80
	ctx.lr = 0x8291CC3C;
	sub_82920C80(ctx, base);
loc_8291CC3C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8291cc4c
	if (cr6.eq) goto loc_8291CC4C;
	// bl 0x83102db0
	ctx.lr = 0x8291CC4C;
	sub_83102DB0(ctx, base);
loc_8291CC4C:
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

__attribute__((alias("__imp__sub_8291CC60"))) PPC_WEAK_FUNC(sub_8291CC60);
PPC_FUNC_IMPL(__imp__sub_8291CC60) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8291cc84
	if (cr6.eq) goto loc_8291CC84;
	// bl 0x82a18aa0
	ctx.lr = 0x8291CC84;
	sub_82A18AA0(ctx, base);
loc_8291CC84:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8291cc94
	if (cr6.eq) goto loc_8291CC94;
	// bl 0x83102db0
	ctx.lr = 0x8291CC94;
	sub_83102DB0(ctx, base);
loc_8291CC94:
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

__attribute__((alias("__imp__sub_8291CCA8"))) PPC_WEAK_FUNC(sub_8291CCA8);
PPC_FUNC_IMPL(__imp__sub_8291CCA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8291CCB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,32328
	ctx.r9.s64 = ctx.r11.s64 + 32328;
	// li r30,23
	ctx.r30.s64 = 23;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8291cd14
	if (cr6.eq) goto loc_8291CD14;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x8291CCE8;
	sub_82595150(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8291cd08
	if (cr6.eq) goto loc_8291CD08;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8291CD08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8291CD08:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x8291CD10;
	sub_82595170(ctx, base);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
loc_8291CD14:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8291cd5c
	if (cr6.eq) goto loc_8291CD5C;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x8291CD30;
	sub_82595150(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8291cd50
	if (cr6.eq) goto loc_8291CD50;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8291CD50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8291CD50:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x8291CD58;
	sub_82595170(ctx, base);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
loc_8291CD5C:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r10,r11,-32552
	ctx.r10.s64 = ctx.r11.s64 + -32552;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8291CD70"))) PPC_WEAK_FUNC(sub_8291CD70);
PPC_FUNC_IMPL(__imp__sub_8291CD70) {
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
	// bl 0x8291cca8
	ctx.lr = 0x8291CD90;
	sub_8291CCA8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8291cdb0
	if (cr6.eq) goto loc_8291CDB0;
	// bl 0x82595188
	ctx.lr = 0x8291CDA0;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8291CDB0;
	sub_825952B8(ctx, base);
loc_8291CDB0:
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

__attribute__((alias("__imp__sub_8291CDCC"))) PPC_WEAK_FUNC(sub_8291CDCC);
PPC_FUNC_IMPL(__imp__sub_8291CDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291CDD0"))) PPC_WEAK_FUNC(sub_8291CDD0);
PPC_FUNC_IMPL(__imp__sub_8291CDD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8291CDD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8291CDE8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8291cde8
	if (!cr6.eq) goto loc_8291CDE8;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r31,65
	cr6.compare<uint32_t>(ctx.r31.u32, 65, xer);
	// bgt cr6,0x8291ce2c
	if (cr6.gt) goto loc_8291CE2C;
	// li r5,65
	ctx.r5.s64 = 65;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x8291CE1C;
	sub_831CDCF0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x8291CE2C;
	sub_831CE980(ctx, base);
loc_8291CE2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8291CE34"))) PPC_WEAK_FUNC(sub_8291CE34);
PPC_FUNC_IMPL(__imp__sub_8291CE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8291CE38"))) PPC_WEAK_FUNC(sub_8291CE38);
PPC_FUNC_IMPL(__imp__sub_8291CE38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-7012(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7012);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8291CE44"))) PPC_WEAK_FUNC(sub_8291CE44);
PPC_FUNC_IMPL(__imp__sub_8291CE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

