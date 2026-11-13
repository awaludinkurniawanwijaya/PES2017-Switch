#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_828FC878"))) PPC_WEAK_FUNC(sub_828FC878);
PPC_FUNC_IMPL(__imp__sub_828FC878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x828FC880;
	__savegprlr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// stw r4,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r4.u32);
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// lwz r3,472(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r29,292(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r30,432(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// beq cr6,0x828fc8d0
	if (cr6.eq) goto loc_828FC8D0;
	// bl 0x83930ac8
	ctx.lr = 0x828FC8C4;
	sub_83930AC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828fc8ec
	if (!cr6.eq) goto loc_828FC8EC;
loc_828FC8D0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x828fc8f0
	if (cr6.eq) goto loc_828FC8F0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a18500
	ctx.lr = 0x828FC8E0;
	sub_82A18500(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828fc8f0
	if (cr6.eq) goto loc_828FC8F0;
loc_828FC8EC:
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_828FC8F0:
	// lwz r11,4460(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4460);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x828fcacc
	if (!cr6.eq) goto loc_828FCACC;
	// lwz r11,5356(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5356);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x828fcacc
	if (cr6.gt) goto loc_828FCACC;
	// li r10,4
	ctx.r10.s64 = 4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x828fc96c
	if (cr6.eq) goto loc_828FC96C;
	// bdz 0x828fc96c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_828FC96C;
	// bdnz 0x828fcaa4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_828FCAA4;
	// lwz r11,5760(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5760);
	// lwz r9,252(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x828fc96c
	if (!cr6.eq) goto loc_828FC96C;
	// lbz r11,4499(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4499);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828fc96c
	if (cr6.eq) goto loc_828FC96C;
	// lbz r11,4516(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4516);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828fc96c
	if (cr6.eq) goto loc_828FC96C;
	// lbz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 16);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x828fc964
	if (cr6.eq) goto loc_828FC964;
	// stb r10,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r10.u8);
	// b 0x828fc968
	goto loc_828FC968;
loc_828FC964:
	// stb r26,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r26.u8);
loc_828FC968:
	// stb r26,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
loc_828FC96C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x828fc998
	if (!cr6.eq) goto loc_828FC998;
	// lbz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 16);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x828fc990
	if (cr6.eq) goto loc_828FC990;
	// stb r10,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r10.u8);
	// b 0x828fc994
	goto loc_828FC994;
loc_828FC990:
	// stb r26,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r26.u8);
loc_828FC994:
	// stb r26,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
loc_828FC998:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r1,252
	ctx.r5.s64 = ctx.r1.s64 + 252;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x82900500
	ctx.lr = 0x828FC9F4;
	sub_82900500(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x828fca98
	if (cr6.eq) goto loc_828FCA98;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828fca14
	if (cr6.eq) goto loc_828FCA14;
	// stb r23,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r23.u8);
	// b 0x828fca18
	goto loc_828FCA18;
loc_828FCA14:
	// stb r26,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r26.u8);
loc_828FCA18:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f11,20(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,28(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,32(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,36(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f7,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,40(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f6,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,44(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f5,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,48(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f4,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f3.f64 = double(temp.f32);
	// stfs f4,52(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f2,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f2.f64 = double(temp.f32);
	// stfs f3,56(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f1,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// stfs f2,60(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f0,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// stfs f1,64(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_828FCA98:
	// stb r23,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r23.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_828FCAA4:
	// lwz r11,5756(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5756);
	// lwz r10,252(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x828fcacc
	if (!cr6.eq) goto loc_828FCACC;
	// lbz r11,4499(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4499);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828fcacc
	if (cr6.eq) goto loc_828FCACC;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r26,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
loc_828FCACC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FCAD4"))) PPC_WEAK_FUNC(sub_828FCAD4);
PPC_FUNC_IMPL(__imp__sub_828FCAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828FCAD8"))) PPC_WEAK_FUNC(sub_828FCAD8);
PPC_FUNC_IMPL(__imp__sub_828FCAD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x828FCAE0;
	__savegprlr_26(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r27,r3,4
	ctx.r27.s64 = ctx.r3.s64 + 4;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// li r30,99
	ctx.r30.s64 = 99;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// li r28,115
	ctx.r28.s64 = 115;
loc_828FCB00:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x828fb1f8
	ctx.lr = 0x828FCB08;
	sub_828FB1F8(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,292
	ctx.r31.s64 = ctx.r31.s64 + 292;
	// bge 0x828fcb00
	if (!cr0.lt) goto loc_828FCB00;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// li r31,100
	ctx.r31.s64 = 100;
loc_828FCB24:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x828fb1f8
	ctx.lr = 0x828FCB2C;
	sub_828FB1F8(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stb r29,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r29.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,292
	ctx.r5.s64 = 292;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x828FCB44;
	sub_831CE980(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,292
	ctx.r30.s64 = ctx.r30.s64 + 292;
	// bne 0x828fcb24
	if (!cr0.eq) goto loc_828FCB24;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FCB5C"))) PPC_WEAK_FUNC(sub_828FCB5C);
PPC_FUNC_IMPL(__imp__sub_828FCB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828FCB60"))) PPC_WEAK_FUNC(sub_828FCB60);
PPC_FUNC_IMPL(__imp__sub_828FCB60) {
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
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x825b2ec8
	ctx.lr = 0x828FCB7C;
	sub_825B2EC8(ctx, base);
	// addi r3,r31,4536
	ctx.r3.s64 = ctx.r31.s64 + 4536;
	// bl 0x828fcad8
	ctx.lr = 0x828FCB84;
	sub_828FCAD8(ctx, base);
	// li r10,24
	ctx.r10.s64 = 24;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,-31796
	ctx.r11.s64 = ctx.r11.s64 + -31796;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_828FCB98:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stwu r10,24(r11)
	ea = 24 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x828fcb98
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_828FCB98;
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

__attribute__((alias("__imp__sub_828FCBCC"))) PPC_WEAK_FUNC(sub_828FCBCC);
PPC_FUNC_IMPL(__imp__sub_828FCBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828FCBD0"))) PPC_WEAK_FUNC(sub_828FCBD0);
PPC_FUNC_IMPL(__imp__sub_828FCBD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x828FCBD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4544);
	// addi r28,r3,4544
	ctx.r28.s64 = ctx.r3.s64 + 4544;
	// addi r4,r3,4548
	ctx.r4.s64 = ctx.r3.s64 + 4548;
	// mulli r11,r11,292
	ctx.r11.s64 = ctx.r11.s64 * 292;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// beq cr6,0x828fccc4
	if (cr6.eq) goto loc_828FCCC4;
	// li r29,28
	ctx.r29.s64 = 28;
loc_828FCC00:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// addi r31,r4,12
	ctx.r31.s64 = ctx.r4.s64 + 12;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// beq cr6,0x828fcc9c
	if (cr6.eq) goto loc_828FCC9C;
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
loc_828FCC24:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mulli r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 * 28;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// addi r5,r8,4
	ctx.r5.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r30,r5
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, xer);
	// beq cr6,0x828fcc70
	if (cr6.eq) goto loc_828FCC70;
loc_828FCC44:
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// addi r7,r9,-4
	ctx.r7.s64 = ctx.r9.s64 + -4;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
loc_828FCC54:
	// lwzu r6,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r6,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x828fcc54
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_828FCC54;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// addi r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 + 28;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// bne cr6,0x828fcc44
	if (!cr6.eq) goto loc_828FCC44;
loc_828FCC70:
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// divw r8,r11,r29
	ctx.r8.s32 = PPCDivide(ctx.r11.s32, ctx.r29.s32);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// rotlwi r6,r7,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// mulli r11,r6,28
	ctx.r11.s64 = ctx.r6.s64 * 28;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r31,r5
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r5.u32, xer);
	// bne cr6,0x828fcc24
	if (!cr6.eq) goto loc_828FCC24;
loc_828FCC9C:
	// addi r5,r4,292
	ctx.r5.s64 = ctx.r4.s64 + 292;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828fb6b8
	ctx.lr = 0x828FCCA8;
	sub_828FB6B8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mulli r11,r11,292
	ctx.r11.s64 = ctx.r11.s64 * 292;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bne cr6,0x828fcc00
	if (!cr6.eq) goto loc_828FCC00;
loc_828FCCC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FCCCC"))) PPC_WEAK_FUNC(sub_828FCCCC);
PPC_FUNC_IMPL(__imp__sub_828FCCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828FCCD0"))) PPC_WEAK_FUNC(sub_828FCCD0);
PPC_FUNC_IMPL(__imp__sub_828FCCD0) {
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
	ctx.lr = 0x828FCCD8;
	__savegprlr_14(ctx, base);
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f29.u64);
	// stfd f30,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r3,-31112
	ctx.r3.s64 = ctx.r3.s64 + -31112;
	// bl 0x837475e8
	ctx.lr = 0x828FCCFC;
	sub_837475E8(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x828fcbd0
	ctx.lr = 0x828FCD08;
	sub_828FCBD0(ctx, base);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r4,28
	ctx.r4.s64 = 28;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r14,r20,704
	ctx.r14.s64 = ctx.r20.s64 + 704;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lfs f30,16100(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16100);
	ctx.f30.f64 = double(temp.f32);
	// addi r21,r20,2276
	ctx.r21.s64 = ctx.r20.s64 + 2276;
	// lfs f31,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// li r23,0
	ctx.r23.s64 = 0;
	// li r15,32
	ctx.r15.s64 = 32;
	// li r18,1
	ctx.r18.s64 = 1;
	// addi r19,r11,12168
	ctx.r19.s64 = ctx.r11.s64 + 12168;
loc_828FCD3C:
	// lwz r5,-28(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28);
	// li r17,2
	ctx.r17.s64 = 2;
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// addi r6,r21,-48
	ctx.r6.s64 = ctx.r21.s64 + -48;
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
loc_828FCD54:
	// lwz r11,20(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x828fcd68
	if (cr6.lt) goto loc_828FCD68;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// b 0x828fcd6c
	goto loc_828FCD6C;
loc_828FCD68:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_828FCD6C:
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x828fcd7c
	if (cr6.lt) goto loc_828FCD7C;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// b 0x828fcd80
	goto loc_828FCD80;
loc_828FCD7C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_828FCD80:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r3,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r3.s64;
	// beq cr6,0x828fcda4
	if (cr6.eq) goto loc_828FCDA4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x828fcd80
	if (cr6.eq) goto loc_828FCD80;
loc_828FCDA4:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x828fcdc0
	if (cr6.eq) goto loc_828FCDC0;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,28
	ctx.r8.s64 = ctx.r8.s64 + 28;
	// cmplwi cr6,r7,36
	cr6.compare<uint32_t>(ctx.r7.u32, 36, xer);
	// blt cr6,0x828fcd54
	if (cr6.lt) goto loc_828FCD54;
	// b 0x828fd278
	goto loc_828FD278;
loc_828FCDC0:
	// addi r11,r19,-144
	ctx.r11.s64 = ctx.r19.s64 + -144;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r30,115
	cr6.compare<int32_t>(ctx.r30.s32, 115, xer);
	// beq cr6,0x828fd278
	if (cr6.eq) goto loc_828FD278;
	// lwz r10,24(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24);
	// addi r11,r20,4
	ctx.r11.s64 = ctx.r20.s64 + 4;
	// lwz r9,0(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x828fcdf0
	if (cr6.lt) goto loc_828FCDF0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x828fcdf4
	goto loc_828FCDF4;
loc_828FCDF0:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_828FCDF4:
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x828fce04
	if (cr6.lt) goto loc_828FCE04;
	// lwz r11,-20(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + -20);
	// b 0x828fce08
	goto loc_828FCE08;
loc_828FCE04:
	// addi r11,r21,-20
	ctx.r11.s64 = ctx.r21.s64 + -20;
loc_828FCE08:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x828fce2c
	if (cr6.eq) goto loc_828FCE2C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x828fce08
	if (cr6.eq) goto loc_828FCE08;
loc_828FCE2C:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x828fce38
	if (!cr6.eq) goto loc_828FCE38;
	// li r22,4
	ctx.r22.s64 = 4;
loc_828FCE38:
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r5,-536(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + -536);
	// addi r7,r19,12
	ctx.r7.s64 = ctx.r19.s64 + 12;
	// addi r6,r21,-556
	ctx.r6.s64 = ctx.r21.s64 + -556;
	// addi r8,r20,592
	ctx.r8.s64 = ctx.r20.s64 + 592;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_828FCE50:
	// lwz r11,20(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x828fce64
	if (cr6.lt) goto loc_828FCE64;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// b 0x828fce68
	goto loc_828FCE68;
loc_828FCE64:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_828FCE68:
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x828fce78
	if (cr6.lt) goto loc_828FCE78;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// b 0x828fce7c
	goto loc_828FCE7C;
loc_828FCE78:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_828FCE7C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x828fcea0
	if (cr6.eq) goto loc_828FCEA0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x828fce7c
	if (cr6.eq) goto loc_828FCE7C;
loc_828FCEA0:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x828fceb8
	if (!cr6.eq) goto loc_828FCEB8;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// clrlwi r10,r22,24
	ctx.r10.u64 = ctx.r22.u32 & 0xFF;
	// or r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r22,r9,24
	ctx.r22.u64 = ctx.r9.u32 & 0xFF;
loc_828FCEB8:
	// addi r8,r8,28
	ctx.r8.s64 = ctx.r8.s64 + 28;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x828fce50
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_828FCE50;
	// stw r15,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r15.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,292
	ctx.r4.s64 = 292;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x828FCED8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828fcf00
	if (cr6.eq) goto loc_828FCF00;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x828fb1f8
	ctx.lr = 0x828FCEEC;
	sub_828FB1F8(ctx, base);
	// li r11,115
	ctx.r11.s64 = 115;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// stb r23,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r23.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x828fcf04
	goto loc_828FCF04;
loc_828FCF00:
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
loc_828FCF04:
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// lbz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 8);
	// addi r25,r20,228
	ctx.r25.s64 = ctx.r20.s64 + 228;
	// stb r11,4(r26)
	PPC_STORE_U8(ctx.r26.u32 + 4, ctx.r11.u8);
	// addi r27,r21,-480
	ctx.r27.s64 = ctx.r21.s64 + -480;
loc_828FCF1C:
	// lwz r6,20(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r29,r27,-48
	ctx.r29.s64 = ctx.r27.s64 + -48;
	// li r28,36
	ctx.r28.s64 = 36;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
loc_828FCF34:
	// lwz r11,20(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x828fcf48
	if (cr6.lt) goto loc_828FCF48;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// b 0x828fcf4c
	goto loc_828FCF4C;
loc_828FCF48:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_828FCF4C:
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// blt cr6,0x828fcf5c
	if (cr6.lt) goto loc_828FCF5C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// b 0x828fcf60
	goto loc_828FCF60;
loc_828FCF5C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_828FCF60:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// beq cr6,0x828fcf84
	if (cr6.eq) goto loc_828FCF84;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x828fcf60
	if (cr6.eq) goto loc_828FCF60;
loc_828FCF84:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x828fcfa0
	if (cr6.eq) goto loc_828FCFA0;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,28
	ctx.r8.s64 = ctx.r8.s64 + 28;
	// cmplwi cr6,r7,13
	cr6.compare<uint32_t>(ctx.r7.u32, 13, xer);
	// blt cr6,0x828fcf34
	if (cr6.lt) goto loc_828FCF34;
	// b 0x828fd228
	goto loc_828FD228;
loc_828FCFA0:
	// addi r11,r19,-224
	ctx.r11.s64 = ctx.r19.s64 + -224;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// beq cr6,0x828fd228
	if (cr6.eq) goto loc_828FD228;
	// lwz r5,32(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r6,r29,12
	ctx.r6.s64 = ctx.r29.s64 + 12;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// addi r8,r20,32
	ctx.r8.s64 = ctx.r20.s64 + 32;
loc_828FCFC4:
	// lwz r11,20(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x828fcfd8
	if (cr6.lt) goto loc_828FCFD8;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// b 0x828fcfdc
	goto loc_828FCFDC;
loc_828FCFD8:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_828FCFDC:
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x828fcfec
	if (cr6.lt) goto loc_828FCFEC;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// b 0x828fcff0
	goto loc_828FCFF0;
loc_828FCFEC:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_828FCFF0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r3,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r3.s64;
	// beq cr6,0x828fd014
	if (cr6.eq) goto loc_828FD014;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x828fcff0
	if (cr6.eq) goto loc_828FCFF0;
loc_828FD014:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x828fd030
	if (cr6.eq) goto loc_828FD030;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,28
	ctx.r8.s64 = ctx.r8.s64 + 28;
	// cmplwi cr6,r7,7
	cr6.compare<uint32_t>(ctx.r7.u32, 7, xer);
	// blt cr6,0x828fcfc4
	if (cr6.lt) goto loc_828FCFC4;
	// b 0x828fd040
	goto loc_828FD040;
loc_828FD030:
	// addi r11,r19,-172
	ctx.r11.s64 = ctx.r19.s64 + -172;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwzx r28,r10,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_828FD040:
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828fd0cc
	if (!cr6.eq) goto loc_828FD0CC;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// addi r8,r20,17624
	ctx.r8.s64 = ctx.r20.s64 + 17624;
loc_828FD054:
	// lwz r11,20(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x828fd068
	if (cr6.lt) goto loc_828FD068;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// b 0x828fd06c
	goto loc_828FD06C;
loc_828FD068:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_828FD06C:
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x828fd07c
	if (cr6.lt) goto loc_828FD07C;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// b 0x828fd080
	goto loc_828FD080;
loc_828FD07C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_828FD080:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r3,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r3.s64;
	// beq cr6,0x828fd0a4
	if (cr6.eq) goto loc_828FD0A4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x828fd080
	if (cr6.eq) goto loc_828FD080;
loc_828FD0A4:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x828fd0c0
	if (cr6.eq) goto loc_828FD0C0;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,28
	ctx.r8.s64 = ctx.r8.s64 + 28;
	// cmplwi cr6,r7,2
	cr6.compare<uint32_t>(ctx.r7.u32, 2, xer);
	// blt cr6,0x828fd054
	if (cr6.lt) goto loc_828FD054;
	// b 0x828fd0cc
	goto loc_828FD0CC;
loc_828FD0C0:
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwzx r17,r11,r19
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r19.u32);
loc_828FD0CC:
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828fd218
	if (cr6.eq) goto loc_828FD218;
	// lfs f0,44(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r28,36
	cr6.compare<int32_t>(ctx.r28.s32, 36, xer);
	// fsel f29,f0,f0,f30
	ctx.f29.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f30.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// beq cr6,0x828fd154
	if (cr6.eq) goto loc_828FD154;
	// stw r15,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r15.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x828FD0FC;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828fd1c0
	if (cr6.eq) goto loc_828FD1C0;
	// bl 0x83740868
	ctx.lr = 0x828FD10C;
	sub_83740868(ctx, base);
	// lfs f0,76(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// slw r11,r18,r28
	ctx.r11.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r18.u32 << (ctx.r28.u8 & 0x3F));
	// stfs f31,12(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f12.u64);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stfs f31,16(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f31,20(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stfs f30,24(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stb r10,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r10.u8);
	// stb r9,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r9.u8);
	// stb r23,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r23.u8);
	// stb r22,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r22.u8);
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// b 0x828fd1c4
	goto loc_828FD1C4;
loc_828FD154:
	// stw r15,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r15.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595718
	ctx.lr = 0x828FD160;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828fd1c0
	if (cr6.eq) goto loc_828FD1C0;
	// bl 0x83740868
	ctx.lr = 0x828FD170;
	sub_83740868(ctx, base);
	// lfs f0,76(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stw r17,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r17.u32);
	// stfs f10,12(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stb r18,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r18.u8);
	// stfs f11,16(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// stfs f12,20(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f29,24(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fctiwz f9,f13
	ctx.f9.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stb r8,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r8.u8);
	// stb r22,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r22.u8);
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// b 0x828fd1c4
	goto loc_828FD1C4;
loc_828FD1C0:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_828FD1C4:
	// li r10,7
	ctx.r10.s64 = 7;
	// lwz r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addi r11,r26,8
	ctx.r11.s64 = ctx.r26.s64 + 8;
	// mulli r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 * 28;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
loc_828FD1E0:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x828fd1e0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_828FD1E0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// bl 0x82595150
	ctx.lr = 0x828FD208;
	sub_82595150(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x828FD210;
	sub_82416268(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82595170
	ctx.lr = 0x828FD218;
	sub_82595170(ctx, base);
loc_828FD218:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r27,r27,80
	ctx.r27.s64 = ctx.r27.s64 + 80;
	// cmplwi cr6,r24,6
	cr6.compare<uint32_t>(ctx.r24.u32, 6, xer);
	// blt cr6,0x828fcf1c
	if (cr6.lt) goto loc_828FCF1C;
loc_828FD228:
	// lwz r10,4544(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4544);
	// addi r11,r16,4544
	ctx.r11.s64 = ctx.r16.s64 + 4544;
	// li r5,292
	ctx.r5.s64 = 292;
	// mulli r10,r10,292
	ctx.r10.s64 = ctx.r10.s64 * 292;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x831ce980
	ctx.lr = 0x828FD248;
	sub_831CE980(ctx, base);
	// lwz r11,4544(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4544);
	// stw r23,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r23.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// stw r9,4544(r16)
	PPC_STORE_U32(ctx.r16.u32 + 4544, ctx.r9.u32);
	// bl 0x82595150
	ctx.lr = 0x828FD264;
	sub_82595150(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82416268
	ctx.lr = 0x828FD26C;
	sub_82416268(ctx, base);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82595170
	ctx.lr = 0x828FD274;
	sub_82595170(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_828FD278:
	// addic. r4,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// addi r21,r21,568
	ctx.r21.s64 = ctx.r21.s64 + 568;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// bne 0x828fcd3c
	if (!cr0.eq) goto loc_828FCD3C;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
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

__attribute__((alias("__imp__sub_828FD29C"))) PPC_WEAK_FUNC(sub_828FD29C);
PPC_FUNC_IMPL(__imp__sub_828FD29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828FD2A0"))) PPC_WEAK_FUNC(sub_828FD2A0);
PPC_FUNC_IMPL(__imp__sub_828FD2A0) {
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
	ctx.lr = 0x828FD2A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lis r9,-31763
	ctx.r9.s64 = -2081619968;
	// addi r8,r10,16024
	ctx.r8.s64 = ctx.r10.s64 + 16024;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r27,r11,-3088
	ctx.r27.s64 = ctx.r11.s64 + -3088;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addis r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 65536;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r31,-9472(r9)
	PPC_STORE_U32(ctx.r9.u32 + -9472, ctx.r31.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r28,r27,156
	ctx.r28.s64 = ctx.r27.s64 + 156;
	// addi r30,r30,-31212
	ctx.r30.s64 = ctx.r30.s64 + -31212;
	// li r29,24
	ctx.r29.s64 = 24;
loc_828FD2E4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828fd32c
	if (cr6.eq) goto loc_828FD32C;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x828FD300;
	sub_82595150(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828fd320
	if (cr6.eq) goto loc_828FD320;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828FD320;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_828FD320:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x828FD328;
	sub_82595170(ctx, base);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
loc_828FD32C:
	// stwu r31,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r30.u32 = ea;
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stwu r31,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r28.u32 = ea;
	// bne 0x828fd2e4
	if (!cr0.eq) goto loc_828FD2E4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x828fcbd0
	ctx.lr = 0x828FD344;
	sub_828FCBD0(ctx, base);
	// addis r30,r26,1
	ctx.r30.s64 = ctx.r26.s64 + 65536;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r31,156(r27)
	PPC_STORE_U32(ctx.r27.u32 + 156, ctx.r31.u32);
	// addi r30,r30,-30368
	ctx.r30.s64 = ctx.r30.s64 + -30368;
	// addi r9,r10,-24712
	ctx.r9.s64 = ctx.r10.s64 + -24712;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lbz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// beq cr6,0x828fd394
	if (cr6.eq) goto loc_828FD394;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x828fd394
	if (cr6.eq) goto loc_828FD394;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x828FD390;
	sub_8353F3B8(ctx, base);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
loc_828FD394:
	// stb r31,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r31.u8);
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x828fd3c0
	if (cr6.eq) goto loc_828FD3C0;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x828FD3BC;
	sub_8353F3B8(ctx, base);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
loc_828FD3C0:
	// addis r29,r26,1
	ctx.r29.s64 = ctx.r26.s64 + 65536;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r29,r29,-30388
	ctx.r29.s64 = ctx.r29.s64 + -30388;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// lbz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x828fd408
	if (cr6.eq) goto loc_828FD408;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r29,8
	ctx.r30.s64 = ctx.r29.s64 + 8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x828fd408
	if (cr6.eq) goto loc_828FD408;
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
	ctx.lr = 0x828FD404;
	sub_8353F3B8(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_828FD408:
	// stb r31,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r31.u8);
	// addi r30,r29,8
	ctx.r30.s64 = ctx.r29.s64 + 8;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x828fd434
	if (cr6.eq) goto loc_828FD434;
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
	ctx.lr = 0x828FD430;
	sub_8353F3B8(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_828FD434:
	// addis r29,r26,1
	ctx.r29.s64 = ctx.r26.s64 + 65536;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r29,r29,-30408
	ctx.r29.s64 = ctx.r29.s64 + -30408;
	// addi r10,r11,-9704
	ctx.r10.s64 = ctx.r11.s64 + -9704;
	// lbz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x828fd47c
	if (cr6.eq) goto loc_828FD47C;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r29,8
	ctx.r30.s64 = ctx.r29.s64 + 8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x828fd47c
	if (cr6.eq) goto loc_828FD47C;
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
	ctx.lr = 0x828FD478;
	sub_8353F3B8(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_828FD47C:
	// stb r31,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r31.u8);
	// addi r30,r29,8
	ctx.r30.s64 = ctx.r29.s64 + 8;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x828fd4a8
	if (cr6.eq) goto loc_828FD4A8;
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
	ctx.lr = 0x828FD4A4;
	sub_8353F3B8(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_828FD4A8:
	// addis r29,r26,1
	ctx.r29.s64 = ctx.r26.s64 + 65536;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r29,r29,-30428
	ctx.r29.s64 = ctx.r29.s64 + -30428;
	// addi r10,r11,-16664
	ctx.r10.s64 = ctx.r11.s64 + -16664;
	// lbz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x828fd4e8
	if (cr6.eq) goto loc_828FD4E8;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r29,8
	ctx.r30.s64 = ctx.r29.s64 + 8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x828fd4e8
	if (cr6.eq) goto loc_828FD4E8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8353f3b8
	ctx.lr = 0x828FD4E4;
	sub_8353F3B8(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_828FD4E8:
	// stb r31,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r31.u8);
	// addi r30,r29,8
	ctx.r30.s64 = ctx.r29.s64 + 8;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x828fd50c
	if (cr6.eq) goto loc_828FD50C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8353f3b8
	ctx.lr = 0x828FD508;
	sub_8353F3B8(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_828FD50C:
	// addis r29,r26,1
	ctx.r29.s64 = ctx.r26.s64 + 65536;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r29,r29,-30448
	ctx.r29.s64 = ctx.r29.s64 + -30448;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// lbz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x828fd554
	if (cr6.eq) goto loc_828FD554;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r29,8
	ctx.r30.s64 = ctx.r29.s64 + 8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x828fd554
	if (cr6.eq) goto loc_828FD554;
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
	ctx.lr = 0x828FD550;
	sub_8353F3B8(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_828FD554:
	// stb r31,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r31.u8);
	// addi r30,r29,8
	ctx.r30.s64 = ctx.r29.s64 + 8;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x828fd580
	if (cr6.eq) goto loc_828FD580;
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
	ctx.lr = 0x828FD57C;
	sub_8353F3B8(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_828FD580:
	// addis r3,r26,1
	ctx.r3.s64 = ctx.r26.s64 + 65536;
	// addi r3,r3,-31088
	ctx.r3.s64 = ctx.r3.s64 + -31088;
	// bl 0x82a0dc70
	ctx.lr = 0x828FD58C;
	sub_82A0DC70(ctx, base);
	// addis r29,r26,1
	ctx.r29.s64 = ctx.r26.s64 + 65536;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r29,r29,-31108
	ctx.r29.s64 = ctx.r29.s64 + -31108;
	// addi r10,r11,-16664
	ctx.r10.s64 = ctx.r11.s64 + -16664;
	// lbz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x828fd5cc
	if (cr6.eq) goto loc_828FD5CC;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r29,8
	ctx.r30.s64 = ctx.r29.s64 + 8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x828fd5cc
	if (cr6.eq) goto loc_828FD5CC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8353f3b8
	ctx.lr = 0x828FD5C8;
	sub_8353F3B8(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_828FD5CC:
	// stb r31,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r31.u8);
	// addi r30,r29,8
	ctx.r30.s64 = ctx.r29.s64 + 8;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x828fd5f0
	if (cr6.eq) goto loc_828FD5F0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8353f3b8
	ctx.lr = 0x828FD5EC;
	sub_8353F3B8(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_828FD5F0:
	// addis r3,r26,1
	ctx.r3.s64 = ctx.r26.s64 + 65536;
	// addi r3,r3,-31112
	ctx.r3.s64 = ctx.r3.s64 + -31112;
	// bl 0x83102db0
	ctx.lr = 0x828FD5FC;
	sub_83102DB0(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r10,r11,-32552
	ctx.r10.s64 = ctx.r11.s64 + -32552;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FD610"))) PPC_WEAK_FUNC(sub_828FD610);
PPC_FUNC_IMPL(__imp__sub_828FD610) {
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
	// bl 0x828fd2a0
	ctx.lr = 0x828FD630;
	sub_828FD2A0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828fd650
	if (cr6.eq) goto loc_828FD650;
	// bl 0x82595188
	ctx.lr = 0x828FD640;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x828FD650;
	sub_825952B8(ctx, base);
loc_828FD650:
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

__attribute__((alias("__imp__sub_828FD66C"))) PPC_WEAK_FUNC(sub_828FD66C);
PPC_FUNC_IMPL(__imp__sub_828FD66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828FD670"))) PPC_WEAK_FUNC(sub_828FD670);
PPC_FUNC_IMPL(__imp__sub_828FD670) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828fd694
	if (!cr6.eq) goto loc_828FD694;
	// bl 0x825bf380
	ctx.lr = 0x828FD694;
	sub_825BF380(ctx, base);
loc_828FD694:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828fd6b0
	if (!cr6.eq) goto loc_828FD6B0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4500
	ctx.r10.s64 = ctx.r11.s64 + 4500;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_828FD6B0:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
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

__attribute__((alias("__imp__sub_828FD6C8"))) PPC_WEAK_FUNC(sub_828FD6C8);
PPC_FUNC_IMPL(__imp__sub_828FD6C8) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828fd6ec
	if (!cr6.eq) goto loc_828FD6EC;
	// bl 0x825b49a8
	ctx.lr = 0x828FD6EC;
	sub_825B49A8(ctx, base);
loc_828FD6EC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828fd708
	if (!cr6.eq) goto loc_828FD708;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_828FD708:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
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

__attribute__((alias("__imp__sub_828FD720"))) PPC_WEAK_FUNC(sub_828FD720);
PPC_FUNC_IMPL(__imp__sub_828FD720) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x828FD728;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 65536;
	// addi r30,r30,-30428
	ctx.r30.s64 = ctx.r30.s64 + -30428;
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828fd748
	if (!cr6.eq) goto loc_828FD748;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825b49a8
	ctx.lr = 0x828FD748;
	sub_825B49A8(ctx, base);
loc_828FD748:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828fd764
	if (!cr6.eq) goto loc_828FD764;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
loc_828FD764:
	// lwz r29,16(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r31,0
	ctx.r31.s64 = 0;
loc_828FD76C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a35278
	ctx.lr = 0x828FD778;
	sub_82A35278(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x828fd76c
	if (cr6.lt) goto loc_828FD76C;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828fd798
	if (cr6.eq) goto loc_828FD798;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
loc_828FD798:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FD7A0"))) PPC_WEAK_FUNC(sub_828FD7A0);
PPC_FUNC_IMPL(__imp__sub_828FD7A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab4
	ctx.lr = 0x828FD7A8;
	__savegprlr_15(ctx, base);
	// stfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// li r16,1
	ctx.r16.s64 = 1;
	// mr r15,r21
	ctx.r15.u64 = ctx.r21.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,472(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// lwz r19,192(r11)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// lwz r18,292(r11)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r31,432(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// beq cr6,0x828fd7f0
	if (cr6.eq) goto loc_828FD7F0;
	// bl 0x83930ac8
	ctx.lr = 0x828FD7E4;
	sub_83930AC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828fd80c
	if (!cr6.eq) goto loc_828FD80C;
loc_828FD7F0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x828fd810
	if (cr6.eq) goto loc_828FD810;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a18500
	ctx.lr = 0x828FD800;
	sub_82A18500(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828fd810
	if (cr6.eq) goto loc_828FD810;
loc_828FD80C:
	// mr r15,r16
	ctx.r15.u64 = ctx.r16.u64;
loc_828FD810:
	// addis r17,r20,1
	ctx.r17.s64 = ctx.r20.s64 + 65536;
	// addi r17,r17,-30388
	ctx.r17.s64 = ctx.r17.s64 + -30388;
	// lbz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828fd82c
	if (!cr6.eq) goto loc_828FD82C;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x825b4670
	ctx.lr = 0x828FD82C;
	sub_825B4670(ctx, base);
loc_828FD82C:
	// lwz r11,16(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828fd848
	if (!cr6.eq) goto loc_828FD848;
	// lwz r11,8(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,3312
	ctx.r10.s64 = ctx.r11.s64 + 3312;
	// stw r10,16(r17)
	PPC_STORE_U32(ctx.r17.u32 + 16, ctx.r10.u32);
loc_828FD848:
	// lwz r25,16(r17)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r30,r25,240
	ctx.r30.s64 = ctx.r25.s64 + 240;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_828FD864:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x828fd864
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_828FD864;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r29,r25,112
	ctx.r29.s64 = ctx.r25.s64 + 112;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_828FD884:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x828fd884
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_828FD884;
	// lwz r11,4460(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4460);
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// lbz r28,112(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x828fd934
	if (cr6.eq) goto loc_828FD934;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x828fd98c
	if (!cr6.eq) goto loc_828FD98C;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r4,5756(r18)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5756);
	// bl 0x825ca6b8
	ctx.lr = 0x828FD8B8;
	sub_825CA6B8(ctx, base);
	// cmplwi cr6,r3,24
	cr6.compare<uint32_t>(ctx.r3.u32, 24, xer);
	// beq cr6,0x828fd8d8
	if (cr6.eq) goto loc_828FD8D8;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828fd8d0
	if (cr6.eq) goto loc_828FD8D0;
	// stb r21,260(r25)
	PPC_STORE_U8(ctx.r25.u32 + 260, ctx.r21.u8);
loc_828FD8D0:
	// mr r31,r16
	ctx.r31.u64 = ctx.r16.u64;
	// b 0x828fd8dc
	goto loc_828FD8DC;
loc_828FD8D8:
	// stb r21,260(r25)
	PPC_STORE_U8(ctx.r25.u32 + 260, ctx.r21.u8);
loc_828FD8DC:
	// lwz r11,5356(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5356);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x828fd928
	if (!cr6.eq) goto loc_828FD928;
	// lwz r11,5360(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5360);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x828fd904
	if (cr6.eq) goto loc_828FD904;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x828fd904
	if (cr6.eq) goto loc_828FD904;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// b 0x828fd90c
	goto loc_828FD90C;
loc_828FD904:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_828FD90C:
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82a33718
	ctx.lr = 0x828FD918;
	sub_82A33718(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828fd98c
	if (!cr6.eq) goto loc_828FD98C;
	// stb r21,261(r25)
	PPC_STORE_U8(ctx.r25.u32 + 261, ctx.r21.u8);
loc_828FD928:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828fd98c
	if (!cr6.eq) goto loc_828FD98C;
loc_828FD934:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x828fd960
	if (cr6.eq) goto loc_828FD960;
	// li r9,5
	ctx.r9.s64 = 5;
	// stb r21,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r21.u8);
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_828FD954:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x828fd954
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_828FD954;
loc_828FD960:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828fd98c
	if (cr6.eq) goto loc_828FD98C;
	// li r9,8
	ctx.r9.s64 = 8;
	// stb r21,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r21.u8);
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_828FD980:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x828fd980
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_828FD980;
loc_828FD98C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// li r26,24
	ctx.r26.s64 = 24;
	// ori r23,r10,33752
	ctx.r23.u64 = ctx.r10.u64 | 33752;
	// ori r24,r9,34448
	ctx.r24.u64 = ctx.r9.u64 | 34448;
loc_828FD9B0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,24
	cr6.compare<uint32_t>(ctx.r29.u32, 24, xer);
	// blt cr6,0x828fd9c0
	if (cr6.lt) goto loc_828FD9C0;
	// li r11,23
	ctx.r11.s64 = 23;
loc_828FD9C0:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r3,r11,r19
	ctx.r3.u64 = ctx.r11.u64 + ctx.r19.u64;
	// bl 0x825b2f28
	ctx.lr = 0x828FD9CC;
	sub_825B2F28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828fdb8c
	if (!cr6.eq) goto loc_828FDB8C;
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,24
	cr6.compare<uint32_t>(ctx.r29.u32, 24, xer);
	// blt cr6,0x828fd9ec
	if (cr6.lt) goto loc_828FD9EC;
	// li r11,23
	ctx.r11.s64 = 23;
loc_828FD9EC:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + ctx.r19.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x828fda08
	if (cr6.eq) goto loc_828FDA08;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x828fda28
	goto loc_828FDA28;
loc_828FDA08:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x828fda20
	if (cr6.lt) goto loc_828FDA20;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// blt cr6,0x828fda24
	if (cr6.lt) goto loc_828FDA24;
loc_828FDA20:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_828FDA24:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_828FDA28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828fdb58
	if (cr6.eq) goto loc_828FDB58;
	// clrlwi r11,r15,24
	ctx.r11.u64 = ctx.r15.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828fdb58
	if (!cr6.eq) goto loc_828FDB58;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,24
	cr6.compare<uint32_t>(ctx.r29.u32, 24, xer);
	// blt cr6,0x828fda50
	if (cr6.lt) goto loc_828FDA50;
	// li r11,23
	ctx.r11.s64 = 23;
loc_828FDA50:
	// addi r10,r29,8582
	ctx.r10.s64 = ctx.r29.s64 + 8582;
	// subfc r9,r26,r29
	xer.ca = ctx.r29.u32 >= ctx.r26.u32;
	ctx.r9.s64 = ctx.r29.s64 - ctx.r26.s64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// lwzx r3,r7,r20
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r20.u32);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// and r4,r6,r28
	ctx.r4.u64 = ctx.r6.u64 & ctx.r28.u64;
	// add r10,r11,r19
	ctx.r10.u64 = ctx.r11.u64 + ctx.r19.u64;
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	// mulli r11,r9,84
	ctx.r11.s64 = ctx.r9.s64 * 84;
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r27,12(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r31,r11,460
	ctx.r31.s64 = ctx.r11.s64 + 460;
	// bctrl 
	ctx.lr = 0x828FDA94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828fdb58
	if (cr6.eq) goto loc_828FDB58;
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stb r21,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r21.u8);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stb r21,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r21.u8);
	// stb r16,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r16.u8);
	// mr r22,r16
	ctx.r22.u64 = ctx.r16.u64;
	// stb r28,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r28.u8);
	// lwz r11,4460(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4460);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x828fdadc
	if (!cr6.eq) goto loc_828FDADC;
	// lwz r11,5356(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5356);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x828fdadc
	if (!cr6.eq) goto loc_828FDADC;
	// stb r21,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r21.u8);
	// b 0x828fdae8
	goto loc_828FDAE8;
loc_828FDADC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828fc760
	ctx.lr = 0x828FDAE8;
	sub_828FC760(ctx, base);
loc_828FDAE8:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r10,r11,r20
	ctx.r10.u64 = ctx.r11.u64 + ctx.r20.u64;
	// add r3,r20,r24
	ctx.r3.u64 = ctx.r20.u64 + ctx.r24.u64;
	// add r5,r10,r23
	ctx.r5.u64 = ctx.r10.u64 + ctx.r23.u64;
	// bl 0x828fc878
	ctx.lr = 0x828FDB10;
	sub_828FC878(ctx, base);
	// subfc r9,r26,r29
	xer.ca = ctx.r29.u32 >= ctx.r26.u32;
	ctx.r9.s64 = ctx.r29.s64 - ctx.r26.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r28
	ctx.r6.u64 = ctx.r7.u64 & ctx.r28.u64;
	// rlwinm r11,r6,3,21,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0x7F8;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r31,r11,268
	ctx.r31.s64 = ctx.r11.s64 + 268;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// bl 0x828ff568
	ctx.lr = 0x828FDB38;
	sub_828FF568(ctx, base);
	// lfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x828fdb54
	if (!cr6.gt) goto loc_828FDB54;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a32ff0
	ctx.lr = 0x828FDB4C;
	sub_82A32FF0(ctx, base);
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// b 0x828fdb58
	goto loc_828FDB58;
loc_828FDB54:
	// stfs f31,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_828FDB58:
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828fdb8c
	if (!cr6.eq) goto loc_828FDB8C;
	// subfc r11,r26,r29
	xer.ca = ctx.r29.u32 >= ctx.r26.u32;
	ctx.r11.s64 = ctx.r29.s64 - ctx.r26.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r8,r9,r28
	ctx.r8.u64 = ctx.r9.u64 & ctx.r28.u64;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// mulli r11,r7,84
	ctx.r11.s64 = ctx.r7.s64 * 84;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r10,r11,460
	ctx.r10.s64 = ctx.r11.s64 + 460;
	// stb r21,460(r11)
	PPC_STORE_U8(ctx.r11.u32 + 460, ctx.r21.u8);
	// stb r21,540(r11)
	PPC_STORE_U8(ctx.r11.u32 + 540, ctx.r21.u8);
	// stb r21,469(r11)
	PPC_STORE_U8(ctx.r11.u32 + 469, ctx.r21.u8);
loc_828FDB8C:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r28,24
	cr6.compare<uint32_t>(ctx.r28.u32, 24, xer);
	// blt cr6,0x828fd9b0
	if (cr6.lt) goto loc_828FD9B0;
	// lwz r11,16(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828fdc04
	if (cr6.eq) goto loc_828FDC04;
	// lwz r11,8(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
loc_828FDBB4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r16,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r16.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x828fdbb4
	if (!cr0.eq) goto loc_828FDBB4;
	// mr r10,r10
	ctx.r10.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x828fdc00
	if (!cr6.eq) goto loc_828FDC00;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x828FDBE0;
	sub_8353F380(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,12704
	ctx.r5.s64 = ctx.r11.s64 + 12704;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x828FDC00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_828FDC00:
	// stw r21,16(r17)
	PPC_STORE_U32(ctx.r17.u32 + 16, ctx.r21.u32);
loc_828FDC04:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FDC10"))) PPC_WEAK_FUNC(sub_828FDC10);
PPC_FUNC_IMPL(__imp__sub_828FDC10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x828FDC18;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r31,432(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// lwz r29,292(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x828fdc74
	if (cr6.eq) goto loc_828FDC74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da1d10
	ctx.lr = 0x828FDC48;
	sub_82DA1D10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828fdc70
	if (cr6.eq) goto loc_828FDC70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a18a48
	ctx.lr = 0x828FDC5C;
	sub_82A18A48(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828fdc70
	if (cr6.eq) goto loc_828FDC70;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x828fdc78
	goto loc_828FDC78;
loc_828FDC70:
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
loc_828FDC74:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_828FDC78:
	// lwz r9,5356(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5356);
	// clrlwi r31,r10,24
	ctx.r31.u64 = ctx.r10.u32 & 0xFF;
	// cmpwi cr6,r9,6
	cr6.compare<int32_t>(ctx.r9.s32, 6, xer);
	// bne cr6,0x828fddcc
	if (!cr6.eq) goto loc_828FDDCC;
	// lwz r4,5756(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5756);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x828fdca0
	if (cr6.lt) goto loc_828FDCA0;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x828fdca4
	if (cr6.lt) goto loc_828FDCA4;
loc_828FDCA0:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_828FDCA4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x828fdfd4
	if (cr6.eq) goto loc_828FDFD4;
	// lwz r3,192(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// bl 0x825ca6b8
	ctx.lr = 0x828FDCB8;
	sub_825CA6B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// bge cr6,0x828fdfd4
	if (!cr6.lt) goto loc_828FDFD4;
	// addi r11,r11,8582
	ctx.r11.s64 = ctx.r11.s64 + 8582;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x828FDCE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828fdfd4
	if (cr6.eq) goto loc_828FDFD4;
	// addis r30,r27,1
	ctx.r30.s64 = ctx.r27.s64 + 65536;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// addi r30,r30,-30388
	ctx.r30.s64 = ctx.r30.s64 + -30388;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825b46f0
	ctx.lr = 0x828FDD00;
	sub_825B46F0(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// addi r9,r3,108
	ctx.r9.s64 = ctx.r3.s64 + 108;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_828FDD10:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x828fdd10
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_828FDD10;
	// lbz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x828fdd44
	if (!cr6.eq) goto loc_828FDD44;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828fdd40
	if (!cr6.eq) goto loc_828FDD40;
	// lbz r11,2040(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 2040);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828fdd44
	if (cr6.eq) goto loc_828FDD44;
loc_828FDD40:
	// li r29,1
	ctx.r29.s64 = 1;
loc_828FDD44:
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r31,r3,152
	ctx.r31.s64 = ctx.r3.s64 + 152;
	// addi r10,r1,124
	ctx.r10.s64 = ctx.r1.s64 + 124;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_828FDD58:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x828fdd58
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_828FDD58;
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r29.u8);
	// addis r4,r27,1
	ctx.r4.s64 = ctx.r27.s64 + 65536;
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// addi r4,r4,-31088
	ctx.r4.s64 = ctx.r4.s64 + -31088;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828ff580
	ctx.lr = 0x828FDD80;
	sub_828FF580(ctx, base);
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// lfs f0,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f13,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f12,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f11,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x828fdfd4
	if (cr6.eq) goto loc_828FDFD4;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x825b33f0
	ctx.lr = 0x828FDDBC;
	sub_825B33F0(ctx, base);
	// stw r24,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r24.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_828FDDCC:
	// addis r26,r27,1
	ctx.r26.s64 = ctx.r27.s64 + 65536;
	// addi r26,r26,-30388
	ctx.r26.s64 = ctx.r26.s64 + -30388;
	// lbz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828fdde8
	if (!cr6.eq) goto loc_828FDDE8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825b4670
	ctx.lr = 0x828FDDE8;
	sub_825B4670(ctx, base);
loc_828FDDE8:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828fde04
	if (!cr6.eq) goto loc_828FDE04;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,3312
	ctx.r10.s64 = ctx.r11.s64 + 3312;
	// stw r10,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r10.u32);
loc_828FDE04:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// addi r28,r11,152
	ctx.r28.s64 = ctx.r11.s64 + 152;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_828FDE1C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x828fde1c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_828FDE1C;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// lbz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// lis r9,0
	ctx.r9.s64 = 0;
	// subfic r8,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r11.s64;
	// ori r6,r9,34580
	ctx.r6.u64 = ctx.r9.u64 | 34580;
	// subfe r5,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r4,0
	ctx.r4.s64 = 0;
	// and r25,r5,r10
	ctx.r25.u64 = ctx.r5.u64 & ctx.r10.u64;
	// lwzx r3,r27,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r6.u32);
	// bl 0x82a22b40
	ctx.lr = 0x828FDE50;
	sub_82A22B40(ctx, base);
	// lwz r4,28(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r4,6
	cr6.compare<int32_t>(ctx.r4.s32, 6, xer);
	// beq cr6,0x828fdf98
	if (cr6.eq) goto loc_828FDF98;
	// lwz r11,4456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4456);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x828fdf98
	if (cr6.eq) goto loc_828FDF98;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// addis r29,r27,1
	ctx.r29.s64 = ctx.r27.s64 + 65536;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// addi r29,r29,-31208
	ctx.r29.s64 = ctx.r29.s64 + -31208;
	// lwz r30,192(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
loc_828FDE84:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x828fde94
	if (cr6.lt) goto loc_828FDE94;
	// li r11,23
	ctx.r11.s64 = 23;
loc_828FDE94:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x828fdeb0
	if (cr6.eq) goto loc_828FDEB0;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x828fded0
	goto loc_828FDED0;
loc_828FDEB0:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x828fdec8
	if (cr6.lt) goto loc_828FDEC8;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x828fdecc
	if (cr6.lt) goto loc_828FDECC;
loc_828FDEC8:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_828FDECC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_828FDED0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828fdf48
	if (cr6.eq) goto loc_828FDF48;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x828fdeec
	if (cr6.lt) goto loc_828FDEEC;
	// li r11,23
	ctx.r11.s64 = 23;
loc_828FDEEC:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x8357ece0
	ctx.lr = 0x828FDEF8;
	sub_8357ECE0(ctx, base);
	// bl 0x82a47de0
	ctx.lr = 0x828FDEFC;
	sub_82A47DE0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x828fdf48
	if (cr6.eq) goto loc_828FDF48;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828FDF18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bne cr6,0x828fdf48
	if (!cr6.eq) goto loc_828FDF48;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bge cr6,0x828fdf5c
	if (!cr6.lt) goto loc_828FDF5C;
loc_828FDF48:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x828fde84
	if (cr6.lt) goto loc_828FDE84;
	// b 0x828fdf98
	goto loc_828FDF98;
loc_828FDF5C:
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r25,1
	ctx.r25.s64 = 1;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
loc_828FDF98:
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stb r25,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r25.u8);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,4(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// stfs f13,8(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// stfs f12,12(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r28.u32 + 12, temp.u32);
	// stfs f11,16(r28)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r28.u32 + 16, temp.u32);
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828fdfd4
	if (cr6.eq) goto loc_828FDFD4;
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// bl 0x825b33f0
	ctx.lr = 0x828FDFD0;
	sub_825B33F0(ctx, base);
	// stw r24,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r24.u32);
loc_828FDFD4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FDFE0"))) PPC_WEAK_FUNC(sub_828FDFE0);
PPC_FUNC_IMPL(__imp__sub_828FDFE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x828FDFE8;
	__savegprlr_23(ctx, base);
	// stfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f29.u64);
	// stfd f30,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4460(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4460);
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x828fe034
	if (cr6.eq) goto loc_828FE034;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x828fe038
	if (!cr6.eq) goto loc_828FE038;
	// lwz r11,4548(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4548);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x828fe038
	if (cr6.lt) goto loc_828FE038;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bgt cr6,0x828fe038
	if (cr6.gt) goto loc_828FE038;
loc_828FE034:
	// li r10,1
	ctx.r10.s64 = 1;
loc_828FE038:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828fe0d4
	if (!cr6.eq) goto loc_828FE0D4;
	// addis r31,r26,1
	ctx.r31.s64 = ctx.r26.s64 + 65536;
	// addi r31,r31,-30388
	ctx.r31.s64 = ctx.r31.s64 + -30388;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828fe060
	if (!cr6.eq) goto loc_828FE060;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b4670
	ctx.lr = 0x828FE060;
	sub_825B4670(ctx, base);
loc_828FE060:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828fe07c
	if (!cr6.eq) goto loc_828FE07C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,3312
	ctx.r10.s64 = ctx.r11.s64 + 3312;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_828FE07C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,172
	ctx.r11.s64 = ctx.r11.s64 + 172;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_828FE098:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x828fe098
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_828FE098;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// stb r23,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r23.u8);
	// lfs f12,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// b 0x828fe318
	goto loc_828FE318;
loc_828FE0D4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// li r24,255
	ctx.r24.s64 = 255;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
loc_828FE0F0:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x828fe104
	if (cr6.lt) goto loc_828FE104;
	// cmpwi cr6,r29,22
	cr6.compare<int32_t>(ctx.r29.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x828fe108
	if (cr6.lt) goto loc_828FE108;
loc_828FE104:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_828FE108:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828fe23c
	if (cr6.eq) goto loc_828FE23C;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// addi r11,r28,12
	ctx.r11.s64 = ctx.r28.s64 + 12;
loc_828FE11C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r29
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, xer);
	// beq cr6,0x828fe13c
	if (cr6.eq) goto loc_828FE13C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x828fe11c
	if (cr6.lt) goto loc_828FE11C;
	// b 0x828fe23c
	goto loc_828FE23C;
loc_828FE13C:
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// beq cr6,0x828fe23c
	if (cr6.eq) goto loc_828FE23C;
	// bge cr6,0x828fe160
	if (!cr6.lt) goto loc_828FE160;
	// mulli r11,r31,112
	ctx.r11.s64 = ctx.r31.s64 * 112;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x825b2f28
	ctx.lr = 0x828FE154;
	sub_825B2F28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828fe23c
	if (!cr6.eq) goto loc_828FE23C;
loc_828FE160:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825ca6b8
	ctx.lr = 0x828FE16C;
	sub_825CA6B8(ctx, base);
	// cmplwi cr6,r3,24
	cr6.compare<uint32_t>(ctx.r3.u32, 24, xer);
	// beq cr6,0x828fe23c
	if (cr6.eq) goto loc_828FE23C;
	// addi r11,r31,8582
	ctx.r11.s64 = ctx.r31.s64 + 8582;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r26
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x828FE190;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828fe23c
	if (cr6.eq) goto loc_828FE23C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x828fe1ac
	if (cr6.lt) goto loc_828FE1AC;
	// li r11,23
	ctx.r11.s64 = 23;
loc_828FE1AC:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x8357ece0
	ctx.lr = 0x828FE1B8;
	sub_8357ECE0(ctx, base);
	// bl 0x82a47de0
	ctx.lr = 0x828FE1BC;
	sub_82A47DE0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x828fe23c
	if (cr6.eq) goto loc_828FE23C;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x828fe23c
	if (!cr6.eq) goto loc_828FE23C;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// blt cr6,0x828fe23c
	if (cr6.lt) goto loc_828FE23C;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x828fe208
	if (cr6.lt) goto loc_828FE208;
	// cmpwi cr6,r29,22
	cr6.compare<int32_t>(ctx.r29.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x828fe20c
	if (cr6.lt) goto loc_828FE20C;
loc_828FE208:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_828FE20C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828fe22c
	if (cr6.eq) goto loc_828FE22C;
	// add r11,r29,r27
	ctx.r11.u64 = ctx.r29.u64 + ctx.r27.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x828fe230
	goto loc_828FE230;
loc_828FE22C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_828FE230:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828fe24c
	if (!cr6.eq) goto loc_828FE24C;
loc_828FE23C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,22
	cr6.compare<uint32_t>(ctx.r29.u32, 22, xer);
	// blt cr6,0x828fe0f0
	if (cr6.lt) goto loc_828FE0F0;
	// b 0x828fe278
	goto loc_828FE278;
loc_828FE24C:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r25,1
	ctx.r25.s64 = 1;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lfs f30,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f30.f64 = double(temp.f32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfs f29,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f29.f64 = double(temp.f32);
loc_828FE278:
	// addis r31,r26,1
	ctx.r31.s64 = ctx.r26.s64 + 65536;
	// addi r31,r31,-30388
	ctx.r31.s64 = ctx.r31.s64 + -30388;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828fe294
	if (!cr6.eq) goto loc_828FE294;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b4670
	ctx.lr = 0x828FE294;
	sub_825B4670(ctx, base);
loc_828FE294:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828fe2b0
	if (!cr6.eq) goto loc_828FE2B0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,3312
	ctx.r10.s64 = ctx.r11.s64 + 3312;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_828FE2B0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,172
	ctx.r11.s64 = ctx.r11.s64 + 172;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_828FE2CC:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x828fe2cc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_828FE2CC;
	// clrlwi r10,r25,24
	ctx.r10.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x828fe2ec
	if (cr6.eq) goto loc_828FE2EC;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// b 0x828fe2fc
	goto loc_828FE2FC;
loc_828FE2EC:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f29,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f31.f64 = double(temp.f32);
loc_828FE2FC:
	// stb r25,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r25.u8);
	// stfs f30,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f29,12(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
loc_828FE318:
	// beq cr6,0x828fe328
	if (cr6.eq) goto loc_828FE328;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x825b33f0
	ctx.lr = 0x828FE324;
	sub_825B33F0(ctx, base);
	// stw r23,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r23.u32);
loc_828FE328:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

__attribute__((alias("__imp__sub_828FE33C"))) PPC_WEAK_FUNC(sub_828FE33C);
PPC_FUNC_IMPL(__imp__sub_828FE33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828FE340"))) PPC_WEAK_FUNC(sub_828FE340);
PPC_FUNC_IMPL(__imp__sub_828FE340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x828FE348;
	__savegprlr_14(ctx, base);
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f29.u64);
	// stfd f30,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// ori r8,r10,34520
	ctx.r8.u64 = ctx.r10.u64 | 34520;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// ori r7,r9,34580
	ctx.r7.u64 = ctx.r9.u64 | 34580;
	// mr r16,r5
	ctx.r16.u64 = ctx.r5.u64;
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwzx r6,r25,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r8.u32);
	// addi r3,r3,-31112
	ctx.r3.s64 = ctx.r3.s64 + -31112;
	// lwzx r5,r25,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r7.u32);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r20,192(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// stw r5,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r5.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x837475e8
	ctx.lr = 0x828FE3A8;
	sub_837475E8(ctx, base);
	// li r11,24
	ctx.r11.s64 = 24;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r10,r1,239
	ctx.r10.s64 = ctx.r1.s64 + 239;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_828FE3BC:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x828fe3bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_828FE3BC;
	// addi r23,r25,56
	ctx.r23.s64 = ctx.r25.s64 + 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x825b2660
	ctx.lr = 0x828FE3D4;
	sub_825B2660(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addis r17,r25,1
	ctx.r17.s64 = ctx.r25.s64 + 65536;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r7,0
	ctx.r7.s64 = 0;
	// lfs f31,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// lis r6,0
	ctx.r6.s64 = 0;
	// lfs f30,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f30.f64 = double(temp.f32);
	// addi r5,r11,11910
	ctx.r5.s64 = ctx.r11.s64 + 11910;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// addi r17,r17,-31088
	ctx.r17.s64 = ctx.r17.s64 + -31088;
	// stw r5,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r5.u32);
	// ori r15,r8,33752
	ctx.r15.u64 = ctx.r8.u64 | 33752;
	// ori r19,r7,33748
	ctx.r19.u64 = ctx.r7.u64 | 33748;
	// ori r14,r6,35148
	ctx.r14.u64 = ctx.r6.u64 | 35148;
loc_828FE418:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmplwi cr6,r26,24
	cr6.compare<uint32_t>(ctx.r26.u32, 24, xer);
	// blt cr6,0x828fe428
	if (cr6.lt) goto loc_828FE428;
	// li r11,23
	ctx.r11.s64 = 23;
loc_828FE428:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r10,r11,r20
	ctx.r10.u64 = ctx.r11.u64 + ctx.r20.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmplwi cr6,r26,24
	cr6.compare<uint32_t>(ctx.r26.u32, 24, xer);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// clrlwi r21,r9,24
	ctx.r21.u64 = ctx.r9.u32 & 0xFF;
	// blt cr6,0x828fe448
	if (cr6.lt) goto loc_828FE448;
	// li r11,23
	ctx.r11.s64 = 23;
loc_828FE448:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r18,r11,r20
	ctx.r18.u64 = ctx.r11.u64 + ctx.r20.u64;
	// lwz r11,12(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// blt cr6,0x828fe46c
	if (cr6.lt) goto loc_828FE46C;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x828fe470
	if (cr6.lt) goto loc_828FE470;
loc_828FE46C:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_828FE470:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828fe4c4
	if (!cr6.eq) goto loc_828FE4C4;
	// lbz r11,1(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828fe490
	if (cr6.eq) goto loc_828FE490;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x828fe4b0
	goto loc_828FE4B0;
loc_828FE490:
	// lwz r11,16(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x828fe4a8
	if (cr6.lt) goto loc_828FE4A8;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x828fe4ac
	if (cr6.lt) goto loc_828FE4AC;
loc_828FE4A8:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_828FE4AC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_828FE4B0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828fe4c4
	if (cr6.eq) goto loc_828FE4C4;
	// lwz r11,16(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 16);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_828FE4C4:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x828fb878
	ctx.lr = 0x828FE4D4;
	sub_828FB878(ctx, base);
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// stw r24,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r24.u32);
	// stw r24,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r24.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r24,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r24.u32);
	// stw r24,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r24.u32);
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stw r24,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r24.u32);
	// add r30,r10,r15
	ctx.r30.u64 = ctx.r10.u64 + ctx.r15.u64;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r9.u32);
	// bl 0x82907d08
	ctx.lr = 0x828FE518;
	sub_82907D08(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x828fe528
	if (!cr6.eq) goto loc_828FE528;
	// stw r24,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r24.u32);
loc_828FE528:
	// addi r11,r26,8582
	ctx.r11.s64 = ctx.r26.s64 + 8582;
	// rlwinm r22,r11,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r22,r25
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r25.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x828FE544;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828fe63c
	if (cr6.eq) goto loc_828FE63C;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// beq cr6,0x828fe568
	if (cr6.eq) goto loc_828FE568;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(ctx.r29.s32, 4, xer);
	// beq cr6,0x828fe568
	if (cr6.eq) goto loc_828FE568;
	// cmpwi cr6,r29,5
	cr6.compare<int32_t>(ctx.r29.s32, 5, xer);
	// bne cr6,0x828fe63c
	if (!cr6.eq) goto loc_828FE63C;
loc_828FE568:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r31,4844(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4844);
	// lwz r10,4460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4460);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x828fe63c
	if (!cr6.eq) goto loc_828FE63C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x82a22c10
	ctx.lr = 0x828FE58C;
	sub_82A22C10(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x828fe5b8
	if (cr6.lt) goto loc_828FE5B8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x828fe5b8
	if (!cr6.lt) goto loc_828FE5B8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x828fe5b8
	if (cr6.lt) goto loc_828FE5B8;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x828fe5bc
	if (cr6.lt) goto loc_828FE5BC;
loc_828FE5B8:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_828FE5BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828fe63c
	if (!cr6.eq) goto loc_828FE63C;
	// cmpwi cr6,r31,72
	cr6.compare<int32_t>(ctx.r31.s32, 72, xer);
	// bge cr6,0x828fe5fc
	if (!cr6.lt) goto loc_828FE5FC;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// beq cr6,0x828fe5fc
	if (cr6.eq) goto loc_828FE5FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r29,2
	ctx.r29.s64 = 2;
	// bl 0x82903180
	ctx.lr = 0x828FE5E4;
	sub_82903180(ctx, base);
	// lwz r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r4,r5,2470
	ctx.r4.s64 = ctx.r5.s64 + 2470;
	// bl 0x83102db0
	ctx.lr = 0x828FE5F8;
	sub_83102DB0(ctx, base);
	// b 0x828fe63c
	goto loc_828FE63C;
loc_828FE5FC:
	// lwz r11,688(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 688);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x828fe610
	if (cr6.eq) goto loc_828FE610;
	// cmpwi cr6,r29,5
	cr6.compare<int32_t>(ctx.r29.s32, 5, xer);
	// bne cr6,0x828fe638
	if (!cr6.eq) goto loc_828FE638;
loc_828FE610:
	// lwz r11,896(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 896);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x828fe624
	if (cr6.eq) goto loc_828FE624;
	// cmpwi cr6,r29,5
	cr6.compare<int32_t>(ctx.r29.s32, 5, xer);
	// bne cr6,0x828fe638
	if (!cr6.eq) goto loc_828FE638;
loc_828FE624:
	// lwz r11,844(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 844);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x828fe63c
	if (cr6.eq) goto loc_828FE63C;
	// cmpwi cr6,r29,5
	cr6.compare<int32_t>(ctx.r29.s32, 5, xer);
	// beq cr6,0x828fe63c
	if (cr6.eq) goto loc_828FE63C;
loc_828FE638:
	// li r29,5
	ctx.r29.s64 = 5;
loc_828FE63C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bl 0x82907ce8
	ctx.lr = 0x828FE650;
	sub_82907CE8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x828fe668
	if (cr6.eq) goto loc_828FE668;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
loc_828FE668:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82907d08
	ctx.lr = 0x828FE670;
	sub_82907D08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828fe688
	if (cr6.eq) goto loc_828FE688;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_828FE688:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// beq cr6,0x828fe6d0
	if (cr6.eq) goto loc_828FE6D0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stw r24,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r24.u32);
	// bl 0x82907ce8
	ctx.lr = 0x828FE6A8;
	sub_82907CE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828fe6b8
	if (!cr6.eq) goto loc_828FE6B8;
	// stw r24,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r24.u32);
loc_828FE6B8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82907d08
	ctx.lr = 0x828FE6C0;
	sub_82907D08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828fe6d0
	if (!cr6.eq) goto loc_828FE6D0;
	// stw r24,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r24.u32);
loc_828FE6D0:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x828fe6ec
	if (cr6.eq) goto loc_828FE6EC;
	// cmpwi cr6,r29,14
	cr6.compare<int32_t>(ctx.r29.s32, 14, xer);
	// bge cr6,0x828fe6ec
	if (!cr6.lt) goto loc_828FE6EC;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// li r10,1
	ctx.r10.s64 = 1;
	// stbx r10,r26,r11
	PPC_STORE_U8(ctx.r26.u32 + ctx.r11.u32, ctx.r10.u8);
loc_828FE6EC:
	// cmplwi cr6,r29,13
	cr6.compare<uint32_t>(ctx.r29.u32, 13, xer);
	// bgt cr6,0x828fecec
	if (cr6.gt) goto loc_828FECEC;
	// lis r12,-32112
	ctx.r12.s64 = -2104492032;
	// rlwinm r0,r29,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-6388
	ctx.r12.s64 = ctx.r12.s64 + -6388;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r29.u32) {
	case 0:
		goto loc_828FECEC;
	case 1:
		goto loc_828FE744;
	case 2:
		goto loc_828FE744;
	case 3:
		goto loc_828FE744;
	case 4:
		goto loc_828FE744;
	case 5:
		goto loc_828FE744;
	case 6:
		goto loc_828FE744;
	case 7:
		goto loc_828FE744;
	case 8:
		goto loc_828FE744;
	case 9:
		goto loc_828FE744;
	case 10:
		goto loc_828FE744;
	case 11:
		goto loc_828FE744;
	case 12:
		goto loc_828FEB98;
	case 13:
		goto loc_828FEB98;
	default:
		return;
	}
	// lwz r20,-4884(r15)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r15.u32 + -4884);
	// lwz r20,-6332(r15)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r15.u32 + -6332);
	// lwz r20,-6332(r15)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r15.u32 + -6332);
	// lwz r20,-6332(r15)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r15.u32 + -6332);
	// lwz r20,-6332(r15)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r15.u32 + -6332);
	// lwz r20,-6332(r15)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r15.u32 + -6332);
	// lwz r20,-6332(r15)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r15.u32 + -6332);
	// lwz r20,-6332(r15)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r15.u32 + -6332);
	// lwz r20,-6332(r15)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r15.u32 + -6332);
	// lwz r20,-6332(r15)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r15.u32 + -6332);
	// lwz r20,-6332(r15)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r15.u32 + -6332);
	// lwz r20,-6332(r15)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r15.u32 + -6332);
	// lwz r20,-5224(r15)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r15.u32 + -5224);
	// lwz r20,-5224(r15)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r15.u32 + -5224);
loc_828FE744:
	// clrlwi r27,r21,24
	ctx.r27.u64 = ctx.r21.u32 & 0xFF;
	// cmplwi cr6,r27,8
	cr6.compare<uint32_t>(ctx.r27.u32, 8, xer);
	// bge cr6,0x828fecec
	if (!cr6.lt) goto loc_828FECEC;
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mulli r11,r27,2004
	ctx.r11.s64 = ctx.r27.s64 * 2004;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// cmplwi cr6,r26,24
	cr6.compare<uint32_t>(ctx.r26.u32, 24, xer);
	// blt cr6,0x828fe770
	if (cr6.lt) goto loc_828FE770;
	// li r31,23
	ctx.r31.s64 = 23;
loc_828FE770:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82a35328
	ctx.lr = 0x828FE778;
	sub_82A35328(ctx, base);
	// bl 0x82a47d40
	ctx.lr = 0x828FE77C;
	sub_82A47D40(ctx, base);
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// lbzx r9,r25,r19
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r19.u32);
	// addi r7,r25,4544
	ctx.r7.s64 = ctx.r25.s64 + 4544;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mulli r11,r31,112
	ctx.r11.s64 = ctx.r31.s64 * 112;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// stb r9,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r9.u8);
	// rlwinm r5,r8,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// stb r5,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r5.u8);
	// add r9,r11,r20
	ctx.r9.u64 = ctx.r11.u64 + ctx.r20.u64;
	// addi r8,r1,148
	ctx.r8.s64 = ctx.r1.s64 + 148;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82907d68
	ctx.lr = 0x828FE7C8;
	sub_82907D68(ctx, base);
	// stbx r24,r25,r19
	PPC_STORE_U8(ctx.r25.u32 + ctx.r19.u32, ctx.r24.u8);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a31458
	ctx.lr = 0x828FE7D8;
	sub_82A31458(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x828fe7f4
	if (cr6.lt) goto loc_828FE7F4;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x828fe7f8
	if (cr6.lt) goto loc_828FE7F8;
loc_828FE7F4:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_828FE7F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828feb3c
	if (cr6.eq) goto loc_828FEB3C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x828fece0
	if (cr6.eq) goto loc_828FECE0;
	// lwzx r3,r22,r25
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r25.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828FE82C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r3,r22,r25
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r25.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x828FE840;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828fe938
	if (cr6.eq) goto loc_828FE938;
	// lbz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 96);
	// cmplwi cr6,r11,248
	cr6.compare<uint32_t>(ctx.r11.u32, 248, xer);
	// bge cr6,0x828fe88c
	if (!cr6.lt) goto loc_828FE88C;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x828fe88c
	if (cr6.eq) goto loc_828FE88C;
	// lfs f0,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x828fe874
	if (cr6.eq) goto loc_828FE874;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
loc_828FE874:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// li r5,1
	ctx.r5.s64 = 1;
	// bgt cr6,0x828fe884
	if (cr6.gt) goto loc_828FE884;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
loc_828FE884:
	// clrlwi r4,r26,24
	ctx.r4.u64 = ctx.r26.u32 & 0xFF;
	// b 0x828fe8c0
	goto loc_828FE8C0;
loc_828FE88C:
	// lfs f0,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x828fe8c8
	if (!cr6.lt) goto loc_828FE8C8;
	// clrlwi r31,r26,24
	ctx.r31.u64 = ctx.r26.u32 & 0xFF;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a31608
	ctx.lr = 0x828FE8A8;
	sub_82A31608(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828fe8c8
	if (cr6.eq) goto loc_828FE8C8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_828FE8C0:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a31618
	ctx.lr = 0x828FE8C8;
	sub_82A31618(ctx, base);
loc_828FE8C8:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,248
	cr6.compare<uint32_t>(ctx.r11.u32, 248, xer);
	// bge cr6,0x828fe938
	if (!cr6.lt) goto loc_828FE938;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x828fe938
	if (cr6.eq) goto loc_828FE938;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a301e0
	ctx.lr = 0x828FE8E8;
	sub_82A301E0(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// blt cr6,0x828fe938
	if (cr6.lt) goto loc_828FE938;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bgt cr6,0x828fe938
	if (cr6.gt) goto loc_828FE938;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,248
	cr6.compare<uint32_t>(ctx.r11.u32, 248, xer);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// blt cr6,0x828fe90c
	if (cr6.lt) goto loc_828FE90C;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_828FE90C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r4,r26,24
	ctx.r4.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,85
	cr6.compare<uint32_t>(ctx.r11.u32, 85, xer);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bne cr6,0x828fe928
	if (!cr6.eq) goto loc_828FE928;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// b 0x828fe934
	goto loc_828FE934;
loc_828FE928:
	// li r11,255
	ctx.r11.s64 = 255;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_828FE934:
	// bl 0x82a31630
	ctx.lr = 0x828FE938;
	sub_82A31630(ctx, base);
loc_828FE938:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,4460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4460);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x828fece0
	if (!cr6.eq) goto loc_828FECE0;
	// add r28,r25,r14
	ctx.r28.u64 = ctx.r25.u64 + ctx.r14.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825b46f0
	ctx.lr = 0x828FE954;
	sub_825B46F0(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,268
	ctx.r10.s64 = ctx.r1.s64 + 268;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r9,r3,108
	ctx.r9.s64 = ctx.r3.s64 + 108;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_828FE968:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x828fe968
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_828FE968;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lbz r9,272(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 272);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r29,432(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bne cr6,0x828feb20
	if (!cr6.eq) goto loc_828FEB20;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825ca6b8
	ctx.lr = 0x828FE998;
	sub_825CA6B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,24
	cr6.compare<uint32_t>(ctx.r3.u32, 24, xer);
	// bge cr6,0x828feb20
	if (!cr6.lt) goto loc_828FEB20;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,5356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5356);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// blt cr6,0x828feb20
	if (cr6.lt) goto loc_828FEB20;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bgt cr6,0x828feb20
	if (cr6.gt) goto loc_828FEB20;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x828fea38
	if (cr6.eq) goto loc_828FEA38;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da1d10
	ctx.lr = 0x828FE9CC;
	sub_82DA1D10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828fea38
	if (cr6.eq) goto loc_828FEA38;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,204(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82a38c50
	ctx.lr = 0x828FE9E8;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828feb20
	if (cr6.eq) goto loc_828FEB20;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,204(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82a38be0
	ctx.lr = 0x828FEA04;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828feb20
	if (!cr6.eq) goto loc_828FEB20;
	// clrlwi r31,r31,24
	ctx.r31.u64 = ctx.r31.u32 & 0xFF;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a315f8
	ctx.lr = 0x828FEA20;
	sub_82A315F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a315e8
	ctx.lr = 0x828FEA34;
	sub_82A315E8(ctx, base);
	// b 0x828feb20
	goto loc_828FEB20;
loc_828FEA38:
	// lbz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 240);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828feb20
	if (cr6.eq) goto loc_828FEB20;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,204(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82a38c50
	ctx.lr = 0x828FEA54;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828feb20
	if (cr6.eq) goto loc_828FEB20;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,204(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82a38be0
	ctx.lr = 0x828FEA70;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828feb20
	if (!cr6.eq) goto loc_828FEB20;
	// clrlwi r31,r31,24
	ctx.r31.u64 = ctx.r31.u32 & 0xFF;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a315f8
	ctx.lr = 0x828FEA8C;
	sub_82A315F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a315e8
	ctx.lr = 0x828FEAA0;
	sub_82A315E8(ctx, base);
	// bl 0x825d8390
	ctx.lr = 0x828FEAA4;
	sub_825D8390(ctx, base);
	// cmplw cr6,r27,r3
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, xer);
	// bne cr6,0x828feb20
	if (!cr6.eq) goto loc_828FEB20;
	// addis r31,r25,1
	ctx.r31.s64 = ctx.r25.s64 + 65536;
	// addi r31,r31,-30368
	ctx.r31.s64 = ctx.r31.s64 + -30368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828fd670
	ctx.lr = 0x828FEABC;
	sub_828FD670(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,5356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5356);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x828feafc
	if (cr6.eq) goto loc_828FEAFC;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x828feaec
	if (cr6.eq) goto loc_828FEAEC;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x828feb08
	if (!cr6.eq) goto loc_828FEB08;
	// lwz r11,484(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 484);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,484(r3)
	PPC_STORE_U32(ctx.r3.u32 + 484, ctx.r11.u32);
	// b 0x828feb08
	goto loc_828FEB08;
loc_828FEAEC:
	// lwz r11,588(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 588);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 588, ctx.r11.u32);
	// b 0x828feb08
	goto loc_828FEB08;
loc_828FEAFC:
	// lwz r11,628(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 628);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,628(r3)
	PPC_STORE_U32(ctx.r3.u32 + 628, ctx.r11.u32);
loc_828FEB08:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828feb20
	if (cr6.eq) goto loc_828FEB20;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x825bd768
	ctx.lr = 0x828FEB1C;
	sub_825BD768(ctx, base);
	// stw r24,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r24.u32);
loc_828FEB20:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828fece0
	if (cr6.eq) goto loc_828FECE0;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x825b33f0
	ctx.lr = 0x828FEB34;
	sub_825B33F0(ctx, base);
	// stw r24,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r24.u32);
	// b 0x828fece0
	goto loc_828FECE0;
loc_828FEB3C:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmplwi cr6,r26,24
	cr6.compare<uint32_t>(ctx.r26.u32, 24, xer);
	// blt cr6,0x828feb4c
	if (cr6.lt) goto loc_828FEB4C;
	// li r11,23
	ctx.r11.s64 = 23;
loc_828FEB4C:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x828fece0
	if (cr6.eq) goto loc_828FECE0;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmplwi cr6,r26,24
	cr6.compare<uint32_t>(ctx.r26.u32, 24, xer);
	// blt cr6,0x828feb70
	if (cr6.lt) goto loc_828FEB70;
	// li r11,23
	ctx.r11.s64 = 23;
loc_828FEB70:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// lbzx r11,r11,r20
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r20.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x828fece0
	if (cr6.eq) goto loc_828FECE0;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x828fece0
	if (!cr6.lt) goto loc_828FECE0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x828fecc4
	goto loc_828FECC4;
loc_828FEB98:
	// lis r28,-31778
	ctx.r28.s64 = -2082603008;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// lwz r3,2056(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828FEBB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x828febf0
	if (cr6.eq) goto loc_828FEBF0;
	// lbz r11,80(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828febf4
	if (cr6.eq) goto loc_828FEBF4;
	// lwz r3,2056(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2056);
	// lwz r28,76(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + 76);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828FEBE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r28,r9
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, xer);
	// bne cr6,0x828febf4
	if (!cr6.eq) goto loc_828FEBF4;
loc_828FEBF0:
	// li r31,1
	ctx.r31.s64 = 1;
loc_828FEBF4:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828fece0
	if (cr6.eq) goto loc_828FECE0;
	// cmpwi cr6,r29,13
	cr6.compare<int32_t>(ctx.r29.s32, 13, xer);
	// bne cr6,0x828fec2c
	if (!cr6.eq) goto loc_828FEC2C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmplwi cr6,r26,24
	cr6.compare<uint32_t>(ctx.r26.u32, 24, xer);
	// blt cr6,0x828fec18
	if (cr6.lt) goto loc_828FEC18;
	// li r11,23
	ctx.r11.s64 = 23;
loc_828FEC18:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi r21,r10,24
	ctx.r21.u64 = ctx.r10.u32 & 0xFF;
	// b 0x828fec30
	goto loc_828FEC30;
loc_828FEC2C:
	// mr r21,r24
	ctx.r21.u64 = ctx.r24.u64;
loc_828FEC30:
	// clrlwi r4,r21,24
	ctx.r4.u64 = ctx.r21.u32 & 0xFF;
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// mulli r11,r4,2004
	ctx.r11.s64 = ctx.r4.s64 * 2004;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplwi cr6,r26,24
	cr6.compare<uint32_t>(ctx.r26.u32, 24, xer);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// blt cr6,0x828fec54
	if (cr6.lt) goto loc_828FEC54;
	// li r31,23
	ctx.r31.s64 = 23;
loc_828FEC54:
	// bl 0x82a35328
	ctx.lr = 0x828FEC58;
	sub_82A35328(ctx, base);
	// bl 0x82a47d40
	ctx.lr = 0x828FEC5C;
	sub_82A47D40(ctx, base);
	// addi r7,r25,4544
	ctx.r7.s64 = ctx.r25.s64 + 4544;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// lbzx r9,r25,r19
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r19.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mulli r11,r31,112
	ctx.r11.s64 = ctx.r31.s64 * 112;
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// stb r9,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r9.u8);
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// rlwinm r5,r8,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// add r9,r11,r20
	ctx.r9.u64 = ctx.r11.u64 + ctx.r20.u64;
	// stb r5,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r5.u8);
	// addi r8,r1,140
	ctx.r8.s64 = ctx.r1.s64 + 140;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82907d68
	ctx.lr = 0x828FECA8;
	sub_82907D68(ctx, base);
	// stbx r24,r25,r19
	PPC_STORE_U8(ctx.r25.u32 + ctx.r19.u32, ctx.r24.u8);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a31458
	ctx.lr = 0x828FECB8;
	sub_82A31458(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828fece0
	if (cr6.eq) goto loc_828FECE0;
loc_828FECC4:
	// lwzx r3,r22,r25
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r25.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828FECE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_828FECE0:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
loc_828FECEC:
	// clrlwi r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bge cr6,0x828fed30
	if (!cr6.lt) goto loc_828FED30;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x828fed14
	if (cr6.lt) goto loc_828FED14;
	// cmpwi cr6,r9,22
	cr6.compare<int32_t>(ctx.r9.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x828fed18
	if (cr6.lt) goto loc_828FED18;
loc_828FED14:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_828FED18:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828fed34
	if (!cr6.eq) goto loc_828FED34;
	// lbz r11,1(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828fed34
	if (!cr6.eq) goto loc_828FED34;
loc_828FED30:
	// li r10,1
	ctx.r10.s64 = 1;
loc_828FED34:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828fedd0
	if (cr6.eq) goto loc_828FEDD0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x828fed54
	if (cr6.lt) goto loc_828FED54;
	// cmpwi cr6,r9,22
	cr6.compare<int32_t>(ctx.r9.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x828fed58
	if (cr6.lt) goto loc_828FED58;
loc_828FED54:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_828FED58:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828fedb0
	if (!cr6.eq) goto loc_828FEDB0;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmplwi cr6,r26,24
	cr6.compare<uint32_t>(ctx.r26.u32, 24, xer);
	// blt cr6,0x828fed74
	if (cr6.lt) goto loc_828FED74;
	// li r11,23
	ctx.r11.s64 = 23;
loc_828FED74:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x828fedb0
	if (!cr6.eq) goto loc_828FEDB0;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmplwi cr6,r26,24
	cr6.compare<uint32_t>(ctx.r26.u32, 24, xer);
	// blt cr6,0x828fed98
	if (cr6.lt) goto loc_828FED98;
	// li r11,23
	ctx.r11.s64 = 23;
loc_828FED98:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r3,r11,r20
	ctx.r3.u64 = ctx.r11.u64 + ctx.r20.u64;
	// bl 0x82a32318
	ctx.lr = 0x828FEDA4;
	sub_82A32318(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828fedd0
	if (cr6.eq) goto loc_828FEDD0;
loc_828FEDB0:
	// lwzx r3,r22,r25
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r25.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828FEDC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwzx r3,r22,r25
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r25.u32);
	// bl 0x83131d70
	ctx.lr = 0x828FEDD0;
	sub_83131D70(ctx, base);
loc_828FEDD0:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplwi cr6,r26,24
	cr6.compare<uint32_t>(ctx.r26.u32, 24, xer);
	// blt cr6,0x828fe418
	if (cr6.lt) goto loc_828FE418;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x828feef8
	if (!cr6.eq) goto loc_828FEEF8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a31458
	ctx.lr = 0x828FEDF4;
	sub_82A31458(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828feef8
	if (cr6.eq) goto loc_828FEEF8;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// li r10,12
	ctx.r10.s64 = 12;
	// stwx r10,r25,r15
	PPC_STORE_U32(ctx.r25.u32 + ctx.r15.u32, ctx.r10.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// bl 0x8353b230
	ctx.lr = 0x828FEE14;
	sub_8353B230(ctx, base);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_828FEE18:
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// and r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 & ctx.r3.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x828fee3c
	if (!cr6.eq) goto loc_828FEE3C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x828fee18
	if (cr6.lt) goto loc_828FEE18;
	// li r11,4
	ctx.r11.s64 = 4;
loc_828FEE3C:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// addi r10,r20,8
	ctx.r10.s64 = ctx.r20.s64 + 8;
loc_828FEE44:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// beq cr6,0x828fee64
	if (cr6.eq) goto loc_828FEE64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r10,r10,112
	ctx.r10.s64 = ctx.r10.s64 + 112;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x828fee44
	if (cr6.lt) goto loc_828FEE44;
	// b 0x828fee6c
	goto loc_828FEE6C;
loc_828FEE64:
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x828fee70
	if (cr6.lt) goto loc_828FEE70;
loc_828FEE6C:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_828FEE70:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x828fee80
	if (cr6.lt) goto loc_828FEE80;
	// li r11,23
	ctx.r11.s64 = 23;
loc_828FEE80:
	// lbzx r9,r25,r19
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r19.u32);
	// addi r8,r25,4544
	ctx.r8.s64 = ctx.r25.s64 + 4544;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r24,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r24.u8);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// stb r9,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r9.u8);
	// add r7,r31,r10
	ctx.r7.u64 = ctx.r31.u64 + ctx.r10.u64;
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// rlwinm r9,r7,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// add r6,r9,r25
	ctx.r6.u64 = ctx.r9.u64 + ctx.r25.u64;
	// add r9,r11,r20
	ctx.r9.u64 = ctx.r11.u64 + ctx.r20.u64;
	// add r7,r6,r15
	ctx.r7.u64 = ctx.r6.u64 + ctx.r15.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82907d68
	ctx.lr = 0x828FEED0;
	sub_82907D68(ctx, base);
	// addi r5,r31,8582
	ctx.r5.s64 = ctx.r31.s64 + 8582;
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwzx r3,r3,r25
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r25.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828FEEF8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_828FEEF8:
	// addis r30,r25,1
	ctx.r30.s64 = ctx.r25.s64 + 65536;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// addi r30,r30,-31208
	ctx.r30.s64 = ctx.r30.s64 + -31208;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
loc_828FEF08:
	// lbzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828fefb4
	if (!cr6.eq) goto loc_828FEFB4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x828fef24
	if (cr6.lt) goto loc_828FEF24;
	// li r11,23
	ctx.r11.s64 = 23;
loc_828FEF24:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x828fef44
	if (cr6.lt) goto loc_828FEF44;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x828fef48
	if (cr6.lt) goto loc_828FEF48;
loc_828FEF44:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_828FEF48:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828fefa0
	if (!cr6.eq) goto loc_828FEFA0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x828fef64
	if (cr6.lt) goto loc_828FEF64;
	// li r11,23
	ctx.r11.s64 = 23;
loc_828FEF64:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x828fefa0
	if (!cr6.eq) goto loc_828FEFA0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x828fef88
	if (cr6.lt) goto loc_828FEF88;
	// li r11,23
	ctx.r11.s64 = 23;
loc_828FEF88:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r3,r11,r20
	ctx.r3.u64 = ctx.r11.u64 + ctx.r20.u64;
	// bl 0x82a32318
	ctx.lr = 0x828FEF94;
	sub_82A32318(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828fefb4
	if (cr6.eq) goto loc_828FEFB4;
loc_828FEFA0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828FEFB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_828FEFB4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// blt cr6,0x828fef08
	if (cr6.lt) goto loc_828FEF08;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x828fd7a0
	ctx.lr = 0x828FEFD0;
	sub_828FD7A0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x828fdc10
	ctx.lr = 0x828FEFDC;
	sub_828FDC10(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x828fdfe0
	ctx.lr = 0x828FEFEC;
	sub_828FDFE0(ctx, base);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
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

__attribute__((alias("__imp__sub_828FF000"))) PPC_WEAK_FUNC(sub_828FF000);
PPC_FUNC_IMPL(__imp__sub_828FF000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x828FF008;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x828fcb60
	ctx.lr = 0x828FF018;
	sub_828FCB60(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,16024
	ctx.r10.s64 = ctx.r11.s64 + 16024;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r3,r3,-31112
	ctx.r3.s64 = ctx.r3.s64 + -31112;
	// bl 0x83102db0
	ctx.lr = 0x828FF038;
	sub_83102DB0(ctx, base);
	// addis r29,r30,1
	ctx.r29.s64 = ctx.r30.s64 + 65536;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r29,r29,-31108
	ctx.r29.s64 = ctx.r29.s64 + -31108;
	// addi r8,r9,-22936
	ctx.r8.s64 = ctx.r9.s64 + -22936;
	// addis r28,r30,1
	ctx.r28.s64 = ctx.r30.s64 + 65536;
	// addi r28,r28,-31088
	ctx.r28.s64 = ctx.r28.s64 + -31088;
	// stb r31,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r31.u8);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// bl 0x82a0db20
	ctx.lr = 0x828FF06C;
	sub_82A0DB20(ctx, base);
	// addis r27,r30,1
	ctx.r27.s64 = ctx.r30.s64 + 65536;
	// addis r26,r30,1
	ctx.r26.s64 = ctx.r30.s64 + 65536;
	// addi r27,r27,-30448
	ctx.r27.s64 = ctx.r27.s64 + -30448;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addi r26,r26,-30428
	ctx.r26.s64 = ctx.r26.s64 + -30428;
	// addis r25,r30,1
	ctx.r25.s64 = ctx.r30.s64 + 65536;
	// addi r6,r7,-24692
	ctx.r6.s64 = ctx.r7.s64 + -24692;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stb r31,4(r27)
	PPC_STORE_U8(ctx.r27.u32 + 4, ctx.r31.u8);
	// addi r25,r25,-30408
	ctx.r25.s64 = ctx.r25.s64 + -30408;
	// stw r31,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r31.u32);
	// addis r24,r30,1
	ctx.r24.s64 = ctx.r30.s64 + 65536;
	// stw r6,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r6.u32);
	// stw r31,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r31.u32);
	// addi r4,r5,-22916
	ctx.r4.s64 = ctx.r5.s64 + -22916;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// stb r31,4(r26)
	PPC_STORE_U8(ctx.r26.u32 + 4, ctx.r31.u8);
	// addi r24,r24,-30388
	ctx.r24.s64 = ctx.r24.s64 + -30388;
	// addis r23,r30,1
	ctx.r23.s64 = ctx.r30.s64 + 65536;
	// stw r31,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r31.u32);
	// stw r4,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r4.u32);
	// addi r11,r3,-22844
	ctx.r11.s64 = ctx.r3.s64 + -22844;
	// stw r31,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r31.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r31,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r31.u32);
	// addi r23,r23,-30368
	ctx.r23.s64 = ctx.r23.s64 + -30368;
	// stb r31,4(r25)
	PPC_STORE_U8(ctx.r25.u32 + 4, ctx.r31.u8);
	// addi r9,r10,-22824
	ctx.r9.s64 = ctx.r10.s64 + -22824;
	// stw r31,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r31.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r31.u32);
	// addi r7,r8,-19040
	ctx.r7.s64 = ctx.r8.s64 + -19040;
	// stw r31,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r31.u32);
	// stb r31,4(r24)
	PPC_STORE_U8(ctx.r24.u32 + 4, ctx.r31.u8);
	// stw r31,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r31.u32);
	// stw r9,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r9.u32);
	// stw r31,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r31.u32);
	// stw r31,16(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16, ctx.r31.u32);
	// stb r31,4(r23)
	PPC_STORE_U8(ctx.r23.u32 + 4, ctx.r31.u8);
	// stw r31,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r31.u32);
	// stw r31,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r31.u32);
	// stw r31,16(r23)
	PPC_STORE_U32(ctx.r23.u32 + 16, ctx.r31.u32);
	// stw r7,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r7.u32);
	// bl 0x82a22560
	ctx.lr = 0x828FF128;
	sub_82A22560(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a22540
	ctx.lr = 0x828FF130;
	sub_82A22540(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a125c8
	ctx.lr = 0x828FF13C;
	sub_82A125C8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825ab6c8
	ctx.lr = 0x828FF144;
	sub_825AB6C8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825b49a8
	ctx.lr = 0x828FF14C;
	sub_825B49A8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x825b4878
	ctx.lr = 0x828FF154;
	sub_825B4878(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825b4a28
	ctx.lr = 0x828FF15C;
	sub_825B4A28(ctx, base);
	// stb r31,52(r30)
	PPC_STORE_U8(ctx.r30.u32 + 52, ctx.r31.u8);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x825b4670
	ctx.lr = 0x828FF168;
	sub_825B4670(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x825bf380
	ctx.lr = 0x828FF170;
	sub_825BF380(ctx, base);
	// li r10,24
	ctx.r10.s64 = 24;
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// addi r11,r11,-31208
	ctx.r11.s64 = ctx.r11.s64 + -31208;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_828FF188:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x828ff188
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_828FF188;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// ori r9,r11,33748
	ctx.r9.u64 = ctx.r11.u64 | 33748;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stbx r31,r30,r9
	PPC_STORE_U8(ctx.r30.u32 + ctx.r9.u32, ctx.r31.u8);
	// stw r30,-9472(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9472, ctx.r30.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FF1B0"))) PPC_WEAK_FUNC(sub_828FF1B0);
PPC_FUNC_IMPL(__imp__sub_828FF1B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x828FF1B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r27,r3,1
	ctx.r27.s64 = ctx.r3.s64 + 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r27,-30428
	ctx.r27.s64 = ctx.r27.s64 + -30428;
	// lbz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828ff1dc
	if (!cr6.eq) goto loc_828FF1DC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825b49a8
	ctx.lr = 0x828FF1DC;
	sub_825B49A8(ctx, base);
loc_828FF1DC:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828ff1f8
	if (!cr6.eq) goto loc_828FF1F8;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r10.u32);
loc_828FF1F8:
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// lwz r28,16(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r30,r30,-30448
	ctx.r30.s64 = ctx.r30.s64 + -30448;
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828ff218
	if (!cr6.eq) goto loc_828FF218;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ab6c8
	ctx.lr = 0x828FF218;
	sub_825AB6C8(ctx, base);
loc_828FF218:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828ff234
	if (!cr6.eq) goto loc_828FF234;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
loc_828FF234:
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r29,12(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_828FF240:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a35818
	ctx.lr = 0x828FF250;
	sub_82A35818(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x828ff240
	if (cr6.lt) goto loc_828FF240;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828ff26c
	if (cr6.eq) goto loc_828FF26C;
	// stw r26,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r26.u32);
loc_828FF26C:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828ff27c
	if (cr6.eq) goto loc_828FF27C;
	// stw r26,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r26.u32);
loc_828FF27C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FF284"))) PPC_WEAK_FUNC(sub_828FF284);
PPC_FUNC_IMPL(__imp__sub_828FF284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828FF288"))) PPC_WEAK_FUNC(sub_828FF288);
PPC_FUNC_IMPL(__imp__sub_828FF288) {
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
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// addi r3,r3,-31088
	ctx.r3.s64 = ctx.r3.s64 + -31088;
	// bl 0x82a12748
	ctx.lr = 0x828FF2A8;
	sub_82A12748(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r10.u8);
	// bl 0x828ff1b0
	ctx.lr = 0x828FF2B8;
	sub_828FF1B0(ctx, base);
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

__attribute__((alias("__imp__sub_828FF2CC"))) PPC_WEAK_FUNC(sub_828FF2CC);
PPC_FUNC_IMPL(__imp__sub_828FF2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828FF2D0"))) PPC_WEAK_FUNC(sub_828FF2D0);
PPC_FUNC_IMPL(__imp__sub_828FF2D0) {
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
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,248
	cr6.compare<uint32_t>(ctx.r11.u32, 248, xer);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// blt cr6,0x828ff300
	if (cr6.lt) goto loc_828FF300;
	// li r11,0
	ctx.r11.s64 = 0;
loc_828FF300:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82a311f0
	ctx.lr = 0x828FF308;
	sub_82A311F0(ctx, base);
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r6,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r6.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FF348"))) PPC_WEAK_FUNC(sub_828FF348);
PPC_FUNC_IMPL(__imp__sub_828FF348) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,16436
	ctx.r9.s64 = ctx.r11.s64 + 16436;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x828ff37c
	if (cr6.eq) goto loc_828FF37C;
	// bl 0x82416268
	ctx.lr = 0x828FF378;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_828FF37C:
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

__attribute__((alias("__imp__sub_828FF390"))) PPC_WEAK_FUNC(sub_828FF390);
PPC_FUNC_IMPL(__imp__sub_828FF390) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828FF3B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_828FF3D0"))) PPC_WEAK_FUNC(sub_828FF3D0);
PPC_FUNC_IMPL(__imp__sub_828FF3D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_828FF3E0"))) PPC_WEAK_FUNC(sub_828FF3E0);
PPC_FUNC_IMPL(__imp__sub_828FF3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r11,16456
	ctx.r10.s64 = ctx.r11.s64 + 16456;
	// stw r10,4444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4444, ctx.r10.u32);
	// stw r10,4388(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4388, ctx.r10.u32);
	// stw r10,4332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4332, ctx.r10.u32);
	// stw r10,4272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4272, ctx.r10.u32);
	// stw r10,4212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4212, ctx.r10.u32);
	// stw r10,4160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4160, ctx.r10.u32);
	// stw r10,4108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4108, ctx.r10.u32);
	// stw r10,4056(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4056, ctx.r10.u32);
	// stw r10,4000(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4000, ctx.r10.u32);
	// stw r10,3940(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3940, ctx.r10.u32);
	// stw r10,3888(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3888, ctx.r10.u32);
	// stw r10,3836(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3836, ctx.r10.u32);
	// stw r10,3780(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3780, ctx.r10.u32);
	// stw r10,3724(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3724, ctx.r10.u32);
	// stw r10,3672(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3672, ctx.r10.u32);
	// stw r10,3616(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3616, ctx.r10.u32);
	// stw r10,3564(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3564, ctx.r10.u32);
	// stw r10,3508(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3508, ctx.r10.u32);
	// stw r10,3412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3412, ctx.r10.u32);
	// stw r10,3200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3200, ctx.r10.u32);
	// stw r10,3148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3148, ctx.r10.u32);
	// stw r10,3096(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3096, ctx.r10.u32);
	// stw r10,3044(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3044, ctx.r10.u32);
	// stw r10,2992(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2992, ctx.r10.u32);
	// stw r10,2940(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2940, ctx.r10.u32);
	// stw r10,2888(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2888, ctx.r10.u32);
	// stw r10,2836(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2836, ctx.r10.u32);
	// stw r10,2784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2784, ctx.r10.u32);
	// stw r10,2732(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2732, ctx.r10.u32);
	// stw r10,2680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2680, ctx.r10.u32);
	// stw r10,2628(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2628, ctx.r10.u32);
	// stw r10,2576(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2576, ctx.r10.u32);
	// stw r10,2524(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2524, ctx.r10.u32);
	// stw r10,2472(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2472, ctx.r10.u32);
	// stw r10,2416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2416, ctx.r10.u32);
	// stw r10,2364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2364, ctx.r10.u32);
	// stw r10,2312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2312, ctx.r10.u32);
	// stw r10,2260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2260, ctx.r10.u32);
	// stw r10,2208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2208, ctx.r10.u32);
	// stw r10,2156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2156, ctx.r10.u32);
	// stw r10,2092(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2092, ctx.r10.u32);
	// stw r10,2040(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2040, ctx.r10.u32);
	// stw r10,1988(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1988, ctx.r10.u32);
	// stw r10,1888(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1888, ctx.r10.u32);
	// stw r10,1764(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1764, ctx.r10.u32);
	// stw r10,1692(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1692, ctx.r10.u32);
	// stw r10,1640(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1640, ctx.r10.u32);
	// stw r10,1588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1588, ctx.r10.u32);
	// stw r10,1536(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1536, ctx.r10.u32);
	// stw r10,1480(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1480, ctx.r10.u32);
	// stw r10,1424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1424, ctx.r10.u32);
	// stw r10,1368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1368, ctx.r10.u32);
	// stw r10,1308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1308, ctx.r10.u32);
	// stw r10,1240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1240, ctx.r10.u32);
	// stw r10,1184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1184, ctx.r10.u32);
	// stw r10,1132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1132, ctx.r10.u32);
	// stw r10,1080(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1080, ctx.r10.u32);
	// stw r10,1028(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1028, ctx.r10.u32);
	// stw r10,976(r3)
	PPC_STORE_U32(ctx.r3.u32 + 976, ctx.r10.u32);
	// stw r10,924(r3)
	PPC_STORE_U32(ctx.r3.u32 + 924, ctx.r10.u32);
	// stw r10,872(r3)
	PPC_STORE_U32(ctx.r3.u32 + 872, ctx.r10.u32);
	// stw r10,816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 816, ctx.r10.u32);
	// stw r10,764(r3)
	PPC_STORE_U32(ctx.r3.u32 + 764, ctx.r10.u32);
	// stw r10,712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 712, ctx.r10.u32);
	// stw r10,660(r3)
	PPC_STORE_U32(ctx.r3.u32 + 660, ctx.r10.u32);
	// stw r10,608(r3)
	PPC_STORE_U32(ctx.r3.u32 + 608, ctx.r10.u32);
	// stw r10,556(r3)
	PPC_STORE_U32(ctx.r3.u32 + 556, ctx.r10.u32);
	// stw r10,504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 504, ctx.r10.u32);
	// stw r10,452(r3)
	PPC_STORE_U32(ctx.r3.u32 + 452, ctx.r10.u32);
	// stw r10,400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 400, ctx.r10.u32);
	// stw r10,344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 344, ctx.r10.u32);
	// stw r10,292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 292, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FF50C"))) PPC_WEAK_FUNC(sub_828FF50C);
PPC_FUNC_IMPL(__imp__sub_828FF50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828FF510"))) PPC_WEAK_FUNC(sub_828FF510);
PPC_FUNC_IMPL(__imp__sub_828FF510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,255
	ctx.r8.s64 = 255;
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
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
	// lfs f13,20056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20056);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FF564"))) PPC_WEAK_FUNC(sub_828FF564);
PPC_FUNC_IMPL(__imp__sub_828FF564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828FF568"))) PPC_WEAK_FUNC(sub_828FF568);
PPC_FUNC_IMPL(__imp__sub_828FF568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FF57C"))) PPC_WEAK_FUNC(sub_828FF57C);
PPC_FUNC_IMPL(__imp__sub_828FF57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828FF580"))) PPC_WEAK_FUNC(sub_828FF580);
PPC_FUNC_IMPL(__imp__sub_828FF580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f13,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f12,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lfs f11,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,0(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FF5A4"))) PPC_WEAK_FUNC(sub_828FF5A4);
PPC_FUNC_IMPL(__imp__sub_828FF5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828FF5A8"))) PPC_WEAK_FUNC(sub_828FF5A8);
PPC_FUNC_IMPL(__imp__sub_828FF5A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x828FF5B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31778
	ctx.r31.s64 = -2082603008;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r3,2056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828FF5D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x828ff614
	if (cr6.eq) goto loc_828FF614;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lbz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x828ff6c8
	if (cr6.eq) goto loc_828FF6C8;
	// lwz r3,2056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2056);
	// lwz r31,76(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828FF608;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// bne cr6,0x828ff6c8
	if (!cr6.eq) goto loc_828FF6C8;
loc_828FF614:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a30088
	ctx.lr = 0x828FF61C;
	sub_82A30088(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_828FF620:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a35938
	ctx.lr = 0x828FF628;
	sub_82A35938(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82a35b30
	ctx.lr = 0x828FF630;
	sub_82A35B30(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x828ff648
	if (cr6.eq) goto loc_828FF648;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x828ff650
	if (!cr6.eq) goto loc_828FF650;
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// b 0x828ff64c
	goto loc_828FF64C;
loc_828FF648:
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
loc_828FF64C:
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
loc_828FF650:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828ff670
	if (!cr6.eq) goto loc_828FF670;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, xer);
	// blt cr6,0x828ff620
	if (cr6.lt) goto loc_828FF620;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_828FF670:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,41
	ctx.r4.s64 = 41;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a300d8
	ctx.lr = 0x828FF680;
	sub_82A300D8(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,248
	cr6.compare<uint32_t>(ctx.r11.u32, 248, xer);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// blt cr6,0x828ff694
	if (cr6.lt) goto loc_828FF694;
	// li r11,0
	ctx.r11.s64 = 0;
loc_828FF694:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82a311f0
	ctx.lr = 0x828FF69C;
	sub_82A311F0(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stwx r8,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r8.u32);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// stw r5,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r5.u32);
loc_828FF6C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FF6D0"))) PPC_WEAK_FUNC(sub_828FF6D0);
PPC_FUNC_IMPL(__imp__sub_828FF6D0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,-3564(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r11,292(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// lwz r9,6112(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6112);
	// lwz r10,5356(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5356);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bgt cr6,0x828ff864
	if (cr6.gt) goto loc_828FF864;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x828ff77c
	if (cr6.eq) goto loc_828FF77C;
	// bdz 0x828ff74c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_828FF74C;
	// bdz 0x828ff808
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_828FF808;
	// bdz 0x828ff7ac
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_828FF7AC;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f12,5364(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5364);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f0,-23844(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23844);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5068(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5068);
	ctx.f13.f64 = double(temp.f32);
	// fsel f11,f12,f0,f13
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
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
loc_828FF74C:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f12,5364(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5364);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lfs f0,5068(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5068);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-23844(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23844);
	ctx.f13.f64 = double(temp.f32);
	// fsel f11,f12,f0,f13
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
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
loc_828FF77C:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f12,5372(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5372);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,16136(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16136);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fsel f11,f12,f0,f13
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
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
loc_828FF7AC:
	// extsb r10,r5
	ctx.r10.s64 = ctx.r5.s8;
	// lwz r8,5364(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5364);
	// lwz r7,5368(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5368);
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,5372(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5372);
	// neg r6,r10
	ctx.r6.s64 = -ctx.r10.s64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// extsb r3,r6
	ctx.r3.s64 = ctx.r6.s8;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// bne cr6,0x828ff7e8
	if (!cr6.eq) goto loc_828FF7E8;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// b 0x828ff7f0
	goto loc_828FF7F0;
loc_828FF7E8:
	// fneg f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_828FF7F0:
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x828ff85c
	goto loc_828FF85C;
loc_828FF808:
	// lwz r10,5364(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5364);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lwz r6,5368(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5368);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lwz r11,5372(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5372);
	// lfs f12,32(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,-26260(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f13,20056(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20056);
	ctx.f13.f64 = double(temp.f32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fsel f10,f11,f0,f13
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// lfs f0,9008(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_828FF85C:
	// bl 0x825ca560
	ctx.lr = 0x828FF860;
	sub_825CA560(ctx, base);
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_828FF864:
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

__attribute__((alias("__imp__sub_828FF878"))) PPC_WEAK_FUNC(sub_828FF878);
PPC_FUNC_IMPL(__imp__sub_828FF878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x828FF880;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lfs f31,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// lwz r31,292(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// lwz r29,6112(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6112);
	// lwz r11,5356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5356);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x828ffa50
	if (cr6.gt) goto loc_828FFA50;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x828ff91c
	if (cr6.eq) goto loc_828FF91C;
	// bdz 0x828ff8f4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_828FF8F4;
	// bdz 0x828ff98c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_828FF98C;
	// bdz 0x828ff938
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_828FF938;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f12,5364(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5364);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f0,-23844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23844);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5068(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5068);
	ctx.f13.f64 = double(temp.f32);
	// fsel f31,f12,f0,f13
	ctx.f31.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_828FF8F4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f12,5364(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5364);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f0,5068(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5068);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-23844(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23844);
	ctx.f13.f64 = double(temp.f32);
	// fsel f31,f12,f0,f13
	ctx.f31.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_828FF91C:
	// lwz r4,5756(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5756);
	// bl 0x82a0c788
	ctx.lr = 0x828FF924;
	sub_82A0C788(ctx, base);
	// lfs f31,1272(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1272);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_828FF938:
	// extsb r11,r30
	ctx.r11.s64 = ctx.r30.s8;
	// lwz r10,5364(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5364);
	// lwz r9,5368(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5368);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,5372(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5372);
	// neg r8,r11
	ctx.r8.s64 = -ctx.r11.s64;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// extsb r5,r8
	ctx.r5.s64 = ctx.r8.s8;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// bne cr6,0x828ff97c
	if (!cr6.eq) goto loc_828FF97C;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// b 0x828ffa44
	goto loc_828FFA44;
loc_828FF97C:
	// fneg f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// b 0x828ffa44
	goto loc_828FFA44;
loc_828FF98C:
	// lwz r4,5756(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5756);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x828ff9a4
	if (cr6.lt) goto loc_828FF9A4;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x828ff9a8
	if (cr6.lt) goto loc_828FF9A8;
loc_828FF9A4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_828FF9A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828ffa50
	if (cr6.eq) goto loc_828FFA50;
	// bl 0x82a0c788
	ctx.lr = 0x828FF9B8;
	sub_82A0C788(ctx, base);
	// lwz r11,5364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5364);
	// extsb r7,r30
	ctx.r7.s64 = ctx.r30.s8;
	// lwz r6,1280(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1280);
	// lwz r9,5368(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5368);
	// lfs f13,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lwz r8,5372(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5372);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// frsp f0,f10
	ctx.f0.f64 = double(float(ctx.f10.f64));
	// lwz r5,1284(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1284);
	// fabs f7,f9
	ctx.f7.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// lwz r4,1288(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1288);
	// fabs f8,f12
	ctx.f8.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// fcmpu cr6,f7,f8
	cr6.compare(ctx.f7.f64, ctx.f8.f64);
	// bge cr6,0x828ffa30
	if (!cr6.lt) goto loc_828FFA30;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f12,-9980(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9980);
	ctx.f12.f64 = double(temp.f32);
	// b 0x828ffa38
	goto loc_828FFA38;
loc_828FFA30:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,21708(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21708);
	ctx.f12.f64 = double(temp.f32);
loc_828FFA38:
	// fmadds f0,f0,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f13.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_828FFA44:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825ca560
	ctx.lr = 0x828FFA4C;
	sub_825CA560(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_828FFA50:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FFA60"))) PPC_WEAK_FUNC(sub_828FFA60);
PPC_FUNC_IMPL(__imp__sub_828FFA60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x828FFA68;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r29,-31763
	ctx.r29.s64 = -2081619968;
loc_828FFA80:
	// lwz r10,-3564(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// lwz r10,192(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	// blt cr6,0x828ffa98
	if (cr6.lt) goto loc_828FFA98;
	// li r11,23
	ctx.r11.s64 = 23;
loc_828FFA98:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828ffab4
	if (cr6.eq) goto loc_828FFAB4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x828ffad4
	goto loc_828FFAD4;
loc_828FFAB4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x828ffacc
	if (cr6.lt) goto loc_828FFACC;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x828ffad0
	if (cr6.lt) goto loc_828FFAD0;
loc_828FFACC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_828FFAD0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_828FFAD4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828ffb10
	if (!cr6.eq) goto loc_828FFB10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a32318
	ctx.lr = 0x828FFAE8;
	sub_82A32318(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828ffb10
	if (!cr6.eq) goto loc_828FFB10;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828ffb10
	if (!cr6.eq) goto loc_828FFB10;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x828ffa80
	if (cr6.lt) goto loc_828FFA80;
	// b 0x828ffb14
	goto loc_828FFB14;
loc_828FFB10:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_828FFB14:
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x828ffb78
	if (!cr6.eq) goto loc_828FFB78;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828ffb78
	if (cr6.eq) goto loc_828FFB78;
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x828ffb78
	if (cr6.eq) goto loc_828FFB78;
	// lbz r11,5740(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5740);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828ffb78
	if (cr6.eq) goto loc_828FFB78;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a30088
	ctx.lr = 0x828FFB50;
	sub_82A30088(ctx, base);
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// li r4,92
	ctx.r4.s64 = 92;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r10,5744(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5744);
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x82a300d8
	ctx.lr = 0x828FFB6C;
	sub_82A300D8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x828ff2d0
	ctx.lr = 0x828FFB78;
	sub_828FF2D0(ctx, base);
loc_828FFB78:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FFB80"))) PPC_WEAK_FUNC(sub_828FFB80);
PPC_FUNC_IMPL(__imp__sub_828FFB80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab4
	ctx.lr = 0x828FFB88;
	__savegprlr_15(ctx, base);
	// stfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// bge cr6,0x828fffa0
	if (!cr6.lt) goto loc_828FFFA0;
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// lwz r4,24(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r23,192(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x825ca6b8
	ctx.lr = 0x828FFBC4;
	sub_825CA6B8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,24
	cr6.compare<uint32_t>(ctx.r3.u32, 24, xer);
	// bge cr6,0x828fffa0
	if (!cr6.lt) goto loc_828FFFA0;
	// clrlwi r22,r3,24
	ctx.r22.u64 = ctx.r3.u32 & 0xFF;
	// li r16,24
	ctx.r16.s64 = 24;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// subfc r11,r16,r22
	xer.ca = ctx.r22.u32 >= ctx.r16.u32;
	ctx.r11.s64 = ctx.r22.s64 - ctx.r16.s64;
	// li r5,84
	ctx.r5.s64 = 84;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r8,r9,r22
	ctx.r8.u64 = ctx.r9.u64 & ctx.r22.u64;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// mulli r11,r7,84
	ctx.r11.s64 = ctx.r7.s64 * 84;
	// add r11,r11,r15
	ctx.r11.u64 = ctx.r11.u64 + ctx.r15.u64;
	// addi r4,r11,460
	ctx.r4.s64 = ctx.r11.s64 + 460;
	// bl 0x831ce980
	ctx.lr = 0x828FFC00;
	sub_831CE980(ctx, base);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r6,16324
	ctx.r3.s64 = ctx.r6.s64 + 16324;
	// li r4,0
	ctx.r4.s64 = 0;
	// lbz r18,176(r1)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r1.u32 + 176);
	// stb r5,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r5.u8);
	// bl 0x83523fd8
	ctx.lr = 0x828FFC1C;
	sub_83523FD8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x828fff7c
	if (!cr6.eq) goto loc_828FFF7C;
	// lwz r3,-3564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r20,292(r3)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// lwz r27,132(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a0c760
	ctx.lr = 0x828FFC3C;
	sub_82A0C760(ctx, base);
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c788
	ctx.lr = 0x828FFC50;
	sub_82A0C788(ctx, base);
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c7b0
	ctx.lr = 0x828FFC64;
	sub_82A0C7B0(ctx, base);
	// lwz r10,56(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 56);
	// addi r26,r17,56
	ctx.r26.s64 = ctx.r17.s64 + 56;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x828ffcac
	if (!cr6.gt) goto loc_828FFCAC;
loc_828FFC84:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82904e00
	ctx.lr = 0x828FFC90;
	sub_82904E00(ctx, base);
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// bge cr6,0x828ffc9c
	if (!cr6.lt) goto loc_828FFC9C;
	// li r29,1
	ctx.r29.s64 = 1;
loc_828FFC9C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x828ffc84
	if (cr6.lt) goto loc_828FFC84;
loc_828FFCAC:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828ffed0
	if (cr6.eq) goto loc_828FFED0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82a1aa48
	ctx.lr = 0x828FFCC0;
	sub_82A1AA48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828ffed0
	if (cr6.eq) goto loc_828FFED0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi cr6,r28,24
	cr6.compare<uint32_t>(ctx.r28.u32, 24, xer);
	// blt cr6,0x828ffcdc
	if (cr6.lt) goto loc_828FFCDC;
	// li r11,23
	ctx.r11.s64 = 23;
loc_828FFCDC:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r3,r11,r23
	ctx.r3.u64 = ctx.r11.u64 + ctx.r23.u64;
	// bl 0x8357ece0
	ctx.lr = 0x828FFCE8;
	sub_8357ECE0(ctx, base);
	// bl 0x82a47de0
	ctx.lr = 0x828FFCEC;
	sub_82A47DE0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x828ffed0
	if (cr6.eq) goto loc_828FFED0;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lis r10,3840
	ctx.r10.s64 = 251658240;
	// rlwinm r9,r11,0,0,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// beq cr6,0x828ffed0
	if (cr6.eq) goto loc_828FFED0;
	// bl 0x83740868
	ctx.lr = 0x828FFD0C;
	sub_83740868(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,255
	ctx.r6.s64 = 255;
	// lfs f0,20048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20048);
	ctx.f0.f64 = double(temp.f32);
	// li r4,8
	ctx.r4.s64 = 8;
	// lfs f31,-24912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24912);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f31
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82a39ad0
	ctx.lr = 0x828FFD44;
	sub_82A39AD0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x828ffd54
	if (cr6.eq) goto loc_828FFD54;
	// li r24,1
	ctx.r24.s64 = 1;
loc_828FFD54:
	// lbz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82a3d2a8
	ctx.lr = 0x828FFD64;
	sub_82A3D2A8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x828ffd88
	if (!cr6.eq) goto loc_828FFD88;
	// lbz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82a3d2d0
	ctx.lr = 0x828FFD7C;
	sub_82A3D2D0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x828ffd9c
	if (cr6.eq) goto loc_828FFD9C;
loc_828FFD88:
	// lhz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 20);
	// lhz r10,18(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 18);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// ble cr6,0x828ffd9c
	if (!cr6.gt) goto loc_828FFD9C;
	// li r29,1
	ctx.r29.s64 = 1;
loc_828FFD9C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a22b40
	ctx.lr = 0x828FFDA8;
	sub_82A22B40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82a2a558
	ctx.lr = 0x828FFDB8;
	sub_82A2A558(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x828ffde0
	if (!cr6.eq) goto loc_828FFDE0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x828ffde4
	if (cr6.eq) goto loc_828FFDE4;
loc_828FFDE0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_828FFDE4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828ffe50
	if (cr6.eq) goto loc_828FFE50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x828ffe08
	if (!cr6.gt) goto loc_828FFE08;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x828ffe0c
	if (!cr6.gt) goto loc_828FFE0C;
loc_828FFE08:
	// li r11,0
	ctx.r11.s64 = 0;
loc_828FFE0C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828ffe50
	if (cr6.eq) goto loc_828FFE50;
	// lwz r11,4472(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4472);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r31,r10,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x83740868
	ctx.lr = 0x828FFE28;
	sub_83740868(ctx, base);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfs f0,-26260(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fctidz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, xer);
	// bge cr6,0x828ffe50
	if (!cr6.lt) goto loc_828FFE50;
	// li r29,1
	ctx.r29.s64 = 1;
loc_828FFE50:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828ffe64
	if (cr6.eq) goto loc_828FFE64;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r18,0
	ctx.r18.s64 = 0;
loc_828FFE64:
	// clrlwi r11,r18,24
	ctx.r11.u64 = ctx.r18.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828ffed0
	if (cr6.eq) goto loc_828FFED0;
	// lbz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82a3d2a8
	ctx.lr = 0x828FFE7C;
	sub_82A3D2A8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x828ffea0
	if (!cr6.eq) goto loc_828FFEA0;
	// lbz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82a3d2d0
	ctx.lr = 0x828FFE94;
	sub_82A3D2D0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x828ffea4
	if (cr6.eq) goto loc_828FFEA4;
loc_828FFEA0:
	// li r24,1
	ctx.r24.s64 = 1;
loc_828FFEA4:
	// lwz r3,20(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20);
	// bl 0x82a3d2a8
	ctx.lr = 0x828FFEAC;
	sub_82A3D2A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828ffecc
	if (!cr6.eq) goto loc_828FFECC;
	// lwz r3,20(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20);
	// bl 0x82a3d2d0
	ctx.lr = 0x828FFEC0;
	sub_82A3D2D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828ffed0
	if (cr6.eq) goto loc_828FFED0;
loc_828FFECC:
	// li r24,1
	ctx.r24.s64 = 1;
loc_828FFED0:
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828fff7c
	if (cr6.eq) goto loc_828FFF7C;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f1,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,32(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x829082d0
	ctx.lr = 0x828FFF00;
	sub_829082D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// lfs f31,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f31.f64 = double(temp.f32);
	// bgt cr6,0x828fff3c
	if (cr6.gt) goto loc_828FFF3C;
	// lwz r11,5356(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 5356);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x828fff38
	if (!cr6.eq) goto loc_828FFF38;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82601178
	ctx.lr = 0x828FFF30;
	sub_82601178(ctx, base);
	// lfs f31,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// b 0x828fff3c
	goto loc_828FFF3C;
loc_828FFF38:
	// lfs f31,1272(r19)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 1272);
	ctx.f31.f64 = double(temp.f32);
loc_828FFF3C:
	// lwz r4,4788(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4788);
	// cmpwi cr6,r4,72
	cr6.compare<int32_t>(ctx.r4.s32, 72, xer);
	// bge cr6,0x828fff68
	if (!cr6.lt) goto loc_828FFF68;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82903190
	ctx.lr = 0x828FFF50;
	sub_82903190(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828fff68
	if (cr6.eq) goto loc_828FFF68;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x828fff68
	if (cr6.eq) goto loc_828FFF68;
	// lfs f31,12(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
loc_828FFF68:
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f31,172(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stb r10,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r10.u8);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
loc_828FFF7C:
	// subfc r11,r16,r22
	xer.ca = ctx.r22.u32 >= ctx.r16.u32;
	ctx.r11.s64 = ctx.r22.s64 - ctx.r16.s64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r8,r9,r22
	ctx.r8.u64 = ctx.r9.u64 & ctx.r22.u64;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// mulli r11,r7,84
	ctx.r11.s64 = ctx.r7.s64 * 84;
	// add r11,r11,r15
	ctx.r11.u64 = ctx.r11.u64 + ctx.r15.u64;
	// addi r3,r11,460
	ctx.r3.s64 = ctx.r11.s64 + 460;
	// bl 0x825b2568
	ctx.lr = 0x828FFFA0;
	sub_825B2568(ctx, base);
loc_828FFFA0:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FFFAC"))) PPC_WEAK_FUNC(sub_828FFFAC);
PPC_FUNC_IMPL(__imp__sub_828FFFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828FFFB0"))) PPC_WEAK_FUNC(sub_828FFFB0);
PPC_FUNC_IMPL(__imp__sub_828FFFB0) {
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
	// bl 0x82906070
	ctx.lr = 0x828FFFC8;
	sub_82906070(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r10,72
	ctx.r10.s64 = 72;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,255
	ctx.r8.s64 = 255;
	// stw r10,4788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4788, ctx.r10.u32);
	// stw r10,4792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4792, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,4804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4804, ctx.r8.u32);
	// stfs f0,4796(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4796, temp.u32);
	// stw r11,4808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4808, ctx.r11.u32);
	// stfs f0,4800(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4800, temp.u32);
	// stb r11,4832(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4832, ctx.r11.u8);
	// stfs f0,4812(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4812, temp.u32);
	// stfs f0,4816(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4816, temp.u32);
	// stfs f0,4820(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4820, temp.u32);
	// stfs f0,4824(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4824, temp.u32);
	// stfs f0,4828(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4828, temp.u32);
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

__attribute__((alias("__imp__sub_82900024"))) PPC_WEAK_FUNC(sub_82900024);
PPC_FUNC_IMPL(__imp__sub_82900024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82900028"))) PPC_WEAK_FUNC(sub_82900028);
PPC_FUNC_IMPL(__imp__sub_82900028) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82900030;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,16516
	ctx.r9.s64 = ctx.r11.s64 + 16516;
	// addi r8,r10,-24712
	ctx.r8.s64 = ctx.r10.s64 + -24712;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r30,r3,4952
	ctx.r30.s64 = ctx.r3.s64 + 4952;
	// stw r8,4952(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4952, ctx.r8.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e0cf8
	ctx.lr = 0x8290005C;
	sub_825E0CF8(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82900088
	if (cr6.eq) goto loc_82900088;
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
	ctx.lr = 0x82900084;
	sub_8353F3B8(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_82900088:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,4932
	ctx.r3.s64 = ctx.r31.s64 + 4932;
	// addi r10,r11,-22948
	ctx.r10.s64 = ctx.r11.s64 + -22948;
	// stw r10,4932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4932, ctx.r10.u32);
	// bl 0x825c3358
	ctx.lr = 0x8290009C;
	sub_825C3358(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r30,r31,4912
	ctx.r30.s64 = ctx.r31.s64 + 4912;
	// addi r8,r9,-24712
	ctx.r8.s64 = ctx.r9.s64 + -24712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,4912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4912, ctx.r8.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x829000B4;
	sub_825E0CF8(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x829000dc
	if (cr6.eq) goto loc_829000DC;
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
	ctx.lr = 0x829000D8;
	sub_8353F3B8(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_829000DC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r31,4892
	ctx.r30.s64 = ctx.r31.s64 + 4892;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,4892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4892, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x829000F4;
	sub_825E0CF8(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8290011c
	if (cr6.eq) goto loc_8290011C;
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
	ctx.lr = 0x82900118;
	sub_8353F3B8(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_8290011C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// addi r10,r11,16436
	ctx.r10.s64 = ctx.r11.s64 + 16436;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x828ff3e0
	ctx.lr = 0x82900130;
	sub_828FF3E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82900138"))) PPC_WEAK_FUNC(sub_82900138);
PPC_FUNC_IMPL(__imp__sub_82900138) {
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
	// bl 0x82900028
	ctx.lr = 0x82900158;
	sub_82900028(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82900170
	if (cr6.eq) goto loc_82900170;
	// bl 0x82416268
	ctx.lr = 0x8290016C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82900170:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82900188"))) PPC_WEAK_FUNC(sub_82900188);
PPC_FUNC_IMPL(__imp__sub_82900188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82900190;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// lfs f31,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,24(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f31,28(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f31,32(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// bl 0x828fffb0
	ctx.lr = 0x829001BC;
	sub_828FFFB0(ctx, base);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r7,r9,16516
	ctx.r7.s64 = ctx.r9.s64 + 16516;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addi r6,r8,-19040
	ctx.r6.s64 = ctx.r8.s64 + -19040;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stb r11,4896(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4896, ctx.r11.u8);
	// stw r11,4900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4900, ctx.r11.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stw r6,4892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4892, ctx.r6.u32);
	// addi r3,r5,-22824
	ctx.r3.s64 = ctx.r5.s64 + -22824;
	// stw r11,4904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4904, ctx.r11.u32);
	// addi r10,r4,-22892
	ctx.r10.s64 = ctx.r4.s64 + -22892;
	// stw r11,4908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4908, ctx.r11.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r11,4916(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4916, ctx.r11.u8);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r11,4920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4920, ctx.r11.u32);
	// addi r7,r9,-24636
	ctx.r7.s64 = ctx.r9.s64 + -24636;
	// stw r3,4912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4912, ctx.r3.u32);
	// li r6,255
	ctx.r6.s64 = 255;
	// stw r11,4924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4924, ctx.r11.u32);
	// addi r3,r31,4892
	ctx.r3.s64 = ctx.r31.s64 + 4892;
	// stw r11,4928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4928, ctx.r11.u32);
	// addi r30,r31,4912
	ctx.r30.s64 = ctx.r31.s64 + 4912;
	// stb r11,4936(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4936, ctx.r11.u8);
	// lfs f0,20056(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20056);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,4940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4940, ctx.r11.u32);
	// addi r29,r31,4932
	ctx.r29.s64 = ctx.r31.s64 + 4932;
	// stw r10,4932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4932, ctx.r10.u32);
	// addi r28,r31,4952
	ctx.r28.s64 = ctx.r31.s64 + 4952;
	// stw r11,4944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4944, ctx.r11.u32);
	// stw r11,4948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4948, ctx.r11.u32);
	// stb r11,4956(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4956, ctx.r11.u8);
	// stw r11,4960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4960, ctx.r11.u32);
	// stw r7,4952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4952, ctx.r7.u32);
	// stw r11,4964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4964, ctx.r11.u32);
	// stw r11,4968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4968, ctx.r11.u32);
	// stfs f31,8(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f31,12(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// stfs f31,36(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// stfs f31,40(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stfs f31,44(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f31,48(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f31,52(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f31,24(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f31,28(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f31,32(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// bl 0x825bf380
	ctx.lr = 0x82900294;
	sub_825BF380(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825b4670
	ctx.lr = 0x8290029C;
	sub_825B4670(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825b4748
	ctx.lr = 0x829002A4;
	sub_825B4748(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825aa080
	ctx.lr = 0x829002AC;
	sub_825AA080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829002BC"))) PPC_WEAK_FUNC(sub_829002BC);
PPC_FUNC_IMPL(__imp__sub_829002BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829002C0"))) PPC_WEAK_FUNC(sub_829002C0);
PPC_FUNC_IMPL(__imp__sub_829002C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x829002C8;
	__savegprlr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31763
	ctx.r27.s64 = -2081619968;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// lwz r4,24(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,-3564(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// lwz r28,292(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x83131d70
	ctx.lr = 0x829002EC;
	sub_83131D70(ctx, base);
	// lbz r11,4916(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4916);
	// li r21,0
	ctx.r21.s64 = 0;
	// addi r26,r31,4912
	ctx.r26.s64 = ctx.r31.s64 + 4912;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290030c
	if (!cr6.eq) goto loc_8290030C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825b4670
	ctx.lr = 0x8290030C;
	sub_825B4670(ctx, base);
loc_8290030C:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82900328
	if (!cr6.eq) goto loc_82900328;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,3312
	ctx.r10.s64 = ctx.r11.s64 + 3312;
	// stw r10,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r10.u32);
loc_82900328:
	// lbz r11,4956(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4956);
	// addi r23,r31,4952
	ctx.r23.s64 = ctx.r31.s64 + 4952;
	// lwz r25,16(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82900344
	if (!cr6.eq) goto loc_82900344;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x825aa080
	ctx.lr = 0x82900344;
	sub_825AA080(ctx, base);
loc_82900344:
	// lwz r11,16(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82900364
	if (!cr6.eq) goto loc_82900364;
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// addi r9,r9,-10208
	ctx.r9.s64 = ctx.r9.s64 + -10208;
	// stw r9,16(r23)
	PPC_STORE_U32(ctx.r23.u32 + 16, ctx.r9.u32);
loc_82900364:
	// lwz r11,4460(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4460);
	// lwz r24,16(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82900430
	if (!cr6.eq) goto loc_82900430;
	// lwz r11,5356(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5356);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82900414
	if (!cr6.eq) goto loc_82900414;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82a1a960
	ctx.lr = 0x8290038C;
	sub_82A1A960(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82900430
	if (cr6.eq) goto loc_82900430;
	// addi r3,r31,4892
	ctx.r3.s64 = ctx.r31.s64 + 4892;
	// bl 0x828fd670
	ctx.lr = 0x829003A0;
	sub_828FD670(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82900430
	if (!cr6.lt) goto loc_82900430;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x829003cc
	if (!cr6.lt) goto loc_829003CC;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// b 0x829003f4
	goto loc_829003F4;
loc_829003CC:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x829003dc
	if (!cr6.lt) goto loc_829003DC;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// b 0x829003f4
	goto loc_829003F4;
loc_829003DC:
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
loc_829003F4:
	// lwz r3,-3564(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x829003FC;
	sub_82A0C710(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r4,252(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 252);
	// bl 0x828ff878
	ctx.lr = 0x8290040C;
	sub_828FF878(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// b 0x82900430
	goto loc_82900430;
loc_82900414:
	// lwz r11,5756(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5756);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x82900430
	if (!cr6.eq) goto loc_82900430;
	// addi r3,r31,4892
	ctx.r3.s64 = ctx.r31.s64 + 4892;
	// bl 0x828fd670
	ctx.lr = 0x8290042C;
	sub_828FD670(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82900430:
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r9,r31,20
	ctx.r9.s64 = ctx.r31.s64 + 20;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r8,r31,24
	ctx.r8.s64 = ctx.r31.s64 + 24;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r7,r31,36
	ctx.r7.s64 = ctx.r31.s64 + 36;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r6,r31,16
	ctx.r6.s64 = ctx.r31.s64 + 16;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82902ff0
	ctx.lr = 0x82900490;
	sub_82902FF0(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828ffb80
	ctx.lr = 0x829004A0;
	sub_828FFB80(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x829004c4
	if (cr6.eq) goto loc_829004C4;
	// addi r31,r31,4892
	ctx.r31.s64 = ctx.r31.s64 + 4892;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829004c4
	if (cr6.eq) goto loc_829004C4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x825bd768
	ctx.lr = 0x829004C0;
	sub_825BD768(ctx, base);
	// stw r21,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r21.u32);
loc_829004C4:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829004dc
	if (cr6.eq) goto loc_829004DC;
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// bl 0x825b33f0
	ctx.lr = 0x829004D8;
	sub_825B33F0(ctx, base);
	// stw r21,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r21.u32);
loc_829004DC:
	// lwz r11,16(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829004f4
	if (cr6.eq) goto loc_829004F4;
	// lwz r3,8(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// bl 0x825a8ca0
	ctx.lr = 0x829004F0;
	sub_825A8CA0(ctx, base);
	// stw r21,16(r23)
	PPC_STORE_U32(ctx.r23.u32 + 16, ctx.r21.u32);
loc_829004F4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829004FC"))) PPC_WEAK_FUNC(sub_829004FC);
PPC_FUNC_IMPL(__imp__sub_829004FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82900500"))) PPC_WEAK_FUNC(sub_82900500);
PPC_FUNC_IMPL(__imp__sub_82900500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x82900508;
	__savegprlr_18(ctx, base);
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x831ce774
	ctx.lr = 0x82900510;
	__savefpr_27(ctx, base);
	// stwu r1,-3648(r1)
	ea = -3648 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r23,-31763
	ctx.r23.s64 = -2081619968;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r3,-3564(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -3564);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lwz r21,292(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// lwz r9,5360(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 5360);
	// bge cr6,0x8290054c
	if (!cr6.lt) goto loc_8290054C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82900574
	goto loc_82900574;
loc_8290054C:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x8290055c
	if (!cr6.lt) goto loc_8290055C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82900574
	goto loc_82900574;
loc_8290055C:
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
	// clrlwi r10,r5,31
	ctx.r10.u64 = ctx.r5.u32 & 0x1;
loc_82900574:
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bne cr6,0x82900cc4
	if (!cr6.eq) goto loc_82900CC4;
	// lwz r27,192(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lwz r18,12(r19)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12);
	// bge cr6,0x82900594
	if (!cr6.lt) goto loc_82900594;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x829005bc
	goto loc_829005BC;
loc_82900594:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x829005a4
	if (!cr6.lt) goto loc_829005A4;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x829005bc
	goto loc_829005BC;
loc_829005A4:
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
loc_829005BC:
	// bl 0x82a0c710
	ctx.lr = 0x829005C0;
	sub_82A0C710(ctx, base);
	// lwz r30,0(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r28,52(r19)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825ca6b8
	ctx.lr = 0x829005D8;
	sub_825CA6B8(ctx, base);
	// lwz r11,4460(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4460);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82900cc4
	if (cr6.eq) goto loc_82900CC4;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r3,24
	cr6.compare<uint32_t>(ctx.r3.u32, 24, xer);
	// bge cr6,0x82900658
	if (!cr6.lt) goto loc_82900658;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a29fb0
	ctx.lr = 0x82900600;
	sub_82A29FB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82900658
	if (cr6.eq) goto loc_82900658;
	// clrlwi r4,r29,24
	ctx.r4.u64 = ctx.r29.u32 & 0xFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a315f8
	ctx.lr = 0x82900618;
	sub_82A315F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82900658
	if (cr6.eq) goto loc_82900658;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x82900658
	if (!cr6.eq) goto loc_82900658;
	// lwz r3,-3564(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -3564);
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x82a0c760
	ctx.lr = 0x8290063C;
	sub_82A0C760(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82a3cf30
	ctx.lr = 0x82900648;
	sub_82A3CF30(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82900658
	if (cr6.eq) goto loc_82900658;
	// li r26,1
	ctx.r26.s64 = 1;
loc_82900658:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829006d4
	if (cr6.eq) goto loc_829006D4;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r21,5756
	ctx.r30.s64 = ctx.r21.s64 + 5756;
	// li r29,2
	ctx.r29.s64 = 2;
loc_82900670:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82900688
	if (cr6.lt) goto loc_82900688;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8290068c
	if (cr6.lt) goto loc_8290068C;
loc_82900688:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8290068C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829006bc
	if (cr6.eq) goto loc_829006BC;
	// lwz r3,-3564(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x829006A0;
	sub_82A0C760(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82a3cf30
	ctx.lr = 0x829006AC;
	sub_82A3CF30(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x829006bc
	if (cr6.eq) goto loc_829006BC;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_829006BC:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82900670
	if (!cr0.eq) goto loc_82900670;
	// subfic r11,r28,0
	xer.ca = ctx.r28.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r28.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r26,r9,r26
	ctx.r26.u64 = ctx.r9.u64 & ctx.r26.u64;
loc_829006D4:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82900cc4
	if (cr6.eq) goto loc_82900CC4;
	// lwz r11,-3564(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -3564);
	// addi r29,r20,4892
	ctx.r29.s64 = ctx.r20.s64 + 4892;
	// lbz r10,4896(r20)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r20.u32 + 4896);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r28,32(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bne cr6,0x82900700
	if (!cr6.eq) goto loc_82900700;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825bf380
	ctx.lr = 0x82900700;
	sub_825BF380(ctx, base);
loc_82900700:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290071c
	if (!cr6.eq) goto loc_8290071C;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4500
	ctx.r10.s64 = ctx.r11.s64 + 4500;
	// stw r10,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r10.u32);
loc_8290071C:
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// lwz r30,16(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x826c79a0
	ctx.lr = 0x82900728;
	sub_826C79A0(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,448(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 448, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,452(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 452, temp.u32);
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// lfs f1,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// addi r25,r11,16132
	ctx.r25.s64 = ctx.r11.s64 + 16132;
	// lfs f13,16132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16132);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bge cr6,0x82900768
	if (!cr6.lt) goto loc_82900768;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82900774
	goto loc_82900774;
loc_82900768:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82900778
	if (cr6.lt) goto loc_82900778;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82900774:
	// stfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82900778:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,712
	ctx.r3.s64 = ctx.r1.s64 + 712;
	// bl 0x82a5a710
	ctx.lr = 0x82900784;
	sub_82A5A710(ctx, base);
	// lwz r9,724(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 724);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r11,-3564(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -3564);
	// clrlwi r8,r9,8
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFFFF;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// oris r7,r8,256
	ctx.r7.u64 = ctx.r8.u64 | 16777216;
	// lfs f0,-24912(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 724, ctx.r7.u32);
	// stfs f0,456(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 456, temp.u32);
	// lwz r30,192(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ca6b8
	ctx.lr = 0x829007B4;
	sub_825CA6B8(ctx, base);
	// cmplwi cr6,r3,24
	cr6.compare<uint32_t>(ctx.r3.u32, 24, xer);
	// blt cr6,0x829007c0
	if (cr6.lt) goto loc_829007C0;
	// li r3,23
	ctx.r3.s64 = 23;
loc_829007C0:
	// mulli r11,r3,112
	ctx.r11.s64 = ctx.r3.s64 * 112;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x8357ece0
	ctx.lr = 0x829007CC;
	sub_8357ECE0(ctx, base);
	// bl 0x82a47ea8
	ctx.lr = 0x829007D0;
	sub_82A47EA8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// lfs f30,20056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f30.f64 = double(temp.f32);
	// bne cr6,0x829007f8
	if (!cr6.eq) goto loc_829007F8;
	// lfs f0,712(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 712);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,720(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 720);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f11,f13,f30
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// stfs f12,712(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 712, temp.u32);
	// stfs f11,720(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 720, temp.u32);
loc_829007F8:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82900814
	if (cr6.eq) goto loc_82900814;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x825bd768
	ctx.lr = 0x8290080C;
	sub_825BD768(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
loc_82900814:
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// bl 0x826c78a8
	ctx.lr = 0x8290081C;
	sub_826C78A8(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lbz r4,252(r22)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r22.u32 + 252);
	// lwz r30,0(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x82a40840
	ctx.lr = 0x8290082C;
	sub_82A40840(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825ca600
	ctx.lr = 0x82900834;
	sub_825CA600(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lbz r4,252(r22)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r22.u32 + 252);
	// fsqrts f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(sqrt(ctx.f1.f64)));
	// lwz r5,0(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x825ceaf8
	ctx.lr = 0x82900848;
	sub_825CEAF8(ctx, base);
	// lfs f13,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x82900860
	if (!cr6.lt) goto loc_82900860;
	// fadds f1,f1,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// b 0x8290086c
	goto loc_8290086C;
loc_82900860:
	// fcmpu cr6,f1,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// blt cr6,0x82900870
	if (cr6.lt) goto loc_82900870;
	// fsubs f1,f1,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
loc_8290086C:
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82900870:
	// lbz r11,252(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 252);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(ctx.r11.u32, 128, xer);
	// blt cr6,0x829008a4
	if (cr6.lt) goto loc_829008A4;
	// fmuls f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82900894
	if (!cr6.lt) goto loc_82900894;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x829008a0
	goto loc_829008A0;
loc_82900894:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x829008a4
	if (cr6.lt) goto loc_829008A4;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_829008A0:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_829008A4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-23864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23864);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// bge cr6,0x829008d8
	if (!cr6.lt) goto loc_829008D8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f1,-23844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23844);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825cbd90
	ctx.lr = 0x829008C4;
	sub_825CBD90(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,19176(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19176);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x829008dc
	if (cr6.lt) goto loc_829008DC;
loc_829008D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_829008DC:
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r4,14
	ctx.r4.s64 = 14;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// lwz r3,-21736(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21736);
	// bl 0x83747068
	ctx.lr = 0x829008F0;
	sub_83747068(ctx, base);
	// lwz r9,5356(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 5356);
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// bne cr6,0x82900924
	if (!cr6.eq) goto loc_82900924;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82900924
	if (!cr6.eq) goto loc_82900924;
	// stfs f30,868(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 868, temp.u32);
	// addi r6,r1,832
	ctx.r6.s64 = ctx.r1.s64 + 832;
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x828a0840
	ctx.lr = 0x82900920;
	sub_828A0840(ctx, base);
	// b 0x82900964
	goto loc_82900964;
loc_82900924:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290094c
	if (!cr6.eq) goto loc_8290094C;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x82a1c580
	ctx.lr = 0x82900938;
	sub_82A1C580(ctx, base);
	// addi r4,r1,736
	ctx.r4.s64 = ctx.r1.s64 + 736;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82a20950
	ctx.lr = 0x82900944;
	sub_82A20950(ctx, base);
	// lfs f0,736(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 736);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,456(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 456, temp.u32);
loc_8290094C:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r1,832
	ctx.r6.s64 = ctx.r1.s64 + 832;
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8289ff68
	ctx.lr = 0x82900964;
	sub_8289FF68(ctx, base);
loc_82900964:
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r3,-3564(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -3564);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x82a0c788
	ctx.lr = 0x82900988;
	sub_82A0C788(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r1,832
	ctx.r6.s64 = ctx.r1.s64 + 832;
	// lwz r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x828cb9c8
	ctx.lr = 0x829009A0;
	sub_828CB9C8(ctx, base);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x828d0ee8
	ctx.lr = 0x829009B0;
	sub_828D0EE8(ctx, base);
	// bl 0x83740868
	ctx.lr = 0x829009B4;
	sub_83740868(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f13,f1
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f9,f12,f1
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f10,124(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f9,128(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// addi r6,r28,8144
	ctx.r6.s64 = ctx.r28.s64 + 8144;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,832
	ctx.r4.s64 = ctx.r1.s64 + 832;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x828d2c90
	ctx.lr = 0x829009F8;
	sub_828D2C90(ctx, base);
	// li r11,200
	ctx.r11.s64 = 200;
	// addi r10,r1,1084
	ctx.r10.s64 = ctx.r1.s64 + 1084;
	// fmr f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f31.f64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,199
	ctx.r29.s64 = 199;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82900A14:
	// stfs f31,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f31,8(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfsu f31,12(r10)
	ea = 12 + ctx.r10.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82900a14
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82900A14;
	// bl 0x83740868
	ctx.lr = 0x82900A28;
	sub_83740868(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r1,1088
	ctx.r27.s64 = ctx.r1.s64 + 1088;
	// lfs f27,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f27.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fdivs f30,f27,f1
	ctx.f30.f64 = double(float(ctx.f27.f64 / ctx.f1.f64));
	// lfs f29,-11404(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11404);
	ctx.f29.f64 = double(temp.f32);
loc_82900A48:
	// lfs f13,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// lfs f12,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,0(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stfs f0,4(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// stfs f12,8(r27)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// bl 0x828d1268
	ctx.lr = 0x82900A64;
	sub_828D1268(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x82900a74
	if (!cr6.eq) goto loc_82900A74;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82900A74:
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828d1bd8
	ctx.lr = 0x82900A88;
	sub_828D1BD8(ctx, base);
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// lfs f0,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82900b00
	if (!cr6.eq) goto loc_82900B00;
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82900b00
	if (!cr6.lt) goto loc_82900B00;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// fmr f28,f0
	ctx.f28.f64 = ctx.f0.f64;
	// li r26,1
	ctx.r26.s64 = 1;
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, xer);
	// bgt cr6,0x82900b00
	if (cr6.gt) goto loc_82900B00;
	// addi r30,r28,1
	ctx.r30.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,12
	ctx.r27.s64 = ctx.r27.s64 + 12;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// bl 0x828d1268
	ctx.lr = 0x82900AC4;
	sub_828D1268(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x82900ad4
	if (!cr6.eq) goto loc_82900AD4;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82900AD4:
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828d1bd8
	ctx.lr = 0x82900AE8;
	sub_828D1BD8(ctx, base);
	// lfs f0,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,4(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// stfs f13,0(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stfs f12,8(r27)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
loc_82900B00:
	// lfs f13,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1088(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1088);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f10,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,1096(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1096);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fmuls f7,f11,f11
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f6,f8,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fcmpu cr6,f6,f29
	cr6.compare(ctx.f6.f64, ctx.f29.f64);
	// ble cr6,0x82900b50
	if (!cr6.gt) goto loc_82900B50;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82900b50
	if (cr6.eq) goto loc_82900B50;
	// lfs f13,16(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82900b64
	if (!cr6.gt) goto loc_82900B64;
	// fsubs f13,f28,f0
	ctx.f13.f64 = double(float(ctx.f28.f64 - ctx.f0.f64));
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f27
	cr6.compare(ctx.f12.f64, ctx.f27.f64);
	// bgt cr6,0x82900b64
	if (cr6.gt) goto loc_82900B64;
loc_82900B50:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,12
	ctx.r27.s64 = ctx.r27.s64 + 12;
	// cmpwi cr6,r28,200
	cr6.compare<int32_t>(ctx.r28.s32, 200, xer);
	// blt cr6,0x82900a48
	if (cr6.lt) goto loc_82900A48;
	// b 0x82900bd4
	goto loc_82900BD4;
loc_82900B64:
	// subf r11,r30,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r30.s64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82900bd4
	if (!cr6.lt) goto loc_82900BD4;
	// cmpwi cr6,r28,199
	cr6.compare<int32_t>(ctx.r28.s32, 199, xer);
	// bge cr6,0x82900bd4
	if (!cr6.lt) goto loc_82900BD4;
	// addi r29,r28,1
	ctx.r29.s64 = ctx.r28.s64 + 1;
	// bl 0x828d1268
	ctx.lr = 0x82900B84;
	sub_828D1268(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x82900b94
	if (!cr6.eq) goto loc_82900B94;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82900B94:
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828d1bd8
	ctx.lr = 0x82900BA8;
	sub_828D1BD8(ctx, base);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,1088
	ctx.r10.s64 = ctx.r1.s64 + 1088;
	// lfs f0,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lfs f13,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82900BD4:
	// srawi r11,r30,1
	xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 1;
	// lfs f0,1092(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1092);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lfs f13,1088(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1088);
	ctx.f13.f64 = double(temp.f32);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// lfs f12,1096(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1096);
	ctx.f12.f64 = double(temp.f32);
	// srawi r8,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addze r10,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r10.s64 = temp.s64;
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// rlwinm r8,r30,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r30,r8
	ctx.r5.u64 = ctx.r30.u64 + ctx.r8.u64;
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,1088
	ctx.r10.s64 = ctx.r1.s64 + 1088;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r8,r1,1088
	ctx.r8.s64 = ctx.r1.s64 + 1088;
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,1088
	ctx.r6.s64 = ctx.r1.s64 + 1088;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,1088
	ctx.r4.s64 = ctx.r1.s64 + 1088;
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lfsx f11,r5,r6
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	ctx.f11.f64 = double(temp.f32);
	// add r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f10,12(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f9,16(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f8,20(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// stfs f7,24(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f6,28(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f5,32(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f4,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f11,36(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f4,40(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f3,44(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f2,48(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f1,52(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// addi r1,r1,3648
	ctx.r1.s64 = ctx.r1.s64 + 3648;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x831ce7c0
	ctx.lr = 0x82900CC0;
	__restfpr_27(ctx, base);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82900CC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,3648
	ctx.r1.s64 = ctx.r1.s64 + 3648;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x831ce7c0
	ctx.lr = 0x82900CD4;
	__restfpr_27(ctx, base);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82900CD8"))) PPC_WEAK_FUNC(sub_82900CD8);
PPC_FUNC_IMPL(__imp__sub_82900CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82900CE0;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// lwz r11,20(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// lis r9,-31778
	ctx.r9.s64 = -2082603008;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r10,-3564(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3564);
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// lwz r29,2056(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2056);
	// lwz r10,192(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	// blt cr6,0x82900d14
	if (cr6.lt) goto loc_82900D14;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82900D14:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// blt cr6,0x82900d38
	if (cr6.lt) goto loc_82900D38;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bge cr6,0x82900d3c
	if (!cr6.lt) goto loc_82900D3C;
loc_82900D38:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82900D3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r25,2(r31)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82a32318
	ctx.lr = 0x82900D4C;
	sub_82A32318(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82900d68
	if (cr6.eq) goto loc_82900D68;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82900d6c
	if (cr6.eq) goto loc_82900D6C;
loc_82900D68:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82900D6C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r31,1(r31)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lwz r10,424(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82900D84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a31410
	ctx.lr = 0x82900D90;
	sub_82A31410(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x82900db0
	if (!cr6.eq) goto loc_82900DB0;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82900db0
	if (!cr6.eq) goto loc_82900DB0;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82900dc0
	if (cr6.eq) goto loc_82900DC0;
loc_82900DB0:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x828ffa60
	ctx.lr = 0x82900DC0;
	sub_828FFA60(ctx, base);
loc_82900DC0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x82900dec
	if (!cr6.eq) goto loc_82900DEC;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82900dec
	if (!cr6.eq) goto loc_82900DEC;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82900dec
	if (!cr6.eq) goto loc_82900DEC;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82900dfc
	if (cr6.eq) goto loc_82900DFC;
loc_82900DEC:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x828ff5a8
	ctx.lr = 0x82900DFC;
	sub_828FF5A8(ctx, base);
loc_82900DFC:
	// lbz r11,36(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82900e28
	if (cr6.eq) goto loc_82900E28;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a30088
	ctx.lr = 0x82900E10;
	sub_82A30088(ctx, base);
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a300b0
	ctx.lr = 0x82900E1C;
	sub_82A300B0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x828ff2d0
	ctx.lr = 0x82900E28;
	sub_828FF2D0(ctx, base);
loc_82900E28:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x829002c0
	ctx.lr = 0x82900E38;
	sub_829002C0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82900E40"))) PPC_WEAK_FUNC(sub_82900E40);
PPC_FUNC_IMPL(__imp__sub_82900E40) {
	PPC_FUNC_PROLOGUE();
	// b 0x82900cd8
	sub_82900CD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82900E44"))) PPC_WEAK_FUNC(sub_82900E44);
PPC_FUNC_IMPL(__imp__sub_82900E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82900E48"))) PPC_WEAK_FUNC(sub_82900E48);
PPC_FUNC_IMPL(__imp__sub_82900E48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82900E50;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,4792(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4792);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r28,72
	ctx.r28.s64 = 72;
	// lfs f31,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// cmpwi cr6,r11,72
	cr6.compare<int32_t>(ctx.r11.s32, 72, xer);
	// bge cr6,0x82900ea8
	if (!cr6.lt) goto loc_82900EA8;
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// beq cr6,0x82900e8c
	if (cr6.eq) goto loc_82900E8C;
	// cmpwi cr6,r4,72
	cr6.compare<int32_t>(ctx.r4.s32, 72, xer);
	// blt cr6,0x82900e94
	if (cr6.lt) goto loc_82900E94;
loc_82900E8C:
	// stfs f31,4800(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4800, temp.u32);
	// stw r28,4792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4792, ctx.r28.u32);
loc_82900E94:
	// lwz r11,1692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1692);
	// addi r3,r31,1692
	ctx.r3.s64 = ctx.r31.s64 + 1692;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82900EA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82900EA8:
	// lwz r11,4788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4788);
	// cmpwi cr6,r11,72
	cr6.compare<int32_t>(ctx.r11.s32, 72, xer);
	// bge cr6,0x82900f38
	if (!cr6.lt) goto loc_82900F38;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// beq cr6,0x82900ec4
	if (cr6.eq) goto loc_82900EC4;
	// cmpwi cr6,r30,72
	cr6.compare<int32_t>(ctx.r30.s32, 72, xer);
	// blt cr6,0x82900f38
	if (cr6.lt) goto loc_82900F38;
loc_82900EC4:
	// stfs f31,4796(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4796, temp.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// stw r28,4788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4788, ctx.r28.u32);
	// beq cr6,0x82900f1c
	if (cr6.eq) goto loc_82900F1C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82da1d10
	ctx.lr = 0x82900EE0;
	sub_82DA1D10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82900f04
	if (cr6.eq) goto loc_82900F04;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a182e0
	ctx.lr = 0x82900EF4;
	sub_82A182E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82900f04
	if (cr6.eq) goto loc_82900F04;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82900F04:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82900f1c
	if (cr6.eq) goto loc_82900F1C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a182f0
	ctx.lr = 0x82900F1C;
	sub_82A182F0(ctx, base);
loc_82900F1C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f31,4812(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4812, temp.u32);
	// stfs f31,4816(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4816, temp.u32);
	// stfs f31,4820(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4820, temp.u32);
	// stb r11,4832(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4832, ctx.r11.u8);
	// stfs f31,4824(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4824, temp.u32);
	// stfs f31,4828(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4828, temp.u32);
loc_82900F38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82900F44"))) PPC_WEAK_FUNC(sub_82900F44);
PPC_FUNC_IMPL(__imp__sub_82900F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82900F48"))) PPC_WEAK_FUNC(sub_82900F48);
PPC_FUNC_IMPL(__imp__sub_82900F48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82900F50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82903190
	ctx.lr = 0x82900F6C;
	sub_82903190(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82900fd8
	if (cr6.eq) goto loc_82900FD8;
	// cmpwi cr6,r31,26
	cr6.compare<int32_t>(ctx.r31.s32, 26, xer);
	// blt cr6,0x82900f8c
	if (cr6.lt) goto loc_82900F8C;
	// cmpwi cr6,r31,27
	cr6.compare<int32_t>(ctx.r31.s32, 27, xer);
	// bgt cr6,0x82900f8c
	if (cr6.gt) goto loc_82900F8C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82900f98
	goto loc_82900F98;
loc_82900F8C:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82900F98:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290108c
	if (cr6.eq) goto loc_8290108C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bne cr6,0x8290100c
	if (!cr6.eq) goto loc_8290100C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82900fe4
	if (cr6.eq) goto loc_82900FE4;
	// lwz r11,4792(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4792);
	// cmpwi cr6,r11,72
	cr6.compare<int32_t>(ctx.r11.s32, 72, xer);
	// bge cr6,0x8290108c
	if (!cr6.lt) goto loc_8290108C;
	// cmpwi cr6,r31,26
	cr6.compare<int32_t>(ctx.r31.s32, 26, xer);
	// beq cr6,0x8290108c
	if (cr6.eq) goto loc_8290108C;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// beq cr6,0x8290108c
	if (cr6.eq) goto loc_8290108C;
loc_82900FD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82900FE4:
	// lwz r11,4788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4788);
	// cmpwi cr6,r11,72
	cr6.compare<int32_t>(ctx.r11.s32, 72, xer);
	// bge cr6,0x8290108c
	if (!cr6.lt) goto loc_8290108C;
	// cmpwi cr6,r31,24
	cr6.compare<int32_t>(ctx.r31.s32, 24, xer);
	// beq cr6,0x8290108c
	if (cr6.eq) goto loc_8290108C;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// beq cr6,0x8290108c
	if (cr6.eq) goto loc_8290108C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8290100C:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x8290103c
	if (cr6.eq) goto loc_8290103C;
	// lwz r11,4792(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4792);
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// beq cr6,0x8290108c
	if (cr6.eq) goto loc_8290108C;
loc_82901020:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82901030;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8290103C:
	// lwz r11,4788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4788);
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// bne cr6,0x82901020
	if (!cr6.eq) goto loc_82901020;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290108c
	if (cr6.eq) goto loc_8290108C;
	// lbz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290108c
	if (cr6.eq) goto loc_8290108C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82901070;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82900e48
	ctx.lr = 0x82901080;
	sub_82900E48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8290108C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82901098"))) PPC_WEAK_FUNC(sub_82901098);
PPC_FUNC_IMPL(__imp__sub_82901098) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x829010A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82903190
	ctx.lr = 0x829010BC;
	sub_82903190(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82901210
	if (cr6.eq) goto loc_82901210;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82901210
	if (cr6.eq) goto loc_82901210;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82901210
	if (!cr6.gt) goto loc_82901210;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82901110
	if (cr6.eq) goto loc_82901110;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82901110:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r29,52
	cr6.compare<int32_t>(ctx.r29.s32, 52, xer);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lbz r9,21(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// beq cr6,0x829011c0
	if (cr6.eq) goto loc_829011C0;
	// cmpwi cr6,r29,53
	cr6.compare<int32_t>(ctx.r29.s32, 53, xer);
	// beq cr6,0x82901164
	if (cr6.eq) goto loc_82901164;
	// lbz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290114c
	if (!cr6.eq) goto loc_8290114C;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82901204
	if (cr6.eq) goto loc_82901204;
loc_8290114C:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lfs f0,4812(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4812);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82901164:
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r31,3412
	ctx.r11.s64 = ctx.r31.s64 + 3412;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r7,3492(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3492);
	// lwz r4,3500(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3500);
	// lwz r6,24(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r5,28(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r8,3496(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3496);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f11,3504(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3504);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,0(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_829011C0:
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r31,3200
	ctx.r11.s64 = ctx.r31.s64 + 3200;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r7,3260(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3260);
	// lwz r8,3256(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3256);
	// lwz r6,3252(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3252);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// lfs f12,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f12,8(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
loc_82901204:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82901210:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290121C"))) PPC_WEAK_FUNC(sub_8290121C);
PPC_FUNC_IMPL(__imp__sub_8290121C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82901220"))) PPC_WEAK_FUNC(sub_82901220);
PPC_FUNC_IMPL(__imp__sub_82901220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82901228;
	__savegprlr_24(ctx, base);
	// stfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f29.u64);
	// stfd f30,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82903190
	ctx.lr = 0x82901254;
	sub_82903190(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82901274
	if (!cr6.eq) goto loc_82901274;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82901274:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r24,1
	ctx.r24.s64 = 1;
	// bl 0x82a30088
	ctx.lr = 0x82901280;
	sub_82A30088(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a30048
	ctx.lr = 0x82901288;
	sub_82A30048(ctx, base);
	// cmplwi cr6,r3,11
	cr6.compare<uint32_t>(ctx.r3.u32, 11, xer);
	// bgt cr6,0x8290180c
	if (cr6.gt) goto loc_8290180C;
	// lis r12,-32112
	ctx.r12.s64 = -2104492032;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,4776
	ctx.r12.s64 = ctx.r12.s64 + 4776;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u32) {
	case 0:
		goto loc_829012D8;
	case 1:
		goto loc_829014B0;
	case 2:
		goto loc_82901384;
	case 3:
		goto loc_82901318;
	case 4:
		goto loc_82901644;
	case 5:
		goto loc_8290180C;
	case 6:
		goto loc_82901618;
	case 7:
		goto loc_829014E0;
	case 8:
		goto loc_82901538;
	case 9:
		goto loc_82901384;
	case 10:
		goto loc_829012F4;
	case 11:
		goto loc_8290170C;
	default:
		return;
	}
	// lwz r20,4824(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4824);
	// lwz r20,5296(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + 5296);
	// lwz r20,4996(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4996);
	// lwz r20,4888(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4888);
	// lwz r20,5700(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + 5700);
	// lwz r20,6156(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + 6156);
	// lwz r20,5656(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + 5656);
	// lwz r20,5344(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + 5344);
	// lwz r20,5432(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + 5432);
	// lwz r20,4996(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4996);
	// lwz r20,4852(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4852);
	// lwz r20,5900(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + 5900);
loc_829012D8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82a300b0
	ctx.lr = 0x829012E4;
	sub_82A300B0(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x828ff2d0
	ctx.lr = 0x829012F0;
	sub_828FF2D0(ctx, base);
	// b 0x82901810
	goto loc_82901810;
loc_829012F4:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82a303a0
	ctx.lr = 0x82901308;
	sub_82A303A0(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x828ff2d0
	ctx.lr = 0x82901314;
	sub_828FF2D0(ctx, base);
	// b 0x82901810
	goto loc_82901810;
loc_82901318:
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// addi r11,r31,4808
	ctx.r11.s64 = ctx.r31.s64 + 4808;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82901328:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82901328
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82901328;
	// cmpwi cr6,r27,4
	cr6.compare<int32_t>(ctx.r27.s32, 4, xer);
	// bne cr6,0x82901348
	if (!cr6.eq) goto loc_82901348;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f3,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f3.f64 = double(temp.f32);
	// b 0x8290134c
	goto loc_8290134C;
loc_82901348:
	// lfs f3,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
loc_8290134C:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lbz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 116);
	// lfs f5,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// bl 0x82a303d0
	ctx.lr = 0x82901374;
	sub_82A303D0(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x828ff2d0
	ctx.lr = 0x82901380;
	sub_828FF2D0(ctx, base);
	// b 0x82901810
	goto loc_82901810;
loc_82901384:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lfs f30,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// rlwinm r26,r8,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x829013b4
	if (!cr6.gt) goto loc_829013B4;
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(ctx.r26.s32, 1, xer);
	// li r27,1
	ctx.r27.s64 = 1;
	// beq cr6,0x829013b8
	if (cr6.eq) goto loc_829013B8;
loc_829013B4:
	// li r27,0
	ctx.r27.s64 = 0;
loc_829013B8:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82a38d50
	ctx.lr = 0x829013C8;
	sub_82A38D50(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82a38db8
	ctx.lr = 0x829013DC;
	sub_82A38DB8(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bne cr6,0x82901400
	if (!cr6.eq) goto loc_82901400;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82908448
	ctx.lr = 0x829013FC;
	sub_82908448(ctx, base);
	// lfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f31.f64 = double(temp.f32);
loc_82901400:
	// cmpwi cr6,r29,57
	cr6.compare<int32_t>(ctx.r29.s32, 57, xer);
	// beq cr6,0x8290142c
	if (cr6.eq) goto loc_8290142C;
	// cmpwi cr6,r29,58
	cr6.compare<int32_t>(ctx.r29.s32, 58, xer);
	// beq cr6,0x82901424
	if (cr6.eq) goto loc_82901424;
	// cmpwi cr6,r29,60
	cr6.compare<int32_t>(ctx.r29.s32, 60, xer);
	// bne cr6,0x8290145c
	if (!cr6.eq) goto loc_8290145C;
	// lfs f29,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f31.f64 = double(temp.f32);
	// b 0x8290145c
	goto loc_8290145C;
loc_82901424:
	// lfs f31,1820(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1820);
	ctx.f31.f64 = double(temp.f32);
	// b 0x8290145c
	goto loc_8290145C;
loc_8290142C:
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x825ce9f8
	ctx.lr = 0x82901438;
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
	// bge cr6,0x82901454
	if (!cr6.lt) goto loc_82901454;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// b 0x8290145c
	goto loc_8290145C;
loc_82901454:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f31,16576(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16576);
	ctx.f31.f64 = double(temp.f32);
loc_8290145C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a30048
	ctx.lr = 0x82901464;
	sub_82A30048(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// lbz r7,21(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 21);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bne cr6,0x82901494
	if (!cr6.eq) goto loc_82901494;
	// bl 0x82a30298
	ctx.lr = 0x82901484;
	sub_82A30298(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x828ff2d0
	ctx.lr = 0x82901490;
	sub_828FF2D0(ctx, base);
	// b 0x82901810
	goto loc_82901810;
loc_82901494:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82a30308
	ctx.lr = 0x829014A0;
	sub_82A30308(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x828ff2d0
	ctx.lr = 0x829014AC;
	sub_828FF2D0(ctx, base);
	// b 0x82901810
	goto loc_82901810;
loc_829014B0:
	// lbz r5,21(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 21);
	// cmpwi cr6,r29,38
	cr6.compare<int32_t>(ctx.r29.s32, 38, xer);
	// bne cr6,0x829014c4
	if (!cr6.eq) goto loc_829014C4;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
loc_829014C4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82a300d8
	ctx.lr = 0x829014D0;
	sub_82A300D8(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x828ff2d0
	ctx.lr = 0x829014DC;
	sub_828FF2D0(ctx, base);
	// b 0x82901810
	goto loc_82901810;
loc_829014E0:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r31,60(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// li r4,0
	ctx.r4.s64 = 0;
	// lbz r27,56(r30)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r30.u32 + 56);
	// lwz r26,52(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lfs f31,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f31.f64 = double(temp.f32);
	// lwz r30,20(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x82a38db8
	ctx.lr = 0x82901504;
	sub_82A38DB8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// clrlwi r7,r26,24
	ctx.r7.u64 = ctx.r26.u32 & 0xFF;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// bl 0x82a30660
	ctx.lr = 0x82901528;
	sub_82A30660(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x828ff2d0
	ctx.lr = 0x82901534;
	sub_828FF2D0(ctx, base);
	// b 0x82901810
	goto loc_82901810;
loc_82901538:
	// cmpwi cr6,r27,19
	cr6.compare<int32_t>(ctx.r27.s32, 19, xer);
	// bgt cr6,0x829015bc
	if (cr6.gt) goto loc_829015BC;
	// beq cr6,0x82901598
	if (cr6.eq) goto loc_82901598;
	// cmpwi cr6,r27,17
	cr6.compare<int32_t>(ctx.r27.s32, 17, xer);
	// beq cr6,0x82901578
	if (cr6.eq) goto loc_82901578;
	// cmpwi cr6,r27,18
	cr6.compare<int32_t>(ctx.r27.s32, 18, xer);
	// bne cr6,0x82901608
	if (!cr6.eq) goto loc_82901608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f31,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f31.f64 = double(temp.f32);
	// lwz r31,52(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x8290a0e8
	ctx.lr = 0x82901564;
	sub_8290A0E8(ctx, base);
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x829015fc
	goto loc_829015FC;
loc_82901578:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f31,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f31.f64 = double(temp.f32);
	// lwz r31,52(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x82909f98
	ctx.lr = 0x82901588;
	sub_82909F98(ctx, base);
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x829015f8
	goto loc_829015F8;
loc_82901598:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f31,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f31.f64 = double(temp.f32);
	// lwz r31,52(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x82909f98
	ctx.lr = 0x829015A8;
	sub_82909F98(ctx, base);
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x829015fc
	goto loc_829015FC;
loc_829015BC:
	// cmpwi cr6,r27,31
	cr6.compare<int32_t>(ctx.r27.s32, 31, xer);
	// beq cr6,0x829015d4
	if (cr6.eq) goto loc_829015D4;
	// cmpwi cr6,r27,62
	cr6.compare<int32_t>(ctx.r27.s32, 62, xer);
	// bne cr6,0x82901608
	if (!cr6.eq) goto loc_82901608;
	// lfs f1,56(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// b 0x829015ec
	goto loc_829015EC;
loc_829015D4:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82908448
	ctx.lr = 0x829015E8;
	sub_82908448(ctx, base);
	// lfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
loc_829015EC:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r5,52(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lfs f2,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f2.f64 = double(temp.f32);
loc_829015F8:
	// li r8,1
	ctx.r8.s64 = 1;
loc_829015FC:
	// li r4,89
	ctx.r4.s64 = 89;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82a30710
	ctx.lr = 0x82901608;
	sub_82A30710(ctx, base);
loc_82901608:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x828ff2d0
	ctx.lr = 0x82901614;
	sub_828FF2D0(ctx, base);
	// b 0x82901810
	goto loc_82901810;
loc_82901618:
	// li r4,86
	ctx.r4.s64 = 86;
	// lbz r8,2437(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2437);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f3,1976(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1976);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,1972(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1972);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2444(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2444);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a304a8
	ctx.lr = 0x82901634;
	sub_82A304A8(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x828ff2d0
	ctx.lr = 0x82901640;
	sub_828FF2D0(ctx, base);
	// b 0x82901810
	goto loc_82901810;
loc_82901644:
	// cmpwi cr6,r29,80
	cr6.compare<int32_t>(ctx.r29.s32, 80, xer);
	// beq cr6,0x829016ac
	if (cr6.eq) goto loc_829016AC;
	// cmpwi cr6,r29,82
	cr6.compare<int32_t>(ctx.r29.s32, 82, xer);
	// bne cr6,0x82901810
	if (!cr6.eq) goto loc_82901810;
	// lwz r8,3492(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3492);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,3496(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3496);
	// li r4,82
	ctx.r4.s64 = 82;
	// lwz r6,3500(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3500);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r5,20(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lfs f1,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lbz r10,3433(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3433);
	// addi r11,r31,3412
	ctx.r11.s64 = ctx.r31.s64 + 3412;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lfs f2,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lfs f3,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f3.f64 = double(temp.f32);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// lfs f4,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f4.f64 = double(temp.f32);
	// stb r5,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r5.u8);
	// bl 0x82a30560
	ctx.lr = 0x8290169C;
	sub_82A30560(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x828ff2d0
	ctx.lr = 0x829016A8;
	sub_828FF2D0(ctx, base);
	// b 0x82901810
	goto loc_82901810;
loc_829016AC:
	// lwz r11,3252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3252);
	// addi r3,r31,3200
	ctx.r3.s64 = ctx.r31.s64 + 3200;
	// lwz r10,3256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3256);
	// lwz r9,3260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3260);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x82909a58
	ctx.lr = 0x829016CC;
	sub_82909A58(ctx, base);
	// lwz r7,20(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lbz r10,3221(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3221);
	// li r4,80
	ctx.r4.s64 = 80;
	// lfs f1,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f4,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f3.f64 = double(temp.f32);
	// stb r7,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r7.u8);
	// bl 0x82a30560
	ctx.lr = 0x829016FC;
	sub_82A30560(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x828ff2d0
	ctx.lr = 0x82901708;
	sub_828FF2D0(ctx, base);
	// b 0x82901810
	goto loc_82901810;
loc_8290170C:
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// lbz r10,3669(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3669);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r30,2056(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// beq cr6,0x82901750
	if (cr6.eq) goto loc_82901750;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,384(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82901738;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,412(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 412);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82901750;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82901750:
	// lbz r11,3670(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3670);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82901784
	if (cr6.eq) goto loc_82901784;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,428(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82901774;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x8357ece0
	ctx.lr = 0x8290177C;
	sub_8357ECE0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x829017d4
	goto loc_829017D4;
loc_82901784:
	// lbz r11,3668(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3668);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829017b8
	if (cr6.eq) goto loc_829017B8;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x8357ece0
	ctx.lr = 0x82901798;
	sub_8357ECE0(ctx, base);
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ld r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// b 0x829017e8
	goto loc_829017E8;
loc_829017B8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r10,416(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829017D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,1
	ctx.r6.s64 = 1;
loc_829017D4:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
loc_829017E8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82a30790
	ctx.lr = 0x829017FC;
	sub_82A30790(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x828ff2d0
	ctx.lr = 0x82901808;
	sub_828FF2D0(ctx, base);
	// b 0x82901810
	goto loc_82901810;
loc_8290180C:
	// li r24,0
	ctx.r24.s64 = 0;
loc_82901810:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82901828"))) PPC_WEAK_FUNC(sub_82901828);
PPC_FUNC_IMPL(__imp__sub_82901828) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82901830;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x831ce770
	ctx.lr = 0x82901838;
	__savefpr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stb r10,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r10.u8);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stfs f31,0(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// stfs f31,4(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// stfs f31,8(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// stfs f31,12(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f31,16(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// bl 0x82903190
	ctx.lr = 0x82901880;
	sub_82903190(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82901b54
	if (cr6.eq) goto loc_82901B54;
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// lwz r4,20(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// lwz r3,-3564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x8290189C;
	sub_82A0C788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// bl 0x82a38db8
	ctx.lr = 0x829018B0;
	sub_82A38DB8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f26,28(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	ctx.f26.f64 = double(temp.f32);
	// lbz r22,21(r27)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r27.u32 + 21);
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// cmpwi cr6,r29,42
	cr6.compare<int32_t>(ctx.r29.s32, 42, xer);
	// fmr f27,f1
	ctx.f27.f64 = ctx.f1.f64;
	// lfs f28,-11356(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11356);
	ctx.f28.f64 = double(temp.f32);
	// bne cr6,0x829018e8
	if (!cr6.eq) goto loc_829018E8;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lbz r4,57(r25)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r25.u32 + 57);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82a407e0
	ctx.lr = 0x829018E0;
	sub_82A407E0(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// b 0x82901910
	goto loc_82901910;
loc_829018E8:
	// fcmpu cr6,f27,f28
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f27.f64, ctx.f28.f64);
	// bge cr6,0x829018f8
	if (!cr6.lt) goto loc_829018F8;
	// lfs f30,1272(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 1272);
	ctx.f30.f64 = double(temp.f32);
	// b 0x82901910
	goto loc_82901910;
loc_829018F8:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82908448
	ctx.lr = 0x8290190C;
	sub_82908448(ctx, base);
	// lfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f30.f64 = double(temp.f32);
loc_82901910:
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// lwz r31,292(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// beq cr6,0x8290192c
	if (cr6.eq) goto loc_8290192C;
	// lwz r24,4792(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4792);
	// b 0x82901930
	goto loc_82901930;
loc_8290192C:
	// lwz r24,4788(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4788);
loc_82901930:
	// cmpwi cr6,r23,87
	cr6.compare<int32_t>(ctx.r23.s32, 87, xer);
	// bne cr6,0x8290195c
	if (!cr6.eq) goto loc_8290195C;
	// lwz r11,44(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8290195c
	if (!cr6.eq) goto loc_8290195C;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82903190
	ctx.lr = 0x82901950;
	sub_82903190(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8290195c
	if (cr6.eq) goto loc_8290195C;
	// lfs f26,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f26.f64 = double(temp.f32);
loc_8290195C:
	// lwz r11,4460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4460);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82901b34
	if (!cr6.eq) goto loc_82901B34;
	// cmpwi cr6,r29,42
	cr6.compare<int32_t>(ctx.r29.s32, 42, xer);
	// beq cr6,0x82901978
	if (cr6.eq) goto loc_82901978;
	// cmpwi cr6,r29,59
	cr6.compare<int32_t>(ctx.r29.s32, 59, xer);
	// bne cr6,0x82901980
	if (!cr6.eq) goto loc_82901980;
loc_82901978:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f26,-24912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f26.f64 = double(temp.f32);
loc_82901980:
	// cmpwi cr6,r23,78
	cr6.compare<int32_t>(ctx.r23.s32, 78, xer);
	// blt cr6,0x829019dc
	if (cr6.lt) goto loc_829019DC;
	// cmpwi cr6,r23,79
	cr6.compare<int32_t>(ctx.r23.s32, 79, xer);
	// bgt cr6,0x829019dc
	if (cr6.gt) goto loc_829019DC;
	// lwz r11,5356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5356);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x829019cc
	if (cr6.eq) goto loc_829019CC;
	// ble cr6,0x82901a80
	if (!cr6.gt) goto loc_82901A80;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bgt cr6,0x82901a80
	if (cr6.gt) goto loc_82901A80;
	// fcmpu cr6,f27,f28
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f27.f64, ctx.f28.f64);
	// bge cr6,0x82901a80
	if (!cr6.lt) goto loc_82901A80;
	// lbz r11,1836(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1836);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829019c4
	if (cr6.eq) goto loc_829019C4;
	// lfs f30,1840(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1840);
	ctx.f30.f64 = double(temp.f32);
	// b 0x82901a80
	goto loc_82901A80;
loc_829019C4:
	// lfs f30,1820(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1820);
	ctx.f30.f64 = double(temp.f32);
	// b 0x82901a80
	goto loc_82901A80;
loc_829019CC:
	// fcmpu cr6,f27,f28
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f27.f64, ctx.f28.f64);
	// bge cr6,0x82901a80
	if (!cr6.lt) goto loc_82901A80;
	// lfs f30,1276(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 1276);
	ctx.f30.f64 = double(temp.f32);
	// b 0x82901a80
	goto loc_82901A80;
loc_829019DC:
	// lwz r11,5356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5356);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// blt cr6,0x82901a80
	if (cr6.lt) goto loc_82901A80;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bgt cr6,0x82901a80
	if (cr6.gt) goto loc_82901A80;
	// lbz r11,1836(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1836);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82901a30
	if (cr6.eq) goto loc_82901A30;
	// lwz r11,1844(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1844);
	// lfs f30,1840(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1840);
	ctx.f30.f64 = double(temp.f32);
	// lwz r10,1848(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1848);
	// lwz r9,1852(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1852);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x825c2950
	ctx.lr = 0x82901A20;
	sub_825C2950(ctx, base);
	// lwz r8,1844(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1844);
	// lwz r7,1852(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1852);
	// lwz r6,1848(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1848);
	// b 0x82901a5c
	goto loc_82901A5C;
loc_82901A30:
	// lwz r11,1824(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1824);
	// lfs f30,1820(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1820);
	ctx.f30.f64 = double(temp.f32);
	// lwz r10,1828(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1828);
	// lwz r9,1832(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1832);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x825c2950
	ctx.lr = 0x82901A50;
	sub_825C2950(ctx, base);
	// lwz r8,1824(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1824);
	// lwz r7,1832(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1832);
	// lwz r6,1828(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1828);
loc_82901A5C:
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f0,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fsqrts f31,f12
	ctx.f31.f64 = double(float(sqrt(ctx.f12.f64)));
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
loc_82901A80:
	// lwz r11,5356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5356);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82901b34
	if (!cr6.eq) goto loc_82901B34;
	// cmpwi cr6,r23,76
	cr6.compare<int32_t>(ctx.r23.s32, 76, xer);
	// beq cr6,0x82901abc
	if (cr6.eq) goto loc_82901ABC;
	// cmpwi cr6,r23,78
	cr6.compare<int32_t>(ctx.r23.s32, 78, xer);
	// beq cr6,0x82901abc
	if (cr6.eq) goto loc_82901ABC;
	// cmpwi cr6,r23,79
	cr6.compare<int32_t>(ctx.r23.s32, 79, xer);
	// beq cr6,0x82901abc
	if (cr6.eq) goto loc_82901ABC;
	// cmpwi cr6,r23,81
	cr6.compare<int32_t>(ctx.r23.s32, 81, xer);
	// beq cr6,0x82901abc
	if (cr6.eq) goto loc_82901ABC;
	// cmpwi cr6,r23,10
	cr6.compare<int32_t>(ctx.r23.s32, 10, xer);
	// beq cr6,0x82901abc
	if (cr6.eq) goto loc_82901ABC;
	// cmpwi cr6,r23,87
	cr6.compare<int32_t>(ctx.r23.s32, 87, xer);
	// bne cr6,0x82901b34
	if (!cr6.eq) goto loc_82901B34;
loc_82901ABC:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82a38be0
	ctx.lr = 0x82901ACC;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82901af4
	if (cr6.eq) goto loc_82901AF4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8290abc0
	ctx.lr = 0x82901AE0;
	sub_8290ABC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x82901af4
	if (cr6.lt) goto loc_82901AF4;
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// ori r22,r11,2
	ctx.r22.u64 = ctx.r11.u64 | 2;
loc_82901AF4:
	// cmpwi cr6,r23,87
	cr6.compare<int32_t>(ctx.r23.s32, 87, xer);
	// bne cr6,0x82901b34
	if (!cr6.eq) goto loc_82901B34;
	// lwz r11,44(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82901b34
	if (!cr6.eq) goto loc_82901B34;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82903190
	ctx.lr = 0x82901B14;
	sub_82903190(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82901b34
	if (cr6.eq) goto loc_82901B34;
	// lbz r11,21(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82901b34
	if (cr6.eq) goto loc_82901B34;
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// ori r22,r11,2
	ctx.r22.u64 = ctx.r11.u64 | 2;
loc_82901B34:
	// stfs f30,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stb r22,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r22.u8);
	// stfs f27,4(r30)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stb r22,21(r27)
	PPC_STORE_U8(ctx.r27.u32 + 21, ctx.r22.u8);
	// stfs f26,8(r30)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f29,12(r30)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f31,16(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f26,28(r27)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r27.u32 + 28, temp.u32);
loc_82901B54:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x831ce7bc
	ctx.lr = 0x82901B64;
	__restfpr_26(ctx, base);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82901B68"))) PPC_WEAK_FUNC(sub_82901B68);
PPC_FUNC_IMPL(__imp__sub_82901B68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82901B70;
	__savegprlr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r29,292(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// bge cr6,0x82901c04
	if (!cr6.lt) goto loc_82901C04;
	// mulli r10,r10,112
	ctx.r10.s64 = ctx.r10.s64 * 112;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,112
	ctx.r5.s64 = 112;
	// bl 0x831ce980
	ctx.lr = 0x82901BB0;
	sub_831CE980(ctx, base);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82901bc4
	if (cr6.eq) goto loc_82901BC4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82901be4
	goto loc_82901BE4;
loc_82901BC4:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82901bdc
	if (cr6.lt) goto loc_82901BDC;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82901be0
	if (cr6.lt) goto loc_82901BE0;
loc_82901BDC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82901BE0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82901BE4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82901c04
	if (cr6.eq) goto loc_82901C04;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82901c04
	if (!cr6.eq) goto loc_82901C04;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,4808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4808, ctx.r11.u32);
loc_82901C04:
	// lwz r11,4460(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4460);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82901c54
	if (!cr6.eq) goto loc_82901C54;
	// lwz r11,5356(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5356);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82901c54
	if (!cr6.eq) goto loc_82901C54;
	// lwz r11,4788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4788);
	// cmpwi cr6,r11,72
	cr6.compare<int32_t>(ctx.r11.s32, 72, xer);
	// bge cr6,0x82901c54
	if (!cr6.lt) goto loc_82901C54;
	// lbz r11,4832(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4832);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82901c54
	if (cr6.eq) goto loc_82901C54;
	// lbz r11,4516(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4516);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82901c50
	if (!cr6.eq) goto loc_82901C50;
	// lbz r11,4517(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4517);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82901c54
	if (cr6.eq) goto loc_82901C54;
loc_82901C50:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82901C54:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82901cc8
	if (cr6.eq) goto loc_82901CC8;
	// li r4,72
	ctx.r4.s64 = 72;
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82900e48
	ctx.lr = 0x82901C70;
	sub_82900E48(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82901cc8
	if (!cr6.gt) goto loc_82901CC8;
loc_82901C80:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82904e00
	ctx.lr = 0x82901C8C;
	sub_82904E00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,72
	cr6.compare<int32_t>(ctx.r3.s32, 72, xer);
	// bge cr6,0x82901cb8
	if (!cr6.lt) goto loc_82901CB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82903190
	ctx.lr = 0x82901CA0;
	sub_82903190(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82901cb8
	if (cr6.eq) goto loc_82901CB8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82901CB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82901CB8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x82901c80
	if (cr6.lt) goto loc_82901C80;
loc_82901CC8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82901CD0"))) PPC_WEAK_FUNC(sub_82901CD0);
PPC_FUNC_IMPL(__imp__sub_82901CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82901CD8;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82901CF0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82903190
	ctx.lr = 0x82901CFC;
	sub_82903190(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82901d1c
	if (cr6.eq) goto loc_82901D1C;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// neg r9,r11
	ctx.r9.s64 = -ctx.r11.s64;
	// andc r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// stbx r7,r30,r10
	PPC_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r7.u8);
loc_82901D1C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,72
	cr6.compare<uint32_t>(ctx.r30.u32, 72, xer);
	// blt cr6,0x82901cf0
	if (cr6.lt) goto loc_82901CF0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82901d5c
	if (!cr6.gt) goto loc_82901D5C;
loc_82901D38:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82904e00
	ctx.lr = 0x82901D44;
	sub_82904E00(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// stbx r25,r3,r11
	PPC_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r25.u8);
	// blt cr6,0x82901d38
	if (cr6.lt) goto loc_82901D38;
loc_82901D5C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r26,72
	ctx.r26.s64 = 72;
	// lfs f31,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
loc_82901D70:
	// lbzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82901e74
	if (cr6.eq) goto loc_82901E74;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82903190
	ctx.lr = 0x82901D88;
	sub_82903190(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82901e74
	if (cr6.eq) goto loc_82901E74;
	// lwz r11,4792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4792);
	// lwz r29,8(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmpwi cr6,r11,72
	cr6.compare<int32_t>(ctx.r11.s32, 72, xer);
	// bge cr6,0x82901dd0
	if (!cr6.lt) goto loc_82901DD0;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// beq cr6,0x82901db4
	if (cr6.eq) goto loc_82901DB4;
	// cmpwi cr6,r28,72
	cr6.compare<int32_t>(ctx.r28.s32, 72, xer);
	// blt cr6,0x82901dbc
	if (cr6.lt) goto loc_82901DBC;
loc_82901DB4:
	// stfs f31,4800(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4800, temp.u32);
	// stw r26,4792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4792, ctx.r26.u32);
loc_82901DBC:
	// lwz r11,1692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1692);
	// addi r3,r31,1692
	ctx.r3.s64 = ctx.r31.s64 + 1692;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82901DD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82901DD0:
	// lwz r11,4788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4788);
	// cmpwi cr6,r11,72
	cr6.compare<int32_t>(ctx.r11.s32, 72, xer);
	// bge cr6,0x82901e5c
	if (!cr6.lt) goto loc_82901E5C;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// beq cr6,0x82901dec
	if (cr6.eq) goto loc_82901DEC;
	// cmpwi cr6,r28,72
	cr6.compare<int32_t>(ctx.r28.s32, 72, xer);
	// blt cr6,0x82901e5c
	if (cr6.lt) goto loc_82901E5C;
loc_82901DEC:
	// stfs f31,4796(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4796, temp.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// stw r26,4788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4788, ctx.r26.u32);
	// beq cr6,0x82901e44
	if (cr6.eq) goto loc_82901E44;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// bl 0x82da1d10
	ctx.lr = 0x82901E08;
	sub_82DA1D10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82901e2c
	if (cr6.eq) goto loc_82901E2C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a182e0
	ctx.lr = 0x82901E1C;
	sub_82A182E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82901e2c
	if (cr6.eq) goto loc_82901E2C;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82901E2C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82901e44
	if (cr6.eq) goto loc_82901E44;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a182f0
	ctx.lr = 0x82901E44;
	sub_82A182F0(ctx, base);
loc_82901E44:
	// stfs f31,4812(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4812, temp.u32);
	// stb r25,4832(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4832, ctx.r25.u8);
	// stfs f31,4816(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4816, temp.u32);
	// stfs f31,4820(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4820, temp.u32);
	// stfs f31,4824(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4824, temp.u32);
	// stfs f31,4828(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4828, temp.u32);
loc_82901E5C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82901E70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r25,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r25.u32);
loc_82901E74:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r28,72
	cr6.compare<uint32_t>(ctx.r28.u32, 72, xer);
	// blt cr6,0x82901d70
	if (cr6.lt) goto loc_82901D70;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82901E90"))) PPC_WEAK_FUNC(sub_82901E90);
PPC_FUNC_IMPL(__imp__sub_82901E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82901E98;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// bl 0x82903190
	ctx.lr = 0x82901EBC;
	sub_82903190(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82901ed0
	if (!cr6.eq) goto loc_82901ED0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82901ED0:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82901220
	ctx.lr = 0x82901EE8;
	sub_82901220(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82901f3c
	if (cr6.eq) goto loc_82901F3C;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82901f3c
	if (cr6.eq) goto loc_82901F3C;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82901f2c
	if (cr6.eq) goto loc_82901F2C;
	// cmpwi cr6,r31,26
	cr6.compare<int32_t>(ctx.r31.s32, 26, xer);
	// beq cr6,0x82901f3c
	if (cr6.eq) goto loc_82901F3C;
	// lwz r11,4792(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4792);
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// beq cr6,0x82901f3c
	if (cr6.eq) goto loc_82901F3C;
	// stw r31,4792(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4792, ctx.r31.u32);
	// b 0x82901f3c
	goto loc_82901F3C;
loc_82901F2C:
	// lwz r11,4788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4788);
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// beq cr6,0x82901f3c
	if (cr6.eq) goto loc_82901F3C;
	// stw r31,4788(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4788, ctx.r31.u32);
loc_82901F3C:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82901fb0
	if (cr6.eq) goto loc_82901FB0;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82901f8c
	if (cr6.eq) goto loc_82901F8C;
	// ble cr6,0x82901fb0
	if (!cr6.gt) goto loc_82901FB0;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bgt cr6,0x82901fb0
	if (cr6.gt) goto loc_82901FB0;
	// cmpwi cr6,r26,9
	cr6.compare<int32_t>(ctx.r26.s32, 9, xer);
	// beq cr6,0x82901fb0
	if (cr6.eq) goto loc_82901FB0;
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82901fb0
	if (!cr6.eq) goto loc_82901FB0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r26,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r26.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82901F8C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82901FA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,8(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82900e48
	ctx.lr = 0x82901FB0;
	sub_82900E48(ctx, base);
loc_82901FB0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82901FBC"))) PPC_WEAK_FUNC(sub_82901FBC);
PPC_FUNC_IMPL(__imp__sub_82901FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82901FC0"))) PPC_WEAK_FUNC(sub_82901FC0);
PPC_FUNC_IMPL(__imp__sub_82901FC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82901FC8;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82903190
	ctx.lr = 0x82901FE4;
	sub_82903190(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82901ff8
	if (!cr6.eq) goto loc_82901FF8;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82901FF8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r25,0
	ctx.r25.s64 = 0;
	// bl 0x82a30088
	ctx.lr = 0x82902004;
	sub_82A30088(ctx, base);
	// lwz r30,44(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x82902014
	if (!cr6.eq) goto loc_82902014;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82902014:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a30048
	ctx.lr = 0x8290201C;
	sub_82A30048(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x82902034
	if (cr6.eq) goto loc_82902034;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x82902080
	if (cr6.eq) goto loc_82902080;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// bne cr6,0x82902200
	if (!cr6.eq) goto loc_82902200;
loc_82902034:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82901828
	ctx.lr = 0x8290204C;
	sub_82901828(ctx, base);
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82902134
	if (!cr6.eq) goto loc_82902134;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r31,4808
	ctx.r10.s64 = ctx.r31.s64 + 4808;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82902068:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82902068
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82902068;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82902080:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82901828
	ctx.lr = 0x82902098;
	sub_82901828(ctx, base);
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x829020cc
	if (!cr6.eq) goto loc_829020CC;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r31,4808
	ctx.r10.s64 = ctx.r31.s64 + 4808;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_829020B4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x829020b4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_829020B4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_829020CC:
	// cmpwi cr6,r30,80
	cr6.compare<int32_t>(ctx.r30.s32, 80, xer);
	// bne cr6,0x82902100
	if (!cr6.eq) goto loc_82902100;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// li r25,1
	ctx.r25.s64 = 1;
	// addi r10,r31,4808
	ctx.r10.s64 = ctx.r31.s64 + 4808;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_829020E8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x829020e8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_829020E8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82902100:
	// cmpwi cr6,r30,82
	cr6.compare<int32_t>(ctx.r30.s32, 82, xer);
	// bne cr6,0x82902200
	if (!cr6.eq) goto loc_82902200;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// li r25,1
	ctx.r25.s64 = 1;
	// addi r10,r31,4808
	ctx.r10.s64 = ctx.r31.s64 + 4808;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8290211C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8290211c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8290211C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82902134:
	// cmpwi cr6,r26,84
	cr6.compare<int32_t>(ctx.r26.s32, 84, xer);
	// bne cr6,0x82902164
	if (!cr6.eq) goto loc_82902164;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r31,4808
	ctx.r10.s64 = ctx.r31.s64 + 4808;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8290214C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8290214c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8290214C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82902164:
	// cmpwi cr6,r30,87
	cr6.compare<int32_t>(ctx.r30.s32, 87, xer);
	// beq cr6,0x82902200
	if (cr6.eq) goto loc_82902200;
	// cmpwi cr6,r30,84
	cr6.compare<int32_t>(ctx.r30.s32, 84, xer);
	// beq cr6,0x82902200
	if (cr6.eq) goto loc_82902200;
	// lbz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 116);
	// lbz r10,4832(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4832);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x829021d4
	if (!cr6.eq) goto loc_829021D4;
	// lfs f0,4820(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4820);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,-11356(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11356);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x829021d4
	if (cr6.gt) goto loc_829021D4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-27732(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27732);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x829021d8
	if (cr6.lt) goto loc_829021D8;
	// lfs f1,4824(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4824);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x825ce9f8
	ctx.lr = 0x829021C0;
	sub_825CE9F8(ctx, base);
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,-7352(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -7352);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x829021d8
	if (!cr6.gt) goto loc_829021D8;
loc_829021D4:
	// li r25,1
	ctx.r25.s64 = 1;
loc_829021D8:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82902200
	if (cr6.eq) goto loc_82902200;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r31,4808
	ctx.r10.s64 = ctx.r31.s64 + 4808;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_829021F4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x829021f4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_829021F4;
loc_82902200:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290220C"))) PPC_WEAK_FUNC(sub_8290220C);
PPC_FUNC_IMPL(__imp__sub_8290220C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82902210"))) PPC_WEAK_FUNC(sub_82902210);
PPC_FUNC_IMPL(__imp__sub_82902210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82902218;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// bl 0x82903190
	ctx.lr = 0x8290223C;
	sub_82903190(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x829028f4
	if (cr6.eq) goto loc_829028F4;
	// lis r25,-31763
	ctx.r25.s64 = -2081619968;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,-3564(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3564);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r31,132(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// lwz r22,292(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x82901098
	ctx.lr = 0x82902274;
	sub_82901098(ctx, base);
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// bl 0x82a22860
	ctx.lr = 0x82902284;
	sub_82A22860(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x829022dc
	if (!cr6.gt) goto loc_829022DC;
loc_8290228C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a236f8
	ctx.lr = 0x82902298;
	sub_82A236F8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x829022c8
	if (cr6.eq) goto loc_829022C8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x829022c8
	if (!cr6.eq) goto loc_829022C8;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x829022c8
	if (!cr6.eq) goto loc_829022C8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stb r23,252(r11)
	PPC_STORE_U8(ctx.r11.u32 + 252, ctx.r23.u8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stb r23,261(r10)
	PPC_STORE_U8(ctx.r10.u32 + 261, ctx.r23.u8);
loc_829022C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bl 0x82a22860
	ctx.lr = 0x829022D4;
	sub_82A22860(ctx, base);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, xer);
	// blt cr6,0x8290228c
	if (cr6.lt) goto loc_8290228C;
loc_829022DC:
	// lwz r11,4460(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4460);
	// li r29,2
	ctx.r29.s64 = 2;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82902358
	if (cr6.eq) goto loc_82902358;
	// lwz r11,5356(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 5356);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x82902358
	if (!cr6.eq) goto loc_82902358;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82902310
	if (!cr6.eq) goto loc_82902310;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82902318
	goto loc_82902318;
loc_82902310:
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82902318:
	// lwz r10,5360(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 5360);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x82902358
	if (!cr6.eq) goto loc_82902358;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r11,260(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 260);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82902358
	if (cr6.eq) goto loc_82902358;
	// lwz r3,-3564(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3564);
	// lwz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// lbz r9,4228(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4228);
	// cmplwi cr6,r9,24
	cr6.compare<uint32_t>(ctx.r9.u32, 24, xer);
	// blt cr6,0x82902354
	if (cr6.lt) goto loc_82902354;
	// lbz r11,4229(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4229);
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// bge cr6,0x8290235c
	if (!cr6.lt) goto loc_8290235C;
loc_82902354:
	// stb r23,260(r10)
	PPC_STORE_U8(ctx.r10.u32 + 260, ctx.r23.u8);
loc_82902358:
	// lwz r3,-3564(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3564);
loc_8290235C:
	// cmpwi cr6,r27,63
	cr6.compare<int32_t>(ctx.r27.s32, 63, xer);
	// bgt cr6,0x829027c8
	if (cr6.gt) goto loc_829027C8;
	// beq cr6,0x82902758
	if (cr6.eq) goto loc_82902758;
	// cmpwi cr6,r27,35
	cr6.compare<int32_t>(ctx.r27.s32, 35, xer);
	// bgt cr6,0x82902530
	if (cr6.gt) goto loc_82902530;
	// beq cr6,0x82902510
	if (cr6.eq) goto loc_82902510;
	// cmpwi cr6,r27,27
	cr6.compare<int32_t>(ctx.r27.s32, 27, xer);
	// beq cr6,0x82902410
	if (cr6.eq) goto loc_82902410;
	// cmpwi cr6,r27,28
	cr6.compare<int32_t>(ctx.r27.s32, 28, xer);
	// bne cr6,0x829028f4
	if (!cr6.eq) goto loc_829028F4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x829028f4
	if (cr6.eq) goto loc_829028F4;
	// lwz r9,88(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 88);
	// li r7,54
	ctx.r7.s64 = 54;
	// lwz r8,80(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 80);
	// addi r11,r26,80
	ctx.r11.s64 = ctx.r26.s64 + 80;
	// lwz r6,84(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 84);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// stfs f13,24(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// stfs f0,32(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r29,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r29.u32);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lfs f11,80(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f10,84(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,4(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f9,88(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,8(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f1,2444(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 2444);
	ctx.f1.f64 = double(temp.f32);
	// lwz r6,24(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r4,20(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x827cd2e8
	ctx.lr = 0x82902400;
	sub_827CD2E8(ctx, base);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82902410:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829028f4
	if (cr6.eq) goto loc_829028F4;
	// lfs f0,56(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r9,64(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	// lwz r11,60(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,68(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 68);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x825c2950
	ctx.lr = 0x82902444;
	sub_825C2950(ctx, base);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stfs f1,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r7,68(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 68);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// lwz r6,60(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// lwz r4,64(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f0,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// fsqrts f11,f12
	ctx.f11.f64 = double(float(sqrt(ctx.f12.f64)));
	// stfs f11,8(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lbz r3,72(r26)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r26.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8290249c
	if (cr6.eq) goto loc_8290249C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f0,76(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// b 0x829024ac
	goto loc_829024AC;
loc_8290249C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f0,20056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
loc_829024AC:
	// lwz r11,80(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,84(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r9,88(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 88);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x825c2950
	ctx.lr = 0x829024CC;
	sub_825C2950(ctx, base);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stfs f1,16(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + 16, temp.u32);
	// lwz r7,80(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 80);
	// lwz r6,88(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 88);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,84(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// fmadds f12,f0,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fsqrts f11,f12
	ctx.f11.f64 = double(float(sqrt(ctx.f12.f64)));
	// stfs f11,20(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82902510:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829028f4
	if (cr6.eq) goto loc_829028F4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,252(r11)
	PPC_STORE_U8(ctx.r11.u32 + 252, ctx.r10.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82902530:
	// cmpwi cr6,r27,58
	cr6.compare<int32_t>(ctx.r27.s32, 58, xer);
	// bne cr6,0x829028f4
	if (!cr6.eq) goto loc_829028F4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829028f4
	if (cr6.eq) goto loc_829028F4;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x8290255c
	if (!cr6.lt) goto loc_8290255C;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// b 0x82902584
	goto loc_82902584;
loc_8290255C:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x8290256c
	if (!cr6.lt) goto loc_8290256C;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// b 0x82902584
	goto loc_82902584;
loc_8290256C:
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
loc_82902584:
	// lwz r11,4788(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4788);
	// cmpwi cr6,r11,72
	cr6.compare<int32_t>(ctx.r11.s32, 72, xer);
	// bge cr6,0x829025b8
	if (!cr6.lt) goto loc_829025B8;
	// lbz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 240);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829025a0
	if (cr6.eq) goto loc_829025A0;
	// stb r23,240(r31)
	PPC_STORE_U8(ctx.r31.u32 + 240, ctx.r23.u8);
loc_829025A0:
	// lbz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829028f4
	if (cr6.eq) goto loc_829028F4;
	// stb r23,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r23.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_829025B8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8290b958
	ctx.lr = 0x829025C0;
	sub_8290B958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829025a0
	if (cr6.eq) goto loc_829025A0;
	// cmpwi cr6,r21,42
	cr6.compare<int32_t>(ctx.r21.s32, 42, xer);
	// beq cr6,0x829025a0
	if (cr6.eq) goto loc_829025A0;
	// lbz r11,52(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 52);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290271c
	if (cr6.eq) goto loc_8290271C;
	// stb r27,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r27.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r23,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r23.u8);
	// lwz r11,5356(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 5356);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r29,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r29.u32);
	// lwz r3,-3564(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x82902604;
	sub_82A0C710(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lbz r4,252(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x82a40900
	ctx.lr = 0x82902614;
	sub_82A40900(ctx, base);
	// fsqrts f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f1.f64)));
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8290264c
	if (cr6.lt) goto loc_8290264C;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// bge cr6,0x8290264c
	if (!cr6.lt) goto loc_8290264C;
	// lis r10,-17874
	ctx.r10.s64 = -1171390464;
	// ori r9,r10,35747
	ctx.r9.u64 = ctx.r10.u64 | 35747;
	// mulhwu r8,r11,r9
	ctx.r8.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r7,r8,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r6,r7,11
	ctx.r6.s64 = ctx.r7.s64 * 11;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// b 0x82902650
	goto loc_82902650;
loc_8290264C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82902650:
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,16668
	ctx.r3.s64 = ctx.r10.s64 + 16668;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// bl 0x830eab70
	ctx.lr = 0x82902684;
	sub_830EAB70(ctx, base);
	// lwz r11,-3564(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3564);
	// lwz r4,20(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r3,192(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// bl 0x825d83f0
	ctx.lr = 0x82902694;
	sub_825D83F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x825d8390
	ctx.lr = 0x8290269C;
	sub_825D8390(ctx, base);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, xer);
	// bne cr6,0x8290272c
	if (!cr6.eq) goto loc_8290272C;
	// lwz r11,5356(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 5356);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x8290272c
	if (cr6.gt) goto loc_8290272C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x829026f4
	if (cr6.eq) goto loc_829026F4;
	// bdz 0x8290272c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8290272C;
	// bdz 0x829026e0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_829026E0;
	// bdnz 0x82902708
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82902708;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,480(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 480);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,480(r10)
	PPC_STORE_U32(ctx.r10.u32 + 480, ctx.r9.u32);
	// b 0x8290272c
	goto loc_8290272C;
loc_829026E0:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,584(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 584);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,584(r10)
	PPC_STORE_U32(ctx.r10.u32 + 584, ctx.r9.u32);
	// b 0x8290272c
	goto loc_8290272C;
loc_829026F4:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,616(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 616);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,616(r10)
	PPC_STORE_U32(ctx.r10.u32 + 616, ctx.r9.u32);
	// b 0x8290272c
	goto loc_8290272C;
loc_82902708:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,656(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 656);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,656(r10)
	PPC_STORE_U32(ctx.r10.u32 + 656, ctx.r9.u32);
	// b 0x8290272c
	goto loc_8290272C;
loc_8290271C:
	// lbz r11,53(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 53);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290272c
	if (cr6.eq) goto loc_8290272C;
	// stb r23,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r23.u8);
loc_8290272C:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// lbz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 112);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x829028f4
	if (!cr6.eq) goto loc_829028F4;
	// lbz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 240);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x829028f4
	if (!cr6.eq) goto loc_829028F4;
	// stb r27,240(r31)
	PPC_STORE_U8(ctx.r31.u32 + 240, ctx.r27.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82902758:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829028f4
	if (cr6.eq) goto loc_829028F4;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,20(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r30,192(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// bl 0x82a0c760
	ctx.lr = 0x82902774;
	sub_82A0C760(ctx, base);
	// lwz r10,4788(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4788);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,72
	cr6.compare<int32_t>(ctx.r10.s32, 72, xer);
	// blt cr6,0x829028f4
	if (cr6.lt) goto loc_829028F4;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,1024
	ctx.r9.s64 = 67108864;
	// stb r10,240(r31)
	PPC_STORE_U8(ctx.r31.u32 + 240, ctx.r10.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r7,r8,0,0,7
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFF000000;
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// addic r5,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// subfe r4,r5,r6
	temp.u8 = (~ctx.r5.u32 + ctx.r6.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r4,249(r31)
	PPC_STORE_U8(ctx.r31.u32 + 249, ctx.r4.u8);
	// lwz r4,20(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// bl 0x825d83f0
	ctx.lr = 0x829027B4;
	sub_825D83F0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r3,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r3.u32);
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_829027C8:
	// cmpwi cr6,r27,64
	cr6.compare<int32_t>(ctx.r27.s32, 64, xer);
	// beq cr6,0x82902894
	if (cr6.eq) goto loc_82902894;
	// cmpwi cr6,r27,69
	cr6.compare<int32_t>(ctx.r27.s32, 69, xer);
	// beq cr6,0x8290282c
	if (cr6.eq) goto loc_8290282C;
	// cmpwi cr6,r27,70
	cr6.compare<int32_t>(ctx.r27.s32, 70, xer);
	// bne cr6,0x829028f4
	if (!cr6.eq) goto loc_829028F4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r31,r11,260
	ctx.r31.s64 = ctx.r11.s64 + 260;
	// bl 0x8290b4c8
	ctx.lr = 0x829027F0;
	sub_8290B4C8(ctx, base);
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8290280c
	if (cr6.eq) goto loc_8290280C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8290b4c8
	ctx.lr = 0x82902808;
	sub_8290B4C8(ctx, base);
	// stb r3,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r3.u8);
loc_8290280C:
	// lwz r11,4788(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4788);
	// cmpwi cr6,r11,72
	cr6.compare<int32_t>(ctx.r11.s32, 72, xer);
	// blt cr6,0x829028f4
	if (cr6.lt) goto loc_829028F4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,240(r11)
	PPC_STORE_U8(ctx.r11.u32 + 240, ctx.r10.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_8290282C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8290b4c8
	ctx.lr = 0x82902838;
	sub_8290B4C8(ctx, base);
	// lbz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 260);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x829028f4
	if (cr6.eq) goto loc_829028F4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8290b4c8
	ctx.lr = 0x82902850;
	sub_8290B4C8(ctx, base);
	// stb r3,260(r31)
	PPC_STORE_U8(ctx.r31.u32 + 260, ctx.r3.u8);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8290286c
	if (!cr6.eq) goto loc_8290286C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x82902874
	goto loc_82902874;
loc_8290286C:
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r4,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82902874:
	// lwz r3,-3564(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x8290287C;
	sub_82A0C710(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,44732
	ctx.r10.u64 = ctx.r11.u64 | 44732;
	// lwzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// stw r9,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82902894:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829028f4
	if (cr6.eq) goto loc_829028F4;
	// lwz r11,4788(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4788);
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r30,192(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// cmpwi cr6,r11,72
	cr6.compare<int32_t>(ctx.r11.s32, 72, xer);
	// blt cr6,0x829028f4
	if (cr6.lt) goto loc_829028F4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8290b538
	ctx.lr = 0x829028BC;
	sub_8290B538(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x829028f0
	if (cr6.eq) goto loc_829028F0;
	// stw r29,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r23,248(r31)
	PPC_STORE_U8(ctx.r31.u32 + 248, ctx.r23.u8);
	// stb r11,240(r31)
	PPC_STORE_U8(ctx.r31.u32 + 240, ctx.r11.u8);
	// lwz r4,20(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// bl 0x825d83f0
	ctx.lr = 0x829028E4;
	sub_825D83F0(ctx, base);
	// stw r3,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r3.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_829028F0:
	// stb r11,248(r31)
	PPC_STORE_U8(ctx.r31.u32 + 248, ctx.r11.u8);
loc_829028F4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829028FC"))) PPC_WEAK_FUNC(sub_829028FC);
PPC_FUNC_IMPL(__imp__sub_829028FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82902900"))) PPC_WEAK_FUNC(sub_82902900);
PPC_FUNC_IMPL(__imp__sub_82902900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82902908;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31763
	ctx.r29.s64 = -2081619968;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r25,132(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// lwz r28,292(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x82903190
	ctx.lr = 0x82902944;
	sub_82903190(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82902e28
	if (cr6.eq) goto loc_82902E28;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x829029e0
	if (!cr6.eq) goto loc_829029E0;
	// lwz r3,-3564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// lwz r4,20(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// bl 0x82a0c7b0
	ctx.lr = 0x82902968;
	sub_82A0C7B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x82a311f0
	ctx.lr = 0x82902974;
	sub_82A311F0(ctx, base);
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r10,r11,5164
	ctx.r10.s64 = ctx.r11.s64 + 5164;
	// lbz r11,5164(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5164);
	// cmplwi cr6,r11,248
	cr6.compare<uint32_t>(ctx.r11.u32, 248, xer);
	// bge cr6,0x829029e0
	if (!cr6.lt) goto loc_829029E0;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x829029e0
	if (cr6.eq) goto loc_829029E0;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bne cr6,0x829029e0
	if (!cr6.eq) goto loc_829029E0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,2
	ctx.r10.s64 = 2;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// bne cr6,0x829029e0
	if (!cr6.eq) goto loc_829029E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829029D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,8(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82900e48
	ctx.lr = 0x829029E0;
	sub_82900E48(ctx, base);
loc_829029E0:
	// cmpwi cr6,r26,27
	cr6.compare<int32_t>(ctx.r26.s32, 27, xer);
	// bne cr6,0x82902aa8
	if (!cr6.eq) goto loc_82902AA8;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82902aa8
	if (cr6.eq) goto loc_82902AA8;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82902aa8
	if (!cr6.eq) goto loc_82902AA8;
	// lbz r11,4516(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 4516);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82902a18
	if (!cr6.eq) goto loc_82902A18;
	// lbz r11,4517(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 4517);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82902aa8
	if (cr6.eq) goto loc_82902AA8;
loc_82902A18:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,20(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// bl 0x82a1a960
	ctx.lr = 0x82902A24;
	sub_82A1A960(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82902aa8
	if (cr6.eq) goto loc_82902AA8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8290ae08
	ctx.lr = 0x82902A3C;
	sub_8290AE08(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lfs f13,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f0,16572(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16572);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f31,f13
	cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// bge cr6,0x82902a64
	if (!cr6.lt) goto loc_82902A64;
	// fadds f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// b 0x82902a70
	goto loc_82902A70;
loc_82902A64:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x82902a70
	if (cr6.lt) goto loc_82902A70;
	// fsubs f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
loc_82902A70:
	// stfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f2,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825ca978
	ctx.lr = 0x82902A8C;
	sub_825CA978(ctx, base);
	// stfs f31,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,64(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,68(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
loc_82902AA8:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// lbz r7,0(r20)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r20.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82900f48
	ctx.lr = 0x82902AC0;
	sub_82900F48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82902e28
	if (cr6.eq) goto loc_82902E28;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r22,0
	ctx.r22.s64 = 0;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x82902c88
	if (!cr6.eq) goto loc_82902C88;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82902be8
	if (!cr6.eq) goto loc_82902BE8;
	// lwz r3,-3564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// lwz r4,20(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// bl 0x82a0c7b0
	ctx.lr = 0x82902AF4;
	sub_82A0C7B0(ctx, base);
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,20(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c760
	ctx.lr = 0x82902B08;
	sub_82A0C760(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82a3cf30
	ctx.lr = 0x82902B18;
	sub_82A3CF30(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82902c88
	if (!cr6.eq) goto loc_82902C88;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82902c88
	if (!cr6.eq) goto loc_82902C88;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82a3d0a0
	ctx.lr = 0x82902B40;
	sub_82A3D0A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82902b60
	if (cr6.eq) goto loc_82902B60;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lis r10,12
	ctx.r10.s64 = 786432;
	// rlwinm r9,r11,0,8,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF0000;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// beq cr6,0x82902bd8
	if (cr6.eq) goto loc_82902BD8;
loc_82902B60:
	// lhz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82902bd8
	if (cr6.eq) goto loc_82902BD8;
	// lhz r10,18(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 18);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82902bd8
	if (cr6.gt) goto loc_82902BD8;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82a3d2d0
	ctx.lr = 0x82902B84;
	sub_82A3D2D0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82902bd4
	if (!cr6.eq) goto loc_82902BD4;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82a3d2a8
	ctx.lr = 0x82902B9C;
	sub_82A3D2A8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82902bd4
	if (!cr6.eq) goto loc_82902BD4;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82a3d0a0
	ctx.lr = 0x82902BB4;
	sub_82A3D0A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82902bd4
	if (!cr6.eq) goto loc_82902BD4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,8960
	ctx.r10.s64 = 587202560;
	// rlwinm r9,r11,0,0,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bne cr6,0x82902bd8
	if (!cr6.eq) goto loc_82902BD8;
loc_82902BD4:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82902BD8:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82902c88
	if (!cr6.eq) goto loc_82902C88;
	// b 0x82902c60
	goto loc_82902C60;
loc_82902BE8:
	// lwz r11,4788(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4788);
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, xer);
	// bne cr6,0x82902c88
	if (!cr6.eq) goto loc_82902C88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a23768
	ctx.lr = 0x82902C04;
	sub_82A23768(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,20(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82a2a558
	ctx.lr = 0x82902C14;
	sub_82A2A558(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x82902c88
	if (cr6.eq) goto loc_82902C88;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bne cr6,0x82902c48
	if (!cr6.eq) goto loc_82902C48;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82902c4c
	if (cr6.eq) goto loc_82902C4C;
loc_82902C48:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82902C4C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82902c88
	if (cr6.eq) goto loc_82902C88;
loc_82902C60:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82902C74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r22,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r22.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r5,8(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// bl 0x82900e48
	ctx.lr = 0x82902C88;
	sub_82900E48(ctx, base);
loc_82902C88:
	// lwz r11,4788(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4788);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r28,24(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,-72
	ctx.r11.s64 = ctx.r11.s64 + -72;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r6,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x82907e98
	ctx.lr = 0x82902CAC;
	sub_82907E98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,12
	cr6.compare<int32_t>(ctx.r26.s32, 12, xer);
	// bne cr6,0x82902cdc
	if (!cr6.eq) goto loc_82902CDC;
	// lbz r11,32(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 32);
	// cmplwi cr6,r11,248
	cr6.compare<uint32_t>(ctx.r11.u32, 248, xer);
	// bge cr6,0x82902cdc
	if (!cr6.lt) goto loc_82902CDC;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82902cdc
	if (cr6.eq) goto loc_82902CDC;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,44
	cr6.compare<uint32_t>(ctx.r11.u32, 44, xer);
	// beq cr6,0x82902e28
	if (cr6.eq) goto loc_82902E28;
loc_82902CDC:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x82902d08
	if (!cr6.eq) goto loc_82902D08;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82902d28
	if (cr6.eq) goto loc_82902D28;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82902d28
	if (cr6.eq) goto loc_82902D28;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x82902d28
	goto loc_82902D28;
loc_82902D08:
	// cmpwi cr6,r30,55
	cr6.compare<int32_t>(ctx.r30.s32, 55, xer);
	// bne cr6,0x82902d18
	if (!cr6.eq) goto loc_82902D18;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x82902d28
	goto loc_82902D28;
loc_82902D18:
	// addi r10,r30,-84
	ctx.r10.s64 = ctx.r30.s64 + -84;
	// subfic r10,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
loc_82902D28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82902d5c
	if (cr6.eq) goto loc_82902D5C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a311f0
	ctx.lr = 0x82902D40;
	sub_82A311F0(ctx, base);
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// lbzx r11,r11,r21
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r21.u32);
	// cmplwi cr6,r11,248
	cr6.compare<uint32_t>(ctx.r11.u32, 248, xer);
	// bge cr6,0x82902d5c
	if (!cr6.lt) goto loc_82902D5C;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82902e0c
	if (!cr6.eq) goto loc_82902E0C;
loc_82902D5C:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82901fc0
	ctx.lr = 0x82902D70;
	sub_82901FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82902d8c
	if (cr6.eq) goto loc_82902D8C;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82902d8c
	if (cr6.eq) goto loc_82902D8C;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82902D8C:
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82901e90
	ctx.lr = 0x82902DA8;
	sub_82901E90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82902dc8
	if (cr6.eq) goto loc_82902DC8;
	// cmpwi cr6,r26,25
	cr6.compare<int32_t>(ctx.r26.s32, 25, xer);
	// bne cr6,0x82902dc8
	if (!cr6.eq) goto loc_82902DC8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r20)
	PPC_STORE_U8(ctx.r20.u32 + 0, ctx.r11.u8);
loc_82902DC8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82902e0c
	if (!cr6.eq) goto loc_82902E0C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// beq cr6,0x82902e0c
	if (cr6.eq) goto loc_82902E0C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82902e0c
	if (!cr6.eq) goto loc_82902E0C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82902DFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,8(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82900e48
	ctx.lr = 0x82902E0C;
	sub_82900E48(ctx, base);
loc_82902E0C:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82902210
	ctx.lr = 0x82902E28;
	sub_82902210(ctx, base);
loc_82902E28:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82902E34"))) PPC_WEAK_FUNC(sub_82902E34);
PPC_FUNC_IMPL(__imp__sub_82902E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82902E38"))) PPC_WEAK_FUNC(sub_82902E38);
PPC_FUNC_IMPL(__imp__sub_82902E38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82902E40;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82902e70
	if (cr6.lt) goto loc_82902E70;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x82902e74
	if (cr6.lt) goto loc_82902E74;
loc_82902E70:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_82902E74:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82902f48
	if (cr6.eq) goto loc_82902F48;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82902e90
	if (!cr6.lt) goto loc_82902E90;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// b 0x82902eb8
	goto loc_82902EB8;
loc_82902E90:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x82902ea0
	if (!cr6.lt) goto loc_82902EA0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// b 0x82902eb8
	goto loc_82902EB8;
loc_82902EA0:
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
loc_82902EB8:
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x82902EC4;
	sub_82A0C710(ctx, base);
	// lwz r10,-3564(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r11,1380(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1380);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lwz r10,292(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// blt cr6,0x82902ee4
	if (cr6.lt) goto loc_82902EE4;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82902ee8
	if (cr6.lt) goto loc_82902EE8;
loc_82902EE4:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82902EE8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82902f48
	if (cr6.eq) goto loc_82902F48;
	// lwz r11,4460(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4460);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82902f0c
	if (!cr6.eq) goto loc_82902F0C;
	// lbz r11,253(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 253);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82902f48
	if (!cr6.eq) goto loc_82902F48;
loc_82902F0C:
	// li r4,31
	ctx.r4.s64 = 31;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82903190
	ctx.lr = 0x82902F18;
	sub_82903190(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82902f48
	if (cr6.eq) goto loc_82902F48;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82902F30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r7,31
	ctx.r7.s64 = 31;
	// li r6,38
	ctx.r6.s64 = 38;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82901220
	ctx.lr = 0x82902F48;
	sub_82901220(ctx, base);
loc_82902F48:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82902f9c
	if (!cr6.gt) goto loc_82902F9C;
loc_82902F5C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82904e00
	ctx.lr = 0x82902F68;
	sub_82904E00(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,72
	cr6.compare<int32_t>(ctx.r3.s32, 72, xer);
	// bge cr6,0x82902f8c
	if (!cr6.lt) goto loc_82902F8C;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82902900
	ctx.lr = 0x82902F8C;
	sub_82902900(ctx, base);
loc_82902F8C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x82902f5c
	if (cr6.lt) goto loc_82902F5C;
loc_82902F9C:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82902fe4
	if (cr6.eq) goto loc_82902FE4;
	// lwz r4,4788(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4788);
	// cmpwi cr6,r4,72
	cr6.compare<int32_t>(ctx.r4.s32, 72, xer);
	// bge cr6,0x82902fe4
	if (!cr6.lt) goto loc_82902FE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82903190
	ctx.lr = 0x82902FBC;
	sub_82903190(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82902FD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r26,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r4,4788(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4788);
	// bl 0x82900e48
	ctx.lr = 0x82902FE4;
	sub_82900E48(ctx, base);
loc_82902FE4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82902FEC"))) PPC_WEAK_FUNC(sub_82902FEC);
PPC_FUNC_IMPL(__imp__sub_82902FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82902FF0"))) PPC_WEAK_FUNC(sub_82902FF0);
PPC_FUNC_IMPL(__imp__sub_82902FF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82902FF8;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r8,20(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// stw r26,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r26.u32);
	// lfs f13,20056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20056);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,24(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f0,4(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfs f0,8(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// lwz r6,24(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// stfs f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lwz r5,36(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lwz r11,4808(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4808);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,4792(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4792);
	// stw r11,4808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4808, ctx.r11.u32);
	// bl 0x82903180
	ctx.lr = 0x8290306C;
	sub_82903180(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,4788(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4788);
	// bl 0x82903180
	ctx.lr = 0x82903078;
	sub_82903180(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,24(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// addi r4,r10,16616
	ctx.r4.s64 = ctx.r10.s64 + 16616;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x83102db0
	ctx.lr = 0x82903090;
	sub_83102DB0(ctx, base);
	// lis r9,-31763
	ctx.r9.s64 = -2081619968;
	// lwz r11,-3564(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3564);
	// lwz r29,432(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x829030e0
	if (cr6.eq) goto loc_829030E0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da1d10
	ctx.lr = 0x829030AC;
	sub_82DA1D10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829030e0
	if (cr6.eq) goto loc_829030E0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a182e0
	ctx.lr = 0x829030C0;
	sub_82A182E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829030e0
	if (cr6.eq) goto loc_829030E0;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x829030e0
	if (cr6.eq) goto loc_829030E0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a182f0
	ctx.lr = 0x829030E0;
	sub_82A182F0(ctx, base);
loc_829030E0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82907da8
	ctx.lr = 0x829030EC;
	sub_82907DA8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82901b68
	ctx.lr = 0x829030FC;
	sub_82901B68(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,4808(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4808);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4788(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4788);
	// bl 0x829074c8
	ctx.lr = 0x82903114;
	sub_829074C8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82901cd0
	ctx.lr = 0x82903124;
	sub_82901CD0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82902e38
	ctx.lr = 0x82903138;
	sub_82902E38(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82903140"))) PPC_WEAK_FUNC(sub_82903140);
PPC_FUNC_IMPL(__imp__sub_82903140) {
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
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stb r9,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r9.u8);
	// stw r8,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82903180"))) PPC_WEAK_FUNC(sub_82903180);
PPC_FUNC_IMPL(__imp__sub_82903180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,16860
	ctx.r3.s64 = ctx.r11.s64 + 16860;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290318C"))) PPC_WEAK_FUNC(sub_8290318C);
PPC_FUNC_IMPL(__imp__sub_8290318C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82903190"))) PPC_WEAK_FUNC(sub_82903190);
PPC_FUNC_IMPL(__imp__sub_82903190) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,72
	cr6.compare<int32_t>(ctx.r4.s32, 72, xer);
	// bge cr6,0x829031a8
	if (!cr6.lt) goto loc_829031A8;
	// addi r11,r4,1125
	ctx.r11.s64 = ctx.r4.s64 + 1125;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_829031A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829031B0"))) PPC_WEAK_FUNC(sub_829031B0);
PPC_FUNC_IMPL(__imp__sub_829031B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x829031B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r10,r11,16456
	ctx.r10.s64 = ctx.r11.s64 + 16456;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x829031F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// li r6,36
	ctx.r6.s64 = 36;
	// stw r31,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r31.u32);
	// addi r5,r7,17948
	ctx.r5.s64 = ctx.r7.s64 + 17948;
	// stb r30,20(r29)
	PPC_STORE_U8(ctx.r29.u32 + 20, ctx.r30.u8);
	// stw r6,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r6.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// bl 0x8290c000
	ctx.lr = 0x82903214;
	sub_8290C000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82903220"))) PPC_WEAK_FUNC(sub_82903220);
PPC_FUNC_IMPL(__imp__sub_82903220) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r9,r10,16456
	ctx.r9.s64 = ctx.r10.s64 + 16456;
	// li r8,14
	ctx.r8.s64 = 14;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82903260;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// li r3,2
	ctx.r3.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r6,18008
	ctx.r4.s64 = ctx.r6.s64 + 18008;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_8290329C"))) PPC_WEAK_FUNC(sub_8290329C);
PPC_FUNC_IMPL(__imp__sub_8290329C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829032A0"))) PPC_WEAK_FUNC(sub_829032A0);
PPC_FUNC_IMPL(__imp__sub_829032A0) {
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
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r10,r11,16456
	ctx.r10.s64 = ctx.r11.s64 + 16456;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x829032E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r31,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r31.u8);
	// addi r6,r8,18068
	ctx.r6.s64 = ctx.r8.s64 + 18068;
	// li r5,36
	ctx.r5.s64 = 36;
	// stw r7,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r7.u32);
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r5,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r5.u32);
	// bl 0x82909df8
	ctx.lr = 0x82903308;
	sub_82909DF8(ctx, base);
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

__attribute__((alias("__imp__sub_82903324"))) PPC_WEAK_FUNC(sub_82903324);
PPC_FUNC_IMPL(__imp__sub_82903324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82903328"))) PPC_WEAK_FUNC(sub_82903328);
PPC_FUNC_IMPL(__imp__sub_82903328) {
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
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r10,r11,16456
	ctx.r10.s64 = ctx.r11.s64 + 16456;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82903368;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r31,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r31.u8);
	// addi r6,r8,18188
	ctx.r6.s64 = ctx.r8.s64 + 18188;
	// li r5,36
	ctx.r5.s64 = 36;
	// stw r7,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r7.u32);
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r5,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r5.u32);
	// bl 0x8290a0f8
	ctx.lr = 0x82903390;
	sub_8290A0F8(ctx, base);
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

__attribute__((alias("__imp__sub_829033AC"))) PPC_WEAK_FUNC(sub_829033AC);
PPC_FUNC_IMPL(__imp__sub_829033AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829033B0"))) PPC_WEAK_FUNC(sub_829033B0);
PPC_FUNC_IMPL(__imp__sub_829033B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x829033B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r9,22
	ctx.r9.s64 = 22;
	// addi r10,r11,16456
	ctx.r10.s64 = ctx.r11.s64 + 16456;
	// li r30,2
	ctx.r30.s64 = 2;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x829033F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r31,20(r29)
	PPC_STORE_U8(ctx.r29.u32 + 20, ctx.r31.u8);
	// addi r5,r6,18248
	ctx.r5.s64 = ctx.r6.s64 + 18248;
	// stb r31,36(r29)
	PPC_STORE_U8(ctx.r29.u32 + 36, ctx.r31.u8);
	// li r4,255
	ctx.r4.s64 = 255;
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// lfs f0,9008(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// stfs f0,28(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 28, temp.u32);
	// stb r11,21(r29)
	PPC_STORE_U8(ctx.r29.u32 + 21, ctx.r11.u8);
	// stfs f0,32(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 32, temp.u32);
	// stb r11,37(r29)
	PPC_STORE_U8(ctx.r29.u32 + 37, ctx.r11.u8);
	// stfs f0,56(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 56, temp.u32);
	// stw r11,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r11.u32);
	// stw r11,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
	// stw r4,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r4.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290344C"))) PPC_WEAK_FUNC(sub_8290344C);
PPC_FUNC_IMPL(__imp__sub_8290344C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82903450"))) PPC_WEAK_FUNC(sub_82903450);
PPC_FUNC_IMPL(__imp__sub_82903450) {
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
	// li r5,89
	ctx.r5.s64 = 89;
	// bl 0x829088a0
	ctx.lr = 0x82903464;
	sub_829088A0(ctx, base);
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

__attribute__((alias("__imp__sub_82903478"))) PPC_WEAK_FUNC(sub_82903478);
PPC_FUNC_IMPL(__imp__sub_82903478) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,16456
	ctx.r10.s64 = ctx.r11.s64 + 16456;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x829034B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// li r7,36
	ctx.r7.s64 = 36;
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
	// addi r6,r8,18308
	ctx.r6.s64 = ctx.r8.s64 + 18308;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r5,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r5.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829034F4"))) PPC_WEAK_FUNC(sub_829034F4);
PPC_FUNC_IMPL(__imp__sub_829034F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829034F8"))) PPC_WEAK_FUNC(sub_829034F8);
PPC_FUNC_IMPL(__imp__sub_829034F8) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,16456
	ctx.r10.s64 = ctx.r11.s64 + 16456;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82903538;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// li r7,36
	ctx.r7.s64 = 36;
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
	// addi r6,r8,18368
	ctx.r6.s64 = ctx.r8.s64 + 18368;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r5,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r5.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82903574"))) PPC_WEAK_FUNC(sub_82903574);
PPC_FUNC_IMPL(__imp__sub_82903574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82903578"))) PPC_WEAK_FUNC(sub_82903578);
PPC_FUNC_IMPL(__imp__sub_82903578) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,16456
	ctx.r10.s64 = ctx.r11.s64 + 16456;
	// li r9,11
	ctx.r9.s64 = 11;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x829035BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
	// addi r5,r7,18428
	ctx.r5.s64 = ctx.r7.s64 + 18428;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r6,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r4,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r4.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829035F8"))) PPC_WEAK_FUNC(sub_829035F8);
PPC_FUNC_IMPL(__imp__sub_829035F8) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,16456
	ctx.r10.s64 = ctx.r11.s64 + 16456;
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8290363C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
	// addi r5,r7,18488
	ctx.r5.s64 = ctx.r7.s64 + 18488;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r6,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r4,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r4.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82903678"))) PPC_WEAK_FUNC(sub_82903678);
PPC_FUNC_IMPL(__imp__sub_82903678) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,16456
	ctx.r10.s64 = ctx.r11.s64 + 16456;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x829036BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// li r6,36
	ctx.r6.s64 = 36;
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
	// addi r5,r7,18728
	ctx.r5.s64 = ctx.r7.s64 + 18728;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r6,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r6.u32);
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r4,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r4.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829036F8"))) PPC_WEAK_FUNC(sub_829036F8);
PPC_FUNC_IMPL(__imp__sub_829036F8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,46
	ctx.r3.s64 = 46;
	// stb r10,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290370C"))) PPC_WEAK_FUNC(sub_8290370C);
PPC_FUNC_IMPL(__imp__sub_8290370C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82903710"))) PPC_WEAK_FUNC(sub_82903710);
PPC_FUNC_IMPL(__imp__sub_82903710) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r3,46
	ctx.r3.s64 = 46;
	// stb r10,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82903724"))) PPC_WEAK_FUNC(sub_82903724);
PPC_FUNC_IMPL(__imp__sub_82903724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82903728"))) PPC_WEAK_FUNC(sub_82903728);
PPC_FUNC_IMPL(__imp__sub_82903728) {
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
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r10,r11,16456
	ctx.r10.s64 = ctx.r11.s64 + 16456;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8290376C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r31,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r31.u8);
	// addi r5,r7,19148
	ctx.r5.s64 = ctx.r7.s64 + 19148;
	// li r4,36
	ctx.r4.s64 = 36;
	// stw r6,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r6.u32);
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r4,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r4.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829037A8"))) PPC_WEAK_FUNC(sub_829037A8);
PPC_FUNC_IMPL(__imp__sub_829037A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,60
	ctx.r3.s64 = 60;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829037B0"))) PPC_WEAK_FUNC(sub_829037B0);
PPC_FUNC_IMPL(__imp__sub_829037B0) {
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
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r10,r11,16456
	ctx.r10.s64 = ctx.r11.s64 + 16456;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x829037F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r31,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r31.u8);
	// addi r5,r7,19268
	ctx.r5.s64 = ctx.r7.s64 + 19268;
	// li r4,36
	ctx.r4.s64 = 36;
	// stw r6,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r6.u32);
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r4,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r4.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82903830"))) PPC_WEAK_FUNC(sub_82903830);
PPC_FUNC_IMPL(__imp__sub_82903830) {
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
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82a38be0
	ctx.lr = 0x8290384C;
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
	// addi r3,r11,19
	ctx.r3.s64 = ctx.r11.s64 + 19;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82903870"))) PPC_WEAK_FUNC(sub_82903870);
PPC_FUNC_IMPL(__imp__sub_82903870) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,16456
	ctx.r10.s64 = ctx.r11.s64 + 16456;
	// li r9,21
	ctx.r9.s64 = 21;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x829038B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
	// addi r5,r7,19388
	ctx.r5.s64 = ctx.r7.s64 + 19388;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r6,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r4,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r4.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829038F0"))) PPC_WEAK_FUNC(sub_829038F0);
PPC_FUNC_IMPL(__imp__sub_829038F0) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,16456
	ctx.r10.s64 = ctx.r11.s64 + 16456;
	// li r9,17
	ctx.r9.s64 = 17;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82903934;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
	// addi r5,r7,19448
	ctx.r5.s64 = ctx.r7.s64 + 19448;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r6,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r4,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r4.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82903970"))) PPC_WEAK_FUNC(sub_82903970);
PPC_FUNC_IMPL(__imp__sub_82903970) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,16456
	ctx.r10.s64 = ctx.r11.s64 + 16456;
	// li r9,18
	ctx.r9.s64 = 18;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x829039B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
	// addi r5,r7,19508
	ctx.r5.s64 = ctx.r7.s64 + 19508;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r6,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r4,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r4.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829039F0"))) PPC_WEAK_FUNC(sub_829039F0);
PPC_FUNC_IMPL(__imp__sub_829039F0) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,16456
	ctx.r10.s64 = ctx.r11.s64 + 16456;
	// li r9,11
	ctx.r9.s64 = 11;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82903A34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
	// addi r5,r7,19568
	ctx.r5.s64 = ctx.r7.s64 + 19568;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r6,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r4,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r4.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82903A70"))) PPC_WEAK_FUNC(sub_82903A70);
PPC_FUNC_IMPL(__imp__sub_82903A70) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,16456
	ctx.r10.s64 = ctx.r11.s64 + 16456;
	// li r9,11
	ctx.r9.s64 = 11;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82903AB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
	// addi r5,r7,19628
	ctx.r5.s64 = ctx.r7.s64 + 19628;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r6,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r4,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r4.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82903AF0"))) PPC_WEAK_FUNC(sub_82903AF0);
PPC_FUNC_IMPL(__imp__sub_82903AF0) {
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
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r10,r11,16456
	ctx.r10.s64 = ctx.r11.s64 + 16456;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82903B34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r31,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r31.u8);
	// addi r6,r7,19688
	ctx.r6.s64 = ctx.r7.s64 + 19688;
	// li r5,36
	ctx.r5.s64 = 36;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// li r4,255
	ctx.r4.s64 = 255;
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// stw r5,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r5.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r4,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r4.u32);
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// stw r11,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82903B80"))) PPC_WEAK_FUNC(sub_82903B80);
PPC_FUNC_IMPL(__imp__sub_82903B80) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,52(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82903BAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82903BD0"))) PPC_WEAK_FUNC(sub_82903BD0);
PPC_FUNC_IMPL(__imp__sub_82903BD0) {
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
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82903C14"))) PPC_WEAK_FUNC(sub_82903C14);
PPC_FUNC_IMPL(__imp__sub_82903C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82903C18"))) PPC_WEAK_FUNC(sub_82903C18);
PPC_FUNC_IMPL(__imp__sub_82903C18) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r9,r10,16456
	ctx.r9.s64 = ctx.r10.s64 + 16456;
	// li r8,13
	ctx.r8.s64 = 13;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82903C58;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// li r3,2
	ctx.r3.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r6,19748
	ctx.r4.s64 = ctx.r6.s64 + 19748;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82903C94"))) PPC_WEAK_FUNC(sub_82903C94);
PPC_FUNC_IMPL(__imp__sub_82903C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82903C98"))) PPC_WEAK_FUNC(sub_82903C98);
PPC_FUNC_IMPL(__imp__sub_82903C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82903CCC"))) PPC_WEAK_FUNC(sub_82903CCC);
PPC_FUNC_IMPL(__imp__sub_82903CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82903CD0"))) PPC_WEAK_FUNC(sub_82903CD0);
PPC_FUNC_IMPL(__imp__sub_82903CD0) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82903CF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_82903D10"))) PPC_WEAK_FUNC(sub_82903D10);
PPC_FUNC_IMPL(__imp__sub_82903D10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82903D18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r11,16456
	ctx.r10.s64 = ctx.r11.s64 + 16456;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82903D50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r31,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r31.u32);
	// addi r5,r7,20108
	ctx.r5.s64 = ctx.r7.s64 + 20108;
	// stb r30,20(r29)
	PPC_STORE_U8(ctx.r29.u32 + 20, ctx.r30.u8);
	// stw r6,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r6.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// stw r31,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r31.u32);
	// stb r31,56(r29)
	PPC_STORE_U8(ctx.r29.u32 + 56, ctx.r31.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82903D80"))) PPC_WEAK_FUNC(sub_82903D80);
PPC_FUNC_IMPL(__imp__sub_82903D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82903D88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r11,16456
	ctx.r10.s64 = ctx.r11.s64 + 16456;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82903DC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r31,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r31.u32);
	// addi r5,r7,20168
	ctx.r5.s64 = ctx.r7.s64 + 20168;
	// stb r30,20(r29)
	PPC_STORE_U8(ctx.r29.u32 + 20, ctx.r30.u8);
	// stw r6,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r6.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// stw r31,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r31.u32);
	// stb r31,56(r29)
	PPC_STORE_U8(ctx.r29.u32 + 56, ctx.r31.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82903DF0"))) PPC_WEAK_FUNC(sub_82903DF0);
PPC_FUNC_IMPL(__imp__sub_82903DF0) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,16456
	ctx.r10.s64 = ctx.r11.s64 + 16456;
	// li r9,11
	ctx.r9.s64 = 11;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82903E34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
	// addi r5,r7,20228
	ctx.r5.s64 = ctx.r7.s64 + 20228;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r6,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r4,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r4.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82903E70"))) PPC_WEAK_FUNC(sub_82903E70);
PPC_FUNC_IMPL(__imp__sub_82903E70) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,16456
	ctx.r10.s64 = ctx.r11.s64 + 16456;
	// li r9,21
	ctx.r9.s64 = 21;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82903EB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
	// addi r5,r7,20288
	ctx.r5.s64 = ctx.r7.s64 + 20288;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r6,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r4,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r4.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82903EF0"))) PPC_WEAK_FUNC(sub_82903EF0);
PPC_FUNC_IMPL(__imp__sub_82903EF0) {
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
	// li r9,14
	ctx.r9.s64 = 14;
	// addi r10,r11,16456
	ctx.r10.s64 = ctx.r11.s64 + 16456;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// li r31,0
	ctx.r31.s64 = 0;
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
	ctx.lr = 0x82903F38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r6,20348
	ctx.r4.s64 = ctx.r6.s64 + 20348;
	// stb r3,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r3.u8);
	// stw r5,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r5.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r4,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r4.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82903F74"))) PPC_WEAK_FUNC(sub_82903F74);
PPC_FUNC_IMPL(__imp__sub_82903F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82903F78"))) PPC_WEAK_FUNC(sub_82903F78);
PPC_FUNC_IMPL(__imp__sub_82903F78) {
	PPC_FUNC_PROLOGUE();
	// li r3,78
	ctx.r3.s64 = 78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82903F80"))) PPC_WEAK_FUNC(sub_82903F80);
PPC_FUNC_IMPL(__imp__sub_82903F80) {
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
	ctx.lr = 0x82903FC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// li r3,2
	ctx.r3.s64 = 2;
	// stb r31,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r6,20528
	ctx.r4.s64 = ctx.r6.s64 + 20528;
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// stw r5,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r5.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r4,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r4.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82904004"))) PPC_WEAK_FUNC(sub_82904004);
PPC_FUNC_IMPL(__imp__sub_82904004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82904008"))) PPC_WEAK_FUNC(sub_82904008);
PPC_FUNC_IMPL(__imp__sub_82904008) {
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
	// li r5,81
	ctx.r5.s64 = 81;
	// bl 0x829088a0
	ctx.lr = 0x8290401C;
	sub_829088A0(ctx, base);
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

__attribute__((alias("__imp__sub_82904030"))) PPC_WEAK_FUNC(sub_82904030);
PPC_FUNC_IMPL(__imp__sub_82904030) {
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
	ctx.lr = 0x82904078;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// stb r31,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r31.u8);
	// li r3,2
	ctx.r3.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r5,20588
	ctx.r11.s64 = ctx.r5.s64 + 20588;
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// lfs f0,9008(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r4,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r4.u32);
	// stfs f0,52(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f0,56(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// stfs f0,60(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stfs f0,80(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 80, temp.u32);
	// stfs f0,84(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 84, temp.u32);
	// stfs f0,88(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 88, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829040D4"))) PPC_WEAK_FUNC(sub_829040D4);
PPC_FUNC_IMPL(__imp__sub_829040D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829040D8"))) PPC_WEAK_FUNC(sub_829040D8);
PPC_FUNC_IMPL(__imp__sub_829040D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
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
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stb r11,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, ctx.r11.u8);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stb r11,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, ctx.r11.u8);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82904138"))) PPC_WEAK_FUNC(sub_82904138);
PPC_FUNC_IMPL(__imp__sub_82904138) {
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
	// li r9,14
	ctx.r9.s64 = 14;
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
	ctx.lr = 0x82904180;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// li r3,2
	ctx.r3.s64 = 2;
	// stb r31,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r6,20648
	ctx.r4.s64 = ctx.r6.s64 + 20648;
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// stw r5,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r5.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r4,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r4.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829041BC"))) PPC_WEAK_FUNC(sub_829041BC);
PPC_FUNC_IMPL(__imp__sub_829041BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829041C0"))) PPC_WEAK_FUNC(sub_829041C0);
PPC_FUNC_IMPL(__imp__sub_829041C0) {
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
	// li r5,78
	ctx.r5.s64 = 78;
	// bl 0x829088a0
	ctx.lr = 0x829041D4;
	sub_829088A0(ctx, base);
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

__attribute__((alias("__imp__sub_829041E8"))) PPC_WEAK_FUNC(sub_829041E8);
PPC_FUNC_IMPL(__imp__sub_829041E8) {
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
	// li r9,13
	ctx.r9.s64 = 13;
	// addi r10,r11,16456
	ctx.r10.s64 = ctx.r11.s64 + 16456;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// li r31,2
	ctx.r31.s64 = 2;
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
	ctx.lr = 0x82904230;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// addi r5,r6,20708
	ctx.r5.s64 = ctx.r6.s64 + 20708;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r4,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r4.u8);
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

__attribute__((alias("__imp__sub_82904270"))) PPC_WEAK_FUNC(sub_82904270);
PPC_FUNC_IMPL(__imp__sub_82904270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
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
	// b 0x82909120
	sub_82909120(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829042A4"))) PPC_WEAK_FUNC(sub_829042A4);
PPC_FUNC_IMPL(__imp__sub_829042A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829042A8"))) PPC_WEAK_FUNC(sub_829042A8);
PPC_FUNC_IMPL(__imp__sub_829042A8) {
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
	// li r9,13
	ctx.r9.s64 = 13;
	// addi r10,r11,16456
	ctx.r10.s64 = ctx.r11.s64 + 16456;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// li r31,2
	ctx.r31.s64 = 2;
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
	ctx.lr = 0x829042F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r6,20768
	ctx.r4.s64 = ctx.r6.s64 + 20768;
	// stb r3,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r3.u8);
	// stw r5,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r5.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r4,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r4.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290432C"))) PPC_WEAK_FUNC(sub_8290432C);
PPC_FUNC_IMPL(__imp__sub_8290432C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82904330"))) PPC_WEAK_FUNC(sub_82904330);
PPC_FUNC_IMPL(__imp__sub_82904330) {
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
	// li r5,83
	ctx.r5.s64 = 83;
	// bl 0x829088a0
	ctx.lr = 0x82904344;
	sub_829088A0(ctx, base);
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

__attribute__((alias("__imp__sub_82904358"))) PPC_WEAK_FUNC(sub_82904358);
PPC_FUNC_IMPL(__imp__sub_82904358) {
	PPC_FUNC_PROLOGUE();
	// li r3,83
	ctx.r3.s64 = 83;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82904360"))) PPC_WEAK_FUNC(sub_82904360);
PPC_FUNC_IMPL(__imp__sub_82904360) {
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
	// li r9,12
	ctx.r9.s64 = 12;
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
	ctx.lr = 0x829043A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// li r3,2
	ctx.r3.s64 = 2;
	// stb r31,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r6,20828
	ctx.r4.s64 = ctx.r6.s64 + 20828;
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// stw r5,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r5.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r4,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r4.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829043E4"))) PPC_WEAK_FUNC(sub_829043E4);
PPC_FUNC_IMPL(__imp__sub_829043E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829043E8"))) PPC_WEAK_FUNC(sub_829043E8);
PPC_FUNC_IMPL(__imp__sub_829043E8) {
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
	// li r5,79
	ctx.r5.s64 = 79;
	// bl 0x829088a0
	ctx.lr = 0x829043FC;
	sub_829088A0(ctx, base);
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

__attribute__((alias("__imp__sub_82904410"))) PPC_WEAK_FUNC(sub_82904410);
PPC_FUNC_IMPL(__imp__sub_82904410) {
	PPC_FUNC_PROLOGUE();
	// li r3,79
	ctx.r3.s64 = 79;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82904418"))) PPC_WEAK_FUNC(sub_82904418);
PPC_FUNC_IMPL(__imp__sub_82904418) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r11,16456
	ctx.r10.s64 = ctx.r11.s64 + 16456;
	// li r8,12
	ctx.r8.s64 = 12;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82904460;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stb r30,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r30.u8);
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r4,r6,20888
	ctx.r4.s64 = ctx.r6.s64 + 20888;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lfs f0,9008(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// addi r11,r31,60
	ctx.r11.s64 = ctx.r31.s64 + 60;
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_829044A0:
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
	// bdnz 0x829044a0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_829044A0;
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

__attribute__((alias("__imp__sub_829044CC"))) PPC_WEAK_FUNC(sub_829044CC);
PPC_FUNC_IMPL(__imp__sub_829044CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829044D0"))) PPC_WEAK_FUNC(sub_829044D0);
PPC_FUNC_IMPL(__imp__sub_829044D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
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
	// stb r11,208(r3)
	PPC_STORE_U8(ctx.r3.u32 + 208, ctx.r11.u8);
	// stb r11,209(r3)
	PPC_STORE_U8(ctx.r3.u32 + 209, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290450C"))) PPC_WEAK_FUNC(sub_8290450C);
PPC_FUNC_IMPL(__imp__sub_8290450C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82904510"))) PPC_WEAK_FUNC(sub_82904510);
PPC_FUNC_IMPL(__imp__sub_82904510) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r9,r10,16456
	ctx.r9.s64 = ctx.r10.s64 + 16456;
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82904550;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// li r3,2
	ctx.r3.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r6,20948
	ctx.r4.s64 = ctx.r6.s64 + 20948;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_8290458C"))) PPC_WEAK_FUNC(sub_8290458C);
PPC_FUNC_IMPL(__imp__sub_8290458C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82904590"))) PPC_WEAK_FUNC(sub_82904590);
PPC_FUNC_IMPL(__imp__sub_82904590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,20048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// li r3,84
	ctx.r3.s64 = 84;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829045A4"))) PPC_WEAK_FUNC(sub_829045A4);
PPC_FUNC_IMPL(__imp__sub_829045A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829045A8"))) PPC_WEAK_FUNC(sub_829045A8);
PPC_FUNC_IMPL(__imp__sub_829045A8) {
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
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a38db8
	ctx.lr = 0x829045C4;
	sub_82A38DB8(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r3,84
	ctx.r3.s64 = 84;
	// lfs f0,16100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16100);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x829045dc
	if (cr6.gt) goto loc_829045DC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_829045DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829045EC"))) PPC_WEAK_FUNC(sub_829045EC);
PPC_FUNC_IMPL(__imp__sub_829045EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829045F0"))) PPC_WEAK_FUNC(sub_829045F0);
PPC_FUNC_IMPL(__imp__sub_829045F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
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
	// stb r11,52(r3)
	PPC_STORE_U8(ctx.r3.u32 + 52, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82904628"))) PPC_WEAK_FUNC(sub_82904628);
PPC_FUNC_IMPL(__imp__sub_82904628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82904630;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r10,r11,16456
	ctx.r10.s64 = ctx.r11.s64 + 16456;
	// li r30,2
	ctx.r30.s64 = 2;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82904668;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// stw r31,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r7,r8,21428
	ctx.r7.s64 = ctx.r8.s64 + 21428;
	// stw r30,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r30.u32);
	// stb r29,20(r28)
	PPC_STORE_U8(ctx.r28.u32 + 20, ctx.r29.u8);
	// stw r7,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r7.u32);
	// stb r31,52(r28)
	PPC_STORE_U8(ctx.r28.u32 + 52, ctx.r31.u8);
	// stb r31,53(r28)
	PPC_STORE_U8(ctx.r28.u32 + 53, ctx.r31.u8);
	// stb r31,54(r28)
	PPC_STORE_U8(ctx.r28.u32 + 54, ctx.r31.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82904698"))) PPC_WEAK_FUNC(sub_82904698);
PPC_FUNC_IMPL(__imp__sub_82904698) {
	PPC_FUNC_PROLOGUE();
	// li r3,39
	ctx.r3.s64 = 39;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829046A0"))) PPC_WEAK_FUNC(sub_829046A0);
PPC_FUNC_IMPL(__imp__sub_829046A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,91
	ctx.r3.s64 = 91;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829046A8"))) PPC_WEAK_FUNC(sub_829046A8);
PPC_FUNC_IMPL(__imp__sub_829046A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
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
	// stb r11,52(r3)
	PPC_STORE_U8(ctx.r3.u32 + 52, ctx.r11.u8);
	// stb r11,53(r3)
	PPC_STORE_U8(ctx.r3.u32 + 53, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829046E4"))) PPC_WEAK_FUNC(sub_829046E4);
PPC_FUNC_IMPL(__imp__sub_829046E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829046E8"))) PPC_WEAK_FUNC(sub_829046E8);
PPC_FUNC_IMPL(__imp__sub_829046E8) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r9,r10,16456
	ctx.r9.s64 = ctx.r10.s64 + 16456;
	// li r8,14
	ctx.r8.s64 = 14;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82904728;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// li r3,2
	ctx.r3.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// addi r4,r5,21608
	ctx.r4.s64 = ctx.r5.s64 + 21608;
	// lfs f0,9008(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stb r10,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r10.u8);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r11.u8);
	// stb r11,37(r31)
	PPC_STORE_U8(ctx.r31.u32 + 37, ctx.r11.u8);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stb r10,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_82904790"))) PPC_WEAK_FUNC(sub_82904790);
PPC_FUNC_IMPL(__imp__sub_82904790) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r9,r10,16456
	ctx.r9.s64 = ctx.r10.s64 + 16456;
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x829047D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// li r3,2
	ctx.r3.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r6,21668
	ctx.r4.s64 = ctx.r6.s64 + 21668;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_8290480C"))) PPC_WEAK_FUNC(sub_8290480C);
PPC_FUNC_IMPL(__imp__sub_8290480C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82904810"))) PPC_WEAK_FUNC(sub_82904810);
PPC_FUNC_IMPL(__imp__sub_82904810) {
	PPC_FUNC_PROLOGUE();
	// li r3,81
	ctx.r3.s64 = 81;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82904818"))) PPC_WEAK_FUNC(sub_82904818);
PPC_FUNC_IMPL(__imp__sub_82904818) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,16456
	ctx.r9.s64 = ctx.r11.s64 + 16456;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8290484c
	if (cr6.eq) goto loc_8290484C;
	// bl 0x82416268
	ctx.lr = 0x82904848;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8290484C:
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

__attribute__((alias("__imp__sub_82904860"))) PPC_WEAK_FUNC(sub_82904860);
PPC_FUNC_IMPL(__imp__sub_82904860) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,16456
	ctx.r10.s64 = ctx.r11.s64 + 16456;
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x829048A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
	// addi r5,r7,21788
	ctx.r5.s64 = ctx.r7.s64 + 21788;
	// stw r31,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r6,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r4,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r4.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829048E4"))) PPC_WEAK_FUNC(sub_829048E4);
PPC_FUNC_IMPL(__imp__sub_829048E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829048E8"))) PPC_WEAK_FUNC(sub_829048E8);
PPC_FUNC_IMPL(__imp__sub_829048E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
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
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82904920"))) PPC_WEAK_FUNC(sub_82904920);
PPC_FUNC_IMPL(__imp__sub_82904920) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,16456
	ctx.r10.s64 = ctx.r11.s64 + 16456;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82904960;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
	// addi r6,r8,22028
	ctx.r6.s64 = ctx.r8.s64 + 22028;
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// stw r5,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r5.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,9008(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stb r4,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r4.u8);
	// stfs f0,52(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// stfs f0,56(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// stfs f0,60(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// stfs f0,64(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 64, temp.u32);
	// stfs f0,68(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
	// stfs f0,76(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 76, temp.u32);
	// stfs f0,80(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 80, temp.u32);
	// stfs f0,84(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 84, temp.u32);
	// stfs f0,88(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 88, temp.u32);
	// stfs f0,96(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 96, temp.u32);
	// stfs f0,100(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 100, temp.u32);
	// stfs f0,104(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 104, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829049D4"))) PPC_WEAK_FUNC(sub_829049D4);
PPC_FUNC_IMPL(__imp__sub_829049D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829049D8"))) PPC_WEAK_FUNC(sub_829049D8);
PPC_FUNC_IMPL(__imp__sub_829049D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
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
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stb r11,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, ctx.r11.u8);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stb r11,92(r3)
	PPC_STORE_U8(ctx.r3.u32 + 92, ctx.r11.u8);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stb r11,112(r3)
	PPC_STORE_U8(ctx.r3.u32 + 112, ctx.r11.u8);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stb r11,120(r3)
	PPC_STORE_U8(ctx.r3.u32 + 120, ctx.r11.u8);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82904A54"))) PPC_WEAK_FUNC(sub_82904A54);
PPC_FUNC_IMPL(__imp__sub_82904A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82904A58"))) PPC_WEAK_FUNC(sub_82904A58);
PPC_FUNC_IMPL(__imp__sub_82904A58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82904A60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r31,432(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// lwz r29,292(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82904b74
	if (cr6.eq) goto loc_82904B74;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82904b74
	if (cr6.eq) goto loc_82904B74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a181b8
	ctx.lr = 0x82904A90;
	sub_82A181B8(ctx, base);
	// bl 0x82a2ee60
	ctx.lr = 0x82904A94;
	sub_82A2EE60(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// blt cr6,0x82904b44
	if (cr6.lt) goto loc_82904B44;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// ble cr6,0x82904b2c
	if (!cr6.gt) goto loc_82904B2C;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// bne cr6,0x82904b44
	if (!cr6.eq) goto loc_82904B44;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82904ac0
	if (!cr6.lt) goto loc_82904AC0;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82904ae8
	goto loc_82904AE8;
loc_82904AC0:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x82904ad0
	if (!cr6.lt) goto loc_82904AD0;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82904ae8
	goto loc_82904AE8;
loc_82904AD0:
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
loc_82904AE8:
	// lwz r11,5756(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5756);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82904afc
	if (!cr6.lt) goto loc_82904AFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82904b24
	goto loc_82904B24;
loc_82904AFC:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x82904b0c
	if (!cr6.lt) goto loc_82904B0C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82904b24
	goto loc_82904B24;
loc_82904B0C:
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
loc_82904B24:
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// bne cr6,0x82904b74
	if (!cr6.eq) goto loc_82904B74;
loc_82904B2C:
	// lwz r11,4460(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4460);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82904b74
	if (cr6.eq) goto loc_82904B74;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82904B44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da1d10
	ctx.lr = 0x82904B4C;
	sub_82DA1D10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82904b74
	if (cr6.eq) goto loc_82904B74;
	// lwz r11,4460(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4460);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82904b74
	if (!cr6.eq) goto loc_82904B74;
	// lwz r11,5356(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5356);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82904b78
	if (!cr6.eq) goto loc_82904B78;
loc_82904B74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82904B78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82904B80"))) PPC_WEAK_FUNC(sub_82904B80);
PPC_FUNC_IMPL(__imp__sub_82904B80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82904B88;
	__savegprlr_21(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82904ba8
	if (!cr6.lt) goto loc_82904BA8;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x82904bd0
	goto loc_82904BD0;
loc_82904BA8:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x82904bb8
	if (!cr6.lt) goto loc_82904BB8;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x82904bd0
	goto loc_82904BD0;
loc_82904BB8:
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
loc_82904BD0:
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r27,12(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r26,132(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r22,32(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r23,6112(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6112);
	// bl 0x82a0c710
	ctx.lr = 0x82904BF4;
	sub_82A0C710(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x82904c10
	if (cr6.eq) goto loc_82904C10;
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, xer);
	// beq cr6,0x82904c10
	if (cr6.eq) goto loc_82904C10;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82904c18
	goto loc_82904C18;
loc_82904C10:
	// cntlzw r11,r28
	ctx.r11.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82904C18:
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x82904C20;
	sub_82A0C710(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r24,0
	ctx.r24.s64 = 0;
	// bl 0x82a2a620
	ctx.lr = 0x82904C34;
	sub_82A2A620(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82904c50
	if (cr6.eq) goto loc_82904C50;
loc_82904C40:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82904C50:
	// lwz r29,44(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x82904c68
	if (cr6.lt) goto loc_82904C68;
	// cmpwi cr6,r29,22
	cr6.compare<int32_t>(ctx.r29.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82904c6c
	if (cr6.lt) goto loc_82904C6C;
loc_82904C68:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82904C6C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82904cc0
	if (cr6.eq) goto loc_82904CC0;
	// addis r21,r27,1
	ctx.r21.s64 = ctx.r27.s64 + 65536;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r21,r21,20428
	ctx.r21.s64 = ctx.r21.s64 + 20428;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x825ca600
	ctx.lr = 0x82904C8C;
	sub_825CA600(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lfs f0,30444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30444);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// bl 0x825ca600
	ctx.lr = 0x82904CA4;
	sub_825CA600(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// bge cr6,0x82904cc0
	if (!cr6.lt) goto loc_82904CC0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,4(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-9984(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9984);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82904c40
	if (cr6.lt) goto loc_82904C40;
loc_82904CC0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a2a310
	ctx.lr = 0x82904CCC;
	sub_82A2A310(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82904ce4
	if (cr6.lt) goto loc_82904CE4;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82904ce8
	if (cr6.lt) goto loc_82904CE8;
loc_82904CE4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82904CE8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82904c40
	if (cr6.eq) goto loc_82904C40;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x82904D00;
	sub_82A0C788(ctx, base);
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c7b0
	ctx.lr = 0x82904D14;
	sub_82A0C7B0(ctx, base);
	// addi r31,r3,4968
	ctx.r31.s64 = ctx.r3.s64 + 4968;
	// addis r29,r27,1
	ctx.r29.s64 = ctx.r27.s64 + 65536;
	// lbz r30,252(r25)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r25.u32 + 252);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r29,r29,20408
	ctx.r29.s64 = ctx.r29.s64 + 20408;
	// bl 0x82a22b40
	ctx.lr = 0x82904D30;
	sub_82A22B40(ctx, base);
	// lwz r11,1396(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1396);
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(ctx.r11.s32, 64, xer);
	// beq cr6,0x82904de8
	if (cr6.eq) goto loc_82904DE8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// bne cr6,0x82904d80
	if (!cr6.eq) goto loc_82904D80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a3e400
	ctx.lr = 0x82904D54;
	sub_82A3E400(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82904d80
	if (!cr6.eq) goto loc_82904D80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82a44b68
	ctx.lr = 0x82904D6C;
	sub_82A44B68(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82904dec
	if (!cr6.gt) goto loc_82904DEC;
loc_82904D80:
	// extsb r10,r30
	ctx.r10.s64 = ctx.r30.s8;
	// lfs f0,24(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f0,f10
	ctx.f0.f64 = double(float(ctx.f10.f64));
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f12,f9
	cr6.compare(ctx.f12.f64, ctx.f9.f64);
	// ble cr6,0x82904dc0
	if (!cr6.gt) goto loc_82904DC0;
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f11,28(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bgt cr6,0x82904de8
	if (cr6.gt) goto loc_82904DE8;
loc_82904DC0:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lfs f11,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fcmpu cr6,f10,f12
	cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// ble cr6,0x82904dec
	if (!cr6.gt) goto loc_82904DEC;
loc_82904DE8:
	// li r24,1
	ctx.r24.s64 = 1;
loc_82904DEC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82904DFC"))) PPC_WEAK_FUNC(sub_82904DFC);
PPC_FUNC_IMPL(__imp__sub_82904DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82904E00"))) PPC_WEAK_FUNC(sub_82904E00);
PPC_FUNC_IMPL(__imp__sub_82904E00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bge cr6,0x82904e1c
	if (!cr6.lt) goto loc_82904E1C;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_82904E1C:
	// li r3,72
	ctx.r3.s64 = 72;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82904E24"))) PPC_WEAK_FUNC(sub_82904E24);
PPC_FUNC_IMPL(__imp__sub_82904E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82904E28"))) PPC_WEAK_FUNC(sub_82904E28);
PPC_FUNC_IMPL(__imp__sub_82904E28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82904E30;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,60
	ctx.r10.s64 = 60;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,59
	ctx.r9.s64 = 59;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// bl 0x82910df8
	ctx.lr = 0x82904E84;
	sub_82910DF8(ctx, base);
	// lwz r11,20(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82904ea0
	if (!cr6.lt) goto loc_82904EA0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// b 0x82904ec8
	goto loc_82904EC8;
loc_82904EA0:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x82904eb0
	if (!cr6.lt) goto loc_82904EB0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// b 0x82904ec8
	goto loc_82904EC8;
loc_82904EB0:
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
loc_82904EC8:
	// lis r27,-31763
	ctx.r27.s64 = -2081619968;
	// lwz r3,-3564(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// lwz r23,292(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// lwz r21,192(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// bl 0x82a0c710
	ctx.lr = 0x82904EDC;
	sub_82A0C710(ctx, base);
	// lwz r10,-3564(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// li r24,1
	ctx.r24.s64 = 1;
	// lwz r7,4460(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4460);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lbz r29,252(r3)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r30,6112(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6112);
	// bne cr6,0x82904f1c
	if (!cr6.eq) goto loc_82904F1C;
	// lwz r10,4548(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4548);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x82904f18
	if (cr6.eq) goto loc_82904F18;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x82904f1c
	if (!cr6.eq) goto loc_82904F1C;
loc_82904F18:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82904F1C:
	// lbz r10,4498(r23)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r23.u32 + 4498);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82904f34
	if (!cr6.eq) goto loc_82904F34;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829054c4
	if (cr6.eq) goto loc_829054C4;
loc_82904F34:
	// lwz r11,5356(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5356);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82904f58
	if (cr6.eq) goto loc_82904F58;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82904f58
	if (cr6.eq) goto loc_82904F58;
	// lwz r11,4456(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4456);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// bne cr6,0x82904f5c
	if (!cr6.eq) goto loc_82904F5C;
loc_82904F58:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_82904F5C:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82904f88
	if (cr6.eq) goto loc_82904F88;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,58
	ctx.r10.s64 = 58;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
loc_82904F88:
	// lbz r11,112(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x829054c4
	if (!cr6.eq) goto loc_829054C4;
	// lwz r11,5356(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5356);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x829054c4
	if (cr6.gt) goto loc_829054C4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82904fe4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82904FE4;
	// bdzf 4*cr6+eq,0x8290503c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8290503C;
	// bdzf 4*cr6+eq,0x829050ac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_829050AC;
	// bdzf 4*cr6+eq,0x82905178
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82905178;
	// bne cr6,0x82905154
	if (!cr6.eq) goto loc_82905154;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,36
	ctx.r10.s64 = 36;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// b 0x829054c4
	goto loc_829054C4;
loc_82904FE4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,61
	ctx.r9.s64 = 61;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r26,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r26.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r3,r31
	PPC_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x829054c4
	goto loc_829054C4;
loc_8290503C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,63
	ctx.r9.s64 = 63;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r26,r3,r31
	PPC_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r26.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r24,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r24.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// b 0x829054c4
	goto loc_829054C4;
loc_829050AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,64
	ctx.r9.s64 = 64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r26,r3,r31
	PPC_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r26.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r24,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r24.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lwz r11,-3564(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x82da1d10
	ctx.lr = 0x82905124;
	sub_82DA1D10(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x829054c4
	if (!cr6.eq) goto loc_829054C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,69
	ctx.r10.s64 = 69;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// b 0x829054c4
	goto loc_829054C4;
loc_82905154:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,37
	ctx.r10.s64 = 37;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// b 0x829054c4
	goto loc_829054C4;
loc_82905178:
	// lbz r11,4516(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 4516);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x829051e0
	if (!cr6.eq) goto loc_829051E0;
	// lbz r11,4517(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 4517);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x829051e0
	if (!cr6.eq) goto loc_829051E0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8290abc0
	ctx.lr = 0x82905198;
	sub_8290ABC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829051e0
	if (cr6.eq) goto loc_829051E0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x829051e0
	if (cr6.eq) goto loc_829051E0;
	// cmpwi cr6,r11,59
	cr6.compare<int32_t>(ctx.r11.s32, 59, xer);
	// beq cr6,0x829051e0
	if (cr6.eq) goto loc_829051E0;
	// cmpwi cr6,r11,72
	cr6.compare<int32_t>(ctx.r11.s32, 72, xer);
	// beq cr6,0x829051e0
	if (cr6.eq) goto loc_829051E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,24
	ctx.r10.s64 = 24;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
loc_829051E0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,5172(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 5172);
	ctx.f13.f64 = double(temp.f32);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// lfs f0,16824(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16824);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82905200
	if (cr6.lt) goto loc_82905200;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82905200:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82905308
	if (cr6.eq) goto loc_82905308;
	// extsb r10,r29
	ctx.r10.s64 = ctx.r29.s8;
	// lfs f0,5364(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 5364);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fcmpu cr6,f13,f9
	cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// ble cr6,0x82905308
	if (!cr6.gt) goto loc_82905308;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,5372(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 5372);
	ctx.f12.f64 = double(temp.f32);
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// lfs f0,-7352(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -7352);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f10,f11
	cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// ble cr6,0x82905308
	if (!cr6.gt) goto loc_82905308;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82905308
	if (!cr6.eq) goto loc_82905308;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r30,r23,5756
	ctx.r30.s64 = ctx.r23.s64 + 5756;
loc_82905268:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82905280
	if (cr6.lt) goto loc_82905280;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// blt cr6,0x82905284
	if (cr6.lt) goto loc_82905284;
loc_82905280:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82905284:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829052f4
	if (cr6.eq) goto loc_829052F4;
	// lwz r10,5360(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5360);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x829052a4
	if (!cr6.lt) goto loc_829052A4;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x829052cc
	goto loc_829052CC;
loc_829052A4:
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bge cr6,0x829052b4
	if (!cr6.lt) goto loc_829052B4;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x829052cc
	goto loc_829052CC;
loc_829052B4:
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
loc_829052CC:
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bne cr6,0x829052f4
	if (!cr6.eq) goto loc_829052F4;
	// lwz r3,-3564(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x829052DC;
	sub_82A0C760(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82a3cf30
	ctx.lr = 0x829052E8;
	sub_82A3CF30(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82905308
	if (cr6.eq) goto loc_82905308;
loc_829052F4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// blt cr6,0x82905268
	if (cr6.lt) goto loc_82905268;
	// b 0x8290530c
	goto loc_8290530C;
loc_82905308:
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_8290530C:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82905338
	if (cr6.eq) goto loc_82905338;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,35
	ctx.r10.s64 = 35;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
loc_82905338:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r26,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r26.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r5,4548(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4548);
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// bne cr6,0x82905398
	if (!cr6.eq) goto loc_82905398;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r10,5
	ctx.r10.s64 = 5;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82905398:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,8
	ctx.r4.s64 = 8;
	// stwx r24,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r24.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// bl 0x82a38be0
	ctx.lr = 0x829053C0;
	sub_82A38BE0(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82905488
	if (!cr6.eq) goto loc_82905488;
	// lwz r11,4548(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4548);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82905488
	if (!cr6.eq) goto loc_82905488;
	// lwz r11,16(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x829053e8
	if (cr6.lt) goto loc_829053E8;
	// li r11,23
	ctx.r11.s64 = 23;
loc_829053E8:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r3,r11,r21
	ctx.r3.u64 = ctx.r11.u64 + ctx.r21.u64;
	// bl 0x8357ece0
	ctx.lr = 0x829053F4;
	sub_8357ECE0(ctx, base);
	// bl 0x82a47dc0
	ctx.lr = 0x829053F8;
	sub_82A47DC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// li r10,53
	ctx.r10.s64 = 53;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x82905414
	if (cr6.eq) goto loc_82905414;
	// li r10,3
	ctx.r10.s64 = 3;
loc_82905414:
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// lwz r11,16(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x82905434
	if (cr6.lt) goto loc_82905434;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82905434:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r3,r11,r21
	ctx.r3.u64 = ctx.r11.u64 + ctx.r21.u64;
	// bl 0x8357ece0
	ctx.lr = 0x82905440;
	sub_8357ECE0(ctx, base);
	// bl 0x82a47da0
	ctx.lr = 0x82905444;
	sub_82A47DA0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bne cr6,0x82905470
	if (!cr6.eq) goto loc_82905470;
	// li r10,52
	ctx.r10.s64 = 52;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// b 0x829054c4
	goto loc_829054C4;
loc_82905470:
	// li r10,2
	ctx.r10.s64 = 2;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// b 0x829054c4
	goto loc_829054C4;
loc_82905488:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
loc_829054C4:
	// lwz r11,5356(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5356);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x82905508
	if (cr6.lt) goto loc_82905508;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// ble cr6,0x829054e8
	if (!cr6.gt) goto loc_829054E8;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x82905508
	if (!cr6.eq) goto loc_82905508;
	// li r10,28
	ctx.r10.s64 = 28;
	// b 0x829054ec
	goto loc_829054EC;
loc_829054E8:
	// li r10,27
	ctx.r10.s64 = 27;
loc_829054EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
loc_82905508:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82905510"))) PPC_WEAK_FUNC(sub_82905510);
PPC_FUNC_IMPL(__imp__sub_82905510) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82905518;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82a2b4e0
	ctx.lr = 0x82905530;
	sub_82A2B4E0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// ori r8,r9,20424
	ctx.r8.u64 = ctx.r9.u64 | 20424;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,-3564(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3564);
	// lwzx r28,r7,r8
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// bl 0x82a0c760
	ctx.lr = 0x82905558;
	sub_82A0C760(ctx, base);
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpw cr6,r6,r27
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r27.s32, xer);
	// beq cr6,0x82905620
	if (cr6.eq) goto loc_82905620;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82a3cfa8
	ctx.lr = 0x82905574;
	sub_82A3CFA8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82905620
	if (!cr6.eq) goto loc_82905620;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82a3d2a8
	ctx.lr = 0x8290558C;
	sub_82A3D2A8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82905620
	if (!cr6.eq) goto loc_82905620;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82a3d0a0
	ctx.lr = 0x829055A4;
	sub_82A3D0A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82905620
	if (!cr6.eq) goto loc_82905620;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// bne cr6,0x829055f8
	if (!cr6.eq) goto loc_829055F8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,46
	ctx.r10.s64 = 46;
	// li r9,47
	ctx.r9.s64 = 47;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
loc_829055F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,12
	ctx.r10.s64 = 12;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82905620:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,46
	ctx.r10.s64 = 46;
	// li r9,47
	ctx.r9.s64 = 47;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// li r7,11
	ctx.r7.s64 = 11;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82905680"))) PPC_WEAK_FUNC(sub_82905680);
PPC_FUNC_IMPL(__imp__sub_82905680) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,16456
	ctx.r10.s64 = ctx.r11.s64 + 16456;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x829056C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
	// li r6,36
	ctx.r6.s64 = 36;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r7,22088
	ctx.r4.s64 = ctx.r7.s64 + 22088;
	// stw r6,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r6.u32);
	// lfs f0,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stb r5,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r5.u8);
	// stfs f0,52(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f0,56(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// stfs f0,60(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// stw r4,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r4.u32);
	// stfs f0,80(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 80, temp.u32);
	// stfs f0,84(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 84, temp.u32);
	// stfs f0,88(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 88, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290571C"))) PPC_WEAK_FUNC(sub_8290571C);
PPC_FUNC_IMPL(__imp__sub_8290571C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82905720"))) PPC_WEAK_FUNC(sub_82905720);
PPC_FUNC_IMPL(__imp__sub_82905720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r11.u8);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,37(r3)
	PPC_STORE_U8(ctx.r3.u32 + 37, ctx.r11.u8);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// lfs f13,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// stb r8,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r8.u8);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stb r11,96(r3)
	PPC_STORE_U8(ctx.r3.u32 + 96, ctx.r11.u8);
	// stfs f13,92(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stb r11,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, ctx.r11.u8);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stb r11,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, ctx.r11.u8);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290578C"))) PPC_WEAK_FUNC(sub_8290578C);
PPC_FUNC_IMPL(__imp__sub_8290578C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82905790"))) PPC_WEAK_FUNC(sub_82905790);
PPC_FUNC_IMPL(__imp__sub_82905790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82905798;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,72
	ctx.r10.s64 = 72;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_829057BC:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x829057bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_829057BC;
	// addi r3,r31,292
	ctx.r3.s64 = ctx.r31.s64 + 292;
	// bl 0x82904138
	ctx.lr = 0x829057CC;
	sub_82904138(ctx, base);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// bl 0x829041e8
	ctx.lr = 0x829057D4;
	sub_829041E8(ctx, base);
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// bl 0x82904360
	ctx.lr = 0x829057DC;
	sub_82904360(ctx, base);
	// addi r3,r31,452
	ctx.r3.s64 = ctx.r31.s64 + 452;
	// bl 0x82903f80
	ctx.lr = 0x829057E4;
	sub_82903F80(ctx, base);
	// addi r3,r31,504
	ctx.r3.s64 = ctx.r31.s64 + 504;
	// bl 0x82904510
	ctx.lr = 0x829057EC;
	sub_82904510(ctx, base);
	// addi r3,r31,556
	ctx.r3.s64 = ctx.r31.s64 + 556;
	// bl 0x829042a8
	ctx.lr = 0x829057F4;
	sub_829042A8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r25,18
	ctx.r25.s64 = 18;
	// stw r30,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r30.u32);
	// addi r22,r11,16456
	ctx.r22.s64 = ctx.r11.s64 + 16456;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r25,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r25.u32);
	// stw r22,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r22.u32);
	// addi r3,r31,608
	ctx.r3.s64 = ctx.r31.s64 + 608;
	// stw r29,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r29.u32);
	// lwz r10,4(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82905824;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// li r28,2
	ctx.r28.s64 = 2;
	// stw r30,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r30.u32);
	// addi r8,r9,21128
	ctx.r8.s64 = ctx.r9.s64 + 21128;
	// stb r29,628(r31)
	PPC_STORE_U8(ctx.r31.u32 + 628, ctx.r29.u8);
	// stw r28,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r28.u32);
	// addi r3,r31,660
	ctx.r3.s64 = ctx.r31.s64 + 660;
	// stw r8,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r8.u32);
	// stw r22,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r22.u32);
	// stw r25,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r25.u32);
	// stw r28,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r28.u32);
	// stw r30,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r30.u32);
	// lwz r7,4(r22)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82905860;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// li r5,17
	ctx.r5.s64 = 17;
	// stw r30,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r30.u32);
	// addi r4,r6,21008
	ctx.r4.s64 = ctx.r6.s64 + 21008;
	// stw r28,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r28.u32);
	// stb r29,680(r31)
	PPC_STORE_U8(ctx.r31.u32 + 680, ctx.r29.u8);
	// addi r3,r31,712
	ctx.r3.s64 = ctx.r31.s64 + 712;
	// stw r4,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r4.u32);
	// stw r22,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r22.u32);
	// stw r5,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r5.u32);
	// stw r28,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r28.u32);
	// stw r30,728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 728, ctx.r30.u32);
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290589C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r30,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r30.u32);
	// addi r8,r10,21068
	ctx.r8.s64 = ctx.r10.s64 + 21068;
	// stw r28,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r28.u32);
	// stb r29,732(r31)
	PPC_STORE_U8(ctx.r31.u32 + 732, ctx.r29.u8);
	// addi r3,r31,764
	ctx.r3.s64 = ctx.r31.s64 + 764;
	// stw r8,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r8.u32);
	// stw r22,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r22.u32);
	// stw r9,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r9.u32);
	// stw r29,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r29.u32);
	// stw r30,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r30.u32);
	// lwz r7,4(r22)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x829058D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// li r5,19
	ctx.r5.s64 = 19;
	// stw r30,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r30.u32);
	// addi r4,r6,21188
	ctx.r4.s64 = ctx.r6.s64 + 21188;
	// stw r28,772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 772, ctx.r28.u32);
	// stb r29,784(r31)
	PPC_STORE_U8(ctx.r31.u32 + 784, ctx.r29.u8);
	// addi r3,r31,816
	ctx.r3.s64 = ctx.r31.s64 + 816;
	// stw r4,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r4.u32);
	// stw r22,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r22.u32);
	// stw r5,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r5.u32);
	// stw r29,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r29.u32);
	// stw r30,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r30.u32);
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82905914;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r30,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r30.u32);
	// stw r28,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r28.u32);
	// addi r3,r31,872
	ctx.r3.s64 = ctx.r31.s64 + 872;
	// addi r9,r10,21248
	ctx.r9.s64 = ctx.r10.s64 + 21248;
	// stb r29,836(r31)
	PPC_STORE_U8(ctx.r31.u32 + 836, ctx.r29.u8);
	// stw r9,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r9.u32);
	// bl 0x829034f8
	ctx.lr = 0x82905934;
	sub_829034F8(ctx, base);
	// addi r3,r31,924
	ctx.r3.s64 = ctx.r31.s64 + 924;
	// bl 0x82903478
	ctx.lr = 0x8290593C;
	sub_82903478(ctx, base);
	// li r23,10
	ctx.r23.s64 = 10;
	// stw r22,976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 976, ctx.r22.u32);
	// addi r3,r31,976
	ctx.r3.s64 = ctx.r31.s64 + 976;
	// stw r23,980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 980, ctx.r23.u32);
	// stw r28,988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 988, ctx.r28.u32);
	// stw r30,992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 992, ctx.r30.u32);
	// lwz r8,4(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82905960;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// stw r30,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r30.u32);
	// stw r28,984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 984, ctx.r28.u32);
	// addi r3,r31,1028
	ctx.r3.s64 = ctx.r31.s64 + 1028;
	// addi r6,r7,19088
	ctx.r6.s64 = ctx.r7.s64 + 19088;
	// stb r29,996(r31)
	PPC_STORE_U8(ctx.r31.u32 + 996, ctx.r29.u8);
	// stw r6,976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 976, ctx.r6.u32);
	// bl 0x82903728
	ctx.lr = 0x82905980;
	sub_82903728(ctx, base);
	// li r24,21
	ctx.r24.s64 = 21;
	// stw r22,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r22.u32);
	// addi r3,r31,1080
	ctx.r3.s64 = ctx.r31.s64 + 1080;
	// stw r24,1084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1084, ctx.r24.u32);
	// stw r28,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r28.u32);
	// stw r30,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r30.u32);
	// lwz r5,4(r22)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x829059A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// stw r30,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r30.u32);
	// addi r3,r31,1132
	ctx.r3.s64 = ctx.r31.s64 + 1132;
	// addi r11,r4,19208
	ctx.r11.s64 = ctx.r4.s64 + 19208;
	// stw r28,1088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1088, ctx.r28.u32);
	// stb r29,1100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1100, ctx.r29.u8);
	// stw r11,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r11.u32);
	// bl 0x829037b0
	ctx.lr = 0x829059C4;
	sub_829037B0(ctx, base);
	// addi r3,r31,1184
	ctx.r3.s64 = ctx.r31.s64 + 1184;
	// bl 0x829032a0
	ctx.lr = 0x829059CC;
	sub_829032A0(ctx, base);
	// stw r22,1240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1240, ctx.r22.u32);
	// stw r30,1252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1252, ctx.r30.u32);
	// addi r26,r31,1240
	ctx.r26.s64 = ctx.r31.s64 + 1240;
	// stw r29,1256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1256, ctx.r29.u32);
	// stw r29,1248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1248, ctx.r29.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,4(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829059F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// li r27,36
	ctx.r27.s64 = 36;
	// stw r30,1264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1264, ctx.r30.u32);
	// addi r8,r9,18128
	ctx.r8.s64 = ctx.r9.s64 + 18128;
	// stb r29,1260(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1260, ctx.r29.u8);
	// stw r27,1244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1244, ctx.r27.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r8,1240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1240, ctx.r8.u32);
	// bl 0x82909fa8
	ctx.lr = 0x82905A14;
	sub_82909FA8(ctx, base);
	// addi r3,r31,1308
	ctx.r3.s64 = ctx.r31.s64 + 1308;
	// bl 0x82903328
	ctx.lr = 0x82905A1C;
	sub_82903328(ctx, base);
	// li r26,4
	ctx.r26.s64 = 4;
	// stw r22,1368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1368, ctx.r22.u32);
	// addi r3,r31,1368
	ctx.r3.s64 = ctx.r31.s64 + 1368;
	// stw r26,1372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1372, ctx.r26.u32);
	// stw r29,1380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1380, ctx.r29.u32);
	// stw r30,1384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1384, ctx.r30.u32);
	// lwz r7,4(r22)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82905A40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// stw r30,1392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1392, ctx.r30.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r6,19928
	ctx.r4.s64 = ctx.r6.s64 + 19928;
	// stw r28,1376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1376, ctx.r28.u32);
	// stb r29,1388(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1388, ctx.r29.u8);
	// addi r3,r31,1424
	ctx.r3.s64 = ctx.r31.s64 + 1424;
	// stw r4,1368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1368, ctx.r4.u32);
	// stb r30,1420(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1420, ctx.r30.u8);
	// stw r29,1436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1436, ctx.r29.u32);
	// stw r22,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r22.u32);
	// stw r30,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r30.u32);
	// stw r5,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r5.u32);
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82905A80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r30,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r30.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r8,r10,19988
	ctx.r8.s64 = ctx.r10.s64 + 19988;
	// stw r28,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r28.u32);
	// stb r29,1444(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1444, ctx.r29.u8);
	// addi r3,r31,1480
	ctx.r3.s64 = ctx.r31.s64 + 1480;
	// stw r8,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r8.u32);
	// stb r30,1476(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1476, ctx.r30.u8);
	// stw r22,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r22.u32);
	// stw r29,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r29.u32);
	// stw r30,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r30.u32);
	// stw r9,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r9.u32);
	// lwz r7,4(r22)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82905AC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// li r5,7
	ctx.r5.s64 = 7;
	// stw r30,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r30.u32);
	// addi r4,r6,19808
	ctx.r4.s64 = ctx.r6.s64 + 19808;
	// stw r28,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r28.u32);
	// stb r29,1500(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1500, ctx.r29.u8);
	// addi r3,r31,1536
	ctx.r3.s64 = ctx.r31.s64 + 1536;
	// stw r4,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r4.u32);
	// stb r30,1532(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1532, ctx.r30.u8);
	// stw r30,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r30.u32);
	// stw r22,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r22.u32);
	// stw r5,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r5.u32);
	// stw r29,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r29.u32);
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82905B00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r30,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r30.u32);
	// addi r3,r31,1588
	ctx.r3.s64 = ctx.r31.s64 + 1588;
	// addi r9,r10,19868
	ctx.r9.s64 = ctx.r10.s64 + 19868;
	// stw r28,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r28.u32);
	// stb r29,1556(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1556, ctx.r29.u8);
	// stw r9,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r9.u32);
	// bl 0x82903220
	ctx.lr = 0x82905B20;
	sub_82903220(ctx, base);
	// li r8,11
	ctx.r8.s64 = 11;
	// stw r22,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r22.u32);
	// addi r3,r31,1640
	ctx.r3.s64 = ctx.r31.s64 + 1640;
	// stw r8,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r8.u32);
	// stw r29,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r29.u32);
	// stw r30,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r30.u32);
	// lwz r7,4(r22)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82905B44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// stw r30,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r30.u32);
	// stw r28,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r28.u32);
	// addi r3,r31,1692
	ctx.r3.s64 = ctx.r31.s64 + 1692;
	// addi r5,r6,18608
	ctx.r5.s64 = ctx.r6.s64 + 18608;
	// stb r29,1660(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1660, ctx.r29.u8);
	// stw r5,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r5.u32);
	// bl 0x829031b0
	ctx.lr = 0x82905B64;
	sub_829031B0(ctx, base);
	// addi r3,r31,1764
	ctx.r3.s64 = ctx.r31.s64 + 1764;
	// bl 0x82904920
	ctx.lr = 0x82905B6C;
	sub_82904920(ctx, base);
	// addi r3,r31,1888
	ctx.r3.s64 = ctx.r31.s64 + 1888;
	// bl 0x82905680
	ctx.lr = 0x82905B74;
	sub_82905680(ctx, base);
	// stw r22,1988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1988, ctx.r22.u32);
	// stw r29,1992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1992, ctx.r29.u32);
	// addi r3,r31,1988
	ctx.r3.s64 = ctx.r31.s64 + 1988;
	// stw r28,2000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2000, ctx.r28.u32);
	// stw r30,2004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2004, ctx.r30.u32);
	// lwz r4,4(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x82905B94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r30,2012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2012, ctx.r30.u32);
	// addi r3,r31,2040
	ctx.r3.s64 = ctx.r31.s64 + 2040;
	// addi r10,r11,20408
	ctx.r10.s64 = ctx.r11.s64 + 20408;
	// stw r28,1996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1996, ctx.r28.u32);
	// stb r29,2008(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2008, ctx.r29.u8);
	// stw r10,1988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1988, ctx.r10.u32);
	// stw r22,2040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2040, ctx.r22.u32);
	// stw r29,2044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2044, ctx.r29.u32);
	// stw r28,2052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2052, ctx.r28.u32);
	// stw r30,2056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2056, ctx.r30.u32);
	// lwz r9,4(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82905BCC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// stw r30,2064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2064, ctx.r30.u32);
	// addi r3,r31,2092
	ctx.r3.s64 = ctx.r31.s64 + 2092;
	// addi r7,r8,20408
	ctx.r7.s64 = ctx.r8.s64 + 20408;
	// stw r28,2048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2048, ctx.r28.u32);
	// stb r29,2060(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2060, ctx.r29.u8);
	// stw r7,2040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2040, ctx.r7.u32);
	// bl 0x82903af0
	ctx.lr = 0x82905BEC;
	sub_82903AF0(ctx, base);
	// li r6,13
	ctx.r6.s64 = 13;
	// stw r22,2156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2156, ctx.r22.u32);
	// addi r3,r31,2156
	ctx.r3.s64 = ctx.r31.s64 + 2156;
	// stw r6,2160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2160, ctx.r6.u32);
	// stw r28,2168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2168, ctx.r28.u32);
	// stw r30,2172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2172, ctx.r30.u32);
	// lwz r5,4(r22)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82905C10;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r28,2164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2164, ctx.r28.u32);
	// addi r10,r4,18908
	ctx.r10.s64 = ctx.r4.s64 + 18908;
	// stw r30,2180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2180, ctx.r30.u32);
	// stb r29,2176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2176, ctx.r29.u8);
	// addi r3,r31,2208
	ctx.r3.s64 = ctx.r31.s64 + 2208;
	// stw r10,2156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2156, ctx.r10.u32);
	// stw r22,2208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2208, ctx.r22.u32);
	// stw r11,2212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2212, ctx.r11.u32);
	// stw r28,2220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2220, ctx.r28.u32);
	// stw r30,2224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2224, ctx.r30.u32);
	// lwz r9,4(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82905C4C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// stw r30,2232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2232, ctx.r30.u32);
	// addi r3,r31,2260
	ctx.r3.s64 = ctx.r31.s64 + 2260;
	// addi r7,r8,18968
	ctx.r7.s64 = ctx.r8.s64 + 18968;
	// stw r28,2216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2216, ctx.r28.u32);
	// stb r29,2228(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2228, ctx.r29.u8);
	// stw r7,2208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2208, ctx.r7.u32);
	// stw r29,2272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2272, ctx.r29.u32);
	// stw r30,2276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2276, ctx.r30.u32);
	// stw r22,2260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2260, ctx.r22.u32);
	// stw r30,2268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2268, ctx.r30.u32);
	// lwz r6,4(r22)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82905C84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// stw r30,2284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2284, ctx.r30.u32);
	// addi r3,r31,2312
	ctx.r3.s64 = ctx.r31.s64 + 2312;
	// addi r4,r5,19028
	ctx.r4.s64 = ctx.r5.s64 + 19028;
	// stw r27,2264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2264, ctx.r27.u32);
	// stb r29,2280(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2280, ctx.r29.u8);
	// stw r4,2260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2260, ctx.r4.u32);
	// stw r22,2312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2312, ctx.r22.u32);
	// stw r26,2316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2316, ctx.r26.u32);
	// stw r28,2324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2324, ctx.r28.u32);
	// stw r30,2328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2328, ctx.r30.u32);
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82905CBC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r30,2336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2336, ctx.r30.u32);
	// addi r3,r31,2364
	ctx.r3.s64 = ctx.r31.s64 + 2364;
	// addi r9,r10,18848
	ctx.r9.s64 = ctx.r10.s64 + 18848;
	// stw r28,2320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2320, ctx.r28.u32);
	// stb r29,2332(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2332, ctx.r29.u8);
	// stw r9,2312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2312, ctx.r9.u32);
	// bl 0x82903ef0
	ctx.lr = 0x82905CDC;
	sub_82903EF0(ctx, base);
	// addi r3,r31,2416
	ctx.r3.s64 = ctx.r31.s64 + 2416;
	// bl 0x8290d0a8
	ctx.lr = 0x82905CE4;
	sub_8290D0A8(ctx, base);
	// stw r22,2472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2472, ctx.r22.u32);
	// stw r25,2476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2476, ctx.r25.u32);
	// addi r3,r31,2472
	ctx.r3.s64 = ctx.r31.s64 + 2472;
	// stw r28,2484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2484, ctx.r28.u32);
	// stw r30,2488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2488, ctx.r30.u32);
	// lwz r8,4(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82905D04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// stw r30,2496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2496, ctx.r30.u32);
	// addi r3,r31,2524
	ctx.r3.s64 = ctx.r31.s64 + 2524;
	// addi r6,r7,19328
	ctx.r6.s64 = ctx.r7.s64 + 19328;
	// stw r28,2480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2480, ctx.r28.u32);
	// stb r29,2492(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2492, ctx.r29.u8);
	// stw r6,2472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2472, ctx.r6.u32);
	// bl 0x82903870
	ctx.lr = 0x82905D24;
	sub_82903870(ctx, base);
	// addi r3,r31,2576
	ctx.r3.s64 = ctx.r31.s64 + 2576;
	// bl 0x82903970
	ctx.lr = 0x82905D2C;
	sub_82903970(ctx, base);
	// addi r3,r31,2628
	ctx.r3.s64 = ctx.r31.s64 + 2628;
	// bl 0x829038f0
	ctx.lr = 0x82905D34;
	sub_829038F0(ctx, base);
	// addi r3,r31,2680
	ctx.r3.s64 = ctx.r31.s64 + 2680;
	// bl 0x82903c18
	ctx.lr = 0x82905D3C;
	sub_82903C18(ctx, base);
	// addi r3,r31,2732
	ctx.r3.s64 = ctx.r31.s64 + 2732;
	// bl 0x82903478
	ctx.lr = 0x82905D44;
	sub_82903478(ctx, base);
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// addi r3,r31,2784
	ctx.r3.s64 = ctx.r31.s64 + 2784;
	// addi r4,r5,18668
	ctx.r4.s64 = ctx.r5.s64 + 18668;
	// stw r4,2732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2732, ctx.r4.u32);
	// bl 0x82903678
	ctx.lr = 0x82905D58;
	sub_82903678(ctx, base);
	// stw r28,2848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2848, ctx.r28.u32);
	// stw r22,2836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2836, ctx.r22.u32);
	// addi r3,r31,2836
	ctx.r3.s64 = ctx.r31.s64 + 2836;
	// stw r24,2840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2840, ctx.r24.u32);
	// stw r30,2852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2852, ctx.r30.u32);
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82905D78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r30,2860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2860, ctx.r30.u32);
	// addi r3,r31,2888
	ctx.r3.s64 = ctx.r31.s64 + 2888;
	// addi r9,r10,18548
	ctx.r9.s64 = ctx.r10.s64 + 18548;
	// stw r28,2844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2844, ctx.r28.u32);
	// stb r29,2856(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2856, ctx.r29.u8);
	// stw r9,2836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2836, ctx.r9.u32);
	// bl 0x82903578
	ctx.lr = 0x82905D98;
	sub_82903578(ctx, base);
	// addi r3,r31,2940
	ctx.r3.s64 = ctx.r31.s64 + 2940;
	// bl 0x829035f8
	ctx.lr = 0x82905DA0;
	sub_829035F8(ctx, base);
	// addi r3,r31,2992
	ctx.r3.s64 = ctx.r31.s64 + 2992;
	// bl 0x829039f0
	ctx.lr = 0x82905DA8;
	sub_829039F0(ctx, base);
	// addi r3,r31,3044
	ctx.r3.s64 = ctx.r31.s64 + 3044;
	// bl 0x82903a70
	ctx.lr = 0x82905DB0;
	sub_82903A70(ctx, base);
	// addi r3,r31,3096
	ctx.r3.s64 = ctx.r31.s64 + 3096;
	// bl 0x82903df0
	ctx.lr = 0x82905DB8;
	sub_82903DF0(ctx, base);
	// addi r3,r31,3148
	ctx.r3.s64 = ctx.r31.s64 + 3148;
	// bl 0x82903e70
	ctx.lr = 0x82905DC0;
	sub_82903E70(ctx, base);
	// addi r3,r31,3200
	ctx.r3.s64 = ctx.r31.s64 + 3200;
	// bl 0x82904418
	ctx.lr = 0x82905DC8;
	sub_82904418(ctx, base);
	// addi r3,r31,3412
	ctx.r3.s64 = ctx.r31.s64 + 3412;
	// bl 0x82904030
	ctx.lr = 0x82905DD0;
	sub_82904030(ctx, base);
	// li r8,14
	ctx.r8.s64 = 14;
	// stw r22,3508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3508, ctx.r22.u32);
	// addi r3,r31,3508
	ctx.r3.s64 = ctx.r31.s64 + 3508;
	// stw r8,3512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3512, ctx.r8.u32);
	// stw r28,3520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3520, ctx.r28.u32);
	// stw r30,3524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3524, ctx.r30.u32);
	// lwz r7,4(r22)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82905DF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// stw r30,3532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3532, ctx.r30.u32);
	// stw r28,3516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3516, ctx.r28.u32);
	// addi r3,r31,3564
	ctx.r3.s64 = ctx.r31.s64 + 3564;
	// addi r5,r6,21368
	ctx.r5.s64 = ctx.r6.s64 + 21368;
	// stb r29,3528(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3528, ctx.r29.u8);
	// stw r5,3508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3508, ctx.r5.u32);
	// stw r22,3564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3564, ctx.r22.u32);
	// stw r28,3576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3576, ctx.r28.u32);
	// stw r30,3580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3580, ctx.r30.u32);
	// stw r30,3568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3568, ctx.r30.u32);
	// lwz r4,4(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x82905E2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r30,3588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3588, ctx.r30.u32);
	// addi r3,r31,3616
	ctx.r3.s64 = ctx.r31.s64 + 3616;
	// addi r10,r11,21308
	ctx.r10.s64 = ctx.r11.s64 + 21308;
	// stw r28,3572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3572, ctx.r28.u32);
	// stb r29,3584(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3584, ctx.r29.u8);
	// stw r10,3564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3564, ctx.r10.u32);
	// bl 0x82904628
	ctx.lr = 0x82905E4C;
	sub_82904628(ctx, base);
	// stw r29,3676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3676, ctx.r29.u32);
	// stw r30,3688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3688, ctx.r30.u32);
	// addi r3,r31,3672
	ctx.r3.s64 = ctx.r31.s64 + 3672;
	// stw r28,3684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3684, ctx.r28.u32);
	// stw r22,3672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3672, ctx.r22.u32);
	// lwz r9,4(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82905E6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// stw r28,3680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3680, ctx.r28.u32);
	// addi r3,r31,3724
	ctx.r3.s64 = ctx.r31.s64 + 3724;
	// addi r7,r8,21488
	ctx.r7.s64 = ctx.r8.s64 + 21488;
	// stw r30,3696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3696, ctx.r30.u32);
	// stb r29,3692(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3692, ctx.r29.u8);
	// stw r7,3672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3672, ctx.r7.u32);
	// stw r30,3740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3740, ctx.r30.u32);
	// stw r22,3724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3724, ctx.r22.u32);
	// stw r30,3728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3728, ctx.r30.u32);
	// stw r28,3736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3736, ctx.r28.u32);
	// lwz r6,4(r22)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82905EA4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// stw r30,3748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3748, ctx.r30.u32);
	// addi r3,r31,3780
	ctx.r3.s64 = ctx.r31.s64 + 3780;
	// addi r4,r5,21548
	ctx.r4.s64 = ctx.r5.s64 + 21548;
	// stw r28,3732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3732, ctx.r28.u32);
	// stb r29,3744(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3744, ctx.r29.u8);
	// stw r4,3724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3724, ctx.r4.u32);
	// bl 0x829046e8
	ctx.lr = 0x82905EC4;
	sub_829046E8(ctx, base);
	// addi r3,r31,3836
	ctx.r3.s64 = ctx.r31.s64 + 3836;
	// bl 0x82904790
	ctx.lr = 0x82905ECC;
	sub_82904790(ctx, base);
	// addi r3,r31,3888
	ctx.r3.s64 = ctx.r31.s64 + 3888;
	// bl 0x82903478
	ctx.lr = 0x82905ED4;
	sub_82903478(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,3940
	ctx.r3.s64 = ctx.r31.s64 + 3940;
	// addi r10,r11,21728
	ctx.r10.s64 = ctx.r11.s64 + 21728;
	// stw r10,3888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3888, ctx.r10.u32);
	// bl 0x829033b0
	ctx.lr = 0x82905EE8;
	sub_829033B0(ctx, base);
	// addi r3,r31,4000
	ctx.r3.s64 = ctx.r31.s64 + 4000;
	// bl 0x82904860
	ctx.lr = 0x82905EF0;
	sub_82904860(ctx, base);
	// stw r22,4056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4056, ctx.r22.u32);
	// stw r28,4068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4068, ctx.r28.u32);
	// addi r3,r31,4056
	ctx.r3.s64 = ctx.r31.s64 + 4056;
	// stw r23,4060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4060, ctx.r23.u32);
	// stw r30,4072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4072, ctx.r30.u32);
	// lwz r9,4(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82905F10;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// stw r30,4080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4080, ctx.r30.u32);
	// stw r28,4064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4064, ctx.r28.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r8,21848
	ctx.r6.s64 = ctx.r8.s64 + 21848;
	// stb r29,4076(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4076, ctx.r29.u8);
	// addi r3,r31,4108
	ctx.r3.s64 = ctx.r31.s64 + 4108;
	// stw r6,4056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4056, ctx.r6.u32);
	// stw r30,4124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4124, ctx.r30.u32);
	// stw r22,4108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4108, ctx.r22.u32);
	// stw r29,4116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4116, ctx.r29.u32);
	// stw r7,4120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4120, ctx.r7.u32);
	// lwz r5,4(r22)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82905F4C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r30,4132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4132, ctx.r30.u32);
	// addi r10,r4,18788
	ctx.r10.s64 = ctx.r4.s64 + 18788;
	// stw r27,4112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4112, ctx.r27.u32);
	// addi r3,r31,4160
	ctx.r3.s64 = ctx.r31.s64 + 4160;
	// stb r29,4128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4128, ctx.r29.u8);
	// stw r10,4108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4108, ctx.r10.u32);
	// stw r29,4172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4172, ctx.r29.u32);
	// stw r11,4164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4164, ctx.r11.u32);
	// stw r22,4160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4160, ctx.r22.u32);
	// stw r30,4176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4176, ctx.r30.u32);
	// lwz r9,4(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82905F88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// stw r30,4184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4184, ctx.r30.u32);
	// addi r3,r31,4212
	ctx.r3.s64 = ctx.r31.s64 + 4212;
	// addi r7,r8,20048
	ctx.r7.s64 = ctx.r8.s64 + 20048;
	// stw r28,4168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4168, ctx.r28.u32);
	// stb r29,4180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4180, ctx.r29.u8);
	// stw r7,4160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4160, ctx.r7.u32);
	// bl 0x82903d10
	ctx.lr = 0x82905FA8;
	sub_82903D10(ctx, base);
	// addi r3,r31,4272
	ctx.r3.s64 = ctx.r31.s64 + 4272;
	// bl 0x82903d80
	ctx.lr = 0x82905FB0;
	sub_82903D80(ctx, base);
	// stw r22,4332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4332, ctx.r22.u32);
	// stw r29,4336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4336, ctx.r29.u32);
	// addi r3,r31,4332
	ctx.r3.s64 = ctx.r31.s64 + 4332;
	// stw r28,4344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4344, ctx.r28.u32);
	// stw r30,4348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4348, ctx.r30.u32);
	// lwz r6,4(r22)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82905FD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// stw r30,4356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4356, ctx.r30.u32);
	// addi r3,r31,4388
	ctx.r3.s64 = ctx.r31.s64 + 4388;
	// addi r4,r5,21908
	ctx.r4.s64 = ctx.r5.s64 + 21908;
	// stb r29,4352(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4352, ctx.r29.u8);
	// stw r28,4340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4340, ctx.r28.u32);
	// stw r4,4332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4332, ctx.r4.u32);
	// stb r30,4384(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4384, ctx.r30.u8);
	// stw r22,4388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4388, ctx.r22.u32);
	// stw r29,4392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4392, ctx.r29.u32);
	// stw r28,4400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4400, ctx.r28.u32);
	// stw r30,4404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4404, ctx.r30.u32);
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8290600C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r30,4412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4412, ctx.r30.u32);
	// addi r3,r31,4444
	ctx.r3.s64 = ctx.r31.s64 + 4444;
	// addi r9,r10,21968
	ctx.r9.s64 = ctx.r10.s64 + 21968;
	// stw r28,4396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4396, ctx.r28.u32);
	// stb r29,4408(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4408, ctx.r29.u8);
	// stw r9,4388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4388, ctx.r9.u32);
	// stb r30,4440(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4440, ctx.r30.u8);
	// stw r28,4456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4456, ctx.r28.u32);
	// stw r30,4460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4460, ctx.r30.u32);
	// stw r22,4444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4444, ctx.r22.u32);
	// stw r29,4452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4452, ctx.r29.u32);
	// lwz r8,4(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82906048;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// stw r30,4468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4468, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,20468
	ctx.r6.s64 = ctx.r7.s64 + 20468;
	// stw r27,4448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4448, ctx.r27.u32);
	// stb r29,4464(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4464, ctx.r29.u8);
	// stw r6,4444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4444, ctx.r6.u32);
	// stb r30,4496(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4496, ctx.r30.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82906070"))) PPC_WEAK_FUNC(sub_82906070);
PPC_FUNC_IMPL(__imp__sub_82906070) {
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
	// bl 0x82905790
	ctx.lr = 0x82906088;
	sub_82905790(ctx, base);
	// li r9,72
	ctx.r9.s64 = 72;
	// addi r10,r31,4500
	ctx.r10.s64 = ctx.r31.s64 + 4500;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8290609C:
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8290609c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8290609C;
	// addi r11,r31,292
	ctx.r11.s64 = ctx.r31.s64 + 292;
	// addi r9,r31,344
	ctx.r9.s64 = ctx.r31.s64 + 344;
	// addi r8,r31,400
	ctx.r8.s64 = ctx.r31.s64 + 400;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r7,r31,452
	ctx.r7.s64 = ctx.r31.s64 + 452;
	// stw r9,4504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4504, ctx.r9.u32);
	// stw r8,4508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4508, ctx.r8.u32);
	// addi r6,r31,504
	ctx.r6.s64 = ctx.r31.s64 + 504;
	// stw r7,4512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4512, ctx.r7.u32);
	// addi r5,r31,556
	ctx.r5.s64 = ctx.r31.s64 + 556;
	// addi r4,r31,608
	ctx.r4.s64 = ctx.r31.s64 + 608;
	// stw r6,4516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4516, ctx.r6.u32);
	// addi r3,r31,660
	ctx.r3.s64 = ctx.r31.s64 + 660;
	// stw r5,4520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4520, ctx.r5.u32);
	// addi r11,r31,712
	ctx.r11.s64 = ctx.r31.s64 + 712;
	// stw r4,4524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4524, ctx.r4.u32);
	// addi r10,r31,764
	ctx.r10.s64 = ctx.r31.s64 + 764;
	// stw r3,4528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4528, ctx.r3.u32);
	// addi r9,r31,816
	ctx.r9.s64 = ctx.r31.s64 + 816;
	// stw r11,4532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4532, ctx.r11.u32);
	// addi r8,r31,872
	ctx.r8.s64 = ctx.r31.s64 + 872;
	// stw r10,4536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4536, ctx.r10.u32);
	// addi r7,r31,924
	ctx.r7.s64 = ctx.r31.s64 + 924;
	// stw r9,4540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4540, ctx.r9.u32);
	// stw r8,4544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4544, ctx.r8.u32);
	// addi r6,r31,976
	ctx.r6.s64 = ctx.r31.s64 + 976;
	// stw r7,4548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4548, ctx.r7.u32);
	// addi r5,r31,1028
	ctx.r5.s64 = ctx.r31.s64 + 1028;
	// addi r4,r31,1080
	ctx.r4.s64 = ctx.r31.s64 + 1080;
	// stw r6,4552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4552, ctx.r6.u32);
	// addi r3,r31,1132
	ctx.r3.s64 = ctx.r31.s64 + 1132;
	// stw r5,4556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4556, ctx.r5.u32);
	// addi r11,r31,1184
	ctx.r11.s64 = ctx.r31.s64 + 1184;
	// stw r4,4560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4560, ctx.r4.u32);
	// addi r10,r31,1240
	ctx.r10.s64 = ctx.r31.s64 + 1240;
	// stw r3,4564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4564, ctx.r3.u32);
	// addi r9,r31,1308
	ctx.r9.s64 = ctx.r31.s64 + 1308;
	// stw r11,4568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4568, ctx.r11.u32);
	// addi r8,r31,1368
	ctx.r8.s64 = ctx.r31.s64 + 1368;
	// stw r10,4572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4572, ctx.r10.u32);
	// addi r7,r31,1424
	ctx.r7.s64 = ctx.r31.s64 + 1424;
	// stw r9,4576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4576, ctx.r9.u32);
	// addi r6,r31,1480
	ctx.r6.s64 = ctx.r31.s64 + 1480;
	// stw r8,4580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4580, ctx.r8.u32);
	// stw r7,4584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4584, ctx.r7.u32);
	// addi r5,r31,1536
	ctx.r5.s64 = ctx.r31.s64 + 1536;
	// addi r4,r31,1588
	ctx.r4.s64 = ctx.r31.s64 + 1588;
	// stw r6,4588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4588, ctx.r6.u32);
	// addi r3,r31,1640
	ctx.r3.s64 = ctx.r31.s64 + 1640;
	// stw r5,4592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4592, ctx.r5.u32);
	// addi r11,r31,1692
	ctx.r11.s64 = ctx.r31.s64 + 1692;
	// stw r4,4596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4596, ctx.r4.u32);
	// addi r10,r31,1764
	ctx.r10.s64 = ctx.r31.s64 + 1764;
	// stw r3,4600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4600, ctx.r3.u32);
	// addi r9,r31,1888
	ctx.r9.s64 = ctx.r31.s64 + 1888;
	// stw r11,4604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4604, ctx.r11.u32);
	// addi r8,r31,1988
	ctx.r8.s64 = ctx.r31.s64 + 1988;
	// stw r10,4608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4608, ctx.r10.u32);
	// addi r7,r31,2040
	ctx.r7.s64 = ctx.r31.s64 + 2040;
	// stw r9,4612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4612, ctx.r9.u32);
	// addi r6,r31,2092
	ctx.r6.s64 = ctx.r31.s64 + 2092;
	// stw r8,4616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4616, ctx.r8.u32);
	// stw r7,4620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4620, ctx.r7.u32);
	// addi r5,r31,2156
	ctx.r5.s64 = ctx.r31.s64 + 2156;
	// addi r4,r31,2208
	ctx.r4.s64 = ctx.r31.s64 + 2208;
	// stw r6,4624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4624, ctx.r6.u32);
	// addi r3,r31,2260
	ctx.r3.s64 = ctx.r31.s64 + 2260;
	// stw r5,4628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4628, ctx.r5.u32);
	// addi r11,r31,2312
	ctx.r11.s64 = ctx.r31.s64 + 2312;
	// stw r4,4632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4632, ctx.r4.u32);
	// addi r10,r31,2416
	ctx.r10.s64 = ctx.r31.s64 + 2416;
	// stw r3,4636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4636, ctx.r3.u32);
	// addi r9,r31,2364
	ctx.r9.s64 = ctx.r31.s64 + 2364;
	// stw r11,4640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4640, ctx.r11.u32);
	// addi r8,r31,2472
	ctx.r8.s64 = ctx.r31.s64 + 2472;
	// stw r10,4648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4648, ctx.r10.u32);
	// addi r7,r31,2524
	ctx.r7.s64 = ctx.r31.s64 + 2524;
	// stw r9,4644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4644, ctx.r9.u32);
	// stw r8,4652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4652, ctx.r8.u32);
	// addi r6,r31,2576
	ctx.r6.s64 = ctx.r31.s64 + 2576;
	// stw r7,4656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4656, ctx.r7.u32);
	// addi r3,r31,2732
	ctx.r3.s64 = ctx.r31.s64 + 2732;
	// stw r6,4660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4660, ctx.r6.u32);
	// addi r5,r31,2628
	ctx.r5.s64 = ctx.r31.s64 + 2628;
	// addi r4,r31,2680
	ctx.r4.s64 = ctx.r31.s64 + 2680;
	// stw r3,4672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4672, ctx.r3.u32);
	// addi r11,r31,2784
	ctx.r11.s64 = ctx.r31.s64 + 2784;
	// stw r5,4664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4664, ctx.r5.u32);
	// stw r4,4668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4668, ctx.r4.u32);
	// addi r3,r31,3148
	ctx.r3.s64 = ctx.r31.s64 + 3148;
	// stw r11,4676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4676, ctx.r11.u32);
	// addi r10,r31,4108
	ctx.r10.s64 = ctx.r31.s64 + 4108;
	// addi r9,r31,2836
	ctx.r9.s64 = ctx.r31.s64 + 2836;
	// stw r3,4704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4704, ctx.r3.u32);
	// addi r8,r31,2888
	ctx.r8.s64 = ctx.r31.s64 + 2888;
	// stw r10,4760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4760, ctx.r10.u32);
	// addi r7,r31,2940
	ctx.r7.s64 = ctx.r31.s64 + 2940;
	// stw r9,4680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4680, ctx.r9.u32);
	// addi r6,r31,2992
	ctx.r6.s64 = ctx.r31.s64 + 2992;
	// stw r8,4684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4684, ctx.r8.u32);
	// addi r5,r31,3044
	ctx.r5.s64 = ctx.r31.s64 + 3044;
	// stw r7,4688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4688, ctx.r7.u32);
	// addi r4,r31,3096
	ctx.r4.s64 = ctx.r31.s64 + 3096;
	// stw r6,4692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4692, ctx.r6.u32);
	// addi r11,r31,3200
	ctx.r11.s64 = ctx.r31.s64 + 3200;
	// stw r5,4696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4696, ctx.r5.u32);
	// stw r4,4700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4700, ctx.r4.u32);
	// addi r3,r31,3836
	ctx.r3.s64 = ctx.r31.s64 + 3836;
	// stw r11,4708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4708, ctx.r11.u32);
	// addi r10,r31,3412
	ctx.r10.s64 = ctx.r31.s64 + 3412;
	// addi r9,r31,3508
	ctx.r9.s64 = ctx.r31.s64 + 3508;
	// stw r3,4740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4740, ctx.r3.u32);
	// addi r8,r31,3564
	ctx.r8.s64 = ctx.r31.s64 + 3564;
	// stw r10,4712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4712, ctx.r10.u32);
	// addi r7,r31,3616
	ctx.r7.s64 = ctx.r31.s64 + 3616;
	// stw r9,4716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4716, ctx.r9.u32);
	// addi r6,r31,3672
	ctx.r6.s64 = ctx.r31.s64 + 3672;
	// stw r8,4720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4720, ctx.r8.u32);
	// addi r5,r31,3724
	ctx.r5.s64 = ctx.r31.s64 + 3724;
	// stw r7,4724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4724, ctx.r7.u32);
	// addi r4,r31,3780
	ctx.r4.s64 = ctx.r31.s64 + 3780;
	// stw r6,4728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4728, ctx.r6.u32);
	// addi r11,r31,3888
	ctx.r11.s64 = ctx.r31.s64 + 3888;
	// stw r5,4732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4732, ctx.r5.u32);
	// addi r3,r31,4332
	ctx.r3.s64 = ctx.r31.s64 + 4332;
	// stw r4,4736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4736, ctx.r4.u32);
	// stw r11,4744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4744, ctx.r11.u32);
	// addi r10,r31,3940
	ctx.r10.s64 = ctx.r31.s64 + 3940;
	// addi r9,r31,4000
	ctx.r9.s64 = ctx.r31.s64 + 4000;
	// stw r3,4776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4776, ctx.r3.u32);
	// addi r8,r31,4056
	ctx.r8.s64 = ctx.r31.s64 + 4056;
	// stw r10,4748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4748, ctx.r10.u32);
	// addi r7,r31,4444
	ctx.r7.s64 = ctx.r31.s64 + 4444;
	// stw r9,4752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4752, ctx.r9.u32);
	// addi r6,r31,4160
	ctx.r6.s64 = ctx.r31.s64 + 4160;
	// stw r8,4756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4756, ctx.r8.u32);
	// addi r5,r31,4212
	ctx.r5.s64 = ctx.r31.s64 + 4212;
	// stw r7,4784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4784, ctx.r7.u32);
	// addi r4,r31,4272
	ctx.r4.s64 = ctx.r31.s64 + 4272;
	// stw r6,4764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4764, ctx.r6.u32);
	// addi r11,r31,4388
	ctx.r11.s64 = ctx.r31.s64 + 4388;
	// stw r5,4768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4768, ctx.r5.u32);
	// stw r4,4772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4772, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4780, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_829062FC"))) PPC_WEAK_FUNC(sub_829062FC);
PPC_FUNC_IMPL(__imp__sub_829062FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82906300"))) PPC_WEAK_FUNC(sub_82906300);
PPC_FUNC_IMPL(__imp__sub_82906300) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82906308;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r27,192(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// bl 0x82a0c760
	ctx.lr = 0x8290632C;
	sub_82A0C760(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,19
	ctx.r10.s64 = 19;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x82906360
	if (cr6.lt) goto loc_82906360;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82906360:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x8357ece0
	ctx.lr = 0x8290636C;
	sub_8357ECE0(ctx, base);
	// bl 0x82a47e80
	ctx.lr = 0x82906370;
	sub_82A47E80(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// li r10,18
	ctx.r10.s64 = 18;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x8290638c
	if (cr6.eq) goto loc_8290638C;
	// li r10,17
	ctx.r10.s64 = 17;
loc_8290638C:
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// li r10,62
	ctx.r10.s64 = 62;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lbz r8,9(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82906430
	if (cr6.eq) goto loc_82906430;
	// lbz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x829063ec
	if (cr6.eq) goto loc_829063EC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r10,48
	ctx.r10.s64 = 48;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_829063EC:
	// lbz r10,10(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 10);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82906430
	if (cr6.eq) goto loc_82906430;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r10,49
	ctx.r10.s64 = 49;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,42
	ctx.r8.s64 = 42;
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82906430:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82906450
	if (cr6.eq) goto loc_82906450;
	// cmpwi cr6,r10,42
	cr6.compare<int32_t>(ctx.r10.s32, 42, xer);
	// beq cr6,0x82906478
	if (cr6.eq) goto loc_82906478;
	// cmpwi cr6,r10,72
	cr6.compare<int32_t>(ctx.r10.s32, 72, xer);
	// bne cr6,0x8290645c
	if (!cr6.eq) goto loc_8290645C;
	// b 0x82906478
	goto loc_82906478;
loc_82906450:
	// lbz r10,10(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 10);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82906478
	if (cr6.eq) goto loc_82906478;
loc_8290645C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r10,24
	ctx.r10.s64 = 24;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82906478:
	// lbz r10,10(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 10);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x829064bc
	if (!cr6.eq) goto loc_829064BC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r10,45
	ctx.r10.s64 = 45;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,26
	ctx.r8.s64 = 26;
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
loc_829064BC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r10,r11,28,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8290650c
	if (!cr6.eq) goto loc_8290650C;
	// bl 0x83740868
	ctx.lr = 0x829064D4;
	sub_83740868(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r9,40(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// lfs f0,9796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9796);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-24912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24912);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f13
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bge cr6,0x82906508
	if (!cr6.lt) goto loc_82906508;
	// bl 0x83740868
	ctx.lr = 0x82906504;
	sub_83740868(ctx, base);
	// b 0x8290650c
	goto loc_8290650C;
loc_82906508:
	// li r30,1
	ctx.r30.s64 = 1;
loc_8290650C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82906698
	if (cr6.eq) goto loc_82906698;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// stwx r10,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r7.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x82a38be0
	ctx.lr = 0x82906580;
	sub_82A38BE0(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// lbz r11,10(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 10);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x829065d8
	if (cr6.eq) goto loc_829065D8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82906678
	if (!cr6.eq) goto loc_82906678;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// b 0x82906678
	goto loc_82906678;
loc_829065D8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290664c
	if (!cr6.eq) goto loc_8290664C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x82906610
	if (cr6.lt) goto loc_82906610;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82906610:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x8357ece0
	ctx.lr = 0x8290661C;
	sub_8357ECE0(ctx, base);
	// bl 0x82a47dc0
	ctx.lr = 0x82906620;
	sub_82A47DC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// li r10,53
	ctx.r10.s64 = 53;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x8290663c
	if (cr6.eq) goto loc_8290663C;
	// li r10,3
	ctx.r10.s64 = 3;
loc_8290663C:
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
loc_8290664C:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x8290665c
	if (cr6.lt) goto loc_8290665C;
	// li r11,23
	ctx.r11.s64 = 23;
loc_8290665C:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x8357ece0
	ctx.lr = 0x82906668;
	sub_8357ECE0(ctx, base);
	// bl 0x82a47da0
	ctx.lr = 0x8290666C;
	sub_82A47DA0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// li r10,52
	ctx.r10.s64 = 52;
	// beq cr6,0x8290667c
	if (cr6.eq) goto loc_8290667C;
loc_82906678:
	// li r10,2
	ctx.r10.s64 = 2;
loc_8290667C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
loc_82906698:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,25
	ctx.r10.s64 = 25;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// bl 0x82905510
	ctx.lr = 0x829066C4;
	sub_82905510(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829066CC"))) PPC_WEAK_FUNC(sub_829066CC);
PPC_FUNC_IMPL(__imp__sub_829066CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829066D0"))) PPC_WEAK_FUNC(sub_829066D0);
PPC_FUNC_IMPL(__imp__sub_829066D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x829066D8;
	__savegprlr_17(ctx, base);
	// stfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f30.u64);
	// stfd f31,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82906704
	if (!cr6.lt) goto loc_82906704;
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x8290672c
	goto loc_8290672C;
loc_82906704:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x82906714
	if (!cr6.lt) goto loc_82906714;
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x8290672c
	goto loc_8290672C;
loc_82906714:
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
	// clrlwi r25,r6,31
	ctx.r25.u64 = ctx.r6.u32 & 0x1;
loc_8290672C:
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r29,132(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r23,292(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// lwz r18,192(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// lwz r19,32(r3)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x82a0c710
	ctx.lr = 0x82906750;
	sub_82A0C710(ctx, base);
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// lwz r4,20(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c760
	ctx.lr = 0x82906764;
	sub_82A0C760(ctx, base);
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r4,20(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c788
	ctx.lr = 0x82906778;
	sub_82A0C788(ctx, base);
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r4,20(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c7b0
	ctx.lr = 0x8290678C;
	sub_82A0C7B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a22b40
	ctx.lr = 0x82906798;
	sub_82A22B40(ctx, base);
	// lwz r30,16(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x829067b0
	if (cr6.lt) goto loc_829067B0;
	// li r11,23
	ctx.r11.s64 = 23;
loc_829067B0:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r4,r11,r18
	ctx.r4.u64 = ctx.r11.u64 + ctx.r18.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,112
	ctx.r5.s64 = 112;
	// bl 0x831ce980
	ctx.lr = 0x829067C4;
	sub_831CE980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82a33040
	ctx.lr = 0x829067D0;
	sub_82A33040(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bge cr6,0x82906868
	if (!cr6.lt) goto loc_82906868;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8357ece0
	ctx.lr = 0x829067E0;
	sub_8357ECE0(ctx, base);
	// bl 0x82a47d40
	ctx.lr = 0x829067E4;
	sub_82A47D40(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,20(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82a21718
	ctx.lr = 0x829067F4;
	sub_82A21718(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82906868
	if (cr6.eq) goto loc_82906868;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82910b20
	ctx.lr = 0x82906808;
	sub_82910B20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82906834
	if (!cr6.eq) goto loc_82906834;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,14
	ctx.r10.s64 = 14;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
loc_82906834:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,13
	ctx.r10.s64 = 13;
	// li r9,15
	ctx.r9.s64 = 15;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r9.u32);
	// b 0x82906934
	goto loc_82906934;
loc_82906868:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,19
	ctx.r10.s64 = 19;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x82906898
	if (cr6.lt) goto loc_82906898;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82906898:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r3,r11,r18
	ctx.r3.u64 = ctx.r11.u64 + ctx.r18.u64;
	// bl 0x8357ece0
	ctx.lr = 0x829068A4;
	sub_8357ECE0(ctx, base);
	// bl 0x82a47e80
	ctx.lr = 0x829068A8;
	sub_82A47E80(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// li r10,18
	ctx.r10.s64 = 18;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x829068c4
	if (cr6.eq) goto loc_829068C4;
	// li r10,17
	ctx.r10.s64 = 17;
loc_829068C4:
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// li r10,62
	ctx.r10.s64 = 62;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lbz r8,9(r17)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r17.u32 + 9);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82906924
	if (cr6.eq) goto loc_82906924;
	// lbz r10,8(r17)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r17.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82906924
	if (cr6.eq) goto loc_82906924;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r10,39
	ctx.r10.s64 = 39;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82906924:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r10,26
	ctx.r10.s64 = 26;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
loc_82906934:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82906970
	if (cr6.eq) goto loc_82906970;
	// cmpwi cr6,r10,72
	cr6.compare<int32_t>(ctx.r10.s32, 72, xer);
	// beq cr6,0x82906970
	if (cr6.eq) goto loc_82906970;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r10,24
	ctx.r10.s64 = 24;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_82906970:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82904b80
	ctx.lr = 0x8290697C;
	sub_82904B80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290698c
	if (cr6.eq) goto loc_8290698C;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8290698C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// clrlwi r22,r30,24
	ctx.r22.u64 = ctx.r30.u32 & 0xFF;
	// addi r29,r11,17388
	ctx.r29.s64 = ctx.r11.s64 + 17388;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// addi r5,r29,-128
	ctx.r5.s64 = ctx.r29.s64 + -128;
	// bne cr6,0x829069a8
	if (!cr6.eq) goto loc_829069A8;
	// addi r5,r29,-124
	ctx.r5.s64 = ctx.r29.s64 + -124;
loc_829069A8:
	// addi r4,r29,-120
	ctx.r4.s64 = ctx.r29.s64 + -120;
	// lwz r3,20(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// bl 0x83102db0
	ctx.lr = 0x829069B4;
	sub_83102DB0(ctx, base);
	// lbz r11,9(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + 9);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829069ec
	if (cr6.eq) goto loc_829069EC;
	// lbz r11,1391(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 1391);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829069ec
	if (cr6.eq) goto loc_829069EC;
	// lbz r11,8(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829069ec
	if (cr6.eq) goto loc_829069EC;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// lwz r3,20(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x83102db0
	ctx.lr = 0x829069EC;
	sub_83102DB0(ctx, base);
loc_829069EC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82a44ac0
	ctx.lr = 0x829069F8;
	sub_82A44AC0(ctx, base);
	// addi r26,r26,1280
	ctx.r26.s64 = ctx.r26.s64 + 1280;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,-20096(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20096);
	ctx.f0.f64 = double(temp.f32);
	// fabs f1,f12
	ctx.f1.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82906a34
	if (cr6.lt) goto loc_82906A34;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// addi r4,r29,92
	ctx.r4.s64 = ctx.r29.s64 + 92;
	// lwz r3,20(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x83102db0
	ctx.lr = 0x82906A34;
	sub_83102DB0(ctx, base);
loc_82906A34:
	// bl 0x83740868
	ctx.lr = 0x82906A38;
	sub_83740868(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r9,40(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// lfs f30,-27732(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27732);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,-24912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24912);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f0,f1,f30,f31
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f30.f64 + ctx.f31.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bge cr6,0x82906a94
	if (!cr6.lt) goto loc_82906A94;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x83740868
	ctx.lr = 0x82906A6C;
	sub_83740868(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lwz r5,40(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// addi r4,r29,172
	ctx.r4.s64 = ctx.r29.s64 + 172;
	// lwz r3,20(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// lfs f0,9796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9796);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f31
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83102db0
	ctx.lr = 0x82906A94;
	sub_83102DB0(ctx, base);
loc_82906A94:
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82906ac0
	if (cr6.lt) goto loc_82906AC0;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x82906ac0
	if (!cr6.lt) goto loc_82906AC0;
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82906ac0
	if (cr6.lt) goto loc_82906AC0;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82906ac4
	if (cr6.lt) goto loc_82906AC4;
loc_82906AC0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82906AC4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82906c00
	if (cr6.eq) goto loc_82906C00;
	// cmpw cr6,r10,r25
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, xer);
	// bne cr6,0x82906c00
	if (!cr6.eq) goto loc_82906C00;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82906afc
	if (!cr6.gt) goto loc_82906AFC;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// ble cr6,0x82906af4
	if (!cr6.gt) goto loc_82906AF4;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(ctx.r11.s32, 16, xer);
	// bne cr6,0x82906afc
	if (!cr6.eq) goto loc_82906AFC;
loc_82906AF4:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82906b00
	goto loc_82906B00;
loc_82906AFC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82906B00:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82906b14
	if (!cr6.eq) goto loc_82906B14;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x82906c00
	if (!cr6.eq) goto loc_82906C00;
loc_82906B14:
	// lwz r10,4472(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4472);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// lwz r9,16(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// subf r30,r9,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r9.s64;
	// beq cr6,0x82906b70
	if (cr6.eq) goto loc_82906B70;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x82906b50
	if (cr6.eq) goto loc_82906B50;
	// bl 0x83740868
	ctx.lr = 0x82906B34;
	sub_83740868(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lfs f0,21212(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21212);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f31
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82906bc4
	goto loc_82906BC4;
loc_82906B50:
	// bl 0x83740868
	ctx.lr = 0x82906B54;
	sub_83740868(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,20048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20048);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f31
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82906bc4
	goto loc_82906BC4;
loc_82906B70:
	// lwz r11,56(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 56);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82906ba8
	if (!cr6.eq) goto loc_82906BA8;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,8412(r19)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 8412);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82906ba8
	if (!cr6.lt) goto loc_82906BA8;
	// bl 0x83740868
	ctx.lr = 0x82906B94;
	sub_83740868(ctx, base);
	// fmadds f0,f1,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f30.f64 + ctx.f31.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82906bc4
	goto loc_82906BC4;
loc_82906BA8:
	// bl 0x83740868
	ctx.lr = 0x82906BAC;
	sub_83740868(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-11340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11340);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f31
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82906BC4:
	// cmplw cr6,r6,r30
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r30.u32, xer);
	// blt cr6,0x82906be0
	if (cr6.lt) goto loc_82906BE0;
	// addi r4,r29,268
	ctx.r4.s64 = ctx.r29.s64 + 268;
	// lwz r3,20(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x83102db0
	ctx.lr = 0x82906BE0;
	sub_83102DB0(ctx, base);
loc_82906BE0:
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// rlwinm r10,r11,28,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82906c00
	if (cr6.eq) goto loc_82906C00;
	// addi r4,r29,-64
	ctx.r4.s64 = ctx.r29.s64 + -64;
	// lwz r3,20(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x83102db0
	ctx.lr = 0x82906C00;
	sub_83102DB0(ctx, base);
loc_82906C00:
	// clrlwi r30,r28,24
	ctx.r30.u64 = ctx.r28.u32 & 0xFF;
	// addi r5,r29,352
	ctx.r5.s64 = ctx.r29.s64 + 352;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x82906c14
	if (!cr6.eq) goto loc_82906C14;
	// addi r5,r29,-566
	ctx.r5.s64 = ctx.r29.s64 + -566;
loc_82906C14:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,20(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// bl 0x83102db0
	ctx.lr = 0x82906C20;
	sub_83102DB0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82906d98
	if (cr6.eq) goto loc_82906D98;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stwx r10,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r10.u32);
	// lfs f0,9008(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r3,r31
	PPC_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r7.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lfs f13,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lbz r7,252(r20)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r20.u32 + 252);
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fcmpu cr6,f9,f0
	cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bge cr6,0x82906cd4
	if (!cr6.lt) goto loc_82906CD4;
	// addi r4,r19,8144
	ctx.r4.s64 = ctx.r19.s64 + 8144;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a5a6e8
	ctx.lr = 0x82906CBC;
	sub_82A5A6E8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,11772(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11772);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82906d3c
	if (!cr6.lt) goto loc_82906D3C;
	// li r10,4
	ctx.r10.s64 = 4;
	// b 0x82906d20
	goto loc_82906D20;
loc_82906CD4:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82a38be0
	ctx.lr = 0x82906CE4;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82906d1c
	if (!cr6.eq) goto loc_82906D1C;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x82906d00
	if (cr6.lt) goto loc_82906D00;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82906D00:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r3,r11,r18
	ctx.r3.u64 = ctx.r11.u64 + ctx.r18.u64;
	// bl 0x8357ece0
	ctx.lr = 0x82906D0C;
	sub_8357ECE0(ctx, base);
	// bl 0x82a47dc0
	ctx.lr = 0x82906D10;
	sub_82A47DC0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// li r10,53
	ctx.r10.s64 = 53;
	// beq cr6,0x82906d20
	if (cr6.eq) goto loc_82906D20;
loc_82906D1C:
	// li r10,3
	ctx.r10.s64 = 3;
loc_82906D20:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
loc_82906D3C:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// bne cr6,0x82906da0
	if (!cr6.eq) goto loc_82906DA0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82a38be0
	ctx.lr = 0x82906D54;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82906d90
	if (!cr6.eq) goto loc_82906D90;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x82906d70
	if (cr6.lt) goto loc_82906D70;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82906D70:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r3,r11,r18
	ctx.r3.u64 = ctx.r11.u64 + ctx.r18.u64;
	// bl 0x8357ece0
	ctx.lr = 0x82906D7C;
	sub_8357ECE0(ctx, base);
	// bl 0x82a47da0
	ctx.lr = 0x82906D80;
	sub_82A47DA0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82906d90
	if (!cr6.eq) goto loc_82906D90;
	// li r10,52
	ctx.r10.s64 = 52;
	// b 0x82906da4
	goto loc_82906DA4;
loc_82906D90:
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x82906da4
	goto loc_82906DA4;
loc_82906D98:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x82906dc0
	if (cr6.eq) goto loc_82906DC0;
loc_82906DA0:
	// li r10,9
	ctx.r10.s64 = 9;
loc_82906DA4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
loc_82906DC0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,25
	ctx.r10.s64 = 25;
	// li r9,50
	ctx.r9.s64 = 50;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lbz r4,9(r17)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r17.u32 + 9);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82906e14
	if (cr6.eq) goto loc_82906E14;
	// lbz r10,8(r17)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r17.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82906e30
	if (!cr6.eq) goto loc_82906E30;
loc_82906E14:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r10,51
	ctx.r10.s64 = 51;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_82906E30:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82905510
	ctx.lr = 0x82906E3C;
	sub_82905510(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82906E4C"))) PPC_WEAK_FUNC(sub_82906E4C);
PPC_FUNC_IMPL(__imp__sub_82906E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82906E50"))) PPC_WEAK_FUNC(sub_82906E50);
PPC_FUNC_IMPL(__imp__sub_82906E50) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,192(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// lwz r8,4548(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4548);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82906e98
	if (!cr6.eq) goto loc_82906E98;
	// lwz r11,4460(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4460);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82906f94
	if (cr6.eq) goto loc_82906F94;
loc_82906E98:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,25
	ctx.r10.s64 = 25;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lbz r6,9(r5)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + 9);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82906ee0
	if (cr6.eq) goto loc_82906EE0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r10,31
	ctx.r10.s64 = 31;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82906EE0:
	// lbz r10,112(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 112);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82906f08
	if (!cr6.eq) goto loc_82906F08;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r10,54
	ctx.r10.s64 = 54;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_82906F08:
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82a33040
	ctx.lr = 0x82906F10;
	sub_82A33040(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bge cr6,0x82906f88
	if (!cr6.lt) goto loc_82906F88;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,15
	ctx.r10.s64 = 15;
	// li r9,13
	ctx.r9.s64 = 13;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// bl 0x82910b20
	ctx.lr = 0x82906F5C;
	sub_82910B20(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82906f88
	if (!cr6.eq) goto loc_82906F88;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,14
	ctx.r10.s64 = 14;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
loc_82906F88:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82905510
	ctx.lr = 0x82906F94;
	sub_82905510(ctx, base);
loc_82906F94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82906FAC"))) PPC_WEAK_FUNC(sub_82906FAC);
PPC_FUNC_IMPL(__imp__sub_82906FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82906FB0"))) PPC_WEAK_FUNC(sub_82906FB0);
PPC_FUNC_IMPL(__imp__sub_82906FB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82906FB8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31763
	ctx.r29.s64 = -2081619968;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r3,-3564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// lwz r28,132(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r24,292(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// lwz r30,192(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// bl 0x82a0c7b0
	ctx.lr = 0x82906FE8;
	sub_82A0C7B0(ctx, base);
	// lwz r10,4460(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4460);
	// li r25,1
	ctx.r25.s64 = 1;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x829072f4
	if (cr6.eq) goto loc_829072F4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,25
	ctx.r10.s64 = 25;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// lwz r4,16(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// bl 0x82a33040
	ctx.lr = 0x82907024;
	sub_82A33040(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bge cr6,0x8290709c
	if (!cr6.lt) goto loc_8290709C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,15
	ctx.r10.s64 = 15;
	// li r9,13
	ctx.r9.s64 = 13;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// bl 0x82910b20
	ctx.lr = 0x82907070;
	sub_82910B20(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8290709c
	if (!cr6.eq) goto loc_8290709C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,14
	ctx.r10.s64 = 14;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
loc_8290709C:
	// lbz r11,9(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 9);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lbz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 8);
	// beq cr6,0x82907204
	if (cr6.eq) goto loc_82907204;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829070f4
	if (cr6.eq) goto loc_829070F4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a22b40
	ctx.lr = 0x829070C0;
	sub_82A22B40(ctx, base);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bne cr6,0x829070e8
	if (!cr6.eq) goto loc_829070E8;
	// li r10,44
	ctx.r10.s64 = 44;
	// li r9,43
	ctx.r9.s64 = 43;
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x8290719c
	goto loc_8290719C;
loc_829070E8:
	// li r10,41
	ctx.r10.s64 = 41;
	// li r9,40
	ctx.r9.s64 = 40;
	// b 0x8290719c
	goto loc_8290719C;
loc_829070F4:
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82907108
	if (!cr6.lt) goto loc_82907108;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82907130
	goto loc_82907130;
loc_82907108:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x82907118
	if (!cr6.lt) goto loc_82907118;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82907130
	goto loc_82907130;
loc_82907118:
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
loc_82907130:
	// lwz r3,-3564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x82907138;
	sub_82A0C710(ctx, base);
	// lbz r11,1391(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1391);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82907158
	if (cr6.eq) goto loc_82907158;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r3,20(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// addi r4,r11,17800
	ctx.r4.s64 = ctx.r11.s64 + 17800;
	// bl 0x83102db0
	ctx.lr = 0x82907154;
	sub_83102DB0(ctx, base);
	// b 0x829071c4
	goto loc_829071C4;
loc_82907158:
	// bl 0x83740868
	ctx.lr = 0x8290715C;
	sub_83740868(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lfs f0,-11340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11340);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-24912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24912);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f13
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bge cr6,0x829071c4
	if (!cr6.lt) goto loc_829071C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,7
	ctx.r10.s64 = 7;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_8290719C:
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
loc_829071C4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,38
	ctx.r10.s64 = 38;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// b 0x829072dc
	goto loc_829072DC;
loc_82907204:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x829072dc
	if (!cr6.eq) goto loc_829072DC;
	// lbz r11,10(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 10);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x829072dc
	if (!cr6.eq) goto loc_829072DC;
	// bl 0x83740868
	ctx.lr = 0x8290721C;
	sub_83740868(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lfs f0,-11340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11340);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-24912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24912);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f13
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bge cr6,0x82907268
	if (!cr6.lt) goto loc_82907268;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
loc_82907268:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// li r7,9
	ctx.r7.s64 = 9;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,10
	ctx.r5.s64 = 10;
	// stwx r10,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r3,r31
	PPC_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r7.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r5.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
loc_829072DC:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829072f4
	if (cr6.eq) goto loc_829072F4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82905510
	ctx.lr = 0x829072F4;
	sub_82905510(ctx, base);
loc_829072F4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829072FC"))) PPC_WEAK_FUNC(sub_829072FC);
PPC_FUNC_IMPL(__imp__sub_829072FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82907300"))) PPC_WEAK_FUNC(sub_82907300);
PPC_FUNC_IMPL(__imp__sub_82907300) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82907308;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,16(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,192(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// lwz r29,292(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x82a33040
	ctx.lr = 0x82907330;
	sub_82A33040(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bge cr6,0x829073e0
	if (!cr6.lt) goto loc_829073E0;
	// lwz r11,5356(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5356);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x829073b4
	if (cr6.eq) goto loc_829073B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,15
	ctx.r10.s64 = 15;
	// li r9,13
	ctx.r9.s64 = 13;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// bl 0x82910b20
	ctx.lr = 0x82907388;
	sub_82910B20(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x829073b4
	if (!cr6.eq) goto loc_829073B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,14
	ctx.r10.s64 = 14;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
loc_829073B4:
	// lwz r11,5356(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5356);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x829073e0
	if (!cr6.eq) goto loc_829073E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,70
	ctx.r10.s64 = 70;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
loc_829073E0:
	// lbz r11,9(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 9);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82907440
	if (cr6.eq) goto loc_82907440;
	// lwz r11,5356(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5356);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x829074a4
	if (!cr6.eq) goto loc_829074A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,43
	ctx.r9.s64 = 43;
	// li r8,65
	ctx.r8.s64 = 65;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x829074a4
	goto loc_829074A4;
loc_82907440:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bne cr6,0x829074a4
	if (!cr6.eq) goto loc_829074A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,34
	ctx.r9.s64 = 34;
	// li r8,32
	ctx.r8.s64 = 32;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// li r6,33
	ctx.r6.s64 = 33;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r3,r31
	PPC_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r6.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
loc_829074A4:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829074bc
	if (cr6.eq) goto loc_829074BC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82905510
	ctx.lr = 0x829074BC;
	sub_82905510(ctx, base);
loc_829074BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829074C4"))) PPC_WEAK_FUNC(sub_829074C4);
PPC_FUNC_IMPL(__imp__sub_829074C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829074C8"))) PPC_WEAK_FUNC(sub_829074C8);
PPC_FUNC_IMPL(__imp__sub_829074C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x829074D0;
	__savegprlr_14(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r22,-31763
	ctx.r22.s64 = -2081619968;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r15,r6
	ctx.r15.u64 = ctx.r6.u64;
	// addi r3,r4,24
	ctx.r3.s64 = ctx.r4.s64 + 24;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,-3564(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -3564);
	// mr r16,r5
	ctx.r16.u64 = ctx.r5.u64;
	// lwz r21,12(r9)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lwz r18,0(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,192(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// lwz r6,432(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// lwz r20,6112(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// lwz r14,292(r11)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// blt cr6,0x82907530
	if (cr6.lt) goto loc_82907530;
	// li r10,23
	ctx.r10.s64 = 23;
loc_82907530:
	// mulli r11,r10,112
	ctx.r11.s64 = ctx.r10.s64 * 112;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82907cc8
	ctx.lr = 0x8290753C;
	sub_82907CC8(ctx, base);
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,2056(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2056);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,424(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 424);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82907558;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,-3564(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -3564);
	// lwz r29,232(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82907594
	if (cr6.eq) goto loc_82907594;
	// lbz r11,4502(r14)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r14.u32 + 4502);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82907594
	if (cr6.eq) goto loc_82907594;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,57
	ctx.r10.s64 = 57;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
loc_82907594:
	// lwz r11,5388(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 5388);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x829075b4
	if (cr6.eq) goto loc_829075B4;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82907610
	if (!cr6.eq) goto loc_82907610;
	// lbz r11,5437(r14)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r14.u32 + 5437);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82907610
	if (cr6.eq) goto loc_82907610;
loc_829075B4:
	// lbz r11,4502(r14)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r14.u32 + 4502);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82907610
	if (cr6.eq) goto loc_82907610;
	// lbz r11,4503(r14)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r14.u32 + 4503);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82907610
	if (!cr6.eq) goto loc_82907610;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82907610
	if (cr6.eq) goto loc_82907610;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,71
	ctx.r10.s64 = 71;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// lbz r6,5068(r14)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r14.u32 + 5068);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82907610
	if (!cr6.eq) goto loc_82907610;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82905510
	ctx.lr = 0x82907610;
	sub_82905510(ctx, base);
loc_82907610:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82907658
	if (cr6.eq) goto loc_82907658;
	// lbz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 32);
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
	// beq cr6,0x82907658
	if (cr6.eq) goto loc_82907658;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,29
	ctx.r10.s64 = 29;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82907658:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,56
	ctx.r10.s64 = 56;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// bl 0x82904a58
	ctx.lr = 0x82907680;
	sub_82904A58(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82907cbc
	if (!cr6.eq) goto loc_82907CBC;
	// lwz r11,4460(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4460);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x829076b8
	if (!cr6.eq) goto loc_829076B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,30
	ctx.r10.s64 = 30;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
loc_829076B8:
	// cmpwi cr6,r18,12
	cr6.compare<int32_t>(ctx.r18.s32, 12, xer);
	// beq cr6,0x82907cbc
	if (cr6.eq) goto loc_82907CBC;
	// li r19,55
	ctx.r19.s64 = 55;
	// cmpwi cr6,r18,6
	cr6.compare<int32_t>(ctx.r18.s32, 6, xer);
	// beq cr6,0x829076e8
	if (cr6.eq) goto loc_829076E8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r19,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r19.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_829076E8:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// li r17,0
	ctx.r17.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82907a1c
	if (cr6.eq) goto loc_82907A1C;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x8290770c
	if (!cr6.lt) goto loc_8290770C;
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
	// b 0x82907734
	goto loc_82907734;
loc_8290770C:
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bge cr6,0x8290771c
	if (!cr6.lt) goto loc_8290771C;
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
	// b 0x82907734
	goto loc_82907734;
loc_8290771C:
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
	// clrlwi r28,r7,31
	ctx.r28.u64 = ctx.r7.u32 & 0x1;
loc_82907734:
	// lwz r3,-3564(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x8290773C;
	sub_82A0C788(ctx, base);
	// lwz r3,-3564(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -3564);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82a0c7b0
	ctx.lr = 0x82907748;
	sub_82A0C7B0(ctx, base);
	// lwz r3,-3564(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -3564);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82a0c760
	ctx.lr = 0x82907754;
	sub_82A0C760(ctx, base);
	// lwz r11,-3564(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -3564);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r24,32(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82a0c710
	ctx.lr = 0x8290776C;
	sub_82A0C710(ctx, base);
	// lwz r10,-3564(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + -3564);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lwz r11,4548(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4548);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r26,r9,16828
	ctx.r26.s64 = ctx.r9.s64 + 16828;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r10,8516(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8516);
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r23,r8,27,31,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// beq cr6,0x829077e0
	if (cr6.eq) goto loc_829077E0;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8290782c
	if (!cr6.eq) goto loc_8290782C;
	// lwz r29,20(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r11,4524(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4524);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// bne cr6,0x8290782c
	if (!cr6.eq) goto loc_8290782C;
	// addi r4,r26,128
	ctx.r4.s64 = ctx.r26.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83102db0
	ctx.lr = 0x829077C0;
	sub_83102DB0(ctx, base);
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290782c
	if (!cr6.eq) goto loc_8290782C;
	// addi r4,r26,172
	ctx.r4.s64 = ctx.r26.s64 + 172;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83102db0
	ctx.lr = 0x829077D8;
	sub_83102DB0(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_829077E0:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r11,4520(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4520);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, xer);
	// bne cr6,0x8290782c
	if (!cr6.eq) goto loc_8290782C;
	// addi r4,r26,40
	ctx.r4.s64 = ctx.r26.s64 + 40;
	// bl 0x83102db0
	ctx.lr = 0x829077F8;
	sub_83102DB0(ctx, base);
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// cmpwi cr6,r3,40
	cr6.compare<int32_t>(ctx.r3.s32, 40, xer);
	// beq cr6,0x8290782c
	if (cr6.eq) goto loc_8290782C;
	// bl 0x82a3d2d0
	ctx.lr = 0x8290780C;
	sub_82A3D2D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8290782c
	if (!cr6.eq) goto loc_8290782C;
	// addi r4,r26,84
	ctx.r4.s64 = ctx.r26.s64 + 84;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x83102db0
	ctx.lr = 0x82907824;
	sub_83102DB0(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_8290782C:
	// lbz r29,252(r27)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r27.u32 + 252);
	// mr r25,r17
	ctx.r25.u64 = ctx.r17.u64;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r27,r17
	ctx.r27.u64 = ctx.r17.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82a2a620
	ctx.lr = 0x82907844;
	sub_82A2A620(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82907940
	if (cr6.eq) goto loc_82907940;
	// addis r11,r21,1
	ctx.r11.s64 = ctx.r21.s64 + 65536;
	// li r25,1
	ctx.r25.s64 = 1;
	// addi r11,r11,24224
	ctx.r11.s64 = ctx.r11.s64 + 24224;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// blt cr6,0x82907874
	if (cr6.lt) goto loc_82907874;
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82907884
	goto loc_82907884;
loc_82907874:
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82907884:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82907930
	if (cr6.eq) goto loc_82907930;
	// cmpwi cr6,r18,2
	cr6.compare<int32_t>(ctx.r18.s32, 2, xer);
	// extsb r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	// bne cr6,0x829078e0
	if (!cr6.eq) goto loc_829078E0;
	// neg r9,r11
	ctx.r9.s64 = -ctx.r11.s64;
	// lfs f13,24(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// addis r10,r21,1
	ctx.r10.s64 = ctx.r21.s64 + 65536;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// addi r10,r10,20408
	ctx.r10.s64 = ctx.r10.s64 + 20408;
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,-8360(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -8360);
	ctx.f0.f64 = double(temp.f32);
	// fadds f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfd f12,104(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f7,f9,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fcmpu cr6,f7,f8
	cr6.compare(ctx.f7.f64, ctx.f8.f64);
	// b 0x82907914
	goto loc_82907914;
loc_829078E0:
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// lfs f12,8144(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8144);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,24(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// lfs f0,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f13,8152(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8152);
	ctx.f13.f64 = double(temp.f32);
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f9,104(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fcmpu cr6,f6,f10
	cr6.compare(ctx.f6.f64, ctx.f10.f64);
loc_82907914:
	// ble cr6,0x82907930
	if (!cr6.gt) goto loc_82907930;
	// lfs f12,28(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fabs f11,f13
	ctx.f11.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fcmpu cr6,f11,f10
	cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bge cr6,0x82907930
	if (!cr6.lt) goto loc_82907930;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82907930:
	// lwz r11,4456(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4456);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// bne cr6,0x82907940
	if (!cr6.eq) goto loc_82907940;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82907940:
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// addi r11,r18,-1
	ctx.r11.s64 = ctx.r18.s64 + -1;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// std r17,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r17.u64);
	// stw r17,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r17.u32);
	// stw r16,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r16.u32);
	// stw r15,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r15.u32);
	// stb r25,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r25.u8);
	// stb r27,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r27.u8);
	// stb r23,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r23.u8);
	// bgt cr6,0x82907a0c
	if (cr6.gt) goto loc_82907A0C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x829079ac
	if (cr6.eq) goto loc_829079AC;
	// bdz 0x829079c0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_829079C0;
	// bdz 0x829079d4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_829079D4;
	// bdz 0x829079d4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_829079D4;
	// bdz 0x829079e8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_829079E8;
	// bdz 0x82907998
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82907998;
	// bdz 0x829079fc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_829079FC;
	// bdz 0x829079fc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_829079FC;
	// b 0x82907a0c
	goto loc_82907A0C;
loc_82907998:
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82904e28
	ctx.lr = 0x829079A8;
	sub_82904E28(ctx, base);
	// b 0x82907a0c
	goto loc_82907A0C;
loc_829079AC:
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82906300
	ctx.lr = 0x829079BC;
	sub_82906300(ctx, base);
	// b 0x82907a0c
	goto loc_82907A0C;
loc_829079C0:
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829066d0
	ctx.lr = 0x829079D0;
	sub_829066D0(ctx, base);
	// b 0x82907a0c
	goto loc_82907A0C;
loc_829079D4:
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82906e50
	ctx.lr = 0x829079E4;
	sub_82906E50(ctx, base);
	// b 0x82907a0c
	goto loc_82907A0C;
loc_829079E8:
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82906fb0
	ctx.lr = 0x829079F8;
	sub_82906FB0(ctx, base);
	// b 0x82907a0c
	goto loc_82907A0C;
loc_829079FC:
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82907300
	ctx.lr = 0x82907A0C;
	sub_82907300(ctx, base);
loc_82907A0C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// beq cr6,0x82907a38
	if (cr6.eq) goto loc_82907A38;
loc_82907A1C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r19,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r19.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_82907A38:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82907a4c
	if (!cr6.lt) goto loc_82907A4C;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// b 0x82907a74
	goto loc_82907A74;
loc_82907A4C:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x82907a5c
	if (!cr6.lt) goto loc_82907A5C;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// b 0x82907a74
	goto loc_82907A74;
loc_82907A5C:
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
loc_82907A74:
	// lwz r11,4456(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4456);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// bge cr6,0x82907cbc
	if (!cr6.lt) goto loc_82907CBC;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82907aa4
	if (!cr6.eq) goto loc_82907AA4;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82a32ec0
	ctx.lr = 0x82907A98;
	sub_82A32EC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82907cbc
	if (cr6.eq) goto loc_82907CBC;
loc_82907AA4:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lbz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 112);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82907cbc
	if (!cr6.eq) goto loc_82907CBC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82907ad4
	if (cr6.eq) goto loc_82907AD4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82da1d10
	ctx.lr = 0x82907AC8;
	sub_82DA1D10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82907cbc
	if (!cr6.eq) goto loc_82907CBC;
loc_82907AD4:
	// lwz r10,4460(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4460);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x82907c64
	if (cr6.eq) goto loc_82907C64;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82907afc
	if (!cr6.eq) goto loc_82907AFC;
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x82907b04
	goto loc_82907B04;
loc_82907AFC:
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r30,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82907B04:
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x82907b1c
	if (cr6.eq) goto loc_82907B1C;
	// lwz r11,5356(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 5356);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82907b20
	if (cr6.eq) goto loc_82907B20;
loc_82907B1C:
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_82907B20:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82907b78
	if (cr6.eq) goto loc_82907B78;
	// lwz r11,5360(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 5360);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// bne cr6,0x82907b54
	if (!cr6.eq) goto loc_82907B54;
	// addi r3,r31,4332
	ctx.r3.s64 = ctx.r31.s64 + 4332;
	// bl 0x8290b4c8
	ctx.lr = 0x82907B44;
	sub_8290B4C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82907b54
	if (cr6.eq) goto loc_82907B54;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82907B54:
	// lwz r11,5360(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 5360);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// beq cr6,0x82907b78
	if (cr6.eq) goto loc_82907B78;
	// addi r3,r31,4388
	ctx.r3.s64 = ctx.r31.s64 + 4388;
	// bl 0x8290b4c8
	ctx.lr = 0x82907B68;
	sub_8290B4C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82907b78
	if (cr6.eq) goto loc_82907B78;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82907B78:
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// bge cr6,0x82907c64
	if (!cr6.lt) goto loc_82907C64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-3564(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x82907B8C;
	sub_82A0C710(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// addi r3,r3,-30988
	ctx.r3.s64 = ctx.r3.s64 + -30988;
	// bl 0x82917a48
	ctx.lr = 0x82907B9C;
	sub_82917A48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82907bf0
	if (cr6.eq) goto loc_82907BF0;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82907bf0
	if (!cr6.eq) goto loc_82907BF0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r9,21
	ctx.r9.s64 = 21;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
loc_82907BF0:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82907d38
	ctx.lr = 0x82907BF8;
	sub_82907D38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82907c10
	if (!cr6.eq) goto loc_82907C10;
	// lbz r11,253(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 253);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82907c64
	if (!cr6.eq) goto loc_82907C64;
loc_82907C10:
	// lwz r11,4460(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4460);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82907c28
	if (cr6.eq) goto loc_82907C28;
	// lwz r11,5356(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 5356);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x82907c64
	if (cr6.eq) goto loc_82907C64;
loc_82907C28:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,22
	ctx.r10.s64 = 22;
	// li r9,23
	ctx.r9.s64 = 23;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
loc_82907C64:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,66
	ctx.r10.s64 = 66;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// li r7,68
	ctx.r7.s64 = 68;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82907CBC:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82907CC4"))) PPC_WEAK_FUNC(sub_82907CC4);
PPC_FUNC_IMPL(__imp__sub_82907CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82907CC8"))) PPC_WEAK_FUNC(sub_82907CC8);
PPC_FUNC_IMPL(__imp__sub_82907CC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x82907ce0
	if (cr6.lt) goto loc_82907CE0;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// blelr cr6
	if (!cr6.gt) return;
loc_82907CE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82907CE8"))) PPC_WEAK_FUNC(sub_82907CE8);
PPC_FUNC_IMPL(__imp__sub_82907CE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82907d00
	if (!cr6.gt) goto loc_82907D00;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// blelr cr6
	if (!cr6.gt) return;
loc_82907D00:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82907D08"))) PPC_WEAK_FUNC(sub_82907D08);
PPC_FUNC_IMPL(__imp__sub_82907D08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82907d2c
	if (!cr6.gt) goto loc_82907D2C;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// ble cr6,0x82907d24
	if (!cr6.gt) goto loc_82907D24;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x82907d2c
	if (!cr6.eq) goto loc_82907D2C;
loc_82907D24:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82907D2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82907D34"))) PPC_WEAK_FUNC(sub_82907D34);
PPC_FUNC_IMPL(__imp__sub_82907D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82907D38"))) PPC_WEAK_FUNC(sub_82907D38);
PPC_FUNC_IMPL(__imp__sub_82907D38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x82907d5c
	if (cr6.eq) goto loc_82907D5C;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// ble cr6,0x82907d54
	if (!cr6.gt) goto loc_82907D54;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// ble cr6,0x82907d5c
	if (!cr6.gt) goto loc_82907D5C;
loc_82907D54:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82907D5C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82907D64"))) PPC_WEAK_FUNC(sub_82907D64);
PPC_FUNC_IMPL(__imp__sub_82907D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82907D68"))) PPC_WEAK_FUNC(sub_82907D68);
PPC_FUNC_IMPL(__imp__sub_82907D68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stfs f1,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lbz r9,103(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// lbz r8,111(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 111);
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// stw r6,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stb r9,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r9.u8);
	// stb r8,37(r3)
	PPC_STORE_U8(ctx.r3.u32 + 37, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82907DA4"))) PPC_WEAK_FUNC(sub_82907DA4);
PPC_FUNC_IMPL(__imp__sub_82907DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82907DA8"))) PPC_WEAK_FUNC(sub_82907DA8);
PPC_FUNC_IMPL(__imp__sub_82907DA8) {
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
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 + 20;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// lwz r5,20(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// lwz r3,24(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_82907E00:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82907e00
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82907E00;
	// lwz r10,32(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// lfs f0,28(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lbz r8,37(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 37);
	// stb r8,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r8.u8);
	// stb r9,57(r31)
	PPC_STORE_U8(ctx.r31.u32 + 57, ctx.r9.u8);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x82907e80
	if (cr6.eq) goto loc_82907E80;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x82907e80
	if (!cr6.lt) goto loc_82907E80;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82907e60
	if (!cr6.eq) goto loc_82907E60;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82907e68
	goto loc_82907E68;
loc_82907E60:
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r4,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82907E68:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x82907E74;
	sub_82A0C710(ctx, base);
	// lbz r9,252(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stb r9,57(r31)
	PPC_STORE_U8(ctx.r31.u32 + 57, ctx.r9.u8);
loc_82907E80:
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

__attribute__((alias("__imp__sub_82907E98"))) PPC_WEAK_FUNC(sub_82907E98);
PPC_FUNC_IMPL(__imp__sub_82907E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82907EA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82907f2c
	if (cr6.eq) goto loc_82907F2C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82907ED8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82907ef4
	if (cr6.lt) goto loc_82907EF4;
	// beq cr6,0x82907f34
	if (cr6.eq) goto loc_82907F34;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bne cr6,0x82907f00
	if (!cr6.eq) goto loc_82907F00;
loc_82907EF4:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82907f1c
	if (cr6.eq) goto loc_82907F1C;
loc_82907F00:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82907F0C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82907F1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82907F1C:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_82907F2C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82907F34:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82907F50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// b 0x82907f0c
	goto loc_82907F0C;
}

__attribute__((alias("__imp__sub_82907F60"))) PPC_WEAK_FUNC(sub_82907F60);
PPC_FUNC_IMPL(__imp__sub_82907F60) {
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
	// bgt cr6,0x82908050
	if (cr6.gt) goto loc_82908050;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82907fa8
	if (cr6.eq) goto loc_82907FA8;
	// bdz 0x82907fe8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82907FE8;
	// bdz 0x82908028
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82908028;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82907FA8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82a38db8
	ctx.lr = 0x82907FB8;
	sub_82A38DB8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f31,-28496(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28496);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// blt cr6,0x82908050
	if (cr6.lt) goto loc_82908050;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82a38db8
	ctx.lr = 0x82907FD8;
	sub_82A38DB8(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x82908050
	if (!cr6.lt) goto loc_82908050;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8290804c
	goto loc_8290804C;
loc_82907FE8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82a38db8
	ctx.lr = 0x82907FF8;
	sub_82A38DB8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f31,-11340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11340);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// blt cr6,0x82908048
	if (cr6.lt) goto loc_82908048;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82a38db8
	ctx.lr = 0x82908018;
	sub_82A38DB8(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x82908048
	if (!cr6.lt) goto loc_82908048;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8290804c
	goto loc_8290804C;
loc_82908028:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82a38db8
	ctx.lr = 0x82908038;
	sub_82A38DB8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-11340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11340);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82908050
	if (!cr6.lt) goto loc_82908050;
loc_82908048:
	// li r11,3
	ctx.r11.s64 = 3;
loc_8290804C:
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82908050:
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

__attribute__((alias("__imp__sub_8290806C"))) PPC_WEAK_FUNC(sub_8290806C);
PPC_FUNC_IMPL(__imp__sub_8290806C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82908070"))) PPC_WEAK_FUNC(sub_82908070);
PPC_FUNC_IMPL(__imp__sub_82908070) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x829080d8
	if (!cr6.eq) goto loc_829080D8;
	// lbz r11,37(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 37);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x829080d8
	if (!cr6.gt) goto loc_829080D8;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82a39900
	ctx.lr = 0x829080C4;
	sub_82A39900(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829080d8
	if (cr6.eq) goto loc_829080D8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x829080f4
	goto loc_829080F4;
loc_829080D8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82a38c50
	ctx.lr = 0x829080E8;
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
loc_829080F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290810C"))) PPC_WEAK_FUNC(sub_8290810C);
PPC_FUNC_IMPL(__imp__sub_8290810C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82908110"))) PPC_WEAK_FUNC(sub_82908110);
PPC_FUNC_IMPL(__imp__sub_82908110) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82908154
	if (cr6.eq) goto loc_82908154;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82908140;
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
loc_82908154:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,36
	cr6.compare<int32_t>(ctx.r11.s32, 36, xer);
	// bne cr6,0x82908174
	if (!cr6.eq) goto loc_82908174;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82908234
	if (cr6.eq) goto loc_82908234;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82908230
	goto loc_82908230;
loc_82908174:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bgt cr6,0x82908234
	if (cr6.gt) goto loc_82908234;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8290819c
	if (cr6.eq) goto loc_8290819C;
	// bdz 0x829081c4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_829081C4;
	// bdz 0x829081fc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_829081FC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_8290819C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829081B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82908234
	if (cr6.eq) goto loc_82908234;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82908230
	goto loc_82908230;
loc_829081C4:
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82a38be0
	ctx.lr = 0x829081D4;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
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
loc_829081FC:
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82a38be0
	ctx.lr = 0x8290820C;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290822c
	if (cr6.eq) goto loc_8290822C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82908234
	if (cr6.lt) goto loc_82908234;
loc_8290822C:
	// li r11,3
	ctx.r11.s64 = 3;
loc_82908230:
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82908234:
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

__attribute__((alias("__imp__sub_82908248"))) PPC_WEAK_FUNC(sub_82908248);
PPC_FUNC_IMPL(__imp__sub_82908248) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// stfs f3,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// blt cr6,0x8290825c
	if (cr6.lt) goto loc_8290825C;
	// cmpwi cr6,r3,15
	cr6.compare<int32_t>(ctx.r3.s32, 15, xer);
	// ble cr6,0x82908270
	if (!cr6.gt) goto loc_82908270;
loc_8290825C:
	// cmpwi cr6,r3,24
	cr6.compare<int32_t>(ctx.r3.s32, 24, xer);
	// beq cr6,0x82908270
	if (cr6.eq) goto loc_82908270;
	// cmpwi cr6,r3,17
	cr6.compare<int32_t>(ctx.r3.s32, 17, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82908274
	if (!cr6.eq) goto loc_82908274;
loc_82908270:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82908274:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f2,f13
	cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// blelr cr6
	if (!cr6.gt) return;
	// fadds f12,f1,f3
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,22344
	ctx.r11.s64 = ctx.r11.s64 + 22344;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f13,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// bge cr6,0x829082bc
	if (!cr6.lt) goto loc_829082BC;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// blr 
	return;
loc_829082BC:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x829082c8
	if (cr6.lt) goto loc_829082C8;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_829082C8:
	// stfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829082D0"))) PPC_WEAK_FUNC(sub_829082D0);
PPC_FUNC_IMPL(__imp__sub_829082D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x829082D8;
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lis r28,-31763
	ctx.r28.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// stfs f31,0(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// stfs f31,4(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x82a0c760
	ctx.lr = 0x8290831C;
	sub_82A0C760(ctx, base);
	// lwz r11,-3564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c7b0
	ctx.lr = 0x82908330;
	sub_82A0C7B0(ctx, base);
	// clrlwi r10,r25,24
	ctx.r10.u64 = ctx.r25.u32 & 0xFF;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82908370
	if (cr6.eq) goto loc_82908370;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x82a3d160
	ctx.lr = 0x82908348;
	sub_82A3D160(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82908370
	if (!cr6.eq) goto loc_82908370;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82a3d270
	ctx.lr = 0x82908360;
	sub_82A3D270(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82908370
	if (cr6.eq) goto loc_82908370;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82908370:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x829083f0
	if (!cr6.eq) goto loc_829083F0;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x829083f0
	if (!cr6.eq) goto loc_829083F0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a38db8
	ctx.lr = 0x82908394;
	sub_82A38DB8(ctx, base);
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a38d50
	ctx.lr = 0x829083A8;
	sub_82A38D50(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f2,-23860(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23860);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,9104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x82a3b4c0
	ctx.lr = 0x829083C8;
	sub_82A3B4C0(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// ble cr6,0x829083e8
	if (!cr6.gt) goto loc_829083E8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a38d50
	ctx.lr = 0x829083E0;
	sub_82A38D50(ctx, base);
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// b 0x82908418
	goto loc_82908418;
loc_829083E8:
	// stfs f31,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// b 0x82908418
	goto loc_82908418;
loc_829083F0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a38d50
	ctx.lr = 0x82908400;
	sub_82A38D50(ctx, base);
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a38db8
	ctx.lr = 0x82908414;
	sub_82A38DB8(ctx, base);
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_82908418:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lfs f3,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lfs f2,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82908248
	ctx.lr = 0x82908430;
	sub_82908248(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82908444"))) PPC_WEAK_FUNC(sub_82908444);
PPC_FUNC_IMPL(__imp__sub_82908444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82908448"))) PPC_WEAK_FUNC(sub_82908448);
PPC_FUNC_IMPL(__imp__sub_82908448) {
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
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// lfs f1,52(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// lwz r7,48(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// bl 0x829082d0
	ctx.lr = 0x8290847C;
	sub_829082D0(ctx, base);
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

__attribute__((alias("__imp__sub_82908494"))) PPC_WEAK_FUNC(sub_82908494);
PPC_FUNC_IMPL(__imp__sub_82908494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82908498"))) PPC_WEAK_FUNC(sub_82908498);
PPC_FUNC_IMPL(__imp__sub_82908498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x829084A0;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82908748
	if (cr6.eq) goto loc_82908748;
	// bl 0x82908110
	ctx.lr = 0x829084CC;
	sub_82908110(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82908748
	if (cr6.gt) goto loc_82908748;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82908560
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82908560;
	// bdzf 4*cr6+eq,0x829086b8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_829086B8;
	// bne cr6,0x8290872c
	if (!cr6.eq) goto loc_8290872C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82908510
	if (cr6.eq) goto loc_82908510;
	// lbz r11,37(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 37);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x82908510
	if (cr6.eq) goto loc_82908510;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,37(r31)
	PPC_STORE_U8(ctx.r31.u32 + 37, ctx.r11.u8);
loc_82908510:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82908528;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r9,4
	cr6.compare<int32_t>(ctx.r9.s32, 4, xer);
	// bne cr6,0x82908748
	if (!cr6.eq) goto loc_82908748;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82908748
	if (!cr6.eq) goto loc_82908748;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82908748
	if (!cr6.eq) goto loc_82908748;
	// li r27,9
	ctx.r27.s64 = 9;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82908560:
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
	ctx.lr = 0x82908578;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82908748
	if (!cr6.eq) goto loc_82908748;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x82908748
	if (!cr6.eq) goto loc_82908748;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82908748
	if (!cr6.eq) goto loc_82908748;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82908748
	if (!cr6.gt) goto loc_82908748;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,-21736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21736);
	// bl 0x83747068
	ctx.lr = 0x829085C0;
	sub_83747068(ctx, base);
	// lbz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82908748
	if (!cr6.eq) goto loc_82908748;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r28,10
	ctx.r28.s64 = 10;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r9,4460(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4460);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// beq cr6,0x829085f0
	if (cr6.eq) goto loc_829085F0;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// b 0x82908638
	goto loc_82908638;
loc_829085F0:
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82a1f110
	ctx.lr = 0x829085FC;
	sub_82A1F110(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82908610
	if (cr6.eq) goto loc_82908610;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// b 0x82908638
	goto loc_82908638;
loc_82908610:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(ctx.r11.s32, 14, xer);
	// bne cr6,0x82908624
	if (!cr6.eq) goto loc_82908624;
	// li r28,9
	ctx.r28.s64 = 9;
	// b 0x82908638
	goto loc_82908638;
loc_82908624:
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// beq cr6,0x82908634
	if (cr6.eq) goto loc_82908634;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// bne cr6,0x82908638
	if (!cr6.eq) goto loc_82908638;
loc_82908634:
	// li r28,8
	ctx.r28.s64 = 8;
loc_82908638:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82908650;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,80
	cr6.compare<int32_t>(ctx.r3.s32, 80, xer);
	// beq cr6,0x82908748
	if (cr6.eq) goto loc_82908748;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a30088
	ctx.lr = 0x82908664;
	sub_82A30088(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a30048
	ctx.lr = 0x8290866C;
	sub_82A30048(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82908748
	if (!cr6.eq) goto loc_82908748;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lfs f1,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x827cd550
	ctx.lr = 0x82908698;
	sub_827CD550(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82908748
	if (cr6.eq) goto loc_82908748;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_829086B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829086D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82908748
	if (cr6.eq) goto loc_82908748;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8290870c
	if (cr6.eq) goto loc_8290870C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82908748
	if (!cr6.eq) goto loc_82908748;
	// lbz r11,37(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 37);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x82908748
	if (cr6.lt) goto loc_82908748;
	// stb r26,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r26.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8290870C:
	// lbz r11,37(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 37);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82908748
	if (cr6.lt) goto loc_82908748;
	// stb r26,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r26.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8290872C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82908744;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_82908748:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82908758"))) PPC_WEAK_FUNC(sub_82908758);
PPC_FUNC_IMPL(__imp__sub_82908758) {
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
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r3,-21736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21736);
	// bl 0x83747068
	ctx.lr = 0x82908784;
	sub_83747068(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r11,r31,-60
	ctx.r11.s64 = ctx.r31.s64 + -60;
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(ctx.r11.u32, 23, xer);
	// lfs f30,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f30.f64 = double(temp.f32);
	// bgt cr6,0x82908894
	if (cr6.gt) goto loc_82908894;
	// lis r12,-32111
	ctx.r12.s64 = -2104426496;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-30800
	ctx.r12.s64 = ctx.r12.s64 + -30800;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82908850;
	case 1:
		goto loc_82908894;
	case 2:
		goto loc_82908894;
	case 3:
		goto loc_82908894;
	case 4:
		goto loc_82908894;
	case 5:
		goto loc_82908894;
	case 6:
		goto loc_82908894;
	case 7:
		goto loc_82908894;
	case 8:
		goto loc_82908894;
	case 9:
		goto loc_82908894;
	case 10:
		goto loc_82908894;
	case 11:
		goto loc_82908894;
	case 12:
		goto loc_82908894;
	case 13:
		goto loc_82908894;
	case 14:
		goto loc_82908894;
	case 15:
		goto loc_82908850;
	case 16:
		goto loc_82908830;
	case 17:
		goto loc_82908894;
	case 18:
		goto loc_82908810;
	case 19:
		goto loc_82908838;
	case 20:
		goto loc_82908838;
	case 21:
		goto loc_82908848;
	case 22:
		goto loc_82908848;
	case 23:
		goto loc_82908840;
	default:
		return;
	}
	// lwz r20,-30640(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -30640);
	// lwz r20,-30572(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -30572);
	// lwz r20,-30572(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -30572);
	// lwz r20,-30572(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -30572);
	// lwz r20,-30572(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -30572);
	// lwz r20,-30572(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -30572);
	// lwz r20,-30572(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -30572);
	// lwz r20,-30572(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -30572);
	// lwz r20,-30572(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -30572);
	// lwz r20,-30572(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -30572);
	// lwz r20,-30572(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -30572);
	// lwz r20,-30572(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -30572);
	// lwz r20,-30572(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -30572);
	// lwz r20,-30572(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -30572);
	// lwz r20,-30572(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -30572);
	// lwz r20,-30640(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -30640);
	// lwz r20,-30672(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -30672);
	// lwz r20,-30572(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -30572);
	// lwz r20,-30704(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -30704);
	// lwz r20,-30664(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -30664);
	// lwz r20,-30664(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -30664);
	// lwz r20,-30648(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -30648);
	// lwz r20,-30648(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -30648);
	// lwz r20,-30656(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + -30656);
loc_82908810:
	// lfs f31,108(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f31.f64 = double(temp.f32);
loc_82908814:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x8290886c
	if (cr6.gt) goto loc_8290886C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f1,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82908878
	goto loc_82908878;
loc_82908830:
	// lfs f31,100(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82908814
	goto loc_82908814;
loc_82908838:
	// lfs f31,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82908814
	goto loc_82908814;
loc_82908840:
	// lfs f31,96(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82908814
	goto loc_82908814;
loc_82908848:
	// lfs f31,104(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82908814
	goto loc_82908814;
loc_82908850:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r9,4460(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4460);
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// bne cr6,0x82908894
	if (!cr6.eq) goto loc_82908894;
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f30.f64;
loc_8290886C:
	// bl 0x83740868
	ctx.lr = 0x82908870;
	sub_83740868(ctx, base);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// fdivs f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 / ctx.f0.f64));
loc_82908878:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82908894:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f31,-28496(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28496);
	ctx.f31.f64 = double(temp.f32);
	// b 0x8290886c
	goto loc_8290886C;
}

__attribute__((alias("__imp__sub_829088A0"))) PPC_WEAK_FUNC(sub_829088A0);
PPC_FUNC_IMPL(__imp__sub_829088A0) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r9,292(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r8,4460(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4460);
	// cmpwi cr6,r8,3
	cr6.compare<int32_t>(ctx.r8.s32, 3, xer);
	// bne cr6,0x829088e0
	if (!cr6.eq) goto loc_829088E0;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x829088e0
	if (!cr6.eq) goto loc_829088E0;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x829088e8
	goto loc_829088E8;
loc_829088E0:
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bgt cr6,0x8290891c
	if (cr6.gt) goto loc_8290891C;
loc_829088E8:
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82908944
	if (cr6.eq) goto loc_82908944;
	// bdz 0x82908904
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82908904;
	// bdz 0x82908910
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82908910;
	// bdz 0x8290891c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8290891C;
	// b 0x82908944
	goto loc_82908944;
loc_82908904:
	// lbz r11,37(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 37);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// b 0x82908918
	goto loc_82908918;
loc_82908910:
	// lbz r11,37(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 37);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
loc_82908918:
	// bgt cr6,0x82908944
	if (cr6.gt) goto loc_82908944;
loc_8290891C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82908758
	ctx.lr = 0x82908924;
	sub_82908758(ctx, base);
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stfs f13,28(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f0,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82908944
	if (!cr6.gt) goto loc_82908944;
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
loc_82908944:
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

__attribute__((alias("__imp__sub_82908958"))) PPC_WEAK_FUNC(sub_82908958);
PPC_FUNC_IMPL(__imp__sub_82908958) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82908960;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831ce748
	ctx.lr = 0x82908968;
	__savefpr_16(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lfs f28,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmr f17,f2
	ctx.f17.f64 = ctx.f2.f64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmr f16,f3
	ctx.f16.f64 = ctx.f3.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lfs f0,-23844(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23844);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f28,f0
	ctx.f1.f64 = double(float(ctx.f28.f64 - ctx.f0.f64));
	// lfs f20,-24912(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24912);
	ctx.f20.f64 = double(temp.f32);
	// lfs f23,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f23.f64 = double(temp.f32);
	// stfs f23,8(r3)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lwz r30,6112(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r29,r11,22340
	ctx.r29.s64 = ctx.r11.s64 + 22340;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f27,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f13,f3,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f26,f27,f20
	ctx.f26.f64 = double(float(ctx.f27.f64 * ctx.f20.f64));
	// lfs f0,22340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22340);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fcmpu cr6,f1,f23
	cr6.compare(ctx.f1.f64, ctx.f23.f64);
	// stfs f26,4(r3)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// bge cr6,0x829089e0
	if (!cr6.lt) goto loc_829089E0;
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// b 0x829089ec
	goto loc_829089EC;
loc_829089E0:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x829089ec
	if (cr6.lt) goto loc_829089EC;
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
loc_829089EC:
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x825ce9f8
	ctx.lr = 0x829089F4;
	sub_825CE9F8(ctx, base);
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fmr f13,f1
	ctx.f13.f64 = ctx.f1.f64;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lfs f31,-7352(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -7352);
	ctx.f31.f64 = double(temp.f32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lfs f18,19456(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19456);
	ctx.f18.f64 = double(temp.f32);
	// lfs f19,24556(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24556);
	ctx.f19.f64 = double(temp.f32);
	// lfs f24,-26260(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26260);
	ctx.f24.f64 = double(temp.f32);
	// lfs f21,-8380(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -8380);
	ctx.f21.f64 = double(temp.f32);
	// lfs f22,19176(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 19176);
	ctx.f22.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// lfs f25,22248(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 22248);
	ctx.f25.f64 = double(temp.f32);
	// bgt cr6,0x82908a44
	if (cr6.gt) goto loc_82908A44;
	// fmr f0,f23
	ctx.f0.f64 = ctx.f23.f64;
	// b 0x82908ab8
	goto loc_82908AB8;
loc_82908A44:
	// fcmpu cr6,f0,f25
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// blt cr6,0x82908a54
	if (cr6.lt) goto loc_82908A54;
	// fmr f0,f23
	ctx.f0.f64 = ctx.f23.f64;
	// b 0x82908ab8
	goto loc_82908AB8;
loc_82908A54:
	// fcmpu cr6,f0,f22
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f22.f64);
	// blt cr6,0x82908a6c
	if (cr6.lt) goto loc_82908A6C;
	// fcmpu cr6,f0,f21
	cr6.compare(ctx.f0.f64, ctx.f21.f64);
	// bgt cr6,0x82908a6c
	if (cr6.gt) goto loc_82908A6C;
	// fmr f0,f24
	ctx.f0.f64 = ctx.f24.f64;
	// b 0x82908ab8
	goto loc_82908AB8;
loc_82908A6C:
	// fcmpu cr6,f0,f22
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f22.f64);
	// bge cr6,0x82908a90
	if (!cr6.lt) goto loc_82908A90;
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82908a84
	if (cr6.gt) goto loc_82908A84;
	// fmr f0,f23
	ctx.f0.f64 = ctx.f23.f64;
	// b 0x82908ab8
	goto loc_82908AB8;
loc_82908A84:
	// fsubs f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fmuls f0,f0,f19
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f19.f64));
	// b 0x82908ab8
	goto loc_82908AB8;
loc_82908A90:
	// fcmpu cr6,f0,f21
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f21.f64);
	// bgt cr6,0x82908aa0
	if (cr6.gt) goto loc_82908AA0;
	// fmr f0,f24
	ctx.f0.f64 = ctx.f24.f64;
	// b 0x82908ab8
	goto loc_82908AB8;
loc_82908AA0:
	// fcmpu cr6,f0,f25
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// blt cr6,0x82908ab0
	if (cr6.lt) goto loc_82908AB0;
	// fmr f0,f23
	ctx.f0.f64 = ctx.f23.f64;
	// b 0x82908ab8
	goto loc_82908AB8;
loc_82908AB0:
	// fsubs f0,f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f25.f64));
	// fmuls f0,f0,f18
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f18.f64));
loc_82908AB8:
	// lfs f12,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f29,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f29.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmadds f11,f12,f20,f29
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f20.f64 + ctx.f29.f64));
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// lfs f30,20056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f30.f64 = double(temp.f32);
	// fsel f10,f13,f24,f30
	ctx.f10.f64 = ctx.f13.f64 >= 0.0 ? ctx.f24.f64 : ctx.f30.f64;
	// fsubs f9,f27,f11
	ctx.f9.f64 = double(float(ctx.f27.f64 - ctx.f11.f64));
	// fmuls f8,f9,f20
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f20.f64));
	// fmuls f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmadds f5,f6,f17,f26
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f17.f64 + ctx.f26.f64));
	// stfs f5,4(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// bl 0x825ce9f8
	ctx.lr = 0x82908AF4;
	sub_825CE9F8(ctx, base);
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82908b08
	if (cr6.gt) goto loc_82908B08;
loc_82908B00:
	// fmr f0,f23
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f23.f64;
	// b 0x82908b5c
	goto loc_82908B5C;
loc_82908B08:
	// fcmpu cr6,f0,f25
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// bge cr6,0x82908b00
	if (!cr6.lt) goto loc_82908B00;
	// fcmpu cr6,f0,f22
	cr6.compare(ctx.f0.f64, ctx.f22.f64);
	// blt cr6,0x82908b28
	if (cr6.lt) goto loc_82908B28;
	// fcmpu cr6,f0,f21
	cr6.compare(ctx.f0.f64, ctx.f21.f64);
	// bgt cr6,0x82908b28
	if (cr6.gt) goto loc_82908B28;
loc_82908B20:
	// fmr f0,f24
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f24.f64;
	// b 0x82908b5c
	goto loc_82908B5C;
loc_82908B28:
	// fcmpu cr6,f0,f22
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f22.f64);
	// bge cr6,0x82908b44
	if (!cr6.lt) goto loc_82908B44;
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82908b00
	if (!cr6.gt) goto loc_82908B00;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fmuls f0,f0,f19
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f19.f64));
	// b 0x82908b5c
	goto loc_82908B5C;
loc_82908B44:
	// fcmpu cr6,f0,f21
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f21.f64);
	// ble cr6,0x82908b20
	if (!cr6.gt) goto loc_82908B20;
	// fcmpu cr6,f0,f25
	cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// bge cr6,0x82908b00
	if (!cr6.lt) goto loc_82908B00;
	// fsubs f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f25.f64));
	// fmuls f0,f0,f18
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f18.f64));
loc_82908B5C:
	// lfs f13,64(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fsel f12,f1,f24,f30
	ctx.f12.f64 = ctx.f1.f64 >= 0.0 ? ctx.f24.f64 : ctx.f30.f64;
	// fmadds f11,f13,f20,f29
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f20.f64 + ctx.f29.f64));
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fmuls f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f6,f7,f17
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f17.f64));
	// fmuls f5,f6,f16
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f16.f64));
	// fneg f4,f5
	ctx.f4.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// stfs f4,8(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831ce794
	ctx.lr = 0x82908B98;
	__restfpr_16(ctx, base);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82908B9C"))) PPC_WEAK_FUNC(sub_82908B9C);
PPC_FUNC_IMPL(__imp__sub_82908B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82908BA0"))) PPC_WEAK_FUNC(sub_82908BA0);
PPC_FUNC_IMPL(__imp__sub_82908BA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82908BA8;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x831ce768
	ctx.lr = 0x82908BB0;
	__savefpr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// lwz r11,20(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r24,12(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lwz r3,-3564(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3564);
	// lwz r25,6112(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6112);
	// lwz r26,32(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r28,292(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// bge cr6,0x82908bec
	if (!cr6.lt) goto loc_82908BEC;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82908c14
	goto loc_82908C14;
loc_82908BEC:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x82908bfc
	if (!cr6.lt) goto loc_82908BFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82908c14
	goto loc_82908C14;
loc_82908BFC:
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
loc_82908C14:
	// bl 0x82a0c710
	ctx.lr = 0x82908C18;
	sub_82A0C710(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lwz r6,4460(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4460);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r6,1
	cr6.compare<int32_t>(ctx.r6.s32, 1, xer);
	// lfs f24,-26260(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f24.f64 = double(temp.f32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lfs f26,20056(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20056);
	ctx.f26.f64 = double(temp.f32);
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// bne cr6,0x82908c78
	if (!cr6.eq) goto loc_82908C78;
	// lbz r11,252(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// lfs f0,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// b 0x82908c8c
	goto loc_82908C8C;
loc_82908C78:
	// lfs f0,8144(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8144);
	ctx.f0.f64 = double(temp.f32);
	// fsel f13,f0,f24,f26
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f24.f64 : ctx.f26.f64;
	// lfs f12,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_82908C8C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// lfs f25,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f25.f64 = double(temp.f32);
	// blt cr6,0x82908cc0
	if (cr6.lt) goto loc_82908CC0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a38db8
	ctx.lr = 0x82908CB0;
	sub_82A38DB8(ctx, base);
	// fcmpu cr6,f1,f25
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f25.f64);
	// bne cr6,0x82908cc0
	if (!cr6.eq) goto loc_82908CC0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
loc_82908CC0:
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82908cd4
	if (cr6.eq) goto loc_82908CD4;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
loc_82908CD4:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a38db8
	ctx.lr = 0x82908CE4;
	sub_82A38DB8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,-27732(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27732);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82908dcc
	if (cr6.lt) goto loc_82908DCC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a38e20
	ctx.lr = 0x82908D04;
	sub_82A38E20(ctx, base);
	// fcmpu cr6,f1,f25
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f25.f64);
	// blt cr6,0x82908dcc
	if (cr6.lt) goto loc_82908DCC;
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82908d38
	if (!cr6.eq) goto loc_82908D38;
	// bl 0x82a38d50
	ctx.lr = 0x82908D28;
	sub_82A38D50(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// b 0x82908df8
	goto loc_82908DF8;
loc_82908D38:
	// bl 0x82a38d50
	ctx.lr = 0x82908D3C;
	sub_82A38D50(ctx, base);
	// lfs f31,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825ce9f8
	ctx.lr = 0x82908D4C;
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
	// bge cr6,0x82908dac
	if (!cr6.lt) goto loc_82908DAC;
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r10.u8);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// ble cr6,0x82908d9c
	if (!cr6.gt) goto loc_82908D9C;
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
	// bne 0x82908d9c
	if (!cr0.eq) goto loc_82908D9C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
loc_82908D9C:
	// li r11,3
	ctx.r11.s64 = 3;
	// stfs f31,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// b 0x82908df8
	goto loc_82908DF8;
loc_82908DAC:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a38d50
	ctx.lr = 0x82908DBC;
	sub_82A38D50(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// b 0x82908df8
	goto loc_82908DF8;
loc_82908DCC:
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82908df8
	if (!cr6.eq) goto loc_82908DF8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r9,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r9.u8);
	// beq cr6,0x82908df8
	if (cr6.eq) goto loc_82908DF8;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_82908DF8:
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82908fd8
	if (!cr6.eq) goto loc_82908FD8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r10,4460(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4460);
	// addi r29,r11,22344
	ctx.r29.s64 = ctx.r11.s64 + 22344;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// lfs f30,22344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22344);
	ctx.f30.f64 = double(temp.f32);
	// bne cr6,0x82908e2c
	if (!cr6.eq) goto loc_82908E2C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lbz r4,252(r27)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + 252);
	// bl 0x82a407e0
	ctx.lr = 0x82908E28;
	sub_82A407E0(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
loc_82908E2C:
	// lfs f2,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x825ce9f8
	ctx.lr = 0x82908E38;
	sub_825CE9F8(ctx, base);
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f28,-20096(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20096);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,-8340(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8340);
	ctx.f27.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x82908e74
	if (!cr6.gt) goto loc_82908E74;
	// fcmpu cr6,f0,f27
	cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bge cr6,0x82908e74
	if (!cr6.lt) goto loc_82908E74;
	// fcmpu cr6,f1,f25
	cr6.compare(ctx.f1.f64, ctx.f25.f64);
	// ble cr6,0x82908e6c
	if (!cr6.gt) goto loc_82908E6C;
	// fmr f0,f26
	ctx.f0.f64 = ctx.f26.f64;
	// b 0x82908e78
	goto loc_82908E78;
loc_82908E6C:
	// fmr f0,f24
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f24.f64;
	// b 0x82908e78
	goto loc_82908E78;
loc_82908E74:
	// fmr f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f25.f64;
loc_82908E78:
	// lwz r11,4460(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4460);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82908ea4
	if (!cr6.eq) goto loc_82908EA4;
	// lbz r10,252(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 252);
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f29,f11,f0
	ctx.f29.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// b 0x82908eb0
	goto loc_82908EB0;
loc_82908EA4:
	// lfs f13,8144(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8144);
	ctx.f13.f64 = double(temp.f32);
	// fsel f12,f13,f24,f26
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f24.f64 : ctx.f26.f64;
	// fmuls f29,f12,f0
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
loc_82908EB0:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f13,-4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f31,-23844(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23844);
	ctx.f31.f64 = double(temp.f32);
	// fadds f0,f30,f31
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// fcmpu cr6,f0,f25
	cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// bge cr6,0x82908ed0
	if (!cr6.lt) goto loc_82908ED0;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82908edc
	goto loc_82908EDC;
loc_82908ED0:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82908edc
	if (cr6.lt) goto loc_82908EDC;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82908EDC:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82908f14
	if (!cr6.eq) goto loc_82908F14;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lbz r4,252(r27)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + 252);
	// bl 0x82a407e0
	ctx.lr = 0x82908EF0;
	sub_82A407E0(ctx, base);
	// fadds f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// lfs f13,-4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f25
	cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// bge cr6,0x82908f08
	if (!cr6.lt) goto loc_82908F08;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82908f14
	goto loc_82908F14;
loc_82908F08:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82908f14
	if (cr6.lt) goto loc_82908F14;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82908F14:
	// lfs f2,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x825ce9f8
	ctx.lr = 0x82908F20;
	sub_825CE9F8(ctx, base);
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f28
	cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x82908f4c
	if (!cr6.gt) goto loc_82908F4C;
	// fcmpu cr6,f0,f27
	cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bge cr6,0x82908f4c
	if (!cr6.lt) goto loc_82908F4C;
	// fcmpu cr6,f1,f25
	cr6.compare(ctx.f1.f64, ctx.f25.f64);
	// ble cr6,0x82908f44
	if (!cr6.gt) goto loc_82908F44;
	// fmr f10,f26
	ctx.f10.f64 = ctx.f26.f64;
	// b 0x82908f50
	goto loc_82908F50;
loc_82908F44:
	// fmr f10,f24
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f24.f64;
	// b 0x82908f50
	goto loc_82908F50;
loc_82908F4C:
	// fmr f10,f25
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f25.f64;
loc_82908F50:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lfs f0,8(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f11,12(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,9796(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9796);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f12,-24912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24912);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f6,f11,f12
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fsubs f5,f0,f12
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fmadds f13,f7,f29,f9
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f29.f64 + ctx.f9.f64));
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// fmadds f10,f6,f10,f8
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 + ctx.f8.f64));
	// stfs f10,4(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fabs f4,f13
	ctx.f4.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f4,f5
	cr6.compare(ctx.f4.f64, ctx.f5.f64);
	// ble cr6,0x82908fa4
	if (!cr6.gt) goto loc_82908FA4;
	// fsel f13,f13,f24,f26
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f24.f64 : ctx.f26.f64;
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f9,8(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_82908FA4:
	// fsubs f0,f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fabs f13,f10
	ctx.f13.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82908fc0
	if (!cr6.gt) goto loc_82908FC0;
	// fsel f0,f10,f24,f26
	ctx.f0.f64 = ctx.f10.f64 >= 0.0 ? ctx.f24.f64 : ctx.f26.f64;
	// fmuls f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
loc_82908FC0:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
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
loc_82908FD8:
	// lfs f0,12(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x82908ff4
	if (cr6.gt) goto loc_82908FF4;
	// fmr f0,f25
	ctx.f0.f64 = ctx.f25.f64;
	// b 0x82909010
	goto loc_82909010;
loc_82908FF4:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x82909004
	if (cr6.lt) goto loc_82909004;
	// fmr f0,f24
	ctx.f0.f64 = ctx.f24.f64;
	// b 0x82909010
	goto loc_82909010;
loc_82909004:
	// fsubs f12,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fdivs f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
loc_82909010:
	// lfs f13,12(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,4(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x831ce7b4
	ctx.lr = 0x8290902C;
	__restfpr_24(ctx, base);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82909030"))) PPC_WEAK_FUNC(sub_82909030);
PPC_FUNC_IMPL(__imp__sub_82909030) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x8290905C;
	sub_82A0C760(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x829090e8
	if (!cr6.eq) goto loc_829090E8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82a38be0
	ctx.lr = 0x8290907C;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829090b0
	if (cr6.eq) goto loc_829090B0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82a38be0
	ctx.lr = 0x82909098;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829090b0
	if (cr6.eq) goto loc_829090B0;
	// lbz r11,21(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stb r10,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r10.u8);
loc_829090B0:
	// lbz r11,21(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x829090e8
	if (!cr6.eq) goto loc_829090E8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82a38c50
	ctx.lr = 0x829090D0;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829090e8
	if (cr6.eq) goto loc_829090E8;
	// lbz r11,21(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stb r10,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r10.u8);
loc_829090E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82909100"))) PPC_WEAK_FUNC(sub_82909100);
PPC_FUNC_IMPL(__imp__sub_82909100) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lbz r11,21(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r11,r11,0,26,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// addi r3,r11,78
	ctx.r3.s64 = ctx.r11.s64 + 78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82909120"))) PPC_WEAK_FUNC(sub_82909120);
PPC_FUNC_IMPL(__imp__sub_82909120) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,52(r3)
	PPC_STORE_U8(ctx.r3.u32 + 52, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290912C"))) PPC_WEAK_FUNC(sub_8290912C);
PPC_FUNC_IMPL(__imp__sub_8290912C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82909130"))) PPC_WEAK_FUNC(sub_82909130);
PPC_FUNC_IMPL(__imp__sub_82909130) {
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
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x829088a0
	ctx.lr = 0x82909154;
	sub_829088A0(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x82909164;
	sub_82A0C760(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x829091a0
	if (!cr6.eq) goto loc_829091A0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82a38be0
	ctx.lr = 0x82909184;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829091a4
	if (cr6.eq) goto loc_829091A4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,52(r30)
	PPC_STORE_U8(ctx.r30.u32 + 52, ctx.r11.u8);
	// b 0x829091a4
	goto loc_829091A4;
loc_829091A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829091A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829091BC"))) PPC_WEAK_FUNC(sub_829091BC);
PPC_FUNC_IMPL(__imp__sub_829091BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829091C0"))) PPC_WEAK_FUNC(sub_829091C0);
PPC_FUNC_IMPL(__imp__sub_829091C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lbz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 52);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,29
	ctx.r11.u64 = ctx.r9.u32 & 0x7;
	// addi r3,r11,76
	ctx.r3.s64 = ctx.r11.s64 + 76;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829091D8"))) PPC_WEAK_FUNC(sub_829091D8);
PPC_FUNC_IMPL(__imp__sub_829091D8) {
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
	ctx.lr = 0x82909204;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82909238
	if (cr6.eq) goto loc_82909238;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82a38be0
	ctx.lr = 0x82909220;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82909238
	if (cr6.eq) goto loc_82909238;
	// lbz r11,21(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stb r10,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r10.u8);
loc_82909238:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82909250"))) PPC_WEAK_FUNC(sub_82909250);
PPC_FUNC_IMPL(__imp__sub_82909250) {
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
	// lbz r11,37(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 37);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x829092b4
	if (cr6.lt) goto loc_829092B4;
	// lbz r11,21(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82909294
	if (!cr6.eq) goto loc_82909294;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// stb r10,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r10.u8);
loc_82909294:
	// lbz r11,21(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x829092f8
	if (cr6.eq) goto loc_829092F8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r11,r11,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stb r11,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r11.u8);
	// b 0x829092f8
	goto loc_829092F8;
loc_829092B4:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82a38be0
	ctx.lr = 0x829092C4;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829092f8
	if (cr6.eq) goto loc_829092F8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82a38be0
	ctx.lr = 0x829092E0;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829092f8
	if (cr6.eq) goto loc_829092F8;
	// lbz r11,21(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// stb r10,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r10.u8);
loc_829092F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82909310"))) PPC_WEAK_FUNC(sub_82909310);
PPC_FUNC_IMPL(__imp__sub_82909310) {
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
	ctx.lr = 0x8290933C;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82909370
	if (cr6.eq) goto loc_82909370;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82a38be0
	ctx.lr = 0x82909358;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82909370
	if (cr6.eq) goto loc_82909370;
	// lbz r11,21(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stb r10,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r10.u8);
loc_82909370:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82a38c50
	ctx.lr = 0x82909380;
	sub_82A38C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82909398
	if (cr6.eq) goto loc_82909398;
	// lbz r11,21(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stb r10,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r10.u8);
loc_82909398:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829093B0"))) PPC_WEAK_FUNC(sub_829093B0);
PPC_FUNC_IMPL(__imp__sub_829093B0) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82a38be0
	ctx.lr = 0x829093D4;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829093f8
	if (cr6.eq) goto loc_829093F8;
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
loc_829093F8:
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
	ctx.lr = 0x82909410;
	sub_825CA6B8(ctx, base);
	// cmplwi cr6,r3,24
	cr6.compare<uint32_t>(ctx.r3.u32, 24, xer);
	// bge cr6,0x82909434
	if (!cr6.lt) goto loc_82909434;
	// mulli r11,r3,112
	ctx.r11.s64 = ctx.r3.s64 * 112;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8357ece0
	ctx.lr = 0x82909424;
	sub_8357ECE0(ctx, base);
	// bl 0x82a47d80
	ctx.lr = 0x82909428;
	sub_82A47D80(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82909438
	if (cr6.eq) goto loc_82909438;
loc_82909434:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82909438:
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

__attribute__((alias("__imp__sub_8290944C"))) PPC_WEAK_FUNC(sub_8290944C);
PPC_FUNC_IMPL(__imp__sub_8290944C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82909450"))) PPC_WEAK_FUNC(sub_82909450);
PPC_FUNC_IMPL(__imp__sub_82909450) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x829093b0
	ctx.lr = 0x82909474;
	sub_829093B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8290948c
	if (cr6.eq) goto loc_8290948C;
	// lbz r11,21(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 21);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stb r10,21(r30)
	PPC_STORE_U8(ctx.r30.u32 + 21, ctx.r10.u8);
loc_8290948C:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r10,4460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4460);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x829094ec
	if (!cr6.eq) goto loc_829094EC;
	// lwz r11,5356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5356);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x829094ec
	if (!cr6.eq) goto loc_829094EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8290abc0
	ctx.lr = 0x829094B8;
	sub_8290ABC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x829094ec
	if (!cr6.eq) goto loc_829094EC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82a38be0
	ctx.lr = 0x829094D4;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829094ec
	if (cr6.eq) goto loc_829094EC;
	// lbz r11,21(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 21);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// stb r10,21(r30)
	PPC_STORE_U8(ctx.r30.u32 + 21, ctx.r10.u8);
loc_829094EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82909504"))) PPC_WEAK_FUNC(sub_82909504);
PPC_FUNC_IMPL(__imp__sub_82909504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82909508"))) PPC_WEAK_FUNC(sub_82909508);
PPC_FUNC_IMPL(__imp__sub_82909508) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82909510;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// lwz r29,32(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r28,6112(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6112);
	// bgt cr6,0x829095d8
	if (cr6.gt) goto loc_829095D8;
	// lbz r11,37(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 37);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x829095d4
	if (!cr6.eq) goto loc_829095D4;
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// bl 0x82a0c760
	ctx.lr = 0x82909554;
	sub_82A0C760(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x829095d8
	if (!cr6.eq) goto loc_829095D8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82a38be0
	ctx.lr = 0x82909574;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x829095d4
	if (!cr6.eq) goto loc_829095D4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82a38be0
	ctx.lr = 0x82909590;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x829095d8
	if (!cr6.eq) goto loc_829095D8;
	// lbz r11,57(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 57);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f13,8144(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8144);
	ctx.f13.f64 = double(temp.f32);
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// lfs f12,24(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f0,-26940(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26940);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fsubs f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fcmpu cr6,f7,f8
	cr6.compare(ctx.f7.f64, ctx.f8.f64);
	// ble cr6,0x829095d8
	if (!cr6.gt) goto loc_829095D8;
loc_829095D4:
	// li r30,1
	ctx.r30.s64 = 1;
loc_829095D8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829095f8
	if (cr6.eq) goto loc_829095F8;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82908070
	ctx.lr = 0x829095F8;
	sub_82908070(ctx, base);
loc_829095F8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82909600"))) PPC_WEAK_FUNC(sub_82909600);
PPC_FUNC_IMPL(__imp__sub_82909600) {
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
	// bl 0x829093b0
	ctx.lr = 0x8290961C;
	sub_829093B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82909634
	if (cr6.eq) goto loc_82909634;
	// lbz r11,21(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stb r10,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r10.u8);
loc_82909634:
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

__attribute__((alias("__imp__sub_82909648"))) PPC_WEAK_FUNC(sub_82909648);
PPC_FUNC_IMPL(__imp__sub_82909648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82909650;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82909774
	if (!cr6.eq) goto loc_82909774;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x8290967C;
	sub_82A0C788(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82908448
	ctx.lr = 0x82909694;
	sub_82908448(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f13,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-11356(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11356);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x829096b4
	if (!cr6.lt) goto loc_829096B4;
	// lfs f0,1272(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1272);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x829096b8
	goto loc_829096B8;
loc_829096B4:
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
loc_829096B8:
	// lfs f13,1280(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1280);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f13,52(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// addi r30,r31,52
	ctx.r30.s64 = ctx.r31.s64 + 52;
	// lfs f12,1284(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1284);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,56(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f11,1288(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1288);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f11,60(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f13,22500(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22500);
	ctx.f13.f64 = double(temp.f32);
	// bge cr6,0x829096f8
	if (!cr6.lt) goto loc_829096F8;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82909704
	goto loc_82909704;
loc_829096F8:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82909708
	if (cr6.lt) goto loc_82909708;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82909704:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82909708:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,-10804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10804);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a5a710
	ctx.lr = 0x8290971C;
	sub_82A5A710(ctx, base);
	// li r10,12
	ctx.r10.s64 = 12;
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,20056(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20056);
	ctx.f0.f64 = double(temp.f32);
loc_82909730:
	// stfs f31,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f31,12(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f31,16(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfsu f0,12(r11)
	ea = 12 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82909730
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82909730;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r11.u8);
	// stb r11,209(r31)
	PPC_STORE_U8(ctx.r31.u32 + 209, ctx.r11.u8);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,72(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lbz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 208);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r11.u8);
loc_82909774:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82909784"))) PPC_WEAK_FUNC(sub_82909784);
PPC_FUNC_IMPL(__imp__sub_82909784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82909788"))) PPC_WEAK_FUNC(sub_82909788);
PPC_FUNC_IMPL(__imp__sub_82909788) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82909790;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831ce778
	ctx.lr = 0x82909798;
	__savefpr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31763
	ctx.r29.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r3,-3564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x829097B4;
	sub_82A0C788(ctx, base);
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r27,6112(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// lwz r26,32(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82908448
	ctx.lr = 0x829097D8;
	sub_82908448(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-11356(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11356);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x829097f4
	if (!cr6.lt) goto loc_829097F4;
	// lfs f0,1272(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1272);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_829097F4:
	// li r5,80
	ctx.r5.s64 = 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82908758
	ctx.lr = 0x82909804;
	sub_82908758(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f28,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f28.f64 = double(temp.f32);
	// fdivs f31,f28,f1
	ctx.f31.f64 = double(float(ctx.f28.f64 / ctx.f1.f64));
	// lfs f0,-23848(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23848);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f29,f0,f31
	ctx.f29.f64 = double(float(ctx.f0.f64 / ctx.f31.f64));
	// bl 0x82a38db8
	ctx.lr = 0x8290982C;
	sub_82A38DB8(ctx, base);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lfs f0,-27732(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27732);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x829098f8
	if (!cr6.gt) goto loc_829098F8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f30,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// addi r30,r11,22500
	ctx.r30.s64 = ctx.r11.s64 + 22500;
	// lfs f13,22500(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22500);
	ctx.f13.f64 = double(temp.f32);
	// bge cr6,0x82909868
	if (!cr6.lt) goto loc_82909868;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82909874
	goto loc_82909874;
loc_82909868:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82909878
	if (cr6.lt) goto loc_82909878;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82909874:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82909878:
	// addi r28,r31,52
	ctx.r28.s64 = ctx.r31.s64 + 52;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a5a710
	ctx.lr = 0x8290988C;
	sub_82A5A710(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f11,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// lfs f13,-23860(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23860);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f31.f64));
	// fmuls f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f1,f8,f12
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// bge cr6,0x829098d8
	if (!cr6.lt) goto loc_829098D8;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a5a710
	ctx.lr = 0x829098D4;
	sub_82A5A710(ctx, base);
	// b 0x82909924
	goto loc_82909924;
loc_829098D8:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x829098e8
	if (cr6.lt) goto loc_829098E8;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_829098E8:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a5a710
	ctx.lr = 0x829098F4;
	sub_82A5A710(ctx, base);
	// b 0x82909924
	goto loc_82909924;
loc_829098F8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82a38be0
	ctx.lr = 0x82909908;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82909924
	if (cr6.eq) goto loc_82909924;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// lfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// bl 0x825ca978
	ctx.lr = 0x82909924;
	sub_825CA978(ctx, base);
loc_82909924:
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// lfs f11,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,8516(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8516);
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bne cr6,0x82909948
	if (!cr6.eq) goto loc_82909948;
	// lfs f0,8144(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8144);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
loc_82909948:
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fabs f10,f0
	ctx.f10.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f12,20056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f10,f13
	cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// ble cr6,0x8290996c
	if (!cr6.gt) goto loc_8290996C;
	// fsel f0,f0,f28,f12
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f28.f64 : ctx.f12.f64;
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f13,52(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
loc_8290996C:
	// lfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f11
	cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// ble cr6,0x82909988
	if (!cr6.gt) goto loc_82909988;
	// fsel f0,f0,f28,f12
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f28.f64 : ctx.f12.f64;
	// fmuls f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f13,60(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
loc_82909988:
	// lbz r11,209(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 209);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// srawi r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// stb r10,209(r31)
	PPC_STORE_U8(ctx.r31.u32 + 209, ctx.r10.u8);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r6,r7,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x829099f8
	if (!cr0.eq) goto loc_829099F8;
	// lbz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 208);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,209(r31)
	PPC_STORE_U8(ctx.r31.u32 + 209, ctx.r10.u8);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x829099f8
	if (!cr6.lt) goto loc_829099F8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,64
	ctx.r10.s64 = ctx.r11.s64 + 64;
	// stfs f0,64(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lfs f13,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,68(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// lfs f12,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,72(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// lbz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 208);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stb r10,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r10.u8);
loc_829099F8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831ce7c4
	ctx.lr = 0x82909A04;
	__restfpr_28(ctx, base);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82909A08"))) PPC_WEAK_FUNC(sub_82909A08);
PPC_FUNC_IMPL(__imp__sub_82909A08) {
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
	// li r5,80
	ctx.r5.s64 = 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x829088a0
	ctx.lr = 0x82909A2C;
	sub_829088A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82909788
	ctx.lr = 0x82909A38;
	sub_82909788(ctx, base);
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

__attribute__((alias("__imp__sub_82909A54"))) PPC_WEAK_FUNC(sub_82909A54);
PPC_FUNC_IMPL(__imp__sub_82909A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82909A58"))) PPC_WEAK_FUNC(sub_82909A58);
PPC_FUNC_IMPL(__imp__sub_82909A58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82909A60;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x831ce764
	ctx.lr = 0x82909A68;
	__savefpr_23(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 208);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82909a90
	if (!cr6.eq) goto loc_82909A90;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x831ce7b0
	ctx.lr = 0x82909A8C;
	__restfpr_23(ctx, base);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82909A90:
	// addi r29,r31,52
	ctx.r29.s64 = ctx.r31.s64 + 52;
	// addi r30,r31,64
	ctx.r30.s64 = ctx.r31.s64 + 64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825ca9d8
	ctx.lr = 0x82909AA8;
	sub_825CA9D8(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r31,r31,76
	ctx.r31.s64 = ctx.r31.s64 + 76;
	// lfs f25,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f25.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f25,80(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// lfs f26,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f26.f64 = double(temp.f32);
	// li r24,0
	ctx.r24.s64 = 0;
	// lfs f27,20056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20056);
	ctx.f27.f64 = double(temp.f32);
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// fmr f24,f25
	ctx.f24.f64 = ctx.f25.f64;
	// addi r26,r11,22504
	ctx.r26.s64 = ctx.r11.s64 + 22504;
	// fmuls f8,f12,f12
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f30,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f23,f9,f9,f8
	ctx.f23.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
loc_82909B08:
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f25
	cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// blt cr6,0x82909bec
	if (cr6.lt) goto loc_82909BEC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ca560
	ctx.lr = 0x82909B20;
	sub_825CA560(ctx, base);
	// lfs f0,-4(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f25
	cr6.compare(ctx.f1.f64, ctx.f25.f64);
	// bge cr6,0x82909b38
	if (!cr6.lt) goto loc_82909B38;
	// fadds f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// b 0x82909b44
	goto loc_82909B44;
loc_82909B38:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x82909b44
	if (cr6.lt) goto loc_82909B44;
	// fsubs f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
loc_82909B44:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a5b298
	ctx.lr = 0x82909B58;
	sub_82A5B298(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82909be8
	if (cr6.eq) goto loc_82909BE8;
	// fsubs f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// lfs f13,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// bne cr6,0x82909b9c
	if (!cr6.eq) goto loc_82909B9C;
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x82909b90
	if (!cr6.gt) goto loc_82909B90;
	// fsel f12,f0,f26,f27
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f26.f64 : ctx.f27.f64;
	// lfs f13,-4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f12,f13,f0
	ctx.f0.f64 = double(float(-(ctx.f12.f64 * ctx.f13.f64 - ctx.f0.f64)));
loc_82909B90:
	// fsel f24,f0,f26,f27
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = ctx.f0.f64 >= 0.0 ? ctx.f26.f64 : ctx.f27.f64;
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x82909bd4
	goto loc_82909BD4;
loc_82909B9C:
	// fcmpu cr6,f12,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x82909bb0
	if (!cr6.gt) goto loc_82909BB0;
	// fsel f12,f0,f26,f27
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f26.f64 : ctx.f27.f64;
	// lfs f13,-4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f12,f13,f0
	ctx.f0.f64 = double(float(-(ctx.f12.f64 * ctx.f13.f64 - ctx.f0.f64)));
loc_82909BB0:
	// fsel f0,f0,f26,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f26.f64 : ctx.f27.f64;
	// fcmpu cr6,f24,f25
	cr6.compare(ctx.f24.f64, ctx.f25.f64);
	// ble cr6,0x82909bc4
	if (!cr6.gt) goto loc_82909BC4;
	// fcmpu cr6,f0,f25
	cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// bgt cr6,0x82909bd4
	if (cr6.gt) goto loc_82909BD4;
loc_82909BC4:
	// fcmpu cr6,f24,f25
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f24.f64, ctx.f25.f64);
	// bge cr6,0x82909be8
	if (!cr6.lt) goto loc_82909BE8;
	// fcmpu cr6,f0,f25
	cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// bge cr6,0x82909be8
	if (!cr6.lt) goto loc_82909BE8;
loc_82909BD4:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// cmplwi cr6,r25,12
	cr6.compare<uint32_t>(ctx.r25.u32, 12, xer);
	// blt cr6,0x82909b08
	if (cr6.lt) goto loc_82909B08;
	// b 0x82909bec
	goto loc_82909BEC;
loc_82909BE8:
	// li r27,0
	ctx.r27.s64 = 0;
loc_82909BEC:
	// clrlwi r27,r27,24
	ctx.r27.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x82909d08
	if (!cr6.eq) goto loc_82909D08;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f30,f25
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f25.f64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fmr f31,f25
	ctx.f31.f64 = ctx.f25.f64;
	// li r24,1
	ctx.r24.s64 = 1;
	// li r28,1
	ctx.r28.s64 = 1;
	// lfs f29,-11356(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11356);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,-11376(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11376);
	ctx.f28.f64 = double(temp.f32);
loc_82909C18:
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f25
	cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// blt cr6,0x82909cf0
	if (cr6.lt) goto loc_82909CF0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a5b298
	ctx.lr = 0x82909C38;
	sub_82A5B298(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82909cfc
	if (cr6.eq) goto loc_82909CFC;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f6,f9,f10
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f5,f7,f10
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fadds f4,f0,f6
	ctx.f4.f64 = double(float(ctx.f0.f64 + ctx.f6.f64));
	// fadds f3,f13,f5
	ctx.f3.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// fsubs f2,f4,f12
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f12.f64));
	// fsubs f1,f3,f11
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f11.f64));
	// fmuls f10,f2,f2
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// fmadds f9,f1,f1,f10
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f10.f64));
	// fcmpu cr6,f9,f28
	cr6.compare(ctx.f9.f64, ctx.f28.f64);
	// bge cr6,0x82909cfc
	if (!cr6.lt) goto loc_82909CFC;
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fabs f12,f31
	ctx.f12.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fcmpu cr6,f12,f29
	cr6.compare(ctx.f12.f64, ctx.f29.f64);
	// fmadds f0,f13,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// bge cr6,0x82909cbc
	if (!cr6.lt) goto loc_82909CBC;
	// fcmpu cr6,f23,f0
	cr6.compare(ctx.f23.f64, ctx.f0.f64);
	// bgt cr6,0x82909cdc
	if (cr6.gt) goto loc_82909CDC;
	// fmr f31,f26
	ctx.f31.f64 = ctx.f26.f64;
	// b 0x82909cd8
	goto loc_82909CD8;
loc_82909CBC:
	// fsubs f13,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fsel f12,f13,f26,f27
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f26.f64 : ctx.f27.f64;
	// fcmpu cr6,f12,f31
	cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// beq cr6,0x82909cd8
	if (cr6.eq) goto loc_82909CD8;
	// fcmpu cr6,f31,f25
	cr6.compare(ctx.f31.f64, ctx.f25.f64);
	// ble cr6,0x82909cfc
	if (!cr6.gt) goto loc_82909CFC;
	// fmr f31,f27
	ctx.f31.f64 = ctx.f27.f64;
loc_82909CD8:
	// fmr f30,f0
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f0.f64;
loc_82909CDC:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplwi cr6,r28,12
	cr6.compare<uint32_t>(ctx.r28.u32, 12, xer);
	// blt cr6,0x82909c18
	if (cr6.lt) goto loc_82909C18;
	// b 0x82909d00
	goto loc_82909D00;
loc_82909CF0:
	// fabs f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82909d00
	if (!cr6.gt) goto loc_82909D00;
loc_82909CFC:
	// li r24,0
	ctx.r24.s64 = 0;
loc_82909D00:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82909d40
	if (cr6.eq) goto loc_82909D40;
loc_82909D08:
	// fcmpu cr6,f24,f25
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f24.f64, ctx.f25.f64);
	// ble cr6,0x82909d28
	if (!cr6.gt) goto loc_82909D28;
	// li r11,1
	ctx.r11.s64 = 1;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x831ce7b0
	ctx.lr = 0x82909D24;
	__restfpr_23(ctx, base);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82909D28:
	// li r11,-1
	ctx.r11.s64 = -1;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x831ce7b0
	ctx.lr = 0x82909D3C;
	__restfpr_23(ctx, base);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82909D40:
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// li r10,2
	ctx.r10.s64 = 2;
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 & ctx.r10.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x831ce7b0
	ctx.lr = 0x82909D64;
	__restfpr_23(ctx, base);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82909D68"))) PPC_WEAK_FUNC(sub_82909D68);
PPC_FUNC_IMPL(__imp__sub_82909D68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82909D70;
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
	// beq cr6,0x82909de4
	if (cr6.eq) goto loc_82909DE4;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x82909D98;
	sub_82A0C760(ctx, base);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// bl 0x82a3d2a8
	ctx.lr = 0x82909DA8;
	sub_82A3D2A8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82909dcc
	if (cr6.eq) goto loc_82909DCC;
	// lhz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82909dcc
	if (cr6.eq) goto loc_82909DCC;
	// lhz r10,18(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82909dd8
	if (cr6.gt) goto loc_82909DD8;
loc_82909DCC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82909788
	ctx.lr = 0x82909DD8;
	sub_82909788(ctx, base);
loc_82909DD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82909DE4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82908498
	ctx.lr = 0x82909DF0;
	sub_82908498(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82909DF8"))) PPC_WEAK_FUNC(sub_82909DF8);
PPC_FUNC_IMPL(__imp__sub_82909DF8) {
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82909E34"))) PPC_WEAK_FUNC(sub_82909E34);
PPC_FUNC_IMPL(__imp__sub_82909E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82909E38"))) PPC_WEAK_FUNC(sub_82909E38);
PPC_FUNC_IMPL(__imp__sub_82909E38) {
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
	// bgt cr6,0x82909f78
	if (cr6.gt) goto loc_82909F78;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82909ed4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82909ED4;
	// bdzf 4*cr6+eq,0x82909f18
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82909F18;
	// bne cr6,0x82909f70
	if (!cr6.eq) goto loc_82909F70;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82a38be0
	ctx.lr = 0x82909E88;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82909f78
	if (cr6.eq) goto loc_82909F78;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82a38db8
	ctx.lr = 0x82909EA4;
	sub_82A38DB8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,21712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21712);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// blt cr6,0x82909f78
	if (cr6.lt) goto loc_82909F78;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82a38db8
	ctx.lr = 0x82909EC4;
	sub_82A38DB8(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x82909f78
	if (!cr6.lt) goto loc_82909F78;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82909f74
	goto loc_82909F74;
loc_82909ED4:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82a38be0
	ctx.lr = 0x82909EE4;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82909f68
	if (cr6.eq) goto loc_82909F68;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82a38db8
	ctx.lr = 0x82909F00;
	sub_82A38DB8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,21712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21712);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82909f68
	if (cr6.lt) goto loc_82909F68;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82909f74
	goto loc_82909F74;
loc_82909F18:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82a38be0
	ctx.lr = 0x82909F28;
	sub_82A38BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82909f68
	if (cr6.eq) goto loc_82909F68;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82a38db8
	ctx.lr = 0x82909F44;
	sub_82A38DB8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,21712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21712);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82909f68
	if (cr6.lt) goto loc_82909F68;
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
	// blt cr6,0x82909f78
	if (cr6.lt) goto loc_82909F78;
loc_82909F68:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82909f74
	goto loc_82909F74;
loc_82909F70:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82909F74:
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82909F78:
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

__attribute__((alias("__imp__sub_82909F94"))) PPC_WEAK_FUNC(sub_82909F94);
PPC_FUNC_IMPL(__imp__sub_82909F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82909F98"))) PPC_WEAK_FUNC(sub_82909F98);
PPC_FUNC_IMPL(__imp__sub_82909F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f1,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82909FA4"))) PPC_WEAK_FUNC(sub_82909FA4);
PPC_FUNC_IMPL(__imp__sub_82909FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82909FA8"))) PPC_WEAK_FUNC(sub_82909FA8);
PPC_FUNC_IMPL(__imp__sub_82909FA8) {
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
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stb r9,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r9.u8);
	// stw r8,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r8.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// blr 
	return;
}

