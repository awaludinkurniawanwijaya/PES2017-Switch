#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82A67784"))) PPC_WEAK_FUNC(sub_82A67784);
PPC_FUNC_IMPL(__imp__sub_82A67784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A67788"))) PPC_WEAK_FUNC(sub_82A67788);
PPC_FUNC_IMPL(__imp__sub_82A67788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,100(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a677c0
	if (!cr6.eq) goto loc_82A677C0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r11,r9,11476
	ctx.r11.s64 = ctx.r9.s64 + 11476;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_82A677C0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82a677e4
	if (!cr6.eq) goto loc_82A677E4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r11,r9,11476
	ctx.r11.s64 = ctx.r9.s64 + 11476;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_82A677E4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r10,11476
	ctx.r4.s64 = ctx.r10.s64 + 11476;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82A677FC"))) PPC_WEAK_FUNC(sub_82A677FC);
PPC_FUNC_IMPL(__imp__sub_82A677FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A67800"))) PPC_WEAK_FUNC(sub_82A67800);
PPC_FUNC_IMPL(__imp__sub_82A67800) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A67808;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,11492
	ctx.r4.s64 = ctx.r10.s64 + 11492;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r28,48(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x83815d38
	ctx.lr = 0x82A67834;
	sub_83815D38(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83815b28
	ctx.lr = 0x82A67840;
	sub_83815B28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,0
	ctx.r31.s64 = 0;
	// clrlwi r29,r29,24
	ctx.r29.u64 = ctx.r29.u32 & 0xFF;
	// lfs f31,8976(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8976);
	ctx.f31.f64 = double(temp.f32);
loc_82A67850:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82a67874
	if (cr6.eq) goto loc_82A67874;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8315ecb0
	ctx.lr = 0x82A67870;
	sub_8315ECB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
loc_82A67874:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// bl 0x83815b68
	ctx.lr = 0x82A67894;
	sub_83815B68(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,6
	cr6.compare<uint32_t>(ctx.r31.u32, 6, xer);
	// blt cr6,0x82a67850
	if (cr6.lt) goto loc_82A67850;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838153c8
	ctx.lr = 0x82A678AC;
	sub_838153C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83815cb8
	ctx.lr = 0x82A678B4;
	sub_83815CB8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A678C0"))) PPC_WEAK_FUNC(sub_82A678C0);
PPC_FUNC_IMPL(__imp__sub_82A678C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A678C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,224
	ctx.r5.s64 = 224;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A678F0;
	sub_831CE980(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83179380
	ctx.lr = 0x82A678FC;
	sub_83179380(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a67800
	ctx.lr = 0x82A67910;
	sub_82A67800(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A67918"))) PPC_WEAK_FUNC(sub_82A67918);
PPC_FUNC_IMPL(__imp__sub_82A67918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgt cr6,0x82a67a00
	if (cr6.gt) goto loc_82A67A00;
	// lis r12,-32090
	ctx.r12.s64 = -2103050240;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,31040
	ctx.r12.s64 = ctx.r12.s64 + 31040;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82A67970;
	case 1:
		goto loc_82A6797C;
	case 2:
		goto loc_82A67988;
	case 3:
		goto loc_82A67994;
	case 4:
		goto loc_82A679A0;
	case 5:
		goto loc_82A679AC;
	case 6:
		goto loc_82A679B8;
	case 7:
		goto loc_82A679C4;
	case 8:
		goto loc_82A679D0;
	case 9:
		goto loc_82A679DC;
	case 10:
		goto loc_82A679E8;
	case 11:
		goto loc_82A679F4;
	default:
		return;
	}
	// lwz r21,31088(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31088);
	// lwz r21,31100(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31100);
	// lwz r21,31112(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31112);
	// lwz r21,31124(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31124);
	// lwz r21,31136(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31136);
	// lwz r21,31148(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31148);
	// lwz r21,31160(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31160);
	// lwz r21,31172(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31172);
	// lwz r21,31184(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31184);
	// lwz r21,31196(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31196);
	// lwz r21,31208(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31208);
	// lwz r21,31220(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31220);
loc_82A67970:
	// lis r3,25
	ctx.r3.s64 = 1638400;
	// ori r3,r3,412
	ctx.r3.u64 = ctx.r3.u64 | 412;
	// blr 
	return;
loc_82A6797C:
	// lis r3,25
	ctx.r3.s64 = 1638400;
	// ori r3,r3,413
	ctx.r3.u64 = ctx.r3.u64 | 413;
	// blr 
	return;
loc_82A67988:
	// lis r3,25
	ctx.r3.s64 = 1638400;
	// ori r3,r3,414
	ctx.r3.u64 = ctx.r3.u64 | 414;
	// blr 
	return;
loc_82A67994:
	// lis r3,25
	ctx.r3.s64 = 1638400;
	// ori r3,r3,415
	ctx.r3.u64 = ctx.r3.u64 | 415;
	// blr 
	return;
loc_82A679A0:
	// lis r3,25
	ctx.r3.s64 = 1638400;
	// ori r3,r3,416
	ctx.r3.u64 = ctx.r3.u64 | 416;
	// blr 
	return;
loc_82A679AC:
	// lis r3,25
	ctx.r3.s64 = 1638400;
	// ori r3,r3,417
	ctx.r3.u64 = ctx.r3.u64 | 417;
	// blr 
	return;
loc_82A679B8:
	// lis r3,25
	ctx.r3.s64 = 1638400;
	// ori r3,r3,418
	ctx.r3.u64 = ctx.r3.u64 | 418;
	// blr 
	return;
loc_82A679C4:
	// lis r3,25
	ctx.r3.s64 = 1638400;
	// ori r3,r3,419
	ctx.r3.u64 = ctx.r3.u64 | 419;
	// blr 
	return;
loc_82A679D0:
	// lis r3,25
	ctx.r3.s64 = 1638400;
	// ori r3,r3,420
	ctx.r3.u64 = ctx.r3.u64 | 420;
	// blr 
	return;
loc_82A679DC:
	// lis r3,25
	ctx.r3.s64 = 1638400;
	// ori r3,r3,421
	ctx.r3.u64 = ctx.r3.u64 | 421;
	// blr 
	return;
loc_82A679E8:
	// lis r3,25
	ctx.r3.s64 = 1638400;
	// ori r3,r3,422
	ctx.r3.u64 = ctx.r3.u64 | 422;
	// blr 
	return;
loc_82A679F4:
	// lis r3,25
	ctx.r3.s64 = 1638400;
	// ori r3,r3,423
	ctx.r3.u64 = ctx.r3.u64 | 423;
	// blr 
	return;
loc_82A67A00:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A67A08"))) PPC_WEAK_FUNC(sub_82A67A08);
PPC_FUNC_IMPL(__imp__sub_82A67A08) {
	PPC_FUNC_PROLOGUE();
	// b 0x83123650
	sub_83123650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A67A0C"))) PPC_WEAK_FUNC(sub_82A67A0C);
PPC_FUNC_IMPL(__imp__sub_82A67A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A67A10"))) PPC_WEAK_FUNC(sub_82A67A10);
PPC_FUNC_IMPL(__imp__sub_82A67A10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r3,-14
	ctx.r11.s64 = ctx.r3.s64 + -14;
	// cmplwi cr6,r11,28
	cr6.compare<uint32_t>(ctx.r11.u32, 28, xer);
	// bgt cr6,0x82a67bf8
	if (cr6.gt) goto loc_82A67BF8;
	// lis r12,-32090
	ctx.r12.s64 = -2103050240;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,31284
	ctx.r12.s64 = ctx.r12.s64 + 31284;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82A67B38;
	case 1:
		goto loc_82A67B44;
	case 2:
		goto loc_82A67BA4;
	case 3:
		goto loc_82A67B68;
	case 4:
		goto loc_82A67AD8;
	case 5:
		goto loc_82A67B8C;
	case 6:
		goto loc_82A67B74;
	case 7:
		goto loc_82A67B80;
	case 8:
		goto loc_82A67B5C;
	case 9:
		goto loc_82A67B98;
	case 10:
		goto loc_82A67AE4;
	case 11:
		goto loc_82A67B2C;
	case 12:
		goto loc_82A67BBC;
	case 13:
		goto loc_82A67BC8;
	case 14:
		goto loc_82A67BD4;
	case 15:
		goto loc_82A67BE0;
	case 16:
		goto loc_82A67AA8;
	case 17:
		goto loc_82A67B50;
	case 18:
		goto loc_82A67AFC;
	case 19:
		goto loc_82A67B08;
	case 20:
		goto loc_82A67AF0;
	case 21:
		goto loc_82A67ACC;
	case 22:
		goto loc_82A67B20;
	case 23:
		goto loc_82A67B14;
	case 24:
		goto loc_82A67AC0;
	case 25:
		goto loc_82A67AB4;
	case 26:
		goto loc_82A67BEC;
	case 27:
		goto loc_82A67BF8;
	case 28:
		goto loc_82A67BB0;
	default:
		return;
	}
	// lwz r21,31544(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31544);
	// lwz r21,31556(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31556);
	// lwz r21,31652(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31652);
	// lwz r21,31592(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31592);
	// lwz r21,31448(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31448);
	// lwz r21,31628(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31628);
	// lwz r21,31604(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31604);
	// lwz r21,31616(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31616);
	// lwz r21,31580(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31580);
	// lwz r21,31640(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31640);
	// lwz r21,31460(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31460);
	// lwz r21,31532(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31532);
	// lwz r21,31676(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31676);
	// lwz r21,31688(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31688);
	// lwz r21,31700(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31700);
	// lwz r21,31712(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31712);
	// lwz r21,31400(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31400);
	// lwz r21,31568(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31568);
	// lwz r21,31484(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31484);
	// lwz r21,31496(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31496);
	// lwz r21,31472(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31472);
	// lwz r21,31436(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31436);
	// lwz r21,31520(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31520);
	// lwz r21,31508(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31508);
	// lwz r21,31424(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31424);
	// lwz r21,31412(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31412);
	// lwz r21,31724(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31724);
	// lwz r21,31736(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31736);
	// lwz r21,31664(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31664);
loc_82A67AA8:
	// lis r3,233
	ctx.r3.s64 = 15269888;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
	// blr 
	return;
loc_82A67AB4:
	// lis r3,234
	ctx.r3.s64 = 15335424;
	// ori r3,r3,76
	ctx.r3.u64 = ctx.r3.u64 | 76;
	// blr 
	return;
loc_82A67AC0:
	// lis r3,234
	ctx.r3.s64 = 15335424;
	// ori r3,r3,75
	ctx.r3.u64 = ctx.r3.u64 | 75;
	// blr 
	return;
loc_82A67ACC:
	// lis r3,234
	ctx.r3.s64 = 15335424;
	// ori r3,r3,56
	ctx.r3.u64 = ctx.r3.u64 | 56;
	// blr 
	return;
loc_82A67AD8:
	// lis r3,234
	ctx.r3.s64 = 15335424;
	// ori r3,r3,67
	ctx.r3.u64 = ctx.r3.u64 | 67;
	// blr 
	return;
loc_82A67AE4:
	// lis r3,234
	ctx.r3.s64 = 15335424;
	// ori r3,r3,59
	ctx.r3.u64 = ctx.r3.u64 | 59;
	// blr 
	return;
loc_82A67AF0:
	// lis r3,234
	ctx.r3.s64 = 15335424;
	// ori r3,r3,74
	ctx.r3.u64 = ctx.r3.u64 | 74;
	// blr 
	return;
loc_82A67AFC:
	// lis r3,234
	ctx.r3.s64 = 15335424;
	// ori r3,r3,105
	ctx.r3.u64 = ctx.r3.u64 | 105;
	// blr 
	return;
loc_82A67B08:
	// lis r3,234
	ctx.r3.s64 = 15335424;
	// ori r3,r3,104
	ctx.r3.u64 = ctx.r3.u64 | 104;
	// blr 
	return;
loc_82A67B14:
	// lis r3,234
	ctx.r3.s64 = 15335424;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
	// blr 
	return;
loc_82A67B20:
	// lis r3,234
	ctx.r3.s64 = 15335424;
	// ori r3,r3,40
	ctx.r3.u64 = ctx.r3.u64 | 40;
	// blr 
	return;
loc_82A67B2C:
	// lis r3,234
	ctx.r3.s64 = 15335424;
	// ori r3,r3,71
	ctx.r3.u64 = ctx.r3.u64 | 71;
	// blr 
	return;
loc_82A67B38:
	// lis r3,234
	ctx.r3.s64 = 15335424;
	// ori r3,r3,63
	ctx.r3.u64 = ctx.r3.u64 | 63;
	// blr 
	return;
loc_82A67B44:
	// lis r3,234
	ctx.r3.s64 = 15335424;
	// ori r3,r3,64
	ctx.r3.u64 = ctx.r3.u64 | 64;
	// blr 
	return;
loc_82A67B50:
	// lis r3,234
	ctx.r3.s64 = 15335424;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// blr 
	return;
loc_82A67B5C:
	// lis r3,234
	ctx.r3.s64 = 15335424;
	// ori r3,r3,38
	ctx.r3.u64 = ctx.r3.u64 | 38;
	// blr 
	return;
loc_82A67B68:
	// lis r3,234
	ctx.r3.s64 = 15335424;
	// ori r3,r3,66
	ctx.r3.u64 = ctx.r3.u64 | 66;
	// blr 
	return;
loc_82A67B74:
	// lis r3,234
	ctx.r3.s64 = 15335424;
	// ori r3,r3,68
	ctx.r3.u64 = ctx.r3.u64 | 68;
	// blr 
	return;
loc_82A67B80:
	// lis r3,234
	ctx.r3.s64 = 15335424;
	// ori r3,r3,69
	ctx.r3.u64 = ctx.r3.u64 | 69;
	// blr 
	return;
loc_82A67B8C:
	// lis r3,234
	ctx.r3.s64 = 15335424;
	// ori r3,r3,33
	ctx.r3.u64 = ctx.r3.u64 | 33;
	// blr 
	return;
loc_82A67B98:
	// lis r3,234
	ctx.r3.s64 = 15335424;
	// ori r3,r3,70
	ctx.r3.u64 = ctx.r3.u64 | 70;
	// blr 
	return;
loc_82A67BA4:
	// lis r3,234
	ctx.r3.s64 = 15335424;
	// ori r3,r3,65
	ctx.r3.u64 = ctx.r3.u64 | 65;
	// blr 
	return;
loc_82A67BB0:
	// lis r3,233
	ctx.r3.s64 = 15269888;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// blr 
	return;
loc_82A67BBC:
	// lis r3,234
	ctx.r3.s64 = 15335424;
	// ori r3,r3,100
	ctx.r3.u64 = ctx.r3.u64 | 100;
	// blr 
	return;
loc_82A67BC8:
	// lis r3,234
	ctx.r3.s64 = 15335424;
	// ori r3,r3,101
	ctx.r3.u64 = ctx.r3.u64 | 101;
	// blr 
	return;
loc_82A67BD4:
	// lis r3,234
	ctx.r3.s64 = 15335424;
	// ori r3,r3,102
	ctx.r3.u64 = ctx.r3.u64 | 102;
	// blr 
	return;
loc_82A67BE0:
	// lis r3,234
	ctx.r3.s64 = 15335424;
	// ori r3,r3,103
	ctx.r3.u64 = ctx.r3.u64 | 103;
	// blr 
	return;
loc_82A67BEC:
	// lis r3,233
	ctx.r3.s64 = 15269888;
	// ori r3,r3,52
	ctx.r3.u64 = ctx.r3.u64 | 52;
	// blr 
	return;
loc_82A67BF8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A67C00"))) PPC_WEAK_FUNC(sub_82A67C00);
PPC_FUNC_IMPL(__imp__sub_82A67C00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A67C08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82A67C18;
	sub_831156E8(ctx, base);
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311bf98
	ctx.lr = 0x82A67C28;
	sub_8311BF98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x82A67C38;
	sub_8311BF98(ctx, base);
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// addi r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 + 56;
loc_82A67C40:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82a67c64
	if (cr6.eq) goto loc_82A67C64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82a67c40
	if (cr6.eq) goto loc_82A67C40;
loc_82A67C64:
	// neg r11,r9
	ctx.r11.s64 = -ctx.r9.s64;
	// andc r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// rlwinm r3,r10,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A67C78"))) PPC_WEAK_FUNC(sub_82A67C78);
PPC_FUNC_IMPL(__imp__sub_82A67C78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A67C80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82A67C90;
	sub_831156E8(ctx, base);
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311bf98
	ctx.lr = 0x82A67CA0;
	sub_8311BF98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x82A67CB0;
	sub_8311BF98(ctx, base);
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// addi r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 + 56;
loc_82A67CB8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82a67cdc
	if (cr6.eq) goto loc_82A67CDC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82a67cb8
	if (cr6.eq) goto loc_82A67CB8;
loc_82A67CDC:
	// rlwinm r3,r9,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A67CE8"))) PPC_WEAK_FUNC(sub_82A67CE8);
PPC_FUNC_IMPL(__imp__sub_82A67CE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A67CF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82A67D00;
	sub_831156E8(ctx, base);
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311bf98
	ctx.lr = 0x82A67D10;
	sub_8311BF98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x82A67D20;
	sub_8311BF98(ctx, base);
	// li r28,13
	ctx.r28.s64 = 13;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8314b1c8
	ctx.lr = 0x82A67D3C;
	sub_8314B1C8(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// clrlwi r29,r3,24
	ctx.r29.u64 = ctx.r3.u32 & 0xFF;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8314b1c8
	ctx.lr = 0x82A67D54;
	sub_8314B1C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x82a67dc8
	if (!cr6.eq) goto loc_82A67DC8;
	// ld r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 44);
	// ld r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 44);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lhz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82a67da0
	if (cr6.eq) goto loc_82A67DA0;
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82A67DA0:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// subfc r9,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82A67DC8:
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfc r11,r11,r29
	xer.ca = ctx.r29.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// subfze r3,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A67DDC"))) PPC_WEAK_FUNC(sub_82A67DDC);
PPC_FUNC_IMPL(__imp__sub_82A67DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A67DE0"))) PPC_WEAK_FUNC(sub_82A67DE0);
PPC_FUNC_IMPL(__imp__sub_82A67DE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A67DE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82A67DF8;
	sub_831156E8(ctx, base);
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311bf98
	ctx.lr = 0x82A67E08;
	sub_8311BF98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x82A67E18;
	sub_8311BF98(ctx, base);
	// li r28,13
	ctx.r28.s64 = 13;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8314b1c8
	ctx.lr = 0x82A67E34;
	sub_8314B1C8(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// clrlwi r29,r3,24
	ctx.r29.u64 = ctx.r3.u32 & 0xFF;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8314b1c8
	ctx.lr = 0x82A67E4C;
	sub_8314B1C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x82a67ec0
	if (!cr6.eq) goto loc_82A67EC0;
	// ld r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 44);
	// ld r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 44);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lhz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82a67e98
	if (cr6.eq) goto loc_82A67E98;
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82A67E98:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// subfc r9,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82A67EC0:
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfc r11,r29,r11
	xer.ca = ctx.r11.u32 >= ctx.r29.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// subfze r3,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A67ED4"))) PPC_WEAK_FUNC(sub_82A67ED4);
PPC_FUNC_IMPL(__imp__sub_82A67ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A67ED8"))) PPC_WEAK_FUNC(sub_82A67ED8);
PPC_FUNC_IMPL(__imp__sub_82A67ED8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A67EE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82A67EF0;
	sub_831156E8(ctx, base);
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311bf98
	ctx.lr = 0x82A67F00;
	sub_8311BF98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x82A67F10;
	sub_8311BF98(ctx, base);
	// lwz r11,184(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// lwz r10,184(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// rlwinm r11,r11,7,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7F;
	// rlwinm r10,r10,7,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7F;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82a67f48
	if (!cr6.eq) goto loc_82A67F48;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a67de0
	ctx.lr = 0x82A67F34;
	sub_82A67DE0(ctx, base);
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
loc_82A67F48:
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfze r3,r9
	temp.u8 = ~ctx.r9.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A67F5C"))) PPC_WEAK_FUNC(sub_82A67F5C);
PPC_FUNC_IMPL(__imp__sub_82A67F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A67F60"))) PPC_WEAK_FUNC(sub_82A67F60);
PPC_FUNC_IMPL(__imp__sub_82A67F60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A67F68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82A67F78;
	sub_831156E8(ctx, base);
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311bf98
	ctx.lr = 0x82A67F88;
	sub_8311BF98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x82A67F98;
	sub_8311BF98(ctx, base);
	// lwz r11,184(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// lwz r10,184(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// rlwinm r11,r11,7,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7F;
	// rlwinm r10,r10,7,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7F;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82a67fd0
	if (!cr6.eq) goto loc_82A67FD0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a67de0
	ctx.lr = 0x82A67FBC;
	sub_82A67DE0(ctx, base);
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
loc_82A67FD0:
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfze r3,r9
	temp.u8 = ~ctx.r9.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A67FE4"))) PPC_WEAK_FUNC(sub_82A67FE4);
PPC_FUNC_IMPL(__imp__sub_82A67FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A67FE8"))) PPC_WEAK_FUNC(sub_82A67FE8);
PPC_FUNC_IMPL(__imp__sub_82A67FE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82A67FF0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82A68000;
	sub_831156E8(ctx, base);
	// lwz r27,48(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x82f00728
	ctx.lr = 0x82A68008;
	sub_82F00728(ctx, base);
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// addi r26,r10,10164
	ctx.r26.s64 = ctx.r10.s64 + 10164;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r9,r3
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(ctx.r31.s32, -1, xer);
	// bne cr6,0x82a6806c
	if (!cr6.eq) goto loc_82A6806C;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831178a0
	ctx.lr = 0x82A68044;
	sub_831178A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8318e5f8
	ctx.lr = 0x82A68054;
	sub_8318E5F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f00728
	ctx.lr = 0x82A6805C;
	sub_82F00728(ctx, base);
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r31.u32);
loc_82A6806C:
	// bl 0x82f00728
	ctx.lr = 0x82A68070;
	sub_82F00728(ctx, base);
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r3
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(ctx.r30.s32, -1, xer);
	// bne cr6,0x82a680c8
	if (!cr6.eq) goto loc_82A680C8;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831178a0
	ctx.lr = 0x82A680A0;
	sub_831178A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8318e5f8
	ctx.lr = 0x82A680B0;
	sub_8318E5F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82f00728
	ctx.lr = 0x82A680B8;
	sub_82F00728(ctx, base);
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r30.u32);
loc_82A680C8:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82a680f0
	if (!cr6.eq) goto loc_82A680F0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a67de0
	ctx.lr = 0x82A680DC;
	sub_82A67DE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82A680F0:
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfc r11,r30,r31
	xer.ca = ctx.r31.u32 >= ctx.r30.u32;
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// subfze r3,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A68104"))) PPC_WEAK_FUNC(sub_82A68104);
PPC_FUNC_IMPL(__imp__sub_82A68104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A68108"))) PPC_WEAK_FUNC(sub_82A68108);
PPC_FUNC_IMPL(__imp__sub_82A68108) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82A68110;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82A68120;
	sub_831156E8(ctx, base);
	// lwz r27,48(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x82f00728
	ctx.lr = 0x82A68128;
	sub_82F00728(ctx, base);
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// addi r26,r10,10164
	ctx.r26.s64 = ctx.r10.s64 + 10164;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r9,r3
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(ctx.r31.s32, -1, xer);
	// bne cr6,0x82a6818c
	if (!cr6.eq) goto loc_82A6818C;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831178a0
	ctx.lr = 0x82A68164;
	sub_831178A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8318e5f8
	ctx.lr = 0x82A68174;
	sub_8318E5F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f00728
	ctx.lr = 0x82A6817C;
	sub_82F00728(ctx, base);
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r31.u32);
loc_82A6818C:
	// bl 0x82f00728
	ctx.lr = 0x82A68190;
	sub_82F00728(ctx, base);
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r3
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(ctx.r30.s32, -1, xer);
	// bne cr6,0x82a681e8
	if (!cr6.eq) goto loc_82A681E8;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831178a0
	ctx.lr = 0x82A681C0;
	sub_831178A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8318e5f8
	ctx.lr = 0x82A681D0;
	sub_8318E5F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82f00728
	ctx.lr = 0x82A681D8;
	sub_82F00728(ctx, base);
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r30.u32);
loc_82A681E8:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82a68210
	if (!cr6.eq) goto loc_82A68210;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a67de0
	ctx.lr = 0x82A681FC;
	sub_82A67DE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82A68210:
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfc r11,r31,r30
	xer.ca = ctx.r30.u32 >= ctx.r31.u32;
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// subfze r3,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A68224"))) PPC_WEAK_FUNC(sub_82A68224);
PPC_FUNC_IMPL(__imp__sub_82A68224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A68228"))) PPC_WEAK_FUNC(sub_82A68228);
PPC_FUNC_IMPL(__imp__sub_82A68228) {
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
	// bl 0x831156e8
	ctx.lr = 0x82A68240;
	sub_831156E8(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c148
	ctx.lr = 0x82A6824C;
	sub_8311C148(ctx, base);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
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

__attribute__((alias("__imp__sub_82A68264"))) PPC_WEAK_FUNC(sub_82A68264);
PPC_FUNC_IMPL(__imp__sub_82A68264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A68268"))) PPC_WEAK_FUNC(sub_82A68268);
PPC_FUNC_IMPL(__imp__sub_82A68268) {
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
	ctx.lr = 0x82A68278;
	sub_831156E8(ctx, base);
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r9,r11,46616
	ctx.r9.u64 = ctx.r11.u64 | 46616;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a682dc
	if (cr6.eq) goto loc_82A682DC;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x82a682c8
	if (cr6.eq) goto loc_82A682C8;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x82a682b4
	if (cr6.eq) goto loc_82A682B4;
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A682B4:
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A682C8:
	// li r3,10
	ctx.r3.s64 = 10;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A682DC:
	// li r3,11
	ctx.r3.s64 = 11;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A682F0"))) PPC_WEAK_FUNC(sub_82A682F0);
PPC_FUNC_IMPL(__imp__sub_82A682F0) {
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
	ctx.lr = 0x82A68300;
	sub_831156E8(ctx, base);
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r9,r11,46616
	ctx.r9.u64 = ctx.r11.u64 | 46616;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a68330
	if (cr6.eq) goto loc_82A68330;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A68330:
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A68344"))) PPC_WEAK_FUNC(sub_82A68344);
PPC_FUNC_IMPL(__imp__sub_82A68344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A68348"))) PPC_WEAK_FUNC(sub_82A68348);
PPC_FUNC_IMPL(__imp__sub_82A68348) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,13401
	cr6.compare<uint32_t>(ctx.r3.u32, 13401, xer);
	// bgt cr6,0x82a68370
	if (cr6.gt) goto loc_82A68370;
	// cmplwi cr6,r3,13400
	cr6.compare<uint32_t>(ctx.r3.u32, 13400, xer);
	// bge cr6,0x82a68368
	if (!cr6.lt) goto loc_82A68368;
	// cmplwi cr6,r3,10200
	cr6.compare<uint32_t>(ctx.r3.u32, 10200, xer);
	// blt cr6,0x82a68370
	if (cr6.lt) goto loc_82A68370;
	// cmplwi cr6,r3,10201
	cr6.compare<uint32_t>(ctx.r3.u32, 10201, xer);
	// bgt cr6,0x82a68370
	if (cr6.gt) goto loc_82A68370;
loc_82A68368:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82A68370:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A68378"))) PPC_WEAK_FUNC(sub_82A68378);
PPC_FUNC_IMPL(__imp__sub_82A68378) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,51
	cr6.compare<uint32_t>(ctx.r4.u32, 51, xer);
	// beq cr6,0x82a683a0
	if (cr6.eq) goto loc_82A683A0;
	// cmplwi cr6,r4,67
	cr6.compare<uint32_t>(ctx.r4.u32, 67, xer);
	// bne cr6,0x82a683b4
	if (!cr6.eq) goto loc_82A683B4;
	// cmplwi cr6,r3,13400
	cr6.compare<uint32_t>(ctx.r3.u32, 13400, xer);
	// beq cr6,0x82a68398
	if (cr6.eq) goto loc_82A68398;
	// cmplwi cr6,r3,13401
	cr6.compare<uint32_t>(ctx.r3.u32, 13401, xer);
	// bne cr6,0x82a683b4
	if (!cr6.eq) goto loc_82A683B4;
loc_82A68398:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82A683A0:
	// cmplwi cr6,r3,10200
	cr6.compare<uint32_t>(ctx.r3.u32, 10200, xer);
	// beq cr6,0x82a68398
	if (cr6.eq) goto loc_82A68398;
	// cmplwi cr6,r3,10201
	cr6.compare<uint32_t>(ctx.r3.u32, 10201, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beqlr cr6
	if (cr6.eq) return;
loc_82A683B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A683BC"))) PPC_WEAK_FUNC(sub_82A683BC);
PPC_FUNC_IMPL(__imp__sub_82A683BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A683C0"))) PPC_WEAK_FUNC(sub_82A683C0);
PPC_FUNC_IMPL(__imp__sub_82A683C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(ctx.r11.u32, 23, xer);
	// beq cr6,0x82a683e0
	if (cr6.eq) goto loc_82A683E0;
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(ctx.r11.u32, 40, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r3,10200
	ctx.r3.s64 = 10200;
	// blr 
	return;
loc_82A683E0:
	// li r3,13400
	ctx.r3.s64 = 13400;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A683E8"))) PPC_WEAK_FUNC(sub_82A683E8);
PPC_FUNC_IMPL(__imp__sub_82A683E8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,8984
	ctx.r4.s64 = ctx.r11.s64 + 8984;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// bl 0x8257fad0
	ctx.lr = 0x82A68410;
	sub_8257FAD0(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lbz r10,8968(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8968);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a68450
	if (cr6.eq) goto loc_82A68450;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a68438
	if (cr6.lt) goto loc_82A68438;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x82A68438;
	sub_8257FB60(ctx, base);
loc_82A68438:
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
loc_82A68450:
	// lis r9,-31763
	ctx.r9.s64 = -2081619968;
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stb r10,8968(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8968, ctx.r10.u8);
	// stb r31,8969(r9)
	PPC_STORE_U8(ctx.r9.u32 + 8969, ctx.r31.u8);
	// blt cr6,0x82a68478
	if (cr6.lt) goto loc_82A68478;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x82A68478;
	sub_8257FB60(ctx, base);
loc_82A68478:
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

__attribute__((alias("__imp__sub_82A68490"))) PPC_WEAK_FUNC(sub_82A68490);
PPC_FUNC_IMPL(__imp__sub_82A68490) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,48
	cr6.compare<uint32_t>(ctx.r3.u32, 48, xer);
	// bgt cr6,0x82a684b4
	if (cr6.gt) goto loc_82A684B4;
	// beq cr6,0x82a684ac
	if (cr6.eq) goto loc_82A684AC;
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// blt cr6,0x82a684bc
	if (cr6.lt) goto loc_82A684BC;
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// bgt cr6,0x82a684bc
	if (cr6.gt) goto loc_82A684BC;
loc_82A684AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82A684B4:
	// cmplwi cr6,r3,91
	cr6.compare<uint32_t>(ctx.r3.u32, 91, xer);
	// beq cr6,0x82a684ac
	if (cr6.eq) goto loc_82A684AC;
loc_82A684BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A684C4"))) PPC_WEAK_FUNC(sub_82A684C4);
PPC_FUNC_IMPL(__imp__sub_82A684C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A684C8"))) PPC_WEAK_FUNC(sub_82A684C8);
PPC_FUNC_IMPL(__imp__sub_82A684C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// addi r10,r10,12036
	ctx.r10.s64 = ctx.r10.s64 + 12036;
loc_82A684D8:
	// lbzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x82a684f0
	if (cr6.lt) goto loc_82A684F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x82a684d8
	if (cr6.lt) goto loc_82A684D8;
loc_82A684F0:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfs f0,-24912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,-7352(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -7352);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f11,f0,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a68538
	if (!cr6.gt) goto loc_82A68538;
	// lfs f0,-27732(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27732);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// blr 
	return;
loc_82A68538:
	// lfs f13,-27732(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27732);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A68544"))) PPC_WEAK_FUNC(sub_82A68544);
PPC_FUNC_IMPL(__imp__sub_82A68544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A68548"))) PPC_WEAK_FUNC(sub_82A68548);
PPC_FUNC_IMPL(__imp__sub_82A68548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A68550;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,11860
	ctx.r31.s64 = ctx.r11.s64 + 11860;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r11,r31,-308
	ctx.r11.s64 = ctx.r31.s64 + -308;
	// addi r10,r31,-288
	ctx.r10.s64 = ctx.r31.s64 + -288;
	// addi r9,r31,-268
	ctx.r9.s64 = ctx.r31.s64 + -268;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r8,r31,-248
	ctx.r8.s64 = ctx.r31.s64 + -248;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r7,r31,-228
	ctx.r7.s64 = ctx.r31.s64 + -228;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r6,r31,-208
	ctx.r6.s64 = ctx.r31.s64 + -208;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r3,r31,-188
	ctx.r3.s64 = ctx.r31.s64 + -188;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// addi r11,r31,-168
	ctx.r11.s64 = ctx.r31.s64 + -168;
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// addi r10,r31,-148
	ctx.r10.s64 = ctx.r31.s64 + -148;
	// addi r9,r31,-128
	ctx.r9.s64 = ctx.r31.s64 + -128;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r8,r31,-108
	ctx.r8.s64 = ctx.r31.s64 + -108;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r7,r31,-88
	ctx.r7.s64 = ctx.r31.s64 + -88;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// addi r6,r31,-68
	ctx.r6.s64 = ctx.r31.s64 + -68;
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// addi r3,r31,-48
	ctx.r3.s64 = ctx.r31.s64 + -48;
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// beq cr6,0x82a68644
	if (cr6.eq) goto loc_82A68644;
	// cmpwi cr6,r4,7
	cr6.compare<int32_t>(ctx.r4.s32, 7, xer);
	// bge cr6,0x82a68644
	if (!cr6.lt) goto loc_82A68644;
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// bge cr6,0x82a68644
	if (!cr6.lt) goto loc_82A68644;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,72(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r4,r7,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82A68618;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r5,r29,24
	ctx.r5.u64 = ctx.r29.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x82a68640
	if (!cr6.eq) goto loc_82A68640;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82A68640:
	// bctrl 
	ctx.lr = 0x82A68644;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82A68644:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6864C"))) PPC_WEAK_FUNC(sub_82A6864C);
PPC_FUNC_IMPL(__imp__sub_82A6864C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A68650"))) PPC_WEAK_FUNC(sub_82A68650);
PPC_FUNC_IMPL(__imp__sub_82A68650) {
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,11884
	ctx.r4.s64 = ctx.r10.s64 + 11884;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82A68674"))) PPC_WEAK_FUNC(sub_82A68674);
PPC_FUNC_IMPL(__imp__sub_82A68674) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A68678"))) PPC_WEAK_FUNC(sub_82A68678);
PPC_FUNC_IMPL(__imp__sub_82A68678) {
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
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// sth r3,118(r1)
	PPC_STORE_U16(ctx.r1.u32 + 118, ctx.r3.u16);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a686b4
	if (cr6.eq) goto loc_82A686B4;
	// addi r3,r1,118
	ctx.r3.s64 = ctx.r1.s64 + 118;
	// bl 0x83196088
	ctx.lr = 0x82A686A4;
	sub_83196088(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A686B4:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r11,r11,-79
	ctx.r11.s64 = ctx.r11.s64 + -79;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82a686dc
	if (cr6.gt) goto loc_82A686DC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82a686d8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A686D8;
	// bdzf 4*cr6+eq,0x82a686d8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A686D8;
	// bne cr6,0x82a686d8
	if (!cr6.eq) goto loc_82A686D8;
loc_82A686D8:
	// li r3,2
	ctx.r3.s64 = 2;
loc_82A686DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A686EC"))) PPC_WEAK_FUNC(sub_82A686EC);
PPC_FUNC_IMPL(__imp__sub_82A686EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A686F0"))) PPC_WEAK_FUNC(sub_82A686F0);
PPC_FUNC_IMPL(__imp__sub_82A686F0) {
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
	// sth r3,118(r1)
	PPC_STORE_U16(ctx.r1.u32 + 118, ctx.r3.u16);
	// addi r3,r1,118
	ctx.r3.s64 = ctx.r1.s64 + 118;
	// bl 0x831960c8
	ctx.lr = 0x82A68708;
	sub_831960C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A68718"))) PPC_WEAK_FUNC(sub_82A68718);
PPC_FUNC_IMPL(__imp__sub_82A68718) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// blt cr6,0x82a68728
	if (cr6.lt) goto loc_82A68728;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A68728:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,12044
	ctx.r9.s64 = ctx.r11.s64 + 12044;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6873C"))) PPC_WEAK_FUNC(sub_82A6873C);
PPC_FUNC_IMPL(__imp__sub_82A6873C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A68740"))) PPC_WEAK_FUNC(sub_82A68740);
PPC_FUNC_IMPL(__imp__sub_82A68740) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a687a4
	if (cr6.eq) goto loc_82A687A4;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a687a4
	if (cr6.eq) goto loc_82A687A4;
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// lwz r11,-25264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -25264);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a687a4
	if (cr6.eq) goto loc_82A687A4;
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r5,23740(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23740);
	// bl 0x82f01918
	ctx.lr = 0x82A68788;
	sub_82F01918(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a687a4
	if (cr6.eq) goto loc_82A687A4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d32830
	ctx.lr = 0x82A687A4;
	sub_82D32830(ctx, base);
loc_82A687A4:
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

__attribute__((alias("__imp__sub_82A687B8"))) PPC_WEAK_FUNC(sub_82A687B8);
PPC_FUNC_IMPL(__imp__sub_82A687B8) {
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
	// stw r5,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r5.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8306a888
	ctx.lr = 0x82A687E4;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6883c
	if (cr6.eq) goto loc_82A6883C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6883c
	if (cr6.eq) goto loc_82A6883C;
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82A68810;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6883c
	if (cr6.eq) goto loc_82A6883C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82a6883c
	if (cr6.lt) goto loc_82A6883C;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82a68840
	if (!cr6.gt) goto loc_82A68840;
loc_82A6883C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A68840:
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

__attribute__((alias("__imp__sub_82A68858"))) PPC_WEAK_FUNC(sub_82A68858);
PPC_FUNC_IMPL(__imp__sub_82A68858) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8306a888
	ctx.lr = 0x82A68880;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a68894
	if (cr6.eq) goto loc_82A68894;
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// b 0x82a688b8
	goto loc_82A688B8;
loc_82A68894:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83572958
	ctx.lr = 0x82A688A4;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
loc_82A688B8:
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

__attribute__((alias("__imp__sub_82A688D0"))) PPC_WEAK_FUNC(sub_82A688D0);
PPC_FUNC_IMPL(__imp__sub_82A688D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82a68930
	if (cr6.lt) goto loc_82A68930;
	// beq cr6,0x82a6890c
	if (cr6.eq) goto loc_82A6890C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82a6894c
	if (!cr6.lt) goto loc_82A6894C;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x82a68904
	if (!cr6.lt) goto loc_82A68904;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,77
	ctx.r3.s64 = ctx.r11.s64 + 77;
	// blr 
	return;
loc_82A68904:
	// addi r3,r3,77
	ctx.r3.s64 = ctx.r3.s64 + 77;
	// blr 
	return;
loc_82A6890C:
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x82a68928
	if (!cr6.lt) goto loc_82A68928;
	// addi r11,r11,22
	ctx.r11.s64 = ctx.r11.s64 + 22;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
loc_82A68928:
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// blr 
	return;
loc_82A68930:
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x82a6894c
	if (!cr6.lt) goto loc_82A6894C;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,11
	ctx.r3.s64 = ctx.r11.s64 + 11;
	// blr 
	return;
loc_82A6894C:
	// addi r3,r3,11
	ctx.r3.s64 = ctx.r3.s64 + 11;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A68954"))) PPC_WEAK_FUNC(sub_82A68954);
PPC_FUNC_IMPL(__imp__sub_82A68954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A68958"))) PPC_WEAK_FUNC(sub_82A68958);
PPC_FUNC_IMPL(__imp__sub_82A68958) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A68960;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82a68858
	ctx.lr = 0x82A68970;
	sub_82A68858(ctx, base);
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// ld r11,23776(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 23776);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// beq cr6,0x82a689d8
	if (cr6.eq) goto loc_82A689D8;
	// lwz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82A68998:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a687b8
	ctx.lr = 0x82A689B0;
	sub_82A687B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a689d8
	if (cr6.eq) goto loc_82A689D8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// beq cr6,0x82a689d8
	if (cr6.eq) goto loc_82A689D8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// blt cr6,0x82a68998
	if (cr6.lt) goto loc_82A68998;
loc_82A689D8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A689E4"))) PPC_WEAK_FUNC(sub_82A689E4);
PPC_FUNC_IMPL(__imp__sub_82A689E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A689E8"))) PPC_WEAK_FUNC(sub_82A689E8);
PPC_FUNC_IMPL(__imp__sub_82A689E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A689F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82A689FC;
	sub_831156E8(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x82A68A04;
	sub_831156E8(ctx, base);
	// lwz r29,52(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x830ff290
	ctx.lr = 0x82A68A0C;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,-15
	ctx.r11.s64 = ctx.r11.s64 + -15;
	// cmplwi cr6,r11,46
	cr6.compare<uint32_t>(ctx.r11.u32, 46, xer);
	// bgt cr6,0x82a68cf8
	if (cr6.gt) goto loc_82A68CF8;
	// lis r12,-32089
	ctx.r12.s64 = -2102984704;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-30156
	ctx.r12.s64 = ctx.r12.s64 + -30156;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82A68AF0;
	case 1:
		goto loc_82A68B40;
	case 2:
		goto loc_82A68CF8;
	case 3:
		goto loc_82A68CF8;
	case 4:
		goto loc_82A68CF8;
	case 5:
		goto loc_82A68CF8;
	case 6:
		goto loc_82A68CF8;
	case 7:
		goto loc_82A68CF8;
	case 8:
		goto loc_82A68CF8;
	case 9:
		goto loc_82A68CF8;
	case 10:
		goto loc_82A68CF8;
	case 11:
		goto loc_82A68CF8;
	case 12:
		goto loc_82A68B90;
	case 13:
		goto loc_82A68B90;
	case 14:
		goto loc_82A68BC4;
	case 15:
		goto loc_82A68BC4;
	case 16:
		goto loc_82A68CF8;
	case 17:
		goto loc_82A68CF8;
	case 18:
		goto loc_82A68CF8;
	case 19:
		goto loc_82A68CF8;
	case 20:
		goto loc_82A68CF8;
	case 21:
		goto loc_82A68C14;
	case 22:
		goto loc_82A68CF8;
	case 23:
		goto loc_82A68CF8;
	case 24:
		goto loc_82A68C7C;
	case 25:
		goto loc_82A68C7C;
	case 26:
		goto loc_82A68CF8;
	case 27:
		goto loc_82A68CF8;
	case 28:
		goto loc_82A68CF8;
	case 29:
		goto loc_82A68CF8;
	case 30:
		goto loc_82A68CF8;
	case 31:
		goto loc_82A68CF8;
	case 32:
		goto loc_82A68CF8;
	case 33:
		goto loc_82A68C64;
	case 34:
		goto loc_82A68C64;
	case 35:
		goto loc_82A68C64;
	case 36:
		goto loc_82A68CF8;
	case 37:
		goto loc_82A68CF8;
	case 38:
		goto loc_82A68CF8;
	case 39:
		goto loc_82A68C64;
	case 40:
		goto loc_82A68C64;
	case 41:
		goto loc_82A68C64;
	case 42:
		goto loc_82A68CF8;
	case 43:
		goto loc_82A68CF8;
	case 44:
		goto loc_82A68CC4;
	case 45:
		goto loc_82A68CF8;
	case 46:
		goto loc_82A68C90;
	default:
		return;
	}
	// lwz r21,-29968(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29968);
	// lwz r21,-29888(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29888);
	// lwz r21,-29448(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29448);
	// lwz r21,-29448(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29448);
	// lwz r21,-29448(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29448);
	// lwz r21,-29448(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29448);
	// lwz r21,-29448(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29448);
	// lwz r21,-29448(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29448);
	// lwz r21,-29448(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29448);
	// lwz r21,-29448(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29448);
	// lwz r21,-29448(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29448);
	// lwz r21,-29448(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29448);
	// lwz r21,-29808(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29808);
	// lwz r21,-29808(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29808);
	// lwz r21,-29756(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29756);
	// lwz r21,-29756(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29756);
	// lwz r21,-29448(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29448);
	// lwz r21,-29448(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29448);
	// lwz r21,-29448(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29448);
	// lwz r21,-29448(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29448);
	// lwz r21,-29448(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29448);
	// lwz r21,-29676(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29676);
	// lwz r21,-29448(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29448);
	// lwz r21,-29448(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29448);
	// lwz r21,-29572(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29572);
	// lwz r21,-29572(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29572);
	// lwz r21,-29448(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29448);
	// lwz r21,-29448(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29448);
	// lwz r21,-29448(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29448);
	// lwz r21,-29448(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29448);
	// lwz r21,-29448(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29448);
	// lwz r21,-29448(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29448);
	// lwz r21,-29448(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29448);
	// lwz r21,-29596(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29596);
	// lwz r21,-29596(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29596);
	// lwz r21,-29596(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29596);
	// lwz r21,-29448(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29448);
	// lwz r21,-29448(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29448);
	// lwz r21,-29448(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29448);
	// lwz r21,-29596(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29596);
	// lwz r21,-29596(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29596);
	// lwz r21,-29596(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29596);
	// lwz r21,-29448(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29448);
	// lwz r21,-29448(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29448);
	// lwz r21,-29500(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29500);
	// lwz r21,-29448(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29448);
	// lwz r21,-29552(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29552);
loc_82A68AF0:
	// lis r11,236
	ctx.r11.s64 = 15466496;
	// ori r10,r11,5128
	ctx.r10.u64 = ctx.r11.u64 | 5128;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82a68b2c
	if (!cr6.eq) goto loc_82A68B2C;
	// bl 0x830ff290
	ctx.lr = 0x82A68B08;
	sub_830FF290(ctx, base);
	// bl 0x830ff948
	ctx.lr = 0x82A68B0C;
	sub_830FF948(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a68b2c
	if (!cr6.eq) goto loc_82A68B2C;
	// bl 0x82d26ed8
	ctx.lr = 0x82A68B1C;
	sub_82D26ED8(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82d26900
	ctx.lr = 0x82A68B24;
	sub_82D26900(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A68B2C:
	// bl 0x82d26ed8
	ctx.lr = 0x82A68B30;
	sub_82D26ED8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d26900
	ctx.lr = 0x82A68B38;
	sub_82D26900(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A68B40:
	// lis r11,236
	ctx.r11.s64 = 15466496;
	// ori r10,r11,5128
	ctx.r10.u64 = ctx.r11.u64 | 5128;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82a68b7c
	if (!cr6.eq) goto loc_82A68B7C;
	// bl 0x830ff290
	ctx.lr = 0x82A68B58;
	sub_830FF290(ctx, base);
	// bl 0x830ff948
	ctx.lr = 0x82A68B5C;
	sub_830FF948(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a68b7c
	if (!cr6.eq) goto loc_82A68B7C;
	// bl 0x82d26ed8
	ctx.lr = 0x82A68B6C;
	sub_82D26ED8(ctx, base);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82d26900
	ctx.lr = 0x82A68B74;
	sub_82D26900(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A68B7C:
	// bl 0x82d26ed8
	ctx.lr = 0x82A68B80;
	sub_82D26ED8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82d26900
	ctx.lr = 0x82A68B88;
	sub_82D26900(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A68B90:
	// lis r11,236
	ctx.r11.s64 = 15466496;
	// ori r10,r11,5128
	ctx.r10.u64 = ctx.r11.u64 | 5128;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82a68c7c
	if (!cr6.eq) goto loc_82A68C7C;
	// bl 0x830ff290
	ctx.lr = 0x82A68BA8;
	sub_830FF290(ctx, base);
	// bl 0x830ff948
	ctx.lr = 0x82A68BAC;
	sub_830FF948(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// bl 0x82d26ed8
	ctx.lr = 0x82A68BB4;
	sub_82D26ED8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d26900
	ctx.lr = 0x82A68BBC;
	sub_82D26900(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A68BC4:
	// lis r11,236
	ctx.r11.s64 = 15466496;
	// ori r10,r11,5128
	ctx.r10.u64 = ctx.r11.u64 | 5128;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82a68c00
	if (!cr6.eq) goto loc_82A68C00;
	// bl 0x830ff290
	ctx.lr = 0x82A68BDC;
	sub_830FF290(ctx, base);
	// bl 0x830ff948
	ctx.lr = 0x82A68BE0;
	sub_830FF948(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a68c00
	if (!cr6.eq) goto loc_82A68C00;
	// bl 0x82d26ed8
	ctx.lr = 0x82A68BF0;
	sub_82D26ED8(ctx, base);
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x82d26900
	ctx.lr = 0x82A68BF8;
	sub_82D26900(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A68C00:
	// bl 0x82d26ed8
	ctx.lr = 0x82A68C04;
	sub_82D26ED8(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82d26900
	ctx.lr = 0x82A68C0C;
	sub_82D26900(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A68C14:
	// lis r11,236
	ctx.r11.s64 = 15466496;
	// ori r10,r11,5128
	ctx.r10.u64 = ctx.r11.u64 | 5128;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82a68c50
	if (!cr6.eq) goto loc_82A68C50;
	// bl 0x830ff290
	ctx.lr = 0x82A68C2C;
	sub_830FF290(ctx, base);
	// bl 0x830ff948
	ctx.lr = 0x82A68C30;
	sub_830FF948(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a68c50
	if (!cr6.eq) goto loc_82A68C50;
	// bl 0x82d26ed8
	ctx.lr = 0x82A68C40;
	sub_82D26ED8(ctx, base);
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x82d26900
	ctx.lr = 0x82A68C48;
	sub_82D26900(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A68C50:
	// bl 0x82d26ed8
	ctx.lr = 0x82A68C54;
	sub_82D26ED8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82d26900
	ctx.lr = 0x82A68C5C;
	sub_82D26900(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A68C64:
	// bl 0x82d96138
	ctx.lr = 0x82A68C68;
	sub_82D96138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a68b2c
	if (!cr6.eq) goto loc_82A68B2C;
	// bl 0x83572958
	ctx.lr = 0x82A68C78;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
loc_82A68C7C:
	// bl 0x82d26ed8
	ctx.lr = 0x82A68C80;
	sub_82D26ED8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d26900
	ctx.lr = 0x82A68C88;
	sub_82D26900(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A68C90:
	// bl 0x82d8a978
	ctx.lr = 0x82A68C94;
	sub_82D8A978(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a68b2c
	if (!cr6.eq) goto loc_82A68B2C;
	// bl 0x82d8a9e0
	ctx.lr = 0x82A68CA4;
	sub_82D8A9E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a68c7c
	if (cr6.eq) goto loc_82A68C7C;
	// bl 0x82d26ed8
	ctx.lr = 0x82A68CB4;
	sub_82D26ED8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d26900
	ctx.lr = 0x82A68CBC;
	sub_82D26900(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A68CC4:
	// bl 0x82d8aa70
	ctx.lr = 0x82A68CC8;
	sub_82D8AA70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a68b2c
	if (!cr6.eq) goto loc_82A68B2C;
	// bl 0x82d8aad8
	ctx.lr = 0x82A68CD8;
	sub_82D8AAD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a68c7c
	if (cr6.eq) goto loc_82A68C7C;
	// bl 0x82d26ed8
	ctx.lr = 0x82A68CE8;
	sub_82D26ED8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d26900
	ctx.lr = 0x82A68CF0;
	sub_82D26900(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A68CF8:
	// bl 0x830ff290
	ctx.lr = 0x82A68CFC;
	sub_830FF290(ctx, base);
	// bl 0x830ff948
	ctx.lr = 0x82A68D00;
	sub_830FF948(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a68c7c
	if (!cr6.eq) goto loc_82A68C7C;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x82a68d80
	if (!cr6.eq) goto loc_82A68D80;
	// bl 0x830ff290
	ctx.lr = 0x82A68D18;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82A68D1C;
	sub_830FFAA8(ctx, base);
	// addis r30,r29,5
	ctx.r30.s64 = ctx.r29.s64 + 327680;
	// addi r30,r30,14904
	ctx.r30.s64 = ctx.r30.s64 + 14904;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83123778
	ctx.lr = 0x82A68D2C;
	sub_83123778(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x82a68d5c
	if (!cr6.eq) goto loc_82A68D5C;
	// bl 0x830ff290
	ctx.lr = 0x82A68D3C;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82A68D40;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,11
	cr6.compare<uint32_t>(ctx.r3.u32, 11, xer);
	// beq cr6,0x82a68c7c
	if (cr6.eq) goto loc_82A68C7C;
	// bl 0x82d26ed8
	ctx.lr = 0x82A68D4C;
	sub_82D26ED8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d26900
	ctx.lr = 0x82A68D54;
	sub_82D26900(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A68D5C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83123778
	ctx.lr = 0x82A68D64;
	sub_83123778(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c338
	ctx.lr = 0x82A68D70;
	sub_8311C338(ctx, base);
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// bl 0x82a673c0
	ctx.lr = 0x82A68D78;
	sub_82A673C0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A68D80:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x82a68d98
	if (!cr6.eq) goto loc_82A68D98;
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// ori r10,r11,40316
	ctx.r10.u64 = ctx.r11.u64 | 40316;
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x82a673c0
	ctx.lr = 0x82A68D98;
	sub_82A673C0(ctx, base);
loc_82A68D98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A68DA0"))) PPC_WEAK_FUNC(sub_82A68DA0);
PPC_FUNC_IMPL(__imp__sub_82A68DA0) {
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
	// bl 0x831156e8
	ctx.lr = 0x82A68DC0;
	sub_831156E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311bf98
	ctx.lr = 0x82A68DCC;
	sub_8311BF98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a676d8
	ctx.lr = 0x82A68DD4;
	sub_82A676D8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A68DEC"))) PPC_WEAK_FUNC(sub_82A68DEC);
PPC_FUNC_IMPL(__imp__sub_82A68DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A68DF0"))) PPC_WEAK_FUNC(sub_82A68DF0);
PPC_FUNC_IMPL(__imp__sub_82A68DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82A68DF8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a68e94
	if (cr6.eq) goto loc_82A68E94;
	// lwz r25,100(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82a68e94
	if (cr6.eq) goto loc_82A68E94;
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r26,r10,24016
	ctx.r26.s64 = ctx.r10.s64 + 24016;
	// addi r27,r11,23964
	ctx.r27.s64 = ctx.r11.s64 + 23964;
loc_82A68E2C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r29,r8
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, xer);
	// bge cr6,0x82a68e54
	if (!cr6.lt) goto loc_82A68E54;
	// lwzx r31,r30,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bge cr6,0x82a68e84
	if (!cr6.lt) goto loc_82A68E84;
loc_82A68E54:
	// addi r3,r25,100
	ctx.r3.s64 = ctx.r25.s64 + 100;
	// lwzx r4,r30,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// bl 0x82d2e228
	ctx.lr = 0x82A68E60;
	sub_82D2E228(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a68e84
	if (cr6.eq) goto loc_82A68E84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwzx r4,r10,r26
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A68E84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82A68E84:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r30,52
	cr6.compare<uint32_t>(ctx.r30.u32, 52, xer);
	// blt cr6,0x82a68e2c
	if (cr6.lt) goto loc_82A68E2C;
loc_82A68E94:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A68E9C"))) PPC_WEAK_FUNC(sub_82A68E9C);
PPC_FUNC_IMPL(__imp__sub_82A68E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A68EA0"))) PPC_WEAK_FUNC(sub_82A68EA0);
PPC_FUNC_IMPL(__imp__sub_82A68EA0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,40
	ctx.r4.s64 = 40;
	// bl 0x83120738
	ctx.lr = 0x82A68EC8;
	sub_83120738(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82a67788
	ctx.lr = 0x82A68EDC;
	sub_82A67788(ctx, base);
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

__attribute__((alias("__imp__sub_82A68EF0"))) PPC_WEAK_FUNC(sub_82A68EF0);
PPC_FUNC_IMPL(__imp__sub_82A68EF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A68EF8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,11504
	ctx.r4.s64 = ctx.r10.s64 + 11504;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r28,48(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x83815d38
	ctx.lr = 0x82A68F20;
	sub_83815D38(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83815b28
	ctx.lr = 0x82A68F2C;
	sub_83815B28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f31,8976(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8976);
	ctx.f31.f64 = double(temp.f32);
loc_82A68F3C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r31,r7
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, xer);
	// bge cr6,0x82a68f5c
	if (!cr6.lt) goto loc_82A68F5C;
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
loc_82A68F5C:
	// clrldi r11,r10,32
	ctx.r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// bl 0x83815b68
	ctx.lr = 0x82A68F7C;
	sub_83815B68(ctx, base);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x82a68f3c
	if (cr6.lt) goto loc_82A68F3C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838153c8
	ctx.lr = 0x82A68F98;
	sub_838153C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83815cb8
	ctx.lr = 0x82A68FA0;
	sub_83815CB8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A68FAC"))) PPC_WEAK_FUNC(sub_82A68FAC);
PPC_FUNC_IMPL(__imp__sub_82A68FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A68FB0"))) PPC_WEAK_FUNC(sub_82A68FB0);
PPC_FUNC_IMPL(__imp__sub_82A68FB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A68FB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82A68FC8;
	sub_831156E8(ctx, base);
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311bf98
	ctx.lr = 0x82A68FD8;
	sub_8311BF98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x82A68FE8;
	sub_8311BF98(ctx, base);
	// lhz r11,188(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 188);
	// lhz r10,188(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 188);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82a69018
	if (!cr6.eq) goto loc_82A69018;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a67de0
	ctx.lr = 0x82A69004;
	sub_82A67DE0(ctx, base);
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
loc_82A69018:
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfze r3,r9
	temp.u8 = ~ctx.r9.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6902C"))) PPC_WEAK_FUNC(sub_82A6902C);
PPC_FUNC_IMPL(__imp__sub_82A6902C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A69030"))) PPC_WEAK_FUNC(sub_82A69030);
PPC_FUNC_IMPL(__imp__sub_82A69030) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A69038;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82A69048;
	sub_831156E8(ctx, base);
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311bf98
	ctx.lr = 0x82A69058;
	sub_8311BF98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x82A69068;
	sub_8311BF98(ctx, base);
	// lhz r11,188(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 188);
	// lhz r10,188(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 188);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82a69098
	if (!cr6.eq) goto loc_82A69098;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a67de0
	ctx.lr = 0x82A69084;
	sub_82A67DE0(ctx, base);
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
loc_82A69098:
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfze r3,r9
	temp.u8 = ~ctx.r9.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A690AC"))) PPC_WEAK_FUNC(sub_82A690AC);
PPC_FUNC_IMPL(__imp__sub_82A690AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A690B0"))) PPC_WEAK_FUNC(sub_82A690B0);
PPC_FUNC_IMPL(__imp__sub_82A690B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A690B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82A690C8;
	sub_831156E8(ctx, base);
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311bf98
	ctx.lr = 0x82A690D8;
	sub_8311BF98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x82A690E8;
	sub_8311BF98(ctx, base);
	// li r29,12
	ctx.r29.s64 = 12;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83120738
	ctx.lr = 0x82A69104;
	sub_83120738(ctx, base);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83120738
	ctx.lr = 0x82A69118;
	sub_83120738(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82a69148
	if (!cr6.eq) goto loc_82A69148;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a67de0
	ctx.lr = 0x82A69134;
	sub_82A67DE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82A69148:
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfze r3,r9
	temp.u8 = ~ctx.r9.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6915C"))) PPC_WEAK_FUNC(sub_82A6915C);
PPC_FUNC_IMPL(__imp__sub_82A6915C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A69160"))) PPC_WEAK_FUNC(sub_82A69160);
PPC_FUNC_IMPL(__imp__sub_82A69160) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A69168;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82A69178;
	sub_831156E8(ctx, base);
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311bf98
	ctx.lr = 0x82A69188;
	sub_8311BF98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x82A69198;
	sub_8311BF98(ctx, base);
	// li r29,12
	ctx.r29.s64 = 12;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83120738
	ctx.lr = 0x82A691B4;
	sub_83120738(ctx, base);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83120738
	ctx.lr = 0x82A691C8;
	sub_83120738(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82a691f8
	if (!cr6.eq) goto loc_82A691F8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a67de0
	ctx.lr = 0x82A691E4;
	sub_82A67DE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82A691F8:
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfze r3,r9
	temp.u8 = ~ctx.r9.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6920C"))) PPC_WEAK_FUNC(sub_82A6920C);
PPC_FUNC_IMPL(__imp__sub_82A6920C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A69210"))) PPC_WEAK_FUNC(sub_82A69210);
PPC_FUNC_IMPL(__imp__sub_82A69210) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A69218;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82A69228;
	sub_831156E8(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311bf98
	ctx.lr = 0x82A69238;
	sub_8311BF98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x82A69248;
	sub_8311BF98(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831236a0
	ctx.lr = 0x82A6925C;
	sub_831236A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83120738
	ctx.lr = 0x82A6926C;
	sub_83120738(ctx, base);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x831236a0
	ctx.lr = 0x82A69280;
	sub_831236A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x83120738
	ctx.lr = 0x82A69290;
	sub_83120738(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82a692c0
	if (!cr6.eq) goto loc_82A692C0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a67de0
	ctx.lr = 0x82A692AC;
	sub_82A67DE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82A692C0:
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfc r11,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// subfze r3,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A692D4"))) PPC_WEAK_FUNC(sub_82A692D4);
PPC_FUNC_IMPL(__imp__sub_82A692D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A692D8"))) PPC_WEAK_FUNC(sub_82A692D8);
PPC_FUNC_IMPL(__imp__sub_82A692D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A692E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82A692F0;
	sub_831156E8(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311bf98
	ctx.lr = 0x82A69300;
	sub_8311BF98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x82A69310;
	sub_8311BF98(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831236a0
	ctx.lr = 0x82A69324;
	sub_831236A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83120738
	ctx.lr = 0x82A69334;
	sub_83120738(ctx, base);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x831236a0
	ctx.lr = 0x82A69348;
	sub_831236A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x83120738
	ctx.lr = 0x82A69358;
	sub_83120738(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82a69388
	if (!cr6.eq) goto loc_82A69388;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a67de0
	ctx.lr = 0x82A69374;
	sub_82A67DE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82A69388:
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfc r11,r31,r11
	xer.ca = ctx.r11.u32 >= ctx.r31.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subfze r3,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6939C"))) PPC_WEAK_FUNC(sub_82A6939C);
PPC_FUNC_IMPL(__imp__sub_82A6939C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A693A0"))) PPC_WEAK_FUNC(sub_82A693A0);
PPC_FUNC_IMPL(__imp__sub_82A693A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A693A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82A693B8;
	sub_831156E8(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ld r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311bf98
	ctx.lr = 0x82A693C8;
	sub_8311BF98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x82A693D8;
	sub_8311BF98(ctx, base);
	// li r31,20
	ctx.r31.s64 = 20;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83120738
	ctx.lr = 0x82A693F4;
	sub_83120738(ctx, base);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r26,r11,24
	ctx.r26.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x83120738
	ctx.lr = 0x82A69410;
	sub_83120738(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r26,r9
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r9.u32, xer);
	// bne cr6,0x82a69440
	if (!cr6.eq) goto loc_82A69440;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a67de0
	ctx.lr = 0x82A6942C;
	sub_82A67DE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82A69440:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83120738
	ctx.lr = 0x82A69454;
	sub_83120738(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x83120738
	ctx.lr = 0x82A69470;
	sub_83120738(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// subfc r11,r8,r31
	xer.ca = ctx.r31.u32 >= ctx.r8.u32;
	ctx.r11.s64 = ctx.r31.s64 - ctx.r8.s64;
	// subfze r3,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6948C"))) PPC_WEAK_FUNC(sub_82A6948C);
PPC_FUNC_IMPL(__imp__sub_82A6948C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A69490"))) PPC_WEAK_FUNC(sub_82A69490);
PPC_FUNC_IMPL(__imp__sub_82A69490) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A69498;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82A694A8;
	sub_831156E8(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ld r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311bf98
	ctx.lr = 0x82A694B8;
	sub_8311BF98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x82A694C8;
	sub_8311BF98(ctx, base);
	// li r31,20
	ctx.r31.s64 = 20;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83120738
	ctx.lr = 0x82A694E4;
	sub_83120738(ctx, base);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r26,r11,24
	ctx.r26.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x83120738
	ctx.lr = 0x82A69500;
	sub_83120738(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r26,r9
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r9.u32, xer);
	// bne cr6,0x82a69530
	if (!cr6.eq) goto loc_82A69530;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a67de0
	ctx.lr = 0x82A6951C;
	sub_82A67DE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82A69530:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83120738
	ctx.lr = 0x82A69544;
	sub_83120738(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x83120738
	ctx.lr = 0x82A69560;
	sub_83120738(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// subfc r11,r31,r8
	xer.ca = ctx.r8.u32 >= ctx.r31.u32;
	ctx.r11.s64 = ctx.r8.s64 - ctx.r31.s64;
	// subfze r3,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6957C"))) PPC_WEAK_FUNC(sub_82A6957C);
PPC_FUNC_IMPL(__imp__sub_82A6957C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A69580"))) PPC_WEAK_FUNC(sub_82A69580);
PPC_FUNC_IMPL(__imp__sub_82A69580) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A69588;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82A69598;
	sub_831156E8(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ld r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// addis r29,r31,205
	ctx.r29.s64 = ctx.r31.s64 + 13434880;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r29,-18420
	ctx.r29.s64 = ctx.r29.s64 + -18420;
	// bl 0x8311bf98
	ctx.lr = 0x82A695B0;
	sub_8311BF98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x82A695C0;
	sub_8311BF98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r30,176(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a67128
	ctx.lr = 0x82A695D4;
	sub_82A67128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a69604
	if (cr6.eq) goto loc_82A69604;
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// rlwinm r10,r11,5,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1F;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// beq cr6,0x82a695f4
	if (cr6.eq) goto loc_82A695F4;
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// bne cr6,0x82a69604
	if (!cr6.eq) goto loc_82A69604;
loc_82A695F4:
	// rlwinm r11,r11,29,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0xF0000;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwimi r11,r30,0,16,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 0) & 0xFFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0000);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82A69604:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r31,176(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a67128
	ctx.lr = 0x82A69614;
	sub_82A67128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a69644
	if (cr6.eq) goto loc_82A69644;
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// rlwinm r10,r11,5,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1F;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// beq cr6,0x82a69634
	if (cr6.eq) goto loc_82A69634;
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// bne cr6,0x82a69644
	if (!cr6.eq) goto loc_82A69644;
loc_82A69634:
	// rlwinm r11,r11,29,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0xF0000;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwimi r11,r31,0,16,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 0) & 0xFFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0000);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82A69644:
	// rlwinm r10,r31,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFFFF;
	// rlwinm r9,r30,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82a6965c
	if (cr6.eq) goto loc_82A6965C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a69684
	goto loc_82A69684;
loc_82A6965C:
	// rlwinm r11,r31,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 24) & 0xFF;
	// rlwinm r8,r30,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// beq cr6,0x82a69674
	if (cr6.eq) goto loc_82A69674;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a69684
	goto loc_82A69684;
loc_82A69674:
	// xor r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 ^ ctx.r30.u64;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
loc_82A69684:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a696b0
	if (cr6.eq) goto loc_82A696B0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a67de0
	ctx.lr = 0x82A6969C;
	sub_82A67DE0(ctx, base);
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
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82A696B0:
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82a696d8
	if (cr6.eq) goto loc_82A696D8;
	// subfc r11,r10,r9
	xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82A696D8:
	// rlwinm r11,r31,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 24) & 0xFF;
	// rlwinm r10,r30,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82a69708
	if (cr6.eq) goto loc_82A69708;
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82A69708:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// subfc r9,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A69730"))) PPC_WEAK_FUNC(sub_82A69730);
PPC_FUNC_IMPL(__imp__sub_82A69730) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A69738;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82A69748;
	sub_831156E8(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ld r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// addis r29,r31,205
	ctx.r29.s64 = ctx.r31.s64 + 13434880;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r29,-18420
	ctx.r29.s64 = ctx.r29.s64 + -18420;
	// bl 0x8311bf98
	ctx.lr = 0x82A69760;
	sub_8311BF98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x82A69770;
	sub_8311BF98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r30,176(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a67128
	ctx.lr = 0x82A69784;
	sub_82A67128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a697b4
	if (cr6.eq) goto loc_82A697B4;
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// rlwinm r10,r11,5,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1F;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// beq cr6,0x82a697a4
	if (cr6.eq) goto loc_82A697A4;
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// bne cr6,0x82a697b4
	if (!cr6.eq) goto loc_82A697B4;
loc_82A697A4:
	// rlwinm r11,r11,29,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0xF0000;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwimi r11,r30,0,16,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 0) & 0xFFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0000);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82A697B4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r31,176(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a67128
	ctx.lr = 0x82A697C4;
	sub_82A67128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a697f4
	if (cr6.eq) goto loc_82A697F4;
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// rlwinm r10,r11,5,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1F;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// beq cr6,0x82a697e4
	if (cr6.eq) goto loc_82A697E4;
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// bne cr6,0x82a697f4
	if (!cr6.eq) goto loc_82A697F4;
loc_82A697E4:
	// rlwinm r11,r11,29,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0xF0000;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwimi r11,r31,0,16,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 0) & 0xFFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0000);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82A697F4:
	// rlwinm r10,r31,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFFFF;
	// rlwinm r9,r30,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82a6980c
	if (cr6.eq) goto loc_82A6980C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a69834
	goto loc_82A69834;
loc_82A6980C:
	// rlwinm r11,r31,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 24) & 0xFF;
	// rlwinm r8,r30,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// beq cr6,0x82a69824
	if (cr6.eq) goto loc_82A69824;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a69834
	goto loc_82A69834;
loc_82A69824:
	// xor r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 ^ ctx.r30.u64;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
loc_82A69834:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a69860
	if (cr6.eq) goto loc_82A69860;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a67de0
	ctx.lr = 0x82A6984C;
	sub_82A67DE0(ctx, base);
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
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82A69860:
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82a69888
	if (cr6.eq) goto loc_82A69888;
	// subfc r11,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82A69888:
	// rlwinm r11,r31,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 24) & 0xFF;
	// rlwinm r10,r30,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82a698b8
	if (cr6.eq) goto loc_82A698B8;
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82A698B8:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A698E0"))) PPC_WEAK_FUNC(sub_82A698E0);
PPC_FUNC_IMPL(__imp__sub_82A698E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r7,1(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lbz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lis r8,-31778
	ctx.r8.s64 = -2082603008;
	// lis r5,-32222
	ctx.r5.s64 = -2111700992;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f0,23872(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23872);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// lfs f13,23876(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 23876);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-26260(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -26260);
	ctx.f12.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fdivs f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 / ctx.f0.f64));
	// fdivs f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 / ctx.f13.f64));
	// stfs f6,0(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fsubs f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// stfs f5,4(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A69938"))) PPC_WEAK_FUNC(sub_82A69938);
PPC_FUNC_IMPL(__imp__sub_82A69938) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a69950
	if (cr6.lt) goto loc_82A69950;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// blr 
	return;
loc_82A69950:
	// add r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 + ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A69958"))) PPC_WEAK_FUNC(sub_82A69958);
PPC_FUNC_IMPL(__imp__sub_82A69958) {
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
	// bl 0x831156e8
	ctx.lr = 0x82A69978;
	sub_831156E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311bf98
	ctx.lr = 0x82A69984;
	sub_8311BF98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,40
	ctx.r4.s64 = 40;
	// bl 0x83120738
	ctx.lr = 0x82A69998;
	sub_83120738(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82a67788
	ctx.lr = 0x82A699AC;
	sub_82A67788(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A699C4"))) PPC_WEAK_FUNC(sub_82A699C4);
PPC_FUNC_IMPL(__imp__sub_82A699C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A699C8"))) PPC_WEAK_FUNC(sub_82A699C8);
PPC_FUNC_IMPL(__imp__sub_82A699C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82a69a20
	if (cr6.eq) goto loc_82A69A20;
	// subf r8,r5,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r5.s64;
loc_82A699D8:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r8,r5
	ctx.r10.u64 = ctx.r8.u64 + ctx.r5.u64;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// stw r7,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r6,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r6.u32);
	// lwz r3,8(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwimi r3,r9,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r7,r3,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r3.u32);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwimi r7,r6,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r7.u32);
	// addi r5,r5,12
	ctx.r5.s64 = ctx.r5.s64 + 12;
	// bne cr6,0x82a699d8
	if (!cr6.eq) goto loc_82A699D8;
loc_82A69A20:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A69A28"))) PPC_WEAK_FUNC(sub_82A69A28);
PPC_FUNC_IMPL(__imp__sub_82A69A28) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a69a84
	if (cr6.eq) goto loc_82A69A84;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a69a60
	if (cr6.lt) goto loc_82A69A60;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x82a69a64
	goto loc_82A69A64;
loc_82A69A60:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82A69A64:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A69A74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a69a84
	if (cr6.eq) goto loc_82A69A84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d29598
	ctx.lr = 0x82A69A84;
	sub_82D29598(ctx, base);
loc_82A69A84:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a69aa4
	if (cr6.lt) goto loc_82A69AA4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82A69AA4;
	sub_825952B8(ctx, base);
loc_82A69AA4:
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
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A69AD0"))) PPC_WEAK_FUNC(sub_82A69AD0);
PPC_FUNC_IMPL(__imp__sub_82A69AD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A69AD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a69b2c
	if (cr6.eq) goto loc_82A69B2C;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a69b00
	if (cr6.lt) goto loc_82A69B00;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x82a69b04
	goto loc_82A69B04;
loc_82A69B00:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82A69B04:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A69B14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a69b2c
	if (cr6.eq) goto loc_82A69B2C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82A69B2C;
	sub_82D291E0(ctx, base);
loc_82A69B2C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r27,2
	ctx.r27.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a69b4c
	if (cr6.lt) goto loc_82A69B4C;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82A69B4C;
	sub_825952B8(ctx, base);
loc_82A69B4C:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a69b7c
	if (cr6.lt) goto loc_82A69B7C;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82A69B7C;
	sub_825952B8(ctx, base);
loc_82A69B7C:
	// stw r28,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r28.u32);
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A69B90"))) PPC_WEAK_FUNC(sub_82A69B90);
PPC_FUNC_IMPL(__imp__sub_82A69B90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A69B98;
	__savegprlr_29(ctx, base);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82A69BA8;
	sub_831156E8(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x82d35198
	ctx.lr = 0x82A69BB0;
	sub_82D35198(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d36760
	ctx.lr = 0x82A69BBC;
	sub_82D36760(ctx, base);
	// bl 0x82d35198
	ctx.lr = 0x82A69BC0;
	sub_82D35198(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d36760
	ctx.lr = 0x82A69BCC;
	sub_82D36760(ctx, base);
	// bl 0x82d35198
	ctx.lr = 0x82A69BD0;
	sub_82D35198(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d36760
	ctx.lr = 0x82A69BDC;
	sub_82D36760(ctx, base);
	// bl 0x82d35198
	ctx.lr = 0x82A69BE0;
	sub_82D35198(ctx, base);
	// li r4,256
	ctx.r4.s64 = 256;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d36760
	ctx.lr = 0x82A69BEC;
	sub_82D36760(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x82a6a0f8
	if (cr6.gt) goto loc_82A6A0F8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82a69ce0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A69CE0;
	// bdzf 4*cr6+eq,0x82a69da8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A69DA8;
	// bdzf 4*cr6+eq,0x82a69e70
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A69E70;
	// bdzf 4*cr6+eq,0x82a69f48
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A69F48;
	// bne cr6,0x82a6a020
	if (!cr6.eq) goto loc_82A6A020;
	// bl 0x82d35198
	ctx.lr = 0x82A69C1C;
	sub_82D35198(ctx, base);
	// li r4,256
	ctx.r4.s64 = 256;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d36760
	ctx.lr = 0x82A69C28;
	sub_82D36760(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8319dc20
	ctx.lr = 0x82A69C30;
	sub_8319DC20(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d35198
	ctx.lr = 0x82A69C38;
	sub_82D35198(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d37838
	ctx.lr = 0x82A69C40;
	sub_82D37838(ctx, base);
	// bl 0x82d35198
	ctx.lr = 0x82A69C44;
	sub_82D35198(ctx, base);
	// lis r5,25
	ctx.r5.s64 = 1638400;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r5,r5,646
	ctx.r5.u64 = ctx.r5.u64 | 646;
	// bl 0x82d36ab8
	ctx.lr = 0x82A69C54;
	sub_82D36AB8(ctx, base);
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// ori r10,r11,57284
	ctx.r10.u64 = ctx.r11.u64 | 57284;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x8319d480
	ctx.lr = 0x82A69C70;
	sub_8319D480(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d35198
	ctx.lr = 0x82A69C78;
	sub_82D35198(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82d36d80
	ctx.lr = 0x82A69C84;
	sub_82D36D80(ctx, base);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x8387e8e0
	ctx.lr = 0x82A69C8C;
	sub_8387E8E0(ctx, base);
	// bl 0x82d35198
	ctx.lr = 0x82A69C90;
	sub_82D35198(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d36760
	ctx.lr = 0x82A69C9C;
	sub_82D36760(ctx, base);
	// bl 0x82d35198
	ctx.lr = 0x82A69CA0;
	sub_82D35198(ctx, base);
	// lis r5,25
	ctx.r5.s64 = 1638400;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,647
	ctx.r5.u64 = ctx.r5.u64 | 647;
	// bl 0x82d36ab8
	ctx.lr = 0x82A69CB0;
	sub_82D36AB8(ctx, base);
	// bl 0x8319b460
	ctx.lr = 0x82A69CB4;
	sub_8319B460(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8319d480
	ctx.lr = 0x82A69CC4;
	sub_8319D480(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d35198
	ctx.lr = 0x82A69CCC;
	sub_82D35198(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82d36d80
	ctx.lr = 0x82A69CD8;
	sub_82D36D80(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// b 0x82a6a0e4
	goto loc_82A6A0E4;
loc_82A69CE0:
	// bl 0x82d35198
	ctx.lr = 0x82A69CE4;
	sub_82D35198(ctx, base);
	// li r4,256
	ctx.r4.s64 = 256;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d36760
	ctx.lr = 0x82A69CF0;
	sub_82D36760(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8319dc20
	ctx.lr = 0x82A69CF8;
	sub_8319DC20(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d35198
	ctx.lr = 0x82A69D00;
	sub_82D35198(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d37838
	ctx.lr = 0x82A69D08;
	sub_82D37838(ctx, base);
	// bl 0x82d35198
	ctx.lr = 0x82A69D0C;
	sub_82D35198(ctx, base);
	// lis r5,25
	ctx.r5.s64 = 1638400;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r5,r5,646
	ctx.r5.u64 = ctx.r5.u64 | 646;
	// bl 0x82d36ab8
	ctx.lr = 0x82A69D1C;
	sub_82D36AB8(ctx, base);
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// ori r10,r11,57284
	ctx.r10.u64 = ctx.r11.u64 | 57284;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// bl 0x8319d480
	ctx.lr = 0x82A69D38;
	sub_8319D480(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d35198
	ctx.lr = 0x82A69D40;
	sub_82D35198(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82d36d80
	ctx.lr = 0x82A69D4C;
	sub_82D36D80(ctx, base);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x8387e8e0
	ctx.lr = 0x82A69D54;
	sub_8387E8E0(ctx, base);
	// bl 0x82d35198
	ctx.lr = 0x82A69D58;
	sub_82D35198(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d36760
	ctx.lr = 0x82A69D64;
	sub_82D36760(ctx, base);
	// bl 0x82d35198
	ctx.lr = 0x82A69D68;
	sub_82D35198(ctx, base);
	// lis r5,25
	ctx.r5.s64 = 1638400;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,647
	ctx.r5.u64 = ctx.r5.u64 | 647;
	// bl 0x82d36ab8
	ctx.lr = 0x82A69D78;
	sub_82D36AB8(ctx, base);
	// bl 0x8319b460
	ctx.lr = 0x82A69D7C;
	sub_8319B460(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8319d480
	ctx.lr = 0x82A69D8C;
	sub_8319D480(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d35198
	ctx.lr = 0x82A69D94;
	sub_82D35198(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82d36d80
	ctx.lr = 0x82A69DA0;
	sub_82D36D80(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// b 0x82a6a0e4
	goto loc_82A6A0E4;
loc_82A69DA8:
	// bl 0x82d35198
	ctx.lr = 0x82A69DAC;
	sub_82D35198(ctx, base);
	// li r4,256
	ctx.r4.s64 = 256;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d36760
	ctx.lr = 0x82A69DB8;
	sub_82D36760(ctx, base);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x8319dc20
	ctx.lr = 0x82A69DC0;
	sub_8319DC20(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d35198
	ctx.lr = 0x82A69DC8;
	sub_82D35198(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d37838
	ctx.lr = 0x82A69DD0;
	sub_82D37838(ctx, base);
	// bl 0x82d35198
	ctx.lr = 0x82A69DD4;
	sub_82D35198(ctx, base);
	// lis r5,25
	ctx.r5.s64 = 1638400;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r5,r5,646
	ctx.r5.u64 = ctx.r5.u64 | 646;
	// bl 0x82d36ab8
	ctx.lr = 0x82A69DE4;
	sub_82D36AB8(ctx, base);
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// ori r10,r11,57284
	ctx.r10.u64 = ctx.r11.u64 | 57284;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// bl 0x8319d480
	ctx.lr = 0x82A69E00;
	sub_8319D480(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d35198
	ctx.lr = 0x82A69E08;
	sub_82D35198(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82d36d80
	ctx.lr = 0x82A69E14;
	sub_82D36D80(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x82A69E1C;
	sub_8387E8E0(ctx, base);
	// bl 0x82d35198
	ctx.lr = 0x82A69E20;
	sub_82D35198(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d36760
	ctx.lr = 0x82A69E2C;
	sub_82D36760(ctx, base);
	// bl 0x82d35198
	ctx.lr = 0x82A69E30;
	sub_82D35198(ctx, base);
	// lis r5,25
	ctx.r5.s64 = 1638400;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,647
	ctx.r5.u64 = ctx.r5.u64 | 647;
	// bl 0x82d36ab8
	ctx.lr = 0x82A69E40;
	sub_82D36AB8(ctx, base);
	// bl 0x8319b460
	ctx.lr = 0x82A69E44;
	sub_8319B460(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8319d480
	ctx.lr = 0x82A69E54;
	sub_8319D480(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d35198
	ctx.lr = 0x82A69E5C;
	sub_82D35198(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82d36d80
	ctx.lr = 0x82A69E68;
	sub_82D36D80(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// b 0x82a6a0e4
	goto loc_82A6A0E4;
loc_82A69E70:
	// bl 0x82d35198
	ctx.lr = 0x82A69E74;
	sub_82D35198(ctx, base);
	// lis r5,503
	ctx.r5.s64 = 32964608;
	// li r4,4
	ctx.r4.s64 = 4;
	// ori r5,r5,90
	ctx.r5.u64 = ctx.r5.u64 | 90;
	// bl 0x82d36ab8
	ctx.lr = 0x82A69E84;
	sub_82D36AB8(ctx, base);
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d35198
	ctx.lr = 0x82A69E8C;
	sub_82D35198(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82d37bb8
	ctx.lr = 0x82A69E98;
	sub_82D37BB8(ctx, base);
	// bl 0x82d35198
	ctx.lr = 0x82A69E9C;
	sub_82D35198(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d36760
	ctx.lr = 0x82A69EA8;
	sub_82D36760(ctx, base);
	// bl 0x82d35198
	ctx.lr = 0x82A69EAC;
	sub_82D35198(ctx, base);
	// lis r5,25
	ctx.r5.s64 = 1638400;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r5,r5,646
	ctx.r5.u64 = ctx.r5.u64 | 646;
	// bl 0x82d36ab8
	ctx.lr = 0x82A69EBC;
	sub_82D36AB8(ctx, base);
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// ori r10,r11,57284
	ctx.r10.u64 = ctx.r11.u64 | 57284;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x8319d480
	ctx.lr = 0x82A69ED8;
	sub_8319D480(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d35198
	ctx.lr = 0x82A69EE0;
	sub_82D35198(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82d36d80
	ctx.lr = 0x82A69EEC;
	sub_82D36D80(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x82A69EF4;
	sub_8387E8E0(ctx, base);
	// bl 0x82d35198
	ctx.lr = 0x82A69EF8;
	sub_82D35198(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d36760
	ctx.lr = 0x82A69F04;
	sub_82D36760(ctx, base);
	// bl 0x82d35198
	ctx.lr = 0x82A69F08;
	sub_82D35198(ctx, base);
	// lis r5,25
	ctx.r5.s64 = 1638400;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,647
	ctx.r5.u64 = ctx.r5.u64 | 647;
	// bl 0x82d36ab8
	ctx.lr = 0x82A69F18;
	sub_82D36AB8(ctx, base);
	// bl 0x8319b460
	ctx.lr = 0x82A69F1C;
	sub_8319B460(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8319d480
	ctx.lr = 0x82A69F2C;
	sub_8319D480(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d35198
	ctx.lr = 0x82A69F34;
	sub_82D35198(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82d36d80
	ctx.lr = 0x82A69F40;
	sub_82D36D80(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// b 0x82a6a0e4
	goto loc_82A6A0E4;
loc_82A69F48:
	// bl 0x82d35198
	ctx.lr = 0x82A69F4C;
	sub_82D35198(ctx, base);
	// lis r5,503
	ctx.r5.s64 = 32964608;
	// li r4,4
	ctx.r4.s64 = 4;
	// ori r5,r5,90
	ctx.r5.u64 = ctx.r5.u64 | 90;
	// bl 0x82d36ab8
	ctx.lr = 0x82A69F5C;
	sub_82D36AB8(ctx, base);
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d35198
	ctx.lr = 0x82A69F64;
	sub_82D35198(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82d37bb8
	ctx.lr = 0x82A69F70;
	sub_82D37BB8(ctx, base);
	// bl 0x82d35198
	ctx.lr = 0x82A69F74;
	sub_82D35198(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d36760
	ctx.lr = 0x82A69F80;
	sub_82D36760(ctx, base);
	// bl 0x82d35198
	ctx.lr = 0x82A69F84;
	sub_82D35198(ctx, base);
	// lis r5,25
	ctx.r5.s64 = 1638400;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r5,r5,646
	ctx.r5.u64 = ctx.r5.u64 | 646;
	// bl 0x82d36ab8
	ctx.lr = 0x82A69F94;
	sub_82D36AB8(ctx, base);
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// ori r10,r11,57284
	ctx.r10.u64 = ctx.r11.u64 | 57284;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// bl 0x8319d480
	ctx.lr = 0x82A69FB0;
	sub_8319D480(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d35198
	ctx.lr = 0x82A69FB8;
	sub_82D35198(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82d36d80
	ctx.lr = 0x82A69FC4;
	sub_82D36D80(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8387e8e0
	ctx.lr = 0x82A69FCC;
	sub_8387E8E0(ctx, base);
	// bl 0x82d35198
	ctx.lr = 0x82A69FD0;
	sub_82D35198(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d36760
	ctx.lr = 0x82A69FDC;
	sub_82D36760(ctx, base);
	// bl 0x82d35198
	ctx.lr = 0x82A69FE0;
	sub_82D35198(ctx, base);
	// lis r5,25
	ctx.r5.s64 = 1638400;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,647
	ctx.r5.u64 = ctx.r5.u64 | 647;
	// bl 0x82d36ab8
	ctx.lr = 0x82A69FF0;
	sub_82D36AB8(ctx, base);
	// bl 0x8319b460
	ctx.lr = 0x82A69FF4;
	sub_8319B460(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x8319d480
	ctx.lr = 0x82A6A004;
	sub_8319D480(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d35198
	ctx.lr = 0x82A6A00C;
	sub_82D35198(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82d36d80
	ctx.lr = 0x82A6A018;
	sub_82D36D80(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// b 0x82a6a0e4
	goto loc_82A6A0E4;
loc_82A6A020:
	// bl 0x82d35198
	ctx.lr = 0x82A6A024;
	sub_82D35198(ctx, base);
	// li r4,256
	ctx.r4.s64 = 256;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d36760
	ctx.lr = 0x82A6A030;
	sub_82D36760(ctx, base);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x8319dc20
	ctx.lr = 0x82A6A038;
	sub_8319DC20(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d35198
	ctx.lr = 0x82A6A040;
	sub_82D35198(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d37838
	ctx.lr = 0x82A6A048;
	sub_82D37838(ctx, base);
	// bl 0x82d35198
	ctx.lr = 0x82A6A04C;
	sub_82D35198(ctx, base);
	// lis r5,25
	ctx.r5.s64 = 1638400;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r5,r5,646
	ctx.r5.u64 = ctx.r5.u64 | 646;
	// bl 0x82d36ab8
	ctx.lr = 0x82A6A05C;
	sub_82D36AB8(ctx, base);
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// ori r10,r11,57284
	ctx.r10.u64 = ctx.r11.u64 | 57284;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// bl 0x8319d480
	ctx.lr = 0x82A6A078;
	sub_8319D480(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d35198
	ctx.lr = 0x82A6A080;
	sub_82D35198(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82d36d80
	ctx.lr = 0x82A6A08C;
	sub_82D36D80(ctx, base);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x8387e8e0
	ctx.lr = 0x82A6A094;
	sub_8387E8E0(ctx, base);
	// bl 0x82d35198
	ctx.lr = 0x82A6A098;
	sub_82D35198(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d36760
	ctx.lr = 0x82A6A0A4;
	sub_82D36760(ctx, base);
	// bl 0x82d35198
	ctx.lr = 0x82A6A0A8;
	sub_82D35198(ctx, base);
	// lis r5,25
	ctx.r5.s64 = 1638400;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,647
	ctx.r5.u64 = ctx.r5.u64 | 647;
	// bl 0x82d36ab8
	ctx.lr = 0x82A6A0B8;
	sub_82D36AB8(ctx, base);
	// bl 0x8319b460
	ctx.lr = 0x82A6A0BC;
	sub_8319B460(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x8319d480
	ctx.lr = 0x82A6A0CC;
	sub_8319D480(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d35198
	ctx.lr = 0x82A6A0D4;
	sub_82D35198(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82d36d80
	ctx.lr = 0x82A6A0E0;
	sub_82D36D80(ctx, base);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
loc_82A6A0E4:
	// bl 0x8387e8e0
	ctx.lr = 0x82A6A0E8;
	sub_8387E8E0(ctx, base);
	// bl 0x82d35198
	ctx.lr = 0x82A6A0EC;
	sub_82D35198(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d36760
	ctx.lr = 0x82A6A0F8;
	sub_82D36760(ctx, base);
loc_82A6A0F8:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6A100"))) PPC_WEAK_FUNC(sub_82A6A100);
PPC_FUNC_IMPL(__imp__sub_82A6A100) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A6A108;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a6a1ac
	if (cr6.eq) goto loc_82A6A1AC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// stb r11,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r11.u8);
	// addi r31,r9,10816
	ctx.r31.s64 = ctx.r9.s64 + 10816;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// addi r5,r31,-4
	ctx.r5.s64 = ctx.r31.s64 + -4;
	// bl 0x82cf4cb0
	ctx.lr = 0x82A6A14C;
	sub_82CF4CB0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82cf4cb0
	ctx.lr = 0x82A6A160;
	sub_82CF4CB0(ctx, base);
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// ori r4,r4,276
	ctx.r4.u64 = ctx.r4.u64 | 276;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d042a8
	ctx.lr = 0x82A6A178;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82A6A18C;
	sub_82D291E0(ctx, base);
	// lwz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82a6a1ac
	if (cr6.lt) goto loc_82A6A1AC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82A6A1AC;
	sub_825952B8(ctx, base);
loc_82A6A1AC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6A1B4"))) PPC_WEAK_FUNC(sub_82A6A1B4);
PPC_FUNC_IMPL(__imp__sub_82A6A1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6A1B8"))) PPC_WEAK_FUNC(sub_82A6A1B8);
PPC_FUNC_IMPL(__imp__sub_82A6A1B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A6A1C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a6a248
	if (cr6.eq) goto loc_82A6A248;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a6a1f0
	if (cr6.lt) goto loc_82A6A1F0;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x82a6a1f4
	goto loc_82A6A1F4;
loc_82A6A1F0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82A6A1F4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A6A204;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a6a248
	if (cr6.eq) goto loc_82A6A248;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82A6A22C;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82A6A240;
	sub_82D291E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82A6A248;
	sub_8387E8E0(ctx, base);
loc_82A6A248:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a6a268
	if (cr6.lt) goto loc_82A6A268;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82A6A268;
	sub_825952B8(ctx, base);
loc_82A6A268:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6A27C"))) PPC_WEAK_FUNC(sub_82A6A27C);
PPC_FUNC_IMPL(__imp__sub_82A6A27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6A280"))) PPC_WEAK_FUNC(sub_82A6A280);
PPC_FUNC_IMPL(__imp__sub_82A6A280) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a6a300
	if (cr6.eq) goto loc_82A6A300;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82d2d510
	ctx.lr = 0x82A6A2AC;
	sub_82D2D510(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a6a300
	if (cr6.eq) goto loc_82A6A300;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82d04220
	ctx.lr = 0x82A6A2D8;
	sub_82D04220(ctx, base);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82a6a2ec
	if (!cr6.lt) goto loc_82A6A2EC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82A6A2EC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d30138
	ctx.lr = 0x82A6A2F8;
	sub_82D30138(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82A6A300;
	sub_8387E8E0(ctx, base);
loc_82A6A300:
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

__attribute__((alias("__imp__sub_82A6A318"))) PPC_WEAK_FUNC(sub_82A6A318);
PPC_FUNC_IMPL(__imp__sub_82A6A318) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A6A320;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82f00728
	ctx.lr = 0x82A6A330;
	sub_82F00728(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r5,r28,4
	ctx.r5.s64 = ctx.r28.s64 + 4;
	// ori r31,r11,22952
	ctx.r31.u64 = ctx.r11.u64 | 22952;
	// add r4,r3,r31
	ctx.r4.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833ecc50
	ctx.lr = 0x82A6A348;
	sub_833ECC50(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,16(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82f00728
	ctx.lr = 0x82A6A354;
	sub_82F00728(ctx, base);
	// add r4,r3,r31
	ctx.r4.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r5,r29,4
	ctx.r5.s64 = ctx.r29.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833ecc50
	ctx.lr = 0x82A6A364;
	sub_833ECC50(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x82a6a394
	if (!cr6.eq) goto loc_82A6A394;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a67de0
	ctx.lr = 0x82A6A380;
	sub_82A67DE0(ctx, base);
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
loc_82A6A394:
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfc r11,r11,r30
	xer.ca = ctx.r30.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// subfze r3,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6A3A8"))) PPC_WEAK_FUNC(sub_82A6A3A8);
PPC_FUNC_IMPL(__imp__sub_82A6A3A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A6A3B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82f00728
	ctx.lr = 0x82A6A3C0;
	sub_82F00728(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r5,r28,4
	ctx.r5.s64 = ctx.r28.s64 + 4;
	// ori r31,r11,22952
	ctx.r31.u64 = ctx.r11.u64 | 22952;
	// add r4,r3,r31
	ctx.r4.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833ecc50
	ctx.lr = 0x82A6A3D8;
	sub_833ECC50(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,16(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82f00728
	ctx.lr = 0x82A6A3E4;
	sub_82F00728(ctx, base);
	// add r4,r3,r31
	ctx.r4.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r5,r29,4
	ctx.r5.s64 = ctx.r29.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833ecc50
	ctx.lr = 0x82A6A3F4;
	sub_833ECC50(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x82a6a424
	if (!cr6.eq) goto loc_82A6A424;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a67de0
	ctx.lr = 0x82A6A410;
	sub_82A67DE0(ctx, base);
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
loc_82A6A424:
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfc r11,r30,r11
	xer.ca = ctx.r11.u32 >= ctx.r30.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// subfze r3,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6A438"))) PPC_WEAK_FUNC(sub_82A6A438);
PPC_FUNC_IMPL(__imp__sub_82A6A438) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82A6A484;
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

__attribute__((alias("__imp__sub_82A6A49C"))) PPC_WEAK_FUNC(sub_82A6A49C);
PPC_FUNC_IMPL(__imp__sub_82A6A49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6A4A0"))) PPC_WEAK_FUNC(sub_82A6A4A0);
PPC_FUNC_IMPL(__imp__sub_82A6A4A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A6A4A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82a6a500
	if (cr6.eq) goto loc_82A6A500;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// li r27,2
	ctx.r27.s64 = 2;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82A6A4C8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a6a4e4
	if (cr6.lt) goto loc_82A6A4E4;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82A6A4E4;
	sub_825952B8(ctx, base);
loc_82A6A4E4:
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// addi r11,r31,-8
	ctx.r11.s64 = ctx.r31.s64 + -8;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x82a6a4c8
	if (!cr6.eq) goto loc_82A6A4C8;
loc_82A6A500:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6A508"))) PPC_WEAK_FUNC(sub_82A6A508);
PPC_FUNC_IMPL(__imp__sub_82A6A508) {
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
	// stwu r1,-1024(r1)
	ea = -1024 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,257
	cr6.compare<uint32_t>(ctx.r4.u32, 257, xer);
	// bgt cr6,0x82a6afcc
	if (cr6.gt) goto loc_82A6AFCC;
	// beq cr6,0x82a6af3c
	if (cr6.eq) goto loc_82A6AF3C;
	// cmplwi cr6,r4,73
	cr6.compare<uint32_t>(ctx.r4.u32, 73, xer);
	// bgt cr6,0x82a6afcc
	if (cr6.gt) goto loc_82A6AFCC;
	// lis r12,-32089
	ctx.r12.s64 = -2102984704;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-23224
	ctx.r12.s64 = ctx.r12.s64 + -23224;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u32) {
	case 0:
		goto loc_82A6A670;
	case 1:
		goto loc_82A6A694;
	case 2:
		goto loc_82A6A6B8;
	case 3:
		goto loc_82A6A6DC;
	case 4:
		goto loc_82A6A700;
	case 5:
		goto loc_82A6A724;
	case 6:
		goto loc_82A6A724;
	case 7:
		goto loc_82A6A748;
	case 8:
		goto loc_82A6A7E8;
	case 9:
		goto loc_82A6A888;
	case 10:
		goto loc_82A6A928;
	case 11:
		goto loc_82A6A978;
	case 12:
		goto loc_82A6AA18;
	case 13:
		goto loc_82A6AA68;
	case 14:
		goto loc_82A6AAB8;
	case 15:
		goto loc_82A6AB08;
	case 16:
		goto loc_82A6AB58;
	case 17:
		goto loc_82A6ABA8;
	case 18:
		goto loc_82A6ABF8;
	case 19:
		goto loc_82A6AFCC;
	case 20:
		goto loc_82A6AFCC;
	case 21:
		goto loc_82A6AFCC;
	case 22:
		goto loc_82A6AC48;
	case 23:
		goto loc_82A6AC98;
	case 24:
		goto loc_82A6AFCC;
	case 25:
		goto loc_82A6AFCC;
	case 26:
		goto loc_82A6ACE8;
	case 27:
		goto loc_82A6AD38;
	case 28:
		goto loc_82A6AD88;
	case 29:
		goto loc_82A6AFCC;
	case 30:
		goto loc_82A6AE28;
	case 31:
		goto loc_82A6AFCC;
	case 32:
		goto loc_82A6AFCC;
	case 33:
		goto loc_82A6AFCC;
	case 34:
		goto loc_82A6AFCC;
	case 35:
		goto loc_82A6AFCC;
	case 36:
		goto loc_82A6AFCC;
	case 37:
		goto loc_82A6AFCC;
	case 38:
		goto loc_82A6AFCC;
	case 39:
		goto loc_82A6AE78;
	case 40:
		goto loc_82A6AEC8;
	case 41:
		goto loc_82A6AFCC;
	case 42:
		goto loc_82A6AFCC;
	case 43:
		goto loc_82A6AFCC;
	case 44:
		goto loc_82A6AFCC;
	case 45:
		goto loc_82A6AFCC;
	case 46:
		goto loc_82A6AFCC;
	case 47:
		goto loc_82A6AFCC;
	case 48:
		goto loc_82A6A798;
	case 49:
		goto loc_82A6A9C8;
	case 50:
		goto loc_82A6A838;
	case 51:
		goto loc_82A6A8D8;
	case 52:
		goto loc_82A6AFCC;
	case 53:
		goto loc_82A6AFCC;
	case 54:
		goto loc_82A6AFCC;
	case 55:
		goto loc_82A6AFCC;
	case 56:
		goto loc_82A6AFCC;
	case 57:
		goto loc_82A6AFCC;
	case 58:
		goto loc_82A6AFCC;
	case 59:
		goto loc_82A6AFCC;
	case 60:
		goto loc_82A6AFCC;
	case 61:
		goto loc_82A6AFCC;
	case 62:
		goto loc_82A6AFCC;
	case 63:
		goto loc_82A6AFCC;
	case 64:
		goto loc_82A6AFCC;
	case 65:
		goto loc_82A6ADD8;
	case 66:
		goto loc_82A6AFCC;
	case 67:
		goto loc_82A6AF18;
	case 68:
		goto loc_82A6AF60;
	case 69:
		goto loc_82A6AF3C;
	case 70:
		goto loc_82A6AFCC;
	case 71:
		goto loc_82A6AF84;
	case 72:
		goto loc_82A6AFCC;
	case 73:
		goto loc_82A6AFA8;
	default:
		return;
	}
	// lwz r21,-22928(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -22928);
	// lwz r21,-22892(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -22892);
	// lwz r21,-22856(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -22856);
	// lwz r21,-22820(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -22820);
	// lwz r21,-22784(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -22784);
	// lwz r21,-22748(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -22748);
	// lwz r21,-22748(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -22748);
	// lwz r21,-22712(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -22712);
	// lwz r21,-22552(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -22552);
	// lwz r21,-22392(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -22392);
	// lwz r21,-22232(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -22232);
	// lwz r21,-22152(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -22152);
	// lwz r21,-21992(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21992);
	// lwz r21,-21912(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21912);
	// lwz r21,-21832(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21832);
	// lwz r21,-21752(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21752);
	// lwz r21,-21672(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21672);
	// lwz r21,-21592(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21592);
	// lwz r21,-21512(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21512);
	// lwz r21,-20532(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20532);
	// lwz r21,-20532(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20532);
	// lwz r21,-20532(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20532);
	// lwz r21,-21432(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21432);
	// lwz r21,-21352(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21352);
	// lwz r21,-20532(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20532);
	// lwz r21,-20532(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20532);
	// lwz r21,-21272(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21272);
	// lwz r21,-21192(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21192);
	// lwz r21,-21112(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21112);
	// lwz r21,-20532(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20532);
	// lwz r21,-20952(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20952);
	// lwz r21,-20532(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20532);
	// lwz r21,-20532(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20532);
	// lwz r21,-20532(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20532);
	// lwz r21,-20532(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20532);
	// lwz r21,-20532(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20532);
	// lwz r21,-20532(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20532);
	// lwz r21,-20532(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20532);
	// lwz r21,-20532(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20532);
	// lwz r21,-20872(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20872);
	// lwz r21,-20792(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20792);
	// lwz r21,-20532(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20532);
	// lwz r21,-20532(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20532);
	// lwz r21,-20532(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20532);
	// lwz r21,-20532(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20532);
	// lwz r21,-20532(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20532);
	// lwz r21,-20532(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20532);
	// lwz r21,-20532(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20532);
	// lwz r21,-22632(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -22632);
	// lwz r21,-22072(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -22072);
	// lwz r21,-22472(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -22472);
	// lwz r21,-22312(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -22312);
	// lwz r21,-20532(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20532);
	// lwz r21,-20532(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20532);
	// lwz r21,-20532(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20532);
	// lwz r21,-20532(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20532);
	// lwz r21,-20532(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20532);
	// lwz r21,-20532(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20532);
	// lwz r21,-20532(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20532);
	// lwz r21,-20532(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20532);
	// lwz r21,-20532(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20532);
	// lwz r21,-20532(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20532);
	// lwz r21,-20532(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20532);
	// lwz r21,-20532(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20532);
	// lwz r21,-20532(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20532);
	// lwz r21,-21032(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21032);
	// lwz r21,-20532(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20532);
	// lwz r21,-20712(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20712);
	// lwz r21,-20640(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20640);
	// lwz r21,-20676(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20676);
	// lwz r21,-20532(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20532);
	// lwz r21,-20604(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20604);
	// lwz r21,-20532(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20532);
	// lwz r21,-20568(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20568);
loc_82A6A670:
	// lis r4,102
	ctx.r4.s64 = 6684672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,143
	ctx.r4.u64 = ctx.r4.u64 | 143;
	// bl 0x82d04220
	ctx.lr = 0x82A6A680;
	sub_82D04220(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82A6A694:
	// lis r4,102
	ctx.r4.s64 = 6684672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,127
	ctx.r4.u64 = ctx.r4.u64 | 127;
	// bl 0x82d04220
	ctx.lr = 0x82A6A6A4;
	sub_82D04220(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82A6A6B8:
	// lis r4,102
	ctx.r4.s64 = 6684672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,269
	ctx.r4.u64 = ctx.r4.u64 | 269;
	// bl 0x82d04220
	ctx.lr = 0x82A6A6C8;
	sub_82D04220(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82A6A6DC:
	// lis r4,102
	ctx.r4.s64 = 6684672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,153
	ctx.r4.u64 = ctx.r4.u64 | 153;
	// bl 0x82d04220
	ctx.lr = 0x82A6A6EC;
	sub_82D04220(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82A6A700:
	// lis r4,102
	ctx.r4.s64 = 6684672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,129
	ctx.r4.u64 = ctx.r4.u64 | 129;
	// bl 0x82d04220
	ctx.lr = 0x82A6A710;
	sub_82D04220(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82A6A724:
	// lis r4,102
	ctx.r4.s64 = 6684672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,247
	ctx.r4.u64 = ctx.r4.u64 | 247;
	// bl 0x82d04220
	ctx.lr = 0x82A6A734;
	sub_82D04220(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82A6A748:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,9
	ctx.r10.s64 = 9;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8315e518
	ctx.lr = 0x82A6A768;
	sub_8315E518(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82A6A77C;
	sub_8259CB28(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8387e8e0
	ctx.lr = 0x82A6A784;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82A6A798:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,66
	ctx.r10.s64 = 66;
	// stb r11,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r11.u8);
	// addi r5,r1,93
	ctx.r5.s64 = ctx.r1.s64 + 93;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x8315e518
	ctx.lr = 0x82A6A7B8;
	sub_8315E518(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82A6A7CC;
	sub_8259CB28(ctx, base);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x8387e8e0
	ctx.lr = 0x82A6A7D4;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82A6A7E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// addi r5,r1,83
	ctx.r5.s64 = ctx.r1.s64 + 83;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8315e518
	ctx.lr = 0x82A6A808;
	sub_8315E518(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82A6A81C;
	sub_8259CB28(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8387e8e0
	ctx.lr = 0x82A6A824;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82A6A838:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,68
	ctx.r10.s64 = 68;
	// stb r11,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r11.u8);
	// addi r5,r1,99
	ctx.r5.s64 = ctx.r1.s64 + 99;
	// stw r10,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// bl 0x8315e518
	ctx.lr = 0x82A6A858;
	sub_8315E518(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82A6A86C;
	sub_8259CB28(ctx, base);
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// bl 0x8387e8e0
	ctx.lr = 0x82A6A874;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82A6A888:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r11,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r11.u8);
	// addi r5,r1,85
	ctx.r5.s64 = ctx.r1.s64 + 85;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x8315e518
	ctx.lr = 0x82A6A8A8;
	sub_8315E518(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82A6A8BC;
	sub_8259CB28(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x8387e8e0
	ctx.lr = 0x82A6A8C4;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82A6A8D8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,69
	ctx.r10.s64 = 69;
	// stb r11,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
	// addi r5,r1,95
	ctx.r5.s64 = ctx.r1.s64 + 95;
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x8315e518
	ctx.lr = 0x82A6A8F8;
	sub_8315E518(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82A6A90C;
	sub_8259CB28(ctx, base);
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x8387e8e0
	ctx.lr = 0x82A6A914;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82A6A928:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,13
	ctx.r10.s64 = 13;
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// addi r5,r1,87
	ctx.r5.s64 = ctx.r1.s64 + 87;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x8315e518
	ctx.lr = 0x82A6A948;
	sub_8315E518(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82A6A95C;
	sub_8259CB28(ctx, base);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x8387e8e0
	ctx.lr = 0x82A6A964;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82A6A978:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r11,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r11.u8);
	// addi r5,r1,103
	ctx.r5.s64 = ctx.r1.s64 + 103;
	// stw r10,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r10.u32);
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// bl 0x8315e518
	ctx.lr = 0x82A6A998;
	sub_8315E518(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82A6A9AC;
	sub_8259CB28(ctx, base);
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// bl 0x8387e8e0
	ctx.lr = 0x82A6A9B4;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82A6A9C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,67
	ctx.r10.s64 = 67;
	// stb r11,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r11.u8);
	// addi r5,r1,89
	ctx.r5.s64 = ctx.r1.s64 + 89;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x8315e518
	ctx.lr = 0x82A6A9E8;
	sub_8315E518(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82A6A9FC;
	sub_8259CB28(ctx, base);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x8387e8e0
	ctx.lr = 0x82A6AA04;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82A6AA18:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,14
	ctx.r10.s64 = 14;
	// stb r11,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r11.u8);
	// addi r5,r1,97
	ctx.r5.s64 = ctx.r1.s64 + 97;
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// bl 0x8315e518
	ctx.lr = 0x82A6AA38;
	sub_8315E518(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82A6AA4C;
	sub_8259CB28(ctx, base);
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// bl 0x8387e8e0
	ctx.lr = 0x82A6AA54;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82A6AA68:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,21
	ctx.r10.s64 = 21;
	// stb r11,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r11.u8);
	// addi r5,r1,91
	ctx.r5.s64 = ctx.r1.s64 + 91;
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x8315e518
	ctx.lr = 0x82A6AA88;
	sub_8315E518(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82A6AA9C;
	sub_8259CB28(ctx, base);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x8387e8e0
	ctx.lr = 0x82A6AAA4;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82A6AAB8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,22
	ctx.r10.s64 = 22;
	// stb r11,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r11.u8);
	// addi r5,r1,101
	ctx.r5.s64 = ctx.r1.s64 + 101;
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x8315e518
	ctx.lr = 0x82A6AAD8;
	sub_8315E518(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82A6AAEC;
	sub_8259CB28(ctx, base);
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x8387e8e0
	ctx.lr = 0x82A6AAF4;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82A6AB08:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,23
	ctx.r10.s64 = 23;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8315e518
	ctx.lr = 0x82A6AB28;
	sub_8315E518(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82A6AB3C;
	sub_8259CB28(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8387e8e0
	ctx.lr = 0x82A6AB44;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82A6AB58:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,39
	ctx.r10.s64 = 39;
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8315e518
	ctx.lr = 0x82A6AB78;
	sub_8315E518(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82A6AB8C;
	sub_8259CB28(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8387e8e0
	ctx.lr = 0x82A6AB94;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82A6ABA8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,40
	ctx.r10.s64 = 40;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8315e518
	ctx.lr = 0x82A6ABC8;
	sub_8315E518(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82A6ABDC;
	sub_8259CB28(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8387e8e0
	ctx.lr = 0x82A6ABE4;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82A6ABF8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,41
	ctx.r10.s64 = 41;
	// stb r11,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r11.u8);
	// addi r5,r1,86
	ctx.r5.s64 = ctx.r1.s64 + 86;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x8315e518
	ctx.lr = 0x82A6AC18;
	sub_8315E518(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82A6AC2C;
	sub_8259CB28(ctx, base);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x8387e8e0
	ctx.lr = 0x82A6AC34;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82A6AC48:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,38
	ctx.r10.s64 = 38;
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x8315e518
	ctx.lr = 0x82A6AC68;
	sub_8315E518(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82A6AC7C;
	sub_8259CB28(ctx, base);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x8387e8e0
	ctx.lr = 0x82A6AC84;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82A6AC98:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// addi r5,r1,90
	ctx.r5.s64 = ctx.r1.s64 + 90;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x8315e518
	ctx.lr = 0x82A6ACB8;
	sub_8315E518(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82A6ACCC;
	sub_8259CB28(ctx, base);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x8387e8e0
	ctx.lr = 0x82A6ACD4;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82A6ACE8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r11,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r11.u8);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x8315e518
	ctx.lr = 0x82A6AD08;
	sub_8315E518(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82A6AD1C;
	sub_8259CB28(ctx, base);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x8387e8e0
	ctx.lr = 0x82A6AD24;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82A6AD38:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,48
	ctx.r10.s64 = 48;
	// stb r11,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r11.u8);
	// addi r5,r1,94
	ctx.r5.s64 = ctx.r1.s64 + 94;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x8315e518
	ctx.lr = 0x82A6AD58;
	sub_8315E518(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82A6AD6C;
	sub_8259CB28(ctx, base);
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x8387e8e0
	ctx.lr = 0x82A6AD74;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82A6AD88:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r10,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x8315e518
	ctx.lr = 0x82A6ADA8;
	sub_8315E518(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82A6ADBC;
	sub_8259CB28(ctx, base);
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x8387e8e0
	ctx.lr = 0x82A6ADC4;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82A6ADD8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,91
	ctx.r10.s64 = 91;
	// stb r11,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r11.u8);
	// addi r5,r1,98
	ctx.r5.s64 = ctx.r1.s64 + 98;
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// addi r4,r1,180
	ctx.r4.s64 = ctx.r1.s64 + 180;
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// bl 0x8315e518
	ctx.lr = 0x82A6ADF8;
	sub_8315E518(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82A6AE0C;
	sub_8259CB28(ctx, base);
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// bl 0x8387e8e0
	ctx.lr = 0x82A6AE14;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82A6AE28:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r11,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r11.u8);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// stw r10,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// bl 0x8315e518
	ctx.lr = 0x82A6AE48;
	sub_8315E518(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82A6AE5C;
	sub_8259CB28(ctx, base);
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// bl 0x8387e8e0
	ctx.lr = 0x82A6AE64;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82A6AE78:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,50
	ctx.r10.s64 = 50;
	// stb r11,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r11.u8);
	// addi r5,r1,102
	ctx.r5.s64 = ctx.r1.s64 + 102;
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// addi r3,r1,912
	ctx.r3.s64 = ctx.r1.s64 + 912;
	// bl 0x8315e518
	ctx.lr = 0x82A6AE98;
	sub_8315E518(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82A6AEAC;
	sub_8259CB28(ctx, base);
	// addi r3,r1,912
	ctx.r3.s64 = ctx.r1.s64 + 912;
	// bl 0x8387e8e0
	ctx.lr = 0x82A6AEB4;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82A6AEC8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,51
	ctx.r10.s64 = 51;
	// stb r11,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r11.u8);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// stw r10,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// addi r4,r1,204
	ctx.r4.s64 = ctx.r1.s64 + 204;
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// bl 0x8315e518
	ctx.lr = 0x82A6AEE8;
	sub_8315E518(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82A6AEFC;
	sub_8259CB28(ctx, base);
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// bl 0x8387e8e0
	ctx.lr = 0x82A6AF04;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82A6AF18:
	// lis r4,102
	ctx.r4.s64 = 6684672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,210
	ctx.r4.u64 = ctx.r4.u64 | 210;
	// bl 0x82d04220
	ctx.lr = 0x82A6AF28;
	sub_82D04220(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82A6AF3C:
	// lis r4,102
	ctx.r4.s64 = 6684672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,147
	ctx.r4.u64 = ctx.r4.u64 | 147;
	// bl 0x82d04220
	ctx.lr = 0x82A6AF4C;
	sub_82D04220(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82A6AF60:
	// lis r4,102
	ctx.r4.s64 = 6684672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,270
	ctx.r4.u64 = ctx.r4.u64 | 270;
	// bl 0x82d04220
	ctx.lr = 0x82A6AF70;
	sub_82D04220(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82A6AF84:
	// lis r4,102
	ctx.r4.s64 = 6684672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,211
	ctx.r4.u64 = ctx.r4.u64 | 211;
	// bl 0x82d04220
	ctx.lr = 0x82A6AF94;
	sub_82D04220(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82A6AFA8:
	// lis r4,102
	ctx.r4.s64 = 6684672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,271
	ctx.r4.u64 = ctx.r4.u64 | 271;
	// bl 0x82d04220
	ctx.lr = 0x82A6AFB8;
	sub_82D04220(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82A6AFCC:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,10572
	ctx.r4.s64 = ctx.r11.s64 + 10572;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82A6AFE0;
	sub_8259CC28(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6AFF4"))) PPC_WEAK_FUNC(sub_82A6AFF4);
PPC_FUNC_IMPL(__imp__sub_82A6AFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6AFF8"))) PPC_WEAK_FUNC(sub_82A6AFF8);
PPC_FUNC_IMPL(__imp__sub_82A6AFF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82A6B000;
	__savegprlr_25(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// addi r29,r11,10580
	ctx.r29.s64 = ctx.r11.s64 + 10580;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r29,-382
	ctx.r4.s64 = ctx.r29.s64 + -382;
	// bl 0x8259cc28
	ctx.lr = 0x82A6B038;
	sub_8259CC28(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82A6B03C;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// addis r9,r11,221
	ctx.r9.s64 = ctx.r11.s64 + 14483456;
	// addi r9,r9,-26512
	ctx.r9.s64 = ctx.r9.s64 + -26512;
	// lwz r11,23772(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23772);
	// ld r8,1292(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1292);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// bne cr6,0x82a6b0b0
	if (!cr6.eq) goto loc_82A6B0B0;
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82A6B084;
	sub_8259CB28(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a6b1a8
	if (cr6.lt) goto loc_82A6B1A8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82A6B0A4;
	sub_825952B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82A6B0B0:
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8315d6c8
	ctx.lr = 0x82A6B0C4;
	sub_8315D6C8(ctx, base);
	// li r26,-1
	ctx.r26.s64 = -1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cb28
	ctx.lr = 0x82A6B0DC;
	sub_8259CB28(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r25,2
	ctx.r25.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a6b0fc
	if (cr6.lt) goto loc_82A6B0FC;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82A6B0FC;
	sub_825952B8(ctx, base);
loc_82A6B0FC:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// beq cr6,0x82a6b16c
	if (cr6.eq) goto loc_82A6B16C;
	// addi r4,r29,-381
	ctx.r4.s64 = ctx.r29.s64 + -381;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x82A6B120;
	sub_837B0C10(ctx, base);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8314d680
	ctx.lr = 0x82A6B12C;
	sub_8314D680(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82a6b164
	if (cr6.eq) goto loc_82A6B164;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82d04220
	ctx.lr = 0x82A6B140;
	sub_82D04220(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a1eb8
	ctx.lr = 0x82A6B150;
	sub_825A1EB8(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a1da8
	ctx.lr = 0x82A6B164;
	sub_825A1DA8(ctx, base);
loc_82A6B164:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x82A6B16C;
	sub_8387E8E0(ctx, base);
loc_82A6B16C:
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82A6B18C;
	sub_8259CB28(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a6b1a8
	if (cr6.lt) goto loc_82A6B1A8;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82A6B1A8;
	sub_825952B8(ctx, base);
loc_82A6B1A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6B1B4"))) PPC_WEAK_FUNC(sub_82A6B1B4);
PPC_FUNC_IMPL(__imp__sub_82A6B1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6B1B8"))) PPC_WEAK_FUNC(sub_82A6B1B8);
PPC_FUNC_IMPL(__imp__sub_82A6B1B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A6B1C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r30,r11,11532
	ctx.r30.s64 = ctx.r11.s64 + 11532;
	// beq cr6,0x82a6b1fc
	if (cr6.eq) goto loc_82A6B1FC;
	// stfd f1,40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// addi r5,r30,-16
	ctx.r5.s64 = ctx.r30.s64 + -16;
	// bl 0x837b6140
	ctx.lr = 0x82A6B1F8;
	sub_837B6140(ctx, base);
	// b 0x82a6b20c
	goto loc_82A6B20C;
loc_82A6B1FC:
	// stfd f1,40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// addi r5,r30,-8
	ctx.r5.s64 = ctx.r30.s64 + -8;
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x837b6140
	ctx.lr = 0x82A6B20C;
	sub_837B6140(ctx, base);
loc_82A6B20C:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// ori r4,r4,203
	ctx.r4.u64 = ctx.r4.u64 | 203;
	// bl 0x82d04220
	ctx.lr = 0x82A6B230;
	sub_82D04220(ctx, base);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_82A6B244:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a6b244
	if (!cr6.eq) goto loc_82A6B244;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82A6B26C;
	sub_8259CC28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82574d38
	ctx.lr = 0x82A6B280;
	sub_82574D38(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82a6b2b4
	if (cr6.eq) goto loc_82A6B2B4;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6b2b4
	if (cr6.eq) goto loc_82A6B2B4;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bge cr6,0x82a6b2a8
	if (!cr6.lt) goto loc_82A6B2A8;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
loc_82A6B2A8:
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// stbx r11,r3,r10
	PPC_STORE_U8(ctx.r3.u32 + ctx.r10.u32, ctx.r11.u8);
loc_82A6B2B4:
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82A6B2BC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a6b2bc
	if (!cr6.eq) goto loc_82A6B2BC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82A6B2E4;
	sub_8259CC28(ctx, base);
	// stw r29,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r29.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// li r30,-1
	ctx.r30.s64 = -1;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8259cb28
	ctx.lr = 0x82A6B308;
	sub_8259CB28(ctx, base);
	// stw r29,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r29.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8259cb28
	ctx.lr = 0x82A6B328;
	sub_8259CB28(ctx, base);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82A6B338;
	sub_82A69AD0(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82a6b358
	if (cr6.lt) goto loc_82A6B358;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82A6B358;
	sub_825952B8(ctx, base);
loc_82A6B358:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// blt cr6,0x82a6b380
	if (cr6.lt) goto loc_82A6B380;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82A6B380;
	sub_825952B8(ctx, base);
loc_82A6B380:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x82a6b3a8
	if (cr6.lt) goto loc_82A6B3A8;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82A6B3A8;
	sub_825952B8(ctx, base);
loc_82A6B3A8:
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6B3BC"))) PPC_WEAK_FUNC(sub_82A6B3BC);
PPC_FUNC_IMPL(__imp__sub_82A6B3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6B3C0"))) PPC_WEAK_FUNC(sub_82A6B3C0);
PPC_FUNC_IMPL(__imp__sub_82A6B3C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A6B3C8;
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
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// addi r31,r9,11548
	ctx.r31.s64 = ctx.r9.s64 + 11548;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// bl 0x825a1eb8
	ctx.lr = 0x82A6B400;
	sub_825A1EB8(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1eb8
	ctx.lr = 0x82A6B410;
	sub_825A1EB8(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1da8
	ctx.lr = 0x82A6B428;
	sub_825A1DA8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1da8
	ctx.lr = 0x82A6B43C;
	sub_825A1DA8(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1eb8
	ctx.lr = 0x82A6B44C;
	sub_825A1EB8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1eb8
	ctx.lr = 0x82A6B45C;
	sub_825A1EB8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82A6B470;
	sub_8259CB28(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82a6b490
	if (cr6.lt) goto loc_82A6B490;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82A6B490;
	sub_825952B8(ctx, base);
loc_82A6B490:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6B498"))) PPC_WEAK_FUNC(sub_82A6B498);
PPC_FUNC_IMPL(__imp__sub_82A6B498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82A6B4A0;
	__savegprlr_20(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830ff290
	ctx.lr = 0x82A6B4AC;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82A6B4B0;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// bne cr6,0x82a6b55c
	if (!cr6.eq) goto loc_82A6B55C;
	// bl 0x82d86078
	ctx.lr = 0x82A6B4BC;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a6b8c4
	if (cr6.eq) goto loc_82A6B8C4;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82A6B4D0;
	sub_82DAB6D0(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x825832d8
	ctx.lr = 0x82A6B4E0;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x82A6B4E4;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x82A6B4E8;
	sub_825832F0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A6B4F0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d987f8
	ctx.lr = 0x82A6B4FC;
	sub_82D987F8(ctx, base);
	// bl 0x82d983f8
	ctx.lr = 0x82A6B500;
	sub_82D983F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a6b548
	if (cr6.eq) goto loc_82A6B548;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6b548
	if (cr6.eq) goto loc_82A6B548;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d975b8
	ctx.lr = 0x82A6B524;
	sub_82D975B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r9,92(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stb r9,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r9.u8);
	// bl 0x82d97588
	ctx.lr = 0x82A6B548;
	sub_82D97588(ctx, base);
loc_82A6B548:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,18
	cr6.compare<uint32_t>(ctx.r31.u32, 18, xer);
	// blt cr6,0x82a6b4f0
	if (cr6.lt) goto loc_82A6B4F0;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82A6B55C:
	// li r9,20
	ctx.r9.s64 = 20;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r1,152
	ctx.r11.s64 = ctx.r1.s64 + 152;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82A6B570:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82a6b570
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A6B570;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// bl 0x83763ef8
	ctx.lr = 0x82A6B580;
	sub_83763EF8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A6B598;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x831156e8
	ctx.lr = 0x82A6B59C;
	sub_831156E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311bdf0
	ctx.lr = 0x82A6B5A8;
	sub_8311BDF0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// mr r23,r28
	ctx.r23.u64 = ctx.r28.u64;
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// bl 0x82a68958
	ctx.lr = 0x82A6B5DC;
	sub_82A68958(ctx, base);
	// lis r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// ori r29,r9,65535
	ctx.r29.u64 = ctx.r9.u64 | 65535;
	// beq cr6,0x82a6b654
	if (cr6.eq) goto loc_82A6B654;
loc_82A6B5EC:
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82a687b8
	ctx.lr = 0x82A6B608;
	sub_82A687B8(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82a687b8
	ctx.lr = 0x82A6B61C;
	sub_82A687B8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// sth r29,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r29.u16);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// bl 0x82d54828
	ctx.lr = 0x82A6B63C;
	sub_82D54828(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82a68958
	ctx.lr = 0x82A6B648;
	sub_82A68958(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x82a6b5ec
	if (cr6.lt) goto loc_82A6B5EC;
	// lwz r23,144(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
loc_82A6B654:
	// lhz r11,808(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 808);
	// lis r22,-31778
	ctx.r22.s64 = -2082603008;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// clrlwi r4,r11,25
	ctx.r4.u64 = ctx.r11.u32 & 0x7F;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a6b6d4
	if (cr6.eq) goto loc_82A6B6D4;
	// addi r30,r27,248
	ctx.r30.s64 = ctx.r27.s64 + 248;
loc_82A6B670:
	// ld r10,23776(r22)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r22.u32 + 23776);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// bge cr6,0x82a6b694
	if (!cr6.lt) goto loc_82A6B694;
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// add r9,r31,r27
	ctx.r9.u64 = ctx.r31.u64 + ctx.r27.u64;
	// lbz r11,512(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 512);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
loc_82A6B694:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// sth r29,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r29.u16);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// bl 0x82d54828
	ctx.lr = 0x82A6B6B4;
	sub_82D54828(ctx, base);
	// lhz r8,808(r27)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r27.u32 + 808);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// clrlwi r4,r8,25
	ctx.r4.u64 = ctx.r8.u32 & 0x7F;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// blt cr6,0x82a6b670
	if (cr6.lt) goto loc_82A6B670;
	// lwz r24,132(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r25,128(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_82A6B6D4:
	// li r21,2
	ctx.r21.s64 = 2;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a6b894
	if (cr6.eq) goto loc_82A6B894;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r26,12
	ctx.r26.s64 = 12;
	// addi r30,r27,248
	ctx.r30.s64 = ctx.r27.s64 + 248;
	// subf r10,r23,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r23.s64;
	// divw r8,r10,r26
	ctx.r8.s32 = PPCDivide(ctx.r10.s32, ctx.r26.s32);
loc_82A6B6FC:
	// ld r29,23776(r22)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r22.u32 + 23776);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// bge cr6,0x82a6b714
	if (!cr6.lt) goto loc_82A6B714;
	// ld r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
loc_82A6B714:
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82a6b75c
	if (cr6.eq) goto loc_82A6B75C;
	// addi r10,r23,8
	ctx.r10.s64 = ctx.r23.s64 + 8;
	// cmplw cr6,r8,r28
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, xer);
	// ble cr6,0x82a6b8cc
	if (!cr6.gt) goto loc_82A6B8CC;
loc_82A6B738:
	// lwz r9,-4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// bne cr6,0x82a6b74c
	if (!cr6.eq) goto loc_82A6B74C;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
loc_82A6B74C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82a6b738
	if (cr6.gt) goto loc_82A6B738;
loc_82A6B75C:
	// subf r10,r25,r24
	ctx.r10.s64 = ctx.r24.s64 - ctx.r25.s64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// divw r9,r10,r26
	ctx.r9.s32 = PPCDivide(ctx.r10.s32, ctx.r26.s32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a6b7a0
	if (cr6.eq) goto loc_82A6B7A0;
	// addi r10,r25,8
	ctx.r10.s64 = ctx.r25.s64 + 8;
	// cmplw cr6,r9,r28
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, xer);
	// ble cr6,0x82a6b8d8
	if (!cr6.gt) goto loc_82A6B8D8;
loc_82A6B77C:
	// lwz r20,-4(r10)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// cmplw cr6,r20,r6
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r6.u32, xer);
	// bne cr6,0x82a6b790
	if (!cr6.eq) goto loc_82A6B790;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
loc_82A6B790:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82a6b77c
	if (cr6.gt) goto loc_82A6B77C;
loc_82A6B7A0:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a6b858
	if (!cr6.eq) goto loc_82A6B858;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82a6b7f0
	if (cr6.eq) goto loc_82A6B7F0;
	// addi r10,r23,8
	ctx.r10.s64 = ctx.r23.s64 + 8;
	// cmplw cr6,r8,r28
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, xer);
	// ble cr6,0x82a6b8e4
	if (!cr6.gt) goto loc_82A6B8E4;
loc_82A6B7C8:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r6,r5,24
	ctx.r6.u64 = ctx.r5.u32 & 0xFF;
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// beq cr6,0x82a6b7ec
	if (cr6.eq) goto loc_82A6B7EC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82a6b7c8
	if (cr6.gt) goto loc_82A6B7C8;
	// b 0x82a6b7f0
	goto loc_82A6B7F0;
loc_82A6B7EC:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82A6B7F0:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6b87c
	if (cr6.eq) goto loc_82A6B87C;
loc_82A6B7FC:
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82a6b840
	if (cr6.eq) goto loc_82A6B840;
	// addi r10,r23,8
	ctx.r10.s64 = ctx.r23.s64 + 8;
	// cmplw cr6,r8,r28
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, xer);
	// ble cr6,0x82a6b8f0
	if (!cr6.gt) goto loc_82A6B8F0;
loc_82A6B818:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r3,r7
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, xer);
	// beq cr6,0x82a6b838
	if (cr6.eq) goto loc_82A6B838;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82a6b818
	if (cr6.gt) goto loc_82A6B818;
	// b 0x82a6b840
	goto loc_82A6B840;
loc_82A6B838:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
loc_82A6B840:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6b7fc
	if (cr6.eq) goto loc_82A6B7FC;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// b 0x82a6b868
	goto loc_82A6B868;
loc_82A6B858:
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82a6b87c
	if (cr6.eq) goto loc_82A6B87C;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82A6B868:
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// bge cr6,0x82a6b87c
	if (!cr6.lt) goto loc_82A6B87C;
	// add r10,r31,r27
	ctx.r10.u64 = ctx.r31.u64 + ctx.r27.u64;
	// std r29,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r29.u64);
	// stb r11,512(r10)
	PPC_STORE_U8(ctx.r10.u32 + 512, ctx.r11.u8);
loc_82A6B87C:
	// lhz r11,808(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 808);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// clrlwi r4,r11,25
	ctx.r4.u64 = ctx.r11.u32 & 0x7F;
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// blt cr6,0x82a6b6fc
	if (cr6.lt) goto loc_82A6B6FC;
loc_82A6B894:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82a6b8ac
	if (cr6.eq) goto loc_82A6B8AC;
	// stw r21,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r21.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825952b8
	ctx.lr = 0x82A6B8AC;
	sub_825952B8(ctx, base);
loc_82A6B8AC:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x82a6b8c4
	if (cr6.eq) goto loc_82A6B8C4;
	// stw r21,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r21.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x825952b8
	ctx.lr = 0x82A6B8C4;
	sub_825952B8(ctx, base);
loc_82A6B8C4:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82A6B8CC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A6B8D8;
	sub_831CC188(ctx, base);
loc_82A6B8D8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A6B8E4;
	sub_831CC188(ctx, base);
loc_82A6B8E4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A6B8F0;
	sub_831CC188(ctx, base);
loc_82A6B8F0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A6B8FC;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82A6B8FC"))) PPC_WEAK_FUNC(sub_82A6B8FC);
PPC_FUNC_IMPL(__imp__sub_82A6B8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6B900"))) PPC_WEAK_FUNC(sub_82A6B900);
PPC_FUNC_IMPL(__imp__sub_82A6B900) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A6B908;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82A6B930:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a6b930
	if (!cr6.eq) goto loc_82A6B930;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8292a380
	ctx.lr = 0x82A6B95C;
	sub_8292A380(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82A6B960:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a6b960
	if (!cr6.eq) goto loc_82A6B960;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82A6B988;
	sub_825A1EB8(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1da8
	ctx.lr = 0x82A6B99C;
	sub_825A1DA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6B9A8"))) PPC_WEAK_FUNC(sub_82A6B9A8);
PPC_FUNC_IMPL(__imp__sub_82A6B9A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A6B9B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x831d4e70
	ctx.lr = 0x82A6B9C8;
	sub_831D4E70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a6bb78
	if (cr6.eq) goto loc_82A6BB78;
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(ctx.r29.u32, 4, xer);
	// bgt cr6,0x82a6bb78
	if (cr6.gt) goto loc_82A6BB78;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82a6ba88
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A6BA88;
	// bdzf 4*cr6+eq,0x82a6bb10
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A6BB10;
	// bdzf 4*cr6+eq,0x82a6bb3c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A6BB3C;
	// bne cr6,0x82a6bb60
	if (!cr6.eq) goto loc_82A6BB60;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// ori r4,r4,204
	ctx.r4.u64 = ctx.r4.u64 | 204;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r10,1900
	ctx.r5.s64 = ctx.r10.s64 + 1900;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x82d042a8
	ctx.lr = 0x82A6BA2C;
	sub_82D042A8(ctx, base);
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r4,r4,229
	ctx.r4.u64 = ctx.r4.u64 | 229;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d042a8
	ctx.lr = 0x82A6BA44;
	sub_82D042A8(ctx, base);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r11,r9,10824
	ctx.r11.s64 = ctx.r9.s64 + 10824;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// bl 0x82a6b900
	ctx.lr = 0x82A6BA5C;
	sub_82A6B900(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825a1da8
	ctx.lr = 0x82A6BA70;
	sub_825A1DA8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82A6BA78;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82A6BA80;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A6BA88:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r11,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r11.u8);
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// ori r4,r4,205
	ctx.r4.u64 = ctx.r4.u64 | 205;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x82d042a8
	ctx.lr = 0x82A6BAB8;
	sub_82D042A8(ctx, base);
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r4,r4,229
	ctx.r4.u64 = ctx.r4.u64 | 229;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d042a8
	ctx.lr = 0x82A6BAD0;
	sub_82D042A8(ctx, base);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r9,10824
	ctx.r4.s64 = ctx.r9.s64 + 10824;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82a6b900
	ctx.lr = 0x82A6BAE4;
	sub_82A6B900(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825a1da8
	ctx.lr = 0x82A6BAF8;
	sub_825A1DA8(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82A6BB00;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82A6BB08;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A6BB10:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,204
	ctx.r4.u64 = ctx.r4.u64 | 204;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// addi r5,r11,1900
	ctx.r5.s64 = ctx.r11.s64 + 1900;
	// bl 0x82d042a8
	ctx.lr = 0x82A6BB34;
	sub_82D042A8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A6BB3C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// ori r4,r4,205
	ctx.r4.u64 = ctx.r4.u64 | 205;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x82d042a8
	ctx.lr = 0x82A6BB58;
	sub_82D042A8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A6BB60:
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r4,r4,229
	ctx.r4.u64 = ctx.r4.u64 | 229;
	// bl 0x82d042a8
	ctx.lr = 0x82A6BB78;
	sub_82D042A8(ctx, base);
loc_82A6BB78:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6BB80"))) PPC_WEAK_FUNC(sub_82A6BB80);
PPC_FUNC_IMPL(__imp__sub_82A6BB80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A6BB88;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d5b0d0
	ctx.lr = 0x82A6BB94;
	sub_82D5B0D0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a6bd0c
	if (cr6.eq) goto loc_82A6BD0C;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// ori r30,r11,65534
	ctx.r30.u64 = ctx.r11.u64 | 65534;
	// ori r28,r10,65535
	ctx.r28.u64 = ctx.r10.u64 | 65535;
loc_82A6BBB4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8399d710
	ctx.lr = 0x82A6BBBC;
	sub_8399D710(ctx, base);
	// bl 0x83123650
	ctx.lr = 0x82A6BBC0;
	sub_83123650(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82a6bbec
	if (!cr6.lt) goto loc_82A6BBEC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a6bbf0
	if (!cr6.gt) goto loc_82A6BBF0;
loc_82A6BBEC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A6BBF0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6bc88
	if (cr6.eq) goto loc_82A6BC88;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// srawi r31,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r7.s32 >> 2;
	// bne cr6,0x82a6bc68
	if (!cr6.eq) goto loc_82A6BC68;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// bgt cr6,0x82a6bd50
	if (cr6.gt) goto loc_82A6BD50;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x82a6bc68
	if (!cr6.gt) goto loc_82A6BC68;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r10,r28
	ctx.r8.s64 = ctx.r28.s64 - ctx.r10.s64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x82a6bc54
	if (cr6.lt) goto loc_82A6BC54;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82A6BC54:
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bge cr6,0x82a6bc60
	if (!cr6.lt) goto loc_82A6BC60;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_82A6BC60:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ad5e38
	ctx.lr = 0x82A6BC68;
	sub_82AD5E38(ctx, base);
loc_82A6BC68:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6bcf4
	if (cr6.eq) goto loc_82A6BCF4;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x82a6bcf4
	goto loc_82A6BCF4;
loc_82A6BC88:
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82a6bce4
	if (!cr6.eq) goto loc_82A6BCE4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// bgt cr6,0x82a6bd5c
	if (cr6.gt) goto loc_82A6BD5C;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x82a6bce4
	if (!cr6.gt) goto loc_82A6BCE4;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r10,r28
	ctx.r8.s64 = ctx.r28.s64 - ctx.r10.s64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x82a6bcd0
	if (cr6.lt) goto loc_82A6BCD0;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82A6BCD0:
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bge cr6,0x82a6bcdc
	if (!cr6.lt) goto loc_82A6BCDC;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_82A6BCDC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ad5e38
	ctx.lr = 0x82A6BCE4;
	sub_82AD5E38(ctx, base);
loc_82A6BCE4:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6bcf4
	if (cr6.eq) goto loc_82A6BCF4;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_82A6BCF4:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, xer);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// blt cr6,0x82a6bbb4
	if (cr6.lt) goto loc_82A6BBB4;
loc_82A6BD0C:
	// bl 0x82aaf000
	ctx.lr = 0x82A6BD10;
	sub_82AAF000(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a6bd48
	if (cr6.eq) goto loc_82A6BD48;
loc_82A6BD20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8399d738
	ctx.lr = 0x82A6BD28;
	sub_8399D738(ctx, base);
	// bl 0x83123650
	ctx.lr = 0x82A6BD2C;
	sub_83123650(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835977d8
	ctx.lr = 0x82A6BD3C;
	sub_835977D8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// blt cr6,0x82a6bd20
	if (cr6.lt) goto loc_82A6BD20;
loc_82A6BD48:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82A6BD50:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82A6BD5C;
	sub_831CC150(ctx, base);
loc_82A6BD5C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82A6BD68;
	sub_831CC150(ctx, base);
}

__attribute__((alias("__imp__sub_82A6BD68"))) PPC_WEAK_FUNC(sub_82A6BD68);
PPC_FUNC_IMPL(__imp__sub_82A6BD68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A6BD70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addis r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 65536;
	// ori r10,r11,18976
	ctx.r10.u64 = ctx.r11.u64 | 18976;
	// addi r29,r29,18980
	ctx.r29.s64 = ctx.r29.s64 + 18980;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r30,72(r3)
	PPC_STORE_U64(ctx.r3.u32 + 72, ctx.r30.u64);
	// std r30,80(r3)
	PPC_STORE_U64(ctx.r3.u32 + 80, ctx.r30.u64);
	// stwx r30,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82a6bdb4
	if (cr6.eq) goto loc_82A6BDB4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82a699c8
	ctx.lr = 0x82A6BDB0;
	sub_82A699C8(ctx, base);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
loc_82A6BDB4:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r9,-31778
	ctx.r9.s64 = -2082603008;
	// ori r8,r11,18996
	ctx.r8.u64 = ctx.r11.u64 | 18996;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r4,r6,19012
	ctx.r4.u64 = ctx.r6.u64 | 19012;
	// stbx r30,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r30.u8);
	// ori r5,r7,19008
	ctx.r5.u64 = ctx.r7.u64 | 19008;
	// addi r3,r3,19016
	ctx.r3.s64 = ctx.r3.s64 + 19016;
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// ori r29,r10,19021
	ctx.r29.u64 = ctx.r10.u64 | 19021;
	// ld r10,23776(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 23776);
	// li r6,-1
	ctx.r6.s64 = -1;
	// std r10,92(r31)
	PPC_STORE_U64(ctx.r31.u32 + 92, ctx.r10.u64);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ld r9,23776(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 23776);
	// li r11,-1
	ctx.r11.s64 = -1;
	// std r9,100(r31)
	PPC_STORE_U64(ctx.r31.u32 + 100, ctx.r9.u64);
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// ori r28,r8,19020
	ctx.r28.u64 = ctx.r8.u64 | 19020;
	// sthx r6,r31,r4
	PPC_STORE_U16(ctx.r31.u32 + ctx.r4.u32, ctx.r6.u16);
	// li r10,21097
	ctx.r10.s64 = 21097;
	// stb r30,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r30.u8);
	// addi r9,r31,124
	ctx.r9.s64 = ctx.r31.s64 + 124;
	// stb r30,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r30.u8);
	// lwz r8,23824(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 23824);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r6,r8,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lwz r10,23824(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 23824);
	// rlwimi r5,r10,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// stbx r30,r31,r29
	PPC_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r30.u8);
	// stbx r30,r31,r28
	PPC_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r30.u8);
loc_82A6BE50:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82a6be50
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A6BE50;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,19024
	ctx.r3.s64 = ctx.r3.s64 + 19024;
	// bl 0x82f04390
	ctx.lr = 0x82A6BE64;
	sub_82F04390(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r11,22972
	ctx.r9.u64 = ctx.r11.u64 | 22972;
	// ori r8,r10,22973
	ctx.r8.u64 = ctx.r10.u64 | 22973;
	// stbx r30,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u8);
	// stbx r30,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r30.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6BE84"))) PPC_WEAK_FUNC(sub_82A6BE84);
PPC_FUNC_IMPL(__imp__sub_82A6BE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6BE88"))) PPC_WEAK_FUNC(sub_82A6BE88);
PPC_FUNC_IMPL(__imp__sub_82A6BE88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82A6BE90;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r4,r11,8984
	ctx.r4.s64 = ctx.r11.s64 + 8984;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// bl 0x8257fad0
	ctx.lr = 0x82A6BEA8;
	sub_8257FAD0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// bl 0x831156e8
	ctx.lr = 0x82A6BEB4;
	sub_831156E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82f00728
	ctx.lr = 0x82A6BEBC;
	sub_82F00728(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82eff1a8
	ctx.lr = 0x82A6BEC4;
	sub_82EFF1A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82a6c3d4
	if (cr6.eq) goto loc_82A6C3D4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a6c3d4
	if (cr6.eq) goto loc_82A6C3D4;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82a6c3d4
	if (cr6.eq) goto loc_82A6C3D4;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6bf08
	if (cr6.eq) goto loc_82A6BF08;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83115808
	ctx.lr = 0x82A6BEF8;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// bne cr6,0x82a6bf0c
	if (!cr6.eq) goto loc_82A6BF0C;
loc_82A6BF08:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82A6BF0C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a6bf2c
	if (!cr6.eq) goto loc_82A6BF2C;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82467848
	ctx.lr = 0x82A6BF20;
	sub_82467848(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82A6BF2C:
	// lis r26,-31763
	ctx.r26.s64 = -2081619968;
	// lbz r11,8968(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 8968);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bgt cr6,0x82a6c3c0
	if (cr6.gt) goto loc_82A6C3C0;
	// lis r12,-32089
	ctx.r12.s64 = -2102984704;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-16552
	ctx.r12.s64 = ctx.r12.s64 + -16552;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82A6BF84;
	case 1:
		goto loc_82A6BFFC;
	case 2:
		goto loc_82A6C02C;
	case 3:
		goto loc_82A6C060;
	case 4:
		goto loc_82A6C0F8;
	case 5:
		goto loc_82A6C130;
	case 6:
		goto loc_82A6C1BC;
	case 7:
		goto loc_82A6C234;
	case 8:
		goto loc_82A6C2BC;
	case 9:
		goto loc_82A6C2EC;
	case 10:
		goto loc_82A6C354;
	default:
		return;
	}
	// lwz r21,-16508(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16508);
	// lwz r21,-16388(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16388);
	// lwz r21,-16340(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16340);
	// lwz r21,-16288(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16288);
	// lwz r21,-16136(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16136);
	// lwz r21,-16080(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16080);
	// lwz r21,-15940(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15940);
	// lwz r21,-15820(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15820);
	// lwz r21,-15684(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15684);
	// lwz r21,-15636(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15636);
	// lwz r21,-15532(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15532);
loc_82A6BF84:
	// lis r11,236
	ctx.r11.s64 = 15466496;
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// ori r9,r11,5128
	ctx.r9.u64 = ctx.r11.u64 | 5128;
	// stwx r31,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r31.u32);
	// bl 0x8311e3d0
	ctx.lr = 0x82A6BF98;
	sub_8311E3D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a6bfa8
	if (cr6.eq) goto loc_82A6BFA8;
	// bl 0x8311e3d0
	ctx.lr = 0x82A6BFA4;
	sub_8311E3D0(ctx, base);
	// bl 0x8311dfc0
	ctx.lr = 0x82A6BFA8;
	sub_8311DFC0(ctx, base);
loc_82A6BFA8:
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a6bfc0
	if (cr6.eq) goto loc_82A6BFC0;
	// stb r27,274(r29)
	PPC_STORE_U8(ctx.r29.u32 + 274, ctx.r27.u8);
	// stb r27,345(r11)
	PPC_STORE_U8(ctx.r11.u32 + 345, ctx.r27.u8);
	// stb r27,62(r11)
	PPC_STORE_U8(ctx.r11.u32 + 62, ctx.r27.u8);
loc_82A6BFC0:
	// bl 0x82bda618
	ctx.lr = 0x82A6BFC4;
	sub_82BDA618(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a6bfd0
	if (cr6.eq) goto loc_82A6BFD0;
	// bl 0x82bda660
	ctx.lr = 0x82A6BFD0;
	sub_82BDA660(ctx, base);
loc_82A6BFD0:
	// bl 0x83763ef8
	ctx.lr = 0x82A6BFD4;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a6bfe0
	if (cr6.eq) goto loc_82A6BFE0;
	// bl 0x83763ea8
	ctx.lr = 0x82A6BFE0;
	sub_83763EA8(ctx, base);
loc_82A6BFE0:
	// bl 0x831156e8
	ctx.lr = 0x82A6BFE4;
	sub_831156E8(ctx, base);
	// lis r10,5
	ctx.r10.s64 = 327680;
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r11,2
	ctx.r11.s64 = 2;
	// ori r8,r10,37454
	ctx.r8.u64 = ctx.r10.u64 | 37454;
	// stbx r31,r9,r8
	PPC_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r31.u8);
	// stb r11,8968(r26)
	PPC_STORE_U8(ctx.r26.u32 + 8968, ctx.r11.u8);
loc_82A6BFFC:
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82a6c3ac
	if (!cr6.eq) goto loc_82A6C3AC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a6bd68
	ctx.lr = 0x82A6C010;
	sub_82A6BD68(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r11,8968(r26)
	PPC_STORE_U8(ctx.r26.u32 + 8968, ctx.r11.u8);
	// bl 0x82467848
	ctx.lr = 0x82A6C020;
	sub_82467848(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82A6C02C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83115be8
	ctx.lr = 0x82A6C038;
	sub_83115BE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a6c3ac
	if (!cr6.eq) goto loc_82A6C3AC;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r11,8968(r26)
	PPC_STORE_U8(ctx.r26.u32 + 8968, ctx.r11.u8);
	// bl 0x82467848
	ctx.lr = 0x82A6C054;
	sub_82467848(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82A6C060:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83115808
	ctx.lr = 0x82A6C068;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6c3ac
	if (cr6.eq) goto loc_82A6C3AC;
	// lis r29,-31763
	ctx.r29.s64 = -2081619968;
	// lbz r11,8969(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8969);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6c0c4
	if (cr6.eq) goto loc_82A6C0C4;
	// bl 0x8310d3b8
	ctx.lr = 0x82A6C088;
	sub_8310D3B8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8310d638
	ctx.lr = 0x82A6C090;
	sub_8310D638(ctx, base);
	// bl 0x8310d4a0
	ctx.lr = 0x82A6C094;
	sub_8310D4A0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8310d6a8
	ctx.lr = 0x82A6C09C;
	sub_8310D6A8(ctx, base);
	// bl 0x831099d8
	ctx.lr = 0x82A6C0A0;
	sub_831099D8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83109e58
	ctx.lr = 0x82A6C0A8;
	sub_83109E58(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r11,8968(r26)
	PPC_STORE_U8(ctx.r26.u32 + 8968, ctx.r11.u8);
	// bl 0x82467848
	ctx.lr = 0x82A6C0B8;
	sub_82467848(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82A6C0C4:
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// lwz r3,8972(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8972);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a6c0ec
	if (cr6.eq) goto loc_82A6C0EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A6C0E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,8972(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8972, ctx.r31.u32);
loc_82A6C0EC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,8969(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8969, ctx.r31.u8);
	// b 0x82a6c3a0
	goto loc_82A6C3A0;
loc_82A6C0F8:
	// bl 0x831099d8
	ctx.lr = 0x82A6C0FC;
	sub_831099D8(ctx, base);
	// bl 0x831099e8
	ctx.lr = 0x82A6C100;
	sub_831099E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6c3ac
	if (cr6.eq) goto loc_82A6C3AC;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830edee0
	ctx.lr = 0x82A6C114;
	sub_830EDEE0(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r11,8968(r26)
	PPC_STORE_U8(ctx.r26.u32 + 8968, ctx.r11.u8);
	// bl 0x82467848
	ctx.lr = 0x82A6C124;
	sub_82467848(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82A6C130:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x830ebb60
	ctx.lr = 0x82A6C138;
	sub_830EBB60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a6c3ac
	if (!cr6.eq) goto loc_82A6C3AC;
	// bl 0x82d352d8
	ctx.lr = 0x82A6C148;
	sub_82D352D8(ctx, base);
	// bl 0x82d37c40
	ctx.lr = 0x82A6C14C;
	sub_82D37C40(ctx, base);
	// bl 0x82d37dc8
	ctx.lr = 0x82A6C150;
	sub_82D37DC8(ctx, base);
	// bl 0x831099d8
	ctx.lr = 0x82A6C154;
	sub_831099D8(ctx, base);
	// bl 0x83109e28
	ctx.lr = 0x82A6C158;
	sub_83109E28(ctx, base);
	// bl 0x82d06eb8
	ctx.lr = 0x82A6C15C;
	sub_82D06EB8(ctx, base);
	// bl 0x82d05818
	ctx.lr = 0x82A6C160;
	sub_82D05818(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r10,10231
	ctx.r30.s64 = ctx.r10.s64 + 10231;
loc_82A6C170:
	// addi r10,r30,165
	ctx.r10.s64 = ctx.r30.s64 + 165;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82d069f0
	ctx.lr = 0x82A6C180;
	sub_82D069F0(ctx, base);
	// addi r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 1;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x82a6c170
	if (cr6.lt) goto loc_82A6C170;
	// addi r3,r30,-2
	ctx.r3.s64 = ctx.r30.s64 + -2;
	// bl 0x82d12258
	ctx.lr = 0x82A6C1A0;
	sub_82D12258(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r11,8968(r26)
	PPC_STORE_U8(ctx.r26.u32 + 8968, ctx.r11.u8);
	// bl 0x82467848
	ctx.lr = 0x82A6C1B0;
	sub_82467848(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82A6C1BC:
	// bl 0x831099d8
	ctx.lr = 0x82A6C1C0;
	sub_831099D8(ctx, base);
	// bl 0x831099e8
	ctx.lr = 0x82A6C1C4;
	sub_831099E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6c3ac
	if (cr6.eq) goto loc_82A6C3AC;
	// bl 0x82d06e28
	ctx.lr = 0x82A6C1D4;
	sub_82D06E28(ctx, base);
	// bl 0x82d05818
	ctx.lr = 0x82A6C1D8;
	sub_82D05818(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r10,10231
	ctx.r30.s64 = ctx.r10.s64 + 10231;
loc_82A6C1E8:
	// addi r10,r30,165
	ctx.r10.s64 = ctx.r30.s64 + 165;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82d06870
	ctx.lr = 0x82A6C1F8;
	sub_82D06870(ctx, base);
	// addi r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 1;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x82a6c1e8
	if (cr6.lt) goto loc_82A6C1E8;
	// addi r3,r30,-1
	ctx.r3.s64 = ctx.r30.s64 + -1;
	// bl 0x82d12638
	ctx.lr = 0x82A6C218;
	sub_82D12638(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r11,8968(r26)
	PPC_STORE_U8(ctx.r26.u32 + 8968, ctx.r11.u8);
	// bl 0x82467848
	ctx.lr = 0x82A6C228;
	sub_82467848(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82A6C234:
	// bl 0x82d05818
	ctx.lr = 0x82A6C238;
	sub_82D05818(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d06e70
	ctx.lr = 0x82A6C240;
	sub_82D06E70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6c3ac
	if (cr6.eq) goto loc_82A6C3AC;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r10,10231
	ctx.r30.s64 = ctx.r10.s64 + 10231;
loc_82A6C258:
	// addi r10,r30,165
	ctx.r10.s64 = ctx.r30.s64 + 165;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82d060f8
	ctx.lr = 0x82A6C268;
	sub_82D060F8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a6c28c
	if (cr6.eq) goto loc_82A6C28C;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x82a6c258
	if (cr6.lt) goto loc_82A6C258;
loc_82A6C28C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d12638
	ctx.lr = 0x82A6C294;
	sub_82D12638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6c3ac
	if (cr6.eq) goto loc_82A6C3AC;
	// li r11,9
	ctx.r11.s64 = 9;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r11,8968(r26)
	PPC_STORE_U8(ctx.r26.u32 + 8968, ctx.r11.u8);
	// bl 0x82467848
	ctx.lr = 0x82A6C2B0;
	sub_82467848(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82A6C2BC:
	// bl 0x831156e8
	ctx.lr = 0x82A6C2C0;
	sub_831156E8(ctx, base);
	// bl 0x83115988
	ctx.lr = 0x82A6C2C4;
	sub_83115988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6c3ac
	if (cr6.eq) goto loc_82A6C3AC;
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r11,8968(r26)
	PPC_STORE_U8(ctx.r26.u32 + 8968, ctx.r11.u8);
	// bl 0x82467848
	ctx.lr = 0x82A6C2E0;
	sub_82467848(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82A6C2EC:
	// bl 0x831156e8
	ctx.lr = 0x82A6C2F0;
	sub_831156E8(ctx, base);
	// bl 0x83115808
	ctx.lr = 0x82A6C2F4;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6c3ac
	if (cr6.eq) goto loc_82A6C3AC;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// lwz r3,8972(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8972);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a6c328
	if (cr6.eq) goto loc_82A6C328;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A6C320;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,8972(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8972, ctx.r31.u32);
loc_82A6C328:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d38670
	ctx.lr = 0x82A6C334;
	sub_82D38670(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r3,8972(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8972, ctx.r3.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r11,8968(r26)
	PPC_STORE_U8(ctx.r26.u32 + 8968, ctx.r11.u8);
	// bl 0x82467848
	ctx.lr = 0x82A6C348;
	sub_82467848(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82A6C354:
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// lwz r3,8972(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8972);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a6c388
	if (cr6.eq) goto loc_82A6C388;
	// lbz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6c3ac
	if (cr6.eq) goto loc_82A6C3AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A6C380;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,8972(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8972, ctx.r31.u32);
loc_82A6C388:
	// bl 0x82d365d0
	ctx.lr = 0x82A6C38C;
	sub_82D365D0(ctx, base);
	// bl 0x82d37c40
	ctx.lr = 0x82A6C390;
	sub_82D37C40(ctx, base);
	// bl 0x82d37db0
	ctx.lr = 0x82A6C394;
	sub_82D37DB0(ctx, base);
	// lis r9,-31763
	ctx.r9.s64 = -2081619968;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,8969(r9)
	PPC_STORE_U8(ctx.r9.u32 + 8969, ctx.r31.u8);
loc_82A6C3A0:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stb r31,8968(r26)
	PPC_STORE_U8(ctx.r26.u32 + 8968, ctx.r31.u8);
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
loc_82A6C3AC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82467848
	ctx.lr = 0x82A6C3B4;
	sub_82467848(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82A6C3C0:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82467848
	ctx.lr = 0x82A6C3C8;
	sub_82467848(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82A6C3D4:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a6c3ec
	if (cr6.lt) goto loc_82A6C3EC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x82A6C3EC;
	sub_8257FB60(ctx, base);
loc_82A6C3EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6C3F8"))) PPC_WEAK_FUNC(sub_82A6C3F8);
PPC_FUNC_IMPL(__imp__sub_82A6C3F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82A6C400;
	__savegprlr_14(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// stw r5,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r5.u32);
	// mr r15,r4
	ctx.r15.u64 = ctx.r4.u64;
	// stw r6,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r6.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r14,r7
	ctx.r14.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82a6c434
	if (!cr6.eq) goto loc_82A6C434;
loc_82A6C428:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82A6C434:
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82d19a88
	ctx.lr = 0x82A6C440;
	sub_82D19A88(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a6c428
	if (cr6.eq) goto loc_82A6C428;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r16,2376(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2376);
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(ctx.r16.u32, 0, xer);
	// beq cr6,0x82a6c428
	if (cr6.eq) goto loc_82A6C428;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82d19e80
	ctx.lr = 0x82A6C460;
	sub_82D19E80(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r22,88
	ctx.r22.s64 = 88;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r17,r9,r22
	ctx.r17.s32 = PPCDivide(ctx.r9.s32, ctx.r22.s32);
	cr0.compare<int32_t>(ctx.r17.s32, 0, xer);
	// beq 0x82a6c428
	if (cr0.eq) goto loc_82A6C428;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82a6c48c
	if (cr6.eq) goto loc_82A6C48C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8291fd60
	ctx.lr = 0x82A6C48C;
	sub_8291FD60(ctx, base);
loc_82A6C48C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82a6c49c
	if (cr6.eq) goto loc_82A6C49C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8291fd60
	ctx.lr = 0x82A6C49C;
	sub_8291FD60(ctx, base);
loc_82A6C49C:
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r14,0
	cr6.compare<uint32_t>(ctx.r14.u32, 0, xer);
	// beq cr6,0x82a6c4ac
	if (cr6.eq) goto loc_82A6C4AC;
	// stb r25,0(r14)
	PPC_STORE_U8(ctx.r14.u32 + 0, ctx.r25.u8);
loc_82A6C4AC:
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(ctx.r17.u32, 0, xer);
	// beq cr6,0x82a6c69c
	if (cr6.eq) goto loc_82A6C69C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// li r18,1
	ctx.r18.s64 = 1;
	// li r23,15
	ctx.r23.s64 = 15;
	// li r20,28
	ctx.r20.s64 = 28;
	// lis r24,-31776
	ctx.r24.s64 = -2082471936;
	// addi r21,r11,10568
	ctx.r21.s64 = ctx.r11.s64 + 10568;
loc_82A6C4DC:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r22
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r22.s32);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// ble cr6,0x82a6c6a8
	if (!cr6.gt) goto loc_82A6C6A8;
	// lwz r6,25676(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 25676);
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82A6C500:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a6c500
	if (!cr6.eq) goto loc_82A6C500;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82A6C528;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82a6c540
	if (!cr6.eq) goto loc_82A6C540;
	// cmplwi cr6,r14,0
	cr6.compare<uint32_t>(ctx.r14.u32, 0, xer);
	// beq cr6,0x82a6c68c
	if (cr6.eq) goto loc_82A6C68C;
	// stb r18,0(r14)
	PPC_STORE_U8(ctx.r14.u32 + 0, ctx.r18.u8);
	// b 0x82a6c68c
	goto loc_82A6C68C;
loc_82A6C540:
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r22
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r22.s32);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// ble cr6,0x82a6c6b4
	if (!cr6.gt) goto loc_82A6C6B4;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82a6c580
	if (cr6.lt) goto loc_82A6C580;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82a6c584
	goto loc_82A6C584;
loc_82A6C580:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82A6C584:
	// lwz r11,64(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 64);
	// lwz r10,68(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 68);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r20
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r20.s32);
	// cmplw cr6,r8,r28
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, xer);
	// ble cr6,0x82a6c5c8
	if (!cr6.gt) goto loc_82A6C5C8;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82a6c5b0
	if (cr6.lt) goto loc_82A6C5B0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82A6C5B0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82d04340
	ctx.lr = 0x82A6C5B8;
	sub_82D04340(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d04220
	ctx.lr = 0x82A6C5C4;
	sub_82D04220(ctx, base);
	// b 0x82a6c600
	goto loc_82A6C600;
loc_82A6C5C8:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259d6c0
	ctx.lr = 0x82A6C5D4;
	sub_8259D6C0(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82A6C5D8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a6c5d8
	if (!cr6.eq) goto loc_82A6C5D8;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82A6C600;
	sub_825A1EB8(ctx, base);
loc_82A6C600:
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6c63c
	if (cr6.eq) goto loc_82A6C63C;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82a6c620
	if (!cr6.lt) goto loc_82A6C620;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82A6C620:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82A6C628;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,340(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// bl 0x8291fdc8
	ctx.lr = 0x82A6C634;
	sub_8291FDC8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82A6C63C;
	sub_8387E8E0(ctx, base);
loc_82A6C63C:
	// lwz r11,348(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6c668
	if (cr6.eq) goto loc_82A6C668;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82A6C654;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,348(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// bl 0x8291fdc8
	ctx.lr = 0x82A6C660;
	sub_8291FDC8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82A6C668;
	sub_8387E8E0(ctx, base);
loc_82A6C668:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82d233b0
	ctx.lr = 0x82A6C67C;
	sub_82D233B0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r26,r26,28
	ctx.r26.s64 = ctx.r26.s64 + 28;
	// bl 0x8387e8e0
	ctx.lr = 0x82A6C68C;
	sub_8387E8E0(ctx, base);
loc_82A6C68C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,88
	ctx.r29.s64 = ctx.r29.s64 + 88;
	// cmplw cr6,r30,r17
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r17.u32, xer);
	// blt cr6,0x82a6c4dc
	if (cr6.lt) goto loc_82A6C4DC;
loc_82A6C69C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82A6C6A8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A6C6B4;
	sub_831CC188(ctx, base);
loc_82A6C6B4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A6C6C0;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82A6C6C0"))) PPC_WEAK_FUNC(sub_82A6C6C0);
PPC_FUNC_IMPL(__imp__sub_82A6C6C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82A6C6C8;
	__savegprlr_22(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r22,2
	ctx.r22.s64 = 2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a6c834
	if (cr6.eq) goto loc_82A6C834;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d04828
	ctx.lr = 0x82A6C6F0;
	sub_82D04828(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d28370
	ctx.lr = 0x82A6C6FC;
	sub_82D28370(ctx, base);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d05480
	ctx.lr = 0x82A6C714;
	sub_82D05480(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r28,28
	ctx.r28.s64 = 28;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw. r11,r11,r28
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r28.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82a6c7fc
	if (cr0.eq) goto loc_82A6C7FC;
	// lbz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
loc_82A6C738:
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// ble cr6,0x82a6c868
	if (!cr6.gt) goto loc_82A6C868;
	// add r4,r27,r3
	ctx.r4.u64 = ctx.r27.u64 + ctx.r3.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d04d80
	ctx.lr = 0x82A6C75C;
	sub_82D04D80(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw. r11,r11,r28
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r28.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82a6c7ac
	if (cr0.eq) goto loc_82A6C7AC;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// ble cr6,0x82a6c874
	if (!cr6.gt) goto loc_82A6C874;
loc_82A6C780:
	// add r4,r30,r3
	ctx.r4.u64 = ctx.r30.u64 + ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8291fdc8
	ctx.lr = 0x82A6C78C;
	sub_8291FDC8(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r11,r11,r28
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r28.s32);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82a6c780
	if (cr6.gt) goto loc_82A6C780;
loc_82A6C7AC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a6c7d0
	if (cr6.eq) goto loc_82A6C7D0;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// bl 0x838adab0
	ctx.lr = 0x82A6C7C0;
	sub_838ADAB0(ctx, base);
	// stw r22,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r22.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82A6C7D0;
	sub_825952B8(ctx, base);
loc_82A6C7D0:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r27,r27,28
	ctx.r27.s64 = ctx.r27.s64 + 28;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// divw r11,r11,r28
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r28.s32);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, xer);
	// blt cr6,0x82a6c738
	if (cr6.lt) goto loc_82A6C738;
loc_82A6C7FC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a6c820
	if (cr6.eq) goto loc_82A6C820;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x838adab0
	ctx.lr = 0x82A6C810;
	sub_838ADAB0(ctx, base);
	// stw r22,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r22.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82A6C820;
	sub_825952B8(ctx, base);
loc_82A6C820:
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// bl 0x82d04b60
	ctx.lr = 0x82A6C834;
	sub_82D04B60(ctx, base);
loc_82A6C834:
	// lwz r11,20(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a6c850
	if (cr6.lt) goto loc_82A6C850;
	// stw r22,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r22.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82A6C850;
	sub_825952B8(ctx, base);
loc_82A6C850:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,16(r23)
	PPC_STORE_U32(ctx.r23.u32 + 16, ctx.r29.u32);
	// stw r11,20(r23)
	PPC_STORE_U32(ctx.r23.u32 + 20, ctx.r11.u32);
	// stb r29,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r29.u8);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82A6C868:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A6C874;
	sub_831CC188(ctx, base);
loc_82A6C874:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A6C880;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82A6C880"))) PPC_WEAK_FUNC(sub_82A6C880);
PPC_FUNC_IMPL(__imp__sub_82A6C880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82A6C888;
	__savegprlr_14(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r4,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r4.u32);
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// bl 0x831156e8
	ctx.lr = 0x82A6C89C;
	sub_831156E8(ctx, base);
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// lwz r23,48(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r31,r11,23776
	ctx.r31.s64 = ctx.r11.s64 + 23776;
	// li r20,0
	ctx.r20.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a6c8cc
	if (!cr6.eq) goto loc_82A6C8CC;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82a6c8f4
	goto loc_82A6C8F4;
loc_82A6C8CC:
	// lhz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lhz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x82a6c8ec
	if (!cr6.eq) goto loc_82A6C8EC;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// beq cr6,0x82a6c8f0
	if (cr6.eq) goto loc_82A6C8F0;
loc_82A6C8EC:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82A6C8F0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A6C8F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a6d73c
	if (!cr6.eq) goto loc_82A6D73C;
	// bl 0x82f00728
	ctx.lr = 0x82A6C904;
	sub_82F00728(ctx, base);
	// addis r29,r23,205
	ctx.r29.s64 = ctx.r23.s64 + 13434880;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r29,r29,-18420
	ctx.r29.s64 = ctx.r29.s64 + -18420;
	// mr r21,r20
	ctx.r21.u64 = ctx.r20.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f7d488
	ctx.lr = 0x82A6C91C;
	sub_82F7D488(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6c938
	if (cr6.eq) goto loc_82A6C938;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a67128
	ctx.lr = 0x82A6C934;
	sub_82A67128(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
loc_82A6C938:
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// bl 0x830ff290
	ctx.lr = 0x82A6C944;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82A6C948;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bne cr6,0x82a6d194
	if (!cr6.eq) goto loc_82A6D194;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// ori r10,r11,44072
	ctx.r10.u64 = ctx.r11.u64 | 44072;
	// lwzx r7,r29,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a6cb90
	if (cr6.eq) goto loc_82A6CB90;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_82A6C96C:
	// cmplwi cr6,r8,851
	cr6.compare<uint32_t>(ctx.r8.u32, 851, xer);
	// bge cr6,0x82a6cb80
	if (!cr6.lt) goto loc_82A6CB80;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a6cb80
	if (cr6.eq) goto loc_82A6CB80;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r9,32
	ctx.r10.s64 = ctx.r9.s64 + 32;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82A6C988:
	// addic. r11,r10,-24
	xer.ca = ctx.r10.u32 > 23;
	ctx.r11.s64 = ctx.r10.s64 + -24;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82a6ca04
	if (cr0.eq) goto loc_82A6CA04;
	// ld r6,-24(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + -24);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// bne cr6,0x82a6c9b4
	if (!cr6.eq) goto loc_82A6C9B4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// b 0x82a6c9dc
	goto loc_82A6C9DC;
loc_82A6C9B4:
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// bne cr6,0x82a6c9d4
	if (!cr6.eq) goto loc_82A6C9D4;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// beq cr6,0x82a6c9d8
	if (cr6.eq) goto loc_82A6C9D8;
loc_82A6C9D4:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82A6C9D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A6C9DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6ca04
	if (cr6.eq) goto loc_82A6CA04;
	// lwz r11,-16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	// rlwinm r11,r11,27,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1F;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x82a6ca00
	if (cr6.eq) goto loc_82A6CA00;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// bne cr6,0x82a6ca04
	if (!cr6.eq) goto loc_82A6CA04;
loc_82A6CA00:
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
loc_82A6CA04:
	// addic. r11,r10,-8
	xer.ca = ctx.r10.u32 > 7;
	ctx.r11.s64 = ctx.r10.s64 + -8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82a6ca80
	if (cr0.eq) goto loc_82A6CA80;
	// ld r6,-8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + -8);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// bne cr6,0x82a6ca30
	if (!cr6.eq) goto loc_82A6CA30;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// b 0x82a6ca58
	goto loc_82A6CA58;
loc_82A6CA30:
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// bne cr6,0x82a6ca50
	if (!cr6.eq) goto loc_82A6CA50;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// beq cr6,0x82a6ca54
	if (cr6.eq) goto loc_82A6CA54;
loc_82A6CA50:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82A6CA54:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A6CA58:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6ca80
	if (cr6.eq) goto loc_82A6CA80;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,27,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1F;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x82a6ca7c
	if (cr6.eq) goto loc_82A6CA7C;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// bne cr6,0x82a6ca80
	if (!cr6.eq) goto loc_82A6CA80;
loc_82A6CA7C:
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
loc_82A6CA80:
	// addic. r11,r10,8
	xer.ca = ctx.r10.u32 > 4294967287;
	ctx.r11.s64 = ctx.r10.s64 + 8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82a6cafc
	if (cr0.eq) goto loc_82A6CAFC;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// bne cr6,0x82a6caac
	if (!cr6.eq) goto loc_82A6CAAC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// b 0x82a6cad4
	goto loc_82A6CAD4;
loc_82A6CAAC:
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// bne cr6,0x82a6cacc
	if (!cr6.eq) goto loc_82A6CACC;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// beq cr6,0x82a6cad0
	if (cr6.eq) goto loc_82A6CAD0;
loc_82A6CACC:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82A6CAD0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A6CAD4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6cafc
	if (cr6.eq) goto loc_82A6CAFC;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm r11,r11,27,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1F;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x82a6caf8
	if (cr6.eq) goto loc_82A6CAF8;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// bne cr6,0x82a6cafc
	if (!cr6.eq) goto loc_82A6CAFC;
loc_82A6CAF8:
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
loc_82A6CAFC:
	// addic. r11,r10,24
	xer.ca = ctx.r10.u32 > 4294967271;
	ctx.r11.s64 = ctx.r10.s64 + 24;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82a6cb78
	if (cr0.eq) goto loc_82A6CB78;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// bne cr6,0x82a6cb28
	if (!cr6.eq) goto loc_82A6CB28;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// b 0x82a6cb50
	goto loc_82A6CB50;
loc_82A6CB28:
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// bne cr6,0x82a6cb48
	if (!cr6.eq) goto loc_82A6CB48;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// beq cr6,0x82a6cb4c
	if (cr6.eq) goto loc_82A6CB4C;
loc_82A6CB48:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82A6CB4C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A6CB50:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6cb78
	if (cr6.eq) goto loc_82A6CB78;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// rlwinm r11,r11,27,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1F;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x82a6cb74
	if (cr6.eq) goto loc_82A6CB74;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// bne cr6,0x82a6cb78
	if (!cr6.eq) goto loc_82A6CB78;
loc_82A6CB74:
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
loc_82A6CB78:
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// bdnz 0x82a6c988
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A6C988;
loc_82A6CB80:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,280
	ctx.r9.s64 = ctx.r9.s64 + 280;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// blt cr6,0x82a6c96c
	if (cr6.lt) goto loc_82A6C96C;
loc_82A6CB90:
	// lis r5,3
	ctx.r5.s64 = 196608;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lhz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lis r10,3
	ctx.r10.s64 = 196608;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// lis r28,3
	ctx.r28.s64 = 196608;
	// ori r4,r5,45504
	ctx.r4.u64 = ctx.r5.u64 | 45504;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// ori r7,r11,44076
	ctx.r7.u64 = ctx.r11.u64 | 44076;
	// ori r31,r10,44552
	ctx.r31.u64 = ctx.r10.u64 | 44552;
	// ori r3,r9,45028
	ctx.r3.u64 = ctx.r9.u64 | 45028;
	// ori r5,r28,45980
	ctx.r5.u64 = ctx.r28.u64 | 45980;
	// cmplwi cr6,r20,70
	cr6.compare<uint32_t>(ctx.r20.u32, 70, xer);
	// blt cr6,0x82a6cbd4
	if (cr6.lt) goto loc_82A6CBD4;
	// add r9,r29,r7
	ctx.r9.u64 = ctx.r29.u64 + ctx.r7.u64;
	// b 0x82a6cbe0
	goto loc_82A6CBE0;
loc_82A6CBD4:
	// mulli r11,r8,476
	ctx.r11.s64 = ctx.r8.s64 * 476;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
loc_82A6CBE0:
	// ld r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x82a6cc00
	if (!cr6.eq) goto loc_82A6CC00;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82a6cc28
	goto loc_82A6CC28;
loc_82A6CC00:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82a6cc20
	if (!cr6.eq) goto loc_82A6CC20;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// beq cr6,0x82a6cc24
	if (cr6.eq) goto loc_82A6CC24;
loc_82A6CC20:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82A6CC24:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A6CC28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a6cce8
	if (!cr6.eq) goto loc_82A6CCE8;
	// ld r11,72(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 72);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x82a6cc58
	if (!cr6.eq) goto loc_82A6CC58;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82a6cc80
	goto loc_82A6CC80;
loc_82A6CC58:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r28,0(r27)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x82a6cc78
	if (!cr6.eq) goto loc_82A6CC78;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// beq cr6,0x82a6cc7c
	if (cr6.eq) goto loc_82A6CC7C;
loc_82A6CC78:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82A6CC7C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A6CC80:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6cc90
	if (cr6.eq) goto loc_82A6CC90;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
loc_82A6CC90:
	// ld r11,80(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x82a6ccb0
	if (!cr6.eq) goto loc_82A6CCB0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82a6ccd8
	goto loc_82A6CCD8;
loc_82A6CCB0:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82a6ccd0
	if (!cr6.eq) goto loc_82A6CCD0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// beq cr6,0x82a6ccd4
	if (cr6.eq) goto loc_82A6CCD4;
loc_82A6CCD0:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82A6CCD4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A6CCD8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6cce8
	if (cr6.eq) goto loc_82A6CCE8;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
loc_82A6CCE8:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r11,70
	cr6.compare<uint32_t>(ctx.r11.u32, 70, xer);
	// blt cr6,0x82a6ccfc
	if (cr6.lt) goto loc_82A6CCFC;
	// add r9,r29,r7
	ctx.r9.u64 = ctx.r29.u64 + ctx.r7.u64;
	// b 0x82a6cd08
	goto loc_82A6CD08;
loc_82A6CCFC:
	// mulli r11,r8,476
	ctx.r11.s64 = ctx.r8.s64 * 476;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82A6CD08:
	// ld r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x82a6cd28
	if (!cr6.eq) goto loc_82A6CD28;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82a6cd50
	goto loc_82A6CD50;
loc_82A6CD28:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82a6cd48
	if (!cr6.eq) goto loc_82A6CD48;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// beq cr6,0x82a6cd4c
	if (cr6.eq) goto loc_82A6CD4C;
loc_82A6CD48:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82A6CD4C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A6CD50:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a6ce10
	if (!cr6.eq) goto loc_82A6CE10;
	// ld r11,72(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 72);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x82a6cd80
	if (!cr6.eq) goto loc_82A6CD80;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82a6cda8
	goto loc_82A6CDA8;
loc_82A6CD80:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r28,0(r27)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x82a6cda0
	if (!cr6.eq) goto loc_82A6CDA0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// beq cr6,0x82a6cda4
	if (cr6.eq) goto loc_82A6CDA4;
loc_82A6CDA0:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82A6CDA4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A6CDA8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6cdb8
	if (cr6.eq) goto loc_82A6CDB8;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
loc_82A6CDB8:
	// ld r11,80(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x82a6cdd8
	if (!cr6.eq) goto loc_82A6CDD8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82a6ce00
	goto loc_82A6CE00;
loc_82A6CDD8:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82a6cdf8
	if (!cr6.eq) goto loc_82A6CDF8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// beq cr6,0x82a6cdfc
	if (cr6.eq) goto loc_82A6CDFC;
loc_82A6CDF8:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82A6CDFC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A6CE00:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6ce10
	if (cr6.eq) goto loc_82A6CE10;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
loc_82A6CE10:
	// addi r11,r8,2
	ctx.r11.s64 = ctx.r8.s64 + 2;
	// cmplwi cr6,r11,70
	cr6.compare<uint32_t>(ctx.r11.u32, 70, xer);
	// blt cr6,0x82a6ce24
	if (cr6.lt) goto loc_82A6CE24;
	// add r9,r29,r7
	ctx.r9.u64 = ctx.r29.u64 + ctx.r7.u64;
	// b 0x82a6ce30
	goto loc_82A6CE30;
loc_82A6CE24:
	// mulli r11,r8,476
	ctx.r11.s64 = ctx.r8.s64 * 476;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82A6CE30:
	// ld r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x82a6ce50
	if (!cr6.eq) goto loc_82A6CE50;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82a6ce78
	goto loc_82A6CE78;
loc_82A6CE50:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82a6ce70
	if (!cr6.eq) goto loc_82A6CE70;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// beq cr6,0x82a6ce74
	if (cr6.eq) goto loc_82A6CE74;
loc_82A6CE70:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82A6CE74:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A6CE78:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a6cf38
	if (!cr6.eq) goto loc_82A6CF38;
	// ld r11,72(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 72);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x82a6cea8
	if (!cr6.eq) goto loc_82A6CEA8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82a6ced0
	goto loc_82A6CED0;
loc_82A6CEA8:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r28,0(r27)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x82a6cec8
	if (!cr6.eq) goto loc_82A6CEC8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// beq cr6,0x82a6cecc
	if (cr6.eq) goto loc_82A6CECC;
loc_82A6CEC8:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82A6CECC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A6CED0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6cee0
	if (cr6.eq) goto loc_82A6CEE0;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
loc_82A6CEE0:
	// ld r11,80(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x82a6cf00
	if (!cr6.eq) goto loc_82A6CF00;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82a6cf28
	goto loc_82A6CF28;
loc_82A6CF00:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82a6cf20
	if (!cr6.eq) goto loc_82A6CF20;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// beq cr6,0x82a6cf24
	if (cr6.eq) goto loc_82A6CF24;
loc_82A6CF20:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82A6CF24:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A6CF28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6cf38
	if (cr6.eq) goto loc_82A6CF38;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
loc_82A6CF38:
	// addi r11,r8,3
	ctx.r11.s64 = ctx.r8.s64 + 3;
	// cmplwi cr6,r11,70
	cr6.compare<uint32_t>(ctx.r11.u32, 70, xer);
	// blt cr6,0x82a6cf4c
	if (cr6.lt) goto loc_82A6CF4C;
	// add r9,r29,r7
	ctx.r9.u64 = ctx.r29.u64 + ctx.r7.u64;
	// b 0x82a6cf58
	goto loc_82A6CF58;
loc_82A6CF4C:
	// mulli r11,r8,476
	ctx.r11.s64 = ctx.r8.s64 * 476;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_82A6CF58:
	// ld r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x82a6cf78
	if (!cr6.eq) goto loc_82A6CF78;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82a6cfa0
	goto loc_82A6CFA0;
loc_82A6CF78:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82a6cf98
	if (!cr6.eq) goto loc_82A6CF98;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// beq cr6,0x82a6cf9c
	if (cr6.eq) goto loc_82A6CF9C;
loc_82A6CF98:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82A6CF9C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A6CFA0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a6d060
	if (!cr6.eq) goto loc_82A6D060;
	// ld r11,72(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 72);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x82a6cfd0
	if (!cr6.eq) goto loc_82A6CFD0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82a6cff8
	goto loc_82A6CFF8;
loc_82A6CFD0:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r28,0(r27)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x82a6cff0
	if (!cr6.eq) goto loc_82A6CFF0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// beq cr6,0x82a6cff4
	if (cr6.eq) goto loc_82A6CFF4;
loc_82A6CFF0:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82A6CFF4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A6CFF8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6d008
	if (cr6.eq) goto loc_82A6D008;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
loc_82A6D008:
	// ld r11,80(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x82a6d028
	if (!cr6.eq) goto loc_82A6D028;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82a6d050
	goto loc_82A6D050;
loc_82A6D028:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82a6d048
	if (!cr6.eq) goto loc_82A6D048;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// beq cr6,0x82a6d04c
	if (cr6.eq) goto loc_82A6D04C;
loc_82A6D048:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82A6D04C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A6D050:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6d060
	if (cr6.eq) goto loc_82A6D060;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
loc_82A6D060:
	// addi r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r11,70
	cr6.compare<uint32_t>(ctx.r11.u32, 70, xer);
	// blt cr6,0x82a6d074
	if (cr6.lt) goto loc_82A6D074;
	// add r9,r29,r7
	ctx.r9.u64 = ctx.r29.u64 + ctx.r7.u64;
	// b 0x82a6d080
	goto loc_82A6D080;
loc_82A6D074:
	// mulli r11,r8,476
	ctx.r11.s64 = ctx.r8.s64 * 476;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
loc_82A6D080:
	// ld r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x82a6d0a0
	if (!cr6.eq) goto loc_82A6D0A0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82a6d0c8
	goto loc_82A6D0C8;
loc_82A6D0A0:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82a6d0c0
	if (!cr6.eq) goto loc_82A6D0C0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// beq cr6,0x82a6d0c4
	if (cr6.eq) goto loc_82A6D0C4;
loc_82A6D0C0:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82A6D0C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A6D0C8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a6d188
	if (!cr6.eq) goto loc_82A6D188;
	// ld r11,72(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 72);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x82a6d0f8
	if (!cr6.eq) goto loc_82A6D0F8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82a6d120
	goto loc_82A6D120;
loc_82A6D0F8:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r28,0(r27)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x82a6d118
	if (!cr6.eq) goto loc_82A6D118;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// beq cr6,0x82a6d11c
	if (cr6.eq) goto loc_82A6D11C;
loc_82A6D118:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82A6D11C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A6D120:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6d130
	if (cr6.eq) goto loc_82A6D130;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
loc_82A6D130:
	// ld r11,80(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x82a6d150
	if (!cr6.eq) goto loc_82A6D150;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82a6d178
	goto loc_82A6D178;
loc_82A6D150:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82a6d170
	if (!cr6.eq) goto loc_82A6D170;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// beq cr6,0x82a6d174
	if (cr6.eq) goto loc_82A6D174;
loc_82A6D170:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82A6D174:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A6D178:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6d188
	if (cr6.eq) goto loc_82A6D188;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
loc_82A6D188:
	// addi r8,r8,5
	ctx.r8.s64 = ctx.r8.s64 + 5;
	// cmplwi cr6,r8,70
	cr6.compare<uint32_t>(ctx.r8.u32, 70, xer);
	// blt cr6,0x82a6cbd4
	if (cr6.lt) goto loc_82A6CBD4;
loc_82A6D194:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r11,12064
	ctx.r11.s64 = ctx.r11.s64 + 12064;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A6D1B0:
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82a6d1c0
	if (!cr6.eq) goto loc_82A6D1C0;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82A6D1C0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82a6d1d0
	if (!cr6.eq) goto loc_82A6D1D0;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82A6D1D0:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82a6d1e0
	if (!cr6.eq) goto loc_82A6D1E0;
	// lwz r30,16(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
loc_82A6D1E0:
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// bdnz 0x82a6d1b0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A6D1B0;
	// stw r20,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r20.u32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r6,r1,148
	ctx.r6.s64 = ctx.r1.s64 + 148;
	// addi r11,r11,10302
	ctx.r11.s64 = ctx.r11.s64 + 10302;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r5,r11,-138
	ctx.r5.s64 = ctx.r11.s64 + -138;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// addi r3,r1,308
	ctx.r3.s64 = ctx.r1.s64 + 308;
	// bl 0x831178a0
	ctx.lr = 0x82A6D20C;
	sub_831178A0(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// ld r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x82A6D218;
	sub_8311BF98(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// bl 0x8314be30
	ctx.lr = 0x82A6D22C;
	sub_8314BE30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6d24c
	if (cr6.eq) goto loc_82A6D24C;
	// lwz r11,184(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// rlwinm r10,r11,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a6d24c
	if (!cr6.eq) goto loc_82A6D24C;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_82A6D24C:
	// li r5,51
	ctx.r5.s64 = 51;
	// stb r20,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r20.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// bl 0x831cdcf0
	ctx.lr = 0x82A6D260;
	sub_831CDCF0(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8319dc20
	ctx.lr = 0x82A6D268;
	sub_8319DC20(ctx, base);
	// lbz r11,196(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 196);
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6d27c
	if (cr6.eq) goto loc_82A6D27C;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82A6D27C:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// stw r20,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r20.u32);
	// stw r20,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r20.u32);
	// stw r20,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r20.u32);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x82a6d9a8
	if (cr6.gt) goto loc_82A6D9A8;
	// lis r12,-32089
	ctx.r12.s64 = -2102984704;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-11604
	ctx.r12.s64 = ctx.r12.s64 + -11604;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82A6D2D4;
	case 1:
		goto loc_82A6D3C8;
	case 2:
		goto loc_82A6D540;
	case 3:
		goto loc_82A6D748;
	case 4:
		goto loc_82A6D3C0;
	case 5:
		goto loc_82A6D580;
	case 6:
		goto loc_82A6D644;
	case 7:
		goto loc_82A6D2E0;
	case 8:
		goto loc_82A6D344;
	case 9:
		goto loc_82A6D9A0;
	default:
		return;
	}
	// lwz r21,-11564(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -11564);
	// lwz r21,-11320(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -11320);
	// lwz r21,-10944(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -10944);
	// lwz r21,-10424(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -10424);
	// lwz r21,-11328(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -11328);
	// lwz r21,-10880(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -10880);
	// lwz r21,-10684(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -10684);
	// lwz r21,-11552(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -11552);
	// lwz r21,-11452(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -11452);
	// lwz r21,-9824(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -9824);
loc_82A6D2D4:
	// stb r26,143(r1)
	PPC_STORE_U8(ctx.r1.u32 + 143, ctx.r26.u8);
	// stb r26,142(r1)
	PPC_STORE_U8(ctx.r1.u32 + 142, ctx.r26.u8);
	// b 0x82a6d9a8
	goto loc_82A6D9A8;
loc_82A6D2E0:
	// addi r29,r21,156
	ctx.r29.s64 = ctx.r21.s64 + 156;
	// stb r26,146(r1)
	PPC_STORE_U8(ctx.r1.u32 + 146, ctx.r26.u8);
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplwi cr6,r20,3
	cr6.compare<uint32_t>(ctx.r20.u32, 3, xer);
	// blt cr6,0x82a6d300
	if (cr6.lt) goto loc_82A6D300;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x82a6d304
	goto loc_82A6D304;
loc_82A6D300:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82A6D304:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6d330
	if (cr6.eq) goto loc_82A6D330;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// blt cr6,0x82a6d31c
	if (cr6.lt) goto loc_82A6D31C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x82a6d320
	goto loc_82A6D320;
loc_82A6D31C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82A6D320:
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x835977d8
	ctx.lr = 0x82A6D330;
	sub_835977D8(ctx, base);
loc_82A6D330:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// blt cr6,0x82a6d300
	if (cr6.lt) goto loc_82A6D300;
	// b 0x82a6d9a8
	goto loc_82A6D9A8;
loc_82A6D344:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6d354
	if (cr6.eq) goto loc_82A6D354;
	// stb r26,141(r1)
	PPC_STORE_U8(ctx.r1.u32 + 141, ctx.r26.u8);
loc_82A6D354:
	// lwz r11,180(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a6d390
	if (!cr6.eq) goto loc_82A6D390;
	// lwz r11,184(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// rlwinm r10,r11,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a6d390
	if (!cr6.eq) goto loc_82A6D390;
	// lwz r11,20(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r11,r11,4,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// beq cr6,0x82a6d390
	if (cr6.eq) goto loc_82A6D390;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// beq cr6,0x82a6d390
	if (cr6.eq) goto loc_82A6D390;
	// stb r26,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r26.u8);
loc_82A6D390:
	// lwz r11,184(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// rlwinm r10,r11,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a6d9a8
	if (!cr6.eq) goto loc_82A6D9A8;
	// lwz r11,20(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r11,r11,4,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// beq cr6,0x82a6d9a8
	if (cr6.eq) goto loc_82A6D9A8;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// beq cr6,0x82a6d9a8
	if (cr6.eq) goto loc_82A6D9A8;
	// stb r26,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r26.u8);
	// b 0x82a6d9a8
	goto loc_82A6D9A8;
loc_82A6D3C0:
	// stb r26,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r26.u8);
	// b 0x82a6d9a8
	goto loc_82A6D9A8;
loc_82A6D3C8:
	// stb r26,143(r1)
	PPC_STORE_U8(ctx.r1.u32 + 143, ctx.r26.u8);
	// stb r26,142(r1)
	PPC_STORE_U8(ctx.r1.u32 + 142, ctx.r26.u8);
	// bl 0x830ff290
	ctx.lr = 0x82A6D3D4;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82A6D3D8;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bne cr6,0x82a6d9a8
	if (!cr6.eq) goto loc_82A6D9A8;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6d3f0
	if (cr6.eq) goto loc_82A6D3F0;
	// stb r26,141(r1)
	PPC_STORE_U8(ctx.r1.u32 + 141, ctx.r26.u8);
loc_82A6D3F0:
	// ld r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 44);
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// std r11,296(r1)
	PPC_STORE_U64(ctx.r1.u32 + 296, ctx.r11.u64);
	// bl 0x831507d8
	ctx.lr = 0x82A6D400;
	sub_831507D8(ctx, base);
	// lwz r8,180(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// rlwinm r10,r8,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a6d418
	if (cr6.eq) goto loc_82A6D418;
	// stb r26,139(r1)
	PPC_STORE_U8(ctx.r1.u32 + 139, ctx.r26.u8);
	// b 0x82a6d41c
	goto loc_82A6D41C;
loc_82A6D418:
	// stb r26,138(r1)
	PPC_STORE_U8(ctx.r1.u32 + 138, ctx.r26.u8);
loc_82A6D41C:
	// rlwinm r9,r8,4,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xF;
	// cmplwi cr6,r9,6
	cr6.compare<uint32_t>(ctx.r9.u32, 6, xer);
	// bne cr6,0x82a6d430
	if (!cr6.eq) goto loc_82A6D430;
	// stb r20,139(r1)
	PPC_STORE_U8(ctx.r1.u32 + 139, ctx.r20.u8);
	// stb r20,138(r1)
	PPC_STORE_U8(ctx.r1.u32 + 138, ctx.r20.u8);
loc_82A6D430:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x82a6d464
	if (cr6.eq) goto loc_82A6D464;
	// lwz r10,20(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r7,r10,0,0,3
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0000000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a6d450
	if (cr6.eq) goto loc_82A6D450;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82A6D450:
	// lwz r10,116(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 116);
	// rlwinm r7,r10,0,0,4
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF8000000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a6d464
	if (cr6.eq) goto loc_82A6D464;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82A6D464:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a6d51c
	if (!cr6.eq) goto loc_82A6D51C;
	// lwz r11,184(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// rlwinm r10,r11,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a6d51c
	if (!cr6.eq) goto loc_82A6D51C;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a6d51c
	if (!cr6.eq) goto loc_82A6D51C;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82a6d4ac
	if (!cr6.eq) goto loc_82A6D4AC;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82a6d4ac
	if (cr6.eq) goto loc_82A6D4AC;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82a6d4b4
	if (!cr6.eq) goto loc_82A6D4B4;
loc_82A6D4AC:
	// cmplwi cr6,r9,6
	cr6.compare<uint32_t>(ctx.r9.u32, 6, xer);
	// bne cr6,0x82a6d4c8
	if (!cr6.eq) goto loc_82A6D4C8;
loc_82A6D4B4:
	// rlwinm r11,r8,0,4,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a6d4c8
	if (!cr6.eq) goto loc_82A6D4C8;
	// stb r26,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r26.u8);
	// b 0x82a6d51c
	goto loc_82A6D51C;
loc_82A6D4C8:
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// beq cr6,0x82a6d4d8
	if (cr6.eq) goto loc_82A6D4D8;
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// bne cr6,0x82a6d4e4
	if (!cr6.eq) goto loc_82A6D4E4;
loc_82A6D4D8:
	// rlwinm r11,r8,0,4,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6d518
	if (cr6.eq) goto loc_82A6D518;
loc_82A6D4E4:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a6d51c
	if (!cr6.eq) goto loc_82A6D51C;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a6d51c
	if (!cr6.eq) goto loc_82A6D51C;
	// rlwinm r11,r8,0,4,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a6d51c
	if (!cr6.eq) goto loc_82A6D51C;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a6d51c
	if (!cr6.eq) goto loc_82A6D51C;
	// stb r26,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r26.u8);
	// stb r26,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r26.u8);
loc_82A6D518:
	// stb r26,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r26.u8);
loc_82A6D51C:
	// addis r3,r23,209
	ctx.r3.s64 = ctx.r23.s64 + 13697024;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r3,-3756
	ctx.r3.s64 = ctx.r3.s64 + -3756;
	// bl 0x82a67010
	ctx.lr = 0x82A6D52C;
	sub_82A67010(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6d9a8
	if (cr6.eq) goto loc_82A6D9A8;
	// stb r26,137(r1)
	PPC_STORE_U8(ctx.r1.u32 + 137, ctx.r26.u8);
	// b 0x82a6d9a8
	goto loc_82A6D9A8;
loc_82A6D540:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6d550
	if (cr6.eq) goto loc_82A6D550;
	// stb r26,141(r1)
	PPC_STORE_U8(ctx.r1.u32 + 141, ctx.r26.u8);
loc_82A6D550:
	// lwz r11,180(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// stb r26,143(r1)
	PPC_STORE_U8(ctx.r1.u32 + 143, ctx.r26.u8);
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// stb r26,142(r1)
	PPC_STORE_U8(ctx.r1.u32 + 142, ctx.r26.u8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a6d574
	if (cr6.eq) goto loc_82A6D574;
	// stb r26,139(r1)
	PPC_STORE_U8(ctx.r1.u32 + 139, ctx.r26.u8);
	// stb r26,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r26.u8);
	// b 0x82a6d9a8
	goto loc_82A6D9A8;
loc_82A6D574:
	// stb r26,138(r1)
	PPC_STORE_U8(ctx.r1.u32 + 138, ctx.r26.u8);
	// stb r26,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r26.u8);
	// b 0x82a6d9a8
	goto loc_82A6D9A8;
loc_82A6D580:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x82a6d9a8
	if (cr6.eq) goto loc_82A6D9A8;
	// lwz r10,116(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 116);
	// lis r9,20480
	ctx.r9.s64 = 1342177280;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// rlwinm r8,r10,0,0,4
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF8000000;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82a6d5a4
	if (!cr6.eq) goto loc_82A6D5A4;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82A6D5A4:
	// lwz r10,20(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r10,r10,4,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xF;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// bne cr6,0x82a6d5cc
	if (!cr6.eq) goto loc_82A6D5CC;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// stb r26,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r26.u8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a6d5c8
	if (!cr6.eq) goto loc_82A6D5C8;
	// stb r26,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r26.u8);
loc_82A6D5C8:
	// stb r26,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, ctx.r26.u8);
loc_82A6D5CC:
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bne cr6,0x82a6d5f4
	if (!cr6.eq) goto loc_82A6D5F4;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a6d5f0
	if (!cr6.eq) goto loc_82A6D5F0;
	// lbz r11,110(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 110);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a6d5f0
	if (!cr6.eq) goto loc_82A6D5F0;
	// stb r26,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r26.u8);
loc_82A6D5F0:
	// stb r26,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, ctx.r26.u8);
loc_82A6D5F4:
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// beq cr6,0x82a6d73c
	if (cr6.eq) goto loc_82A6D73C;
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// beq cr6,0x82a6d734
	if (cr6.eq) goto loc_82A6D734;
	// cmplwi cr6,r10,9
	cr6.compare<uint32_t>(ctx.r10.u32, 9, xer);
	// beq cr6,0x82a6d734
	if (cr6.eq) goto loc_82A6D734;
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// beq cr6,0x82a6d734
	if (cr6.eq) goto loc_82A6D734;
	// cmplwi cr6,r10,13
	cr6.compare<uint32_t>(ctx.r10.u32, 13, xer);
	// bne cr6,0x82a6d9a8
	if (!cr6.eq) goto loc_82A6D9A8;
	// lbz r11,111(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 111);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6d734
	if (cr6.eq) goto loc_82A6D734;
	// cmplwi cr6,r10,13
	cr6.compare<uint32_t>(ctx.r10.u32, 13, xer);
	// bne cr6,0x82a6d9a8
	if (!cr6.eq) goto loc_82A6D9A8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a6d9a8
	if (!cr6.eq) goto loc_82A6D9A8;
	// stb r26,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r26.u8);
	// b 0x82a6d9a8
	goto loc_82A6D9A8;
loc_82A6D644:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x82a6d9a8
	if (cr6.eq) goto loc_82A6D9A8;
	// lwz r11,116(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 116);
	// rlwinm r11,r11,5,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1F;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bne cr6,0x82a6d668
	if (!cr6.eq) goto loc_82A6D668;
	// stb r26,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r26.u8);
	// stb r26,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r26.u8);
	// b 0x82a6d700
	goto loc_82A6D700;
loc_82A6D668:
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// beq cr6,0x82a6d6fc
	if (cr6.eq) goto loc_82A6D6FC;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// beq cr6,0x82a6d700
	if (cr6.eq) goto loc_82A6D700;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// beq cr6,0x82a6d700
	if (cr6.eq) goto loc_82A6D700;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a6d690
	if (!cr6.eq) goto loc_82A6D690;
	// stb r26,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r26.u8);
	// b 0x82a6d700
	goto loc_82A6D700;
loc_82A6D690:
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bne cr6,0x82a6d6a0
	if (!cr6.eq) goto loc_82A6D6A0;
	// stb r26,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r26.u8);
	// b 0x82a6d700
	goto loc_82A6D700;
loc_82A6D6A0:
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bne cr6,0x82a6d6b4
	if (!cr6.eq) goto loc_82A6D6B4;
	// stb r26,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r26.u8);
	// stb r26,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r26.u8);
	// b 0x82a6d700
	goto loc_82A6D700;
loc_82A6D6B4:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82a6d6cc
	if (!cr6.eq) goto loc_82A6D6CC;
	// stb r26,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r26.u8);
	// stb r26,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r26.u8);
	// stb r26,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r26.u8);
	// b 0x82a6d700
	goto loc_82A6D700;
loc_82A6D6CC:
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// beq cr6,0x82a6d700
	if (cr6.eq) goto loc_82A6D700;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// beq cr6,0x82a6d700
	if (cr6.eq) goto loc_82A6D700;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82a6d6f4
	if (!cr6.eq) goto loc_82A6D6F4;
	// stb r26,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r26.u8);
	// stb r26,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r26.u8);
	// stb r26,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r26.u8);
	// b 0x82a6d700
	goto loc_82A6D700;
loc_82A6D6F4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a6d700
	if (!cr6.eq) goto loc_82A6D700;
loc_82A6D6FC:
	// stb r26,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r26.u8);
loc_82A6D700:
	// lwz r11,20(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20);
	// lis r9,512
	ctx.r9.s64 = 33554432;
	// rlwinm r10,r11,4,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// cmplwi cr6,r10,9
	cr6.compare<uint32_t>(ctx.r10.u32, 9, xer);
	// bne cr6,0x82a6d720
	if (!cr6.eq) goto loc_82A6D720;
	// rlwinm r8,r11,0,4,7
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82a6d734
	if (!cr6.eq) goto loc_82A6D734;
loc_82A6D720:
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// bne cr6,0x82a6d9a8
	if (!cr6.eq) goto loc_82A6D9A8;
	// rlwinm r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82a6d9a8
	if (cr6.eq) goto loc_82A6D9A8;
loc_82A6D734:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82f73d60
	ctx.lr = 0x82A6D73C;
	sub_82F73D60(ctx, base);
loc_82A6D73C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82A6D748:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bne cr6,0x82a6d7f8
	if (!cr6.eq) goto loc_82A6D7F8;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x82a6d9a8
	if (cr6.eq) goto loc_82A6D9A8;
	// lwz r11,184(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// rlwinm r10,r11,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// lwz r11,20(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a6d7a4
	if (!cr6.eq) goto loc_82A6D7A4;
	// rlwinm r11,r11,4,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// stb r26,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r26.u8);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// beq cr6,0x82a6d788
	if (cr6.eq) goto loc_82A6D788;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bne cr6,0x82a6d78c
	if (!cr6.eq) goto loc_82A6D78C;
loc_82A6D788:
	// stb r20,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r20.u8);
loc_82A6D78C:
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// beq cr6,0x82a6d7c0
	if (cr6.eq) goto loc_82A6D7C0;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// beq cr6,0x82a6d7c0
	if (cr6.eq) goto loc_82A6D7C0;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// b 0x82a6d7b0
	goto loc_82A6D7B0;
loc_82A6D7A4:
	// lis r10,-12288
	ctx.r10.s64 = -805306368;
	// rlwinm r9,r11,0,0,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
loc_82A6D7B0:
	// bne cr6,0x82a6d7c4
	if (!cr6.eq) goto loc_82A6D7C4;
	// lbz r11,111(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 111);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a6d7c4
	if (!cr6.eq) goto loc_82A6D7C4;
loc_82A6D7C0:
	// stb r26,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r26.u8);
loc_82A6D7C4:
	// lwz r11,116(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 116);
	// rlwinm r11,r11,5,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1F;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// beq cr6,0x82a6d7f0
	if (cr6.eq) goto loc_82A6D7F0;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// beq cr6,0x82a6d7f0
	if (cr6.eq) goto loc_82A6D7F0;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// beq cr6,0x82a6d7f0
	if (cr6.eq) goto loc_82A6D7F0;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// beq cr6,0x82a6d7f0
	if (cr6.eq) goto loc_82A6D7F0;
	// stb r26,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r26.u8);
loc_82A6D7F0:
	// stb r26,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r26.u8);
	// b 0x82a6d9a8
	goto loc_82A6D9A8;
loc_82A6D7F8:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x82a6d9a8
	if (cr6.eq) goto loc_82A6D9A8;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6d810
	if (cr6.eq) goto loc_82A6D810;
	// stb r26,141(r1)
	PPC_STORE_U8(ctx.r1.u32 + 141, ctx.r26.u8);
loc_82A6D810:
	// lwz r11,184(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// rlwinm r10,r11,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a6d8c8
	if (!cr6.eq) goto loc_82A6D8C8;
	// lwz r11,180(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// rlwinm r11,r11,4,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x82a6d838
	if (cr6.eq) goto loc_82A6D838;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bne cr6,0x82a6d83c
	if (!cr6.eq) goto loc_82A6D83C;
loc_82A6D838:
	// stb r26,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r26.u8);
loc_82A6D83C:
	// lwz r11,20(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r11,r11,4,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82a6d850
	if (!cr6.eq) goto loc_82A6D850;
	// stb r26,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, ctx.r26.u8);
loc_82A6D850:
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bne cr6,0x82a6d864
	if (!cr6.eq) goto loc_82A6D864;
	// stb r26,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r26.u8);
	// stb r26,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r26.u8);
	// stb r26,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, ctx.r26.u8);
loc_82A6D864:
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82a6d874
	if (!cr6.eq) goto loc_82A6D874;
	// stb r26,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r26.u8);
	// stb r26,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, ctx.r26.u8);
loc_82A6D874:
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bne cr6,0x82a6d880
	if (!cr6.eq) goto loc_82A6D880;
	// stb r26,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, ctx.r26.u8);
loc_82A6D880:
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bne cr6,0x82a6d89c
	if (!cr6.eq) goto loc_82A6D89C;
	// lwz r10,472(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 472);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a6d734
	if (!cr6.eq) goto loc_82A6D734;
	// stb r26,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r26.u8);
loc_82A6D89C:
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// beq cr6,0x82a6d734
	if (cr6.eq) goto loc_82A6D734;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// beq cr6,0x82a6d734
	if (cr6.eq) goto loc_82A6D734;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bne cr6,0x82a6d9a8
	if (!cr6.eq) goto loc_82A6D9A8;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82f73d60
	ctx.lr = 0x82A6D8BC;
	sub_82F73D60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82A6D8C8:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a6d9a8
	if (!cr6.eq) goto loc_82A6D9A8;
	// lwz r10,48(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 48);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82a6d96c
	if (!cr6.eq) goto loc_82A6D96C;
	// lwz r11,20(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r11,r11,4,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82a6d8f8
	if (!cr6.eq) goto loc_82A6D8F8;
	// stb r26,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, ctx.r26.u8);
	// b 0x82a6d9a8
	goto loc_82A6D9A8;
loc_82A6D8F8:
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bne cr6,0x82a6d910
	if (!cr6.eq) goto loc_82A6D910;
	// stb r26,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r26.u8);
	// stb r26,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r26.u8);
	// stb r26,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, ctx.r26.u8);
	// b 0x82a6d9a8
	goto loc_82A6D9A8;
loc_82A6D910:
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82a6d924
	if (!cr6.eq) goto loc_82A6D924;
	// stb r26,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r26.u8);
	// stb r26,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, ctx.r26.u8);
	// b 0x82a6d9a8
	goto loc_82A6D9A8;
loc_82A6D924:
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bne cr6,0x82a6d934
	if (!cr6.eq) goto loc_82A6D934;
	// stb r26,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, ctx.r26.u8);
	// b 0x82a6d9a8
	goto loc_82A6D9A8;
loc_82A6D934:
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// beq cr6,0x82a6d734
	if (cr6.eq) goto loc_82A6D734;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// beq cr6,0x82a6d734
	if (cr6.eq) goto loc_82A6D734;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bne cr6,0x82a6d964
	if (!cr6.eq) goto loc_82A6D964;
	// lwz r11,472(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 472);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a6d734
	if (!cr6.eq) goto loc_82A6D734;
	// stb r26,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r26.u8);
	// b 0x82a6d9a8
	goto loc_82A6D9A8;
loc_82A6D964:
	// stb r26,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r26.u8);
	// b 0x82a6d9a8
	goto loc_82A6D9A8;
loc_82A6D96C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a6d9a8
	if (!cr6.eq) goto loc_82A6D9A8;
	// lwz r11,48(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 48);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82a6d9a8
	if (!cr6.gt) goto loc_82A6D9A8;
	// lwz r11,20(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r11,r11,4,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// beq cr6,0x82a6d734
	if (cr6.eq) goto loc_82A6D734;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// beq cr6,0x82a6d734
	if (cr6.eq) goto loc_82A6D734;
	// stb r26,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r26.u8);
	// b 0x82a6d9a8
	goto loc_82A6D9A8;
loc_82A6D9A0:
	// bl 0x830ff290
	ctx.lr = 0x82A6D9A4;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82A6D9A8;
	sub_830FFAA8(ctx, base);
loc_82A6D9A8:
	// lis r30,29
	ctx.r30.s64 = 1900544;
	// lis r29,29
	ctx.r29.s64 = 1900544;
	// lis r28,29
	ctx.r28.s64 = 1900544;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// lis r27,26
	ctx.r27.s64 = 1703936;
	// stw r29,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r29.u32);
	// stw r28,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r28.u32);
	// lis r10,550
	ctx.r10.s64 = 36044800;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// lis r9,550
	ctx.r9.s64 = 36044800;
	// lis r8,550
	ctx.r8.s64 = 36044800;
	// lis r7,29
	ctx.r7.s64 = 1900544;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// lis r23,29
	ctx.r23.s64 = 1900544;
	// lis r22,273
	ctx.r22.s64 = 17891328;
	// lis r21,29
	ctx.r21.s64 = 1900544;
	// lis r20,25
	ctx.r20.s64 = 1638400;
	// ori r24,r10,15
	ctx.r24.u64 = ctx.r10.u64 | 15;
	// ori r25,r9,45
	ctx.r25.u64 = ctx.r9.u64 | 45;
	// ori r26,r8,14
	ctx.r26.u64 = ctx.r8.u64 | 14;
	// ori r28,r7,566
	ctx.r28.u64 = ctx.r7.u64 | 566;
	// lis r6,29
	ctx.r6.s64 = 1900544;
	// lis r5,29
	ctx.r5.s64 = 1900544;
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// lis r3,29
	ctx.r3.s64 = 1900544;
	// ori r16,r23,702
	ctx.r16.u64 = ctx.r23.u64 | 702;
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// ori r17,r22,195
	ctx.r17.u64 = ctx.r22.u64 | 195;
	// lwz r9,236(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// ori r18,r21,518
	ctx.r18.u64 = ctx.r21.u64 | 518;
	// lwz r8,232(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// ori r19,r20,255
	ctx.r19.u64 = ctx.r20.u64 | 255;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r27,15
	ctx.r27.s64 = 15;
	// ori r29,r6,109
	ctx.r29.u64 = ctx.r6.u64 | 109;
	// ori r30,r5,706
	ctx.r30.u64 = ctx.r5.u64 | 706;
	// ori r14,r4,703
	ctx.r14.u64 = ctx.r4.u64 | 703;
	// ori r15,r3,700
	ctx.r15.u64 = ctx.r3.u64 | 700;
	// ori r20,r10,179
	ctx.r20.u64 = ctx.r10.u64 | 179;
	// ori r21,r9,708
	ctx.r21.u64 = ctx.r9.u64 | 708;
	// ori r22,r8,233
	ctx.r22.u64 = ctx.r8.u64 | 233;
	// ori r23,r7,614
	ctx.r23.u64 = ctx.r7.u64 | 614;
loc_82A6DA54:
	// lbzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6dd14
	if (cr6.eq) goto loc_82A6DD14;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r27,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// stb r11,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r11.u8);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x8259cc28
	ctx.lr = 0x82A6DA8C;
	sub_8259CC28(ctx, base);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// cmplwi cr6,r11,46
	cr6.compare<uint32_t>(ctx.r11.u32, 46, xer);
	// bgt cr6,0x82a6dce4
	if (cr6.gt) goto loc_82A6DCE4;
	// lis r12,-32089
	ctx.r12.s64 = -2102984704;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-9548
	ctx.r12.s64 = ctx.r12.s64 + -9548;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82A6DBE8;
	case 1:
		goto loc_82A6DBF8;
	case 2:
		goto loc_82A6DC08;
	case 3:
		goto loc_82A6DC48;
	case 4:
		goto loc_82A6DC18;
	case 5:
		goto loc_82A6DC18;
	case 6:
		goto loc_82A6DC30;
	case 7:
		goto loc_82A6DC30;
	case 8:
		goto loc_82A6DC70;
	case 9:
		goto loc_82A6DC88;
	case 10:
		goto loc_82A6DC20;
	case 11:
		goto loc_82A6DC50;
	case 12:
		goto loc_82A6DC60;
	case 13:
		goto loc_82A6DBE0;
	case 14:
		goto loc_82A6DBE0;
	case 15:
		goto loc_82A6DC78;
	case 16:
		goto loc_82A6DC48;
	case 17:
		goto loc_82A6DCE4;
	case 18:
		goto loc_82A6DC98;
	case 19:
		goto loc_82A6DCA0;
	case 20:
		goto loc_82A6DCE4;
	case 21:
		goto loc_82A6DCA8;
	case 22:
		goto loc_82A6DC38;
	case 23:
		goto loc_82A6DCE4;
	case 24:
		goto loc_82A6DCE4;
	case 25:
		goto loc_82A6DCE4;
	case 26:
		goto loc_82A6DCE4;
	case 27:
		goto loc_82A6DCE4;
	case 28:
		goto loc_82A6DCE4;
	case 29:
		goto loc_82A6DCE4;
	case 30:
		goto loc_82A6DCE4;
	case 31:
		goto loc_82A6DCE4;
	case 32:
		goto loc_82A6DCE4;
	case 33:
		goto loc_82A6DBA0;
	case 34:
		goto loc_82A6DBB0;
	case 35:
		goto loc_82A6DBC0;
	case 36:
		goto loc_82A6DBD0;
	case 37:
		goto loc_82A6DC80;
	case 38:
		goto loc_82A6DB90;
	case 39:
		goto loc_82A6DB98;
	case 40:
		goto loc_82A6DC90;
	case 41:
		goto loc_82A6DCB8;
	case 42:
		goto loc_82A6DB70;
	case 43:
		goto loc_82A6DB80;
	case 44:
		goto loc_82A6DB90;
	case 45:
		goto loc_82A6DB98;
	case 46:
		goto loc_82A6DCB0;
	default:
		return;
	}
	// lwz r21,-9240(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -9240);
	// lwz r21,-9224(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -9224);
	// lwz r21,-9208(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -9208);
	// lwz r21,-9144(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -9144);
	// lwz r21,-9192(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -9192);
	// lwz r21,-9192(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -9192);
	// lwz r21,-9168(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -9168);
	// lwz r21,-9168(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -9168);
	// lwz r21,-9104(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -9104);
	// lwz r21,-9080(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -9080);
	// lwz r21,-9184(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -9184);
	// lwz r21,-9136(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -9136);
	// lwz r21,-9120(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -9120);
	// lwz r21,-9248(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -9248);
	// lwz r21,-9248(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -9248);
	// lwz r21,-9096(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -9096);
	// lwz r21,-9144(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -9144);
	// lwz r21,-8988(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -8988);
	// lwz r21,-9064(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -9064);
	// lwz r21,-9056(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -9056);
	// lwz r21,-8988(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -8988);
	// lwz r21,-9048(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -9048);
	// lwz r21,-9160(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -9160);
	// lwz r21,-8988(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -8988);
	// lwz r21,-8988(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -8988);
	// lwz r21,-8988(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -8988);
	// lwz r21,-8988(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -8988);
	// lwz r21,-8988(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -8988);
	// lwz r21,-8988(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -8988);
	// lwz r21,-8988(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -8988);
	// lwz r21,-8988(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -8988);
	// lwz r21,-8988(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -8988);
	// lwz r21,-8988(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -8988);
	// lwz r21,-9312(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -9312);
	// lwz r21,-9296(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -9296);
	// lwz r21,-9280(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -9280);
	// lwz r21,-9264(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -9264);
	// lwz r21,-9088(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -9088);
	// lwz r21,-9328(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -9328);
	// lwz r21,-9320(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -9320);
	// lwz r21,-9072(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -9072);
	// lwz r21,-9032(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -9032);
	// lwz r21,-9360(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -9360);
	// lwz r21,-9344(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -9344);
	// lwz r21,-9328(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -9328);
	// lwz r21,-9320(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -9320);
	// lwz r21,-9040(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + -9040);
loc_82A6DB70:
	// lis r11,29
	ctx.r11.s64 = 1900544;
	// ori r10,r11,155
	ctx.r10.u64 = ctx.r11.u64 | 155;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// b 0x82a6dcbc
	goto loc_82A6DCBC;
loc_82A6DB80:
	// lis r11,29
	ctx.r11.s64 = 1900544;
	// ori r10,r11,227
	ctx.r10.u64 = ctx.r11.u64 | 227;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// b 0x82a6dcbc
	goto loc_82A6DCBC;
loc_82A6DB90:
	// stw r24,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r24.u32);
	// b 0x82a6dcbc
	goto loc_82A6DCBC;
loc_82A6DB98:
	// stw r25,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r25.u32);
	// b 0x82a6dcbc
	goto loc_82A6DCBC;
loc_82A6DBA0:
	// lis r11,29
	ctx.r11.s64 = 1900544;
	// ori r10,r11,250
	ctx.r10.u64 = ctx.r11.u64 | 250;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// b 0x82a6dcbc
	goto loc_82A6DCBC;
loc_82A6DBB0:
	// lis r11,29
	ctx.r11.s64 = 1900544;
	// ori r10,r11,251
	ctx.r10.u64 = ctx.r11.u64 | 251;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// b 0x82a6dcbc
	goto loc_82A6DCBC;
loc_82A6DBC0:
	// lis r11,29
	ctx.r11.s64 = 1900544;
	// ori r10,r11,247
	ctx.r10.u64 = ctx.r11.u64 | 247;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// b 0x82a6dcbc
	goto loc_82A6DCBC;
loc_82A6DBD0:
	// lis r11,29
	ctx.r11.s64 = 1900544;
	// ori r10,r11,248
	ctx.r10.u64 = ctx.r11.u64 | 248;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// b 0x82a6dcbc
	goto loc_82A6DCBC;
loc_82A6DBE0:
	// stw r26,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r26.u32);
	// b 0x82a6dcbc
	goto loc_82A6DCBC;
loc_82A6DBE8:
	// lis r11,29
	ctx.r11.s64 = 1900544;
	// ori r10,r11,39
	ctx.r10.u64 = ctx.r11.u64 | 39;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// b 0x82a6dcbc
	goto loc_82A6DCBC;
loc_82A6DBF8:
	// lis r11,29
	ctx.r11.s64 = 1900544;
	// ori r10,r11,714
	ctx.r10.u64 = ctx.r11.u64 | 714;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// b 0x82a6dcbc
	goto loc_82A6DCBC;
loc_82A6DC08:
	// lis r11,29
	ctx.r11.s64 = 1900544;
	// ori r10,r11,715
	ctx.r10.u64 = ctx.r11.u64 | 715;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// b 0x82a6dcbc
	goto loc_82A6DCBC;
loc_82A6DC18:
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// b 0x82a6dcbc
	goto loc_82A6DCBC;
loc_82A6DC20:
	// lis r11,29
	ctx.r11.s64 = 1900544;
	// ori r10,r11,37
	ctx.r10.u64 = ctx.r11.u64 | 37;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// b 0x82a6dcbc
	goto loc_82A6DCBC;
loc_82A6DC30:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// b 0x82a6dcbc
	goto loc_82A6DCBC;
loc_82A6DC38:
	// lis r11,29
	ctx.r11.s64 = 1900544;
	// ori r10,r11,56
	ctx.r10.u64 = ctx.r11.u64 | 56;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// b 0x82a6dcbc
	goto loc_82A6DCBC;
loc_82A6DC48:
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// b 0x82a6dcbc
	goto loc_82A6DCBC;
loc_82A6DC50:
	// lis r11,29
	ctx.r11.s64 = 1900544;
	// ori r10,r11,209
	ctx.r10.u64 = ctx.r11.u64 | 209;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// b 0x82a6dcbc
	goto loc_82A6DCBC;
loc_82A6DC60:
	// lis r11,29
	ctx.r11.s64 = 1900544;
	// ori r10,r11,308
	ctx.r10.u64 = ctx.r11.u64 | 308;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// b 0x82a6dcbc
	goto loc_82A6DCBC;
loc_82A6DC70:
	// stw r14,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r14.u32);
	// b 0x82a6dcbc
	goto loc_82A6DCBC;
loc_82A6DC78:
	// stw r15,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r15.u32);
	// b 0x82a6dcbc
	goto loc_82A6DCBC;
loc_82A6DC80:
	// stw r16,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r16.u32);
	// b 0x82a6dcbc
	goto loc_82A6DCBC;
loc_82A6DC88:
	// stw r17,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r17.u32);
	// b 0x82a6dcbc
	goto loc_82A6DCBC;
loc_82A6DC90:
	// stw r18,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r18.u32);
	// b 0x82a6dcbc
	goto loc_82A6DCBC;
loc_82A6DC98:
	// stw r19,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r19.u32);
	// b 0x82a6dcbc
	goto loc_82A6DCBC;
loc_82A6DCA0:
	// stw r20,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r20.u32);
	// b 0x82a6dcbc
	goto loc_82A6DCBC;
loc_82A6DCA8:
	// stw r21,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r21.u32);
	// b 0x82a6dcbc
	goto loc_82A6DCBC;
loc_82A6DCB0:
	// stw r22,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r22.u32);
	// b 0x82a6dcbc
	goto loc_82A6DCBC;
loc_82A6DCB8:
	// stw r23,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r23.u32);
loc_82A6DCBC:
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r3,492(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 492);
	// bl 0x82af0e88
	ctx.lr = 0x82A6DCC8;
	sub_82AF0E88(ctx, base);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a6dd04
	if (cr6.lt) goto loc_82A6DD04;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,244
	ctx.r3.s64 = ctx.r1.s64 + 244;
	// stw r11,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// b 0x82a6dcfc
	goto loc_82A6DCFC;
loc_82A6DCE4:
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a6dd04
	if (cr6.lt) goto loc_82A6DD04;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// stw r11,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r11.u32);
loc_82A6DCFC:
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x825952b8
	ctx.lr = 0x82A6DD04;
	sub_825952B8(ctx, base);
loc_82A6DD04:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r27,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r27.u32);
	// stb r11,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r11.u8);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
loc_82A6DD14:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r31,52
	cr6.compare<uint32_t>(ctx.r31.u32, 52, xer);
	// blt cr6,0x82a6da54
	if (cr6.lt) goto loc_82A6DA54;
	// lwz r29,208(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// beq cr6,0x82a6ddd8
	if (cr6.eq) goto loc_82A6DDD8;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// li r31,0
	ctx.r31.s64 = 0;
	// srawi r30,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82a6ddd8
	if (cr6.eq) goto loc_82A6DDD8;
	// lwz r24,492(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 492);
	// li r28,51
	ctx.r28.s64 = 51;
	// lwz r25,224(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r23,2
	ctx.r23.s64 = 2;
loc_82A6DD5C:
	// stw r27,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r27.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r26,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r26.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r26,264(r1)
	PPC_STORE_U8(ctx.r1.u32 + 264, ctx.r26.u8);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// stw r26,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r26.u32);
	// stw r28,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r28.u32);
	// bl 0x8259cc28
	ctx.lr = 0x82A6DD80;
	sub_8259CC28(ctx, base);
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, xer);
	// ble cr6,0x82a6de00
	if (!cr6.gt) goto loc_82A6DE00;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r11,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// bl 0x82af0e88
	ctx.lr = 0x82A6DD9C;
	sub_82AF0E88(ctx, base);
	// lwz r10,284(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82a6ddb8
	if (cr6.lt) goto loc_82A6DDB8;
	// stw r23,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r23.u32);
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// lwz r4,264(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// bl 0x825952b8
	ctx.lr = 0x82A6DDB8;
	sub_825952B8(ctx, base);
loc_82A6DDB8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r27,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r27.u32);
	// stw r26,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r26.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stb r26,264(r1)
	PPC_STORE_U8(ctx.r1.u32 + 264, ctx.r26.u8);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// blt cr6,0x82a6dd5c
	if (cr6.lt) goto loc_82A6DD5C;
	// lwz r29,208(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
loc_82A6DDD8:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82a6ddf4
	if (cr6.eq) goto loc_82A6DDF4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82A6DDF4;
	sub_825952B8(ctx, base);
loc_82A6DDF4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82A6DE00:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82A6DE0C;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82A6DE0C"))) PPC_WEAK_FUNC(sub_82A6DE0C);
PPC_FUNC_IMPL(__imp__sub_82A6DE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6DE10"))) PPC_WEAK_FUNC(sub_82A6DE10);
PPC_FUNC_IMPL(__imp__sub_82A6DE10) {
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
	// addi r9,r11,12632
	ctx.r9.s64 = ctx.r11.s64 + 12632;
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
	ctx.lr = 0x82A6DE48;
	sub_82D2FA18(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a6de60
	if (cr6.eq) goto loc_82A6DE60;
	// bl 0x82416268
	ctx.lr = 0x82A6DE5C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A6DE60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6DE78"))) PPC_WEAK_FUNC(sub_82A6DE78);
PPC_FUNC_IMPL(__imp__sub_82A6DE78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A6DE80;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d273d8
	ctx.lr = 0x82A6DE8C;
	sub_82D273D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a6deb4
	if (cr6.eq) goto loc_82A6DEB4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d27500
	ctx.lr = 0x82A6DE9C;
	sub_82D27500(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a6deb4
	if (!cr6.eq) goto loc_82A6DEB4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A6DEB4:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82A6DEBC:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8353b168
	ctx.lr = 0x82A6DEC8;
	sub_8353B168(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a6df18
	if (cr6.eq) goto loc_82A6DF18;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A6DEE8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a6df38
	if (!cr6.eq) goto loc_82A6DF38;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A6DF0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a6df38
	if (!cr6.eq) goto loc_82A6DF38;
loc_82A6DF18:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, xer);
	// blt cr6,0x82a6debc
	if (cr6.lt) goto loc_82A6DEBC;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A6DF38:
	// li r29,1
	ctx.r29.s64 = 1;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6DF50"))) PPC_WEAK_FUNC(sub_82A6DF50);
PPC_FUNC_IMPL(__imp__sub_82A6DF50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A6DF58;
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
	// li r4,584
	ctx.r4.s64 = 584;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A6DF7C;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a6dfc0
	if (cr6.eq) goto loc_82A6DFC0;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d2f988
	ctx.lr = 0x82A6DF9C;
	sub_82D2F988(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,12632
	ctx.r9.s64 = ctx.r11.s64 + 12632;
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
loc_82A6DFC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6DFCC"))) PPC_WEAK_FUNC(sub_82A6DFCC);
PPC_FUNC_IMPL(__imp__sub_82A6DFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6DFD0"))) PPC_WEAK_FUNC(sub_82A6DFD0);
PPC_FUNC_IMPL(__imp__sub_82A6DFD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A6DFD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,13200
	ctx.r29.s64 = ctx.r11.s64 + 13200;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x82A6E000;
	sub_82D2F6D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a6e058
	if (cr6.eq) goto loc_82A6E058;
	// lis r4,230
	ctx.r4.s64 = 15073280;
	// ori r4,r4,122
	ctx.r4.u64 = ctx.r4.u64 | 122;
	// bl 0x82d2ada8
	ctx.lr = 0x82A6E018;
	sub_82D2ADA8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
loc_82A6E020:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzu r5,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2a258
	ctx.lr = 0x82A6E030;
	sub_82D2A258(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x82a6e020
	if (cr6.lt) goto loc_82A6E020;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82A6E04C;
	sub_82D19788(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83103100
	ctx.lr = 0x82A6E058;
	sub_83103100(ctx, base);
loc_82A6E058:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6E060"))) PPC_WEAK_FUNC(sub_82A6E060);
PPC_FUNC_IMPL(__imp__sub_82A6E060) {
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
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82a6e088
	if (cr6.lt) goto loc_82A6E088;
	// bne cr6,0x82a6e09c
	if (!cr6.eq) goto loc_82A6E09C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,13236
	ctx.r5.s64 = ctx.r11.s64 + 13236;
	// b 0x82a6e094
	goto loc_82A6E094;
loc_82A6E088:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,13236
	ctx.r11.s64 = ctx.r11.s64 + 13236;
	// addi r5,r11,-8
	ctx.r5.s64 = ctx.r11.s64 + -8;
loc_82A6E094:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d20da8
	ctx.lr = 0x82A6E09C;
	sub_82D20DA8(ctx, base);
loc_82A6E09C:
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

__attribute__((alias("__imp__sub_82A6E0B0"))) PPC_WEAK_FUNC(sub_82A6E0B0);
PPC_FUNC_IMPL(__imp__sub_82A6E0B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82a6e0c4
	if (!cr6.eq) goto loc_82A6E0C4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// blr 
	return;
loc_82A6E0C4:
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6E0D8"))) PPC_WEAK_FUNC(sub_82A6E0D8);
PPC_FUNC_IMPL(__imp__sub_82A6E0D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A6E0E0;
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
	ctx.lr = 0x82A6E104;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a6e158
	if (cr6.eq) goto loc_82A6E158;
	// bl 0x8308e078
	ctx.lr = 0x82A6E114;
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
	ctx.lr = 0x82A6E12C;
	sub_82D253F8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,13328
	ctx.r9.s64 = ctx.r11.s64 + 13328;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,2
	ctx.r7.s64 = 2;
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
loc_82A6E158:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6E164"))) PPC_WEAK_FUNC(sub_82A6E164);
PPC_FUNC_IMPL(__imp__sub_82A6E164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6E168"))) PPC_WEAK_FUNC(sub_82A6E168);
PPC_FUNC_IMPL(__imp__sub_82A6E168) {
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
	// addi r9,r11,13328
	ctx.r9.s64 = ctx.r11.s64 + 13328;
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
	ctx.lr = 0x82A6E1A0;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a6e1b8
	if (cr6.eq) goto loc_82A6E1B8;
	// bl 0x82416268
	ctx.lr = 0x82A6E1B4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A6E1B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6E1D0"))) PPC_WEAK_FUNC(sub_82A6E1D0);
PPC_FUNC_IMPL(__imp__sub_82A6E1D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a6e1e0
	if (cr6.lt) goto loc_82A6E1E0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82A6E1E0:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82a6e0d8
	sub_82A6E0D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6E1E8"))) PPC_WEAK_FUNC(sub_82A6E1E8);
PPC_FUNC_IMPL(__imp__sub_82A6E1E8) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stb r31,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r31.u8);
	// bl 0x8308e078
	ctx.lr = 0x82A6E210;
	sub_8308E078(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r31.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6E23C"))) PPC_WEAK_FUNC(sub_82A6E23C);
PPC_FUNC_IMPL(__imp__sub_82A6E23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6E240"))) PPC_WEAK_FUNC(sub_82A6E240);
PPC_FUNC_IMPL(__imp__sub_82A6E240) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,14016
	ctx.r9.s64 = ctx.r11.s64 + 14016;
	// li r30,14
	ctx.r30.s64 = 14;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x825749e0
	ctx.lr = 0x82A6E27C;
	sub_825749E0(ctx, base);
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r7,r8,14036
	ctx.r7.s64 = ctx.r8.s64 + 14036;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6E2A8"))) PPC_WEAK_FUNC(sub_82A6E2A8);
PPC_FUNC_IMPL(__imp__sub_82A6E2A8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6E2B4"))) PPC_WEAK_FUNC(sub_82A6E2B4);
PPC_FUNC_IMPL(__imp__sub_82A6E2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6E2B8"))) PPC_WEAK_FUNC(sub_82A6E2B8);
PPC_FUNC_IMPL(__imp__sub_82A6E2B8) {
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
	// bl 0x82d19a68
	ctx.lr = 0x82A6E2D4;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a6e2e4
	if (cr6.eq) goto loc_82A6E2E4;
	// bl 0x82d2b0f8
	ctx.lr = 0x82A6E2E0;
	sub_82D2B0F8(ctx, base);
	// bl 0x82d39100
	ctx.lr = 0x82A6E2E4;
	sub_82D39100(ctx, base);
loc_82A6E2E4:
	// addis r30,r31,2
	ctx.r30.s64 = ctx.r31.s64 + 131072;
	// addi r30,r30,724
	ctx.r30.s64 = ctx.r30.s64 + 724;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82a6e324
	if (cr6.eq) goto loc_82A6E324;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82574b18
	ctx.lr = 0x82A6E300;
	sub_82574B18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x82a6e31c
	if (cr6.gt) goto loc_82A6E31C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A6E31C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82A6E31C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82A6E324:
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lwz r3,21944(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21944);
	// bl 0x8308a150
	ctx.lr = 0x82A6E330;
	sub_8308A150(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d17b90
	ctx.lr = 0x82A6E338;
	sub_82D17B90(ctx, base);
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

__attribute__((alias("__imp__sub_82A6E354"))) PPC_WEAK_FUNC(sub_82A6E354);
PPC_FUNC_IMPL(__imp__sub_82A6E354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6E358"))) PPC_WEAK_FUNC(sub_82A6E358);
PPC_FUNC_IMPL(__imp__sub_82A6E358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A6E360;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,612(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 612);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x82a6e384
	if (!cr6.gt) goto loc_82A6E384;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82A6E384:
	// addis r29,r31,2
	ctx.r29.s64 = ctx.r31.s64 + 131072;
	// addi r29,r29,724
	ctx.r29.s64 = ctx.r29.s64 + 724;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a6e3a0
	if (cr6.eq) goto loc_82A6E3A0;
	// bl 0x82572f50
	ctx.lr = 0x82A6E39C;
	sub_82572F50(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
loc_82A6E3A0:
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A6E3B8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a6e3c8
	if (cr6.eq) goto loc_82A6E3C8;
	// bl 0x82a6e240
	ctx.lr = 0x82A6E3C4;
	sub_82A6E240(ctx, base);
	// b 0x82a6e3cc
	goto loc_82A6E3CC;
loc_82A6E3C8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82A6E3CC:
	// li r10,10
	ctx.r10.s64 = 10;
	// lwz r11,612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x82a6e418
	if (!cr6.eq) goto loc_82A6E418;
	// addi r30,r31,624
	ctx.r30.s64 = ctx.r31.s64 + 624;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
loc_82A6E3F0:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a6e3f0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A6E3F0;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x831cdcf0
	ctx.lr = 0x82A6E40C;
	sub_831CDCF0(ctx, base);
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// addi r27,r27,668
	ctx.r27.s64 = ctx.r27.s64 + 668;
	// b 0x82a6e448
	goto loc_82A6E448;
loc_82A6E418:
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addi r30,r30,672
	ctx.r30.s64 = ctx.r30.s64 + 672;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
loc_82A6E424:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a6e424
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A6E424;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x831cdcf0
	ctx.lr = 0x82A6E440;
	sub_831CDCF0(ctx, base);
	// addis r27,r31,2
	ctx.r27.s64 = ctx.r31.s64 + 131072;
	// addi r27,r27,716
	ctx.r27.s64 = ctx.r27.s64 + 716;
loc_82A6E448:
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// lwz r10,612(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r26,r11,24300
	ctx.r26.s64 = ctx.r11.s64 + 24300;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r26
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	// bl 0x8306a968
	ctx.lr = 0x82A6E468;
	sub_8306A968(ctx, base);
	// lwz r8,612(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r4,596(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addis r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 131072;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r31,r31,720
	ctx.r31.s64 = ctx.r31.s64 + 720;
	// lwzx r3,r3,r26
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r26.u32);
	// bl 0x8308f290
	ctx.lr = 0x82A6E490;
	sub_8308F290(ctx, base);
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6e4a4
	if (cr6.eq) goto loc_82A6E4A4;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82A6E4A4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6E4B0"))) PPC_WEAK_FUNC(sub_82A6E4B0);
PPC_FUNC_IMPL(__imp__sub_82A6E4B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,265
	ctx.r11.s64 = 17367040;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82a6e544
	if (cr6.eq) goto loc_82A6E544;
	// ble cr6,0x82a6e554
	if (!cr6.gt) goto loc_82A6E554;
	// lis r11,265
	ctx.r11.s64 = 17367040;
	// ori r8,r11,3
	ctx.r8.u64 = ctx.r11.u64 | 3;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bgt cr6,0x82a6e554
	if (cr6.gt) goto loc_82A6E554;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// addis r10,r3,2
	ctx.r10.s64 = ctx.r3.s64 + 131072;
	// ori r8,r11,724
	ctx.r8.u64 = ctx.r11.u64 | 724;
	// addi r10,r10,732
	ctx.r10.s64 = ctx.r10.s64 + 732;
	// li r7,2
	ctx.r7.s64 = 2;
	// lwzx r11,r3,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6e554
	if (cr6.eq) goto loc_82A6E554;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82a6e51c
	if (!cr6.eq) goto loc_82A6E51C;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// blr 
	return;
loc_82A6E51C:
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r8,1
	ctx.r8.s64 = 1;
	// ori r7,r11,748
	ctx.r7.u64 = ctx.r11.u64 | 748;
	// li r6,4
	ctx.r6.s64 = 4;
	// stb r6,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// stbx r8,r9,r7
	PPC_STORE_U8(ctx.r9.u32 + ctx.r7.u32, ctx.r8.u8);
	// blr 
	return;
loc_82A6E544:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r8,r11,732
	ctx.r8.u64 = ctx.r11.u64 | 732;
	// stbx r10,r9,r8
	PPC_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u8);
loc_82A6E554:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6E55C"))) PPC_WEAK_FUNC(sub_82A6E55C);
PPC_FUNC_IMPL(__imp__sub_82A6E55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6E560"))) PPC_WEAK_FUNC(sub_82A6E560);
PPC_FUNC_IMPL(__imp__sub_82A6E560) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,612(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 612);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6e574
	if (cr6.eq) goto loc_82A6E574;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82A6E574:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,620(r3)
	PPC_STORE_U8(ctx.r3.u32 + 620, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6E580"))) PPC_WEAK_FUNC(sub_82A6E580);
PPC_FUNC_IMPL(__imp__sub_82A6E580) {
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
	// addi r9,r11,14056
	ctx.r9.s64 = ctx.r11.s64 + 14056;
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
	ctx.lr = 0x82A6E5B8;
	sub_82D2EDE8(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a6e5d0
	if (cr6.eq) goto loc_82A6E5D0;
	// bl 0x82416268
	ctx.lr = 0x82A6E5CC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A6E5D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6E5E8"))) PPC_WEAK_FUNC(sub_82A6E5E8);
PPC_FUNC_IMPL(__imp__sub_82A6E5E8) {
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
	// li r11,10
	ctx.r11.s64 = 10;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595718
	ctx.lr = 0x82A6E61C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a6e65c
	if (cr6.eq) goto loc_82A6E65C;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r7,512
	ctx.r7.s64 = 512;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x835ebb28
	ctx.lr = 0x82A6E654;
	sub_835EBB28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82a6e660
	goto loc_82A6E660;
loc_82A6E65C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82A6E660:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// bl 0x82572fa0
	ctx.lr = 0x82A6E670;
	sub_82572FA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82A6E68C"))) PPC_WEAK_FUNC(sub_82A6E68C);
PPC_FUNC_IMPL(__imp__sub_82A6E68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6E690"))) PPC_WEAK_FUNC(sub_82A6E690);
PPC_FUNC_IMPL(__imp__sub_82A6E690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A6E698;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d2ed88
	ctx.lr = 0x82A6E6AC;
	sub_82D2ED88(ctx, base);
	// lis r29,1
	ctx.r29.s64 = 65536;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// addi r11,r31,624
	ctx.r11.s64 = ctx.r31.s64 + 624;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r7,r10,14056
	ctx.r7.s64 = ctx.r10.s64 + 14056;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// addi r6,r8,-17088
	ctx.r6.s64 = ctx.r8.s64 + -17088;
	// stw r30,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r30.u32);
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// stw r30,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r30.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r30,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r30.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r30,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r30.u32);
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// stw r30,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r30.u32);
	// stw r30,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r30.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r30,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r30.u32);
	// stw r30,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r30.u32);
	// stb r30,620(r31)
	PPC_STORE_U8(ctx.r31.u32 + 620, ctx.r30.u8);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stw r6,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r6.u32);
	// stw r5,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r5.u32);
loc_82A6E710:
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82a6e710
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A6E710;
	// li r10,10
	ctx.r10.s64 = 10;
	// stbx r30,r3,r29
	PPC_STORE_U8(ctx.r3.u32 + ctx.r29.u32, ctx.r30.u8);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A6E72C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a6e72c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A6E72C;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// bl 0x831cdcf0
	ctx.lr = 0x82A6E744;
	sub_831CDCF0(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// ori r7,r10,668
	ctx.r7.u64 = ctx.r10.u64 | 668;
	// addi r11,r11,672
	ctx.r11.s64 = ctx.r11.s64 + 672;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// stwx r30,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r30.u32);
loc_82A6E76C:
	// stbu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82a6e76c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A6E76C;
	// li r10,10
	ctx.r10.s64 = 10;
	// stbx r30,r3,r29
	PPC_STORE_U8(ctx.r3.u32 + ctx.r29.u32, ctx.r30.u8);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A6E788:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a6e788
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A6E788;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// bl 0x831cdcf0
	ctx.lr = 0x82A6E7A0;
	sub_831CDCF0(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r3,r11,716
	ctx.r3.u64 = ctx.r11.u64 | 716;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r11,r10,720
	ctx.r11.u64 = ctx.r10.u64 | 720;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// ori r10,r9,724
	ctx.r10.u64 = ctx.r9.u64 | 724;
	// stwx r30,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r30.u32);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// ori r9,r8,728
	ctx.r9.u64 = ctx.r8.u64 | 728;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// stwx r30,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u32);
	// ori r8,r7,732
	ctx.r8.u64 = ctx.r7.u64 | 732;
	// ori r7,r6,736
	ctx.r7.u64 = ctx.r6.u64 | 736;
	// stwx r30,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r30.u32);
	// ori r6,r5,744
	ctx.r6.u64 = ctx.r5.u64 | 744;
	// ori r5,r4,748
	ctx.r5.u64 = ctx.r4.u64 | 748;
	// stwx r30,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stbx r30,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r4,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r4.u32);
	// stwx r30,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r30.u32);
	// stbx r30,r31,r5
	PPC_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r30.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6E810"))) PPC_WEAK_FUNC(sub_82A6E810);
PPC_FUNC_IMPL(__imp__sub_82A6E810) {
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
	// blt cr6,0x82a6e838
	if (cr6.lt) goto loc_82A6E838;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82a6e83c
	goto loc_82A6E83C;
loc_82A6E838:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82A6E83C:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,752
	ctx.r4.u64 = ctx.r4.u64 | 752;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A6E85C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a6e874
	if (cr6.eq) goto loc_82A6E874;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a6e690
	ctx.lr = 0x82A6E870;
	sub_82A6E690(ctx, base);
	// b 0x82a6e878
	goto loc_82A6E878;
loc_82A6E874:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A6E878:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6E890"))) PPC_WEAK_FUNC(sub_82A6E890);
PPC_FUNC_IMPL(__imp__sub_82A6E890) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A6E898;
	__savegprlr_29(ctx, base);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,612(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 612);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x82a6e8bc
	if (!cr6.gt) goto loc_82A6E8BC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A6E8BC:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,740
	ctx.r10.u64 = ctx.r11.u64 | 740;
	// lbzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a6ea28
	if (!cr6.eq) goto loc_82A6EA28;
	// li r5,384
	ctx.r5.s64 = 384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x831cdcf0
	ctx.lr = 0x82A6E8E0;
	sub_831CDCF0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a6e1e8
	ctx.lr = 0x82A6E8E8;
	sub_82A6E1E8(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,13671
	ctx.r4.s64 = ctx.r9.s64 + 13671;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// bl 0x837b0c10
	ctx.lr = 0x82A6E90C;
	sub_837B0C10(ctx, base);
	// lwz r8,612(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82a6e97c
	if (!cr6.eq) goto loc_82A6E97C;
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addi r30,r30,668
	ctx.r30.s64 = ctx.r30.s64 + 668;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// bl 0x82a6e5e8
	ctx.lr = 0x82A6E930;
	sub_82A6E5E8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r5,320
	ctx.r5.s64 = 320;
	// li r6,176
	ctx.r6.s64 = 176;
	// bl 0x8306ac18
	ctx.lr = 0x82A6E940;
	sub_8306AC18(ctx, base);
	// lis r4,81
	ctx.r4.s64 = 5308416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,440
	ctx.r4.u64 = ctx.r4.u64 | 440;
	// bl 0x82d042a8
	ctx.lr = 0x82A6E950;
	sub_82D042A8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82a6e964
	if (!cr6.lt) goto loc_82A6E964;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_82A6E964:
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x831d0b58
	ctx.lr = 0x82A6E974;
	sub_831D0B58(ctx, base);
	// li r3,17
	ctx.r3.s64 = 17;
	// b 0x82a6e9d8
	goto loc_82A6E9D8;
loc_82A6E97C:
	// addis r30,r31,2
	ctx.r30.s64 = ctx.r31.s64 + 131072;
	// addi r30,r30,716
	ctx.r30.s64 = ctx.r30.s64 + 716;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// bl 0x82a6e5e8
	ctx.lr = 0x82A6E990;
	sub_82A6E5E8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r5,320
	ctx.r5.s64 = 320;
	// li r6,176
	ctx.r6.s64 = 176;
	// bl 0x8306ac18
	ctx.lr = 0x82A6E9A0;
	sub_8306AC18(ctx, base);
	// lis r4,81
	ctx.r4.s64 = 5308416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,311
	ctx.r4.u64 = ctx.r4.u64 | 311;
	// bl 0x82d042a8
	ctx.lr = 0x82A6E9B0;
	sub_82D042A8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82a6e9c4
	if (!cr6.lt) goto loc_82A6E9C4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_82A6E9C4:
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x831d0b58
	ctx.lr = 0x82A6E9D4;
	sub_831D0B58(ctx, base);
	// li r3,18
	ctx.r3.s64 = 18;
loc_82A6E9D8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lwz r4,600(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 600);
	// addis r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 131072;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// addi r5,r11,40
	ctx.r5.s64 = ctx.r11.s64 + 40;
	// addi r31,r31,728
	ctx.r31.s64 = ctx.r31.s64 + 728;
	// bl 0x8307e898
	ctx.lr = 0x82A6EA00;
	sub_8307E898(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r8,r29
	ctx.r31.u64 = ctx.r8.u64 & ctx.r29.u64;
	// bl 0x8387e8e0
	ctx.lr = 0x82A6EA1C;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A6EA28:
	// li r31,2
	ctx.r31.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6EA38"))) PPC_WEAK_FUNC(sub_82A6EA38);
PPC_FUNC_IMPL(__imp__sub_82A6EA38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A6EA40;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r29.u8);
	// addi r31,r11,13928
	ctx.r31.s64 = ctx.r11.s64 + 13928;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r31,-226
	ctx.r4.s64 = ctx.r31.s64 + -226;
	// bl 0x8259cc28
	ctx.lr = 0x82A6EA74;
	sub_8259CC28(ctx, base);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// addi r4,r31,-225
	ctx.r4.s64 = ctx.r31.s64 + -225;
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82A6EA90;
	sub_8259CC28(ctx, base);
	// lwz r10,612(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 612);
	// addi r11,r31,-40
	ctx.r11.s64 = ctx.r31.s64 + -40;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwzx r4,r9,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x82d042a8
	ctx.lr = 0x82A6EAA8;
	sub_82D042A8(ctx, base);
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a1da8
	ctx.lr = 0x82A6EAC0;
	sub_825A1DA8(ctx, base);
	// lwz r11,612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 612);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6ead4
	if (cr6.eq) goto loc_82A6EAD4;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a6eb3c
	if (!cr6.eq) goto loc_82A6EB3C;
loc_82A6EAD4:
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,24300
	ctx.r8.s64 = ctx.r10.s64 + 24300;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x8306ada0
	ctx.lr = 0x82A6EAE8;
	sub_8306ADA0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r31,-195
	ctx.r4.s64 = ctx.r31.s64 + -195;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lhz r26,6(r7)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r7.u32 + 6);
	// bl 0x8259cc28
	ctx.lr = 0x82A6EB00;
	sub_8259CC28(ctx, base);
	// lis r4,39
	ctx.r4.s64 = 2555904;
	// lwz r5,584(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 584);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82A6EB18;
	sub_82D042A8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a1eb8
	ctx.lr = 0x82A6EB28;
	sub_825A1EB8(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a1da8
	ctx.lr = 0x82A6EB3C;
	sub_825A1DA8(ctx, base);
loc_82A6EB3C:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x82A6EB48;
	sub_82D2AAB0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a6eb68
	if (cr6.lt) goto loc_82A6EB68;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82A6EB68;
	sub_825952B8(ctx, base);
loc_82A6EB68:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// blt cr6,0x82a6eb90
	if (cr6.lt) goto loc_82A6EB90;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82A6EB90;
	sub_825952B8(ctx, base);
loc_82A6EB90:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6EB98"))) PPC_WEAK_FUNC(sub_82A6EB98);
PPC_FUNC_IMPL(__imp__sub_82A6EB98) {
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
	ctx.lr = 0x82A6EBB0;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82a6ebcc
	if (!cr6.eq) goto loc_82A6EBCC;
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
loc_82A6EBCC:
	// bl 0x83763ef8
	ctx.lr = 0x82A6EBD0;
	sub_83763EF8(ctx, base);
	// bl 0x82a2ba20
	ctx.lr = 0x82A6EBD4;
	sub_82A2BA20(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// stw r3,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r3.u32);
	// blt cr6,0x82a6ebe8
	if (cr6.lt) goto loc_82A6EBE8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r11.u32);
loc_82A6EBE8:
	// bl 0x83763ef8
	ctx.lr = 0x82A6EBEC;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a6ec04
	if (cr6.eq) goto loc_82A6EC04;
	// lwz r11,384(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 384);
	// stw r11,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r11.u32);
	// lwz r10,388(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// stw r10,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r10.u32);
loc_82A6EC04:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82A6EC14;
	sub_82D19788(ctx, base);
	// lwz r11,612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6ec38
	if (cr6.eq) goto loc_82A6EC38;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82a6ec38
	if (cr6.eq) goto loc_82A6EC38;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82A6EC38;
	sub_82D19788(ctx, base);
loc_82A6EC38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a6ea38
	ctx.lr = 0x82A6EC40;
	sub_82A6EA38(ctx, base);
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

__attribute__((alias("__imp__sub_82A6EC58"))) PPC_WEAK_FUNC(sub_82A6EC58);
PPC_FUNC_IMPL(__imp__sub_82A6EC58) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x83763ef8
	ctx.lr = 0x82A6EC78;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82a6ec88
	if (!cr6.eq) goto loc_82A6EC88;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82a6f064
	goto loc_82A6F064;
loc_82A6EC88:
	// lwz r11,592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x82a6f024
	if (cr6.gt) goto loc_82A6F024;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82a6ed10
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A6ED10;
	// bdzf 4*cr6+eq,0x82a6ed88
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A6ED88;
	// bdzf 4*cr6+eq,0x82a6ee2c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A6EE2C;
	// bdzf 4*cr6+eq,0x82a6f024
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A6F024;
	// bdzf 4*cr6+eq,0x82a6ee94
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A6EE94;
	// bdzf 4*cr6+eq,0x82a6ef24
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A6EF24;
	// bne cr6,0x82a6ef94
	if (!cr6.eq) goto loc_82A6EF94;
	// lwz r11,612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// addi r9,r10,24300
	ctx.r9.s64 = ctx.r10.s64 + 24300;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// bl 0x8306ada0
	ctx.lr = 0x82A6ECD0;
	sub_8306ADA0(ctx, base);
	// lhz r7,6(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// lis r6,-31778
	ctx.r6.s64 = -2082603008;
	// lwz r5,612(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// addi r4,r6,24308
	ctx.r4.s64 = ctx.r6.s64 + 24308;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r7.u32);
	// lwzx r3,r3,r4
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// bl 0x8306ada0
	ctx.lr = 0x82A6ECF0;
	sub_8306ADA0(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lhz r10,6(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// ori r9,r11,720
	ctx.r9.u64 = ctx.r11.u64 | 720;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r8,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r8.u32);
	// stw r10,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r10.u32);
	// stwx r30,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u32);
	// b 0x82a6f024
	goto loc_82A6F024;
loc_82A6ED10:
	// lwz r11,604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 604);
	// lwz r10,596(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x82a6ed2c
	if (cr6.lt) goto loc_82A6ED2C;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r11.u32);
	// b 0x82a6f024
	goto loc_82A6F024;
loc_82A6ED2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a6e358
	ctx.lr = 0x82A6ED34;
	sub_82A6E358(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a6ed5c
	if (!cr6.eq) goto loc_82A6ED5C;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// ori r9,r10,668
	ctx.r9.u64 = ctx.r10.u64 | 668;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r8.u32);
	// stwx r30,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u32);
	// b 0x82a6f024
	goto loc_82A6F024;
loc_82A6ED5C:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r11,732
	ctx.r9.u64 = ctx.r11.u64 | 732;
	// ori r8,r10,720
	ctx.r8.u64 = ctx.r10.u64 | 720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stbx r30,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u8);
	// lwzx r4,r31,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// bl 0x83103100
	ctx.lr = 0x82A6ED7C;
	sub_83103100(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r7,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r7.u32);
	// b 0x82a6f024
	goto loc_82A6F024;
loc_82A6ED88:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,732
	ctx.r10.u64 = ctx.r11.u64 | 732;
	// lbzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a6edd8
	if (!cr6.eq) goto loc_82A6EDD8;
	// lbz r11,380(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 380);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6edc0
	if (cr6.eq) goto loc_82A6EDC0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r11,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r11.u32);
	// stw r10,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r10.u32);
	// stw r11,408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 408, ctx.r11.u32);
	// b 0x82a6f024
	goto loc_82A6F024;
loc_82A6EDC0:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r11.u32);
	// lwz r11,392(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 392, ctx.r10.u32);
	// b 0x82a6f024
	goto loc_82A6F024;
loc_82A6EDD8:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82a6edf8
	if (!cr6.eq) goto loc_82A6EDF8;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r11.u32);
	// lwz r11,400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 400, ctx.r10.u32);
	// b 0x82a6f024
	goto loc_82A6F024;
loc_82A6EDF8:
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82a6ee0c
	if (!cr6.eq) goto loc_82A6EE0C;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r11.u32);
	// b 0x82a6f024
	goto loc_82A6F024;
loc_82A6EE0C:
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bne cr6,0x82a6f024
	if (!cr6.eq) goto loc_82A6F024;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r11.u32);
	// lwz r11,400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 400, ctx.r10.u32);
	// b 0x82a6f024
	goto loc_82A6F024;
loc_82A6EE2C:
	// lbz r11,620(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 620);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6ee50
	if (cr6.eq) goto loc_82A6EE50;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r11.u32);
	// stw r10,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r10.u32);
	// stw r30,408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 408, ctx.r30.u32);
	// b 0x82a6f024
	goto loc_82A6F024;
loc_82A6EE50:
	// lwz r11,612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// lwz r11,600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 600);
	// ble cr6,0x82a6ee6c
	if (!cr6.gt) goto loc_82A6EE6C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r11.u32);
	// b 0x82a6f024
	goto loc_82A6F024;
loc_82A6EE6C:
	// lwz r10,608(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82a6ef34
	if (!cr6.lt) goto loc_82A6EF34;
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// addi r11,r11,736
	ctx.r11.s64 = ctx.r11.s64 + 736;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x82a6f024
	if (!cr6.eq) goto loc_82A6F024;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// b 0x82a6f024
	goto loc_82A6F024;
loc_82A6EE94:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,732
	ctx.r10.u64 = ctx.r11.u64 | 732;
	// lbzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a6eecc
	if (!cr6.eq) goto loc_82A6EECC;
	// lwz r11,600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 600);
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r10.u32);
	// stw r9,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r9.u32);
	// lwz r11,396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,396(r3)
	PPC_STORE_U32(ctx.r3.u32 + 396, ctx.r8.u32);
	// b 0x82a6f024
	goto loc_82A6F024;
loc_82A6EECC:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82a6eee8
	if (!cr6.eq) goto loc_82A6EEE8;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r11.u32);
	// stw r10,404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 404, ctx.r10.u32);
	// b 0x82a6f024
	goto loc_82A6F024;
loc_82A6EEE8:
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82a6ef08
	if (!cr6.eq) goto loc_82A6EF08;
	// lwz r11,600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 600);
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r10.u32);
	// stw r9,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r9.u32);
	// b 0x82a6f024
	goto loc_82A6F024;
loc_82A6EF08:
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bne cr6,0x82a6f024
	if (!cr6.eq) goto loc_82A6F024;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r11.u32);
	// stw r10,404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 404, ctx.r10.u32);
	// b 0x82a6f024
	goto loc_82A6F024;
loc_82A6EF24:
	// lwz r11,604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 604);
	// lwz r10,596(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x82a6ef40
	if (cr6.lt) goto loc_82A6EF40;
loc_82A6EF34:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r11.u32);
	// b 0x82a6f024
	goto loc_82A6F024;
loc_82A6EF40:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lbz r9,620(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 620);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r6,r11,720
	ctx.r6.u64 = ctx.r11.u64 | 720;
	// ori r5,r8,668
	ctx.r5.u64 = ctx.r8.u64 | 668;
	// ori r4,r7,716
	ctx.r4.u64 = ctx.r7.u64 | 716;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stwx r30,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r30.u32);
	// stwx r30,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r30.u32);
	// stwx r30,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r30.u32);
	// stw r10,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r10.u32);
	// beq cr6,0x82a6f024
	if (cr6.eq) goto loc_82A6F024;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r11,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r11.u32);
	// stw r10,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r10.u32);
	// stw r30,408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 408, ctx.r30.u32);
	// b 0x82a6f024
	goto loc_82A6F024;
loc_82A6EF94:
	// lwz r11,596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// stw r11,384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 384, ctx.r11.u32);
	// lwz r10,600(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 600);
	// stw r10,388(r3)
	PPC_STORE_U32(ctx.r3.u32 + 388, ctx.r10.u32);
	// lwz r9,616(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a6f020
	if (!cr6.eq) goto loc_82A6F020;
	// lwz r11,404(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 404);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82a6f020
	if (!cr6.eq) goto loc_82A6F020;
	// lwz r11,392(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a6efec
	if (!cr6.eq) goto loc_82A6EFEC;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,748
	ctx.r10.u64 = ctx.r11.u64 | 748;
	// lbzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r7,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 404, ctx.r6.u32);
	// b 0x82a6f020
	goto loc_82A6F020;
loc_82A6EFEC:
	// lwz r9,396(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82a6f00c
	if (cr6.eq) goto loc_82A6F00C;
	// lwz r11,608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x82a6f00c
	if (cr6.lt) goto loc_82A6F00C;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82a6f01c
	goto loc_82A6F01C;
loc_82A6F00C:
	// lwz r11,400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82a6f020
	if (!cr6.gt) goto loc_82A6F020;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82A6F01C:
	// stw r11,404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 404, ctx.r11.u32);
loc_82A6F020:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82A6F024:
	// lwz r11,604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 604);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6f048
	if (cr6.eq) goto loc_82A6F048;
	// lwz r10,584(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x82a6f048
	if (!cr6.lt) goto loc_82A6F048;
	// lwz r11,596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r11.u32);
loc_82A6F048:
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// lwz r10,584(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82a6f060
	if (cr6.eq) goto loc_82A6F060;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a6ea38
	ctx.lr = 0x82A6F060;
	sub_82A6EA38(ctx, base);
loc_82A6F060:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82A6F064:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6F07C"))) PPC_WEAK_FUNC(sub_82A6F07C);
PPC_FUNC_IMPL(__imp__sub_82A6F07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6F080"))) PPC_WEAK_FUNC(sub_82A6F080);
PPC_FUNC_IMPL(__imp__sub_82A6F080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A6F088;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r28,r3,2
	ctx.r28.s64 = ctx.r3.s64 + 131072;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r28,r28,736
	ctx.r28.s64 = ctx.r28.s64 + 736;
	// lis r10,-31754
	ctx.r10.s64 = -2081030144;
	// addi r27,r11,13916
	ctx.r27.s64 = ctx.r11.s64 + 13916;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r29,21944(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21944);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82a6f264
	if (cr6.gt) goto loc_82A6F264;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82a6f190
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A6F190;
	// bdzf 4*cr6+eq,0x82a6f1b0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A6F1B0;
	// bne cr6,0x82a6f25c
	if (!cr6.eq) goto loc_82A6F25C;
	// addi r4,r27,-246
	ctx.r4.s64 = ctx.r27.s64 + -246;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82A6F0D4;
	sub_837B0C10(ctx, base);
	// lwz r11,612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// lwz r5,600(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 600);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a6f10c
	if (!cr6.eq) goto loc_82A6F10C;
	// li r4,17
	ctx.r4.s64 = 17;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8308e478
	ctx.lr = 0x82A6F0F0;
	sub_8308E478(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82A6F104;
	sub_8259CB28(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// b 0x82a6f130
	goto loc_82A6F130;
loc_82A6F10C:
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8308e478
	ctx.lr = 0x82A6F118;
	sub_8308E478(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82A6F12C;
	sub_8259CB28(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
loc_82A6F130:
	// bl 0x8387e8e0
	ctx.lr = 0x82A6F134;
	sub_8387E8E0(ctx, base);
	// addis r30,r31,2
	ctx.r30.s64 = ctx.r31.s64 + 131072;
	// addi r30,r30,724
	ctx.r30.s64 = ctx.r30.s64 + 724;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a6f154
	if (cr6.eq) goto loc_82A6F154;
	// bl 0x82572f50
	ctx.lr = 0x82A6F14C;
	sub_82572F50(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82A6F154:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d17b90
	ctx.lr = 0x82A6F15C;
	sub_82D17B90(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82a6f170
	if (!cr6.lt) goto loc_82A6F170;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82A6F170:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8308c958
	ctx.lr = 0x82A6F17C;
	sub_8308C958(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x82A6F18C;
	sub_8387E8E0(ctx, base);
	// b 0x82a6f264
	goto loc_82A6F264;
loc_82A6F190:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83089fd8
	ctx.lr = 0x82A6F198;
	sub_83089FD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6f264
	if (cr6.eq) goto loc_82A6F264;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x82a6f264
	goto loc_82A6F264;
loc_82A6F1B0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8308a108
	ctx.lr = 0x82A6F1BC;
	sub_8308A108(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,740
	ctx.r10.u64 = ctx.r11.u64 | 740;
	// stbx r3,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a6e890
	ctx.lr = 0x82A6F1D0;
	sub_82A6E890(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a6f220
	if (!cr6.eq) goto loc_82A6F220;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,732
	ctx.r9.u64 = ctx.r11.u64 | 732;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r7,r8,728
	ctx.r7.u64 = ctx.r8.u64 | 728;
	// stbx r10,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u8);
	// lwzx r4,r31,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// bl 0x83103100
	ctx.lr = 0x82A6F200;
	sub_83103100(ctx, base);
	// addis r6,r31,2
	ctx.r6.s64 = ctx.r31.s64 + 131072;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r6,r6,744
	ctx.r6.s64 = ctx.r6.s64 + 744;
	// stw r5,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r5.u32);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// b 0x82a6f230
	goto loc_82A6F230;
loc_82A6F220:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// lwz r11,600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 600);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r11.u32);
loc_82A6F230:
	// lwz r10,600(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 600);
	// lwz r11,608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// ble cr6,0x82a6f250
	if (!cr6.gt) goto loc_82A6F250;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r11,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r11.u32);
	// stw r10,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r10.u32);
loc_82A6F250:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x82a6f264
	goto loc_82A6F264;
loc_82A6F25C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d17b90
	ctx.lr = 0x82A6F264;
	sub_82D17B90(ctx, base);
loc_82A6F264:
	// lwz r11,612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x82a6f278
	if (cr6.lt) goto loc_82A6F278;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82a6f280
	goto loc_82A6F280;
loc_82A6F278:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a6ec58
	ctx.lr = 0x82A6F280;
	sub_82A6EC58(ctx, base);
loc_82A6F280:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a6f2ac
	if (cr6.eq) goto loc_82A6F2AC;
	// lwz r11,616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// beq cr6,0x82a6f2a8
	if (cr6.eq) goto loc_82A6F2A8;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82A6F2A8:
	// bl 0x82d20da8
	ctx.lr = 0x82A6F2AC;
	sub_82D20DA8(ctx, base);
loc_82A6F2AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6F2B8"))) PPC_WEAK_FUNC(sub_82A6F2B8);
PPC_FUNC_IMPL(__imp__sub_82A6F2B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A6F2C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83763ef8
	ctx.lr = 0x82A6F2CC;
	sub_83763EF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82a6f2f8
	if (!cr6.eq) goto loc_82A6F2F8;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,14652
	ctx.r11.s64 = ctx.r11.s64 + 14652;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r11,-12
	ctx.r5.s64 = ctx.r11.s64 + -12;
	// bl 0x82d20da8
	ctx.lr = 0x82A6F2F0;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A6F2F8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A6F2FC:
	// bl 0x83763ef8
	ctx.lr = 0x82A6F300;
	sub_83763EF8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x837641e0
	ctx.lr = 0x82A6F30C;
	sub_837641E0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x82a6f2fc
	if (cr6.lt) goto loc_82A6F2FC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82A6F320;
	sub_82D19BB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x82a6f338
	if (cr6.eq) goto loc_82A6F338;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82A6F338:
	// bl 0x837641e0
	ctx.lr = 0x82A6F33C;
	sub_837641E0(ctx, base);
	// bl 0x8376b838
	ctx.lr = 0x82A6F340;
	sub_8376B838(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a6f374
	if (!cr6.eq) goto loc_82A6F374;
	// li r11,6
	ctx.r11.s64 = 6;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r11,404(r30)
	PPC_STORE_U32(ctx.r30.u32 + 404, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r10,14652
	ctx.r11.s64 = ctx.r10.s64 + 14652;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r11,-4
	ctx.r5.s64 = ctx.r11.s64 + -4;
	// bl 0x82d20da8
	ctx.lr = 0x82A6F36C;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A6F374:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,14652
	ctx.r5.s64 = ctx.r11.s64 + 14652;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82A6F388;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6F390"))) PPC_WEAK_FUNC(sub_82A6F390);
PPC_FUNC_IMPL(__imp__sub_82A6F390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,14660
	ctx.r5.s64 = ctx.r11.s64 + 14660;
	// b 0x82d20da8
	sub_82D20DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6F3A0"))) PPC_WEAK_FUNC(sub_82A6F3A0);
PPC_FUNC_IMPL(__imp__sub_82A6F3A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A6F3A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r4,32
	ctx.r4.s64 = 2097152;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r4,r4,82
	ctx.r4.u64 = ctx.r4.u64 | 82;
	// bl 0x82d2a1c8
	ctx.lr = 0x82A6F3BC;
	sub_82D2A1C8(ctx, base);
	// lis r4,230
	ctx.r4.s64 = 15073280;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,136
	ctx.r4.u64 = ctx.r4.u64 | 136;
	// bl 0x82d2ada8
	ctx.lr = 0x82A6F3CC;
	sub_82D2ADA8(ctx, base);
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,24472
	ctx.r11.s64 = ctx.r11.s64 + 24472;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_82A6F3DC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzu r5,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2a258
	ctx.lr = 0x82A6F3EC;
	sub_82D2A258(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x82a6f3dc
	if (cr6.lt) goto loc_82A6F3DC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6F404"))) PPC_WEAK_FUNC(sub_82A6F404);
PPC_FUNC_IMPL(__imp__sub_82A6F404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6F408"))) PPC_WEAK_FUNC(sub_82A6F408);
PPC_FUNC_IMPL(__imp__sub_82A6F408) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A6F410;
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
	ctx.lr = 0x82A6F434;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a6f480
	if (cr6.eq) goto loc_82A6F480;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d2f280
	ctx.lr = 0x82A6F45C;
	sub_82D2F280(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,14752
	ctx.r9.s64 = ctx.r11.s64 + 14752;
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
loc_82A6F480:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6F48C"))) PPC_WEAK_FUNC(sub_82A6F48C);
PPC_FUNC_IMPL(__imp__sub_82A6F48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6F490"))) PPC_WEAK_FUNC(sub_82A6F490);
PPC_FUNC_IMPL(__imp__sub_82A6F490) {
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
	// addi r9,r11,14752
	ctx.r9.s64 = ctx.r11.s64 + 14752;
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
	// bl 0x82d2f2f8
	ctx.lr = 0x82A6F4C8;
	sub_82D2F2F8(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a6f4e0
	if (cr6.eq) goto loc_82A6F4E0;
	// bl 0x82416268
	ctx.lr = 0x82A6F4DC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A6F4E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6F4F8"))) PPC_WEAK_FUNC(sub_82A6F4F8);
PPC_FUNC_IMPL(__imp__sub_82A6F4F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a6f508
	if (cr6.lt) goto loc_82A6F508;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82A6F508:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82a6f408
	sub_82A6F408(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6F510"))) PPC_WEAK_FUNC(sub_82A6F510);
PPC_FUNC_IMPL(__imp__sub_82A6F510) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A6F518;
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
	ctx.lr = 0x82A6F52C;
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
	ctx.lr = 0x82A6F544;
	sub_82D253F8(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,6504
	ctx.r9.s64 = ctx.r11.s64 + 6504;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d19788
	ctx.lr = 0x82A6F56C;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82A6F57C;
	sub_82D19788(ctx, base);
	// clrlwi r7,r29,24
	ctx.r7.u64 = ctx.r29.u32 & 0xFF;
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82a6f5ac
	if (!cr6.eq) goto loc_82A6F5AC;
	// addi r10,r11,24616
	ctx.r10.s64 = ctx.r11.s64 + 24616;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82d20da8
	ctx.lr = 0x82A6F5A0;
	sub_82D20DA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A6F5AC:
	// lwz r5,24616(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24616);
	// bl 0x82d20da8
	ctx.lr = 0x82A6F5B4;
	sub_82D20DA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6F5C0"))) PPC_WEAK_FUNC(sub_82A6F5C0);
PPC_FUNC_IMPL(__imp__sub_82A6F5C0) {
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
	// blt cr6,0x82a6f5e8
	if (cr6.lt) goto loc_82A6F5E8;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82a6f5ec
	goto loc_82A6F5EC;
loc_82A6F5E8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82A6F5EC:
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
	ctx.lr = 0x82A6F608;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a6f620
	if (cr6.eq) goto loc_82A6F620;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a6f510
	ctx.lr = 0x82A6F61C;
	sub_82A6F510(ctx, base);
	// b 0x82a6f624
	goto loc_82A6F624;
loc_82A6F620:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A6F624:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6F63C"))) PPC_WEAK_FUNC(sub_82A6F63C);
PPC_FUNC_IMPL(__imp__sub_82A6F63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6F640"))) PPC_WEAK_FUNC(sub_82A6F640);
PPC_FUNC_IMPL(__imp__sub_82A6F640) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A6F648;
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
	// li r4,584
	ctx.r4.s64 = 584;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A6F66C;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a6f6b0
	if (cr6.eq) goto loc_82A6F6B0;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d2f988
	ctx.lr = 0x82A6F68C;
	sub_82D2F988(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,15792
	ctx.r9.s64 = ctx.r11.s64 + 15792;
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
loc_82A6F6B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6F6BC"))) PPC_WEAK_FUNC(sub_82A6F6BC);
PPC_FUNC_IMPL(__imp__sub_82A6F6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6F6C0"))) PPC_WEAK_FUNC(sub_82A6F6C0);
PPC_FUNC_IMPL(__imp__sub_82A6F6C0) {
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
	// addi r9,r11,15792
	ctx.r9.s64 = ctx.r11.s64 + 15792;
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
	ctx.lr = 0x82A6F6F8;
	sub_82D2FA18(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a6f710
	if (cr6.eq) goto loc_82A6F710;
	// bl 0x82416268
	ctx.lr = 0x82A6F70C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A6F710:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6F728"))) PPC_WEAK_FUNC(sub_82A6F728);
PPC_FUNC_IMPL(__imp__sub_82A6F728) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a6f738
	if (cr6.lt) goto loc_82A6F738;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82A6F738:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82a6f640
	sub_82A6F640(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6F740"))) PPC_WEAK_FUNC(sub_82A6F740);
PPC_FUNC_IMPL(__imp__sub_82A6F740) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A6F748;
	__savegprlr_27(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x83763ef8
	ctx.lr = 0x82A6F754;
	sub_83763EF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a6f9c0
	if (cr6.eq) goto loc_82A6F9C0;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r29,404(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 404);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r31,r11,15704
	ctx.r31.s64 = ctx.r11.s64 + 15704;
	// addi r4,r31,-234
	ctx.r4.s64 = ctx.r31.s64 + -234;
	// bl 0x837b0c10
	ctx.lr = 0x82A6F778;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-233
	ctx.r4.s64 = ctx.r31.s64 + -233;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82A6F784;
	sub_837B0C10(ctx, base);
	// li r28,-1
	ctx.r28.s64 = -1;
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// bne cr6,0x82a6f7fc
	if (!cr6.eq) goto loc_82A6F7FC;
	// addi r4,r31,-202
	ctx.r4.s64 = ctx.r31.s64 + -202;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82A6F79C;
	sub_837B0C10(ctx, base);
	// lis r31,42
	ctx.r31.s64 = 2752512;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r31,r31,62
	ctx.r31.u64 = ctx.r31.u64 | 62;
	// bl 0x82a2ba20
	ctx.lr = 0x82A6F7AC;
	sub_82A2BA20(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82a6f7bc
	if (!cr6.eq) goto loc_82A6F7BC;
	// lis r31,42
	ctx.r31.s64 = 2752512;
	// ori r31,r31,63
	ctx.r31.u64 = ctx.r31.u64 | 63;
loc_82A6F7BC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d042a8
	ctx.lr = 0x82A6F7C8;
	sub_82D042A8(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82a6f7dc
	if (!cr6.lt) goto loc_82A6F7DC;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
loc_82A6F7DC:
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,24756
	ctx.r10.s64 = ctx.r11.s64 + 24756;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82d042a8
	ctx.lr = 0x82A6F7F0;
	sub_82D042A8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82A6F7F8;
	sub_8387E8E0(ctx, base);
	// b 0x82a6f950
	goto loc_82A6F950;
loc_82A6F7FC:
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// bne cr6,0x82a6f868
	if (!cr6.eq) goto loc_82A6F868;
	// addi r4,r31,-201
	ctx.r4.s64 = ctx.r31.s64 + -201;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x837b0c10
	ctx.lr = 0x82A6F810;
	sub_837B0C10(ctx, base);
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,24756
	ctx.r10.s64 = ctx.r11.s64 + 24756;
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x82d042a8
	ctx.lr = 0x82A6F824;
	sub_82D042A8(ctx, base);
	// lis r4,230
	ctx.r4.s64 = 15073280;
	// lwz r5,400(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// ori r4,r4,141
	ctx.r4.u64 = ctx.r4.u64 | 141;
	// bl 0x82d042a8
	ctx.lr = 0x82A6F838;
	sub_82D042A8(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a1eb8
	ctx.lr = 0x82A6F848;
	sub_825A1EB8(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a1da8
	ctx.lr = 0x82A6F85C;
	sub_825A1DA8(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82A6F864;
	sub_8387E8E0(ctx, base);
	// b 0x82a6f950
	goto loc_82A6F950;
loc_82A6F868:
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(ctx.r29.u32, 4, xer);
	// bne cr6,0x82a6f8d0
	if (!cr6.eq) goto loc_82A6F8D0;
	// addi r4,r31,-171
	ctx.r4.s64 = ctx.r31.s64 + -171;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x837b0c10
	ctx.lr = 0x82A6F87C;
	sub_837B0C10(ctx, base);
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,24756
	ctx.r10.s64 = ctx.r11.s64 + 24756;
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82d042a8
	ctx.lr = 0x82A6F890;
	sub_82D042A8(ctx, base);
	// lis r4,230
	ctx.r4.s64 = 15073280;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// ori r4,r4,135
	ctx.r4.u64 = ctx.r4.u64 | 135;
	// bl 0x82d042a8
	ctx.lr = 0x82A6F8A0;
	sub_82D042A8(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a1eb8
	ctx.lr = 0x82A6F8B0;
	sub_825A1EB8(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a1da8
	ctx.lr = 0x82A6F8C4;
	sub_825A1DA8(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x82A6F8CC;
	sub_8387E8E0(ctx, base);
	// b 0x82a6f950
	goto loc_82A6F950;
loc_82A6F8D0:
	// cmplwi cr6,r29,5
	cr6.compare<uint32_t>(ctx.r29.u32, 5, xer);
	// bne cr6,0x82a6f938
	if (!cr6.eq) goto loc_82A6F938;
	// addi r4,r31,-170
	ctx.r4.s64 = ctx.r31.s64 + -170;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x837b0c10
	ctx.lr = 0x82A6F8E4;
	sub_837B0C10(ctx, base);
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,24756
	ctx.r10.s64 = ctx.r11.s64 + 24756;
	// lwz r4,20(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x82d042a8
	ctx.lr = 0x82A6F8F8;
	sub_82D042A8(ctx, base);
	// lis r4,230
	ctx.r4.s64 = 15073280;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// ori r4,r4,135
	ctx.r4.u64 = ctx.r4.u64 | 135;
	// bl 0x82d042a8
	ctx.lr = 0x82A6F908;
	sub_82D042A8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a1eb8
	ctx.lr = 0x82A6F918;
	sub_825A1EB8(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a1da8
	ctx.lr = 0x82A6F92C;
	sub_825A1DA8(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x82A6F934;
	sub_8387E8E0(ctx, base);
	// b 0x82a6f950
	goto loc_82A6F950;
loc_82A6F938:
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,24756
	ctx.r9.s64 = ctx.r11.s64 + 24756;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82d042a8
	ctx.lr = 0x82A6F950;
	sub_82D042A8(ctx, base);
loc_82A6F950:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825a1da8
	ctx.lr = 0x82A6F964;
	sub_825A1DA8(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x82A6F970;
	sub_82D2AAB0(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a6f990
	if (cr6.lt) goto loc_82A6F990;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825952b8
	ctx.lr = 0x82A6F990;
	sub_825952B8(ctx, base);
loc_82A6F990:
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// blt cr6,0x82a6f9c0
	if (cr6.lt) goto loc_82A6F9C0;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82A6F9C0;
	sub_825952B8(ctx, base);
loc_82A6F9C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6F9CC"))) PPC_WEAK_FUNC(sub_82A6F9CC);
PPC_FUNC_IMPL(__imp__sub_82A6F9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6F9D0"))) PPC_WEAK_FUNC(sub_82A6F9D0);
PPC_FUNC_IMPL(__imp__sub_82A6F9D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A6F9D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r11,16360
	ctx.r30.s64 = ctx.r11.s64 + 16360;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x82A6FA00;
	sub_82D2F6D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83763ef8
	ctx.lr = 0x82A6FA08;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a6fa7c
	if (cr6.eq) goto loc_82A6FA7C;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82a6fa7c
	if (cr6.eq) goto loc_82A6FA7C;
	// lwz r11,408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 408);
	// lis r4,230
	ctx.r4.s64 = 15073280;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a6fa34
	if (!cr6.eq) goto loc_82A6FA34;
	// ori r4,r4,138
	ctx.r4.u64 = ctx.r4.u64 | 138;
	// b 0x82a6fa38
	goto loc_82A6FA38;
loc_82A6FA34:
	// ori r4,r4,135
	ctx.r4.u64 = ctx.r4.u64 | 135;
loc_82A6FA38:
	// bl 0x82d2ada8
	ctx.lr = 0x82A6FA3C;
	sub_82D2ADA8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_82A6FA44:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzu r5,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2a258
	ctx.lr = 0x82A6FA54;
	sub_82D2A258(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x82a6fa44
	if (cr6.lt) goto loc_82A6FA44;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19788
	ctx.lr = 0x82A6FA70;
	sub_82D19788(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83103100
	ctx.lr = 0x82A6FA7C;
	sub_83103100(ctx, base);
loc_82A6FA7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6FA84"))) PPC_WEAK_FUNC(sub_82A6FA84);
PPC_FUNC_IMPL(__imp__sub_82A6FA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6FA88"))) PPC_WEAK_FUNC(sub_82A6FA88);
PPC_FUNC_IMPL(__imp__sub_82A6FA88) {
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
	// bl 0x83763ef8
	ctx.lr = 0x82A6FAA4;
	sub_83763EF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a6fb28
	if (cr6.eq) goto loc_82A6FB28;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82a6faf0
	if (cr6.eq) goto loc_82A6FAF0;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82a6fb28
	if (!cr6.eq) goto loc_82A6FB28;
	// lwz r11,408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 408);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// bne cr6,0x82a6fae8
	if (!cr6.eq) goto loc_82A6FAE8;
	// addi r11,r11,16420
	ctx.r11.s64 = ctx.r11.s64 + 16420;
	// addi r5,r11,-12
	ctx.r5.s64 = ctx.r11.s64 + -12;
	// b 0x82a6fb24
	goto loc_82A6FB24;
loc_82A6FAE8:
	// addi r5,r11,16420
	ctx.r5.s64 = ctx.r11.s64 + 16420;
	// b 0x82a6fb24
	goto loc_82A6FB24;
loc_82A6FAF0:
	// lwz r11,408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 408);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,16420
	ctx.r11.s64 = ctx.r11.s64 + 16420;
	// bne cr6,0x82a6fb20
	if (!cr6.eq) goto loc_82A6FB20;
	// addi r5,r11,-32
	ctx.r5.s64 = ctx.r11.s64 + -32;
	// bl 0x82d20da8
	ctx.lr = 0x82A6FB14;
	sub_82D20DA8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,380(r30)
	PPC_STORE_U8(ctx.r30.u32 + 380, ctx.r10.u8);
	// b 0x82a6fb28
	goto loc_82A6FB28;
loc_82A6FB20:
	// addi r5,r11,-24
	ctx.r5.s64 = ctx.r11.s64 + -24;
loc_82A6FB24:
	// bl 0x82d20da8
	ctx.lr = 0x82A6FB28;
	sub_82D20DA8(ctx, base);
loc_82A6FB28:
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

__attribute__((alias("__imp__sub_82A6FB44"))) PPC_WEAK_FUNC(sub_82A6FB44);
PPC_FUNC_IMPL(__imp__sub_82A6FB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6FB48"))) PPC_WEAK_FUNC(sub_82A6FB48);
PPC_FUNC_IMPL(__imp__sub_82A6FB48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82a6fb5c
	if (!cr6.eq) goto loc_82A6FB5C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// blr 
	return;
loc_82A6FB5C:
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6FB70"))) PPC_WEAK_FUNC(sub_82A6FB70);
PPC_FUNC_IMPL(__imp__sub_82A6FB70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A6FB78;
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
	ctx.lr = 0x82A6FB9C;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a6fbf0
	if (cr6.eq) goto loc_82A6FBF0;
	// bl 0x8308e078
	ctx.lr = 0x82A6FBAC;
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
	ctx.lr = 0x82A6FBC4;
	sub_82D253F8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,16512
	ctx.r9.s64 = ctx.r11.s64 + 16512;
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
loc_82A6FBF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6FBFC"))) PPC_WEAK_FUNC(sub_82A6FBFC);
PPC_FUNC_IMPL(__imp__sub_82A6FBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6FC00"))) PPC_WEAK_FUNC(sub_82A6FC00);
PPC_FUNC_IMPL(__imp__sub_82A6FC00) {
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
	// addi r9,r11,16512
	ctx.r9.s64 = ctx.r11.s64 + 16512;
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
	ctx.lr = 0x82A6FC38;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a6fc50
	if (cr6.eq) goto loc_82A6FC50;
	// bl 0x82416268
	ctx.lr = 0x82A6FC4C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A6FC50:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6FC68"))) PPC_WEAK_FUNC(sub_82A6FC68);
PPC_FUNC_IMPL(__imp__sub_82A6FC68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a6fc78
	if (cr6.lt) goto loc_82A6FC78;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82A6FC78:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82a6fb70
	sub_82A6FB70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6FC80"))) PPC_WEAK_FUNC(sub_82A6FC80);
PPC_FUNC_IMPL(__imp__sub_82A6FC80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A6FCA4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// subfc r9,r31,r3
	xer.ca = ctx.r3.u32 >= ctx.r31.u32;
	ctx.r9.s64 = ctx.r3.s64 - ctx.r31.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
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

__attribute__((alias("__imp__sub_82A6FCC4"))) PPC_WEAK_FUNC(sub_82A6FCC4);
PPC_FUNC_IMPL(__imp__sub_82A6FCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6FCC8"))) PPC_WEAK_FUNC(sub_82A6FCC8);
PPC_FUNC_IMPL(__imp__sub_82A6FCC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6FCE0"))) PPC_WEAK_FUNC(sub_82A6FCE0);
PPC_FUNC_IMPL(__imp__sub_82A6FCE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82A6FCE8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	ctx.lr = 0x82A6FD00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82A6FD0C;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82A6FD14;
	sub_82D33DB0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82a6fda8
	if (cr6.eq) goto loc_82A6FDA8;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r27,r10,17092
	ctx.r27.s64 = ctx.r10.s64 + 17092;
	// addi r28,r11,25056
	ctx.r28.s64 = ctx.r11.s64 + 25056;
loc_82A6FD38:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bdc948
	ctx.lr = 0x82A6FD4C;
	sub_82BDC948(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82A6FD58;
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
	ctx.lr = 0x82A6FD70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a6fd84
	if (cr6.eq) goto loc_82A6FD84;
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
	// lwzx r4,r29,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x82d29598
	ctx.lr = 0x82A6FD84;
	sub_82D29598(ctx, base);
loc_82A6FD84:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwzx r4,r29,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d233b0
	ctx.lr = 0x82A6FD98;
	sub_82D233B0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, xer);
	// blt cr6,0x82a6fd38
	if (cr6.lt) goto loc_82A6FD38;
loc_82A6FDA8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82A6FDB4;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a6fdcc
	if (cr6.eq) goto loc_82A6FDCC;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2b608
	ctx.lr = 0x82A6FDCC;
	sub_82D2B608(ctx, base);
loc_82A6FDCC:
	// li r4,199
	ctx.r4.s64 = 199;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d1a998
	ctx.lr = 0x82A6FDD8;
	sub_82D1A998(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82A6FDE8;
	sub_82D19788(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6FDF4"))) PPC_WEAK_FUNC(sub_82A6FDF4);
PPC_FUNC_IMPL(__imp__sub_82A6FDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6FDF8"))) PPC_WEAK_FUNC(sub_82A6FDF8);
PPC_FUNC_IMPL(__imp__sub_82A6FDF8) {
	PPC_FUNC_PROLOGUE();
	// lis r3,32
	ctx.r3.s64 = 2097152;
	// ori r3,r3,89
	ctx.r3.u64 = ctx.r3.u64 | 89;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6FE04"))) PPC_WEAK_FUNC(sub_82A6FE04);
PPC_FUNC_IMPL(__imp__sub_82A6FE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A6FE08"))) PPC_WEAK_FUNC(sub_82A6FE08);
PPC_FUNC_IMPL(__imp__sub_82A6FE08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82a6fe38
	if (cr6.lt) goto loc_82A6FE38;
	// beq cr6,0x82a6fe28
	if (cr6.eq) goto loc_82A6FE28;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82a6fe40
	if (!cr6.eq) goto loc_82A6FE40;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82A6FE28:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A6FE38:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r11.u32);
loc_82A6FE40:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6FE48"))) PPC_WEAK_FUNC(sub_82A6FE48);
PPC_FUNC_IMPL(__imp__sub_82A6FE48) {
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
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82a6fe7c
	if (!cr6.eq) goto loc_82A6FE7C;
	// bl 0x82d1c1a8
	ctx.lr = 0x82A6FE6C;
	sub_82D1C1A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82a6fe7c
	if (cr6.lt) goto loc_82A6FE7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1b890
	ctx.lr = 0x82A6FE7C;
	sub_82D1B890(ctx, base);
loc_82A6FE7C:
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

__attribute__((alias("__imp__sub_82A6FE90"))) PPC_WEAK_FUNC(sub_82A6FE90);
PPC_FUNC_IMPL(__imp__sub_82A6FE90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A6FE98;
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
	ctx.lr = 0x82A6FEBC;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a6ff04
	if (cr6.eq) goto loc_82A6FF04;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bdc848
	ctx.lr = 0x82A6FED8;
	sub_82BDC848(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,17184
	ctx.r9.s64 = ctx.r11.s64 + 17184;
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
	// stw r7,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A6FF04:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6FF10"))) PPC_WEAK_FUNC(sub_82A6FF10);
PPC_FUNC_IMPL(__imp__sub_82A6FF10) {
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
	// addi r9,r11,17184
	ctx.r9.s64 = ctx.r11.s64 + 17184;
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
	ctx.lr = 0x82A6FF48;
	sub_82BDC910(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a6ff60
	if (cr6.eq) goto loc_82A6FF60;
	// bl 0x82416268
	ctx.lr = 0x82A6FF5C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A6FF60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A6FF78"))) PPC_WEAK_FUNC(sub_82A6FF78);
PPC_FUNC_IMPL(__imp__sub_82A6FF78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a6ff88
	if (cr6.lt) goto loc_82A6FF88;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82A6FF88:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82a6fe90
	sub_82A6FE90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A6FF90"))) PPC_WEAK_FUNC(sub_82A6FF90);
PPC_FUNC_IMPL(__imp__sub_82A6FF90) {
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
	ctx.lr = 0x82A6FFBC;
	sub_82595718(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a6ffd8
	if (cr6.eq) goto loc_82A6FFD8;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r11,17536
	ctx.r10.s64 = ctx.r11.s64 + 17536;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82a6ffdc
	goto loc_82A6FFDC;
loc_82A6FFD8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82A6FFDC:
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
	ctx.lr = 0x82A6FFF8;
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

__attribute__((alias("__imp__sub_82A70010"))) PPC_WEAK_FUNC(sub_82A70010);
PPC_FUNC_IMPL(__imp__sub_82A70010) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// xor r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a70038
	if (!cr6.eq) goto loc_82A70038;
	// xor r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a7003c
	if (cr6.eq) goto loc_82A7003C;
loc_82A70038:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A7003C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a70058
	if (!cr6.eq) goto loc_82A70058;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,206(r3)
	PPC_STORE_U8(ctx.r3.u32 + 206, ctx.r11.u8);
	// stb r10,208(r3)
	PPC_STORE_U8(ctx.r3.u32 + 208, ctx.r10.u8);
loc_82A70058:
	// stw r4,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A70060"))) PPC_WEAK_FUNC(sub_82A70060);
PPC_FUNC_IMPL(__imp__sub_82A70060) {
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
	ctx.lr = 0x82A70084;
	sub_82BDC848(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,17984
	ctx.r8.s64 = ctx.r10.s64 + 17984;
	// addi r7,r9,17980
	ctx.r7.s64 = ctx.r9.s64 + 17980;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// clrlwi r6,r30,24
	ctx.r6.u64 = ctx.r30.u32 & 0xFF;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82a700d8
	if (!cr6.eq) goto loc_82A700D8;
	// bl 0x83763ef8
	ctx.lr = 0x82A700B8;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a700d8
	if (cr6.eq) goto loc_82A700D8;
	// bl 0x83763ef8
	ctx.lr = 0x82A700C4;
	sub_83763EF8(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// bl 0x8376eb58
	ctx.lr = 0x82A700D0;
	sub_8376EB58(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d17b90
	ctx.lr = 0x82A700D8;
	sub_82D17B90(ctx, base);
loc_82A700D8:
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

__attribute__((alias("__imp__sub_82A700F4"))) PPC_WEAK_FUNC(sub_82A700F4);
PPC_FUNC_IMPL(__imp__sub_82A700F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A700F8"))) PPC_WEAK_FUNC(sub_82A700F8);
PPC_FUNC_IMPL(__imp__sub_82A700F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82d1dc40
	sub_82D1DC40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A700FC"))) PPC_WEAK_FUNC(sub_82A700FC);
PPC_FUNC_IMPL(__imp__sub_82A700FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A70100"))) PPC_WEAK_FUNC(sub_82A70100);
PPC_FUNC_IMPL(__imp__sub_82A70100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82A70108;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83763ef8
	ctx.lr = 0x82A70114;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a70140
	if (cr6.eq) goto loc_82A70140;
	// bl 0x83763ef8
	ctx.lr = 0x82A70120;
	sub_83763EF8(ctx, base);
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// bl 0x8376eaa0
	ctx.lr = 0x82A70128;
	sub_8376EAA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a70140
	if (!cr6.eq) goto loc_82A70140;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82A70140:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d17b90
	ctx.lr = 0x82A70148;
	sub_82D17B90(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A7015C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x83763ef8
	ctx.lr = 0x82A70164;
	sub_83763EF8(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a701c0
	if (cr6.eq) goto loc_82A701C0;
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// lwz r10,25296(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25296);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82a701a0
	if (!cr6.eq) goto loc_82A701A0;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a701a4
	if (cr6.eq) goto loc_82A701A4;
loc_82A701A0:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82A701A4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a701bc
	if (!cr6.eq) goto loc_82A701BC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r24,208(r3)
	PPC_STORE_U8(ctx.r3.u32 + 208, ctx.r24.u8);
	// stb r11,206(r3)
	PPC_STORE_U8(ctx.r3.u32 + 206, ctx.r11.u8);
loc_82A701BC:
	// stw r10,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r10.u32);
loc_82A701C0:
	// li r4,198
	ctx.r4.s64 = 198;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d1a998
	ctx.lr = 0x82A701CC;
	sub_82D1A998(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19788
	ctx.lr = 0x82A701DC;
	sub_82D19788(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82A701E4;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82A701EC;
	sub_82D33DB0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82a7027c
	if (cr6.eq) goto loc_82A7027C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// addi r28,r11,17872
	ctx.r28.s64 = ctx.r11.s64 + 17872;
	// addi r27,r10,25200
	ctx.r27.s64 = ctx.r10.s64 + 25200;
loc_82A70210:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bdc948
	ctx.lr = 0x82A70224;
	sub_82BDC948(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82A70230;
	sub_82D33DB0(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r28,16
	ctx.r4.s64 = ctx.r28.s64 + 16;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A70248;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a70258
	if (cr6.eq) goto loc_82A70258;
	// lwzx r4,r30,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// bl 0x82d29598
	ctx.lr = 0x82A70258;
	sub_82D29598(ctx, base);
loc_82A70258:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwzx r4,r30,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d233b0
	ctx.lr = 0x82A7026C;
	sub_82D233B0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r31,r25
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, xer);
	// blt cr6,0x82a70210
	if (cr6.lt) goto loc_82A70210;
loc_82A7027C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82A70288;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a702a0
	if (cr6.eq) goto loc_82A702A0;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2b608
	ctx.lr = 0x82A702A0;
	sub_82D2B608(ctx, base);
loc_82A702A0:
	// bl 0x83763ef8
	ctx.lr = 0x82A702A4;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a702d8
	if (cr6.eq) goto loc_82A702D8;
	// bl 0x83763ef8
	ctx.lr = 0x82A702B0;
	sub_83763EF8(ctx, base);
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a702c4
	if (cr6.eq) goto loc_82A702C4;
	// bl 0x83763ef8
	ctx.lr = 0x82A702C0;
	sub_83763EF8(ctx, base);
	// bl 0x83765208
	ctx.lr = 0x82A702C4;
	sub_83765208(ctx, base);
loc_82A702C4:
	// bl 0x83763ef8
	ctx.lr = 0x82A702C8;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a702d8
	if (cr6.eq) goto loc_82A702D8;
	// bl 0x83763ef8
	ctx.lr = 0x82A702D4;
	sub_83763EF8(ctx, base);
	// stw r24,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r24.u32);
loc_82A702D8:
	// bl 0x82bda660
	ctx.lr = 0x82A702DC;
	sub_82BDA660(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A702E8"))) PPC_WEAK_FUNC(sub_82A702E8);
PPC_FUNC_IMPL(__imp__sub_82A702E8) {
	PPC_FUNC_PROLOGUE();
	// lis r3,63
	ctx.r3.s64 = 4128768;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A702F4"))) PPC_WEAK_FUNC(sub_82A702F4);
PPC_FUNC_IMPL(__imp__sub_82A702F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A702F8"))) PPC_WEAK_FUNC(sub_82A702F8);
PPC_FUNC_IMPL(__imp__sub_82A702F8) {
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
	// lwz r11,200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a70358
	if (!cr6.eq) goto loc_82A70358;
	// lwz r3,204(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a70358
	if (cr6.eq) goto loc_82A70358;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A70334;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-31778
	ctx.r9.s64 = -2082603008;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// addi r8,r9,25200
	ctx.r8.s64 = ctx.r9.s64 + 25200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x82d20da8
	ctx.lr = 0x82A70358;
	sub_82D20DA8(ctx, base);
loc_82A70358:
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

__attribute__((alias("__imp__sub_82A70370"))) PPC_WEAK_FUNC(sub_82A70370);
PPC_FUNC_IMPL(__imp__sub_82A70370) {
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
	// lwz r11,200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a70468
	if (!cr6.eq) goto loc_82A70468;
	// bl 0x82d1c1a8
	ctx.lr = 0x82A70398;
	sub_82D1C1A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82a70468
	if (cr6.lt) goto loc_82A70468;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82a70448
	if (cr6.eq) goto loc_82A70448;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x82a70414
	if (cr6.eq) goto loc_82A70414;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82a70460
	if (!cr6.eq) goto loc_82A70460;
	// bl 0x82bda618
	ctx.lr = 0x82A703BC;
	sub_82BDA618(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a703d0
	if (cr6.eq) goto loc_82A703D0;
	// bl 0x82bda618
	ctx.lr = 0x82A703C8;
	sub_82BDA618(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bda498
	ctx.lr = 0x82A703D0;
	sub_82BDA498(ctx, base);
loc_82A703D0:
	// bl 0x83763ef8
	ctx.lr = 0x82A703D4;
	sub_83763EF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a70460
	if (cr6.eq) goto loc_82A70460;
	// bl 0x837641f0
	ctx.lr = 0x82A703E4;
	sub_837641F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83764218
	ctx.lr = 0x82A703EC;
	sub_83764218(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// stw r11,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r11.u32);
	// stb r10,380(r31)
	PPC_STORE_U8(ctx.r31.u32 + 380, ctx.r10.u8);
	// stw r11,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// stw r11,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r11.u32);
	// b 0x82a70460
	goto loc_82A70460;
loc_82A70414:
	// bl 0x82d9c090
	ctx.lr = 0x82A70418;
	sub_82D9C090(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 204, ctx.r3.u32);
	// beq cr6,0x82a70460
	if (cr6.eq) goto loc_82A70460;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d199d0
	ctx.lr = 0x82A70430;
	sub_82D199D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,204(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// bl 0x83103100
	ctx.lr = 0x82A7043C;
	sub_83103100(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,200(r30)
	PPC_STORE_U32(ctx.r30.u32 + 200, ctx.r11.u32);
	// b 0x82a70468
	goto loc_82A70468;
loc_82A70448:
	// bl 0x83763ef8
	ctx.lr = 0x82A7044C;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a70460
	if (cr6.eq) goto loc_82A70460;
	// bl 0x83763ef8
	ctx.lr = 0x82A70458;
	sub_83763EF8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r11.u32);
loc_82A70460:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bdccb8
	ctx.lr = 0x82A70468;
	sub_82BDCCB8(ctx, base);
loc_82A70468:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A70480"))) PPC_WEAK_FUNC(sub_82A70480);
PPC_FUNC_IMPL(__imp__sub_82A70480) {
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
	// bl 0x83763ef8
	ctx.lr = 0x82A70490;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a704a4
	if (cr6.eq) goto loc_82A704A4;
	// bl 0x83763ef8
	ctx.lr = 0x82A7049C;
	sub_83763EF8(ctx, base);
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// bl 0x8376ea18
	ctx.lr = 0x82A704A4;
	sub_8376EA18(ctx, base);
loc_82A704A4:
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

__attribute__((alias("__imp__sub_82A704B8"))) PPC_WEAK_FUNC(sub_82A704B8);
PPC_FUNC_IMPL(__imp__sub_82A704B8) {
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r11,17984
	ctx.r9.s64 = ctx.r11.s64 + 17984;
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
	ctx.lr = 0x82A704F0;
	sub_82BDC910(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a70508
	if (cr6.eq) goto loc_82A70508;
	// bl 0x82416268
	ctx.lr = 0x82A70504;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A70508:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A70520"))) PPC_WEAK_FUNC(sub_82A70520);
PPC_FUNC_IMPL(__imp__sub_82A70520) {
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
	// blt cr6,0x82a70548
	if (cr6.lt) goto loc_82A70548;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82a7054c
	goto loc_82A7054C;
loc_82A70548:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82A7054C:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,208
	ctx.r4.s64 = 208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A70568;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a70580
	if (cr6.eq) goto loc_82A70580;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a70060
	ctx.lr = 0x82A7057C;
	sub_82A70060(ctx, base);
	// b 0x82a70584
	goto loc_82A70584;
loc_82A70580:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A70584:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A7059C"))) PPC_WEAK_FUNC(sub_82A7059C);
PPC_FUNC_IMPL(__imp__sub_82A7059C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A705A0"))) PPC_WEAK_FUNC(sub_82A705A0);
PPC_FUNC_IMPL(__imp__sub_82A705A0) {
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
	// ori r4,r4,56
	ctx.r4.u64 = ctx.r4.u64 | 56;
	// bl 0x82d21730
	ctx.lr = 0x82A705BC;
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

__attribute__((alias("__imp__sub_82A705D0"))) PPC_WEAK_FUNC(sub_82A705D0);
PPC_FUNC_IMPL(__imp__sub_82A705D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,262
	ctx.r10.s64 = 17170432;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r8,r10,2
	ctx.r8.u64 = ctx.r10.u64 | 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A705F8"))) PPC_WEAK_FUNC(sub_82A705F8);
PPC_FUNC_IMPL(__imp__sub_82A705F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A70600;
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
	ctx.lr = 0x82A70624;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a70678
	if (cr6.eq) goto loc_82A70678;
	// bl 0x8308e078
	ctx.lr = 0x82A70634;
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
	ctx.lr = 0x82A7064C;
	sub_82D253F8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,18672
	ctx.r9.s64 = ctx.r11.s64 + 18672;
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
loc_82A70678:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A70684"))) PPC_WEAK_FUNC(sub_82A70684);
PPC_FUNC_IMPL(__imp__sub_82A70684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A70688"))) PPC_WEAK_FUNC(sub_82A70688);
PPC_FUNC_IMPL(__imp__sub_82A70688) {
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
	// addi r9,r11,18672
	ctx.r9.s64 = ctx.r11.s64 + 18672;
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
	ctx.lr = 0x82A706C0;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a706d8
	if (cr6.eq) goto loc_82A706D8;
	// bl 0x82416268
	ctx.lr = 0x82A706D4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A706D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A706F0"))) PPC_WEAK_FUNC(sub_82A706F0);
PPC_FUNC_IMPL(__imp__sub_82A706F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a70700
	if (cr6.lt) goto loc_82A70700;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82A70700:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82a705f8
	sub_82A705F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A7070C"))) PPC_WEAK_FUNC(sub_82A7070C);
PPC_FUNC_IMPL(__imp__sub_82A7070C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A70710"))) PPC_WEAK_FUNC(sub_82A70710);
PPC_FUNC_IMPL(__imp__sub_82A70710) {
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
	// bne cr6,0x82a70734
	if (!cr6.eq) goto loc_82A70734;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d20da8
	ctx.lr = 0x82A70734;
	sub_82D20DA8(ctx, base);
loc_82A70734:
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

__attribute__((alias("__imp__sub_82A70748"))) PPC_WEAK_FUNC(sub_82A70748);
PPC_FUNC_IMPL(__imp__sub_82A70748) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,262
	ctx.r10.s64 = 17170432;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r8,r10,2
	ctx.r8.u64 = ctx.r10.u64 | 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A70770"))) PPC_WEAK_FUNC(sub_82A70770);
PPC_FUNC_IMPL(__imp__sub_82A70770) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A70778;
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
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A707A0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a707f8
	if (cr6.eq) goto loc_82A707F8;
	// bl 0x8308e078
	ctx.lr = 0x82A707B0;
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
	ctx.lr = 0x82A707C8;
	sub_82D253F8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stb r28,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r28.u8);
	// addi r9,r11,19312
	ctx.r9.s64 = ctx.r11.s64 + 19312;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82A707F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A70804"))) PPC_WEAK_FUNC(sub_82A70804);
PPC_FUNC_IMPL(__imp__sub_82A70804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A70808"))) PPC_WEAK_FUNC(sub_82A70808);
PPC_FUNC_IMPL(__imp__sub_82A70808) {
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
	// addi r9,r11,19312
	ctx.r9.s64 = ctx.r11.s64 + 19312;
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
	ctx.lr = 0x82A70840;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a70858
	if (cr6.eq) goto loc_82A70858;
	// bl 0x82416268
	ctx.lr = 0x82A70854;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A70858:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A70870"))) PPC_WEAK_FUNC(sub_82A70870);
PPC_FUNC_IMPL(__imp__sub_82A70870) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a70880
	if (cr6.lt) goto loc_82A70880;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82A70880:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82a70770
	sub_82A70770(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A7088C"))) PPC_WEAK_FUNC(sub_82A7088C);
PPC_FUNC_IMPL(__imp__sub_82A7088C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A70890"))) PPC_WEAK_FUNC(sub_82A70890);
PPC_FUNC_IMPL(__imp__sub_82A70890) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a708a0
	if (cr6.lt) goto loc_82A708A0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82A708A0:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82a70770
	sub_82A70770(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A708AC"))) PPC_WEAK_FUNC(sub_82A708AC);
PPC_FUNC_IMPL(__imp__sub_82A708AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A708B0"))) PPC_WEAK_FUNC(sub_82A708B0);
PPC_FUNC_IMPL(__imp__sub_82A708B0) {
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
	ctx.lr = 0x82A708C8;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a70924
	if (cr6.eq) goto loc_82A70924;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83763ef8
	ctx.lr = 0x82A708D8;
	sub_83763EF8(ctx, base);
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// xor r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a70900
	if (!cr6.eq) goto loc_82A70900;
	// xor r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a70904
	if (cr6.eq) goto loc_82A70904;
loc_82A70900:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A70904:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a70920
	if (!cr6.eq) goto loc_82A70920;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,206(r3)
	PPC_STORE_U8(ctx.r3.u32 + 206, ctx.r11.u8);
	// stb r10,208(r3)
	PPC_STORE_U8(ctx.r3.u32 + 208, ctx.r10.u8);
loc_82A70920:
	// stw r31,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r31.u32);
loc_82A70924:
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

__attribute__((alias("__imp__sub_82A70938"))) PPC_WEAK_FUNC(sub_82A70938);
PPC_FUNC_IMPL(__imp__sub_82A70938) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A70940;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
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
	ctx.lr = 0x82A70964;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a70a14
	if (cr6.eq) goto loc_82A70A14;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82bdd188
	ctx.lr = 0x82A7097C;
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
	// addi r6,r9,2224
	ctx.r6.s64 = ctx.r9.s64 + 2224;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r7,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r7.u32);
	// stw r6,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r6.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r29,100(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x8376e978
	ctx.lr = 0x82A709BC;
	sub_8376E978(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// beq cr6,0x82a709f0
	if (cr6.eq) goto loc_82A709F0;
loc_82A709D0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82b399d8
	ctx.lr = 0x82A709DC;
	sub_82B399D8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82a709d0
	if (!cr6.eq) goto loc_82A709D0;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82A709F0:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a70a08
	if (cr6.eq) goto loc_82A70A08;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82A70A08;
	sub_825952B8(ctx, base);
loc_82A70A08:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A70A14:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A70A20"))) PPC_WEAK_FUNC(sub_82A70A20);
PPC_FUNC_IMPL(__imp__sub_82A70A20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a70a30
	if (cr6.lt) goto loc_82A70A30;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82A70A30:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82a70938
	sub_82A70938(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A70A38"))) PPC_WEAK_FUNC(sub_82A70A38);
PPC_FUNC_IMPL(__imp__sub_82A70A38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A70A40;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82A70A4C;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82A70A54;
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
	// addi r27,r10,20268
	ctx.r27.s64 = ctx.r10.s64 + 20268;
	// addi r28,r11,25744
	ctx.r28.s64 = ctx.r11.s64 + 25744;
loc_82A70A70:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bdc948
	ctx.lr = 0x82A70A84;
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
	ctx.lr = 0x82A70A98;
	sub_82D233B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82A70AA4;
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
	ctx.lr = 0x82A70ABC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a70ad0
	if (cr6.eq) goto loc_82A70AD0;
	// addi r11,r28,12
	ctx.r11.s64 = ctx.r28.s64 + 12;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82d29598
	ctx.lr = 0x82A70AD0;
	sub_82D29598(ctx, base);
loc_82A70AD0:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r30,12
	cr6.compare<uint32_t>(ctx.r30.u32, 12, xer);
	// blt cr6,0x82a70a70
	if (cr6.lt) goto loc_82A70A70;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A70AEC"))) PPC_WEAK_FUNC(sub_82A70AEC);
PPC_FUNC_IMPL(__imp__sub_82A70AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A70AF0"))) PPC_WEAK_FUNC(sub_82A70AF0);
PPC_FUNC_IMPL(__imp__sub_82A70AF0) {
	PPC_FUNC_PROLOGUE();
	// lis r3,38
	ctx.r3.s64 = 2490368;
	// ori r3,r3,103
	ctx.r3.u64 = ctx.r3.u64 | 103;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A70AFC"))) PPC_WEAK_FUNC(sub_82A70AFC);
PPC_FUNC_IMPL(__imp__sub_82A70AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A70B00"))) PPC_WEAK_FUNC(sub_82A70B00);
PPC_FUNC_IMPL(__imp__sub_82A70B00) {
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
	// bl 0x82d1c1a8
	ctx.lr = 0x82A70B1C;
	sub_82D1C1A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82a70b74
	if (cr6.lt) goto loc_82A70B74;
	// bl 0x83763ef8
	ctx.lr = 0x82A70B2C;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a70b6c
	if (cr6.eq) goto loc_82A70B6C;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// blt cr6,0x82a70b60
	if (cr6.lt) goto loc_82A70B60;
	// beq cr6,0x82a70b54
	if (cr6.eq) goto loc_82A70B54;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bge cr6,0x82a70b6c
	if (!cr6.lt) goto loc_82A70B6C;
	// bl 0x83763ef8
	ctx.lr = 0x82A70B4C;
	sub_83763EF8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82a70b68
	goto loc_82A70B68;
loc_82A70B54:
	// bl 0x83763ef8
	ctx.lr = 0x82A70B58;
	sub_83763EF8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82a70b68
	goto loc_82A70B68;
loc_82A70B60:
	// bl 0x83763ef8
	ctx.lr = 0x82A70B64;
	sub_83763EF8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A70B68:
	// stw r11,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r11.u32);
loc_82A70B6C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d1b890
	ctx.lr = 0x82A70B74;
	sub_82D1B890(ctx, base);
loc_82A70B74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A70B8C"))) PPC_WEAK_FUNC(sub_82A70B8C);
PPC_FUNC_IMPL(__imp__sub_82A70B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A70B90"))) PPC_WEAK_FUNC(sub_82A70B90);
PPC_FUNC_IMPL(__imp__sub_82A70B90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A70B98;
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
	ctx.lr = 0x82A70BBC;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a70bfc
	if (cr6.eq) goto loc_82A70BFC;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bdc848
	ctx.lr = 0x82A70BD8;
	sub_82BDC848(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,20360
	ctx.r9.s64 = ctx.r11.s64 + 20360;
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
loc_82A70BFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A70C08"))) PPC_WEAK_FUNC(sub_82A70C08);
PPC_FUNC_IMPL(__imp__sub_82A70C08) {
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
	// addi r9,r11,20360
	ctx.r9.s64 = ctx.r11.s64 + 20360;
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
	ctx.lr = 0x82A70C40;
	sub_82BDC910(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a70c58
	if (cr6.eq) goto loc_82A70C58;
	// bl 0x82416268
	ctx.lr = 0x82A70C54;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A70C58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A70C70"))) PPC_WEAK_FUNC(sub_82A70C70);
PPC_FUNC_IMPL(__imp__sub_82A70C70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a70c80
	if (cr6.lt) goto loc_82A70C80;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82A70C80:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82a70b90
	sub_82A70B90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A70C88"))) PPC_WEAK_FUNC(sub_82A70C88);
PPC_FUNC_IMPL(__imp__sub_82A70C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A70C90;
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
	ctx.lr = 0x82A70CA4;
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
	ctx.lr = 0x82A70CBC;
	sub_82D253F8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,21128
	ctx.r9.s64 = ctx.r11.s64 + 21128;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// stw r6,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r5,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r5.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A70CF8"))) PPC_WEAK_FUNC(sub_82A70CF8);
PPC_FUNC_IMPL(__imp__sub_82A70CF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A70D00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,20968
	ctx.r30.s64 = ctx.r11.s64 + 20968;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x82A70D24;
	sub_82D2FA90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a70d64
	if (cr6.eq) goto loc_82A70D64;
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bge cr6,0x82a70d48
	if (!cr6.lt) goto loc_82A70D48;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82d2ada8
	ctx.lr = 0x82A70D48;
	sub_82D2ADA8(ctx, base);
loc_82A70D48:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82A70D58;
	sub_82D19788(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83103100
	ctx.lr = 0x82A70D64;
	sub_83103100(ctx, base);
loc_82A70D64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A70D6C"))) PPC_WEAK_FUNC(sub_82A70D6C);
PPC_FUNC_IMPL(__imp__sub_82A70D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A70D70"))) PPC_WEAK_FUNC(sub_82A70D70);
PPC_FUNC_IMPL(__imp__sub_82A70D70) {
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
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a70d98
	if (!cr6.eq) goto loc_82A70D98;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,21004
	ctx.r5.s64 = ctx.r11.s64 + 21004;
	// bl 0x82d20da8
	ctx.lr = 0x82A70D98;
	sub_82D20DA8(ctx, base);
loc_82A70D98:
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

__attribute__((alias("__imp__sub_82A70DAC"))) PPC_WEAK_FUNC(sub_82A70DAC);
PPC_FUNC_IMPL(__imp__sub_82A70DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A70DB0"))) PPC_WEAK_FUNC(sub_82A70DB0);
PPC_FUNC_IMPL(__imp__sub_82A70DB0) {
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
	// bl 0x8306c7a0
	ctx.lr = 0x82A70DD4;
	sub_8306C7A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a70e28
	if (cr6.eq) goto loc_82A70E28;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a70e28
	if (cr6.eq) goto loc_82A70E28;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82A70DFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a70e28
	if (cr6.eq) goto loc_82A70E28;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82a70e28
	if (cr6.lt) goto loc_82A70E28;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82a70e2c
	if (!cr6.gt) goto loc_82A70E2C;
loc_82A70E28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A70E2C:
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

__attribute__((alias("__imp__sub_82A70E44"))) PPC_WEAK_FUNC(sub_82A70E44);
PPC_FUNC_IMPL(__imp__sub_82A70E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A70E48"))) PPC_WEAK_FUNC(sub_82A70E48);
PPC_FUNC_IMPL(__imp__sub_82A70E48) {
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
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,25984(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25984);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82a70db0
	ctx.lr = 0x82A70E88;
	sub_82A70DB0(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82a70ea4
	if (cr6.eq) goto loc_82A70EA4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82A70EA4:
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

__attribute__((alias("__imp__sub_82A70EB8"))) PPC_WEAK_FUNC(sub_82A70EB8);
PPC_FUNC_IMPL(__imp__sub_82A70EB8) {
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
	// addi r9,r11,21128
	ctx.r9.s64 = ctx.r11.s64 + 21128;
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
	ctx.lr = 0x82A70EF0;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a70f08
	if (cr6.eq) goto loc_82A70F08;
	// bl 0x82416268
	ctx.lr = 0x82A70F04;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A70F08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A70F20"))) PPC_WEAK_FUNC(sub_82A70F20);
PPC_FUNC_IMPL(__imp__sub_82A70F20) {
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
	// bl 0x83763ef8
	ctx.lr = 0x82A70F38;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82a70f58
	if (!cr6.eq) goto loc_82A70F58;
loc_82A70F40:
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
loc_82A70F58:
	// bl 0x83763ef8
	ctx.lr = 0x82A70F5C;
	sub_83763EF8(ctx, base);
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a70f40
	if (cr6.eq) goto loc_82A70F40;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x82a70f40
	if (cr6.eq) goto loc_82A70F40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a70e48
	ctx.lr = 0x82A70F7C;
	sub_82A70E48(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8319fea0
	ctx.lr = 0x82A70F84;
	sub_8319FEA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82a70f98
	if (!cr6.eq) goto loc_82A70F98;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A70F98:
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82A70FB4"))) PPC_WEAK_FUNC(sub_82A70FB4);
PPC_FUNC_IMPL(__imp__sub_82A70FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A70FB8"))) PPC_WEAK_FUNC(sub_82A70FB8);
PPC_FUNC_IMPL(__imp__sub_82A70FB8) {
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
	// blt cr6,0x82a70fe0
	if (cr6.lt) goto loc_82A70FE0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82a70fe4
	goto loc_82A70FE4;
loc_82A70FE0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82A70FE4:
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
	ctx.lr = 0x82A71000;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a71018
	if (cr6.eq) goto loc_82A71018;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a70c88
	ctx.lr = 0x82A71014;
	sub_82A70C88(ctx, base);
	// b 0x82a7101c
	goto loc_82A7101C;
loc_82A71018:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A7101C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A71034"))) PPC_WEAK_FUNC(sub_82A71034);
PPC_FUNC_IMPL(__imp__sub_82A71034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A71038"))) PPC_WEAK_FUNC(sub_82A71038);
PPC_FUNC_IMPL(__imp__sub_82A71038) {
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
	// li r7,24
	ctx.r7.s64 = 24;
	// addi r6,r10,21012
	ctx.r6.s64 = ctx.r10.s64 + 21012;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x827a8810
	ctx.lr = 0x82A7106C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82a71080
	if (!cr6.eq) goto loc_82A71080;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r11.u8);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_82A71080:
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

__attribute__((alias("__imp__sub_82A71094"))) PPC_WEAK_FUNC(sub_82A71094);
PPC_FUNC_IMPL(__imp__sub_82A71094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A71098"))) PPC_WEAK_FUNC(sub_82A71098);
PPC_FUNC_IMPL(__imp__sub_82A71098) {
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
	ctx.lr = 0x82A710B0;
	sub_82D19BB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82a710c8
	if (cr6.lt) goto loc_82A710C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82a710c4
	if (cr6.eq) goto loc_82A710C4;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A710C4:
	// stw r11,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r11.u32);
loc_82A710C8:
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

__attribute__((alias("__imp__sub_82A710DC"))) PPC_WEAK_FUNC(sub_82A710DC);
PPC_FUNC_IMPL(__imp__sub_82A710DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A710E0"))) PPC_WEAK_FUNC(sub_82A710E0);
PPC_FUNC_IMPL(__imp__sub_82A710E0) {
	PPC_FUNC_PROLOGUE();
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 592, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A710EC"))) PPC_WEAK_FUNC(sub_82A710EC);
PPC_FUNC_IMPL(__imp__sub_82A710EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A710F0"))) PPC_WEAK_FUNC(sub_82A710F0);
PPC_FUNC_IMPL(__imp__sub_82A710F0) {
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
	// lwz r11,592(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 592);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82a71138
	if (cr6.lt) goto loc_82A71138;
	// beq cr6,0x82a71128
	if (cr6.eq) goto loc_82A71128;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82a71158
	if (!cr6.lt) goto loc_82A71158;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,21704
	ctx.r5.s64 = ctx.r11.s64 + 21704;
	// b 0x82a71144
	goto loc_82A71144;
loc_82A71128:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,21704
	ctx.r11.s64 = ctx.r11.s64 + 21704;
	// addi r5,r11,-8
	ctx.r5.s64 = ctx.r11.s64 + -8;
	// b 0x82a71144
	goto loc_82A71144;
loc_82A71138:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,21704
	ctx.r11.s64 = ctx.r11.s64 + 21704;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
loc_82A71144:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82A71150;
	sub_82D20DA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d29f60
	ctx.lr = 0x82A71158;
	sub_82D29F60(ctx, base);
loc_82A71158:
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

__attribute__((alias("__imp__sub_82A71170"))) PPC_WEAK_FUNC(sub_82A71170);
PPC_FUNC_IMPL(__imp__sub_82A71170) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A71178;
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
	// li r4,600
	ctx.r4.s64 = 600;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A7119C;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a711ec
	if (cr6.eq) goto loc_82A711EC;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d2f500
	ctx.lr = 0x82A711C0;
	sub_82D2F500(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,21800
	ctx.r9.s64 = ctx.r11.s64 + 21800;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A711EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A711F8"))) PPC_WEAK_FUNC(sub_82A711F8);
PPC_FUNC_IMPL(__imp__sub_82A711F8) {
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
	// addi r9,r11,21800
	ctx.r9.s64 = ctx.r11.s64 + 21800;
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
	// bl 0x82d2f5b0
	ctx.lr = 0x82A71230;
	sub_82D2F5B0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a71248
	if (cr6.eq) goto loc_82A71248;
	// bl 0x82416268
	ctx.lr = 0x82A71244;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A71248:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A71260"))) PPC_WEAK_FUNC(sub_82A71260);
PPC_FUNC_IMPL(__imp__sub_82A71260) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,2376(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2376);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x82a71290
	if (!cr6.eq) goto loc_82A71290;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a712d0
	goto loc_82A712D0;
loc_82A71290:
	// bl 0x83763ef8
	ctx.lr = 0x82A71294;
	sub_83763EF8(ctx, base);
	// lwz r3,288(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// bl 0x8376f660
	ctx.lr = 0x82A7129C;
	sub_8376F660(ctx, base);
	// lis r4,230
	ctx.r4.s64 = 15073280;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,77
	ctx.r4.u64 = ctx.r4.u64 | 77;
	// bl 0x82d2ada8
	ctx.lr = 0x82A712AC;
	sub_82D2ADA8(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82a712cc
	if (cr6.eq) goto loc_82A712CC;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d1eac0
	ctx.lr = 0x82A712CC;
	sub_82D1EAC0(ctx, base);
loc_82A712CC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82A712D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A712E8"))) PPC_WEAK_FUNC(sub_82A712E8);
PPC_FUNC_IMPL(__imp__sub_82A712E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82a712f8
	if (cr6.lt) goto loc_82A712F8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82A712F8:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82a71170
	sub_82A71170(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A71300"))) PPC_WEAK_FUNC(sub_82A71300);
PPC_FUNC_IMPL(__imp__sub_82A71300) {
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
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82a71330
	if (!cr6.eq) goto loc_82A71330;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,22436
	ctx.r11.s64 = ctx.r11.s64 + 22436;
	// addi r5,r11,-8
	ctx.r5.s64 = ctx.r11.s64 + -8;
	// b 0x82a713c8
	goto loc_82A713C8;
loc_82A71330:
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// bne cr6,0x82a713d4
	if (!cr6.eq) goto loc_82A713D4;
	// bl 0x83763ef8
	ctx.lr = 0x82A7133C;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a713c0
	if (cr6.eq) goto loc_82A713C0;
	// bl 0x83763ef8
	ctx.lr = 0x82A71348;
	sub_83763EF8(ctx, base);
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a713c0
	if (cr6.eq) goto loc_82A713C0;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82a713b0
	if (cr6.lt) goto loc_82A713B0;
	// beq cr6,0x82a71380
	if (cr6.eq) goto loc_82A71380;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82a713c0
	if (!cr6.lt) goto loc_82A713C0;
	// bl 0x83763ef8
	ctx.lr = 0x82A71370;
	sub_83763EF8(ctx, base);
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// b 0x82a713c0
	goto loc_82A713C0;
loc_82A71380:
	// bl 0x83763ef8
	ctx.lr = 0x82A71384;
	sub_83763EF8(ctx, base);
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// lwz r31,92(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x83763ef8
	ctx.lr = 0x82A71390;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r31,5
	cr6.compare<uint32_t>(ctx.r31.u32, 5, xer);
	// bge cr6,0x82a713c0
	if (!cr6.lt) goto loc_82A713C0;
	// addi r11,r31,29
	ctx.r11.s64 = ctx.r31.s64 + 29;
	// lwz r10,288(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// b 0x82a713c0
	goto loc_82A713C0;
loc_82A713B0:
	// bl 0x83763ef8
	ctx.lr = 0x82A713B4;
	sub_83763EF8(ctx, base);
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
loc_82A713C0:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,22436
	ctx.r5.s64 = ctx.r11.s64 + 22436;
loc_82A713C8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82A713D4;
	sub_82D20DA8(ctx, base);
loc_82A713D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A713EC"))) PPC_WEAK_FUNC(sub_82A713EC);
PPC_FUNC_IMPL(__imp__sub_82A713EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

