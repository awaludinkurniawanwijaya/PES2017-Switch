#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8375842C"))) PPC_WEAK_FUNC(sub_8375842C);
PPC_FUNC_IMPL(__imp__sub_8375842C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83758430"))) PPC_WEAK_FUNC(sub_83758430);
PPC_FUNC_IMPL(__imp__sub_83758430) {
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
	ctx.lr = 0x83758454;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83758480
	if (cr6.eq) goto loc_83758480;
	// lis r10,-32214
	ctx.r10.s64 = -2111176704;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,29532
	ctx.r9.s64 = ctx.r10.s64 + 29532;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83758480:
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

__attribute__((alias("__imp__sub_83758494"))) PPC_WEAK_FUNC(sub_83758494);
PPC_FUNC_IMPL(__imp__sub_83758494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83758498"))) PPC_WEAK_FUNC(sub_83758498);
PPC_FUNC_IMPL(__imp__sub_83758498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32214
	ctx.r9.s64 = -2111176704;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,30764
	ctx.r8.s64 = ctx.r9.s64 + 30764;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
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
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
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
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stfs f0,132(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stfs f0,140(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// stfs f0,144(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83758548"))) PPC_WEAK_FUNC(sub_83758548);
PPC_FUNC_IMPL(__imp__sub_83758548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83758550;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,30672
	ctx.r31.s64 = ctx.r11.s64 + 30672;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r31,-1080
	ctx.r4.s64 = ctx.r31.s64 + -1080;
	// bl 0x82535898
	ctx.lr = 0x83758570;
	sub_82535898(ctx, base);
	// addi r4,r31,-1068
	ctx.r4.s64 = ctx.r31.s64 + -1068;
	// bl 0x82535898
	ctx.lr = 0x83758578;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375857C;
	sub_82534770(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1060
	ctx.r4.s64 = ctx.r31.s64 + -1060;
	// bl 0x82535898
	ctx.lr = 0x8375858C;
	sub_82535898(ctx, base);
	// addi r4,r31,-1044
	ctx.r4.s64 = ctx.r31.s64 + -1044;
	// bl 0x82535898
	ctx.lr = 0x83758594;
	sub_82535898(ctx, base);
	// addi r4,r31,-1024
	ctx.r4.s64 = ctx.r31.s64 + -1024;
	// bl 0x82535898
	ctx.lr = 0x8375859C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837585A0;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1016
	ctx.r4.s64 = ctx.r31.s64 + -1016;
	// bl 0x82535898
	ctx.lr = 0x837585B4;
	sub_82535898(ctx, base);
	// addi r4,r31,-1000
	ctx.r4.s64 = ctx.r31.s64 + -1000;
	// bl 0x82535898
	ctx.lr = 0x837585BC;
	sub_82535898(ctx, base);
	// addi r4,r31,-980
	ctx.r4.s64 = ctx.r31.s64 + -980;
	// bl 0x82535898
	ctx.lr = 0x837585C4;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837585C8;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-972
	ctx.r4.s64 = ctx.r31.s64 + -972;
	// bl 0x82535898
	ctx.lr = 0x837585DC;
	sub_82535898(ctx, base);
	// addi r4,r31,-956
	ctx.r4.s64 = ctx.r31.s64 + -956;
	// bl 0x82535898
	ctx.lr = 0x837585E4;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837585E8;
	sub_82534928(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-940
	ctx.r4.s64 = ctx.r31.s64 + -940;
	// bl 0x82535898
	ctx.lr = 0x837585FC;
	sub_82535898(ctx, base);
	// addi r4,r31,-924
	ctx.r4.s64 = ctx.r31.s64 + -924;
	// bl 0x82535898
	ctx.lr = 0x83758604;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83758608;
	sub_82534928(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-908
	ctx.r4.s64 = ctx.r31.s64 + -908;
	// bl 0x82535898
	ctx.lr = 0x8375861C;
	sub_82535898(ctx, base);
	// addi r4,r31,-892
	ctx.r4.s64 = ctx.r31.s64 + -892;
	// bl 0x82535898
	ctx.lr = 0x83758624;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83758628;
	sub_82534928(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,24(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// addi r4,r31,-872
	ctx.r4.s64 = ctx.r31.s64 + -872;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375863C;
	sub_82535898(ctx, base);
	// addi r4,r31,-864
	ctx.r4.s64 = ctx.r31.s64 + -864;
	// bl 0x82535898
	ctx.lr = 0x83758644;
	sub_82535898(ctx, base);
	// addi r4,r31,-856
	ctx.r4.s64 = ctx.r31.s64 + -856;
	// bl 0x82535898
	ctx.lr = 0x8375864C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83758650;
	sub_82534928(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,28(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// addi r4,r31,-844
	ctx.r4.s64 = ctx.r31.s64 + -844;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x83758664;
	sub_82535898(ctx, base);
	// addi r4,r31,-836
	ctx.r4.s64 = ctx.r31.s64 + -836;
	// bl 0x82535898
	ctx.lr = 0x8375866C;
	sub_82535898(ctx, base);
	// addi r4,r31,-828
	ctx.r4.s64 = ctx.r31.s64 + -828;
	// bl 0x82535898
	ctx.lr = 0x83758674;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83758678;
	sub_82534928(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// stfs f8,32(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-812
	ctx.r4.s64 = ctx.r31.s64 + -812;
	// bl 0x82535898
	ctx.lr = 0x8375868C;
	sub_82535898(ctx, base);
	// addi r4,r31,-804
	ctx.r4.s64 = ctx.r31.s64 + -804;
	// bl 0x82535898
	ctx.lr = 0x83758694;
	sub_82535898(ctx, base);
	// addi r4,r31,-796
	ctx.r4.s64 = ctx.r31.s64 + -796;
	// bl 0x82535898
	ctx.lr = 0x8375869C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837586A0;
	sub_82534928(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// stfs f7,36(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-780
	ctx.r4.s64 = ctx.r31.s64 + -780;
	// bl 0x82535898
	ctx.lr = 0x837586B4;
	sub_82535898(ctx, base);
	// addi r4,r31,-772
	ctx.r4.s64 = ctx.r31.s64 + -772;
	// bl 0x82535898
	ctx.lr = 0x837586BC;
	sub_82535898(ctx, base);
	// addi r4,r31,-764
	ctx.r4.s64 = ctx.r31.s64 + -764;
	// bl 0x82535898
	ctx.lr = 0x837586C4;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837586C8;
	sub_82534928(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// stfs f6,40(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-752
	ctx.r4.s64 = ctx.r31.s64 + -752;
	// bl 0x82535898
	ctx.lr = 0x837586DC;
	sub_82535898(ctx, base);
	// addi r4,r31,-744
	ctx.r4.s64 = ctx.r31.s64 + -744;
	// bl 0x82535898
	ctx.lr = 0x837586E4;
	sub_82535898(ctx, base);
	// addi r4,r31,-736
	ctx.r4.s64 = ctx.r31.s64 + -736;
	// bl 0x82535898
	ctx.lr = 0x837586EC;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837586F0;
	sub_82534928(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// stfs f5,44(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-716
	ctx.r4.s64 = ctx.r31.s64 + -716;
	// bl 0x82535898
	ctx.lr = 0x83758704;
	sub_82535898(ctx, base);
	// addi r4,r31,-708
	ctx.r4.s64 = ctx.r31.s64 + -708;
	// bl 0x82535898
	ctx.lr = 0x8375870C;
	sub_82535898(ctx, base);
	// addi r4,r31,-700
	ctx.r4.s64 = ctx.r31.s64 + -700;
	// bl 0x82535898
	ctx.lr = 0x83758714;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83758718;
	sub_82534928(ctx, base);
	// frsp f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// stfs f4,48(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-680
	ctx.r4.s64 = ctx.r31.s64 + -680;
	// bl 0x82535898
	ctx.lr = 0x8375872C;
	sub_82535898(ctx, base);
	// addi r4,r31,-672
	ctx.r4.s64 = ctx.r31.s64 + -672;
	// bl 0x82535898
	ctx.lr = 0x83758734;
	sub_82535898(ctx, base);
	// addi r4,r31,-664
	ctx.r4.s64 = ctx.r31.s64 + -664;
	// bl 0x82535898
	ctx.lr = 0x8375873C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83758740;
	sub_82534928(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// stfs f3,52(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// addi r4,r31,-648
	ctx.r4.s64 = ctx.r31.s64 + -648;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x83758754;
	sub_82535898(ctx, base);
	// addi r4,r31,-640
	ctx.r4.s64 = ctx.r31.s64 + -640;
	// bl 0x82535898
	ctx.lr = 0x8375875C;
	sub_82535898(ctx, base);
	// addi r4,r31,-632
	ctx.r4.s64 = ctx.r31.s64 + -632;
	// bl 0x82535898
	ctx.lr = 0x83758764;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83758768;
	sub_82534928(ctx, base);
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// stfs f2,56(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-620
	ctx.r4.s64 = ctx.r31.s64 + -620;
	// bl 0x82535898
	ctx.lr = 0x8375877C;
	sub_82535898(ctx, base);
	// addi r4,r31,-612
	ctx.r4.s64 = ctx.r31.s64 + -612;
	// bl 0x82535898
	ctx.lr = 0x83758784;
	sub_82535898(ctx, base);
	// addi r4,r31,-604
	ctx.r4.s64 = ctx.r31.s64 + -604;
	// bl 0x82535898
	ctx.lr = 0x8375878C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83758790;
	sub_82534928(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// stfs f1,60(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-592
	ctx.r4.s64 = ctx.r31.s64 + -592;
	// bl 0x82535898
	ctx.lr = 0x837587A4;
	sub_82535898(ctx, base);
	// addi r4,r31,-584
	ctx.r4.s64 = ctx.r31.s64 + -584;
	// bl 0x82535898
	ctx.lr = 0x837587AC;
	sub_82535898(ctx, base);
	// addi r4,r31,-576
	ctx.r4.s64 = ctx.r31.s64 + -576;
	// bl 0x82535898
	ctx.lr = 0x837587B4;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837587B8;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,64(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 64, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-564
	ctx.r4.s64 = ctx.r31.s64 + -564;
	// bl 0x82535898
	ctx.lr = 0x837587CC;
	sub_82535898(ctx, base);
	// addi r4,r31,-556
	ctx.r4.s64 = ctx.r31.s64 + -556;
	// bl 0x82535898
	ctx.lr = 0x837587D4;
	sub_82535898(ctx, base);
	// addi r4,r31,-548
	ctx.r4.s64 = ctx.r31.s64 + -548;
	// bl 0x82535898
	ctx.lr = 0x837587DC;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837587E0;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,68(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-536
	ctx.r4.s64 = ctx.r31.s64 + -536;
	// bl 0x82535898
	ctx.lr = 0x837587F4;
	sub_82535898(ctx, base);
	// addi r4,r31,-528
	ctx.r4.s64 = ctx.r31.s64 + -528;
	// bl 0x82535898
	ctx.lr = 0x837587FC;
	sub_82535898(ctx, base);
	// addi r4,r31,-520
	ctx.r4.s64 = ctx.r31.s64 + -520;
	// bl 0x82535898
	ctx.lr = 0x83758804;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83758808;
	sub_82534928(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,72(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 72, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-508
	ctx.r4.s64 = ctx.r31.s64 + -508;
	// bl 0x82535898
	ctx.lr = 0x8375881C;
	sub_82535898(ctx, base);
	// addi r4,r31,-500
	ctx.r4.s64 = ctx.r31.s64 + -500;
	// bl 0x82535898
	ctx.lr = 0x83758824;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83758828;
	sub_82534928(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,76(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 76, temp.u32);
	// addi r4,r31,-484
	ctx.r4.s64 = ctx.r31.s64 + -484;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375883C;
	sub_82535898(ctx, base);
	// addi r4,r31,-476
	ctx.r4.s64 = ctx.r31.s64 + -476;
	// bl 0x82535898
	ctx.lr = 0x83758844;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83758848;
	sub_82534928(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,80(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 80, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-460
	ctx.r4.s64 = ctx.r31.s64 + -460;
	// bl 0x82535898
	ctx.lr = 0x8375885C;
	sub_82535898(ctx, base);
	// addi r4,r31,-452
	ctx.r4.s64 = ctx.r31.s64 + -452;
	// bl 0x82535898
	ctx.lr = 0x83758864;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83758868;
	sub_82534928(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,84(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 84, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-436
	ctx.r4.s64 = ctx.r31.s64 + -436;
	// bl 0x82535898
	ctx.lr = 0x8375887C;
	sub_82535898(ctx, base);
	// addi r4,r31,-428
	ctx.r4.s64 = ctx.r31.s64 + -428;
	// bl 0x82535898
	ctx.lr = 0x83758884;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83758888;
	sub_82534928(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// stfs f8,88(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 88, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-408
	ctx.r4.s64 = ctx.r31.s64 + -408;
	// bl 0x82535898
	ctx.lr = 0x8375889C;
	sub_82535898(ctx, base);
	// addi r4,r31,-400
	ctx.r4.s64 = ctx.r31.s64 + -400;
	// bl 0x82535898
	ctx.lr = 0x837588A4;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837588A8;
	sub_82534770(ctx, base);
	// stw r3,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-384
	ctx.r4.s64 = ctx.r31.s64 + -384;
	// bl 0x82535898
	ctx.lr = 0x837588B8;
	sub_82535898(ctx, base);
	// addi r4,r31,-376
	ctx.r4.s64 = ctx.r31.s64 + -376;
	// bl 0x82535898
	ctx.lr = 0x837588C0;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837588C4;
	sub_82534928(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// stfs f7,96(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 96, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-360
	ctx.r4.s64 = ctx.r31.s64 + -360;
	// bl 0x82535898
	ctx.lr = 0x837588D8;
	sub_82535898(ctx, base);
	// addi r4,r31,-348
	ctx.r4.s64 = ctx.r31.s64 + -348;
	// bl 0x82535898
	ctx.lr = 0x837588E0;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837588E4;
	sub_82534770(ctx, base);
	// stw r3,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-340
	ctx.r4.s64 = ctx.r31.s64 + -340;
	// bl 0x82535898
	ctx.lr = 0x837588F4;
	sub_82535898(ctx, base);
	// addi r4,r31,-332
	ctx.r4.s64 = ctx.r31.s64 + -332;
	// bl 0x82535898
	ctx.lr = 0x837588FC;
	sub_82535898(ctx, base);
	// addi r4,r31,-308
	ctx.r4.s64 = ctx.r31.s64 + -308;
	// bl 0x82535898
	ctx.lr = 0x83758904;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83758908;
	sub_82534928(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// stfs f6,104(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 104, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-300
	ctx.r4.s64 = ctx.r31.s64 + -300;
	// bl 0x82535898
	ctx.lr = 0x8375891C;
	sub_82535898(ctx, base);
	// addi r4,r31,-292
	ctx.r4.s64 = ctx.r31.s64 + -292;
	// bl 0x82535898
	ctx.lr = 0x83758924;
	sub_82535898(ctx, base);
	// addi r4,r31,-268
	ctx.r4.s64 = ctx.r31.s64 + -268;
	// bl 0x82535898
	ctx.lr = 0x8375892C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83758930;
	sub_82534928(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// stfs f5,108(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 108, temp.u32);
	// addi r4,r31,-260
	ctx.r4.s64 = ctx.r31.s64 + -260;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x83758944;
	sub_82535898(ctx, base);
	// addi r4,r31,-252
	ctx.r4.s64 = ctx.r31.s64 + -252;
	// bl 0x82535898
	ctx.lr = 0x8375894C;
	sub_82535898(ctx, base);
	// addi r4,r31,-228
	ctx.r4.s64 = ctx.r31.s64 + -228;
	// bl 0x82535898
	ctx.lr = 0x83758954;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83758958;
	sub_82534770(ctx, base);
	// stw r3,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-220
	ctx.r4.s64 = ctx.r31.s64 + -220;
	// bl 0x82535898
	ctx.lr = 0x83758968;
	sub_82535898(ctx, base);
	// addi r4,r31,-212
	ctx.r4.s64 = ctx.r31.s64 + -212;
	// bl 0x82535898
	ctx.lr = 0x83758970;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83758974;
	sub_82534928(ctx, base);
	// frsp f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// stfs f4,116(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 116, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-196
	ctx.r4.s64 = ctx.r31.s64 + -196;
	// bl 0x82535898
	ctx.lr = 0x83758988;
	sub_82535898(ctx, base);
	// addi r4,r31,-188
	ctx.r4.s64 = ctx.r31.s64 + -188;
	// bl 0x82535898
	ctx.lr = 0x83758990;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83758994;
	sub_82534928(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// stfs f3,120(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 120, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-172
	ctx.r4.s64 = ctx.r31.s64 + -172;
	// bl 0x82535898
	ctx.lr = 0x837589A8;
	sub_82535898(ctx, base);
	// addi r4,r31,-164
	ctx.r4.s64 = ctx.r31.s64 + -164;
	// bl 0x82535898
	ctx.lr = 0x837589B0;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837589B4;
	sub_82534928(ctx, base);
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// stfs f2,124(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 124, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-144
	ctx.r4.s64 = ctx.r31.s64 + -144;
	// bl 0x82535898
	ctx.lr = 0x837589C8;
	sub_82535898(ctx, base);
	// addi r4,r31,-136
	ctx.r4.s64 = ctx.r31.s64 + -136;
	// bl 0x82535898
	ctx.lr = 0x837589D0;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837589D4;
	sub_82534928(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// stfs f1,128(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 128, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-116
	ctx.r4.s64 = ctx.r31.s64 + -116;
	// bl 0x82535898
	ctx.lr = 0x837589E8;
	sub_82535898(ctx, base);
	// addi r4,r31,-108
	ctx.r4.s64 = ctx.r31.s64 + -108;
	// bl 0x82535898
	ctx.lr = 0x837589F0;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837589F4;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,132(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 132, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-88
	ctx.r4.s64 = ctx.r31.s64 + -88;
	// bl 0x82535898
	ctx.lr = 0x83758A08;
	sub_82535898(ctx, base);
	// addi r4,r31,-80
	ctx.r4.s64 = ctx.r31.s64 + -80;
	// bl 0x82535898
	ctx.lr = 0x83758A10;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83758A14;
	sub_82534770(ctx, base);
	// stw r3,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-64
	ctx.r4.s64 = ctx.r31.s64 + -64;
	// bl 0x82535898
	ctx.lr = 0x83758A24;
	sub_82535898(ctx, base);
	// addi r4,r31,-56
	ctx.r4.s64 = ctx.r31.s64 + -56;
	// bl 0x82535898
	ctx.lr = 0x83758A2C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83758A30;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,140(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 140, temp.u32);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x83758A44;
	sub_82535898(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// bl 0x82535898
	ctx.lr = 0x83758A4C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83758A50;
	sub_82534928(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,144(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 144, temp.u32);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x83758A64;
	sub_82535898(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83758A6C;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83758A70;
	sub_82534770(ctx, base);
	// stw r3,148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 148, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83758A80"))) PPC_WEAK_FUNC(sub_83758A80);
PPC_FUNC_IMPL(__imp__sub_83758A80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83758A88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83758aa8
	if (!cr6.eq) goto loc_83758AA8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83758AA8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83763830
	ctx.lr = 0x83758AB4;
	sub_83763830(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x83763830
	ctx.lr = 0x83758AC8;
	sub_83763830(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83763830
	ctx.lr = 0x83758AD8;
	sub_83763830(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f11,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,20(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f10,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,24(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x83763830
	ctx.lr = 0x83758B0C;
	sub_83763830(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83763830
	ctx.lr = 0x83758B1C;
	sub_83763830(ctx, base);
	// lfs f9,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,28(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,32(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,36(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f6,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,40(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x83763830
	ctx.lr = 0x83758B48;
	sub_83763830(ctx, base);
	// lfs f5,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f5,44(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f4,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,48(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f3,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,52(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f2,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,56(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f1,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,60(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x83763830
	ctx.lr = 0x83758B7C;
	sub_83763830(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,72(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lfs f11,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,76(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83763830
	ctx.lr = 0x83758BA8;
	sub_83763830(ctx, base);
	// lfs f10,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f10,80(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,84(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,88(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// lfs f7,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,96(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x83763830
	ctx.lr = 0x83758BDC;
	sub_83763830(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x83763830
	ctx.lr = 0x83758BF0;
	sub_83763830(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83763830
	ctx.lr = 0x83758C00;
	sub_83763830(ctx, base);
	// lfs f6,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,104(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f5,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,108(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r8,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r8.u32);
	// lfs f4,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,116(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// lfs f3,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,120(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// lfs f2,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,124(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// lfs f1,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,128(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// lfs f0,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// lwz r7,24(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// stw r7,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r7.u32);
	// lfs f13,28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,140(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// lfs f12,32(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,144(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x83763830
	ctx.lr = 0x83758C64;
	sub_83763830(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r5,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r5.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83758C7C"))) PPC_WEAK_FUNC(sub_83758C7C);
PPC_FUNC_IMPL(__imp__sub_83758C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83758C80"))) PPC_WEAK_FUNC(sub_83758C80);
PPC_FUNC_IMPL(__imp__sub_83758C80) {
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
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,152
	ctx.r4.s64 = 152;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83758CA4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83758cc0
	if (cr6.eq) goto loc_83758CC0;
	// bl 0x83758498
	ctx.lr = 0x83758CB0;
	sub_83758498(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83758CC0:
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

__attribute__((alias("__imp__sub_83758CD4"))) PPC_WEAK_FUNC(sub_83758CD4);
PPC_FUNC_IMPL(__imp__sub_83758CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83758CD8"))) PPC_WEAK_FUNC(sub_83758CD8);
PPC_FUNC_IMPL(__imp__sub_83758CD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83758CE0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,30856
	ctx.r29.s64 = ctx.r11.s64 + 30856;
loc_83758CFC:
	// addi r4,r29,-32
	ctx.r4.s64 = ctx.r29.s64 + -32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82535898
	ctx.lr = 0x83758D08;
	sub_82535898(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82535890
	ctx.lr = 0x83758D10;
	sub_82535890(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83758D14;
	sub_82534770(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// cmpwi cr6,r31,7
	cr6.compare<int32_t>(ctx.r31.s32, 7, xer);
	// blt cr6,0x83758cfc
	if (cr6.lt) goto loc_83758CFC;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r27,28
	ctx.r28.s64 = ctx.r27.s64 + 28;
loc_83758D2C:
	// addi r4,r29,-20
	ctx.r4.s64 = ctx.r29.s64 + -20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82535898
	ctx.lr = 0x83758D38;
	sub_82535898(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82535890
	ctx.lr = 0x83758D40;
	sub_82535890(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83758D44;
	sub_82534770(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// cmpwi cr6,r31,57
	cr6.compare<int32_t>(ctx.r31.s32, 57, xer);
	// blt cr6,0x83758d2c
	if (cr6.lt) goto loc_83758D2C;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r27,256
	ctx.r28.s64 = ctx.r27.s64 + 256;
loc_83758D5C:
	// addi r4,r29,-12
	ctx.r4.s64 = ctx.r29.s64 + -12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82535898
	ctx.lr = 0x83758D68;
	sub_82535898(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82535890
	ctx.lr = 0x83758D70;
	sub_82535890(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83758D74;
	sub_82534770(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// cmpwi cr6,r31,18
	cr6.compare<int32_t>(ctx.r31.s32, 18, xer);
	// blt cr6,0x83758d5c
	if (cr6.lt) goto loc_83758D5C;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r27,328
	ctx.r28.s64 = ctx.r27.s64 + 328;
loc_83758D8C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82535898
	ctx.lr = 0x83758D98;
	sub_82535898(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82535890
	ctx.lr = 0x83758DA0;
	sub_82535890(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83758DA4;
	sub_82534770(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// cmpwi cr6,r31,28
	cr6.compare<int32_t>(ctx.r31.s32, 28, xer);
	// blt cr6,0x83758d8c
	if (cr6.lt) goto loc_83758D8C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83758DC0"))) PPC_WEAK_FUNC(sub_83758DC0);
PPC_FUNC_IMPL(__imp__sub_83758DC0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83758dec
	if (!cr6.eq) goto loc_83758DEC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83758eac
	goto loc_83758EAC;
loc_83758DEC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83763830
	ctx.lr = 0x83758DF8;
	sub_83763830(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// lwz r6,20(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r6,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// lwz r5,24(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r5,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r5.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x83763830
	ctx.lr = 0x83758E3C;
	sub_83763830(ctx, base);
	// li r9,57
	ctx.r9.s64 = 57;
	// addi r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 + 28;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83758E4C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83758e4c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83758E4C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x83763830
	ctx.lr = 0x83758E64;
	sub_83763830(ctx, base);
	// li r9,18
	ctx.r9.s64 = 18;
	// addi r10,r31,256
	ctx.r10.s64 = ctx.r31.s64 + 256;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83758E74:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83758e74
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83758E74;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83763830
	ctx.lr = 0x83758E8C;
	sub_83763830(ctx, base);
	// li r9,28
	ctx.r9.s64 = 28;
	// addi r10,r31,328
	ctx.r10.s64 = ctx.r31.s64 + 328;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83758E9C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83758e9c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83758E9C;
	// li r3,1
	ctx.r3.s64 = 1;
loc_83758EAC:
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

__attribute__((alias("__imp__sub_83758EC4"))) PPC_WEAK_FUNC(sub_83758EC4);
PPC_FUNC_IMPL(__imp__sub_83758EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83758EC8"))) PPC_WEAK_FUNC(sub_83758EC8);
PPC_FUNC_IMPL(__imp__sub_83758EC8) {
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
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,444
	ctx.r4.s64 = 444;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83758EEC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83758f80
	if (cr6.eq) goto loc_83758F80;
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r9,r11,30948
	ctx.r9.s64 = ctx.r11.s64 + 30948;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83758F14:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83758f14
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83758F14;
	// li r10,57
	ctx.r10.s64 = 57;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83758F30:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83758f30
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83758F30;
	// li r10,18
	ctx.r10.s64 = 18;
	// addi r11,r3,260
	ctx.r11.s64 = ctx.r3.s64 + 260;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83758F4C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83758f4c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83758F4C;
	// li r10,28
	ctx.r10.s64 = 28;
	// addi r11,r3,332
	ctx.r11.s64 = ctx.r3.s64 + 332;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83758F68:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83758f68
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83758F68;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83758F80:
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

__attribute__((alias("__imp__sub_83758F94"))) PPC_WEAK_FUNC(sub_83758F94);
PPC_FUNC_IMPL(__imp__sub_83758F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83758F98"))) PPC_WEAK_FUNC(sub_83758F98);
PPC_FUNC_IMPL(__imp__sub_83758F98) {
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
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,31008
	ctx.r4.s64 = ctx.r11.s64 + 31008;
	// bl 0x82535898
	ctx.lr = 0x83758FBC;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83758FC0;
	sub_82534770(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_83758FDC"))) PPC_WEAK_FUNC(sub_83758FDC);
PPC_FUNC_IMPL(__imp__sub_83758FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83758FE0"))) PPC_WEAK_FUNC(sub_83758FE0);
PPC_FUNC_IMPL(__imp__sub_83758FE0) {
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
	ctx.lr = 0x83759004;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83759030
	if (cr6.eq) goto loc_83759030;
	// lis r10,-32214
	ctx.r10.s64 = -2111176704;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,31100
	ctx.r9.s64 = ctx.r10.s64 + 31100;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83759030:
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

__attribute__((alias("__imp__sub_83759044"))) PPC_WEAK_FUNC(sub_83759044);
PPC_FUNC_IMPL(__imp__sub_83759044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83759048"))) PPC_WEAK_FUNC(sub_83759048);
PPC_FUNC_IMPL(__imp__sub_83759048) {
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
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,31160
	ctx.r4.s64 = ctx.r11.s64 + 31160;
	// bl 0x82535898
	ctx.lr = 0x8375906C;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83759070;
	sub_82534770(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8375908C"))) PPC_WEAK_FUNC(sub_8375908C);
PPC_FUNC_IMPL(__imp__sub_8375908C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83759090"))) PPC_WEAK_FUNC(sub_83759090);
PPC_FUNC_IMPL(__imp__sub_83759090) {
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
	ctx.lr = 0x837590B4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837590e0
	if (cr6.eq) goto loc_837590E0;
	// lis r10,-32214
	ctx.r10.s64 = -2111176704;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,31252
	ctx.r9.s64 = ctx.r10.s64 + 31252;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_837590E0:
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

__attribute__((alias("__imp__sub_837590F4"))) PPC_WEAK_FUNC(sub_837590F4);
PPC_FUNC_IMPL(__imp__sub_837590F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837590F8"))) PPC_WEAK_FUNC(sub_837590F8);
PPC_FUNC_IMPL(__imp__sub_837590F8) {
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
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,31312
	ctx.r4.s64 = ctx.r11.s64 + 31312;
	// bl 0x82535898
	ctx.lr = 0x8375911C;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83759120;
	sub_82534770(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8375913C"))) PPC_WEAK_FUNC(sub_8375913C);
PPC_FUNC_IMPL(__imp__sub_8375913C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83759140"))) PPC_WEAK_FUNC(sub_83759140);
PPC_FUNC_IMPL(__imp__sub_83759140) {
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
	ctx.lr = 0x83759164;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83759190
	if (cr6.eq) goto loc_83759190;
	// lis r10,-32214
	ctx.r10.s64 = -2111176704;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,31424
	ctx.r9.s64 = ctx.r10.s64 + 31424;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83759190:
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

__attribute__((alias("__imp__sub_837591A4"))) PPC_WEAK_FUNC(sub_837591A4);
PPC_FUNC_IMPL(__imp__sub_837591A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837591A8"))) PPC_WEAK_FUNC(sub_837591A8);
PPC_FUNC_IMPL(__imp__sub_837591A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837591B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,31744
	ctx.r31.s64 = ctx.r11.s64 + 31744;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r31,-256
	ctx.r4.s64 = ctx.r31.s64 + -256;
	// bl 0x82535898
	ctx.lr = 0x837591D0;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837591D4;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-244
	ctx.r4.s64 = ctx.r31.s64 + -244;
	// bl 0x82535898
	ctx.lr = 0x837591E8;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837591EC;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-228
	ctx.r4.s64 = ctx.r31.s64 + -228;
	// bl 0x82535898
	ctx.lr = 0x83759200;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83759204;
	sub_82534928(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,12(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-212
	ctx.r4.s64 = ctx.r31.s64 + -212;
	// bl 0x82535898
	ctx.lr = 0x83759218;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375921C;
	sub_82534928(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,16(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-196
	ctx.r4.s64 = ctx.r31.s64 + -196;
	// bl 0x82535898
	ctx.lr = 0x83759230;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83759234;
	sub_82534928(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,20(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-188
	ctx.r4.s64 = ctx.r31.s64 + -188;
	// bl 0x82535898
	ctx.lr = 0x83759248;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375924C;
	sub_82534928(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,24(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-176
	ctx.r4.s64 = ctx.r31.s64 + -176;
	// bl 0x82535898
	ctx.lr = 0x83759260;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83759264;
	sub_82534928(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// stfs f8,28(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-164
	ctx.r4.s64 = ctx.r31.s64 + -164;
	// bl 0x82535898
	ctx.lr = 0x83759278;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375927C;
	sub_82534928(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// stfs f7,32(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-152
	ctx.r4.s64 = ctx.r31.s64 + -152;
	// bl 0x82535898
	ctx.lr = 0x83759290;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83759294;
	sub_82534928(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// stfs f6,36(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-136
	ctx.r4.s64 = ctx.r31.s64 + -136;
	// bl 0x82535898
	ctx.lr = 0x837592A8;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837592AC;
	sub_82534928(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// stfs f5,40(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-120
	ctx.r4.s64 = ctx.r31.s64 + -120;
	// bl 0x82535898
	ctx.lr = 0x837592C0;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837592C4;
	sub_82534928(ctx, base);
	// frsp f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// stfs f4,44(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// addi r4,r31,-104
	ctx.r4.s64 = ctx.r31.s64 + -104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x837592D8;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837592DC;
	sub_82534928(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// stfs f3,48(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// addi r4,r31,-88
	ctx.r4.s64 = ctx.r31.s64 + -88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x837592F0;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837592F4;
	sub_82534928(ctx, base);
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// stfs f2,52(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// addi r4,r31,-68
	ctx.r4.s64 = ctx.r31.s64 + -68;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x83759308;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375930C;
	sub_82534928(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// stfs f1,56(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x83759320;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83759324;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,60(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x83759338;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375933C;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,64(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 64, temp.u32);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x83759350;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83759354;
	sub_82534928(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,68(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x83759368;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375936C;
	sub_82534928(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,72(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 72, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83759380"))) PPC_WEAK_FUNC(sub_83759380);
PPC_FUNC_IMPL(__imp__sub_83759380) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83759394
	if (!cr6.eq) goto loc_83759394;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83759394:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,20(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f9,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,24(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f8,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,28(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f7,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,32(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f6,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,36(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f5,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,40(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f4,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,44(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f3,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,48(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lfs f2,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,52(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lfs f1,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,56(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// lfs f0,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lfs f13,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,64(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lfs f12,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,68(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// lfs f11,68(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,72(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8375942C"))) PPC_WEAK_FUNC(sub_8375942C);
PPC_FUNC_IMPL(__imp__sub_8375942C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83759430"))) PPC_WEAK_FUNC(sub_83759430);
PPC_FUNC_IMPL(__imp__sub_83759430) {
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
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,76
	ctx.r4.s64 = 76;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83759454;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837594c8
	if (cr6.eq) goto loc_837594C8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32214
	ctx.r10.s64 = -2111176704;
	// addi r9,r10,31844
	ctx.r9.s64 = ctx.r10.s64 + 31844;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
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
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
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
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_837594C8:
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

__attribute__((alias("__imp__sub_837594DC"))) PPC_WEAK_FUNC(sub_837594DC);
PPC_FUNC_IMPL(__imp__sub_837594DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837594E0"))) PPC_WEAK_FUNC(sub_837594E0);
PPC_FUNC_IMPL(__imp__sub_837594E0) {
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
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r3,88
	ctx.r31.s64 = ctx.r3.s64 + 88;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8375951c
	if (cr6.lt) goto loc_8375951C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8375951C;
	sub_825952B8(ctx, base);
loc_8375951C:
	// lis r10,-32214
	ctx.r10.s64 = -2111176704;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// addi r8,r10,-5184
	ctx.r8.s64 = ctx.r10.s64 + -5184;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_83759554"))) PPC_WEAK_FUNC(sub_83759554);
PPC_FUNC_IMPL(__imp__sub_83759554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83759558"))) PPC_WEAK_FUNC(sub_83759558);
PPC_FUNC_IMPL(__imp__sub_83759558) {
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
	// bl 0x837594e0
	ctx.lr = 0x83759578;
	sub_837594E0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83759590
	if (cr6.eq) goto loc_83759590;
	// bl 0x82416268
	ctx.lr = 0x8375958C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83759590:
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

__attribute__((alias("__imp__sub_837595A8"))) PPC_WEAK_FUNC(sub_837595A8);
PPC_FUNC_IMPL(__imp__sub_837595A8) {
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
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,116
	ctx.r4.s64 = 116;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837595CC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83759658
	if (cr6.eq) goto loc_83759658;
	// lis r10,-32214
	ctx.r10.s64 = -2111176704;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// addi r8,r10,32228
	ctx.r8.s64 = ctx.r10.s64 + 32228;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r9,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r9.u32);
	// stb r11,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, ctx.r11.u8);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83759658:
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

__attribute__((alias("__imp__sub_8375966C"))) PPC_WEAK_FUNC(sub_8375966C);
PPC_FUNC_IMPL(__imp__sub_8375966C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83759670"))) PPC_WEAK_FUNC(sub_83759670);
PPC_FUNC_IMPL(__imp__sub_83759670) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83759678;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,32136
	ctx.r31.s64 = ctx.r11.s64 + 32136;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r31,-232
	ctx.r4.s64 = ctx.r31.s64 + -232;
	// bl 0x82535898
	ctx.lr = 0x83759698;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375969C;
	sub_82534770(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-220
	ctx.r4.s64 = ctx.r31.s64 + -220;
	// bl 0x82535898
	ctx.lr = 0x837596AC;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837596B0;
	sub_82534770(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-212
	ctx.r4.s64 = ctx.r31.s64 + -212;
	// bl 0x82535898
	ctx.lr = 0x837596C0;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837596C4;
	sub_82534770(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-200
	ctx.r4.s64 = ctx.r31.s64 + -200;
	// bl 0x82535898
	ctx.lr = 0x837596D4;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837596D8;
	sub_82534770(ctx, base);
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-192
	ctx.r4.s64 = ctx.r31.s64 + -192;
	// bl 0x82535898
	ctx.lr = 0x837596E8;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837596EC;
	sub_82534770(ctx, base);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-184
	ctx.r4.s64 = ctx.r31.s64 + -184;
	// bl 0x82535898
	ctx.lr = 0x837596FC;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83759700;
	sub_82534770(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-172
	ctx.r4.s64 = ctx.r31.s64 + -172;
	// bl 0x82535898
	ctx.lr = 0x83759710;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83759714;
	sub_82534770(ctx, base);
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-164
	ctx.r4.s64 = ctx.r31.s64 + -164;
	// bl 0x82535898
	ctx.lr = 0x83759724;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83759728;
	sub_82534770(ctx, base);
	// stw r3,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-152
	ctx.r4.s64 = ctx.r31.s64 + -152;
	// bl 0x82535898
	ctx.lr = 0x83759738;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375973C;
	sub_82534770(ctx, base);
	// stw r3,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-140
	ctx.r4.s64 = ctx.r31.s64 + -140;
	// bl 0x82535898
	ctx.lr = 0x8375974C;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83759750;
	sub_82534770(ctx, base);
	// stw r3,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-128
	ctx.r4.s64 = ctx.r31.s64 + -128;
	// bl 0x82535898
	ctx.lr = 0x83759760;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83759764;
	sub_82534770(ctx, base);
	// stw r3,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-116
	ctx.r4.s64 = ctx.r31.s64 + -116;
	// bl 0x82535898
	ctx.lr = 0x83759774;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83759778;
	sub_82534770(ctx, base);
	// stw r3,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
	// addi r4,r31,-104
	ctx.r4.s64 = ctx.r31.s64 + -104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x83759788;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375978C;
	sub_82534770(ctx, base);
	// stw r3,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r3.u32);
	// addi r4,r31,-92
	ctx.r4.s64 = ctx.r31.s64 + -92;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375979C;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837597A0;
	sub_82534770(ctx, base);
	// stw r3,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r3.u32);
	// addi r4,r31,-80
	ctx.r4.s64 = ctx.r31.s64 + -80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x837597B0;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837597B4;
	sub_82534770(ctx, base);
	// stw r3,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r3.u32);
	// addi r4,r31,-64
	ctx.r4.s64 = ctx.r31.s64 + -64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x837597C4;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837597C8;
	sub_82534770(ctx, base);
	// stw r3,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r3.u32);
	// addi r4,r31,-56
	ctx.r4.s64 = ctx.r31.s64 + -56;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x837597D8;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837597DC;
	sub_82534770(ctx, base);
	// stw r3,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r3.u32);
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x837597EC;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837597F0;
	sub_82534770(ctx, base);
	// stw r3,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r3.u32);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x83759800;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83759804;
	sub_82534770(ctx, base);
	// stw r3,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r3.u32);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x83759814;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83759818;
	sub_82534770(ctx, base);
	// stw r3,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r3.u32);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x83759828;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375982C;
	sub_82534770(ctx, base);
	// stw r3,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375983C;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x83759840;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_83759848:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83759848
	if (!cr6.eq) goto loc_83759848;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r30,88
	ctx.r3.s64 = ctx.r30.s64 + 88;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8375986C;
	sub_8259CC28(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83759878"))) PPC_WEAK_FUNC(sub_83759878);
PPC_FUNC_IMPL(__imp__sub_83759878) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x837598ac
	if (!cr6.eq) goto loc_837598AC;
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
loc_837598AC:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// lwz r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// lwz r6,20(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r6,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// lwz r5,24(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r5,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r5.u32);
	// lwz r3,28(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r10,36(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// lwz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// lwz r8,44(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// stw r8,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r8.u32);
	// lwz r7,48(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// stw r7,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r7.u32);
	// lwz r6,52(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// stw r6,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
	// lwz r5,56(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r5,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r5.u32);
	// lwz r3,60(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// lwz r10,68(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// lwz r9,72(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// lwz r8,76(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r8,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r8.u32);
	// lwz r7,80(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// stw r7,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r7.u32);
	// lwz r3,84(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// bl 0x83763830
	ctx.lr = 0x8375995C;
	sub_83763830(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_83759964:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83759964
	if (!cr6.eq) goto loc_83759964;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83759988;
	sub_8259CC28(ctx, base);
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

__attribute__((alias("__imp__sub_837599A0"))) PPC_WEAK_FUNC(sub_837599A0);
PPC_FUNC_IMPL(__imp__sub_837599A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837599A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,32644
	ctx.r31.s64 = ctx.r11.s64 + 32644;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r31,-356
	ctx.r4.s64 = ctx.r31.s64 + -356;
	// bl 0x82535898
	ctx.lr = 0x837599C8;
	sub_82535898(ctx, base);
	// addi r4,r31,-336
	ctx.r4.s64 = ctx.r31.s64 + -336;
	// bl 0x82535898
	ctx.lr = 0x837599D0;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837599D4;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-324
	ctx.r4.s64 = ctx.r31.s64 + -324;
	// bl 0x82535898
	ctx.lr = 0x837599E8;
	sub_82535898(ctx, base);
	// addi r4,r31,-304
	ctx.r4.s64 = ctx.r31.s64 + -304;
	// bl 0x82535898
	ctx.lr = 0x837599F0;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x837599F4;
	sub_82534B10(ctx, base);
	// stb r3,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-296
	ctx.r4.s64 = ctx.r31.s64 + -296;
	// bl 0x82535898
	ctx.lr = 0x83759A04;
	sub_82535898(ctx, base);
	// addi r4,r31,-276
	ctx.r4.s64 = ctx.r31.s64 + -276;
	// bl 0x82535898
	ctx.lr = 0x83759A0C;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83759A10;
	sub_82534770(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-268
	ctx.r4.s64 = ctx.r31.s64 + -268;
	// bl 0x82535898
	ctx.lr = 0x83759A20;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83759A24;
	sub_82534770(ctx, base);
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-260
	ctx.r4.s64 = ctx.r31.s64 + -260;
	// bl 0x82535898
	ctx.lr = 0x83759A34;
	sub_82535898(ctx, base);
	// addi r4,r31,-244
	ctx.r4.s64 = ctx.r31.s64 + -244;
	// bl 0x82535898
	ctx.lr = 0x83759A3C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83759A40;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,20(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-236
	ctx.r4.s64 = ctx.r31.s64 + -236;
	// bl 0x82535898
	ctx.lr = 0x83759A54;
	sub_82535898(ctx, base);
	// addi r4,r31,-220
	ctx.r4.s64 = ctx.r31.s64 + -220;
	// bl 0x82535898
	ctx.lr = 0x83759A5C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83759A60;
	sub_82534928(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,24(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-204
	ctx.r4.s64 = ctx.r31.s64 + -204;
	// bl 0x82535898
	ctx.lr = 0x83759A74;
	sub_82535898(ctx, base);
	// addi r4,r31,-196
	ctx.r4.s64 = ctx.r31.s64 + -196;
	// bl 0x82535898
	ctx.lr = 0x83759A7C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83759A80;
	sub_82534928(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,28(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-180
	ctx.r4.s64 = ctx.r31.s64 + -180;
	// bl 0x82535898
	ctx.lr = 0x83759A94;
	sub_82535898(ctx, base);
	// addi r4,r31,-172
	ctx.r4.s64 = ctx.r31.s64 + -172;
	// bl 0x82535898
	ctx.lr = 0x83759A9C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83759AA0;
	sub_82534928(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,32(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// addi r4,r31,-156
	ctx.r4.s64 = ctx.r31.s64 + -156;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x83759AB4;
	sub_82535898(ctx, base);
	// addi r4,r31,-148
	ctx.r4.s64 = ctx.r31.s64 + -148;
	// bl 0x82535898
	ctx.lr = 0x83759ABC;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83759AC0;
	sub_82534928(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,36(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// addi r4,r31,-136
	ctx.r4.s64 = ctx.r31.s64 + -136;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x83759AD4;
	sub_82535898(ctx, base);
	// addi r4,r31,-128
	ctx.r4.s64 = ctx.r31.s64 + -128;
	// bl 0x82535898
	ctx.lr = 0x83759ADC;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83759AE0;
	sub_82534928(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// stfs f8,40(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// addi r4,r31,-116
	ctx.r4.s64 = ctx.r31.s64 + -116;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x83759AF4;
	sub_82535898(ctx, base);
	// addi r4,r31,-108
	ctx.r4.s64 = ctx.r31.s64 + -108;
	// bl 0x82535898
	ctx.lr = 0x83759AFC;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83759B00;
	sub_82534928(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// stfs f7,44(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// addi r4,r31,-96
	ctx.r4.s64 = ctx.r31.s64 + -96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x83759B14;
	sub_82535898(ctx, base);
	// addi r4,r31,-88
	ctx.r4.s64 = ctx.r31.s64 + -88;
	// bl 0x82535898
	ctx.lr = 0x83759B1C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83759B20;
	sub_82534928(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// stfs f6,48(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// addi r4,r31,-72
	ctx.r4.s64 = ctx.r31.s64 + -72;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x83759B34;
	sub_82535898(ctx, base);
	// addi r4,r31,-64
	ctx.r4.s64 = ctx.r31.s64 + -64;
	// bl 0x82535898
	ctx.lr = 0x83759B3C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83759B40;
	sub_82534928(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// stfs f5,52(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x83759B54;
	sub_82535898(ctx, base);
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// bl 0x82535898
	ctx.lr = 0x83759B5C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83759B60;
	sub_82534928(ctx, base);
	// frsp f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// stfs f4,56(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x83759B74;
	sub_82535898(ctx, base);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// bl 0x82535898
	ctx.lr = 0x83759B7C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83759B80;
	sub_82534928(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// stfs f3,60(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x83759B94;
	sub_82535898(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83759B9C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83759BA0;
	sub_82534928(ctx, base);
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// stfs f2,64(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 64, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83759BB4"))) PPC_WEAK_FUNC(sub_83759BB4);
PPC_FUNC_IMPL(__imp__sub_83759BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83759BB8"))) PPC_WEAK_FUNC(sub_83759BB8);
PPC_FUNC_IMPL(__imp__sub_83759BB8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83759be4
	if (!cr6.eq) goto loc_83759BE4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83759c9c
	goto loc_83759C9C;
loc_83759BE4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83763830
	ctx.lr = 0x83759BF0;
	sub_83763830(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x83763830
	ctx.lr = 0x83759C1C;
	sub_83763830(ctx, base);
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,24(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83763830
	ctx.lr = 0x83759C38;
	sub_83763830(ctx, base);
	// lfs f11,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f11,28(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,32(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,36(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f8,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,40(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f7,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,44(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x83763830
	ctx.lr = 0x83759C6C;
	sub_83763830(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f6,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,48(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f5,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,52(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f4,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,56(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f3,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,60(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f2,16(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,64(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
loc_83759C9C:
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

__attribute__((alias("__imp__sub_83759CB4"))) PPC_WEAK_FUNC(sub_83759CB4);
PPC_FUNC_IMPL(__imp__sub_83759CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83759CB8"))) PPC_WEAK_FUNC(sub_83759CB8);
PPC_FUNC_IMPL(__imp__sub_83759CB8) {
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
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,68
	ctx.r4.s64 = 68;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83759CDC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83759d4c
	if (cr6.eq) goto loc_83759D4C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32214
	ctx.r9.s64 = -2111176704;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,32740
	ctx.r8.s64 = ctx.r9.s64 + 32740;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
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
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83759D4C:
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

__attribute__((alias("__imp__sub_83759D60"))) PPC_WEAK_FUNC(sub_83759D60);
PPC_FUNC_IMPL(__imp__sub_83759D60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83759D68;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,672
	ctx.r31.s64 = ctx.r3.s64 + 672;
	// li r30,20
	ctx.r30.s64 = 20;
	// li r27,2
	ctx.r27.s64 = 2;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83759D80:
	// addi r31,r31,-32
	ctx.r31.s64 = ctx.r31.s64 + -32;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83759da0
	if (cr6.lt) goto loc_83759DA0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x83759DA0;
	sub_825952B8(ctx, base);
loc_83759DA0:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// bge 0x83759d80
	if (!cr0.lt) goto loc_83759D80;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83759DBC"))) PPC_WEAK_FUNC(sub_83759DBC);
PPC_FUNC_IMPL(__imp__sub_83759DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83759DC0"))) PPC_WEAK_FUNC(sub_83759DC0);
PPC_FUNC_IMPL(__imp__sub_83759DC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r9,r11,-5184
	ctx.r9.s64 = ctx.r11.s64 + -5184;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83759DE0:
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stb r10,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r10.u8);
	// stw r9,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r9.u32);
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// stb r10,64(r11)
	PPC_STORE_U8(ctx.r11.u32 + 64, ctx.r10.u8);
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// bdnz 0x83759de0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83759DE0;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r9,21
	ctx.r9.s64 = 21;
	// addi r8,r11,-32476
	ctx.r8.s64 = ctx.r11.s64 + -32476;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83759E24:
	// stwu r10,32(r11)
	ea = 32 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83759e24
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83759E24;
	// stw r10,676(r3)
	PPC_STORE_U32(ctx.r3.u32 + 676, ctx.r10.u32);
	// stw r10,680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 680, ctx.r10.u32);
	// stw r10,684(r3)
	PPC_STORE_U32(ctx.r3.u32 + 684, ctx.r10.u32);
	// stw r10,688(r3)
	PPC_STORE_U32(ctx.r3.u32 + 688, ctx.r10.u32);
	// stw r10,692(r3)
	PPC_STORE_U32(ctx.r3.u32 + 692, ctx.r10.u32);
	// stw r10,696(r3)
	PPC_STORE_U32(ctx.r3.u32 + 696, ctx.r10.u32);
	// stw r10,700(r3)
	PPC_STORE_U32(ctx.r3.u32 + 700, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83759E4C"))) PPC_WEAK_FUNC(sub_83759E4C);
PPC_FUNC_IMPL(__imp__sub_83759E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83759E50"))) PPC_WEAK_FUNC(sub_83759E50);
PPC_FUNC_IMPL(__imp__sub_83759E50) {
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
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83759d60
	ctx.lr = 0x83759E74;
	sub_83759D60(ctx, base);
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,-5184
	ctx.r9.s64 = ctx.r11.s64 + -5184;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x83759e98
	if (cr6.eq) goto loc_83759E98;
	// bl 0x82416268
	ctx.lr = 0x83759E94;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83759E98:
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

__attribute__((alias("__imp__sub_83759EB0"))) PPC_WEAK_FUNC(sub_83759EB0);
PPC_FUNC_IMPL(__imp__sub_83759EB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83759EB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r3,32
	ctx.r29.s64 = ctx.r3.s64 + 32;
	// addi r31,r11,-32572
	ctx.r31.s64 = ctx.r11.s64 + -32572;
loc_83759ED4:
	// addi r4,r31,-164
	ctx.r4.s64 = ctx.r31.s64 + -164;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x83759EE0;
	sub_82535898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82535890
	ctx.lr = 0x83759EE8;
	sub_82535890(ctx, base);
	// addi r4,r31,-152
	ctx.r4.s64 = ctx.r31.s64 + -152;
	// bl 0x82535898
	ctx.lr = 0x83759EF0;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x83759EF4;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_83759EFC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83759efc
	if (!cr6.eq) goto loc_83759EFC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r29,-28
	ctx.r3.s64 = ctx.r29.s64 + -28;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83759F20;
	sub_8259CC28(ctx, base);
	// addi r4,r31,-144
	ctx.r4.s64 = ctx.r31.s64 + -144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x83759F2C;
	sub_82535898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82535890
	ctx.lr = 0x83759F34;
	sub_82535890(ctx, base);
	// addi r4,r31,-132
	ctx.r4.s64 = ctx.r31.s64 + -132;
	// bl 0x82535898
	ctx.lr = 0x83759F3C;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83759F40;
	sub_82534770(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// cmpwi cr6,r30,21
	cr6.compare<int32_t>(ctx.r30.s32, 21, xer);
	// blt cr6,0x83759ed4
	if (cr6.lt) goto loc_83759ED4;
	// addi r4,r31,-124
	ctx.r4.s64 = ctx.r31.s64 + -124;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x83759F60;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83759F64;
	sub_82534770(ctx, base);
	// stw r3,676(r27)
	PPC_STORE_U32(ctx.r27.u32 + 676, ctx.r3.u32);
	// addi r4,r31,-108
	ctx.r4.s64 = ctx.r31.s64 + -108;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x83759F74;
	sub_82535898(ctx, base);
	// addi r4,r31,-100
	ctx.r4.s64 = ctx.r31.s64 + -100;
	// bl 0x82535898
	ctx.lr = 0x83759F7C;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83759F80;
	sub_82534770(ctx, base);
	// stw r3,680(r27)
	PPC_STORE_U32(ctx.r27.u32 + 680, ctx.r3.u32);
	// addi r4,r31,-88
	ctx.r4.s64 = ctx.r31.s64 + -88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x83759F90;
	sub_82535898(ctx, base);
	// addi r4,r31,-80
	ctx.r4.s64 = ctx.r31.s64 + -80;
	// bl 0x82535898
	ctx.lr = 0x83759F98;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83759F9C;
	sub_82534770(ctx, base);
	// stw r3,684(r27)
	PPC_STORE_U32(ctx.r27.u32 + 684, ctx.r3.u32);
	// addi r4,r31,-68
	ctx.r4.s64 = ctx.r31.s64 + -68;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x83759FAC;
	sub_82535898(ctx, base);
	// addi r4,r31,-60
	ctx.r4.s64 = ctx.r31.s64 + -60;
	// bl 0x82535898
	ctx.lr = 0x83759FB4;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83759FB8;
	sub_82534770(ctx, base);
	// stw r3,688(r27)
	PPC_STORE_U32(ctx.r27.u32 + 688, ctx.r3.u32);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x83759FC8;
	sub_82535898(ctx, base);
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// bl 0x82535898
	ctx.lr = 0x83759FD0;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83759FD4;
	sub_82534770(ctx, base);
	// stw r3,692(r27)
	PPC_STORE_U32(ctx.r27.u32 + 692, ctx.r3.u32);
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x83759FE4;
	sub_82535898(ctx, base);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// bl 0x82535898
	ctx.lr = 0x83759FEC;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83759FF0;
	sub_82534770(ctx, base);
	// stw r3,696(r27)
	PPC_STORE_U32(ctx.r27.u32 + 696, ctx.r3.u32);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x8375A000;
	sub_82535898(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x8375A008;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375A00C;
	sub_82534770(ctx, base);
	// stw r3,700(r27)
	PPC_STORE_U32(ctx.r27.u32 + 700, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8375A01C"))) PPC_WEAK_FUNC(sub_8375A01C);
PPC_FUNC_IMPL(__imp__sub_8375A01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8375A020"))) PPC_WEAK_FUNC(sub_8375A020);
PPC_FUNC_IMPL(__imp__sub_8375A020) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8375A028;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8375a048
	if (!cr6.eq) goto loc_8375A048;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8375A048:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x83763830
	ctx.lr = 0x8375A054;
	sub_83763830(ctx, base);
	// addi r31,r27,32
	ctx.r31.s64 = ctx.r27.s64 + 32;
	// addi r30,r3,-4
	ctx.r30.s64 = ctx.r3.s64 + -4;
	// li r29,21
	ctx.r29.s64 = 21;
loc_8375A060:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x83763830
	ctx.lr = 0x8375A06C;
	sub_83763830(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8375A074:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8375a074
	if (!cr6.eq) goto loc_8375A074;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8375A098;
	sub_8259CC28(ctx, base);
	// lwzu r11,8(r30)
	ea = 8 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// bne 0x8375a060
	if (!cr0.eq) goto loc_8375A060;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,676(r27)
	PPC_STORE_U32(ctx.r27.u32 + 676, ctx.r11.u32);
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x83763830
	ctx.lr = 0x8375A0C0;
	sub_83763830(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r9,680(r27)
	PPC_STORE_U32(ctx.r27.u32 + 680, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,684(r27)
	PPC_STORE_U32(ctx.r27.u32 + 684, ctx.r8.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,688(r27)
	PPC_STORE_U32(ctx.r27.u32 + 688, ctx.r7.u32);
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r6,692(r27)
	PPC_STORE_U32(ctx.r27.u32 + 692, ctx.r6.u32);
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r5,696(r27)
	PPC_STORE_U32(ctx.r27.u32 + 696, ctx.r5.u32);
	// lwz r4,20(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r4,700(r27)
	PPC_STORE_U32(ctx.r27.u32 + 700, ctx.r4.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8375A100"))) PPC_WEAK_FUNC(sub_8375A100);
PPC_FUNC_IMPL(__imp__sub_8375A100) {
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
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,704
	ctx.r4.s64 = 704;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8375A124;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8375a140
	if (cr6.eq) goto loc_8375A140;
	// bl 0x83759dc0
	ctx.lr = 0x8375A130;
	sub_83759DC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8375A140:
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

__attribute__((alias("__imp__sub_8375A154"))) PPC_WEAK_FUNC(sub_8375A154);
PPC_FUNC_IMPL(__imp__sub_8375A154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8375A158"))) PPC_WEAK_FUNC(sub_8375A158);
PPC_FUNC_IMPL(__imp__sub_8375A158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8375A160;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-31852
	ctx.r31.s64 = ctx.r11.s64 + -31852;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r31,-564
	ctx.r4.s64 = ctx.r31.s64 + -564;
	// bl 0x82535898
	ctx.lr = 0x8375A180;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375A184;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-556
	ctx.r4.s64 = ctx.r31.s64 + -556;
	// bl 0x82535898
	ctx.lr = 0x8375A198;
	sub_82535898(ctx, base);
	// addi r4,r31,-552
	ctx.r4.s64 = ctx.r31.s64 + -552;
	// bl 0x82535898
	ctx.lr = 0x8375A1A0;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375A1A4;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-540
	ctx.r4.s64 = ctx.r31.s64 + -540;
	// bl 0x82535898
	ctx.lr = 0x8375A1B8;
	sub_82535898(ctx, base);
	// addi r4,r31,-536
	ctx.r4.s64 = ctx.r31.s64 + -536;
	// bl 0x82535898
	ctx.lr = 0x8375A1C0;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375A1C4;
	sub_82534928(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,12(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-528
	ctx.r4.s64 = ctx.r31.s64 + -528;
	// bl 0x82535898
	ctx.lr = 0x8375A1D8;
	sub_82535898(ctx, base);
	// addi r4,r31,-524
	ctx.r4.s64 = ctx.r31.s64 + -524;
	// bl 0x82535898
	ctx.lr = 0x8375A1E0;
	sub_82535898(ctx, base);
	// addi r4,r31,-512
	ctx.r4.s64 = ctx.r31.s64 + -512;
	// bl 0x82535898
	ctx.lr = 0x8375A1E8;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375A1EC;
	sub_82534928(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,16(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-500
	ctx.r4.s64 = ctx.r31.s64 + -500;
	// bl 0x82535898
	ctx.lr = 0x8375A200;
	sub_82535898(ctx, base);
	// addi r4,r31,-496
	ctx.r4.s64 = ctx.r31.s64 + -496;
	// bl 0x82535898
	ctx.lr = 0x8375A208;
	sub_82535898(ctx, base);
	// addi r4,r31,-484
	ctx.r4.s64 = ctx.r31.s64 + -484;
	// bl 0x82535898
	ctx.lr = 0x8375A210;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375A214;
	sub_82534928(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,20(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-476
	ctx.r4.s64 = ctx.r31.s64 + -476;
	// bl 0x82535898
	ctx.lr = 0x8375A228;
	sub_82535898(ctx, base);
	// addi r4,r31,-472
	ctx.r4.s64 = ctx.r31.s64 + -472;
	// bl 0x82535898
	ctx.lr = 0x8375A230;
	sub_82535898(ctx, base);
	// addi r4,r31,-460
	ctx.r4.s64 = ctx.r31.s64 + -460;
	// bl 0x82535898
	ctx.lr = 0x8375A238;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375A23C;
	sub_82534928(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,24(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// addi r4,r31,-452
	ctx.r4.s64 = ctx.r31.s64 + -452;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375A250;
	sub_82535898(ctx, base);
	// addi r4,r31,-448
	ctx.r4.s64 = ctx.r31.s64 + -448;
	// bl 0x82535898
	ctx.lr = 0x8375A258;
	sub_82535898(ctx, base);
	// addi r4,r31,-436
	ctx.r4.s64 = ctx.r31.s64 + -436;
	// bl 0x82535898
	ctx.lr = 0x8375A260;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375A264;
	sub_82534B10(ctx, base);
	// stb r3,28(r30)
	PPC_STORE_U8(ctx.r30.u32 + 28, ctx.r3.u8);
	// addi r4,r31,-428
	ctx.r4.s64 = ctx.r31.s64 + -428;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375A274;
	sub_82535898(ctx, base);
	// addi r4,r31,-424
	ctx.r4.s64 = ctx.r31.s64 + -424;
	// bl 0x82535898
	ctx.lr = 0x8375A27C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375A280;
	sub_82534928(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// stfs f8,32(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-416
	ctx.r4.s64 = ctx.r31.s64 + -416;
	// bl 0x82535898
	ctx.lr = 0x8375A294;
	sub_82535898(ctx, base);
	// addi r4,r31,-412
	ctx.r4.s64 = ctx.r31.s64 + -412;
	// bl 0x82535898
	ctx.lr = 0x8375A29C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375A2A0;
	sub_82534928(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// stfs f7,36(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-400
	ctx.r4.s64 = ctx.r31.s64 + -400;
	// bl 0x82535898
	ctx.lr = 0x8375A2B4;
	sub_82535898(ctx, base);
	// addi r4,r31,-392
	ctx.r4.s64 = ctx.r31.s64 + -392;
	// bl 0x82535898
	ctx.lr = 0x8375A2BC;
	sub_82535898(ctx, base);
	// addi r4,r31,-384
	ctx.r4.s64 = ctx.r31.s64 + -384;
	// bl 0x82535898
	ctx.lr = 0x8375A2C4;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375A2C8;
	sub_82534928(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// stfs f6,40(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-372
	ctx.r4.s64 = ctx.r31.s64 + -372;
	// bl 0x82535898
	ctx.lr = 0x8375A2DC;
	sub_82535898(ctx, base);
	// addi r4,r31,-364
	ctx.r4.s64 = ctx.r31.s64 + -364;
	// bl 0x82535898
	ctx.lr = 0x8375A2E4;
	sub_82535898(ctx, base);
	// addi r4,r31,-356
	ctx.r4.s64 = ctx.r31.s64 + -356;
	// bl 0x82535898
	ctx.lr = 0x8375A2EC;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375A2F0;
	sub_82534928(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// stfs f5,44(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-348
	ctx.r4.s64 = ctx.r31.s64 + -348;
	// bl 0x82535898
	ctx.lr = 0x8375A304;
	sub_82535898(ctx, base);
	// addi r4,r31,-340
	ctx.r4.s64 = ctx.r31.s64 + -340;
	// bl 0x82535898
	ctx.lr = 0x8375A30C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375A310;
	sub_82534928(ctx, base);
	// frsp f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// stfs f4,48(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-332
	ctx.r4.s64 = ctx.r31.s64 + -332;
	// bl 0x82535898
	ctx.lr = 0x8375A324;
	sub_82535898(ctx, base);
	// addi r4,r31,-324
	ctx.r4.s64 = ctx.r31.s64 + -324;
	// bl 0x82535898
	ctx.lr = 0x8375A32C;
	sub_82535898(ctx, base);
	// addi r4,r31,-304
	ctx.r4.s64 = ctx.r31.s64 + -304;
	// bl 0x82535898
	ctx.lr = 0x8375A334;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375A338;
	sub_82534770(ctx, base);
	// stw r3,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r3.u32);
	// addi r4,r31,-288
	ctx.r4.s64 = ctx.r31.s64 + -288;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375A348;
	sub_82535898(ctx, base);
	// addi r4,r31,-280
	ctx.r4.s64 = ctx.r31.s64 + -280;
	// bl 0x82535898
	ctx.lr = 0x8375A350;
	sub_82535898(ctx, base);
	// addi r4,r31,-260
	ctx.r4.s64 = ctx.r31.s64 + -260;
	// bl 0x82535898
	ctx.lr = 0x8375A358;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375A35C;
	sub_82534928(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// stfs f3,56(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// addi r4,r31,-256
	ctx.r4.s64 = ctx.r31.s64 + -256;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375A370;
	sub_82535898(ctx, base);
	// addi r4,r31,-248
	ctx.r4.s64 = ctx.r31.s64 + -248;
	// bl 0x82535898
	ctx.lr = 0x8375A378;
	sub_82535898(ctx, base);
	// addi r4,r31,-228
	ctx.r4.s64 = ctx.r31.s64 + -228;
	// bl 0x82535898
	ctx.lr = 0x8375A380;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375A384;
	sub_82534928(ctx, base);
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// stfs f2,60(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-224
	ctx.r4.s64 = ctx.r31.s64 + -224;
	// bl 0x82535898
	ctx.lr = 0x8375A398;
	sub_82535898(ctx, base);
	// addi r4,r31,-216
	ctx.r4.s64 = ctx.r31.s64 + -216;
	// bl 0x82535898
	ctx.lr = 0x8375A3A0;
	sub_82535898(ctx, base);
	// addi r4,r31,-196
	ctx.r4.s64 = ctx.r31.s64 + -196;
	// bl 0x82535898
	ctx.lr = 0x8375A3A8;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375A3AC;
	sub_82534770(ctx, base);
	// stw r3,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-188
	ctx.r4.s64 = ctx.r31.s64 + -188;
	// bl 0x82535898
	ctx.lr = 0x8375A3BC;
	sub_82535898(ctx, base);
	// addi r4,r31,-180
	ctx.r4.s64 = ctx.r31.s64 + -180;
	// bl 0x82535898
	ctx.lr = 0x8375A3C4;
	sub_82535898(ctx, base);
	// addi r4,r31,-168
	ctx.r4.s64 = ctx.r31.s64 + -168;
	// bl 0x82535898
	ctx.lr = 0x8375A3CC;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375A3D0;
	sub_82534928(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// stfs f1,68(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-160
	ctx.r4.s64 = ctx.r31.s64 + -160;
	// bl 0x82535898
	ctx.lr = 0x8375A3E4;
	sub_82535898(ctx, base);
	// addi r4,r31,-152
	ctx.r4.s64 = ctx.r31.s64 + -152;
	// bl 0x82535898
	ctx.lr = 0x8375A3EC;
	sub_82535898(ctx, base);
	// addi r4,r31,-140
	ctx.r4.s64 = ctx.r31.s64 + -140;
	// bl 0x82535898
	ctx.lr = 0x8375A3F4;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375A3F8;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,72(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 72, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-128
	ctx.r4.s64 = ctx.r31.s64 + -128;
	// bl 0x82535898
	ctx.lr = 0x8375A40C;
	sub_82535898(ctx, base);
	// addi r4,r31,-120
	ctx.r4.s64 = ctx.r31.s64 + -120;
	// bl 0x82535898
	ctx.lr = 0x8375A414;
	sub_82535898(ctx, base);
	// addi r4,r31,-108
	ctx.r4.s64 = ctx.r31.s64 + -108;
	// bl 0x82535898
	ctx.lr = 0x8375A41C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375A420;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,76(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 76, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-100
	ctx.r4.s64 = ctx.r31.s64 + -100;
	// bl 0x82535898
	ctx.lr = 0x8375A434;
	sub_82535898(ctx, base);
	// addi r4,r31,-92
	ctx.r4.s64 = ctx.r31.s64 + -92;
	// bl 0x82535898
	ctx.lr = 0x8375A43C;
	sub_82535898(ctx, base);
	// addi r4,r31,-80
	ctx.r4.s64 = ctx.r31.s64 + -80;
	// bl 0x82535898
	ctx.lr = 0x8375A444;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375A448;
	sub_82534928(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,80(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 80, temp.u32);
	// addi r4,r31,-68
	ctx.r4.s64 = ctx.r31.s64 + -68;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375A45C;
	sub_82535898(ctx, base);
	// addi r4,r31,-60
	ctx.r4.s64 = ctx.r31.s64 + -60;
	// bl 0x82535898
	ctx.lr = 0x8375A464;
	sub_82535898(ctx, base);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// bl 0x82535898
	ctx.lr = 0x8375A46C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375A470;
	sub_82534928(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,84(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 84, temp.u32);
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375A484;
	sub_82535898(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// bl 0x82535898
	ctx.lr = 0x8375A48C;
	sub_82535898(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// bl 0x82535898
	ctx.lr = 0x8375A494;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375A498;
	sub_82534928(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,88(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 88, temp.u32);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375A4AC;
	sub_82535898(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x82535898
	ctx.lr = 0x8375A4B4;
	sub_82535898(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x8375A4BC;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375A4C0;
	sub_82534928(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,92(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 92, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8375A4D4"))) PPC_WEAK_FUNC(sub_8375A4D4);
PPC_FUNC_IMPL(__imp__sub_8375A4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8375A4D8"))) PPC_WEAK_FUNC(sub_8375A4D8);
PPC_FUNC_IMPL(__imp__sub_8375A4D8) {
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
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8375A4FC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8375a588
	if (cr6.eq) goto loc_8375A588;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32213
	ctx.r9.s64 = -2111111168;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,-31756
	ctx.r8.s64 = ctx.r9.s64 + -31756;
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
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
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
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
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8375A588:
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

__attribute__((alias("__imp__sub_8375A59C"))) PPC_WEAK_FUNC(sub_8375A59C);
PPC_FUNC_IMPL(__imp__sub_8375A59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8375A5A0"))) PPC_WEAK_FUNC(sub_8375A5A0);
PPC_FUNC_IMPL(__imp__sub_8375A5A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8375A5A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-31132
	ctx.r31.s64 = ctx.r11.s64 + -31132;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r31,-564
	ctx.r4.s64 = ctx.r31.s64 + -564;
	// bl 0x82535898
	ctx.lr = 0x8375A5C8;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375A5CC;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-556
	ctx.r4.s64 = ctx.r31.s64 + -556;
	// bl 0x82535898
	ctx.lr = 0x8375A5E0;
	sub_82535898(ctx, base);
	// addi r4,r31,-552
	ctx.r4.s64 = ctx.r31.s64 + -552;
	// bl 0x82535898
	ctx.lr = 0x8375A5E8;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375A5EC;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-540
	ctx.r4.s64 = ctx.r31.s64 + -540;
	// bl 0x82535898
	ctx.lr = 0x8375A600;
	sub_82535898(ctx, base);
	// addi r4,r31,-536
	ctx.r4.s64 = ctx.r31.s64 + -536;
	// bl 0x82535898
	ctx.lr = 0x8375A608;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375A60C;
	sub_82534928(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,12(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-528
	ctx.r4.s64 = ctx.r31.s64 + -528;
	// bl 0x82535898
	ctx.lr = 0x8375A620;
	sub_82535898(ctx, base);
	// addi r4,r31,-524
	ctx.r4.s64 = ctx.r31.s64 + -524;
	// bl 0x82535898
	ctx.lr = 0x8375A628;
	sub_82535898(ctx, base);
	// addi r4,r31,-512
	ctx.r4.s64 = ctx.r31.s64 + -512;
	// bl 0x82535898
	ctx.lr = 0x8375A630;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375A634;
	sub_82534928(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,16(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-500
	ctx.r4.s64 = ctx.r31.s64 + -500;
	// bl 0x82535898
	ctx.lr = 0x8375A648;
	sub_82535898(ctx, base);
	// addi r4,r31,-496
	ctx.r4.s64 = ctx.r31.s64 + -496;
	// bl 0x82535898
	ctx.lr = 0x8375A650;
	sub_82535898(ctx, base);
	// addi r4,r31,-484
	ctx.r4.s64 = ctx.r31.s64 + -484;
	// bl 0x82535898
	ctx.lr = 0x8375A658;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375A65C;
	sub_82534928(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,20(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-476
	ctx.r4.s64 = ctx.r31.s64 + -476;
	// bl 0x82535898
	ctx.lr = 0x8375A670;
	sub_82535898(ctx, base);
	// addi r4,r31,-472
	ctx.r4.s64 = ctx.r31.s64 + -472;
	// bl 0x82535898
	ctx.lr = 0x8375A678;
	sub_82535898(ctx, base);
	// addi r4,r31,-460
	ctx.r4.s64 = ctx.r31.s64 + -460;
	// bl 0x82535898
	ctx.lr = 0x8375A680;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375A684;
	sub_82534928(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,24(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// addi r4,r31,-452
	ctx.r4.s64 = ctx.r31.s64 + -452;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375A698;
	sub_82535898(ctx, base);
	// addi r4,r31,-448
	ctx.r4.s64 = ctx.r31.s64 + -448;
	// bl 0x82535898
	ctx.lr = 0x8375A6A0;
	sub_82535898(ctx, base);
	// addi r4,r31,-436
	ctx.r4.s64 = ctx.r31.s64 + -436;
	// bl 0x82535898
	ctx.lr = 0x8375A6A8;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375A6AC;
	sub_82534B10(ctx, base);
	// stb r3,28(r30)
	PPC_STORE_U8(ctx.r30.u32 + 28, ctx.r3.u8);
	// addi r4,r31,-428
	ctx.r4.s64 = ctx.r31.s64 + -428;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375A6BC;
	sub_82535898(ctx, base);
	// addi r4,r31,-424
	ctx.r4.s64 = ctx.r31.s64 + -424;
	// bl 0x82535898
	ctx.lr = 0x8375A6C4;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375A6C8;
	sub_82534928(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// stfs f8,32(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-416
	ctx.r4.s64 = ctx.r31.s64 + -416;
	// bl 0x82535898
	ctx.lr = 0x8375A6DC;
	sub_82535898(ctx, base);
	// addi r4,r31,-412
	ctx.r4.s64 = ctx.r31.s64 + -412;
	// bl 0x82535898
	ctx.lr = 0x8375A6E4;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375A6E8;
	sub_82534928(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// stfs f7,36(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-400
	ctx.r4.s64 = ctx.r31.s64 + -400;
	// bl 0x82535898
	ctx.lr = 0x8375A6FC;
	sub_82535898(ctx, base);
	// addi r4,r31,-392
	ctx.r4.s64 = ctx.r31.s64 + -392;
	// bl 0x82535898
	ctx.lr = 0x8375A704;
	sub_82535898(ctx, base);
	// addi r4,r31,-384
	ctx.r4.s64 = ctx.r31.s64 + -384;
	// bl 0x82535898
	ctx.lr = 0x8375A70C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375A710;
	sub_82534928(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// stfs f6,40(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-372
	ctx.r4.s64 = ctx.r31.s64 + -372;
	// bl 0x82535898
	ctx.lr = 0x8375A724;
	sub_82535898(ctx, base);
	// addi r4,r31,-364
	ctx.r4.s64 = ctx.r31.s64 + -364;
	// bl 0x82535898
	ctx.lr = 0x8375A72C;
	sub_82535898(ctx, base);
	// addi r4,r31,-356
	ctx.r4.s64 = ctx.r31.s64 + -356;
	// bl 0x82535898
	ctx.lr = 0x8375A734;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375A738;
	sub_82534928(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// stfs f5,44(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-348
	ctx.r4.s64 = ctx.r31.s64 + -348;
	// bl 0x82535898
	ctx.lr = 0x8375A74C;
	sub_82535898(ctx, base);
	// addi r4,r31,-340
	ctx.r4.s64 = ctx.r31.s64 + -340;
	// bl 0x82535898
	ctx.lr = 0x8375A754;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375A758;
	sub_82534928(ctx, base);
	// frsp f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// stfs f4,48(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-332
	ctx.r4.s64 = ctx.r31.s64 + -332;
	// bl 0x82535898
	ctx.lr = 0x8375A76C;
	sub_82535898(ctx, base);
	// addi r4,r31,-324
	ctx.r4.s64 = ctx.r31.s64 + -324;
	// bl 0x82535898
	ctx.lr = 0x8375A774;
	sub_82535898(ctx, base);
	// addi r4,r31,-304
	ctx.r4.s64 = ctx.r31.s64 + -304;
	// bl 0x82535898
	ctx.lr = 0x8375A77C;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375A780;
	sub_82534770(ctx, base);
	// stw r3,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r3.u32);
	// addi r4,r31,-288
	ctx.r4.s64 = ctx.r31.s64 + -288;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375A790;
	sub_82535898(ctx, base);
	// addi r4,r31,-280
	ctx.r4.s64 = ctx.r31.s64 + -280;
	// bl 0x82535898
	ctx.lr = 0x8375A798;
	sub_82535898(ctx, base);
	// addi r4,r31,-260
	ctx.r4.s64 = ctx.r31.s64 + -260;
	// bl 0x82535898
	ctx.lr = 0x8375A7A0;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375A7A4;
	sub_82534928(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// stfs f3,56(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// addi r4,r31,-256
	ctx.r4.s64 = ctx.r31.s64 + -256;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375A7B8;
	sub_82535898(ctx, base);
	// addi r4,r31,-248
	ctx.r4.s64 = ctx.r31.s64 + -248;
	// bl 0x82535898
	ctx.lr = 0x8375A7C0;
	sub_82535898(ctx, base);
	// addi r4,r31,-228
	ctx.r4.s64 = ctx.r31.s64 + -228;
	// bl 0x82535898
	ctx.lr = 0x8375A7C8;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375A7CC;
	sub_82534928(ctx, base);
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// stfs f2,60(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-224
	ctx.r4.s64 = ctx.r31.s64 + -224;
	// bl 0x82535898
	ctx.lr = 0x8375A7E0;
	sub_82535898(ctx, base);
	// addi r4,r31,-216
	ctx.r4.s64 = ctx.r31.s64 + -216;
	// bl 0x82535898
	ctx.lr = 0x8375A7E8;
	sub_82535898(ctx, base);
	// addi r4,r31,-196
	ctx.r4.s64 = ctx.r31.s64 + -196;
	// bl 0x82535898
	ctx.lr = 0x8375A7F0;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375A7F4;
	sub_82534770(ctx, base);
	// stw r3,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-188
	ctx.r4.s64 = ctx.r31.s64 + -188;
	// bl 0x82535898
	ctx.lr = 0x8375A804;
	sub_82535898(ctx, base);
	// addi r4,r31,-180
	ctx.r4.s64 = ctx.r31.s64 + -180;
	// bl 0x82535898
	ctx.lr = 0x8375A80C;
	sub_82535898(ctx, base);
	// addi r4,r31,-168
	ctx.r4.s64 = ctx.r31.s64 + -168;
	// bl 0x82535898
	ctx.lr = 0x8375A814;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375A818;
	sub_82534928(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// stfs f1,68(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-160
	ctx.r4.s64 = ctx.r31.s64 + -160;
	// bl 0x82535898
	ctx.lr = 0x8375A82C;
	sub_82535898(ctx, base);
	// addi r4,r31,-152
	ctx.r4.s64 = ctx.r31.s64 + -152;
	// bl 0x82535898
	ctx.lr = 0x8375A834;
	sub_82535898(ctx, base);
	// addi r4,r31,-140
	ctx.r4.s64 = ctx.r31.s64 + -140;
	// bl 0x82535898
	ctx.lr = 0x8375A83C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375A840;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,72(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 72, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-128
	ctx.r4.s64 = ctx.r31.s64 + -128;
	// bl 0x82535898
	ctx.lr = 0x8375A854;
	sub_82535898(ctx, base);
	// addi r4,r31,-120
	ctx.r4.s64 = ctx.r31.s64 + -120;
	// bl 0x82535898
	ctx.lr = 0x8375A85C;
	sub_82535898(ctx, base);
	// addi r4,r31,-108
	ctx.r4.s64 = ctx.r31.s64 + -108;
	// bl 0x82535898
	ctx.lr = 0x8375A864;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375A868;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,76(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 76, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-100
	ctx.r4.s64 = ctx.r31.s64 + -100;
	// bl 0x82535898
	ctx.lr = 0x8375A87C;
	sub_82535898(ctx, base);
	// addi r4,r31,-92
	ctx.r4.s64 = ctx.r31.s64 + -92;
	// bl 0x82535898
	ctx.lr = 0x8375A884;
	sub_82535898(ctx, base);
	// addi r4,r31,-80
	ctx.r4.s64 = ctx.r31.s64 + -80;
	// bl 0x82535898
	ctx.lr = 0x8375A88C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375A890;
	sub_82534928(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,80(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 80, temp.u32);
	// addi r4,r31,-68
	ctx.r4.s64 = ctx.r31.s64 + -68;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375A8A4;
	sub_82535898(ctx, base);
	// addi r4,r31,-60
	ctx.r4.s64 = ctx.r31.s64 + -60;
	// bl 0x82535898
	ctx.lr = 0x8375A8AC;
	sub_82535898(ctx, base);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// bl 0x82535898
	ctx.lr = 0x8375A8B4;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375A8B8;
	sub_82534928(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,84(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 84, temp.u32);
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375A8CC;
	sub_82535898(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// bl 0x82535898
	ctx.lr = 0x8375A8D4;
	sub_82535898(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// bl 0x82535898
	ctx.lr = 0x8375A8DC;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375A8E0;
	sub_82534928(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,88(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 88, temp.u32);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375A8F4;
	sub_82535898(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x82535898
	ctx.lr = 0x8375A8FC;
	sub_82535898(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x8375A904;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375A908;
	sub_82534928(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,92(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 92, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8375A91C"))) PPC_WEAK_FUNC(sub_8375A91C);
PPC_FUNC_IMPL(__imp__sub_8375A91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8375A920"))) PPC_WEAK_FUNC(sub_8375A920);
PPC_FUNC_IMPL(__imp__sub_8375A920) {
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
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8375A944;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8375a9d0
	if (cr6.eq) goto loc_8375A9D0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32213
	ctx.r9.s64 = -2111111168;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,-31036
	ctx.r8.s64 = ctx.r9.s64 + -31036;
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
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
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
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
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8375A9D0:
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

__attribute__((alias("__imp__sub_8375A9E4"))) PPC_WEAK_FUNC(sub_8375A9E4);
PPC_FUNC_IMPL(__imp__sub_8375A9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8375A9E8"))) PPC_WEAK_FUNC(sub_8375A9E8);
PPC_FUNC_IMPL(__imp__sub_8375A9E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8375A9F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-30412
	ctx.r31.s64 = ctx.r11.s64 + -30412;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r31,-564
	ctx.r4.s64 = ctx.r31.s64 + -564;
	// bl 0x82535898
	ctx.lr = 0x8375AA10;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375AA14;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-556
	ctx.r4.s64 = ctx.r31.s64 + -556;
	// bl 0x82535898
	ctx.lr = 0x8375AA28;
	sub_82535898(ctx, base);
	// addi r4,r31,-552
	ctx.r4.s64 = ctx.r31.s64 + -552;
	// bl 0x82535898
	ctx.lr = 0x8375AA30;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375AA34;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-540
	ctx.r4.s64 = ctx.r31.s64 + -540;
	// bl 0x82535898
	ctx.lr = 0x8375AA48;
	sub_82535898(ctx, base);
	// addi r4,r31,-536
	ctx.r4.s64 = ctx.r31.s64 + -536;
	// bl 0x82535898
	ctx.lr = 0x8375AA50;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375AA54;
	sub_82534928(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,12(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-528
	ctx.r4.s64 = ctx.r31.s64 + -528;
	// bl 0x82535898
	ctx.lr = 0x8375AA68;
	sub_82535898(ctx, base);
	// addi r4,r31,-524
	ctx.r4.s64 = ctx.r31.s64 + -524;
	// bl 0x82535898
	ctx.lr = 0x8375AA70;
	sub_82535898(ctx, base);
	// addi r4,r31,-512
	ctx.r4.s64 = ctx.r31.s64 + -512;
	// bl 0x82535898
	ctx.lr = 0x8375AA78;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375AA7C;
	sub_82534928(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,16(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-500
	ctx.r4.s64 = ctx.r31.s64 + -500;
	// bl 0x82535898
	ctx.lr = 0x8375AA90;
	sub_82535898(ctx, base);
	// addi r4,r31,-496
	ctx.r4.s64 = ctx.r31.s64 + -496;
	// bl 0x82535898
	ctx.lr = 0x8375AA98;
	sub_82535898(ctx, base);
	// addi r4,r31,-484
	ctx.r4.s64 = ctx.r31.s64 + -484;
	// bl 0x82535898
	ctx.lr = 0x8375AAA0;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375AAA4;
	sub_82534928(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,20(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-476
	ctx.r4.s64 = ctx.r31.s64 + -476;
	// bl 0x82535898
	ctx.lr = 0x8375AAB8;
	sub_82535898(ctx, base);
	// addi r4,r31,-472
	ctx.r4.s64 = ctx.r31.s64 + -472;
	// bl 0x82535898
	ctx.lr = 0x8375AAC0;
	sub_82535898(ctx, base);
	// addi r4,r31,-460
	ctx.r4.s64 = ctx.r31.s64 + -460;
	// bl 0x82535898
	ctx.lr = 0x8375AAC8;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375AACC;
	sub_82534928(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,24(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// addi r4,r31,-452
	ctx.r4.s64 = ctx.r31.s64 + -452;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375AAE0;
	sub_82535898(ctx, base);
	// addi r4,r31,-448
	ctx.r4.s64 = ctx.r31.s64 + -448;
	// bl 0x82535898
	ctx.lr = 0x8375AAE8;
	sub_82535898(ctx, base);
	// addi r4,r31,-436
	ctx.r4.s64 = ctx.r31.s64 + -436;
	// bl 0x82535898
	ctx.lr = 0x8375AAF0;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375AAF4;
	sub_82534B10(ctx, base);
	// stb r3,28(r30)
	PPC_STORE_U8(ctx.r30.u32 + 28, ctx.r3.u8);
	// addi r4,r31,-428
	ctx.r4.s64 = ctx.r31.s64 + -428;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375AB04;
	sub_82535898(ctx, base);
	// addi r4,r31,-424
	ctx.r4.s64 = ctx.r31.s64 + -424;
	// bl 0x82535898
	ctx.lr = 0x8375AB0C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375AB10;
	sub_82534928(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// stfs f8,32(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-416
	ctx.r4.s64 = ctx.r31.s64 + -416;
	// bl 0x82535898
	ctx.lr = 0x8375AB24;
	sub_82535898(ctx, base);
	// addi r4,r31,-412
	ctx.r4.s64 = ctx.r31.s64 + -412;
	// bl 0x82535898
	ctx.lr = 0x8375AB2C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375AB30;
	sub_82534928(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// stfs f7,36(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-400
	ctx.r4.s64 = ctx.r31.s64 + -400;
	// bl 0x82535898
	ctx.lr = 0x8375AB44;
	sub_82535898(ctx, base);
	// addi r4,r31,-392
	ctx.r4.s64 = ctx.r31.s64 + -392;
	// bl 0x82535898
	ctx.lr = 0x8375AB4C;
	sub_82535898(ctx, base);
	// addi r4,r31,-384
	ctx.r4.s64 = ctx.r31.s64 + -384;
	// bl 0x82535898
	ctx.lr = 0x8375AB54;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375AB58;
	sub_82534928(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// stfs f6,40(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-372
	ctx.r4.s64 = ctx.r31.s64 + -372;
	// bl 0x82535898
	ctx.lr = 0x8375AB6C;
	sub_82535898(ctx, base);
	// addi r4,r31,-364
	ctx.r4.s64 = ctx.r31.s64 + -364;
	// bl 0x82535898
	ctx.lr = 0x8375AB74;
	sub_82535898(ctx, base);
	// addi r4,r31,-356
	ctx.r4.s64 = ctx.r31.s64 + -356;
	// bl 0x82535898
	ctx.lr = 0x8375AB7C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375AB80;
	sub_82534928(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// stfs f5,44(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-348
	ctx.r4.s64 = ctx.r31.s64 + -348;
	// bl 0x82535898
	ctx.lr = 0x8375AB94;
	sub_82535898(ctx, base);
	// addi r4,r31,-340
	ctx.r4.s64 = ctx.r31.s64 + -340;
	// bl 0x82535898
	ctx.lr = 0x8375AB9C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375ABA0;
	sub_82534928(ctx, base);
	// frsp f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// stfs f4,48(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-332
	ctx.r4.s64 = ctx.r31.s64 + -332;
	// bl 0x82535898
	ctx.lr = 0x8375ABB4;
	sub_82535898(ctx, base);
	// addi r4,r31,-324
	ctx.r4.s64 = ctx.r31.s64 + -324;
	// bl 0x82535898
	ctx.lr = 0x8375ABBC;
	sub_82535898(ctx, base);
	// addi r4,r31,-304
	ctx.r4.s64 = ctx.r31.s64 + -304;
	// bl 0x82535898
	ctx.lr = 0x8375ABC4;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375ABC8;
	sub_82534770(ctx, base);
	// stw r3,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r3.u32);
	// addi r4,r31,-288
	ctx.r4.s64 = ctx.r31.s64 + -288;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375ABD8;
	sub_82535898(ctx, base);
	// addi r4,r31,-280
	ctx.r4.s64 = ctx.r31.s64 + -280;
	// bl 0x82535898
	ctx.lr = 0x8375ABE0;
	sub_82535898(ctx, base);
	// addi r4,r31,-260
	ctx.r4.s64 = ctx.r31.s64 + -260;
	// bl 0x82535898
	ctx.lr = 0x8375ABE8;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375ABEC;
	sub_82534928(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// stfs f3,56(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// addi r4,r31,-256
	ctx.r4.s64 = ctx.r31.s64 + -256;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375AC00;
	sub_82535898(ctx, base);
	// addi r4,r31,-248
	ctx.r4.s64 = ctx.r31.s64 + -248;
	// bl 0x82535898
	ctx.lr = 0x8375AC08;
	sub_82535898(ctx, base);
	// addi r4,r31,-228
	ctx.r4.s64 = ctx.r31.s64 + -228;
	// bl 0x82535898
	ctx.lr = 0x8375AC10;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375AC14;
	sub_82534928(ctx, base);
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// stfs f2,60(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-224
	ctx.r4.s64 = ctx.r31.s64 + -224;
	// bl 0x82535898
	ctx.lr = 0x8375AC28;
	sub_82535898(ctx, base);
	// addi r4,r31,-216
	ctx.r4.s64 = ctx.r31.s64 + -216;
	// bl 0x82535898
	ctx.lr = 0x8375AC30;
	sub_82535898(ctx, base);
	// addi r4,r31,-196
	ctx.r4.s64 = ctx.r31.s64 + -196;
	// bl 0x82535898
	ctx.lr = 0x8375AC38;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375AC3C;
	sub_82534770(ctx, base);
	// stw r3,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-188
	ctx.r4.s64 = ctx.r31.s64 + -188;
	// bl 0x82535898
	ctx.lr = 0x8375AC4C;
	sub_82535898(ctx, base);
	// addi r4,r31,-180
	ctx.r4.s64 = ctx.r31.s64 + -180;
	// bl 0x82535898
	ctx.lr = 0x8375AC54;
	sub_82535898(ctx, base);
	// addi r4,r31,-168
	ctx.r4.s64 = ctx.r31.s64 + -168;
	// bl 0x82535898
	ctx.lr = 0x8375AC5C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375AC60;
	sub_82534928(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// stfs f1,68(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-160
	ctx.r4.s64 = ctx.r31.s64 + -160;
	// bl 0x82535898
	ctx.lr = 0x8375AC74;
	sub_82535898(ctx, base);
	// addi r4,r31,-152
	ctx.r4.s64 = ctx.r31.s64 + -152;
	// bl 0x82535898
	ctx.lr = 0x8375AC7C;
	sub_82535898(ctx, base);
	// addi r4,r31,-140
	ctx.r4.s64 = ctx.r31.s64 + -140;
	// bl 0x82535898
	ctx.lr = 0x8375AC84;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375AC88;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,72(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 72, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-128
	ctx.r4.s64 = ctx.r31.s64 + -128;
	// bl 0x82535898
	ctx.lr = 0x8375AC9C;
	sub_82535898(ctx, base);
	// addi r4,r31,-120
	ctx.r4.s64 = ctx.r31.s64 + -120;
	// bl 0x82535898
	ctx.lr = 0x8375ACA4;
	sub_82535898(ctx, base);
	// addi r4,r31,-108
	ctx.r4.s64 = ctx.r31.s64 + -108;
	// bl 0x82535898
	ctx.lr = 0x8375ACAC;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375ACB0;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,76(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 76, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-100
	ctx.r4.s64 = ctx.r31.s64 + -100;
	// bl 0x82535898
	ctx.lr = 0x8375ACC4;
	sub_82535898(ctx, base);
	// addi r4,r31,-92
	ctx.r4.s64 = ctx.r31.s64 + -92;
	// bl 0x82535898
	ctx.lr = 0x8375ACCC;
	sub_82535898(ctx, base);
	// addi r4,r31,-80
	ctx.r4.s64 = ctx.r31.s64 + -80;
	// bl 0x82535898
	ctx.lr = 0x8375ACD4;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375ACD8;
	sub_82534928(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,80(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 80, temp.u32);
	// addi r4,r31,-68
	ctx.r4.s64 = ctx.r31.s64 + -68;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375ACEC;
	sub_82535898(ctx, base);
	// addi r4,r31,-60
	ctx.r4.s64 = ctx.r31.s64 + -60;
	// bl 0x82535898
	ctx.lr = 0x8375ACF4;
	sub_82535898(ctx, base);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// bl 0x82535898
	ctx.lr = 0x8375ACFC;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375AD00;
	sub_82534928(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,84(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 84, temp.u32);
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375AD14;
	sub_82535898(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// bl 0x82535898
	ctx.lr = 0x8375AD1C;
	sub_82535898(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// bl 0x82535898
	ctx.lr = 0x8375AD24;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375AD28;
	sub_82534928(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,88(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 88, temp.u32);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375AD3C;
	sub_82535898(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x82535898
	ctx.lr = 0x8375AD44;
	sub_82535898(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x8375AD4C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375AD50;
	sub_82534928(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,92(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 92, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8375AD64"))) PPC_WEAK_FUNC(sub_8375AD64);
PPC_FUNC_IMPL(__imp__sub_8375AD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8375AD68"))) PPC_WEAK_FUNC(sub_8375AD68);
PPC_FUNC_IMPL(__imp__sub_8375AD68) {
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
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8375AD8C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8375ae18
	if (cr6.eq) goto loc_8375AE18;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32213
	ctx.r9.s64 = -2111111168;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,-30316
	ctx.r8.s64 = ctx.r9.s64 + -30316;
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
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
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
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
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8375AE18:
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

__attribute__((alias("__imp__sub_8375AE2C"))) PPC_WEAK_FUNC(sub_8375AE2C);
PPC_FUNC_IMPL(__imp__sub_8375AE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8375AE30"))) PPC_WEAK_FUNC(sub_8375AE30);
PPC_FUNC_IMPL(__imp__sub_8375AE30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8375AE38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-29692
	ctx.r31.s64 = ctx.r11.s64 + -29692;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r31,-564
	ctx.r4.s64 = ctx.r31.s64 + -564;
	// bl 0x82535898
	ctx.lr = 0x8375AE58;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375AE5C;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-556
	ctx.r4.s64 = ctx.r31.s64 + -556;
	// bl 0x82535898
	ctx.lr = 0x8375AE70;
	sub_82535898(ctx, base);
	// addi r4,r31,-552
	ctx.r4.s64 = ctx.r31.s64 + -552;
	// bl 0x82535898
	ctx.lr = 0x8375AE78;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375AE7C;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-540
	ctx.r4.s64 = ctx.r31.s64 + -540;
	// bl 0x82535898
	ctx.lr = 0x8375AE90;
	sub_82535898(ctx, base);
	// addi r4,r31,-536
	ctx.r4.s64 = ctx.r31.s64 + -536;
	// bl 0x82535898
	ctx.lr = 0x8375AE98;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375AE9C;
	sub_82534928(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,12(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-528
	ctx.r4.s64 = ctx.r31.s64 + -528;
	// bl 0x82535898
	ctx.lr = 0x8375AEB0;
	sub_82535898(ctx, base);
	// addi r4,r31,-524
	ctx.r4.s64 = ctx.r31.s64 + -524;
	// bl 0x82535898
	ctx.lr = 0x8375AEB8;
	sub_82535898(ctx, base);
	// addi r4,r31,-512
	ctx.r4.s64 = ctx.r31.s64 + -512;
	// bl 0x82535898
	ctx.lr = 0x8375AEC0;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375AEC4;
	sub_82534928(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,16(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-500
	ctx.r4.s64 = ctx.r31.s64 + -500;
	// bl 0x82535898
	ctx.lr = 0x8375AED8;
	sub_82535898(ctx, base);
	// addi r4,r31,-496
	ctx.r4.s64 = ctx.r31.s64 + -496;
	// bl 0x82535898
	ctx.lr = 0x8375AEE0;
	sub_82535898(ctx, base);
	// addi r4,r31,-484
	ctx.r4.s64 = ctx.r31.s64 + -484;
	// bl 0x82535898
	ctx.lr = 0x8375AEE8;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375AEEC;
	sub_82534928(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,20(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-476
	ctx.r4.s64 = ctx.r31.s64 + -476;
	// bl 0x82535898
	ctx.lr = 0x8375AF00;
	sub_82535898(ctx, base);
	// addi r4,r31,-472
	ctx.r4.s64 = ctx.r31.s64 + -472;
	// bl 0x82535898
	ctx.lr = 0x8375AF08;
	sub_82535898(ctx, base);
	// addi r4,r31,-460
	ctx.r4.s64 = ctx.r31.s64 + -460;
	// bl 0x82535898
	ctx.lr = 0x8375AF10;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375AF14;
	sub_82534928(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,24(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// addi r4,r31,-452
	ctx.r4.s64 = ctx.r31.s64 + -452;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375AF28;
	sub_82535898(ctx, base);
	// addi r4,r31,-448
	ctx.r4.s64 = ctx.r31.s64 + -448;
	// bl 0x82535898
	ctx.lr = 0x8375AF30;
	sub_82535898(ctx, base);
	// addi r4,r31,-436
	ctx.r4.s64 = ctx.r31.s64 + -436;
	// bl 0x82535898
	ctx.lr = 0x8375AF38;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375AF3C;
	sub_82534B10(ctx, base);
	// stb r3,28(r30)
	PPC_STORE_U8(ctx.r30.u32 + 28, ctx.r3.u8);
	// addi r4,r31,-428
	ctx.r4.s64 = ctx.r31.s64 + -428;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375AF4C;
	sub_82535898(ctx, base);
	// addi r4,r31,-424
	ctx.r4.s64 = ctx.r31.s64 + -424;
	// bl 0x82535898
	ctx.lr = 0x8375AF54;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375AF58;
	sub_82534928(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// stfs f8,32(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-416
	ctx.r4.s64 = ctx.r31.s64 + -416;
	// bl 0x82535898
	ctx.lr = 0x8375AF6C;
	sub_82535898(ctx, base);
	// addi r4,r31,-412
	ctx.r4.s64 = ctx.r31.s64 + -412;
	// bl 0x82535898
	ctx.lr = 0x8375AF74;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375AF78;
	sub_82534928(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// stfs f7,36(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-400
	ctx.r4.s64 = ctx.r31.s64 + -400;
	// bl 0x82535898
	ctx.lr = 0x8375AF8C;
	sub_82535898(ctx, base);
	// addi r4,r31,-392
	ctx.r4.s64 = ctx.r31.s64 + -392;
	// bl 0x82535898
	ctx.lr = 0x8375AF94;
	sub_82535898(ctx, base);
	// addi r4,r31,-384
	ctx.r4.s64 = ctx.r31.s64 + -384;
	// bl 0x82535898
	ctx.lr = 0x8375AF9C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375AFA0;
	sub_82534928(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// stfs f6,40(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-372
	ctx.r4.s64 = ctx.r31.s64 + -372;
	// bl 0x82535898
	ctx.lr = 0x8375AFB4;
	sub_82535898(ctx, base);
	// addi r4,r31,-364
	ctx.r4.s64 = ctx.r31.s64 + -364;
	// bl 0x82535898
	ctx.lr = 0x8375AFBC;
	sub_82535898(ctx, base);
	// addi r4,r31,-356
	ctx.r4.s64 = ctx.r31.s64 + -356;
	// bl 0x82535898
	ctx.lr = 0x8375AFC4;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375AFC8;
	sub_82534928(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// stfs f5,44(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-348
	ctx.r4.s64 = ctx.r31.s64 + -348;
	// bl 0x82535898
	ctx.lr = 0x8375AFDC;
	sub_82535898(ctx, base);
	// addi r4,r31,-340
	ctx.r4.s64 = ctx.r31.s64 + -340;
	// bl 0x82535898
	ctx.lr = 0x8375AFE4;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375AFE8;
	sub_82534928(ctx, base);
	// frsp f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// stfs f4,48(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-332
	ctx.r4.s64 = ctx.r31.s64 + -332;
	// bl 0x82535898
	ctx.lr = 0x8375AFFC;
	sub_82535898(ctx, base);
	// addi r4,r31,-324
	ctx.r4.s64 = ctx.r31.s64 + -324;
	// bl 0x82535898
	ctx.lr = 0x8375B004;
	sub_82535898(ctx, base);
	// addi r4,r31,-304
	ctx.r4.s64 = ctx.r31.s64 + -304;
	// bl 0x82535898
	ctx.lr = 0x8375B00C;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375B010;
	sub_82534770(ctx, base);
	// stw r3,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r3.u32);
	// addi r4,r31,-288
	ctx.r4.s64 = ctx.r31.s64 + -288;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375B020;
	sub_82535898(ctx, base);
	// addi r4,r31,-280
	ctx.r4.s64 = ctx.r31.s64 + -280;
	// bl 0x82535898
	ctx.lr = 0x8375B028;
	sub_82535898(ctx, base);
	// addi r4,r31,-260
	ctx.r4.s64 = ctx.r31.s64 + -260;
	// bl 0x82535898
	ctx.lr = 0x8375B030;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375B034;
	sub_82534928(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// stfs f3,56(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// addi r4,r31,-256
	ctx.r4.s64 = ctx.r31.s64 + -256;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375B048;
	sub_82535898(ctx, base);
	// addi r4,r31,-248
	ctx.r4.s64 = ctx.r31.s64 + -248;
	// bl 0x82535898
	ctx.lr = 0x8375B050;
	sub_82535898(ctx, base);
	// addi r4,r31,-228
	ctx.r4.s64 = ctx.r31.s64 + -228;
	// bl 0x82535898
	ctx.lr = 0x8375B058;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375B05C;
	sub_82534928(ctx, base);
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// stfs f2,60(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-224
	ctx.r4.s64 = ctx.r31.s64 + -224;
	// bl 0x82535898
	ctx.lr = 0x8375B070;
	sub_82535898(ctx, base);
	// addi r4,r31,-216
	ctx.r4.s64 = ctx.r31.s64 + -216;
	// bl 0x82535898
	ctx.lr = 0x8375B078;
	sub_82535898(ctx, base);
	// addi r4,r31,-196
	ctx.r4.s64 = ctx.r31.s64 + -196;
	// bl 0x82535898
	ctx.lr = 0x8375B080;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375B084;
	sub_82534770(ctx, base);
	// stw r3,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-188
	ctx.r4.s64 = ctx.r31.s64 + -188;
	// bl 0x82535898
	ctx.lr = 0x8375B094;
	sub_82535898(ctx, base);
	// addi r4,r31,-180
	ctx.r4.s64 = ctx.r31.s64 + -180;
	// bl 0x82535898
	ctx.lr = 0x8375B09C;
	sub_82535898(ctx, base);
	// addi r4,r31,-168
	ctx.r4.s64 = ctx.r31.s64 + -168;
	// bl 0x82535898
	ctx.lr = 0x8375B0A4;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375B0A8;
	sub_82534928(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// stfs f1,68(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-160
	ctx.r4.s64 = ctx.r31.s64 + -160;
	// bl 0x82535898
	ctx.lr = 0x8375B0BC;
	sub_82535898(ctx, base);
	// addi r4,r31,-152
	ctx.r4.s64 = ctx.r31.s64 + -152;
	// bl 0x82535898
	ctx.lr = 0x8375B0C4;
	sub_82535898(ctx, base);
	// addi r4,r31,-140
	ctx.r4.s64 = ctx.r31.s64 + -140;
	// bl 0x82535898
	ctx.lr = 0x8375B0CC;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375B0D0;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,72(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 72, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-128
	ctx.r4.s64 = ctx.r31.s64 + -128;
	// bl 0x82535898
	ctx.lr = 0x8375B0E4;
	sub_82535898(ctx, base);
	// addi r4,r31,-120
	ctx.r4.s64 = ctx.r31.s64 + -120;
	// bl 0x82535898
	ctx.lr = 0x8375B0EC;
	sub_82535898(ctx, base);
	// addi r4,r31,-108
	ctx.r4.s64 = ctx.r31.s64 + -108;
	// bl 0x82535898
	ctx.lr = 0x8375B0F4;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375B0F8;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,76(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 76, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-100
	ctx.r4.s64 = ctx.r31.s64 + -100;
	// bl 0x82535898
	ctx.lr = 0x8375B10C;
	sub_82535898(ctx, base);
	// addi r4,r31,-92
	ctx.r4.s64 = ctx.r31.s64 + -92;
	// bl 0x82535898
	ctx.lr = 0x8375B114;
	sub_82535898(ctx, base);
	// addi r4,r31,-80
	ctx.r4.s64 = ctx.r31.s64 + -80;
	// bl 0x82535898
	ctx.lr = 0x8375B11C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375B120;
	sub_82534928(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,80(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 80, temp.u32);
	// addi r4,r31,-68
	ctx.r4.s64 = ctx.r31.s64 + -68;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375B134;
	sub_82535898(ctx, base);
	// addi r4,r31,-60
	ctx.r4.s64 = ctx.r31.s64 + -60;
	// bl 0x82535898
	ctx.lr = 0x8375B13C;
	sub_82535898(ctx, base);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// bl 0x82535898
	ctx.lr = 0x8375B144;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375B148;
	sub_82534928(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,84(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 84, temp.u32);
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375B15C;
	sub_82535898(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// bl 0x82535898
	ctx.lr = 0x8375B164;
	sub_82535898(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// bl 0x82535898
	ctx.lr = 0x8375B16C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375B170;
	sub_82534928(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,88(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 88, temp.u32);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375B184;
	sub_82535898(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x82535898
	ctx.lr = 0x8375B18C;
	sub_82535898(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x8375B194;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375B198;
	sub_82534928(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,92(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 92, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8375B1AC"))) PPC_WEAK_FUNC(sub_8375B1AC);
PPC_FUNC_IMPL(__imp__sub_8375B1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8375B1B0"))) PPC_WEAK_FUNC(sub_8375B1B0);
PPC_FUNC_IMPL(__imp__sub_8375B1B0) {
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
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8375B1D4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8375b260
	if (cr6.eq) goto loc_8375B260;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32213
	ctx.r9.s64 = -2111111168;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,-29596
	ctx.r8.s64 = ctx.r9.s64 + -29596;
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
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
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
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
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8375B260:
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

__attribute__((alias("__imp__sub_8375B274"))) PPC_WEAK_FUNC(sub_8375B274);
PPC_FUNC_IMPL(__imp__sub_8375B274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8375B278"))) PPC_WEAK_FUNC(sub_8375B278);
PPC_FUNC_IMPL(__imp__sub_8375B278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8375B280;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-28972
	ctx.r31.s64 = ctx.r11.s64 + -28972;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r31,-564
	ctx.r4.s64 = ctx.r31.s64 + -564;
	// bl 0x82535898
	ctx.lr = 0x8375B2A0;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375B2A4;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-556
	ctx.r4.s64 = ctx.r31.s64 + -556;
	// bl 0x82535898
	ctx.lr = 0x8375B2B8;
	sub_82535898(ctx, base);
	// addi r4,r31,-552
	ctx.r4.s64 = ctx.r31.s64 + -552;
	// bl 0x82535898
	ctx.lr = 0x8375B2C0;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375B2C4;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-540
	ctx.r4.s64 = ctx.r31.s64 + -540;
	// bl 0x82535898
	ctx.lr = 0x8375B2D8;
	sub_82535898(ctx, base);
	// addi r4,r31,-536
	ctx.r4.s64 = ctx.r31.s64 + -536;
	// bl 0x82535898
	ctx.lr = 0x8375B2E0;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375B2E4;
	sub_82534928(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,12(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-528
	ctx.r4.s64 = ctx.r31.s64 + -528;
	// bl 0x82535898
	ctx.lr = 0x8375B2F8;
	sub_82535898(ctx, base);
	// addi r4,r31,-524
	ctx.r4.s64 = ctx.r31.s64 + -524;
	// bl 0x82535898
	ctx.lr = 0x8375B300;
	sub_82535898(ctx, base);
	// addi r4,r31,-512
	ctx.r4.s64 = ctx.r31.s64 + -512;
	// bl 0x82535898
	ctx.lr = 0x8375B308;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375B30C;
	sub_82534928(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,16(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-500
	ctx.r4.s64 = ctx.r31.s64 + -500;
	// bl 0x82535898
	ctx.lr = 0x8375B320;
	sub_82535898(ctx, base);
	// addi r4,r31,-496
	ctx.r4.s64 = ctx.r31.s64 + -496;
	// bl 0x82535898
	ctx.lr = 0x8375B328;
	sub_82535898(ctx, base);
	// addi r4,r31,-484
	ctx.r4.s64 = ctx.r31.s64 + -484;
	// bl 0x82535898
	ctx.lr = 0x8375B330;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375B334;
	sub_82534928(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,20(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-476
	ctx.r4.s64 = ctx.r31.s64 + -476;
	// bl 0x82535898
	ctx.lr = 0x8375B348;
	sub_82535898(ctx, base);
	// addi r4,r31,-472
	ctx.r4.s64 = ctx.r31.s64 + -472;
	// bl 0x82535898
	ctx.lr = 0x8375B350;
	sub_82535898(ctx, base);
	// addi r4,r31,-460
	ctx.r4.s64 = ctx.r31.s64 + -460;
	// bl 0x82535898
	ctx.lr = 0x8375B358;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375B35C;
	sub_82534928(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,24(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// addi r4,r31,-452
	ctx.r4.s64 = ctx.r31.s64 + -452;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375B370;
	sub_82535898(ctx, base);
	// addi r4,r31,-448
	ctx.r4.s64 = ctx.r31.s64 + -448;
	// bl 0x82535898
	ctx.lr = 0x8375B378;
	sub_82535898(ctx, base);
	// addi r4,r31,-436
	ctx.r4.s64 = ctx.r31.s64 + -436;
	// bl 0x82535898
	ctx.lr = 0x8375B380;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375B384;
	sub_82534B10(ctx, base);
	// stb r3,28(r30)
	PPC_STORE_U8(ctx.r30.u32 + 28, ctx.r3.u8);
	// addi r4,r31,-428
	ctx.r4.s64 = ctx.r31.s64 + -428;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375B394;
	sub_82535898(ctx, base);
	// addi r4,r31,-424
	ctx.r4.s64 = ctx.r31.s64 + -424;
	// bl 0x82535898
	ctx.lr = 0x8375B39C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375B3A0;
	sub_82534928(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// stfs f8,32(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-416
	ctx.r4.s64 = ctx.r31.s64 + -416;
	// bl 0x82535898
	ctx.lr = 0x8375B3B4;
	sub_82535898(ctx, base);
	// addi r4,r31,-412
	ctx.r4.s64 = ctx.r31.s64 + -412;
	// bl 0x82535898
	ctx.lr = 0x8375B3BC;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375B3C0;
	sub_82534928(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// stfs f7,36(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-400
	ctx.r4.s64 = ctx.r31.s64 + -400;
	// bl 0x82535898
	ctx.lr = 0x8375B3D4;
	sub_82535898(ctx, base);
	// addi r4,r31,-392
	ctx.r4.s64 = ctx.r31.s64 + -392;
	// bl 0x82535898
	ctx.lr = 0x8375B3DC;
	sub_82535898(ctx, base);
	// addi r4,r31,-384
	ctx.r4.s64 = ctx.r31.s64 + -384;
	// bl 0x82535898
	ctx.lr = 0x8375B3E4;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375B3E8;
	sub_82534928(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// stfs f6,40(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-372
	ctx.r4.s64 = ctx.r31.s64 + -372;
	// bl 0x82535898
	ctx.lr = 0x8375B3FC;
	sub_82535898(ctx, base);
	// addi r4,r31,-364
	ctx.r4.s64 = ctx.r31.s64 + -364;
	// bl 0x82535898
	ctx.lr = 0x8375B404;
	sub_82535898(ctx, base);
	// addi r4,r31,-356
	ctx.r4.s64 = ctx.r31.s64 + -356;
	// bl 0x82535898
	ctx.lr = 0x8375B40C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375B410;
	sub_82534928(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// stfs f5,44(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-348
	ctx.r4.s64 = ctx.r31.s64 + -348;
	// bl 0x82535898
	ctx.lr = 0x8375B424;
	sub_82535898(ctx, base);
	// addi r4,r31,-340
	ctx.r4.s64 = ctx.r31.s64 + -340;
	// bl 0x82535898
	ctx.lr = 0x8375B42C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375B430;
	sub_82534928(ctx, base);
	// frsp f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// stfs f4,48(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-332
	ctx.r4.s64 = ctx.r31.s64 + -332;
	// bl 0x82535898
	ctx.lr = 0x8375B444;
	sub_82535898(ctx, base);
	// addi r4,r31,-324
	ctx.r4.s64 = ctx.r31.s64 + -324;
	// bl 0x82535898
	ctx.lr = 0x8375B44C;
	sub_82535898(ctx, base);
	// addi r4,r31,-304
	ctx.r4.s64 = ctx.r31.s64 + -304;
	// bl 0x82535898
	ctx.lr = 0x8375B454;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375B458;
	sub_82534770(ctx, base);
	// stw r3,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r3.u32);
	// addi r4,r31,-288
	ctx.r4.s64 = ctx.r31.s64 + -288;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375B468;
	sub_82535898(ctx, base);
	// addi r4,r31,-280
	ctx.r4.s64 = ctx.r31.s64 + -280;
	// bl 0x82535898
	ctx.lr = 0x8375B470;
	sub_82535898(ctx, base);
	// addi r4,r31,-260
	ctx.r4.s64 = ctx.r31.s64 + -260;
	// bl 0x82535898
	ctx.lr = 0x8375B478;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375B47C;
	sub_82534928(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// stfs f3,56(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// addi r4,r31,-256
	ctx.r4.s64 = ctx.r31.s64 + -256;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375B490;
	sub_82535898(ctx, base);
	// addi r4,r31,-248
	ctx.r4.s64 = ctx.r31.s64 + -248;
	// bl 0x82535898
	ctx.lr = 0x8375B498;
	sub_82535898(ctx, base);
	// addi r4,r31,-228
	ctx.r4.s64 = ctx.r31.s64 + -228;
	// bl 0x82535898
	ctx.lr = 0x8375B4A0;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375B4A4;
	sub_82534928(ctx, base);
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// stfs f2,60(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-224
	ctx.r4.s64 = ctx.r31.s64 + -224;
	// bl 0x82535898
	ctx.lr = 0x8375B4B8;
	sub_82535898(ctx, base);
	// addi r4,r31,-216
	ctx.r4.s64 = ctx.r31.s64 + -216;
	// bl 0x82535898
	ctx.lr = 0x8375B4C0;
	sub_82535898(ctx, base);
	// addi r4,r31,-196
	ctx.r4.s64 = ctx.r31.s64 + -196;
	// bl 0x82535898
	ctx.lr = 0x8375B4C8;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375B4CC;
	sub_82534770(ctx, base);
	// stw r3,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-188
	ctx.r4.s64 = ctx.r31.s64 + -188;
	// bl 0x82535898
	ctx.lr = 0x8375B4DC;
	sub_82535898(ctx, base);
	// addi r4,r31,-180
	ctx.r4.s64 = ctx.r31.s64 + -180;
	// bl 0x82535898
	ctx.lr = 0x8375B4E4;
	sub_82535898(ctx, base);
	// addi r4,r31,-168
	ctx.r4.s64 = ctx.r31.s64 + -168;
	// bl 0x82535898
	ctx.lr = 0x8375B4EC;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375B4F0;
	sub_82534928(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// stfs f1,68(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-160
	ctx.r4.s64 = ctx.r31.s64 + -160;
	// bl 0x82535898
	ctx.lr = 0x8375B504;
	sub_82535898(ctx, base);
	// addi r4,r31,-152
	ctx.r4.s64 = ctx.r31.s64 + -152;
	// bl 0x82535898
	ctx.lr = 0x8375B50C;
	sub_82535898(ctx, base);
	// addi r4,r31,-140
	ctx.r4.s64 = ctx.r31.s64 + -140;
	// bl 0x82535898
	ctx.lr = 0x8375B514;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375B518;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,72(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 72, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-128
	ctx.r4.s64 = ctx.r31.s64 + -128;
	// bl 0x82535898
	ctx.lr = 0x8375B52C;
	sub_82535898(ctx, base);
	// addi r4,r31,-120
	ctx.r4.s64 = ctx.r31.s64 + -120;
	// bl 0x82535898
	ctx.lr = 0x8375B534;
	sub_82535898(ctx, base);
	// addi r4,r31,-108
	ctx.r4.s64 = ctx.r31.s64 + -108;
	// bl 0x82535898
	ctx.lr = 0x8375B53C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375B540;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,76(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 76, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-100
	ctx.r4.s64 = ctx.r31.s64 + -100;
	// bl 0x82535898
	ctx.lr = 0x8375B554;
	sub_82535898(ctx, base);
	// addi r4,r31,-92
	ctx.r4.s64 = ctx.r31.s64 + -92;
	// bl 0x82535898
	ctx.lr = 0x8375B55C;
	sub_82535898(ctx, base);
	// addi r4,r31,-80
	ctx.r4.s64 = ctx.r31.s64 + -80;
	// bl 0x82535898
	ctx.lr = 0x8375B564;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375B568;
	sub_82534928(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,80(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 80, temp.u32);
	// addi r4,r31,-68
	ctx.r4.s64 = ctx.r31.s64 + -68;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375B57C;
	sub_82535898(ctx, base);
	// addi r4,r31,-60
	ctx.r4.s64 = ctx.r31.s64 + -60;
	// bl 0x82535898
	ctx.lr = 0x8375B584;
	sub_82535898(ctx, base);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// bl 0x82535898
	ctx.lr = 0x8375B58C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375B590;
	sub_82534928(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,84(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 84, temp.u32);
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375B5A4;
	sub_82535898(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// bl 0x82535898
	ctx.lr = 0x8375B5AC;
	sub_82535898(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// bl 0x82535898
	ctx.lr = 0x8375B5B4;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375B5B8;
	sub_82534928(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,88(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 88, temp.u32);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375B5CC;
	sub_82535898(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x82535898
	ctx.lr = 0x8375B5D4;
	sub_82535898(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x8375B5DC;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375B5E0;
	sub_82534928(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,92(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 92, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8375B5F4"))) PPC_WEAK_FUNC(sub_8375B5F4);
PPC_FUNC_IMPL(__imp__sub_8375B5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8375B5F8"))) PPC_WEAK_FUNC(sub_8375B5F8);
PPC_FUNC_IMPL(__imp__sub_8375B5F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8375B600;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8375b620
	if (!cr6.eq) goto loc_8375B620;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8375B620:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x83763830
	ctx.lr = 0x8375B634;
	sub_83763830(ctx, base);
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x83763830
	ctx.lr = 0x8375B654;
	sub_83763830(ctx, base);
	// lfs f11,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f11,16(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,20(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,24(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lbz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// stb r11,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r11.u8);
	// lfs f8,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,32(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f7,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,36(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x83763830
	ctx.lr = 0x8375B690;
	sub_83763830(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83763830
	ctx.lr = 0x8375B6A0;
	sub_83763830(ctx, base);
	// lfs f6,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,40(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f5,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,44(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f4,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,48(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x83763830
	ctx.lr = 0x8375B6C4;
	sub_83763830(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// lfs f3,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,56(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f2,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,60(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83763830
	ctx.lr = 0x8375B6F0;
	sub_83763830(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83763830
	ctx.lr = 0x8375B700;
	sub_83763830(ctx, base);
	// lfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,68(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x83763830
	ctx.lr = 0x8375B71C;
	sub_83763830(ctx, base);
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f13,76(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,80(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,84(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x83763830
	ctx.lr = 0x8375B740;
	sub_83763830(ctx, base);
	// lfs f10,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,88(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f9,92(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8375B75C"))) PPC_WEAK_FUNC(sub_8375B75C);
PPC_FUNC_IMPL(__imp__sub_8375B75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8375B760"))) PPC_WEAK_FUNC(sub_8375B760);
PPC_FUNC_IMPL(__imp__sub_8375B760) {
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
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8375B784;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8375b810
	if (cr6.eq) goto loc_8375B810;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32213
	ctx.r9.s64 = -2111111168;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,-28876
	ctx.r8.s64 = ctx.r9.s64 + -28876;
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
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
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
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
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8375B810:
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

__attribute__((alias("__imp__sub_8375B824"))) PPC_WEAK_FUNC(sub_8375B824);
PPC_FUNC_IMPL(__imp__sub_8375B824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8375B828"))) PPC_WEAK_FUNC(sub_8375B828);
PPC_FUNC_IMPL(__imp__sub_8375B828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8375B830;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-28732
	ctx.r31.s64 = ctx.r11.s64 + -28732;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r31,-84
	ctx.r4.s64 = ctx.r31.s64 + -84;
	// bl 0x82535898
	ctx.lr = 0x8375B850;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375B854;
	sub_82534B10(ctx, base);
	// stb r3,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r3.u8);
	// addi r4,r31,-68
	ctx.r4.s64 = ctx.r31.s64 + -68;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375B864;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375B868;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375B87C;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375B880;
	sub_82534770(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375B890;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375B894;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,16(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375B8A8;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375B8AC;
	sub_82534928(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375B8C0;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375B8C4;
	sub_82534928(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,24(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8375B8D8"))) PPC_WEAK_FUNC(sub_8375B8D8);
PPC_FUNC_IMPL(__imp__sub_8375B8D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8375b8ec
	if (!cr6.eq) goto loc_8375B8EC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8375B8EC:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f12,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,20(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f11,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,24(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8375B924"))) PPC_WEAK_FUNC(sub_8375B924);
PPC_FUNC_IMPL(__imp__sub_8375B924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8375B928"))) PPC_WEAK_FUNC(sub_8375B928);
PPC_FUNC_IMPL(__imp__sub_8375B928) {
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
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8375B94C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8375b994
	if (cr6.eq) goto loc_8375B994;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32213
	ctx.r9.s64 = -2111111168;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,-28632
	ctx.r8.s64 = ctx.r9.s64 + -28632;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8375B994:
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

__attribute__((alias("__imp__sub_8375B9A8"))) PPC_WEAK_FUNC(sub_8375B9A8);
PPC_FUNC_IMPL(__imp__sub_8375B9A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8375B9B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r3,148
	ctx.r30.s64 = ctx.r3.s64 + 148;
	// li r26,2
	ctx.r26.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8375b9dc
	if (cr6.lt) goto loc_8375B9DC;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x8375B9DC;
	sub_825952B8(ctx, base);
loc_8375B9DC:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// addi r29,r28,120
	ctx.r29.s64 = ctx.r28.s64 + 120;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r11,140(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 140);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8375ba10
	if (cr6.lt) goto loc_8375BA10;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x8375BA10;
	sub_825952B8(ctx, base);
loc_8375BA10:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r30,r28,92
	ctx.r30.s64 = ctx.r28.s64 + 92;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,112(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8375ba3c
	if (cr6.lt) goto loc_8375BA3C;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x8375BA3C;
	sub_825952B8(ctx, base);
loc_8375BA3C:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// addi r29,r28,56
	ctx.r29.s64 = ctx.r28.s64 + 56;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8375ba68
	if (cr6.lt) goto loc_8375BA68;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x8375BA68;
	sub_825952B8(ctx, base);
loc_8375BA68:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8375BA7C"))) PPC_WEAK_FUNC(sub_8375BA7C);
PPC_FUNC_IMPL(__imp__sub_8375BA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8375BA80"))) PPC_WEAK_FUNC(sub_8375BA80);
PPC_FUNC_IMPL(__imp__sub_8375BA80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r10,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// lis r8,-32213
	ctx.r8.s64 = -2111111168;
	// stb r11,60(r3)
	PPC_STORE_U8(ctx.r3.u32 + 60, ctx.r11.u8);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// addi r7,r8,-27840
	ctx.r7.s64 = ctx.r8.s64 + -27840;
	// stw r10,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r10.u32);
	// stb r11,96(r3)
	PPC_STORE_U8(ctx.r3.u32 + 96, ctx.r11.u8);
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// stw r10,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r10.u32);
	// stb r11,124(r3)
	PPC_STORE_U8(ctx.r3.u32 + 124, ctx.r11.u8);
	// stw r11,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r11.u32);
	// stw r10,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r10.u32);
	// stb r11,152(r3)
	PPC_STORE_U8(ctx.r3.u32 + 152, ctx.r11.u8);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
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
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f0,180(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// stfs f0,184(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// stfs f0,188(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// stfs f0,192(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// stfs f0,196(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// stfs f0,200(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// stfs f0,204(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// stfs f0,208(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// stfs f0,212(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 212, temp.u32);
	// stfs f0,216(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 216, temp.u32);
	// stfs f0,220(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// stfs f0,224(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8375BB44"))) PPC_WEAK_FUNC(sub_8375BB44);
PPC_FUNC_IMPL(__imp__sub_8375BB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8375BB48"))) PPC_WEAK_FUNC(sub_8375BB48);
PPC_FUNC_IMPL(__imp__sub_8375BB48) {
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
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8375b9a8
	ctx.lr = 0x8375BB6C;
	sub_8375B9A8(ctx, base);
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,-5184
	ctx.r9.s64 = ctx.r11.s64 + -5184;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8375bb90
	if (cr6.eq) goto loc_8375BB90;
	// bl 0x82416268
	ctx.lr = 0x8375BB8C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8375BB90:
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

__attribute__((alias("__imp__sub_8375BBA8"))) PPC_WEAK_FUNC(sub_8375BBA8);
PPC_FUNC_IMPL(__imp__sub_8375BBA8) {
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
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,228
	ctx.r4.s64 = 228;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8375BBCC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8375bbe8
	if (cr6.eq) goto loc_8375BBE8;
	// bl 0x8375ba80
	ctx.lr = 0x8375BBD8;
	sub_8375BA80(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8375BBE8:
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

__attribute__((alias("__imp__sub_8375BBFC"))) PPC_WEAK_FUNC(sub_8375BBFC);
PPC_FUNC_IMPL(__imp__sub_8375BBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8375BC00"))) PPC_WEAK_FUNC(sub_8375BC00);
PPC_FUNC_IMPL(__imp__sub_8375BC00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8375BC08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-27944
	ctx.r31.s64 = ctx.r11.s64 + -27944;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r31,-624
	ctx.r4.s64 = ctx.r31.s64 + -624;
	// bl 0x82535898
	ctx.lr = 0x8375BC28;
	sub_82535898(ctx, base);
	// addi r4,r31,-612
	ctx.r4.s64 = ctx.r31.s64 + -612;
	// bl 0x82535898
	ctx.lr = 0x8375BC30;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375BC34;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-596
	ctx.r4.s64 = ctx.r31.s64 + -596;
	// bl 0x82535898
	ctx.lr = 0x8375BC48;
	sub_82535898(ctx, base);
	// addi r4,r31,-584
	ctx.r4.s64 = ctx.r31.s64 + -584;
	// bl 0x82535898
	ctx.lr = 0x8375BC50;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375BC54;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-568
	ctx.r4.s64 = ctx.r31.s64 + -568;
	// bl 0x82535898
	ctx.lr = 0x8375BC68;
	sub_82535898(ctx, base);
	// addi r4,r31,-556
	ctx.r4.s64 = ctx.r31.s64 + -556;
	// bl 0x82535898
	ctx.lr = 0x8375BC70;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375BC74;
	sub_82534928(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,12(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-544
	ctx.r4.s64 = ctx.r31.s64 + -544;
	// bl 0x82535898
	ctx.lr = 0x8375BC88;
	sub_82535898(ctx, base);
	// addi r4,r31,-532
	ctx.r4.s64 = ctx.r31.s64 + -532;
	// bl 0x82535898
	ctx.lr = 0x8375BC90;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375BC94;
	sub_82534928(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,16(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-516
	ctx.r4.s64 = ctx.r31.s64 + -516;
	// bl 0x82535898
	ctx.lr = 0x8375BCA8;
	sub_82535898(ctx, base);
	// addi r4,r31,-504
	ctx.r4.s64 = ctx.r31.s64 + -504;
	// bl 0x82535898
	ctx.lr = 0x8375BCB0;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375BCB4;
	sub_82534928(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,20(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-492
	ctx.r4.s64 = ctx.r31.s64 + -492;
	// bl 0x82535898
	ctx.lr = 0x8375BCC8;
	sub_82535898(ctx, base);
	// addi r4,r31,-480
	ctx.r4.s64 = ctx.r31.s64 + -480;
	// bl 0x82535898
	ctx.lr = 0x8375BCD0;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375BCD4;
	sub_82534928(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,24(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-468
	ctx.r4.s64 = ctx.r31.s64 + -468;
	// bl 0x82535898
	ctx.lr = 0x8375BCE8;
	sub_82535898(ctx, base);
	// addi r4,r31,-456
	ctx.r4.s64 = ctx.r31.s64 + -456;
	// bl 0x82535898
	ctx.lr = 0x8375BCF0;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375BCF4;
	sub_82534928(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// stfs f8,28(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// addi r4,r31,-444
	ctx.r4.s64 = ctx.r31.s64 + -444;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375BD08;
	sub_82535898(ctx, base);
	// addi r4,r31,-432
	ctx.r4.s64 = ctx.r31.s64 + -432;
	// bl 0x82535898
	ctx.lr = 0x8375BD10;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375BD14;
	sub_82534928(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// stfs f7,32(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-416
	ctx.r4.s64 = ctx.r31.s64 + -416;
	// bl 0x82535898
	ctx.lr = 0x8375BD28;
	sub_82535898(ctx, base);
	// addi r4,r31,-404
	ctx.r4.s64 = ctx.r31.s64 + -404;
	// bl 0x82535898
	ctx.lr = 0x8375BD30;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375BD34;
	sub_82534928(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// stfs f6,36(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-392
	ctx.r4.s64 = ctx.r31.s64 + -392;
	// bl 0x82535898
	ctx.lr = 0x8375BD48;
	sub_82535898(ctx, base);
	// addi r4,r31,-380
	ctx.r4.s64 = ctx.r31.s64 + -380;
	// bl 0x82535898
	ctx.lr = 0x8375BD50;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375BD54;
	sub_82534928(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// stfs f5,40(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-356
	ctx.r4.s64 = ctx.r31.s64 + -356;
	// bl 0x82535898
	ctx.lr = 0x8375BD68;
	sub_82535898(ctx, base);
	// addi r4,r31,-344
	ctx.r4.s64 = ctx.r31.s64 + -344;
	// bl 0x82535898
	ctx.lr = 0x8375BD70;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375BD74;
	sub_82534928(ctx, base);
	// frsp f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// stfs f4,44(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-324
	ctx.r4.s64 = ctx.r31.s64 + -324;
	// bl 0x82535898
	ctx.lr = 0x8375BD88;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375BD8C;
	sub_82534928(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// stfs f3,48(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-300
	ctx.r4.s64 = ctx.r31.s64 + -300;
	// bl 0x82535898
	ctx.lr = 0x8375BDA0;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375BDA4;
	sub_82534928(ctx, base);
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// stfs f2,52(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-284
	ctx.r4.s64 = ctx.r31.s64 + -284;
	// bl 0x82535898
	ctx.lr = 0x8375BDB8;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375BDBC;
	sub_82534928(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// stfs f1,56(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// addi r4,r31,-268
	ctx.r4.s64 = ctx.r31.s64 + -268;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375BDD0;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x8375BDD4;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8375BDDC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8375bddc
	if (!cr6.eq) goto loc_8375BDDC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8375BE00;
	sub_8259CC28(ctx, base);
	// addi r4,r31,-260
	ctx.r4.s64 = ctx.r31.s64 + -260;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375BE0C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375BE10;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,88(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 88, temp.u32);
	// addi r4,r31,-244
	ctx.r4.s64 = ctx.r31.s64 + -244;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375BE24;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375BE28;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,92(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 92, temp.u32);
	// addi r4,r31,-228
	ctx.r4.s64 = ctx.r31.s64 + -228;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375BE3C;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x8375BE40;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8375BE48:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8375be48
	if (!cr6.eq) goto loc_8375BE48;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r30,96
	ctx.r3.s64 = ctx.r30.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8375BE6C;
	sub_8259CC28(ctx, base);
	// addi r4,r31,-220
	ctx.r4.s64 = ctx.r31.s64 + -220;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375BE78;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x8375BE7C;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8375BE84:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8375be84
	if (!cr6.eq) goto loc_8375BE84;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r30,124
	ctx.r3.s64 = ctx.r30.s64 + 124;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8375BEA8;
	sub_8259CC28(ctx, base);
	// addi r4,r31,-212
	ctx.r4.s64 = ctx.r31.s64 + -212;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375BEB4;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x8375BEB8;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8375BEC0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8375bec0
	if (!cr6.eq) goto loc_8375BEC0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r30,152
	ctx.r3.s64 = ctx.r30.s64 + 152;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8375BEE4;
	sub_8259CC28(ctx, base);
	// addi r4,r31,-204
	ctx.r4.s64 = ctx.r31.s64 + -204;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375BEF0;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375BEF4;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,180(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 180, temp.u32);
	// addi r4,r31,-192
	ctx.r4.s64 = ctx.r31.s64 + -192;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375BF08;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375BF0C;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,184(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 184, temp.u32);
	// addi r4,r31,-180
	ctx.r4.s64 = ctx.r31.s64 + -180;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375BF20;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375BF24;
	sub_82534928(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,188(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 188, temp.u32);
	// addi r4,r31,-160
	ctx.r4.s64 = ctx.r31.s64 + -160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375BF38;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375BF3C;
	sub_82534928(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,192(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 192, temp.u32);
	// addi r4,r31,-140
	ctx.r4.s64 = ctx.r31.s64 + -140;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375BF50;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375BF54;
	sub_82534928(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,196(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 196, temp.u32);
	// addi r4,r31,-120
	ctx.r4.s64 = ctx.r31.s64 + -120;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375BF68;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375BF6C;
	sub_82534928(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,200(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 200, temp.u32);
	// addi r4,r31,-100
	ctx.r4.s64 = ctx.r31.s64 + -100;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375BF80;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375BF84;
	sub_82534928(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// stfs f8,204(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 204, temp.u32);
	// addi r4,r31,-80
	ctx.r4.s64 = ctx.r31.s64 + -80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375BF98;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375BF9C;
	sub_82534928(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// stfs f7,208(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 208, temp.u32);
	// addi r4,r31,-60
	ctx.r4.s64 = ctx.r31.s64 + -60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375BFB0;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375BFB4;
	sub_82534928(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// stfs f6,212(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 212, temp.u32);
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375BFC8;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375BFCC;
	sub_82534928(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// stfs f5,216(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 216, temp.u32);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375BFE0;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375BFE4;
	sub_82534928(ctx, base);
	// frsp f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// stfs f4,220(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 220, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375BFF8;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375BFFC;
	sub_82534928(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// stfs f3,224(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 224, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8375C010"))) PPC_WEAK_FUNC(sub_8375C010);
PPC_FUNC_IMPL(__imp__sub_8375C010) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8375c03c
	if (!cr6.eq) goto loc_8375C03C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8375c20c
	goto loc_8375C20C;
loc_8375C03C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83763830
	ctx.lr = 0x8375C048;
	sub_83763830(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f10,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,20(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f9,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,24(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f8,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,28(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f7,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,32(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f6,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,36(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f5,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,40(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f4,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,44(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f3,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,48(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f2,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,52(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f1,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,56(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x83763830
	ctx.lr = 0x8375C0C4;
	sub_83763830(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8375C0CC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8375c0cc
	if (!cr6.eq) goto loc_8375C0CC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8375C0F0;
	sub_8259CC28(ctx, base);
	// lfs f0,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f13,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,92(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x83763830
	ctx.lr = 0x8375C10C;
	sub_83763830(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8375C114:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8375c114
	if (!cr6.eq) goto loc_8375C114;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8375C138;
	sub_8259CC28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x83763830
	ctx.lr = 0x8375C144;
	sub_83763830(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8375C14C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8375c14c
	if (!cr6.eq) goto loc_8375C14C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8375C170;
	sub_8259CC28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x83763830
	ctx.lr = 0x8375C17C;
	sub_83763830(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8375C184:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8375c184
	if (!cr6.eq) goto loc_8375C184;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8375C1A8;
	sub_8259CC28(ctx, base);
	// lfs f0,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f13,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,184(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// lfs f12,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,188(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// lfs f11,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,192(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// lfs f10,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,196(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// lfs f9,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,200(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// lfs f8,64(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,204(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 204, temp.u32);
	// lfs f7,68(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,208(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// lfs f6,72(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,212(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// lfs f5,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,216(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// lfs f4,80(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,220(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
	// lfs f3,84(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,224(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
loc_8375C20C:
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

__attribute__((alias("__imp__sub_8375C224"))) PPC_WEAK_FUNC(sub_8375C224);
PPC_FUNC_IMPL(__imp__sub_8375C224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8375C228"))) PPC_WEAK_FUNC(sub_8375C228);
PPC_FUNC_IMPL(__imp__sub_8375C228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32213
	ctx.r9.s64 = -2111111168;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,-23832
	ctx.r8.s64 = ctx.r9.s64 + -23832;
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stb r11,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r11.u8);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stb r11,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, ctx.r11.u8);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stb r11,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, ctx.r11.u8);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stb r11,124(r3)
	PPC_STORE_U8(ctx.r3.u32 + 124, ctx.r11.u8);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stb r11,132(r3)
	PPC_STORE_U8(ctx.r3.u32 + 132, ctx.r11.u8);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stb r11,140(r3)
	PPC_STORE_U8(ctx.r3.u32 + 140, ctx.r11.u8);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stb r11,156(r3)
	PPC_STORE_U8(ctx.r3.u32 + 156, ctx.r11.u8);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stb r11,184(r3)
	PPC_STORE_U8(ctx.r3.u32 + 184, ctx.r11.u8);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stb r11,216(r3)
	PPC_STORE_U8(ctx.r3.u32 + 216, ctx.r11.u8);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stb r11,220(r3)
	PPC_STORE_U8(ctx.r3.u32 + 220, ctx.r11.u8);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stb r11,224(r3)
	PPC_STORE_U8(ctx.r3.u32 + 224, ctx.r11.u8);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stb r11,248(r3)
	PPC_STORE_U8(ctx.r3.u32 + 248, ctx.r11.u8);
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
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stfs f0,148(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stfs f0,152(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// stfs f0,160(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// stfs f0,164(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// stfs f0,168(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// stfs f0,172(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// stfs f0,176(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// stfs f0,180(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// stfs f0,188(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// stfs f0,192(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// stfs f0,196(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// stfs f0,200(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// stfs f0,204(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// stfs f0,208(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// stfs f0,212(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 212, temp.u32);
	// stfs f0,228(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// stfs f0,232(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 232, temp.u32);
	// stfs f0,236(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 236, temp.u32);
	// stfs f0,240(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// stfs f0,244(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// stfs f0,256(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 256, temp.u32);
	// stfs f0,264(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 264, temp.u32);
	// stfs f0,272(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 272, temp.u32);
	// stfs f0,276(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 276, temp.u32);
	// stfs f0,284(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 284, temp.u32);
	// stfs f0,292(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 292, temp.u32);
	// stfs f0,300(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 300, temp.u32);
	// stfs f0,308(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 308, temp.u32);
	// stfs f0,316(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 316, temp.u32);
	// stfs f0,324(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 324, temp.u32);
	// stfs f0,328(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 328, temp.u32);
	// stfs f0,352(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 352, temp.u32);
	// stfs f0,364(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 364, temp.u32);
	// stb r11,252(r3)
	PPC_STORE_U8(ctx.r3.u32 + 252, ctx.r11.u8);
	// stb r11,260(r3)
	PPC_STORE_U8(ctx.r3.u32 + 260, ctx.r11.u8);
	// stb r11,268(r3)
	PPC_STORE_U8(ctx.r3.u32 + 268, ctx.r11.u8);
	// stb r11,280(r3)
	PPC_STORE_U8(ctx.r3.u32 + 280, ctx.r11.u8);
	// stb r11,288(r3)
	PPC_STORE_U8(ctx.r3.u32 + 288, ctx.r11.u8);
	// stb r11,296(r3)
	PPC_STORE_U8(ctx.r3.u32 + 296, ctx.r11.u8);
	// stb r11,304(r3)
	PPC_STORE_U8(ctx.r3.u32 + 304, ctx.r11.u8);
	// stb r11,312(r3)
	PPC_STORE_U8(ctx.r3.u32 + 312, ctx.r11.u8);
	// stb r11,320(r3)
	PPC_STORE_U8(ctx.r3.u32 + 320, ctx.r11.u8);
	// stb r11,332(r3)
	PPC_STORE_U8(ctx.r3.u32 + 332, ctx.r11.u8);
	// stb r11,336(r3)
	PPC_STORE_U8(ctx.r3.u32 + 336, ctx.r11.u8);
	// stb r11,340(r3)
	PPC_STORE_U8(ctx.r3.u32 + 340, ctx.r11.u8);
	// stw r11,344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 344, ctx.r11.u32);
	// stb r11,348(r3)
	PPC_STORE_U8(ctx.r3.u32 + 348, ctx.r11.u8);
	// stb r11,356(r3)
	PPC_STORE_U8(ctx.r3.u32 + 356, ctx.r11.u8);
	// stb r11,357(r3)
	PPC_STORE_U8(ctx.r3.u32 + 357, ctx.r11.u8);
	// stb r11,360(r3)
	PPC_STORE_U8(ctx.r3.u32 + 360, ctx.r11.u8);
	// stb r11,368(r3)
	PPC_STORE_U8(ctx.r3.u32 + 368, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8375C3B8"))) PPC_WEAK_FUNC(sub_8375C3B8);
PPC_FUNC_IMPL(__imp__sub_8375C3B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8375C3C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-23924
	ctx.r31.s64 = ctx.r11.s64 + -23924;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r31,-3852
	ctx.r4.s64 = ctx.r31.s64 + -3852;
	// bl 0x82535898
	ctx.lr = 0x8375C3E0;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375C3E4;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-3828
	ctx.r4.s64 = ctx.r31.s64 + -3828;
	// bl 0x82535898
	ctx.lr = 0x8375C3F8;
	sub_82535898(ctx, base);
	// addi r4,r31,-3808
	ctx.r4.s64 = ctx.r31.s64 + -3808;
	// bl 0x82535898
	ctx.lr = 0x8375C400;
	sub_82535898(ctx, base);
	// addi r4,r31,-3796
	ctx.r4.s64 = ctx.r31.s64 + -3796;
	// bl 0x82535898
	ctx.lr = 0x8375C408;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375C40C;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-3792
	ctx.r4.s64 = ctx.r31.s64 + -3792;
	// bl 0x82535898
	ctx.lr = 0x8375C420;
	sub_82535898(ctx, base);
	// addi r4,r31,-3772
	ctx.r4.s64 = ctx.r31.s64 + -3772;
	// bl 0x82535898
	ctx.lr = 0x8375C428;
	sub_82535898(ctx, base);
	// addi r4,r31,-3760
	ctx.r4.s64 = ctx.r31.s64 + -3760;
	// bl 0x82535898
	ctx.lr = 0x8375C430;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375C434;
	sub_82534928(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,12(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-3756
	ctx.r4.s64 = ctx.r31.s64 + -3756;
	// bl 0x82535898
	ctx.lr = 0x8375C448;
	sub_82535898(ctx, base);
	// addi r4,r31,-3736
	ctx.r4.s64 = ctx.r31.s64 + -3736;
	// bl 0x82535898
	ctx.lr = 0x8375C450;
	sub_82535898(ctx, base);
	// addi r4,r31,-3724
	ctx.r4.s64 = ctx.r31.s64 + -3724;
	// bl 0x82535898
	ctx.lr = 0x8375C458;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375C45C;
	sub_82534928(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,16(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-3720
	ctx.r4.s64 = ctx.r31.s64 + -3720;
	// bl 0x82535898
	ctx.lr = 0x8375C470;
	sub_82535898(ctx, base);
	// addi r4,r31,-3700
	ctx.r4.s64 = ctx.r31.s64 + -3700;
	// bl 0x82535898
	ctx.lr = 0x8375C478;
	sub_82535898(ctx, base);
	// addi r4,r31,-3692
	ctx.r4.s64 = ctx.r31.s64 + -3692;
	// bl 0x82535898
	ctx.lr = 0x8375C480;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375C484;
	sub_82534928(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,20(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-3680
	ctx.r4.s64 = ctx.r31.s64 + -3680;
	// bl 0x82535898
	ctx.lr = 0x8375C498;
	sub_82535898(ctx, base);
	// addi r4,r31,-3660
	ctx.r4.s64 = ctx.r31.s64 + -3660;
	// bl 0x82535898
	ctx.lr = 0x8375C4A0;
	sub_82535898(ctx, base);
	// addi r4,r31,-3652
	ctx.r4.s64 = ctx.r31.s64 + -3652;
	// bl 0x82535898
	ctx.lr = 0x8375C4A8;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375C4AC;
	sub_82534928(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,24(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// addi r4,r31,-3640
	ctx.r4.s64 = ctx.r31.s64 + -3640;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375C4C0;
	sub_82535898(ctx, base);
	// addi r4,r31,-3620
	ctx.r4.s64 = ctx.r31.s64 + -3620;
	// bl 0x82535898
	ctx.lr = 0x8375C4C8;
	sub_82535898(ctx, base);
	// addi r4,r31,-3612
	ctx.r4.s64 = ctx.r31.s64 + -3612;
	// bl 0x82535898
	ctx.lr = 0x8375C4D0;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375C4D4;
	sub_82534928(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// stfs f8,28(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-3596
	ctx.r4.s64 = ctx.r31.s64 + -3596;
	// bl 0x82535898
	ctx.lr = 0x8375C4E8;
	sub_82535898(ctx, base);
	// addi r4,r31,-3576
	ctx.r4.s64 = ctx.r31.s64 + -3576;
	// bl 0x82535898
	ctx.lr = 0x8375C4F0;
	sub_82535898(ctx, base);
	// addi r4,r31,-3568
	ctx.r4.s64 = ctx.r31.s64 + -3568;
	// bl 0x82535898
	ctx.lr = 0x8375C4F8;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375C4FC;
	sub_82534928(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// stfs f7,32(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-3552
	ctx.r4.s64 = ctx.r31.s64 + -3552;
	// bl 0x82535898
	ctx.lr = 0x8375C510;
	sub_82535898(ctx, base);
	// addi r4,r31,-3532
	ctx.r4.s64 = ctx.r31.s64 + -3532;
	// bl 0x82535898
	ctx.lr = 0x8375C518;
	sub_82535898(ctx, base);
	// addi r4,r31,-3524
	ctx.r4.s64 = ctx.r31.s64 + -3524;
	// bl 0x82535898
	ctx.lr = 0x8375C520;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375C524;
	sub_82534928(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// stfs f6,36(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-3508
	ctx.r4.s64 = ctx.r31.s64 + -3508;
	// bl 0x82535898
	ctx.lr = 0x8375C538;
	sub_82535898(ctx, base);
	// addi r4,r31,-3488
	ctx.r4.s64 = ctx.r31.s64 + -3488;
	// bl 0x82535898
	ctx.lr = 0x8375C540;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375C544;
	sub_82534B10(ctx, base);
	// stb r3,40(r30)
	PPC_STORE_U8(ctx.r30.u32 + 40, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-3480
	ctx.r4.s64 = ctx.r31.s64 + -3480;
	// bl 0x82535898
	ctx.lr = 0x8375C554;
	sub_82535898(ctx, base);
	// addi r4,r31,-3460
	ctx.r4.s64 = ctx.r31.s64 + -3460;
	// bl 0x82535898
	ctx.lr = 0x8375C55C;
	sub_82535898(ctx, base);
	// addi r4,r31,-3432
	ctx.r4.s64 = ctx.r31.s64 + -3432;
	// bl 0x82535898
	ctx.lr = 0x8375C564;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375C568;
	sub_82534B10(ctx, base);
	// stb r3,44(r30)
	PPC_STORE_U8(ctx.r30.u32 + 44, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-3424
	ctx.r4.s64 = ctx.r31.s64 + -3424;
	// bl 0x82535898
	ctx.lr = 0x8375C578;
	sub_82535898(ctx, base);
	// addi r4,r31,-3404
	ctx.r4.s64 = ctx.r31.s64 + -3404;
	// bl 0x82535898
	ctx.lr = 0x8375C580;
	sub_82535898(ctx, base);
	// addi r4,r31,-3376
	ctx.r4.s64 = ctx.r31.s64 + -3376;
	// bl 0x82535898
	ctx.lr = 0x8375C588;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375C58C;
	sub_82534928(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// stfs f5,48(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-3360
	ctx.r4.s64 = ctx.r31.s64 + -3360;
	// bl 0x82535898
	ctx.lr = 0x8375C5A0;
	sub_82535898(ctx, base);
	// addi r4,r31,-3340
	ctx.r4.s64 = ctx.r31.s64 + -3340;
	// bl 0x82535898
	ctx.lr = 0x8375C5A8;
	sub_82535898(ctx, base);
	// addi r4,r31,-3312
	ctx.r4.s64 = ctx.r31.s64 + -3312;
	// bl 0x82535898
	ctx.lr = 0x8375C5B0;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375C5B4;
	sub_82534928(ctx, base);
	// frsp f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// stfs f4,52(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// addi r4,r31,-3296
	ctx.r4.s64 = ctx.r31.s64 + -3296;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375C5C8;
	sub_82535898(ctx, base);
	// addi r4,r31,-3276
	ctx.r4.s64 = ctx.r31.s64 + -3276;
	// bl 0x82535898
	ctx.lr = 0x8375C5D0;
	sub_82535898(ctx, base);
	// addi r4,r31,-3248
	ctx.r4.s64 = ctx.r31.s64 + -3248;
	// bl 0x82535898
	ctx.lr = 0x8375C5D8;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375C5DC;
	sub_82534928(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// stfs f3,56(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-3232
	ctx.r4.s64 = ctx.r31.s64 + -3232;
	// bl 0x82535898
	ctx.lr = 0x8375C5F0;
	sub_82535898(ctx, base);
	// addi r4,r31,-3212
	ctx.r4.s64 = ctx.r31.s64 + -3212;
	// bl 0x82535898
	ctx.lr = 0x8375C5F8;
	sub_82535898(ctx, base);
	// addi r4,r31,-3184
	ctx.r4.s64 = ctx.r31.s64 + -3184;
	// bl 0x82535898
	ctx.lr = 0x8375C600;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375C604;
	sub_82534928(ctx, base);
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// stfs f2,60(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-3168
	ctx.r4.s64 = ctx.r31.s64 + -3168;
	// bl 0x82535898
	ctx.lr = 0x8375C618;
	sub_82535898(ctx, base);
	// addi r4,r31,-3148
	ctx.r4.s64 = ctx.r31.s64 + -3148;
	// bl 0x82535898
	ctx.lr = 0x8375C620;
	sub_82535898(ctx, base);
	// addi r4,r31,-3120
	ctx.r4.s64 = ctx.r31.s64 + -3120;
	// bl 0x82535898
	ctx.lr = 0x8375C628;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375C62C;
	sub_82534928(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// stfs f1,64(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 64, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-3104
	ctx.r4.s64 = ctx.r31.s64 + -3104;
	// bl 0x82535898
	ctx.lr = 0x8375C640;
	sub_82535898(ctx, base);
	// addi r4,r31,-3084
	ctx.r4.s64 = ctx.r31.s64 + -3084;
	// bl 0x82535898
	ctx.lr = 0x8375C648;
	sub_82535898(ctx, base);
	// addi r4,r31,-3056
	ctx.r4.s64 = ctx.r31.s64 + -3056;
	// bl 0x82535898
	ctx.lr = 0x8375C650;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375C654;
	sub_82534B10(ctx, base);
	// stb r3,68(r30)
	PPC_STORE_U8(ctx.r30.u32 + 68, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-3036
	ctx.r4.s64 = ctx.r31.s64 + -3036;
	// bl 0x82535898
	ctx.lr = 0x8375C664;
	sub_82535898(ctx, base);
	// addi r4,r31,-3016
	ctx.r4.s64 = ctx.r31.s64 + -3016;
	// bl 0x82535898
	ctx.lr = 0x8375C66C;
	sub_82535898(ctx, base);
	// addi r4,r31,-2988
	ctx.r4.s64 = ctx.r31.s64 + -2988;
	// bl 0x82535898
	ctx.lr = 0x8375C674;
	sub_82535898(ctx, base);
	// addi r4,r31,-2976
	ctx.r4.s64 = ctx.r31.s64 + -2976;
	// bl 0x82535898
	ctx.lr = 0x8375C67C;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375C680;
	sub_82534B10(ctx, base);
	// stb r3,72(r30)
	PPC_STORE_U8(ctx.r30.u32 + 72, ctx.r3.u8);
	// addi r4,r31,-2968
	ctx.r4.s64 = ctx.r31.s64 + -2968;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375C690;
	sub_82535898(ctx, base);
	// addi r4,r31,-2948
	ctx.r4.s64 = ctx.r31.s64 + -2948;
	// bl 0x82535898
	ctx.lr = 0x8375C698;
	sub_82535898(ctx, base);
	// addi r4,r31,-2920
	ctx.r4.s64 = ctx.r31.s64 + -2920;
	// bl 0x82535898
	ctx.lr = 0x8375C6A0;
	sub_82535898(ctx, base);
	// addi r4,r31,-2908
	ctx.r4.s64 = ctx.r31.s64 + -2908;
	// bl 0x82535898
	ctx.lr = 0x8375C6A8;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375C6AC;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,76(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 76, temp.u32);
	// addi r4,r31,-2904
	ctx.r4.s64 = ctx.r31.s64 + -2904;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375C6C0;
	sub_82535898(ctx, base);
	// addi r4,r31,-2884
	ctx.r4.s64 = ctx.r31.s64 + -2884;
	// bl 0x82535898
	ctx.lr = 0x8375C6C8;
	sub_82535898(ctx, base);
	// addi r4,r31,-2856
	ctx.r4.s64 = ctx.r31.s64 + -2856;
	// bl 0x82535898
	ctx.lr = 0x8375C6D0;
	sub_82535898(ctx, base);
	// addi r4,r31,-2844
	ctx.r4.s64 = ctx.r31.s64 + -2844;
	// bl 0x82535898
	ctx.lr = 0x8375C6D8;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375C6DC;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,80(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 80, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-2836
	ctx.r4.s64 = ctx.r31.s64 + -2836;
	// bl 0x82535898
	ctx.lr = 0x8375C6F0;
	sub_82535898(ctx, base);
	// addi r4,r31,-2816
	ctx.r4.s64 = ctx.r31.s64 + -2816;
	// bl 0x82535898
	ctx.lr = 0x8375C6F8;
	sub_82535898(ctx, base);
	// addi r4,r31,-2788
	ctx.r4.s64 = ctx.r31.s64 + -2788;
	// bl 0x82535898
	ctx.lr = 0x8375C700;
	sub_82535898(ctx, base);
	// addi r4,r31,-2776
	ctx.r4.s64 = ctx.r31.s64 + -2776;
	// bl 0x82535898
	ctx.lr = 0x8375C708;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375C70C;
	sub_82534928(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,84(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 84, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-2764
	ctx.r4.s64 = ctx.r31.s64 + -2764;
	// bl 0x82535898
	ctx.lr = 0x8375C720;
	sub_82535898(ctx, base);
	// addi r4,r31,-2744
	ctx.r4.s64 = ctx.r31.s64 + -2744;
	// bl 0x82535898
	ctx.lr = 0x8375C728;
	sub_82535898(ctx, base);
	// addi r4,r31,-2716
	ctx.r4.s64 = ctx.r31.s64 + -2716;
	// bl 0x82535898
	ctx.lr = 0x8375C730;
	sub_82535898(ctx, base);
	// addi r4,r31,-2704
	ctx.r4.s64 = ctx.r31.s64 + -2704;
	// bl 0x82535898
	ctx.lr = 0x8375C738;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375C73C;
	sub_82534928(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,88(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 88, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-2692
	ctx.r4.s64 = ctx.r31.s64 + -2692;
	// bl 0x82535898
	ctx.lr = 0x8375C750;
	sub_82535898(ctx, base);
	// addi r4,r31,-2672
	ctx.r4.s64 = ctx.r31.s64 + -2672;
	// bl 0x82535898
	ctx.lr = 0x8375C758;
	sub_82535898(ctx, base);
	// addi r4,r31,-2644
	ctx.r4.s64 = ctx.r31.s64 + -2644;
	// bl 0x82535898
	ctx.lr = 0x8375C760;
	sub_82535898(ctx, base);
	// addi r4,r31,-2632
	ctx.r4.s64 = ctx.r31.s64 + -2632;
	// bl 0x82535898
	ctx.lr = 0x8375C768;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375C76C;
	sub_82534928(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,92(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 92, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-2620
	ctx.r4.s64 = ctx.r31.s64 + -2620;
	// bl 0x82535898
	ctx.lr = 0x8375C780;
	sub_82535898(ctx, base);
	// addi r4,r31,-2600
	ctx.r4.s64 = ctx.r31.s64 + -2600;
	// bl 0x82535898
	ctx.lr = 0x8375C788;
	sub_82535898(ctx, base);
	// addi r4,r31,-2592
	ctx.r4.s64 = ctx.r31.s64 + -2592;
	// bl 0x82535898
	ctx.lr = 0x8375C790;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375C794;
	sub_82534928(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,96(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 96, temp.u32);
	// addi r4,r31,-2580
	ctx.r4.s64 = ctx.r31.s64 + -2580;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375C7A8;
	sub_82535898(ctx, base);
	// addi r4,r31,-2560
	ctx.r4.s64 = ctx.r31.s64 + -2560;
	// bl 0x82535898
	ctx.lr = 0x8375C7B0;
	sub_82535898(ctx, base);
	// addi r4,r31,-2552
	ctx.r4.s64 = ctx.r31.s64 + -2552;
	// bl 0x82535898
	ctx.lr = 0x8375C7B8;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375C7BC;
	sub_82534928(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// stfs f8,100(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 100, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-2540
	ctx.r4.s64 = ctx.r31.s64 + -2540;
	// bl 0x82535898
	ctx.lr = 0x8375C7D0;
	sub_82535898(ctx, base);
	// addi r4,r31,-2520
	ctx.r4.s64 = ctx.r31.s64 + -2520;
	// bl 0x82535898
	ctx.lr = 0x8375C7D8;
	sub_82535898(ctx, base);
	// addi r4,r31,-2512
	ctx.r4.s64 = ctx.r31.s64 + -2512;
	// bl 0x82535898
	ctx.lr = 0x8375C7E0;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375C7E4;
	sub_82534928(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// stfs f7,104(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 104, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-2500
	ctx.r4.s64 = ctx.r31.s64 + -2500;
	// bl 0x82535898
	ctx.lr = 0x8375C7F8;
	sub_82535898(ctx, base);
	// addi r4,r31,-2480
	ctx.r4.s64 = ctx.r31.s64 + -2480;
	// bl 0x82535898
	ctx.lr = 0x8375C800;
	sub_82535898(ctx, base);
	// addi r4,r31,-2472
	ctx.r4.s64 = ctx.r31.s64 + -2472;
	// bl 0x82535898
	ctx.lr = 0x8375C808;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375C80C;
	sub_82534928(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// stfs f6,108(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 108, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-2456
	ctx.r4.s64 = ctx.r31.s64 + -2456;
	// bl 0x82535898
	ctx.lr = 0x8375C820;
	sub_82535898(ctx, base);
	// addi r4,r31,-2436
	ctx.r4.s64 = ctx.r31.s64 + -2436;
	// bl 0x82535898
	ctx.lr = 0x8375C828;
	sub_82535898(ctx, base);
	// addi r4,r31,-2428
	ctx.r4.s64 = ctx.r31.s64 + -2428;
	// bl 0x82535898
	ctx.lr = 0x8375C830;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375C834;
	sub_82534928(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// stfs f5,112(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 112, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-2412
	ctx.r4.s64 = ctx.r31.s64 + -2412;
	// bl 0x82535898
	ctx.lr = 0x8375C848;
	sub_82535898(ctx, base);
	// addi r4,r31,-2392
	ctx.r4.s64 = ctx.r31.s64 + -2392;
	// bl 0x82535898
	ctx.lr = 0x8375C850;
	sub_82535898(ctx, base);
	// addi r4,r31,-2384
	ctx.r4.s64 = ctx.r31.s64 + -2384;
	// bl 0x82535898
	ctx.lr = 0x8375C858;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375C85C;
	sub_82534928(ctx, base);
	// frsp f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// stfs f4,116(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 116, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-2368
	ctx.r4.s64 = ctx.r31.s64 + -2368;
	// bl 0x82535898
	ctx.lr = 0x8375C870;
	sub_82535898(ctx, base);
	// addi r4,r31,-2348
	ctx.r4.s64 = ctx.r31.s64 + -2348;
	// bl 0x82535898
	ctx.lr = 0x8375C878;
	sub_82535898(ctx, base);
	// addi r4,r31,-2340
	ctx.r4.s64 = ctx.r31.s64 + -2340;
	// bl 0x82535898
	ctx.lr = 0x8375C880;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375C884;
	sub_82534928(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// stfs f3,120(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 120, temp.u32);
	// addi r4,r31,-2324
	ctx.r4.s64 = ctx.r31.s64 + -2324;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375C898;
	sub_82535898(ctx, base);
	// addi r4,r31,-2296
	ctx.r4.s64 = ctx.r31.s64 + -2296;
	// bl 0x82535898
	ctx.lr = 0x8375C8A0;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375C8A4;
	sub_82534B10(ctx, base);
	// stb r3,124(r30)
	PPC_STORE_U8(ctx.r30.u32 + 124, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-2288
	ctx.r4.s64 = ctx.r31.s64 + -2288;
	// bl 0x82535898
	ctx.lr = 0x8375C8B4;
	sub_82535898(ctx, base);
	// addi r4,r31,-2260
	ctx.r4.s64 = ctx.r31.s64 + -2260;
	// bl 0x82535898
	ctx.lr = 0x8375C8BC;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375C8C0;
	sub_82534928(ctx, base);
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// stfs f2,128(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 128, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-2252
	ctx.r4.s64 = ctx.r31.s64 + -2252;
	// bl 0x82535898
	ctx.lr = 0x8375C8D4;
	sub_82535898(ctx, base);
	// addi r4,r31,-2244
	ctx.r4.s64 = ctx.r31.s64 + -2244;
	// bl 0x82535898
	ctx.lr = 0x8375C8DC;
	sub_82535898(ctx, base);
	// addi r4,r31,-2236
	ctx.r4.s64 = ctx.r31.s64 + -2236;
	// bl 0x82535898
	ctx.lr = 0x8375C8E4;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375C8E8;
	sub_82534B10(ctx, base);
	// stb r3,132(r30)
	PPC_STORE_U8(ctx.r30.u32 + 132, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-2228
	ctx.r4.s64 = ctx.r31.s64 + -2228;
	// bl 0x82535898
	ctx.lr = 0x8375C8F8;
	sub_82535898(ctx, base);
	// addi r4,r31,-2220
	ctx.r4.s64 = ctx.r31.s64 + -2220;
	// bl 0x82535898
	ctx.lr = 0x8375C900;
	sub_82535898(ctx, base);
	// addi r4,r31,-2212
	ctx.r4.s64 = ctx.r31.s64 + -2212;
	// bl 0x82535898
	ctx.lr = 0x8375C908;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375C90C;
	sub_82534770(ctx, base);
	// stw r3,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-2204
	ctx.r4.s64 = ctx.r31.s64 + -2204;
	// bl 0x82535898
	ctx.lr = 0x8375C91C;
	sub_82535898(ctx, base);
	// addi r4,r31,-2196
	ctx.r4.s64 = ctx.r31.s64 + -2196;
	// bl 0x82535898
	ctx.lr = 0x8375C924;
	sub_82535898(ctx, base);
	// addi r4,r31,-2188
	ctx.r4.s64 = ctx.r31.s64 + -2188;
	// bl 0x82535898
	ctx.lr = 0x8375C92C;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375C930;
	sub_82534B10(ctx, base);
	// stb r3,140(r30)
	PPC_STORE_U8(ctx.r30.u32 + 140, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-2180
	ctx.r4.s64 = ctx.r31.s64 + -2180;
	// bl 0x82535898
	ctx.lr = 0x8375C940;
	sub_82535898(ctx, base);
	// addi r4,r31,-2172
	ctx.r4.s64 = ctx.r31.s64 + -2172;
	// bl 0x82535898
	ctx.lr = 0x8375C948;
	sub_82535898(ctx, base);
	// addi r4,r31,-2164
	ctx.r4.s64 = ctx.r31.s64 + -2164;
	// bl 0x82535898
	ctx.lr = 0x8375C950;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375C954;
	sub_82534770(ctx, base);
	// stw r3,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-2156
	ctx.r4.s64 = ctx.r31.s64 + -2156;
	// bl 0x82535898
	ctx.lr = 0x8375C964;
	sub_82535898(ctx, base);
	// addi r4,r31,-2144
	ctx.r4.s64 = ctx.r31.s64 + -2144;
	// bl 0x82535898
	ctx.lr = 0x8375C96C;
	sub_82535898(ctx, base);
	// addi r4,r31,-2120
	ctx.r4.s64 = ctx.r31.s64 + -2120;
	// bl 0x82535898
	ctx.lr = 0x8375C974;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375C978;
	sub_82534928(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// stfs f1,148(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 148, temp.u32);
	// addi r4,r31,-2104
	ctx.r4.s64 = ctx.r31.s64 + -2104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375C98C;
	sub_82535898(ctx, base);
	// addi r4,r31,-2092
	ctx.r4.s64 = ctx.r31.s64 + -2092;
	// bl 0x82535898
	ctx.lr = 0x8375C994;
	sub_82535898(ctx, base);
	// addi r4,r31,-2068
	ctx.r4.s64 = ctx.r31.s64 + -2068;
	// bl 0x82535898
	ctx.lr = 0x8375C99C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375C9A0;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,152(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 152, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-2052
	ctx.r4.s64 = ctx.r31.s64 + -2052;
	// bl 0x82535898
	ctx.lr = 0x8375C9B4;
	sub_82535898(ctx, base);
	// addi r4,r31,-2040
	ctx.r4.s64 = ctx.r31.s64 + -2040;
	// bl 0x82535898
	ctx.lr = 0x8375C9BC;
	sub_82535898(ctx, base);
	// addi r4,r31,-2016
	ctx.r4.s64 = ctx.r31.s64 + -2016;
	// bl 0x82535898
	ctx.lr = 0x8375C9C4;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375C9C8;
	sub_82534B10(ctx, base);
	// stb r3,156(r30)
	PPC_STORE_U8(ctx.r30.u32 + 156, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-2008
	ctx.r4.s64 = ctx.r31.s64 + -2008;
	// bl 0x82535898
	ctx.lr = 0x8375C9D8;
	sub_82535898(ctx, base);
	// addi r4,r31,-1996
	ctx.r4.s64 = ctx.r31.s64 + -1996;
	// bl 0x82535898
	ctx.lr = 0x8375C9E0;
	sub_82535898(ctx, base);
	// addi r4,r31,-1972
	ctx.r4.s64 = ctx.r31.s64 + -1972;
	// bl 0x82535898
	ctx.lr = 0x8375C9E8;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375C9EC;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,160(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 160, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1964
	ctx.r4.s64 = ctx.r31.s64 + -1964;
	// bl 0x82535898
	ctx.lr = 0x8375CA00;
	sub_82535898(ctx, base);
	// addi r4,r31,-1952
	ctx.r4.s64 = ctx.r31.s64 + -1952;
	// bl 0x82535898
	ctx.lr = 0x8375CA08;
	sub_82535898(ctx, base);
	// addi r4,r31,-1928
	ctx.r4.s64 = ctx.r31.s64 + -1928;
	// bl 0x82535898
	ctx.lr = 0x8375CA10;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375CA14;
	sub_82534928(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,164(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 164, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1920
	ctx.r4.s64 = ctx.r31.s64 + -1920;
	// bl 0x82535898
	ctx.lr = 0x8375CA28;
	sub_82535898(ctx, base);
	// addi r4,r31,-1908
	ctx.r4.s64 = ctx.r31.s64 + -1908;
	// bl 0x82535898
	ctx.lr = 0x8375CA30;
	sub_82535898(ctx, base);
	// addi r4,r31,-1884
	ctx.r4.s64 = ctx.r31.s64 + -1884;
	// bl 0x82535898
	ctx.lr = 0x8375CA38;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375CA3C;
	sub_82534928(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,168(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 168, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1872
	ctx.r4.s64 = ctx.r31.s64 + -1872;
	// bl 0x82535898
	ctx.lr = 0x8375CA50;
	sub_82535898(ctx, base);
	// addi r4,r31,-1868
	ctx.r4.s64 = ctx.r31.s64 + -1868;
	// bl 0x82535898
	ctx.lr = 0x8375CA58;
	sub_82535898(ctx, base);
	// addi r4,r31,-1856
	ctx.r4.s64 = ctx.r31.s64 + -1856;
	// bl 0x82535898
	ctx.lr = 0x8375CA60;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375CA64;
	sub_82534928(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,172(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 172, temp.u32);
	// addi r4,r31,-1828
	ctx.r4.s64 = ctx.r31.s64 + -1828;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375CA78;
	sub_82535898(ctx, base);
	// addi r4,r31,-1824
	ctx.r4.s64 = ctx.r31.s64 + -1824;
	// bl 0x82535898
	ctx.lr = 0x8375CA80;
	sub_82535898(ctx, base);
	// addi r4,r31,-1812
	ctx.r4.s64 = ctx.r31.s64 + -1812;
	// bl 0x82535898
	ctx.lr = 0x8375CA88;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375CA8C;
	sub_82534928(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,176(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 176, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1784
	ctx.r4.s64 = ctx.r31.s64 + -1784;
	// bl 0x82535898
	ctx.lr = 0x8375CAA0;
	sub_82535898(ctx, base);
	// addi r4,r31,-1780
	ctx.r4.s64 = ctx.r31.s64 + -1780;
	// bl 0x82535898
	ctx.lr = 0x8375CAA8;
	sub_82535898(ctx, base);
	// addi r4,r31,-1768
	ctx.r4.s64 = ctx.r31.s64 + -1768;
	// bl 0x82535898
	ctx.lr = 0x8375CAB0;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375CAB4;
	sub_82534928(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// stfs f8,180(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 180, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1748
	ctx.r4.s64 = ctx.r31.s64 + -1748;
	// bl 0x82535898
	ctx.lr = 0x8375CAC8;
	sub_82535898(ctx, base);
	// addi r4,r31,-1744
	ctx.r4.s64 = ctx.r31.s64 + -1744;
	// bl 0x82535898
	ctx.lr = 0x8375CAD0;
	sub_82535898(ctx, base);
	// addi r4,r31,-1732
	ctx.r4.s64 = ctx.r31.s64 + -1732;
	// bl 0x82535898
	ctx.lr = 0x8375CAD8;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375CADC;
	sub_82534B10(ctx, base);
	// stb r3,184(r30)
	PPC_STORE_U8(ctx.r30.u32 + 184, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1724
	ctx.r4.s64 = ctx.r31.s64 + -1724;
	// bl 0x82535898
	ctx.lr = 0x8375CAEC;
	sub_82535898(ctx, base);
	// addi r4,r31,-1720
	ctx.r4.s64 = ctx.r31.s64 + -1720;
	// bl 0x82535898
	ctx.lr = 0x8375CAF4;
	sub_82535898(ctx, base);
	// addi r4,r31,-1708
	ctx.r4.s64 = ctx.r31.s64 + -1708;
	// bl 0x82535898
	ctx.lr = 0x8375CAFC;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375CB00;
	sub_82534928(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// stfs f7,188(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 188, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1692
	ctx.r4.s64 = ctx.r31.s64 + -1692;
	// bl 0x82535898
	ctx.lr = 0x8375CB14;
	sub_82535898(ctx, base);
	// addi r4,r31,-1688
	ctx.r4.s64 = ctx.r31.s64 + -1688;
	// bl 0x82535898
	ctx.lr = 0x8375CB1C;
	sub_82535898(ctx, base);
	// addi r4,r31,-1676
	ctx.r4.s64 = ctx.r31.s64 + -1676;
	// bl 0x82535898
	ctx.lr = 0x8375CB24;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375CB28;
	sub_82534928(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// stfs f6,192(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 192, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1656
	ctx.r4.s64 = ctx.r31.s64 + -1656;
	// bl 0x82535898
	ctx.lr = 0x8375CB3C;
	sub_82535898(ctx, base);
	// addi r4,r31,-1652
	ctx.r4.s64 = ctx.r31.s64 + -1652;
	// bl 0x82535898
	ctx.lr = 0x8375CB44;
	sub_82535898(ctx, base);
	// addi r4,r31,-1640
	ctx.r4.s64 = ctx.r31.s64 + -1640;
	// bl 0x82535898
	ctx.lr = 0x8375CB4C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375CB50;
	sub_82534928(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// stfs f5,196(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 196, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1620
	ctx.r4.s64 = ctx.r31.s64 + -1620;
	// bl 0x82535898
	ctx.lr = 0x8375CB64;
	sub_82535898(ctx, base);
	// addi r4,r31,-1616
	ctx.r4.s64 = ctx.r31.s64 + -1616;
	// bl 0x82535898
	ctx.lr = 0x8375CB6C;
	sub_82535898(ctx, base);
	// addi r4,r31,-1604
	ctx.r4.s64 = ctx.r31.s64 + -1604;
	// bl 0x82535898
	ctx.lr = 0x8375CB74;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375CB78;
	sub_82534928(ctx, base);
	// frsp f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// stfs f4,200(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 200, temp.u32);
	// addi r4,r31,-1592
	ctx.r4.s64 = ctx.r31.s64 + -1592;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375CB8C;
	sub_82535898(ctx, base);
	// addi r4,r31,-1588
	ctx.r4.s64 = ctx.r31.s64 + -1588;
	// bl 0x82535898
	ctx.lr = 0x8375CB94;
	sub_82535898(ctx, base);
	// addi r4,r31,-1580
	ctx.r4.s64 = ctx.r31.s64 + -1580;
	// bl 0x82535898
	ctx.lr = 0x8375CB9C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375CBA0;
	sub_82534928(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// stfs f3,204(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 204, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1552
	ctx.r4.s64 = ctx.r31.s64 + -1552;
	// bl 0x82535898
	ctx.lr = 0x8375CBB4;
	sub_82535898(ctx, base);
	// addi r4,r31,-1548
	ctx.r4.s64 = ctx.r31.s64 + -1548;
	// bl 0x82535898
	ctx.lr = 0x8375CBBC;
	sub_82535898(ctx, base);
	// addi r4,r31,-1540
	ctx.r4.s64 = ctx.r31.s64 + -1540;
	// bl 0x82535898
	ctx.lr = 0x8375CBC4;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375CBC8;
	sub_82534928(ctx, base);
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// stfs f2,208(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 208, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1516
	ctx.r4.s64 = ctx.r31.s64 + -1516;
	// bl 0x82535898
	ctx.lr = 0x8375CBDC;
	sub_82535898(ctx, base);
	// addi r4,r31,-1512
	ctx.r4.s64 = ctx.r31.s64 + -1512;
	// bl 0x82535898
	ctx.lr = 0x8375CBE4;
	sub_82535898(ctx, base);
	// addi r4,r31,-1504
	ctx.r4.s64 = ctx.r31.s64 + -1504;
	// bl 0x82535898
	ctx.lr = 0x8375CBEC;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375CBF0;
	sub_82534928(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// stfs f1,212(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 212, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1476
	ctx.r4.s64 = ctx.r31.s64 + -1476;
	// bl 0x82535898
	ctx.lr = 0x8375CC04;
	sub_82535898(ctx, base);
	// addi r4,r31,-1472
	ctx.r4.s64 = ctx.r31.s64 + -1472;
	// bl 0x82535898
	ctx.lr = 0x8375CC0C;
	sub_82535898(ctx, base);
	// addi r4,r31,-1464
	ctx.r4.s64 = ctx.r31.s64 + -1464;
	// bl 0x82535898
	ctx.lr = 0x8375CC14;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375CC18;
	sub_82534B10(ctx, base);
	// stb r3,216(r30)
	PPC_STORE_U8(ctx.r30.u32 + 216, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1456
	ctx.r4.s64 = ctx.r31.s64 + -1456;
	// bl 0x82535898
	ctx.lr = 0x8375CC28;
	sub_82535898(ctx, base);
	// addi r4,r31,-1436
	ctx.r4.s64 = ctx.r31.s64 + -1436;
	// bl 0x82535898
	ctx.lr = 0x8375CC30;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375CC34;
	sub_82534B10(ctx, base);
	// stb r3,220(r30)
	PPC_STORE_U8(ctx.r30.u32 + 220, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1428
	ctx.r4.s64 = ctx.r31.s64 + -1428;
	// bl 0x82535898
	ctx.lr = 0x8375CC44;
	sub_82535898(ctx, base);
	// addi r4,r31,-1404
	ctx.r4.s64 = ctx.r31.s64 + -1404;
	// bl 0x82535898
	ctx.lr = 0x8375CC4C;
	sub_82535898(ctx, base);
	// addi r4,r31,-1396
	ctx.r4.s64 = ctx.r31.s64 + -1396;
	// bl 0x82535898
	ctx.lr = 0x8375CC54;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375CC58;
	sub_82534B10(ctx, base);
	// stb r3,224(r30)
	PPC_STORE_U8(ctx.r30.u32 + 224, ctx.r3.u8);
	// addi r4,r31,-1388
	ctx.r4.s64 = ctx.r31.s64 + -1388;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375CC68;
	sub_82535898(ctx, base);
	// addi r4,r31,-1364
	ctx.r4.s64 = ctx.r31.s64 + -1364;
	// bl 0x82535898
	ctx.lr = 0x8375CC70;
	sub_82535898(ctx, base);
	// addi r4,r31,-1356
	ctx.r4.s64 = ctx.r31.s64 + -1356;
	// bl 0x82535898
	ctx.lr = 0x8375CC78;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375CC7C;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,228(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 228, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1352
	ctx.r4.s64 = ctx.r31.s64 + -1352;
	// bl 0x82535898
	ctx.lr = 0x8375CC90;
	sub_82535898(ctx, base);
	// addi r4,r31,-1328
	ctx.r4.s64 = ctx.r31.s64 + -1328;
	// bl 0x82535898
	ctx.lr = 0x8375CC98;
	sub_82535898(ctx, base);
	// addi r4,r31,-1320
	ctx.r4.s64 = ctx.r31.s64 + -1320;
	// bl 0x82535898
	ctx.lr = 0x8375CCA0;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375CCA4;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,232(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 232, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1316
	ctx.r4.s64 = ctx.r31.s64 + -1316;
	// bl 0x82535898
	ctx.lr = 0x8375CCB8;
	sub_82535898(ctx, base);
	// addi r4,r31,-1292
	ctx.r4.s64 = ctx.r31.s64 + -1292;
	// bl 0x82535898
	ctx.lr = 0x8375CCC0;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375CCC4;
	sub_82534928(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,236(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 236, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1272
	ctx.r4.s64 = ctx.r31.s64 + -1272;
	// bl 0x82535898
	ctx.lr = 0x8375CCD8;
	sub_82535898(ctx, base);
	// addi r4,r31,-1248
	ctx.r4.s64 = ctx.r31.s64 + -1248;
	// bl 0x82535898
	ctx.lr = 0x8375CCE0;
	sub_82535898(ctx, base);
	// addi r4,r31,-1240
	ctx.r4.s64 = ctx.r31.s64 + -1240;
	// bl 0x82535898
	ctx.lr = 0x8375CCE8;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375CCEC;
	sub_82534928(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,240(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 240, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1224
	ctx.r4.s64 = ctx.r31.s64 + -1224;
	// bl 0x82535898
	ctx.lr = 0x8375CD00;
	sub_82535898(ctx, base);
	// addi r4,r31,-1200
	ctx.r4.s64 = ctx.r31.s64 + -1200;
	// bl 0x82535898
	ctx.lr = 0x8375CD08;
	sub_82535898(ctx, base);
	// addi r4,r31,-1192
	ctx.r4.s64 = ctx.r31.s64 + -1192;
	// bl 0x82535898
	ctx.lr = 0x8375CD10;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375CD14;
	sub_82534928(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,244(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 244, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1176
	ctx.r4.s64 = ctx.r31.s64 + -1176;
	// bl 0x82535898
	ctx.lr = 0x8375CD28;
	sub_82535898(ctx, base);
	// addi r4,r31,-1152
	ctx.r4.s64 = ctx.r31.s64 + -1152;
	// bl 0x82535898
	ctx.lr = 0x8375CD30;
	sub_82535898(ctx, base);
	// addi r4,r31,-1144
	ctx.r4.s64 = ctx.r31.s64 + -1144;
	// bl 0x82535898
	ctx.lr = 0x8375CD38;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375CD3C;
	sub_82534B10(ctx, base);
	// stb r3,248(r30)
	PPC_STORE_U8(ctx.r30.u32 + 248, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1136
	ctx.r4.s64 = ctx.r31.s64 + -1136;
	// bl 0x82535898
	ctx.lr = 0x8375CD4C;
	sub_82535898(ctx, base);
	// addi r4,r31,-1128
	ctx.r4.s64 = ctx.r31.s64 + -1128;
	// bl 0x82535898
	ctx.lr = 0x8375CD54;
	sub_82535898(ctx, base);
	// addi r4,r31,-1112
	ctx.r4.s64 = ctx.r31.s64 + -1112;
	// bl 0x82535898
	ctx.lr = 0x8375CD5C;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375CD60;
	sub_82534B10(ctx, base);
	// stb r3,252(r30)
	PPC_STORE_U8(ctx.r30.u32 + 252, ctx.r3.u8);
	// addi r4,r31,-1104
	ctx.r4.s64 = ctx.r31.s64 + -1104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375CD70;
	sub_82535898(ctx, base);
	// addi r4,r31,-1096
	ctx.r4.s64 = ctx.r31.s64 + -1096;
	// bl 0x82535898
	ctx.lr = 0x8375CD78;
	sub_82535898(ctx, base);
	// addi r4,r31,-1080
	ctx.r4.s64 = ctx.r31.s64 + -1080;
	// bl 0x82535898
	ctx.lr = 0x8375CD80;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375CD84;
	sub_82534928(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,256(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 256, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1072
	ctx.r4.s64 = ctx.r31.s64 + -1072;
	// bl 0x82535898
	ctx.lr = 0x8375CD98;
	sub_82535898(ctx, base);
	// addi r4,r31,-1064
	ctx.r4.s64 = ctx.r31.s64 + -1064;
	// bl 0x82535898
	ctx.lr = 0x8375CDA0;
	sub_82535898(ctx, base);
	// addi r4,r31,-1052
	ctx.r4.s64 = ctx.r31.s64 + -1052;
	// bl 0x82535898
	ctx.lr = 0x8375CDA8;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375CDAC;
	sub_82534B10(ctx, base);
	// stb r3,260(r30)
	PPC_STORE_U8(ctx.r30.u32 + 260, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1044
	ctx.r4.s64 = ctx.r31.s64 + -1044;
	// bl 0x82535898
	ctx.lr = 0x8375CDBC;
	sub_82535898(ctx, base);
	// addi r4,r31,-1036
	ctx.r4.s64 = ctx.r31.s64 + -1036;
	// bl 0x82535898
	ctx.lr = 0x8375CDC4;
	sub_82535898(ctx, base);
	// addi r4,r31,-1024
	ctx.r4.s64 = ctx.r31.s64 + -1024;
	// bl 0x82535898
	ctx.lr = 0x8375CDCC;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375CDD0;
	sub_82534928(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// stfs f8,264(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 264, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1016
	ctx.r4.s64 = ctx.r31.s64 + -1016;
	// bl 0x82535898
	ctx.lr = 0x8375CDE4;
	sub_82535898(ctx, base);
	// addi r4,r31,-1008
	ctx.r4.s64 = ctx.r31.s64 + -1008;
	// bl 0x82535898
	ctx.lr = 0x8375CDEC;
	sub_82535898(ctx, base);
	// addi r4,r31,-992
	ctx.r4.s64 = ctx.r31.s64 + -992;
	// bl 0x82535898
	ctx.lr = 0x8375CDF4;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375CDF8;
	sub_82534B10(ctx, base);
	// stb r3,268(r30)
	PPC_STORE_U8(ctx.r30.u32 + 268, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-984
	ctx.r4.s64 = ctx.r31.s64 + -984;
	// bl 0x82535898
	ctx.lr = 0x8375CE08;
	sub_82535898(ctx, base);
	// addi r4,r31,-976
	ctx.r4.s64 = ctx.r31.s64 + -976;
	// bl 0x82535898
	ctx.lr = 0x8375CE10;
	sub_82535898(ctx, base);
	// addi r4,r31,-960
	ctx.r4.s64 = ctx.r31.s64 + -960;
	// bl 0x82535898
	ctx.lr = 0x8375CE18;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375CE1C;
	sub_82534928(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// stfs f7,272(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 272, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-952
	ctx.r4.s64 = ctx.r31.s64 + -952;
	// bl 0x82535898
	ctx.lr = 0x8375CE30;
	sub_82535898(ctx, base);
	// addi r4,r31,-944
	ctx.r4.s64 = ctx.r31.s64 + -944;
	// bl 0x82535898
	ctx.lr = 0x8375CE38;
	sub_82535898(ctx, base);
	// addi r4,r31,-928
	ctx.r4.s64 = ctx.r31.s64 + -928;
	// bl 0x82535898
	ctx.lr = 0x8375CE40;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375CE44;
	sub_82534928(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// stfs f6,276(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 276, temp.u32);
	// addi r4,r31,-912
	ctx.r4.s64 = ctx.r31.s64 + -912;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375CE58;
	sub_82535898(ctx, base);
	// addi r4,r31,-904
	ctx.r4.s64 = ctx.r31.s64 + -904;
	// bl 0x82535898
	ctx.lr = 0x8375CE60;
	sub_82535898(ctx, base);
	// addi r4,r31,-888
	ctx.r4.s64 = ctx.r31.s64 + -888;
	// bl 0x82535898
	ctx.lr = 0x8375CE68;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375CE6C;
	sub_82534B10(ctx, base);
	// stb r3,280(r30)
	PPC_STORE_U8(ctx.r30.u32 + 280, ctx.r3.u8);
	// addi r4,r31,-880
	ctx.r4.s64 = ctx.r31.s64 + -880;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375CE7C;
	sub_82535898(ctx, base);
	// addi r4,r31,-872
	ctx.r4.s64 = ctx.r31.s64 + -872;
	// bl 0x82535898
	ctx.lr = 0x8375CE84;
	sub_82535898(ctx, base);
	// addi r4,r31,-856
	ctx.r4.s64 = ctx.r31.s64 + -856;
	// bl 0x82535898
	ctx.lr = 0x8375CE8C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375CE90;
	sub_82534928(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// stfs f5,284(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 284, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-848
	ctx.r4.s64 = ctx.r31.s64 + -848;
	// bl 0x82535898
	ctx.lr = 0x8375CEA4;
	sub_82535898(ctx, base);
	// addi r4,r31,-840
	ctx.r4.s64 = ctx.r31.s64 + -840;
	// bl 0x82535898
	ctx.lr = 0x8375CEAC;
	sub_82535898(ctx, base);
	// addi r4,r31,-824
	ctx.r4.s64 = ctx.r31.s64 + -824;
	// bl 0x82535898
	ctx.lr = 0x8375CEB4;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375CEB8;
	sub_82534B10(ctx, base);
	// stb r3,288(r30)
	PPC_STORE_U8(ctx.r30.u32 + 288, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-816
	ctx.r4.s64 = ctx.r31.s64 + -816;
	// bl 0x82535898
	ctx.lr = 0x8375CEC8;
	sub_82535898(ctx, base);
	// addi r4,r31,-808
	ctx.r4.s64 = ctx.r31.s64 + -808;
	// bl 0x82535898
	ctx.lr = 0x8375CED0;
	sub_82535898(ctx, base);
	// addi r4,r31,-792
	ctx.r4.s64 = ctx.r31.s64 + -792;
	// bl 0x82535898
	ctx.lr = 0x8375CED8;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375CEDC;
	sub_82534928(ctx, base);
	// frsp f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// stfs f4,292(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 292, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-784
	ctx.r4.s64 = ctx.r31.s64 + -784;
	// bl 0x82535898
	ctx.lr = 0x8375CEF0;
	sub_82535898(ctx, base);
	// addi r4,r31,-776
	ctx.r4.s64 = ctx.r31.s64 + -776;
	// bl 0x82535898
	ctx.lr = 0x8375CEF8;
	sub_82535898(ctx, base);
	// addi r4,r31,-764
	ctx.r4.s64 = ctx.r31.s64 + -764;
	// bl 0x82535898
	ctx.lr = 0x8375CF00;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375CF04;
	sub_82534B10(ctx, base);
	// stb r3,296(r30)
	PPC_STORE_U8(ctx.r30.u32 + 296, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-756
	ctx.r4.s64 = ctx.r31.s64 + -756;
	// bl 0x82535898
	ctx.lr = 0x8375CF14;
	sub_82535898(ctx, base);
	// addi r4,r31,-748
	ctx.r4.s64 = ctx.r31.s64 + -748;
	// bl 0x82535898
	ctx.lr = 0x8375CF1C;
	sub_82535898(ctx, base);
	// addi r4,r31,-736
	ctx.r4.s64 = ctx.r31.s64 + -736;
	// bl 0x82535898
	ctx.lr = 0x8375CF24;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375CF28;
	sub_82534928(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// stfs f3,300(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 300, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-728
	ctx.r4.s64 = ctx.r31.s64 + -728;
	// bl 0x82535898
	ctx.lr = 0x8375CF3C;
	sub_82535898(ctx, base);
	// addi r4,r31,-720
	ctx.r4.s64 = ctx.r31.s64 + -720;
	// bl 0x82535898
	ctx.lr = 0x8375CF44;
	sub_82535898(ctx, base);
	// addi r4,r31,-708
	ctx.r4.s64 = ctx.r31.s64 + -708;
	// bl 0x82535898
	ctx.lr = 0x8375CF4C;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375CF50;
	sub_82534B10(ctx, base);
	// stb r3,304(r30)
	PPC_STORE_U8(ctx.r30.u32 + 304, ctx.r3.u8);
	// addi r4,r31,-700
	ctx.r4.s64 = ctx.r31.s64 + -700;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375CF60;
	sub_82535898(ctx, base);
	// addi r4,r31,-692
	ctx.r4.s64 = ctx.r31.s64 + -692;
	// bl 0x82535898
	ctx.lr = 0x8375CF68;
	sub_82535898(ctx, base);
	// addi r4,r31,-680
	ctx.r4.s64 = ctx.r31.s64 + -680;
	// bl 0x82535898
	ctx.lr = 0x8375CF70;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375CF74;
	sub_82534928(ctx, base);
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// stfs f2,308(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 308, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-672
	ctx.r4.s64 = ctx.r31.s64 + -672;
	// bl 0x82535898
	ctx.lr = 0x8375CF88;
	sub_82535898(ctx, base);
	// addi r4,r31,-664
	ctx.r4.s64 = ctx.r31.s64 + -664;
	// bl 0x82535898
	ctx.lr = 0x8375CF90;
	sub_82535898(ctx, base);
	// addi r4,r31,-652
	ctx.r4.s64 = ctx.r31.s64 + -652;
	// bl 0x82535898
	ctx.lr = 0x8375CF98;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375CF9C;
	sub_82534B10(ctx, base);
	// stb r3,312(r30)
	PPC_STORE_U8(ctx.r30.u32 + 312, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-644
	ctx.r4.s64 = ctx.r31.s64 + -644;
	// bl 0x82535898
	ctx.lr = 0x8375CFAC;
	sub_82535898(ctx, base);
	// addi r4,r31,-636
	ctx.r4.s64 = ctx.r31.s64 + -636;
	// bl 0x82535898
	ctx.lr = 0x8375CFB4;
	sub_82535898(ctx, base);
	// addi r4,r31,-624
	ctx.r4.s64 = ctx.r31.s64 + -624;
	// bl 0x82535898
	ctx.lr = 0x8375CFBC;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375CFC0;
	sub_82534928(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// stfs f1,316(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 316, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-616
	ctx.r4.s64 = ctx.r31.s64 + -616;
	// bl 0x82535898
	ctx.lr = 0x8375CFD4;
	sub_82535898(ctx, base);
	// addi r4,r31,-608
	ctx.r4.s64 = ctx.r31.s64 + -608;
	// bl 0x82535898
	ctx.lr = 0x8375CFDC;
	sub_82535898(ctx, base);
	// addi r4,r31,-592
	ctx.r4.s64 = ctx.r31.s64 + -592;
	// bl 0x82535898
	ctx.lr = 0x8375CFE4;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375CFE8;
	sub_82534B10(ctx, base);
	// stb r3,320(r30)
	PPC_STORE_U8(ctx.r30.u32 + 320, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-584
	ctx.r4.s64 = ctx.r31.s64 + -584;
	// bl 0x82535898
	ctx.lr = 0x8375CFF8;
	sub_82535898(ctx, base);
	// addi r4,r31,-576
	ctx.r4.s64 = ctx.r31.s64 + -576;
	// bl 0x82535898
	ctx.lr = 0x8375D000;
	sub_82535898(ctx, base);
	// addi r4,r31,-560
	ctx.r4.s64 = ctx.r31.s64 + -560;
	// bl 0x82535898
	ctx.lr = 0x8375D008;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375D00C;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,324(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 324, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-552
	ctx.r4.s64 = ctx.r31.s64 + -552;
	// bl 0x82535898
	ctx.lr = 0x8375D020;
	sub_82535898(ctx, base);
	// addi r4,r31,-540
	ctx.r4.s64 = ctx.r31.s64 + -540;
	// bl 0x82535898
	ctx.lr = 0x8375D028;
	sub_82535898(ctx, base);
	// addi r4,r31,-496
	ctx.r4.s64 = ctx.r31.s64 + -496;
	// bl 0x82535898
	ctx.lr = 0x8375D030;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375D034;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,328(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 328, temp.u32);
	// addi r4,r31,-484
	ctx.r4.s64 = ctx.r31.s64 + -484;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375D048;
	sub_82535898(ctx, base);
	// addi r4,r31,-472
	ctx.r4.s64 = ctx.r31.s64 + -472;
	// bl 0x82535898
	ctx.lr = 0x8375D050;
	sub_82535898(ctx, base);
	// addi r4,r31,-428
	ctx.r4.s64 = ctx.r31.s64 + -428;
	// bl 0x82535898
	ctx.lr = 0x8375D058;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375D05C;
	sub_82534B10(ctx, base);
	// stb r3,332(r30)
	PPC_STORE_U8(ctx.r30.u32 + 332, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-420
	ctx.r4.s64 = ctx.r31.s64 + -420;
	// bl 0x82535898
	ctx.lr = 0x8375D06C;
	sub_82535898(ctx, base);
	// addi r4,r31,-388
	ctx.r4.s64 = ctx.r31.s64 + -388;
	// bl 0x82535898
	ctx.lr = 0x8375D074;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375D078;
	sub_82534B10(ctx, base);
	// stb r3,336(r30)
	PPC_STORE_U8(ctx.r30.u32 + 336, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-380
	ctx.r4.s64 = ctx.r31.s64 + -380;
	// bl 0x82535898
	ctx.lr = 0x8375D088;
	sub_82535898(ctx, base);
	// addi r4,r31,-360
	ctx.r4.s64 = ctx.r31.s64 + -360;
	// bl 0x82535898
	ctx.lr = 0x8375D090;
	sub_82535898(ctx, base);
	// addi r4,r31,-344
	ctx.r4.s64 = ctx.r31.s64 + -344;
	// bl 0x82535898
	ctx.lr = 0x8375D098;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375D09C;
	sub_82534B10(ctx, base);
	// stb r3,340(r30)
	PPC_STORE_U8(ctx.r30.u32 + 340, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-336
	ctx.r4.s64 = ctx.r31.s64 + -336;
	// bl 0x82535898
	ctx.lr = 0x8375D0AC;
	sub_82535898(ctx, base);
	// addi r4,r31,-316
	ctx.r4.s64 = ctx.r31.s64 + -316;
	// bl 0x82535898
	ctx.lr = 0x8375D0B4;
	sub_82535898(ctx, base);
	// addi r4,r31,-300
	ctx.r4.s64 = ctx.r31.s64 + -300;
	// bl 0x82535898
	ctx.lr = 0x8375D0BC;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375D0C0;
	sub_82534770(ctx, base);
	// stw r3,344(r30)
	PPC_STORE_U32(ctx.r30.u32 + 344, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-292
	ctx.r4.s64 = ctx.r31.s64 + -292;
	// bl 0x82535898
	ctx.lr = 0x8375D0D0;
	sub_82535898(ctx, base);
	// addi r4,r31,-272
	ctx.r4.s64 = ctx.r31.s64 + -272;
	// bl 0x82535898
	ctx.lr = 0x8375D0D8;
	sub_82535898(ctx, base);
	// addi r4,r31,-260
	ctx.r4.s64 = ctx.r31.s64 + -260;
	// bl 0x82535898
	ctx.lr = 0x8375D0E0;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375D0E4;
	sub_82534B10(ctx, base);
	// stb r3,348(r30)
	PPC_STORE_U8(ctx.r30.u32 + 348, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-252
	ctx.r4.s64 = ctx.r31.s64 + -252;
	// bl 0x82535898
	ctx.lr = 0x8375D0F4;
	sub_82535898(ctx, base);
	// addi r4,r31,-232
	ctx.r4.s64 = ctx.r31.s64 + -232;
	// bl 0x82535898
	ctx.lr = 0x8375D0FC;
	sub_82535898(ctx, base);
	// addi r4,r31,-220
	ctx.r4.s64 = ctx.r31.s64 + -220;
	// bl 0x82535898
	ctx.lr = 0x8375D104;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375D108;
	sub_82534928(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,352(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 352, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-188
	ctx.r4.s64 = ctx.r31.s64 + -188;
	// bl 0x82535898
	ctx.lr = 0x8375D11C;
	sub_82535898(ctx, base);
	// addi r4,r31,-168
	ctx.r4.s64 = ctx.r31.s64 + -168;
	// bl 0x82535898
	ctx.lr = 0x8375D124;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375D128;
	sub_82534B10(ctx, base);
	// stb r3,356(r30)
	PPC_STORE_U8(ctx.r30.u32 + 356, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-160
	ctx.r4.s64 = ctx.r31.s64 + -160;
	// bl 0x82535898
	ctx.lr = 0x8375D138;
	sub_82535898(ctx, base);
	// addi r4,r31,-144
	ctx.r4.s64 = ctx.r31.s64 + -144;
	// bl 0x82535898
	ctx.lr = 0x8375D140;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375D144;
	sub_82534B10(ctx, base);
	// stb r3,357(r30)
	PPC_STORE_U8(ctx.r30.u32 + 357, ctx.r3.u8);
	// addi r4,r31,-136
	ctx.r4.s64 = ctx.r31.s64 + -136;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375D154;
	sub_82535898(ctx, base);
	// addi r4,r31,-120
	ctx.r4.s64 = ctx.r31.s64 + -120;
	// bl 0x82535898
	ctx.lr = 0x8375D15C;
	sub_82535898(ctx, base);
	// addi r4,r31,-104
	ctx.r4.s64 = ctx.r31.s64 + -104;
	// bl 0x82535898
	ctx.lr = 0x8375D164;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375D168;
	sub_82534B10(ctx, base);
	// stb r3,360(r30)
	PPC_STORE_U8(ctx.r30.u32 + 360, ctx.r3.u8);
	// addi r4,r31,-96
	ctx.r4.s64 = ctx.r31.s64 + -96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375D178;
	sub_82535898(ctx, base);
	// addi r4,r31,-80
	ctx.r4.s64 = ctx.r31.s64 + -80;
	// bl 0x82535898
	ctx.lr = 0x8375D180;
	sub_82535898(ctx, base);
	// addi r4,r31,-64
	ctx.r4.s64 = ctx.r31.s64 + -64;
	// bl 0x82535898
	ctx.lr = 0x8375D188;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375D18C;
	sub_82534928(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,364(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 364, temp.u32);
	// addi r4,r31,-52
	ctx.r4.s64 = ctx.r31.s64 + -52;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375D1A0;
	sub_82535898(ctx, base);
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// bl 0x82535898
	ctx.lr = 0x8375D1A8;
	sub_82535898(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x8375D1B0;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375D1B4;
	sub_82534B10(ctx, base);
	// stb r3,368(r30)
	PPC_STORE_U8(ctx.r30.u32 + 368, ctx.r3.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8375D1C4"))) PPC_WEAK_FUNC(sub_8375D1C4);
PPC_FUNC_IMPL(__imp__sub_8375D1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8375D1C8"))) PPC_WEAK_FUNC(sub_8375D1C8);
PPC_FUNC_IMPL(__imp__sub_8375D1C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8375D1D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8375d1f0
	if (!cr6.eq) goto loc_8375D1F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8375D1F0:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x83763830
	ctx.lr = 0x8375D204;
	sub_83763830(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83763830
	ctx.lr = 0x8375D214;
	sub_83763830(ctx, base);
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x83763830
	ctx.lr = 0x8375D238;
	sub_83763830(ctx, base);
	// lfs f10,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f10,20(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,24(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,28(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f7,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,32(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f6,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,36(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lbz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// stb r11,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r11.u8);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x83763830
	ctx.lr = 0x8375D274;
	sub_83763830(ctx, base);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r10,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r10.u8);
	// lfs f5,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,48(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f4,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,52(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f3,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,56(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f2,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,60(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f1,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,64(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lbz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// stb r9,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r9.u8);
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x83763830
	ctx.lr = 0x8375D2B8;
	sub_83763830(ctx, base);
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r8,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r8.u8);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,84(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lfs f11,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,88(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// lfs f10,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,92(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x83763830
	ctx.lr = 0x8375D2F4;
	sub_83763830(ctx, base);
	// lfs f9,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f9,96(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,100(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,104(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// lfs f6,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,108(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// lfs f5,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,112(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// lfs f4,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,116(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// lfs f3,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,120(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x83763830
	ctx.lr = 0x8375D338;
	sub_83763830(ctx, base);
	// lbz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r7,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r7.u8);
	// lfs f2,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,128(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83763830
	ctx.lr = 0x8375D354;
	sub_83763830(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83763830
	ctx.lr = 0x8375D364;
	sub_83763830(ctx, base);
	// lbz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r6,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r6.u8);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r5,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r5.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x83763830
	ctx.lr = 0x8375D380;
	sub_83763830(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r11,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r11.u8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r10.u32);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x83763830
	ctx.lr = 0x8375D39C;
	sub_83763830(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83763830
	ctx.lr = 0x8375D3A8;
	sub_83763830(ctx, base);
	// lfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,148(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// lbz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// stb r9,156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 156, ctx.r9.u8);
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,160(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// lfs f12,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,164(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// lfs f11,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,168(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x83763830
	ctx.lr = 0x8375D3E4;
	sub_83763830(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83763830
	ctx.lr = 0x8375D3F4;
	sub_83763830(ctx, base);
	// lfs f10,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,172(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,176(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,180(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// lbz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// stb r8,184(r31)
	PPC_STORE_U8(ctx.r31.u32 + 184, ctx.r8.u8);
	// lfs f7,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,188(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// lfs f6,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,192(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// lfs f5,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,196(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// lfs f4,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,200(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x83763830
	ctx.lr = 0x8375D440;
	sub_83763830(ctx, base);
	// lfs f3,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f3,204(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 204, temp.u32);
	// lfs f2,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,208(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// lfs f1,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,212(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// lbz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// stb r7,216(r31)
	PPC_STORE_U8(ctx.r31.u32 + 216, ctx.r7.u8);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x83763830
	ctx.lr = 0x8375D46C;
	sub_83763830(ctx, base);
	// lbz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r6,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r6.u8);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x83763830
	ctx.lr = 0x8375D480;
	sub_83763830(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83763830
	ctx.lr = 0x8375D490;
	sub_83763830(ctx, base);
	// lbz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r5,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r5.u8);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,228(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 228, temp.u32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,232(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,236(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x83763830
	ctx.lr = 0x8375D4BC;
	sub_83763830(ctx, base);
	// lfs f11,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f11,240(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,244(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// lbz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// stb r3,248(r31)
	PPC_STORE_U8(ctx.r31.u32 + 248, ctx.r3.u8);
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x83763830
	ctx.lr = 0x8375D4E0;
	sub_83763830(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83763830
	ctx.lr = 0x8375D4F0;
	sub_83763830(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r11,252(r31)
	PPC_STORE_U8(ctx.r31.u32 + 252, ctx.r11.u8);
	// lfs f9,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,256(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x83763830
	ctx.lr = 0x8375D50C;
	sub_83763830(ctx, base);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r10,260(r31)
	PPC_STORE_U8(ctx.r31.u32 + 260, ctx.r10.u8);
	// lfs f8,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,264(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x83763830
	ctx.lr = 0x8375D528;
	sub_83763830(ctx, base);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r9,268(r31)
	PPC_STORE_U8(ctx.r31.u32 + 268, ctx.r9.u8);
	// lfs f7,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,272(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// lfs f6,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,276(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x83763830
	ctx.lr = 0x8375D54C;
	sub_83763830(ctx, base);
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r8,280(r31)
	PPC_STORE_U8(ctx.r31.u32 + 280, ctx.r8.u8);
	// lfs f5,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,284(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x83763830
	ctx.lr = 0x8375D568;
	sub_83763830(ctx, base);
	// lbz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r7,288(r31)
	PPC_STORE_U8(ctx.r31.u32 + 288, ctx.r7.u8);
	// lfs f4,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,292(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 292, temp.u32);
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x83763830
	ctx.lr = 0x8375D584;
	sub_83763830(ctx, base);
	// lbz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r6,296(r31)
	PPC_STORE_U8(ctx.r31.u32 + 296, ctx.r6.u8);
	// lfs f3,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,300(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 300, temp.u32);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x83763830
	ctx.lr = 0x8375D5A0;
	sub_83763830(ctx, base);
	// lbz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r5,304(r31)
	PPC_STORE_U8(ctx.r31.u32 + 304, ctx.r5.u8);
	// lfs f2,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,308(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// lwz r3,28(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// bl 0x83763830
	ctx.lr = 0x8375D5BC;
	sub_83763830(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r11,312(r31)
	PPC_STORE_U8(ctx.r31.u32 + 312, ctx.r11.u8);
	// lfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,316(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 316, temp.u32);
	// lwz r3,32(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// bl 0x83763830
	ctx.lr = 0x8375D5D8;
	sub_83763830(ctx, base);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r10,320(r31)
	PPC_STORE_U8(ctx.r31.u32 + 320, ctx.r10.u8);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,324(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x83763830
	ctx.lr = 0x8375D5F4;
	sub_83763830(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83763830
	ctx.lr = 0x8375D600;
	sub_83763830(ctx, base);
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f13,328(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 328, temp.u32);
	// lbz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// stb r9,332(r31)
	PPC_STORE_U8(ctx.r31.u32 + 332, ctx.r9.u8);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// bl 0x83763830
	ctx.lr = 0x8375D61C;
	sub_83763830(ctx, base);
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r8,336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 336, ctx.r8.u8);
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// bl 0x83763830
	ctx.lr = 0x8375D630;
	sub_83763830(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83763830
	ctx.lr = 0x8375D640;
	sub_83763830(ctx, base);
	// lbz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r7,340(r31)
	PPC_STORE_U8(ctx.r31.u32 + 340, ctx.r7.u8);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r6,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r6.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x83763830
	ctx.lr = 0x8375D65C;
	sub_83763830(ctx, base);
	// lbz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r5,348(r31)
	PPC_STORE_U8(ctx.r31.u32 + 348, ctx.r5.u8);
	// lfs f12,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,352(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// bl 0x83763830
	ctx.lr = 0x8375D678;
	sub_83763830(ctx, base);
	// lbz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stb r3,356(r31)
	PPC_STORE_U8(ctx.r31.u32 + 356, ctx.r3.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x83763830
	ctx.lr = 0x8375D68C;
	sub_83763830(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r11,357(r31)
	PPC_STORE_U8(ctx.r31.u32 + 357, ctx.r11.u8);
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x83763830
	ctx.lr = 0x8375D6A0;
	sub_83763830(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83763830
	ctx.lr = 0x8375D6B0;
	sub_83763830(ctx, base);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r10,360(r31)
	PPC_STORE_U8(ctx.r31.u32 + 360, ctx.r10.u8);
	// lfs f11,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,364(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 364, temp.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x83763830
	ctx.lr = 0x8375D6CC;
	sub_83763830(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r8,368(r31)
	PPC_STORE_U8(ctx.r31.u32 + 368, ctx.r8.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8375D6E4"))) PPC_WEAK_FUNC(sub_8375D6E4);
PPC_FUNC_IMPL(__imp__sub_8375D6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8375D6E8"))) PPC_WEAK_FUNC(sub_8375D6E8);
PPC_FUNC_IMPL(__imp__sub_8375D6E8) {
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
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,372
	ctx.r4.s64 = 372;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8375D70C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8375d728
	if (cr6.eq) goto loc_8375D728;
	// bl 0x8375c228
	ctx.lr = 0x8375D718;
	sub_8375C228(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8375D728:
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

__attribute__((alias("__imp__sub_8375D73C"))) PPC_WEAK_FUNC(sub_8375D73C);
PPC_FUNC_IMPL(__imp__sub_8375D73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8375D740"))) PPC_WEAK_FUNC(sub_8375D740);
PPC_FUNC_IMPL(__imp__sub_8375D740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32213
	ctx.r9.s64 = -2111111168;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,-22620
	ctx.r8.s64 = ctx.r9.s64 + -22620;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stb r11,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r11.u8);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stb r11,92(r3)
	PPC_STORE_U8(ctx.r3.u32 + 92, ctx.r11.u8);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stb r11,116(r3)
	PPC_STORE_U8(ctx.r3.u32 + 116, ctx.r11.u8);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
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
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8375D7D4"))) PPC_WEAK_FUNC(sub_8375D7D4);
PPC_FUNC_IMPL(__imp__sub_8375D7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8375D7D8"))) PPC_WEAK_FUNC(sub_8375D7D8);
PPC_FUNC_IMPL(__imp__sub_8375D7D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8375D7E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-22716
	ctx.r31.s64 = ctx.r11.s64 + -22716;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r31,-1052
	ctx.r4.s64 = ctx.r31.s64 + -1052;
	// bl 0x82535898
	ctx.lr = 0x8375D800;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375D804;
	sub_82534B10(ctx, base);
	// stb r3,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1048
	ctx.r4.s64 = ctx.r31.s64 + -1048;
	// bl 0x82535898
	ctx.lr = 0x8375D814;
	sub_82535898(ctx, base);
	// addi r4,r31,-1036
	ctx.r4.s64 = ctx.r31.s64 + -1036;
	// bl 0x82535898
	ctx.lr = 0x8375D81C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375D820;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1016
	ctx.r4.s64 = ctx.r31.s64 + -1016;
	// bl 0x82535898
	ctx.lr = 0x8375D834;
	sub_82535898(ctx, base);
	// addi r4,r31,-1004
	ctx.r4.s64 = ctx.r31.s64 + -1004;
	// bl 0x82535898
	ctx.lr = 0x8375D83C;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375D840;
	sub_82534B10(ctx, base);
	// stb r3,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-996
	ctx.r4.s64 = ctx.r31.s64 + -996;
	// bl 0x82535898
	ctx.lr = 0x8375D850;
	sub_82535898(ctx, base);
	// addi r4,r31,-984
	ctx.r4.s64 = ctx.r31.s64 + -984;
	// bl 0x82535898
	ctx.lr = 0x8375D858;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375D85C;
	sub_82534B10(ctx, base);
	// stb r3,13(r30)
	PPC_STORE_U8(ctx.r30.u32 + 13, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-968
	ctx.r4.s64 = ctx.r31.s64 + -968;
	// bl 0x82535898
	ctx.lr = 0x8375D86C;
	sub_82535898(ctx, base);
	// addi r4,r31,-956
	ctx.r4.s64 = ctx.r31.s64 + -956;
	// bl 0x82535898
	ctx.lr = 0x8375D874;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375D878;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,16(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-932
	ctx.r4.s64 = ctx.r31.s64 + -932;
	// bl 0x82535898
	ctx.lr = 0x8375D88C;
	sub_82535898(ctx, base);
	// addi r4,r31,-920
	ctx.r4.s64 = ctx.r31.s64 + -920;
	// bl 0x82535898
	ctx.lr = 0x8375D894;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375D898;
	sub_82534928(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-892
	ctx.r4.s64 = ctx.r31.s64 + -892;
	// bl 0x82535898
	ctx.lr = 0x8375D8AC;
	sub_82535898(ctx, base);
	// addi r4,r31,-880
	ctx.r4.s64 = ctx.r31.s64 + -880;
	// bl 0x82535898
	ctx.lr = 0x8375D8B4;
	sub_82535898(ctx, base);
	// addi r4,r31,-860
	ctx.r4.s64 = ctx.r31.s64 + -860;
	// bl 0x82535898
	ctx.lr = 0x8375D8BC;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375D8C0;
	sub_82534928(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,24(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// addi r4,r31,-844
	ctx.r4.s64 = ctx.r31.s64 + -844;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375D8D4;
	sub_82535898(ctx, base);
	// addi r4,r31,-832
	ctx.r4.s64 = ctx.r31.s64 + -832;
	// bl 0x82535898
	ctx.lr = 0x8375D8DC;
	sub_82535898(ctx, base);
	// addi r4,r31,-812
	ctx.r4.s64 = ctx.r31.s64 + -812;
	// bl 0x82535898
	ctx.lr = 0x8375D8E4;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375D8E8;
	sub_82534B10(ctx, base);
	// stb r3,28(r30)
	PPC_STORE_U8(ctx.r30.u32 + 28, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-796
	ctx.r4.s64 = ctx.r31.s64 + -796;
	// bl 0x82535898
	ctx.lr = 0x8375D8F8;
	sub_82535898(ctx, base);
	// addi r4,r31,-784
	ctx.r4.s64 = ctx.r31.s64 + -784;
	// bl 0x82535898
	ctx.lr = 0x8375D900;
	sub_82535898(ctx, base);
	// addi r4,r31,-764
	ctx.r4.s64 = ctx.r31.s64 + -764;
	// bl 0x82535898
	ctx.lr = 0x8375D908;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375D90C;
	sub_82534928(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,32(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-756
	ctx.r4.s64 = ctx.r31.s64 + -756;
	// bl 0x82535898
	ctx.lr = 0x8375D920;
	sub_82535898(ctx, base);
	// addi r4,r31,-744
	ctx.r4.s64 = ctx.r31.s64 + -744;
	// bl 0x82535898
	ctx.lr = 0x8375D928;
	sub_82535898(ctx, base);
	// addi r4,r31,-724
	ctx.r4.s64 = ctx.r31.s64 + -724;
	// bl 0x82535898
	ctx.lr = 0x8375D930;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375D934;
	sub_82534928(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,36(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-716
	ctx.r4.s64 = ctx.r31.s64 + -716;
	// bl 0x82535898
	ctx.lr = 0x8375D948;
	sub_82535898(ctx, base);
	// addi r4,r31,-704
	ctx.r4.s64 = ctx.r31.s64 + -704;
	// bl 0x82535898
	ctx.lr = 0x8375D950;
	sub_82535898(ctx, base);
	// addi r4,r31,-684
	ctx.r4.s64 = ctx.r31.s64 + -684;
	// bl 0x82535898
	ctx.lr = 0x8375D958;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375D95C;
	sub_82534928(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// stfs f8,40(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-668
	ctx.r4.s64 = ctx.r31.s64 + -668;
	// bl 0x82535898
	ctx.lr = 0x8375D970;
	sub_82535898(ctx, base);
	// addi r4,r31,-656
	ctx.r4.s64 = ctx.r31.s64 + -656;
	// bl 0x82535898
	ctx.lr = 0x8375D978;
	sub_82535898(ctx, base);
	// addi r4,r31,-636
	ctx.r4.s64 = ctx.r31.s64 + -636;
	// bl 0x82535898
	ctx.lr = 0x8375D980;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375D984;
	sub_82534928(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// stfs f7,44(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-620
	ctx.r4.s64 = ctx.r31.s64 + -620;
	// bl 0x82535898
	ctx.lr = 0x8375D998;
	sub_82535898(ctx, base);
	// addi r4,r31,-608
	ctx.r4.s64 = ctx.r31.s64 + -608;
	// bl 0x82535898
	ctx.lr = 0x8375D9A0;
	sub_82535898(ctx, base);
	// addi r4,r31,-588
	ctx.r4.s64 = ctx.r31.s64 + -588;
	// bl 0x82535898
	ctx.lr = 0x8375D9A8;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375D9AC;
	sub_82534770(ctx, base);
	// stw r3,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-576
	ctx.r4.s64 = ctx.r31.s64 + -576;
	// bl 0x82535898
	ctx.lr = 0x8375D9BC;
	sub_82535898(ctx, base);
	// addi r4,r31,-564
	ctx.r4.s64 = ctx.r31.s64 + -564;
	// bl 0x82535898
	ctx.lr = 0x8375D9C4;
	sub_82535898(ctx, base);
	// addi r4,r31,-544
	ctx.r4.s64 = ctx.r31.s64 + -544;
	// bl 0x82535898
	ctx.lr = 0x8375D9CC;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375D9D0;
	sub_82534928(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// stfs f6,52(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// addi r4,r31,-532
	ctx.r4.s64 = ctx.r31.s64 + -532;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375D9E4;
	sub_82535898(ctx, base);
	// addi r4,r31,-520
	ctx.r4.s64 = ctx.r31.s64 + -520;
	// bl 0x82535898
	ctx.lr = 0x8375D9EC;
	sub_82535898(ctx, base);
	// addi r4,r31,-508
	ctx.r4.s64 = ctx.r31.s64 + -508;
	// bl 0x82535898
	ctx.lr = 0x8375D9F4;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375D9F8;
	sub_82534928(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// stfs f5,56(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-492
	ctx.r4.s64 = ctx.r31.s64 + -492;
	// bl 0x82535898
	ctx.lr = 0x8375DA0C;
	sub_82535898(ctx, base);
	// addi r4,r31,-480
	ctx.r4.s64 = ctx.r31.s64 + -480;
	// bl 0x82535898
	ctx.lr = 0x8375DA14;
	sub_82535898(ctx, base);
	// addi r4,r31,-468
	ctx.r4.s64 = ctx.r31.s64 + -468;
	// bl 0x82535898
	ctx.lr = 0x8375DA1C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375DA20;
	sub_82534928(ctx, base);
	// frsp f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// stfs f4,60(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-460
	ctx.r4.s64 = ctx.r31.s64 + -460;
	// bl 0x82535898
	ctx.lr = 0x8375DA34;
	sub_82535898(ctx, base);
	// addi r4,r31,-448
	ctx.r4.s64 = ctx.r31.s64 + -448;
	// bl 0x82535898
	ctx.lr = 0x8375DA3C;
	sub_82535898(ctx, base);
	// addi r4,r31,-436
	ctx.r4.s64 = ctx.r31.s64 + -436;
	// bl 0x82535898
	ctx.lr = 0x8375DA44;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375DA48;
	sub_82534928(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// stfs f3,64(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 64, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-428
	ctx.r4.s64 = ctx.r31.s64 + -428;
	// bl 0x82535898
	ctx.lr = 0x8375DA5C;
	sub_82535898(ctx, base);
	// addi r4,r31,-416
	ctx.r4.s64 = ctx.r31.s64 + -416;
	// bl 0x82535898
	ctx.lr = 0x8375DA64;
	sub_82535898(ctx, base);
	// addi r4,r31,-404
	ctx.r4.s64 = ctx.r31.s64 + -404;
	// bl 0x82535898
	ctx.lr = 0x8375DA6C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375DA70;
	sub_82534928(ctx, base);
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// stfs f2,68(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-388
	ctx.r4.s64 = ctx.r31.s64 + -388;
	// bl 0x82535898
	ctx.lr = 0x8375DA84;
	sub_82535898(ctx, base);
	// addi r4,r31,-376
	ctx.r4.s64 = ctx.r31.s64 + -376;
	// bl 0x82535898
	ctx.lr = 0x8375DA8C;
	sub_82535898(ctx, base);
	// addi r4,r31,-364
	ctx.r4.s64 = ctx.r31.s64 + -364;
	// bl 0x82535898
	ctx.lr = 0x8375DA94;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375DA98;
	sub_82534928(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// stfs f1,72(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 72, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-348
	ctx.r4.s64 = ctx.r31.s64 + -348;
	// bl 0x82535898
	ctx.lr = 0x8375DAAC;
	sub_82535898(ctx, base);
	// addi r4,r31,-336
	ctx.r4.s64 = ctx.r31.s64 + -336;
	// bl 0x82535898
	ctx.lr = 0x8375DAB4;
	sub_82535898(ctx, base);
	// addi r4,r31,-324
	ctx.r4.s64 = ctx.r31.s64 + -324;
	// bl 0x82535898
	ctx.lr = 0x8375DABC;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375DAC0;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,76(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 76, temp.u32);
	// addi r4,r31,-308
	ctx.r4.s64 = ctx.r31.s64 + -308;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375DAD4;
	sub_82535898(ctx, base);
	// addi r4,r31,-296
	ctx.r4.s64 = ctx.r31.s64 + -296;
	// bl 0x82535898
	ctx.lr = 0x8375DADC;
	sub_82535898(ctx, base);
	// addi r4,r31,-284
	ctx.r4.s64 = ctx.r31.s64 + -284;
	// bl 0x82535898
	ctx.lr = 0x8375DAE4;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375DAE8;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,80(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 80, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-268
	ctx.r4.s64 = ctx.r31.s64 + -268;
	// bl 0x82535898
	ctx.lr = 0x8375DAFC;
	sub_82535898(ctx, base);
	// addi r4,r31,-256
	ctx.r4.s64 = ctx.r31.s64 + -256;
	// bl 0x82535898
	ctx.lr = 0x8375DB04;
	sub_82535898(ctx, base);
	// addi r4,r31,-244
	ctx.r4.s64 = ctx.r31.s64 + -244;
	// bl 0x82535898
	ctx.lr = 0x8375DB0C;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375DB10;
	sub_82534770(ctx, base);
	// stw r3,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-232
	ctx.r4.s64 = ctx.r31.s64 + -232;
	// bl 0x82535898
	ctx.lr = 0x8375DB20;
	sub_82535898(ctx, base);
	// addi r4,r31,-220
	ctx.r4.s64 = ctx.r31.s64 + -220;
	// bl 0x82535898
	ctx.lr = 0x8375DB28;
	sub_82535898(ctx, base);
	// addi r4,r31,-208
	ctx.r4.s64 = ctx.r31.s64 + -208;
	// bl 0x82535898
	ctx.lr = 0x8375DB30;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375DB34;
	sub_82534928(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,88(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 88, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-196
	ctx.r4.s64 = ctx.r31.s64 + -196;
	// bl 0x82535898
	ctx.lr = 0x8375DB48;
	sub_82535898(ctx, base);
	// addi r4,r31,-184
	ctx.r4.s64 = ctx.r31.s64 + -184;
	// bl 0x82535898
	ctx.lr = 0x8375DB50;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375DB54;
	sub_82534B10(ctx, base);
	// stb r3,92(r30)
	PPC_STORE_U8(ctx.r30.u32 + 92, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-172
	ctx.r4.s64 = ctx.r31.s64 + -172;
	// bl 0x82535898
	ctx.lr = 0x8375DB64;
	sub_82535898(ctx, base);
	// addi r4,r31,-160
	ctx.r4.s64 = ctx.r31.s64 + -160;
	// bl 0x82535898
	ctx.lr = 0x8375DB6C;
	sub_82535898(ctx, base);
	// addi r4,r31,-148
	ctx.r4.s64 = ctx.r31.s64 + -148;
	// bl 0x82535898
	ctx.lr = 0x8375DB74;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375DB78;
	sub_82534928(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,96(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 96, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-140
	ctx.r4.s64 = ctx.r31.s64 + -140;
	// bl 0x82535898
	ctx.lr = 0x8375DB8C;
	sub_82535898(ctx, base);
	// addi r4,r31,-128
	ctx.r4.s64 = ctx.r31.s64 + -128;
	// bl 0x82535898
	ctx.lr = 0x8375DB94;
	sub_82535898(ctx, base);
	// addi r4,r31,-116
	ctx.r4.s64 = ctx.r31.s64 + -116;
	// bl 0x82535898
	ctx.lr = 0x8375DB9C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375DBA0;
	sub_82534928(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,100(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 100, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-104
	ctx.r4.s64 = ctx.r31.s64 + -104;
	// bl 0x82535898
	ctx.lr = 0x8375DBB4;
	sub_82535898(ctx, base);
	// addi r4,r31,-92
	ctx.r4.s64 = ctx.r31.s64 + -92;
	// bl 0x82535898
	ctx.lr = 0x8375DBBC;
	sub_82535898(ctx, base);
	// addi r4,r31,-80
	ctx.r4.s64 = ctx.r31.s64 + -80;
	// bl 0x82535898
	ctx.lr = 0x8375DBC4;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375DBC8;
	sub_82534928(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,104(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 104, temp.u32);
	// addi r4,r31,-72
	ctx.r4.s64 = ctx.r31.s64 + -72;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375DBDC;
	sub_82535898(ctx, base);
	// addi r4,r31,-60
	ctx.r4.s64 = ctx.r31.s64 + -60;
	// bl 0x82535898
	ctx.lr = 0x8375DBE4;
	sub_82535898(ctx, base);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// bl 0x82535898
	ctx.lr = 0x8375DBEC;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375DBF0;
	sub_82534928(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// stfs f8,108(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 108, temp.u32);
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375DC04;
	sub_82535898(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// bl 0x82535898
	ctx.lr = 0x8375DC0C;
	sub_82535898(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// bl 0x82535898
	ctx.lr = 0x8375DC14;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375DC18;
	sub_82534928(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// stfs f7,112(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 112, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375DC2C;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375DC30;
	sub_82534B10(ctx, base);
	// stb r3,116(r30)
	PPC_STORE_U8(ctx.r30.u32 + 116, ctx.r3.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8375DC40"))) PPC_WEAK_FUNC(sub_8375DC40);
PPC_FUNC_IMPL(__imp__sub_8375DC40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8375DC48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8375dc68
	if (!cr6.eq) goto loc_8375DC68;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8375DC68:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x83763830
	ctx.lr = 0x8375DC7C;
	sub_83763830(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lbz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// stb r10,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r10.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r9,5(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r9,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r9.u8);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,20(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x83763830
	ctx.lr = 0x8375DCB4;
	sub_83763830(ctx, base);
	// lfs f11,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f11,24(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lbz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// stb r8,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r8.u8);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,32(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f9,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,36(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f8,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,40(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f7,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,44(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r7,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// lfs f6,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,52(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x83763830
	ctx.lr = 0x8375DD00;
	sub_83763830(ctx, base);
	// lfs f5,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f5,56(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f4,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,60(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f3,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,64(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f2,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,68(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f1,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,72(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lfs f0,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lfs f13,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lwz r6,28(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r6,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r6.u32);
	// lfs f12,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,88(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x83763830
	ctx.lr = 0x8375DD54;
	sub_83763830(ctx, base);
	// lbz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r5,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r5.u8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x83763830
	ctx.lr = 0x8375DD68;
	sub_83763830(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lfs f11,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f11,96(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,100(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,104(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// lfs f8,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,108(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// lfs f7,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,112(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// lbz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// stb r11,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8375DDA8"))) PPC_WEAK_FUNC(sub_8375DDA8);
PPC_FUNC_IMPL(__imp__sub_8375DDA8) {
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
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,120
	ctx.r4.s64 = 120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8375DDCC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8375dde8
	if (cr6.eq) goto loc_8375DDE8;
	// bl 0x8375d740
	ctx.lr = 0x8375DDD8;
	sub_8375D740(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8375DDE8:
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

__attribute__((alias("__imp__sub_8375DDFC"))) PPC_WEAK_FUNC(sub_8375DDFC);
PPC_FUNC_IMPL(__imp__sub_8375DDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8375DE00"))) PPC_WEAK_FUNC(sub_8375DE00);
PPC_FUNC_IMPL(__imp__sub_8375DE00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32213
	ctx.r10.s64 = -2111111168;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-22284
	ctx.r8.s64 = ctx.r10.s64 + -22284;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
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
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
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
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stfs f0,132(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stfs f0,136(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// stfs f0,140(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// stfs f0,144(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// stfs f0,148(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stfs f0,152(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// stw r11,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r11.u32);
	// stfs f0,160(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// stfs f0,164(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// stfs f0,168(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// stfs f0,172(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// stfs f0,176(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// stfs f0,180(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// stfs f0,184(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// stfs f0,188(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// stfs f0,192(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// stfs f0,196(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// stfs f0,200(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// stfs f0,204(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8375DEE8"))) PPC_WEAK_FUNC(sub_8375DEE8);
PPC_FUNC_IMPL(__imp__sub_8375DEE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8375DEF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r11,-22372
	ctx.r31.s64 = ctx.r11.s64 + -22372;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r31,-188
	ctx.r4.s64 = ctx.r31.s64 + -188;
	// bl 0x82535898
	ctx.lr = 0x8375DF10;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375DF14;
	sub_82534770(ctx, base);
	// stw r3,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r3.u32);
	// addi r4,r31,-176
	ctx.r4.s64 = ctx.r31.s64 + -176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82535898
	ctx.lr = 0x8375DF24;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375DF28;
	sub_82534770(ctx, base);
	// stw r3,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r3.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r27,8
	ctx.r28.s64 = ctx.r27.s64 + 8;
loc_8375DF34:
	// addi r4,r31,-164
	ctx.r4.s64 = ctx.r31.s64 + -164;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82535898
	ctx.lr = 0x8375DF40;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x8375DF48;
	sub_82535890(ctx, base);
	// addi r4,r31,-148
	ctx.r4.s64 = ctx.r31.s64 + -148;
	// bl 0x82535898
	ctx.lr = 0x8375DF50;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375DF54;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,4(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// addi r4,r31,-136
	ctx.r4.s64 = ctx.r31.s64 + -136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82535898
	ctx.lr = 0x8375DF68;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x8375DF70;
	sub_82535890(ctx, base);
	// addi r4,r31,-120
	ctx.r4.s64 = ctx.r31.s64 + -120;
	// bl 0x82535898
	ctx.lr = 0x8375DF78;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375DF7C;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,8(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// addi r4,r31,-108
	ctx.r4.s64 = ctx.r31.s64 + -108;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82535898
	ctx.lr = 0x8375DF90;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x8375DF98;
	sub_82535890(ctx, base);
	// addi r4,r31,-92
	ctx.r4.s64 = ctx.r31.s64 + -92;
	// bl 0x82535898
	ctx.lr = 0x8375DFA0;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375DFA4;
	sub_82534928(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,12(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r28.u32 + 12, temp.u32);
	// addi r4,r31,-80
	ctx.r4.s64 = ctx.r31.s64 + -80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82535898
	ctx.lr = 0x8375DFB8;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x8375DFC0;
	sub_82535890(ctx, base);
	// addi r4,r31,-64
	ctx.r4.s64 = ctx.r31.s64 + -64;
	// bl 0x82535898
	ctx.lr = 0x8375DFC8;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375DFCC;
	sub_82534928(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfsu f11,16(r28)
	ea = 16 + ctx.r28.u32;
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r28.u32 = ea;
	// cmpwi cr6,r29,9
	cr6.compare<int32_t>(ctx.r29.s32, 9, xer);
	// blt cr6,0x8375df34
	if (cr6.lt) goto loc_8375DF34;
	// addi r4,r31,-52
	ctx.r4.s64 = ctx.r31.s64 + -52;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82535898
	ctx.lr = 0x8375DFEC;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375DFF0;
	sub_82534770(ctx, base);
	// stw r3,156(r27)
	PPC_STORE_U32(ctx.r27.u32 + 156, ctx.r3.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r27,156
	ctx.r28.s64 = ctx.r27.s64 + 156;
loc_8375DFFC:
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82535898
	ctx.lr = 0x8375E008;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x8375E010;
	sub_82535890(ctx, base);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// bl 0x82535898
	ctx.lr = 0x8375E018;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375E01C;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,4(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82535898
	ctx.lr = 0x8375E030;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x8375E038;
	sub_82535890(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x8375E040;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375E044;
	sub_82534928(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfsu f13,8(r28)
	ea = 8 + ctx.r28.u32;
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r28.u32 = ea;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(ctx.r29.s32, 6, xer);
	// blt cr6,0x8375dffc
	if (cr6.lt) goto loc_8375DFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8375E064"))) PPC_WEAK_FUNC(sub_8375E064);
PPC_FUNC_IMPL(__imp__sub_8375E064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8375E068"))) PPC_WEAK_FUNC(sub_8375E068);
PPC_FUNC_IMPL(__imp__sub_8375E068) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8375e094
	if (!cr6.eq) goto loc_8375E094;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8375e24c
	goto loc_8375E24C;
loc_8375E094:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x83763830
	ctx.lr = 0x8375E0B0;
	sub_83763830(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,20(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,24(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f10,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,28(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f9,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,32(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f8,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,36(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f7,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,40(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f6,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,44(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f5,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,48(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f4,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,52(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f3,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,56(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f2,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,60(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f1,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,64(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f0,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f13,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,72(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lfs f12,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,76(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lfs f11,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,80(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lfs f10,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,84(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lfs f9,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,88(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// lfs f8,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,92(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// lfs f7,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,96(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// lfs f6,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,100(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// lfs f5,92(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,104(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// lfs f4,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,108(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// lfs f3,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,112(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// lfs f2,104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,116(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// lfs f1,108(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,120(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// lfs f0,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// lfs f13,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,128(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// lfs f12,120(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,132(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// lfs f11,124(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,136(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// lfs f10,128(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,140(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// lfs f9,132(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,144(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// lfs f8,136(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,148(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// lfs f7,140(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,152(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r9,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x83763830
	ctx.lr = 0x8375E1E4;
	sub_83763830(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lfs f6,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f6,160(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// lfs f5,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,164(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// lfs f4,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,168(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// lfs f3,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,172(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// lfs f2,16(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,176(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// lfs f1,20(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,180(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// lfs f0,24(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// lfs f13,28(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,188(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// lfs f12,32(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,192(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// lfs f11,36(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,196(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// lfs f10,40(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,200(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// lfs f9,44(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,204(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 204, temp.u32);
loc_8375E24C:
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

__attribute__((alias("__imp__sub_8375E264"))) PPC_WEAK_FUNC(sub_8375E264);
PPC_FUNC_IMPL(__imp__sub_8375E264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8375E268"))) PPC_WEAK_FUNC(sub_8375E268);
PPC_FUNC_IMPL(__imp__sub_8375E268) {
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
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,208
	ctx.r4.s64 = 208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8375E28C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8375e2a8
	if (cr6.eq) goto loc_8375E2A8;
	// bl 0x8375de00
	ctx.lr = 0x8375E298;
	sub_8375DE00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8375E2A8:
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

__attribute__((alias("__imp__sub_8375E2BC"))) PPC_WEAK_FUNC(sub_8375E2BC);
PPC_FUNC_IMPL(__imp__sub_8375E2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8375E2C0"))) PPC_WEAK_FUNC(sub_8375E2C0);
PPC_FUNC_IMPL(__imp__sub_8375E2C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r10,17
	ctx.r10.s64 = 17;
	// addi r9,r11,-21556
	ctx.r9.s64 = ctx.r11.s64 + -21556;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
loc_8375E2E4:
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stb r10,36(r11)
	PPC_STORE_U8(ctx.r11.u32 + 36, ctx.r10.u8);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stb r10,37(r11)
	PPC_STORE_U8(ctx.r11.u32 + 37, ctx.r10.u8);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// stwu r10,72(r11)
	ea = 72 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8375e2e4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8375E2E4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8375E338"))) PPC_WEAK_FUNC(sub_8375E338);
PPC_FUNC_IMPL(__imp__sub_8375E338) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8375E340;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,-21648
	ctx.r31.s64 = ctx.r11.s64 + -21648;
loc_8375E358:
	// addi r4,r31,-576
	ctx.r4.s64 = ctx.r31.s64 + -576;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x8375E364;
	sub_82535898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82535890
	ctx.lr = 0x8375E36C;
	sub_82535890(ctx, base);
	// addi r4,r31,-564
	ctx.r4.s64 = ctx.r31.s64 + -564;
	// bl 0x82535898
	ctx.lr = 0x8375E374;
	sub_82535898(ctx, base);
	// addi r4,r31,-552
	ctx.r4.s64 = ctx.r31.s64 + -552;
	// bl 0x82535898
	ctx.lr = 0x8375E37C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375E380;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// addi r4,r31,-544
	ctx.r4.s64 = ctx.r31.s64 + -544;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x8375E394;
	sub_82535898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82535890
	ctx.lr = 0x8375E39C;
	sub_82535890(ctx, base);
	// addi r4,r31,-532
	ctx.r4.s64 = ctx.r31.s64 + -532;
	// bl 0x82535898
	ctx.lr = 0x8375E3A4;
	sub_82535898(ctx, base);
	// addi r4,r31,-520
	ctx.r4.s64 = ctx.r31.s64 + -520;
	// bl 0x82535898
	ctx.lr = 0x8375E3AC;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375E3B0;
	sub_82534B10(ctx, base);
	// stb r3,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r3.u8);
	// addi r4,r31,-500
	ctx.r4.s64 = ctx.r31.s64 + -500;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x8375E3C0;
	sub_82535898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82535890
	ctx.lr = 0x8375E3C8;
	sub_82535890(ctx, base);
	// addi r4,r31,-488
	ctx.r4.s64 = ctx.r31.s64 + -488;
	// bl 0x82535898
	ctx.lr = 0x8375E3D0;
	sub_82535898(ctx, base);
	// addi r4,r31,-476
	ctx.r4.s64 = ctx.r31.s64 + -476;
	// bl 0x82535898
	ctx.lr = 0x8375E3D8;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375E3DC;
	sub_82534770(ctx, base);
	// stw r3,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r3.u32);
	// addi r4,r31,-464
	ctx.r4.s64 = ctx.r31.s64 + -464;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x8375E3EC;
	sub_82535898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82535890
	ctx.lr = 0x8375E3F4;
	sub_82535890(ctx, base);
	// addi r4,r31,-452
	ctx.r4.s64 = ctx.r31.s64 + -452;
	// bl 0x82535898
	ctx.lr = 0x8375E3FC;
	sub_82535898(ctx, base);
	// addi r4,r31,-440
	ctx.r4.s64 = ctx.r31.s64 + -440;
	// bl 0x82535898
	ctx.lr = 0x8375E404;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375E408;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,16(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 16, temp.u32);
	// addi r4,r31,-428
	ctx.r4.s64 = ctx.r31.s64 + -428;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x8375E41C;
	sub_82535898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82535890
	ctx.lr = 0x8375E424;
	sub_82535890(ctx, base);
	// addi r4,r31,-416
	ctx.r4.s64 = ctx.r31.s64 + -416;
	// bl 0x82535898
	ctx.lr = 0x8375E42C;
	sub_82535898(ctx, base);
	// addi r4,r31,-404
	ctx.r4.s64 = ctx.r31.s64 + -404;
	// bl 0x82535898
	ctx.lr = 0x8375E434;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375E438;
	sub_82534928(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,20(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 20, temp.u32);
	// addi r4,r31,-396
	ctx.r4.s64 = ctx.r31.s64 + -396;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x8375E44C;
	sub_82535898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82535890
	ctx.lr = 0x8375E454;
	sub_82535890(ctx, base);
	// addi r4,r31,-384
	ctx.r4.s64 = ctx.r31.s64 + -384;
	// bl 0x82535898
	ctx.lr = 0x8375E45C;
	sub_82535898(ctx, base);
	// addi r4,r31,-372
	ctx.r4.s64 = ctx.r31.s64 + -372;
	// bl 0x82535898
	ctx.lr = 0x8375E464;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375E468;
	sub_82534770(ctx, base);
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// addi r4,r31,-364
	ctx.r4.s64 = ctx.r31.s64 + -364;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x8375E478;
	sub_82535898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82535890
	ctx.lr = 0x8375E480;
	sub_82535890(ctx, base);
	// addi r4,r31,-352
	ctx.r4.s64 = ctx.r31.s64 + -352;
	// bl 0x82535898
	ctx.lr = 0x8375E488;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375E48C;
	sub_82534928(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,28(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 28, temp.u32);
	// addi r4,r31,-344
	ctx.r4.s64 = ctx.r31.s64 + -344;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x8375E4A0;
	sub_82535898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82535890
	ctx.lr = 0x8375E4A8;
	sub_82535890(ctx, base);
	// addi r4,r31,-332
	ctx.r4.s64 = ctx.r31.s64 + -332;
	// bl 0x82535898
	ctx.lr = 0x8375E4B0;
	sub_82535898(ctx, base);
	// addi r4,r31,-324
	ctx.r4.s64 = ctx.r31.s64 + -324;
	// bl 0x82535898
	ctx.lr = 0x8375E4B8;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375E4BC;
	sub_82534928(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,32(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 32, temp.u32);
	// addi r4,r31,-316
	ctx.r4.s64 = ctx.r31.s64 + -316;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x8375E4D0;
	sub_82535898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82535890
	ctx.lr = 0x8375E4D8;
	sub_82535890(ctx, base);
	// addi r4,r31,-304
	ctx.r4.s64 = ctx.r31.s64 + -304;
	// bl 0x82535898
	ctx.lr = 0x8375E4E0;
	sub_82535898(ctx, base);
	// addi r4,r31,-296
	ctx.r4.s64 = ctx.r31.s64 + -296;
	// bl 0x82535898
	ctx.lr = 0x8375E4E8;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375E4EC;
	sub_82534B10(ctx, base);
	// stb r3,36(r29)
	PPC_STORE_U8(ctx.r29.u32 + 36, ctx.r3.u8);
	// addi r4,r31,-276
	ctx.r4.s64 = ctx.r31.s64 + -276;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x8375E4FC;
	sub_82535898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82535890
	ctx.lr = 0x8375E504;
	sub_82535890(ctx, base);
	// addi r4,r31,-264
	ctx.r4.s64 = ctx.r31.s64 + -264;
	// bl 0x82535898
	ctx.lr = 0x8375E50C;
	sub_82535898(ctx, base);
	// addi r4,r31,-256
	ctx.r4.s64 = ctx.r31.s64 + -256;
	// bl 0x82535898
	ctx.lr = 0x8375E514;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375E518;
	sub_82534B10(ctx, base);
	// stb r3,37(r29)
	PPC_STORE_U8(ctx.r29.u32 + 37, ctx.r3.u8);
	// addi r4,r31,-236
	ctx.r4.s64 = ctx.r31.s64 + -236;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x8375E528;
	sub_82535898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82535890
	ctx.lr = 0x8375E530;
	sub_82535890(ctx, base);
	// addi r4,r31,-224
	ctx.r4.s64 = ctx.r31.s64 + -224;
	// bl 0x82535898
	ctx.lr = 0x8375E538;
	sub_82535898(ctx, base);
	// addi r4,r31,-216
	ctx.r4.s64 = ctx.r31.s64 + -216;
	// bl 0x82535898
	ctx.lr = 0x8375E540;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375E544;
	sub_82534928(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,40(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 40, temp.u32);
	// addi r4,r31,-204
	ctx.r4.s64 = ctx.r31.s64 + -204;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x8375E558;
	sub_82535898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82535890
	ctx.lr = 0x8375E560;
	sub_82535890(ctx, base);
	// addi r4,r31,-192
	ctx.r4.s64 = ctx.r31.s64 + -192;
	// bl 0x82535898
	ctx.lr = 0x8375E568;
	sub_82535898(ctx, base);
	// addi r4,r31,-184
	ctx.r4.s64 = ctx.r31.s64 + -184;
	// bl 0x82535898
	ctx.lr = 0x8375E570;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375E574;
	sub_82534928(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// stfs f8,44(r29)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r29.u32 + 44, temp.u32);
	// addi r4,r31,-176
	ctx.r4.s64 = ctx.r31.s64 + -176;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x8375E588;
	sub_82535898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82535890
	ctx.lr = 0x8375E590;
	sub_82535890(ctx, base);
	// addi r4,r31,-164
	ctx.r4.s64 = ctx.r31.s64 + -164;
	// bl 0x82535898
	ctx.lr = 0x8375E598;
	sub_82535898(ctx, base);
	// addi r4,r31,-156
	ctx.r4.s64 = ctx.r31.s64 + -156;
	// bl 0x82535898
	ctx.lr = 0x8375E5A0;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375E5A4;
	sub_82534770(ctx, base);
	// stw r3,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r3.u32);
	// addi r4,r31,-148
	ctx.r4.s64 = ctx.r31.s64 + -148;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x8375E5B4;
	sub_82535898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82535890
	ctx.lr = 0x8375E5BC;
	sub_82535890(ctx, base);
	// addi r4,r31,-136
	ctx.r4.s64 = ctx.r31.s64 + -136;
	// bl 0x82535898
	ctx.lr = 0x8375E5C4;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375E5C8;
	sub_82534770(ctx, base);
	// stw r3,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r3.u32);
	// addi r4,r31,-128
	ctx.r4.s64 = ctx.r31.s64 + -128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x8375E5D8;
	sub_82535898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82535890
	ctx.lr = 0x8375E5E0;
	sub_82535890(ctx, base);
	// addi r4,r31,-116
	ctx.r4.s64 = ctx.r31.s64 + -116;
	// bl 0x82535898
	ctx.lr = 0x8375E5E8;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375E5EC;
	sub_82534770(ctx, base);
	// stw r3,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r3.u32);
	// addi r4,r31,-108
	ctx.r4.s64 = ctx.r31.s64 + -108;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x8375E5FC;
	sub_82535898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82535890
	ctx.lr = 0x8375E604;
	sub_82535890(ctx, base);
	// addi r4,r31,-96
	ctx.r4.s64 = ctx.r31.s64 + -96;
	// bl 0x82535898
	ctx.lr = 0x8375E60C;
	sub_82535898(ctx, base);
	// addi r4,r31,-88
	ctx.r4.s64 = ctx.r31.s64 + -88;
	// bl 0x82535898
	ctx.lr = 0x8375E614;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375E618;
	sub_82534770(ctx, base);
	// stw r3,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r3.u32);
	// addi r4,r31,-76
	ctx.r4.s64 = ctx.r31.s64 + -76;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x8375E628;
	sub_82535898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82535890
	ctx.lr = 0x8375E630;
	sub_82535890(ctx, base);
	// addi r4,r31,-64
	ctx.r4.s64 = ctx.r31.s64 + -64;
	// bl 0x82535898
	ctx.lr = 0x8375E638;
	sub_82535898(ctx, base);
	// addi r4,r31,-56
	ctx.r4.s64 = ctx.r31.s64 + -56;
	// bl 0x82535898
	ctx.lr = 0x8375E640;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375E644;
	sub_82534770(ctx, base);
	// stw r3,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r3.u32);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x8375E654;
	sub_82535898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82535890
	ctx.lr = 0x8375E65C;
	sub_82535890(ctx, base);
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// bl 0x82535898
	ctx.lr = 0x8375E664;
	sub_82535898(ctx, base);
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// bl 0x82535898
	ctx.lr = 0x8375E66C;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375E670;
	sub_82534770(ctx, base);
	// stw r3,68(r29)
	PPC_STORE_U32(ctx.r29.u32 + 68, ctx.r3.u32);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x8375E680;
	sub_82535898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82535890
	ctx.lr = 0x8375E688;
	sub_82535890(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x82535898
	ctx.lr = 0x8375E690;
	sub_82535898(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x8375E698;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375E69C;
	sub_82534770(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwu r3,72(r29)
	ea = 72 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// cmpwi cr6,r30,17
	cr6.compare<int32_t>(ctx.r30.s32, 17, xer);
	// blt cr6,0x8375e358
	if (cr6.lt) goto loc_8375E358;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8375E6B8"))) PPC_WEAK_FUNC(sub_8375E6B8);
PPC_FUNC_IMPL(__imp__sub_8375E6B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8375E6C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8375e6e0
	if (!cr6.eq) goto loc_8375E6E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8375E6E0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83763830
	ctx.lr = 0x8375E6EC;
	sub_83763830(ctx, base);
	// addi r30,r3,-4
	ctx.r30.s64 = ctx.r3.s64 + -4;
	// li r28,17
	ctx.r28.s64 = 17;
loc_8375E6F4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x83763830
	ctx.lr = 0x8375E700;
	sub_83763830(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f12,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,20(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,28(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83763830
	ctx.lr = 0x8375E744;
	sub_83763830(ctx, base);
	// lfs f10,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stfs f10,32(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lbz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// stb r8,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r8.u8);
	// lbz r7,5(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// stb r7,37(r31)
	PPC_STORE_U8(ctx.r31.u32 + 37, ctx.r7.u8);
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,40(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f8,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,44(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r6,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r6.u32);
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r5,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r5.u32);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// lwzu r3,24(r30)
	ea = 24 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x83763830
	ctx.lr = 0x8375E790;
	sub_83763830(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stwu r8,72(r31)
	ea = 72 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r31.u32 = ea;
	// bne 0x8375e6f4
	if (!cr0.eq) goto loc_8375E6F4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8375E7C4"))) PPC_WEAK_FUNC(sub_8375E7C4);
PPC_FUNC_IMPL(__imp__sub_8375E7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8375E7C8"))) PPC_WEAK_FUNC(sub_8375E7C8);
PPC_FUNC_IMPL(__imp__sub_8375E7C8) {
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
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,1228
	ctx.r4.s64 = 1228;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8375E7EC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8375e808
	if (cr6.eq) goto loc_8375E808;
	// bl 0x8375e2c0
	ctx.lr = 0x8375E7F8;
	sub_8375E2C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8375E808:
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

__attribute__((alias("__imp__sub_8375E81C"))) PPC_WEAK_FUNC(sub_8375E81C);
PPC_FUNC_IMPL(__imp__sub_8375E81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8375E820"))) PPC_WEAK_FUNC(sub_8375E820);
PPC_FUNC_IMPL(__imp__sub_8375E820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8375E828;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-21428
	ctx.r31.s64 = ctx.r11.s64 + -21428;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r31,-68
	ctx.r4.s64 = ctx.r31.s64 + -68;
	// bl 0x82535898
	ctx.lr = 0x8375E848;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375E84C;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// addi r4,r31,-56
	ctx.r4.s64 = ctx.r31.s64 + -56;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375E860;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375E864;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375E878;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375E87C;
	sub_82534928(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,12(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375E890;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375E894;
	sub_82534928(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,16(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375E8A8;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375E8AC;
	sub_82534B10(ctx, base);
	// stb r3,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r3.u8);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375E8BC;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375E8C0;
	sub_82534B10(ctx, base);
	// stb r3,21(r30)
	PPC_STORE_U8(ctx.r30.u32 + 21, ctx.r3.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375E8D0;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375E8D4;
	sub_82534770(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8375E8E4"))) PPC_WEAK_FUNC(sub_8375E8E4);
PPC_FUNC_IMPL(__imp__sub_8375E8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8375E8E8"))) PPC_WEAK_FUNC(sub_8375E8E8);
PPC_FUNC_IMPL(__imp__sub_8375E8E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8375e8fc
	if (!cr6.eq) goto loc_8375E8FC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8375E8FC:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lbz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 16);
	// stb r10,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r10.u8);
	// lbz r9,17(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 17);
	// stb r9,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r9.u8);
	// lwz r8,20(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8375E93C"))) PPC_WEAK_FUNC(sub_8375E93C);
PPC_FUNC_IMPL(__imp__sub_8375E93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8375E940"))) PPC_WEAK_FUNC(sub_8375E940);
PPC_FUNC_IMPL(__imp__sub_8375E940) {
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
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8375E964;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8375e9b0
	if (cr6.eq) goto loc_8375E9B0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32213
	ctx.r9.s64 = -2111111168;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,-21328
	ctx.r8.s64 = ctx.r9.s64 + -21328;
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r11.u8);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8375E9B0:
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

__attribute__((alias("__imp__sub_8375E9C4"))) PPC_WEAK_FUNC(sub_8375E9C4);
PPC_FUNC_IMPL(__imp__sub_8375E9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8375E9C8"))) PPC_WEAK_FUNC(sub_8375E9C8);
PPC_FUNC_IMPL(__imp__sub_8375E9C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8375E9D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-21056
	ctx.r31.s64 = ctx.r11.s64 + -21056;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r31,-208
	ctx.r4.s64 = ctx.r31.s64 + -208;
	// bl 0x82535898
	ctx.lr = 0x8375E9F0;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375E9F4;
	sub_82534770(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// addi r4,r31,-200
	ctx.r4.s64 = ctx.r31.s64 + -200;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375EA04;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375EA08;
	sub_82534770(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// addi r4,r31,-180
	ctx.r4.s64 = ctx.r31.s64 + -180;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375EA18;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375EA1C;
	sub_82534770(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// addi r4,r31,-160
	ctx.r4.s64 = ctx.r31.s64 + -160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375EA2C;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375EA30;
	sub_82534770(ctx, base);
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// addi r4,r31,-140
	ctx.r4.s64 = ctx.r31.s64 + -140;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375EA40;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375EA44;
	sub_82534770(ctx, base);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// addi r4,r31,-120
	ctx.r4.s64 = ctx.r31.s64 + -120;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375EA54;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375EA58;
	sub_82534770(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// addi r4,r31,-100
	ctx.r4.s64 = ctx.r31.s64 + -100;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375EA68;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375EA6C;
	sub_82534770(ctx, base);
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
	// addi r4,r31,-76
	ctx.r4.s64 = ctx.r31.s64 + -76;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375EA7C;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375EA80;
	sub_82534770(ctx, base);
	// stw r3,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r3.u32);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375EA90;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375EA94;
	sub_82534770(ctx, base);
	// stw r3,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r3.u32);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375EAA4;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375EAA8;
	sub_82534770(ctx, base);
	// stw r3,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375EAB8;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375EABC;
	sub_82534770(ctx, base);
	// stw r3,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8375EACC"))) PPC_WEAK_FUNC(sub_8375EACC);
PPC_FUNC_IMPL(__imp__sub_8375EACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8375EAD0"))) PPC_WEAK_FUNC(sub_8375EAD0);
PPC_FUNC_IMPL(__imp__sub_8375EAD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8375eae4
	if (!cr6.eq) goto loc_8375EAE4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8375EAE4:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// lwz r7,12(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// lwz r6,16(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// lwz r5,20(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r5,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r5.u32);
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r9,28(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// lwz r8,32(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stw r8,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// lwz r7,36(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stw r7,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r7.u32);
	// lwz r6,40(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r6,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8375EB44"))) PPC_WEAK_FUNC(sub_8375EB44);
PPC_FUNC_IMPL(__imp__sub_8375EB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8375EB48"))) PPC_WEAK_FUNC(sub_8375EB48);
PPC_FUNC_IMPL(__imp__sub_8375EB48) {
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
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8375EB6C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8375ebc0
	if (cr6.eq) goto loc_8375EBC0;
	// lis r10,-32213
	ctx.r10.s64 = -2111111168;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-20948
	ctx.r9.s64 = ctx.r10.s64 + -20948;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8375EBC0:
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

__attribute__((alias("__imp__sub_8375EBD4"))) PPC_WEAK_FUNC(sub_8375EBD4);
PPC_FUNC_IMPL(__imp__sub_8375EBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8375EBD8"))) PPC_WEAK_FUNC(sub_8375EBD8);
PPC_FUNC_IMPL(__imp__sub_8375EBD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8375EBE0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,556(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 556);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r29,r3,536
	ctx.r29.s64 = ctx.r3.s64 + 536;
	// li r26,2
	ctx.r26.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8375ec0c
	if (cr6.lt) goto loc_8375EC0C;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x8375EC0C;
	sub_825952B8(ctx, base);
loc_8375EC0C:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// addi r31,r27,508
	ctx.r31.s64 = ctx.r27.s64 + 508;
	// stw r28,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r28.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// lwz r11,528(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 528);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8375ec40
	if (cr6.lt) goto loc_8375EC40;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x8375EC40;
	sub_825952B8(ctx, base);
loc_8375EC40:
	// addi r11,r27,508
	ctx.r11.s64 = ctx.r27.s64 + 508;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// li r29,5
	ctx.r29.s64 = 5;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// addi r31,r11,68
	ctx.r31.s64 = ctx.r11.s64 + 68;
loc_8375EC58:
	// lwzu r11,-80(r31)
	ea = -80 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8375ec74
	if (cr6.lt) goto loc_8375EC74;
	// lwz r4,-20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x8375EC74;
	sub_825952B8(ctx, base);
loc_8375EC74:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r30,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r30.u32);
	// stb r30,-20(r31)
	PPC_STORE_U8(ctx.r31.u32 + -20, ctx.r30.u8);
	// lwz r11,-36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8375ec9c
	if (cr6.lt) goto loc_8375EC9C;
	// lwz r4,-56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -56);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x8375EC9C;
	sub_825952B8(ctx, base);
loc_8375EC9C:
	// stw r28,-36(r31)
	PPC_STORE_U32(ctx.r31.u32 + -36, ctx.r28.u32);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r30,-40(r31)
	PPC_STORE_U32(ctx.r31.u32 + -40, ctx.r30.u32);
	// stb r30,-56(r31)
	PPC_STORE_U8(ctx.r31.u32 + -56, ctx.r30.u8);
	// bge 0x8375ec58
	if (!cr0.lt) goto loc_8375EC58;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8375eccc
	if (cr6.lt) goto loc_8375ECCC;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x8375ECCC;
	sub_825952B8(ctx, base);
loc_8375ECCC:
	// stw r28,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r28.u32);
	// stw r30,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r30.u32);
	// stb r30,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r30.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8375ECE0"))) PPC_WEAK_FUNC(sub_8375ECE0);
PPC_FUNC_IMPL(__imp__sub_8375ECE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8375ECE8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r3,17676
	ctx.r31.s64 = ctx.r3.s64 + 17676;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r26,2
	ctx.r26.s64 = 2;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8375ED04:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8375ed24
	if (cr6.lt) goto loc_8375ED24;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x8375ED24;
	sub_825952B8(ctx, base);
loc_8375ED24:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// bge 0x8375ed04
	if (!cr0.lt) goto loc_8375ED04;
	// addi r31,r27,17620
	ctx.r31.s64 = ctx.r27.s64 + 17620;
	// li r29,27
	ctx.r29.s64 = 27;
loc_8375ED40:
	// addi r31,r31,-568
	ctx.r31.s64 = ctx.r31.s64 + -568;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8375ebd8
	ctx.lr = 0x8375ED4C;
	sub_8375EBD8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge 0x8375ed40
	if (!cr0.lt) goto loc_8375ED40;
	// addi r31,r27,1708
	ctx.r31.s64 = ctx.r27.s64 + 1708;
	// li r29,35
	ctx.r29.s64 = 35;
loc_8375ED5C:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8375ed7c
	if (cr6.lt) goto loc_8375ED7C;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x8375ED7C;
	sub_825952B8(ctx, base);
loc_8375ED7C:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// bge 0x8375ed5c
	if (!cr0.lt) goto loc_8375ED5C;
	// addi r31,r27,700
	ctx.r31.s64 = ctx.r27.s64 + 700;
	// li r29,3
	ctx.r29.s64 = 3;
loc_8375ED98:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8375edb8
	if (cr6.lt) goto loc_8375EDB8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x8375EDB8;
	sub_825952B8(ctx, base);
loc_8375EDB8:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// bge 0x8375ed98
	if (!cr0.lt) goto loc_8375ED98;
	// addi r31,r27,588
	ctx.r31.s64 = ctx.r27.s64 + 588;
	// li r29,12
	ctx.r29.s64 = 12;
loc_8375EDD4:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8375edf4
	if (cr6.lt) goto loc_8375EDF4;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x8375EDF4;
	sub_825952B8(ctx, base);
loc_8375EDF4:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// bge 0x8375edd4
	if (!cr0.lt) goto loc_8375EDD4;
	// addi r31,r27,224
	ctx.r31.s64 = ctx.r27.s64 + 224;
	// li r29,6
	ctx.r29.s64 = 6;
loc_8375EE10:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8375ee30
	if (cr6.lt) goto loc_8375EE30;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x8375EE30;
	sub_825952B8(ctx, base);
loc_8375EE30:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// bge 0x8375ee10
	if (!cr0.lt) goto loc_8375EE10;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8375ee60
	if (cr6.lt) goto loc_8375EE60;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x8375EE60;
	sub_825952B8(ctx, base);
loc_8375EE60:
	// stw r28,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r28.u32);
	// stw r30,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r30.u32);
	// stb r30,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r30.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8375EE74"))) PPC_WEAK_FUNC(sub_8375EE74);
PPC_FUNC_IMPL(__imp__sub_8375EE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8375EE78"))) PPC_WEAK_FUNC(sub_8375EE78);
PPC_FUNC_IMPL(__imp__sub_8375EE78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// addi r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 + 28;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// addi r8,r10,92
	ctx.r8.s64 = ctx.r10.s64 + 92;
	// stw r9,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r9.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// stw r9,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r9.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stb r11,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, ctx.r11.u8);
	// stw r9,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r9.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// lwz r7,140(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x8375eec8
	if (cr6.lt) goto loc_8375EEC8;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// b 0x8375eecc
	goto loc_8375EECC;
loc_8375EEC8:
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_8375EECC:
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
	// addi r8,r10,128
	ctx.r8.s64 = ctx.r10.s64 + 128;
	// stw r9,148(r10)
	PPC_STORE_U32(ctx.r10.u32 + 148, ctx.r9.u32);
	// stw r11,144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 144, ctx.r11.u32);
	// lwz r7,148(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x8375eef0
	if (cr6.lt) goto loc_8375EEF0;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// b 0x8375eef4
	goto loc_8375EEF4;
loc_8375EEF0:
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_8375EEF4:
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
	// addi r8,r10,172
	ctx.r8.s64 = ctx.r10.s64 + 172;
	// stw r9,192(r10)
	PPC_STORE_U32(ctx.r10.u32 + 192, ctx.r9.u32);
	// stw r11,188(r10)
	PPC_STORE_U32(ctx.r10.u32 + 188, ctx.r11.u32);
	// lwz r7,192(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x8375ef18
	if (cr6.lt) goto loc_8375EF18;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// b 0x8375ef1c
	goto loc_8375EF1C;
loc_8375EF18:
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_8375EF1C:
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
	// addi r8,r10,208
	ctx.r8.s64 = ctx.r10.s64 + 208;
	// stw r9,228(r10)
	PPC_STORE_U32(ctx.r10.u32 + 228, ctx.r9.u32);
	// stw r11,224(r10)
	PPC_STORE_U32(ctx.r10.u32 + 224, ctx.r11.u32);
	// lwz r7,228(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 228);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x8375ef40
	if (cr6.lt) goto loc_8375EF40;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// b 0x8375ef44
	goto loc_8375EF44;
loc_8375EF40:
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_8375EF44:
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
	// addi r8,r10,252
	ctx.r8.s64 = ctx.r10.s64 + 252;
	// stw r9,272(r10)
	PPC_STORE_U32(ctx.r10.u32 + 272, ctx.r9.u32);
	// stw r11,268(r10)
	PPC_STORE_U32(ctx.r10.u32 + 268, ctx.r11.u32);
	// lwz r7,272(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 272);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x8375ef68
	if (cr6.lt) goto loc_8375EF68;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// b 0x8375ef6c
	goto loc_8375EF6C;
loc_8375EF68:
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_8375EF6C:
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
	// addi r8,r10,288
	ctx.r8.s64 = ctx.r10.s64 + 288;
	// stw r9,308(r10)
	PPC_STORE_U32(ctx.r10.u32 + 308, ctx.r9.u32);
	// stw r11,304(r10)
	PPC_STORE_U32(ctx.r10.u32 + 304, ctx.r11.u32);
	// lwz r7,308(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 308);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x8375ef90
	if (cr6.lt) goto loc_8375EF90;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// b 0x8375ef94
	goto loc_8375EF94;
loc_8375EF90:
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_8375EF94:
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
	// addi r8,r10,332
	ctx.r8.s64 = ctx.r10.s64 + 332;
	// stw r9,352(r10)
	PPC_STORE_U32(ctx.r10.u32 + 352, ctx.r9.u32);
	// stw r11,348(r10)
	PPC_STORE_U32(ctx.r10.u32 + 348, ctx.r11.u32);
	// lwz r7,352(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 352);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x8375efb8
	if (cr6.lt) goto loc_8375EFB8;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// b 0x8375efbc
	goto loc_8375EFBC;
loc_8375EFB8:
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_8375EFBC:
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
	// addi r8,r10,368
	ctx.r8.s64 = ctx.r10.s64 + 368;
	// stw r9,388(r10)
	PPC_STORE_U32(ctx.r10.u32 + 388, ctx.r9.u32);
	// stw r11,384(r10)
	PPC_STORE_U32(ctx.r10.u32 + 384, ctx.r11.u32);
	// lwz r7,388(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 388);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x8375efe0
	if (cr6.lt) goto loc_8375EFE0;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// b 0x8375efe4
	goto loc_8375EFE4;
loc_8375EFE0:
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_8375EFE4:
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
	// addi r8,r10,412
	ctx.r8.s64 = ctx.r10.s64 + 412;
	// stw r9,432(r10)
	PPC_STORE_U32(ctx.r10.u32 + 432, ctx.r9.u32);
	// stw r11,428(r10)
	PPC_STORE_U32(ctx.r10.u32 + 428, ctx.r11.u32);
	// lwz r7,432(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 432);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x8375f004
	if (cr6.lt) goto loc_8375F004;
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_8375F004:
	// addi r10,r10,448
	ctx.r10.s64 = ctx.r10.s64 + 448;
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x8375f024
	if (cr6.lt) goto loc_8375F024;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_8375F024:
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stw r9,528(r3)
	PPC_STORE_U32(ctx.r3.u32 + 528, ctx.r9.u32);
	// stw r11,524(r3)
	PPC_STORE_U32(ctx.r3.u32 + 524, ctx.r11.u32);
	// stb r11,508(r3)
	PPC_STORE_U8(ctx.r3.u32 + 508, ctx.r11.u8);
	// stw r9,556(r3)
	PPC_STORE_U32(ctx.r3.u32 + 556, ctx.r9.u32);
	// stw r11,552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 552, ctx.r11.u32);
	// stb r11,536(r3)
	PPC_STORE_U8(ctx.r3.u32 + 536, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8375F044"))) PPC_WEAK_FUNC(sub_8375F044);
PPC_FUNC_IMPL(__imp__sub_8375F044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8375F048"))) PPC_WEAK_FUNC(sub_8375F048);
PPC_FUNC_IMPL(__imp__sub_8375F048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8375F050;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// li r10,13
	ctx.r10.s64 = 13;
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r29.u32);
	// addi r11,r3,196
	ctx.r11.s64 = ctx.r3.s64 + 196;
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r30.u32);
	// stb r30,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r30.u8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stw r29,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r29.u32);
	// stw r30,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r30.u32);
	// stb r30,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, ctx.r30.u8);
	// stw r29,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r29.u32);
	// stw r30,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r30.u32);
	// stb r30,84(r3)
	PPC_STORE_U8(ctx.r3.u32 + 84, ctx.r30.u8);
	// stw r29,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r29.u32);
	// stw r30,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r30.u32);
	// stb r30,112(r3)
	PPC_STORE_U8(ctx.r3.u32 + 112, ctx.r30.u8);
	// stw r29,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r29.u32);
	// stw r30,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r30.u32);
	// stb r30,140(r3)
	PPC_STORE_U8(ctx.r3.u32 + 140, ctx.r30.u8);
	// stw r29,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r29.u32);
	// stw r30,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r30.u32);
	// stb r30,168(r3)
	PPC_STORE_U8(ctx.r3.u32 + 168, ctx.r30.u8);
	// stw r29,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r29.u32);
	// stw r30,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r30.u32);
	// stb r30,196(r3)
	PPC_STORE_U8(ctx.r3.u32 + 196, ctx.r30.u8);
loc_8375F0D0:
	// stw r29,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r29.u32);
	// stw r30,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r30.u32);
	// stbu r30,28(r11)
	ea = 28 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r30.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8375f0d0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8375F0D0;
	// stw r29,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r29.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r30,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r30.u32);
	// addi r10,r31,588
	ctx.r10.s64 = ctx.r31.s64 + 588;
	// stb r30,588(r31)
	PPC_STORE_U8(ctx.r31.u32 + 588, ctx.r30.u8);
	// stw r29,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r29.u32);
	// stw r30,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r30.u32);
	// stb r30,616(r31)
	PPC_STORE_U8(ctx.r31.u32 + 616, ctx.r30.u8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// stw r29,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r29.u32);
	// addi r11,r31,700
	ctx.r11.s64 = ctx.r31.s64 + 700;
	// stw r30,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r30.u32);
	// stb r30,644(r31)
	PPC_STORE_U8(ctx.r31.u32 + 644, ctx.r30.u8);
	// stw r29,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r29.u32);
	// stw r30,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r30.u32);
	// stb r30,672(r31)
	PPC_STORE_U8(ctx.r31.u32 + 672, ctx.r30.u8);
loc_8375F120:
	// stw r29,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r29.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// stw r29,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r29.u32);
	// stw r30,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r30.u32);
	// stb r30,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r30.u8);
	// stw r29,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r29.u32);
	// stw r30,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r30.u32);
	// stb r30,56(r11)
	PPC_STORE_U8(ctx.r11.u32 + 56, ctx.r30.u8);
	// stw r29,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r29.u32);
	// stw r30,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r30.u32);
	// stb r30,84(r11)
	PPC_STORE_U8(ctx.r11.u32 + 84, ctx.r30.u8);
	// stw r29,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r29.u32);
	// stw r30,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r30.u32);
	// stb r30,112(r11)
	PPC_STORE_U8(ctx.r11.u32 + 112, ctx.r30.u8);
	// stw r29,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r29.u32);
	// stw r30,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r30.u32);
	// stb r30,140(r11)
	PPC_STORE_U8(ctx.r11.u32 + 140, ctx.r30.u8);
	// addi r11,r11,168
	ctx.r11.s64 = ctx.r11.s64 + 168;
	// bdnz 0x8375f120
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8375F120;
	// addi r27,r31,1716
	ctx.r27.s64 = ctx.r31.s64 + 1716;
	// li r28,27
	ctx.r28.s64 = 27;
loc_8375F178:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8375ee78
	ctx.lr = 0x8375F180;
	sub_8375EE78(ctx, base);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r27,r27,568
	ctx.r27.s64 = ctx.r27.s64 + 568;
	// bge 0x8375f178
	if (!cr0.lt) goto loc_8375F178;
	// stw r29,17640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17640, ctx.r29.u32);
	// addi r11,r31,17620
	ctx.r11.s64 = ctx.r31.s64 + 17620;
	// stw r30,17636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17636, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,17620(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17620, ctx.r30.u8);
	// stw r29,17668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17668, ctx.r29.u32);
	// stw r30,17664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17664, ctx.r30.u32);
	// stb r30,17648(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17648, ctx.r30.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8375F1B4"))) PPC_WEAK_FUNC(sub_8375F1B4);
PPC_FUNC_IMPL(__imp__sub_8375F1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8375F1B8"))) PPC_WEAK_FUNC(sub_8375F1B8);
PPC_FUNC_IMPL(__imp__sub_8375F1B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x8375F1C0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r31,r11,-20488
	ctx.r31.s64 = ctx.r11.s64 + -20488;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r31,-400
	ctx.r4.s64 = ctx.r31.s64 + -400;
	// bl 0x82535898
	ctx.lr = 0x8375F1E0;
	sub_82535898(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82535890
	ctx.lr = 0x8375F1E8;
	sub_82535890(ctx, base);
	// addi r4,r31,-388
	ctx.r4.s64 = ctx.r31.s64 + -388;
	// bl 0x82535898
	ctx.lr = 0x8375F1F0;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x8375F1F4;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8375F1FC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8375f1fc
	if (!cr6.eq) goto loc_8375F1FC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r24,4
	ctx.r3.s64 = ctx.r24.s64 + 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8375F220;
	sub_8259CC28(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r24,32
	ctx.r29.s64 = ctx.r24.s64 + 32;
loc_8375F228:
	// addi r4,r31,-380
	ctx.r4.s64 = ctx.r31.s64 + -380;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x8375F234;
	sub_82535898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82535890
	ctx.lr = 0x8375F23C;
	sub_82535890(ctx, base);
	// addi r4,r31,-368
	ctx.r4.s64 = ctx.r31.s64 + -368;
	// bl 0x82535898
	ctx.lr = 0x8375F244;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x8375F248;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8375F250:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8375f250
	if (!cr6.eq) goto loc_8375F250;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8375F274;
	sub_8259CC28(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// cmpwi cr6,r30,7
	cr6.compare<int32_t>(ctx.r30.s32, 7, xer);
	// blt cr6,0x8375f228
	if (cr6.lt) goto loc_8375F228;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r24,228
	ctx.r29.s64 = ctx.r24.s64 + 228;
loc_8375F28C:
	// addi r4,r31,-360
	ctx.r4.s64 = ctx.r31.s64 + -360;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x8375F298;
	sub_82535898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82535890
	ctx.lr = 0x8375F2A0;
	sub_82535890(ctx, base);
	// addi r4,r31,-348
	ctx.r4.s64 = ctx.r31.s64 + -348;
	// bl 0x82535898
	ctx.lr = 0x8375F2A8;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x8375F2AC;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8375F2B4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8375f2b4
	if (!cr6.eq) goto loc_8375F2B4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8375F2D8;
	sub_8259CC28(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// cmpwi cr6,r30,13
	cr6.compare<int32_t>(ctx.r30.s32, 13, xer);
	// blt cr6,0x8375f28c
	if (cr6.lt) goto loc_8375F28C;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r24,592
	ctx.r29.s64 = ctx.r24.s64 + 592;
loc_8375F2F0:
	// addi r4,r31,-340
	ctx.r4.s64 = ctx.r31.s64 + -340;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x8375F2FC;
	sub_82535898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82535890
	ctx.lr = 0x8375F304;
	sub_82535890(ctx, base);
	// addi r4,r31,-328
	ctx.r4.s64 = ctx.r31.s64 + -328;
	// bl 0x82535898
	ctx.lr = 0x8375F30C;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x8375F310;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8375F318:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8375f318
	if (!cr6.eq) goto loc_8375F318;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8375F33C;
	sub_8259CC28(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(ctx.r30.s32, 4, xer);
	// blt cr6,0x8375f2f0
	if (cr6.lt) goto loc_8375F2F0;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r24,704
	ctx.r29.s64 = ctx.r24.s64 + 704;
loc_8375F354:
	// addi r4,r31,-320
	ctx.r4.s64 = ctx.r31.s64 + -320;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x8375F360;
	sub_82535898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82535890
	ctx.lr = 0x8375F368;
	sub_82535890(ctx, base);
	// addi r4,r31,-308
	ctx.r4.s64 = ctx.r31.s64 + -308;
	// bl 0x82535898
	ctx.lr = 0x8375F370;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x8375F374;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8375F37C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8375f37c
	if (!cr6.eq) goto loc_8375F37C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8375F3A0;
	sub_8259CC28(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// cmpwi cr6,r30,36
	cr6.compare<int32_t>(ctx.r30.s32, 36, xer);
	// blt cr6,0x8375f354
	if (cr6.lt) goto loc_8375F354;
	// addi r4,r31,-300
	ctx.r4.s64 = ctx.r31.s64 + -300;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x8375F3BC;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375F3C0;
	sub_82534770(ctx, base);
	// stw r3,1712(r24)
	PPC_STORE_U32(ctx.r24.u32 + 1712, ctx.r3.u32);
	// addi r4,r31,-292
	ctx.r4.s64 = ctx.r31.s64 + -292;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x8375F3D0;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375F3D4;
	sub_82534770(ctx, base);
	// stw r3,1716(r24)
	PPC_STORE_U32(ctx.r24.u32 + 1716, ctx.r3.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r23,r24,2228
	ctx.r23.s64 = ctx.r24.s64 + 2228;
	// subfic r22,r24,-2228
	xer.ca = ctx.r24.u32 <= 4294965068;
	ctx.r22.s64 = -2228 - ctx.r24.s64;
loc_8375F3E4:
	// addi r4,r31,-280
	ctx.r4.s64 = ctx.r31.s64 + -280;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x8375F3F0;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x8375F3F8;
	sub_82535890(ctx, base);
	// addi r4,r31,-272
	ctx.r4.s64 = ctx.r31.s64 + -272;
	// bl 0x82535898
	ctx.lr = 0x8375F400;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x8375F404;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8375F40C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8375f40c
	if (!cr6.eq) goto loc_8375F40C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r23,-508
	ctx.r3.s64 = ctx.r23.s64 + -508;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8375F430;
	sub_8259CC28(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// add r25,r22,r23
	ctx.r25.u64 = ctx.r22.u64 + ctx.r23.u64;
	// li r26,0
	ctx.r26.s64 = 0;
loc_8375F43C:
	// add r11,r26,r25
	ctx.r11.u64 = ctx.r26.u64 + ctx.r25.u64;
	// addi r4,r31,-260
	ctx.r4.s64 = ctx.r31.s64 + -260;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r27,r11,r24
	ctx.r27.u64 = ctx.r11.u64 + ctx.r24.u64;
	// bl 0x82535898
	ctx.lr = 0x8375F450;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x8375F458;
	sub_82535890(ctx, base);
	// addi r4,r31,-252
	ctx.r4.s64 = ctx.r31.s64 + -252;
	// bl 0x82535898
	ctx.lr = 0x8375F460;
	sub_82535898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82535890
	ctx.lr = 0x8375F468;
	sub_82535890(ctx, base);
	// addi r4,r31,-244
	ctx.r4.s64 = ctx.r31.s64 + -244;
	// bl 0x82535898
	ctx.lr = 0x8375F470;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375F474;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,1748(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 1748, temp.u32);
	// addi r4,r31,-232
	ctx.r4.s64 = ctx.r31.s64 + -232;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x8375F488;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x8375F490;
	sub_82535890(ctx, base);
	// addi r4,r31,-224
	ctx.r4.s64 = ctx.r31.s64 + -224;
	// bl 0x82535898
	ctx.lr = 0x8375F498;
	sub_82535898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82535890
	ctx.lr = 0x8375F4A0;
	sub_82535890(ctx, base);
	// addi r4,r31,-216
	ctx.r4.s64 = ctx.r31.s64 + -216;
	// bl 0x82535898
	ctx.lr = 0x8375F4A8;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375F4AC;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,1752(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 1752, temp.u32);
	// addi r4,r31,-208
	ctx.r4.s64 = ctx.r31.s64 + -208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x8375F4C0;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x8375F4C8;
	sub_82535890(ctx, base);
	// addi r4,r31,-200
	ctx.r4.s64 = ctx.r31.s64 + -200;
	// bl 0x82535898
	ctx.lr = 0x8375F4D0;
	sub_82535898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82535890
	ctx.lr = 0x8375F4D8;
	sub_82535890(ctx, base);
	// addi r4,r31,-192
	ctx.r4.s64 = ctx.r31.s64 + -192;
	// bl 0x82535898
	ctx.lr = 0x8375F4E0;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375F4E4;
	sub_82534928(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,1756(r27)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r27.u32 + 1756, temp.u32);
	// addi r4,r31,-184
	ctx.r4.s64 = ctx.r31.s64 + -184;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x8375F4F8;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x8375F500;
	sub_82535890(ctx, base);
	// addi r4,r31,-176
	ctx.r4.s64 = ctx.r31.s64 + -176;
	// bl 0x82535898
	ctx.lr = 0x8375F508;
	sub_82535898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82535890
	ctx.lr = 0x8375F510;
	sub_82535890(ctx, base);
	// addi r4,r31,-168
	ctx.r4.s64 = ctx.r31.s64 + -168;
	// bl 0x82535898
	ctx.lr = 0x8375F518;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x8375F51C;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8375F524:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8375f524
	if (!cr6.eq) goto loc_8375F524;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// add r10,r26,r25
	ctx.r10.u64 = ctx.r26.u64 + ctx.r25.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// add r11,r10,r24
	ctx.r11.u64 = ctx.r10.u64 + ctx.r24.u64;
	// rotlwi r5,r9,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r3,r11,1760
	ctx.r3.s64 = ctx.r11.s64 + 1760;
	// bl 0x8259cc28
	ctx.lr = 0x8375F550;
	sub_8259CC28(ctx, base);
	// addi r4,r31,-160
	ctx.r4.s64 = ctx.r31.s64 + -160;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x8375F55C;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x8375F564;
	sub_82535890(ctx, base);
	// addi r4,r31,-152
	ctx.r4.s64 = ctx.r31.s64 + -152;
	// bl 0x82535898
	ctx.lr = 0x8375F56C;
	sub_82535898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82535890
	ctx.lr = 0x8375F574;
	sub_82535890(ctx, base);
	// addi r4,r31,-144
	ctx.r4.s64 = ctx.r31.s64 + -144;
	// bl 0x82535898
	ctx.lr = 0x8375F57C;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8375F580;
	sub_82534770(ctx, base);
	// stw r3,1788(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1788, ctx.r3.u32);
	// addi r4,r31,-136
	ctx.r4.s64 = ctx.r31.s64 + -136;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x8375F590;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x8375F598;
	sub_82535890(ctx, base);
	// addi r4,r31,-128
	ctx.r4.s64 = ctx.r31.s64 + -128;
	// bl 0x82535898
	ctx.lr = 0x8375F5A0;
	sub_82535898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82535890
	ctx.lr = 0x8375F5A8;
	sub_82535890(ctx, base);
	// addi r4,r31,-120
	ctx.r4.s64 = ctx.r31.s64 + -120;
	// bl 0x82535898
	ctx.lr = 0x8375F5B0;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375F5B4;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,1792(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 1792, temp.u32);
	// addi r4,r31,-108
	ctx.r4.s64 = ctx.r31.s64 + -108;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x8375F5C8;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x8375F5D0;
	sub_82535890(ctx, base);
	// addi r4,r31,-100
	ctx.r4.s64 = ctx.r31.s64 + -100;
	// bl 0x82535898
	ctx.lr = 0x8375F5D8;
	sub_82535898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82535890
	ctx.lr = 0x8375F5E0;
	sub_82535890(ctx, base);
	// addi r4,r31,-92
	ctx.r4.s64 = ctx.r31.s64 + -92;
	// bl 0x82535898
	ctx.lr = 0x8375F5E8;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x8375F5EC;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8375F5F4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8375f5f4
	if (!cr6.eq) goto loc_8375F5F4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r27,1796
	ctx.r3.s64 = ctx.r27.s64 + 1796;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8375F618;
	sub_8259CC28(ctx, base);
	// addi r4,r31,-84
	ctx.r4.s64 = ctx.r31.s64 + -84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x8375F624;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x8375F62C;
	sub_82535890(ctx, base);
	// addi r4,r31,-76
	ctx.r4.s64 = ctx.r31.s64 + -76;
	// bl 0x82535898
	ctx.lr = 0x8375F634;
	sub_82535898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82535890
	ctx.lr = 0x8375F63C;
	sub_82535890(ctx, base);
	// addi r4,r31,-68
	ctx.r4.s64 = ctx.r31.s64 + -68;
	// bl 0x82535898
	ctx.lr = 0x8375F644;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375F648;
	sub_82534928(ctx, base);
	// addi r26,r26,80
	ctx.r26.s64 = ctx.r26.s64 + 80;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,1824(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 1824, temp.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r26,480
	cr6.compare<int32_t>(ctx.r26.s32, 480, xer);
	// blt cr6,0x8375f43c
	if (cr6.lt) goto loc_8375F43C;
	// addi r4,r31,-64
	ctx.r4.s64 = ctx.r31.s64 + -64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x8375F66C;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x8375F674;
	sub_82535890(ctx, base);
	// addi r4,r31,-56
	ctx.r4.s64 = ctx.r31.s64 + -56;
	// bl 0x82535898
	ctx.lr = 0x8375F67C;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x8375F680;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8375F688:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8375f688
	if (!cr6.eq) goto loc_8375F688;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8375F6AC;
	sub_8259CC28(ctx, base);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x8375F6B8;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x8375F6C0;
	sub_82535890(ctx, base);
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// bl 0x82535898
	ctx.lr = 0x8375F6C8;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x8375F6CC;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8375F6D4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8375f6d4
	if (!cr6.eq) goto loc_8375F6D4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r23,28
	ctx.r3.s64 = ctx.r23.s64 + 28;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8375F6F8;
	sub_8259CC28(ctx, base);
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x8375F704;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x8375F70C;
	sub_82535890(ctx, base);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// bl 0x82535898
	ctx.lr = 0x8375F714;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8375F718;
	sub_82534B10(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stb r3,56(r23)
	PPC_STORE_U8(ctx.r23.u32 + 56, ctx.r3.u8);
	// addi r23,r23,568
	ctx.r23.s64 = ctx.r23.s64 + 568;
	// cmpwi cr6,r29,28
	cr6.compare<int32_t>(ctx.r29.s32, 28, xer);
	// blt cr6,0x8375f3e4
	if (cr6.lt) goto loc_8375F3E4;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r24,17624
	ctx.r29.s64 = ctx.r24.s64 + 17624;
loc_8375F734:
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x8375F740;
	sub_82535898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82535890
	ctx.lr = 0x8375F748;
	sub_82535890(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x8375F750;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x8375F754;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8375F75C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8375f75c
	if (!cr6.eq) goto loc_8375F75C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8375F780;
	sub_8259CC28(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// blt cr6,0x8375f734
	if (cr6.lt) goto loc_8375F734;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8375F79C"))) PPC_WEAK_FUNC(sub_8375F79C);
PPC_FUNC_IMPL(__imp__sub_8375F79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8375F7A0"))) PPC_WEAK_FUNC(sub_8375F7A0);
PPC_FUNC_IMPL(__imp__sub_8375F7A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x8375F7A8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8375f7c8
	if (!cr6.eq) goto loc_8375F7C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_8375F7C8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x83763830
	ctx.lr = 0x8375F7D4;
	sub_83763830(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83763830
	ctx.lr = 0x8375F7E0;
	sub_83763830(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8375F7E8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8375f7e8
	if (!cr6.eq) goto loc_8375F7E8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r24,4
	ctx.r3.s64 = ctx.r24.s64 + 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8375F80C;
	sub_8259CC28(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x83763830
	ctx.lr = 0x8375F818;
	sub_83763830(ctx, base);
	// addi r30,r24,32
	ctx.r30.s64 = ctx.r24.s64 + 32;
	// addi r29,r3,-4
	ctx.r29.s64 = ctx.r3.s64 + -4;
	// li r31,7
	ctx.r31.s64 = 7;
loc_8375F824:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// bl 0x83763830
	ctx.lr = 0x8375F830;
	sub_83763830(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8375F838:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8375f838
	if (!cr6.eq) goto loc_8375F838;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8375F85C;
	sub_8259CC28(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// bne 0x8375f824
	if (!cr0.eq) goto loc_8375F824;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x83763830
	ctx.lr = 0x8375F874;
	sub_83763830(ctx, base);
	// addi r30,r24,228
	ctx.r30.s64 = ctx.r24.s64 + 228;
	// addi r29,r3,-4
	ctx.r29.s64 = ctx.r3.s64 + -4;
	// li r31,13
	ctx.r31.s64 = 13;
loc_8375F880:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// bl 0x83763830
	ctx.lr = 0x8375F88C;
	sub_83763830(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8375F894:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8375f894
	if (!cr6.eq) goto loc_8375F894;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8375F8B8;
	sub_8259CC28(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// bne 0x8375f880
	if (!cr0.eq) goto loc_8375F880;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x83763830
	ctx.lr = 0x8375F8D0;
	sub_83763830(ctx, base);
	// addi r30,r24,592
	ctx.r30.s64 = ctx.r24.s64 + 592;
	// addi r29,r3,-4
	ctx.r29.s64 = ctx.r3.s64 + -4;
	// li r31,4
	ctx.r31.s64 = 4;
loc_8375F8DC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// bl 0x83763830
	ctx.lr = 0x8375F8E8;
	sub_83763830(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8375F8F0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8375f8f0
	if (!cr6.eq) goto loc_8375F8F0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8375F914;
	sub_8259CC28(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// bne 0x8375f8dc
	if (!cr0.eq) goto loc_8375F8DC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// bl 0x83763830
	ctx.lr = 0x8375F92C;
	sub_83763830(ctx, base);
	// addi r30,r24,704
	ctx.r30.s64 = ctx.r24.s64 + 704;
	// addi r29,r3,-4
	ctx.r29.s64 = ctx.r3.s64 + -4;
	// li r31,36
	ctx.r31.s64 = 36;
loc_8375F938:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// bl 0x83763830
	ctx.lr = 0x8375F944;
	sub_83763830(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8375F94C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8375f94c
	if (!cr6.eq) goto loc_8375F94C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8375F970;
	sub_8259CC28(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// bne 0x8375f938
	if (!cr0.eq) goto loc_8375F938;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,1712(r24)
	PPC_STORE_U32(ctx.r24.u32 + 1712, ctx.r11.u32);
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// stw r10,1716(r24)
	PPC_STORE_U32(ctx.r24.u32 + 1716, ctx.r10.u32);
	// lwz r3,28(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// bl 0x83763830
	ctx.lr = 0x8375F998;
	sub_83763830(ctx, base);
	// addi r26,r24,2228
	ctx.r26.s64 = ctx.r24.s64 + 2228;
	// addi r25,r3,-4
	ctx.r25.s64 = ctx.r3.s64 + -4;
	// subfic r22,r24,-2228
	xer.ca = ctx.r24.u32 <= 4294965068;
	ctx.r22.s64 = -2228 - ctx.r24.s64;
	// li r23,28
	ctx.r23.s64 = 28;
loc_8375F9A8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// bl 0x83763830
	ctx.lr = 0x8375F9B4;
	sub_83763830(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8375F9BC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8375f9bc
	if (!cr6.eq) goto loc_8375F9BC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r26,-508
	ctx.r3.s64 = ctx.r26.s64 + -508;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8375F9E0;
	sub_8259CC28(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,8(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// bl 0x83763830
	ctx.lr = 0x8375F9EC;
	sub_83763830(ctx, base);
	// add r27,r22,r26
	ctx.r27.u64 = ctx.r22.u64 + ctx.r26.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r3,-4
	ctx.r31.s64 = ctx.r3.s64 + -4;
loc_8375F9F8:
	// add r11,r27,r29
	ctx.r11.u64 = ctx.r27.u64 + ctx.r29.u64;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r30,r11,r24
	ctx.r30.u64 = ctx.r11.u64 + ctx.r24.u64;
	// stfs f0,1748(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1748, temp.u32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1752(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1752, temp.u32);
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1756(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1756, temp.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x83763830
	ctx.lr = 0x8375FA24;
	sub_83763830(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8375FA2C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8375fa2c
	if (!cr6.eq) goto loc_8375FA2C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// add r10,r27,r29
	ctx.r10.u64 = ctx.r27.u64 + ctx.r29.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// add r11,r10,r24
	ctx.r11.u64 = ctx.r10.u64 + ctx.r24.u64;
	// rotlwi r5,r9,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r3,r11,1760
	ctx.r3.s64 = ctx.r11.s64 + 1760;
	// bl 0x8259cc28
	ctx.lr = 0x8375FA58;
	sub_8259CC28(ctx, base);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,1788(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1788, ctx.r8.u32);
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1792(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1792, temp.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x83763830
	ctx.lr = 0x8375FA74;
	sub_83763830(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8375FA7C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8375fa7c
	if (!cr6.eq) goto loc_8375FA7C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r30,1796
	ctx.r3.s64 = ctx.r30.s64 + 1796;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8375FAA0;
	sub_8259CC28(ctx, base);
	// addi r29,r29,80
	ctx.r29.s64 = ctx.r29.s64 + 80;
	// lfsu f0,32(r31)
	ctx.fpscr.disableFlushMode();
	ea = 32 + ctx.r31.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r31.u32 = ea;
	// stfs f0,1824(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1824, temp.u32);
	// cmpwi cr6,r29,480
	cr6.compare<int32_t>(ctx.r29.s32, 480, xer);
	// blt cr6,0x8375f9f8
	if (cr6.lt) goto loc_8375F9F8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,12(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// bl 0x83763830
	ctx.lr = 0x8375FAC0;
	sub_83763830(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8375FAC8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8375fac8
	if (!cr6.eq) goto loc_8375FAC8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8375FAEC;
	sub_8259CC28(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,16(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// bl 0x83763830
	ctx.lr = 0x8375FAF8;
	sub_83763830(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8375FB00:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8375fb00
	if (!cr6.eq) goto loc_8375FB00;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8375FB24;
	sub_8259CC28(ctx, base);
	// lbzu r11,20(r25)
	ea = 20 + ctx.r25.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r25.u32 = ea;
	// addic. r23,r23,-1
	xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	cr0.compare<int32_t>(ctx.r23.s32, 0, xer);
	// stb r11,56(r26)
	PPC_STORE_U8(ctx.r26.u32 + 56, ctx.r11.u8);
	// addi r26,r26,568
	ctx.r26.s64 = ctx.r26.s64 + 568;
	// bne 0x8375f9a8
	if (!cr0.eq) goto loc_8375F9A8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,32(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// bl 0x83763830
	ctx.lr = 0x8375FB44;
	sub_83763830(ctx, base);
	// addi r30,r24,17624
	ctx.r30.s64 = ctx.r24.s64 + 17624;
	// addi r29,r3,-4
	ctx.r29.s64 = ctx.r3.s64 + -4;
	// li r31,2
	ctx.r31.s64 = 2;
loc_8375FB50:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// bl 0x83763830
	ctx.lr = 0x8375FB5C;
	sub_83763830(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8375FB64:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8375fb64
	if (!cr6.eq) goto loc_8375FB64;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8375FB88;
	sub_8259CC28(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// bne 0x8375fb50
	if (!cr0.eq) goto loc_8375FB50;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8375FBA0"))) PPC_WEAK_FUNC(sub_8375FBA0);
PPC_FUNC_IMPL(__imp__sub_8375FBA0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,-5184
	ctx.r10.s64 = ctx.r11.s64 + -5184;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8375f048
	ctx.lr = 0x8375FBC8;
	sub_8375F048(ctx, base);
	// li r9,28
	ctx.r9.s64 = 28;
	// lis r8,-32213
	ctx.r8.s64 = -2111111168;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-20396
	ctx.r7.s64 = ctx.r8.s64 + -20396;
	// stw r10,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r10.u32);
	// addi r11,r31,1716
	ctx.r11.s64 = ctx.r31.s64 + 1716;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stw r10,1716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1716, ctx.r10.u32);
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
loc_8375FBF4:
	// stfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stw r10,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r10.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stw r10,232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 232, ctx.r10.u32);
	// stfs f0,76(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// stw r10,312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 312, ctx.r10.u32);
	// stfs f0,108(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// stw r10,392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 392, ctx.r10.u32);
	// stfs f0,112(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// stw r10,472(r11)
	PPC_STORE_U32(ctx.r11.u32 + 472, ctx.r10.u32);
	// stfs f0,116(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// stfs f0,120(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// stfs f0,156(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 156, temp.u32);
	// stfs f0,188(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 188, temp.u32);
	// stfs f0,192(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 192, temp.u32);
	// stfs f0,196(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 196, temp.u32);
	// stfs f0,200(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 200, temp.u32);
	// stfs f0,236(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 236, temp.u32);
	// stfs f0,268(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 268, temp.u32);
	// stfs f0,272(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 272, temp.u32);
	// stfs f0,276(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 276, temp.u32);
	// stfs f0,280(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 280, temp.u32);
	// stfs f0,316(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 316, temp.u32);
	// stfs f0,348(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 348, temp.u32);
	// stfs f0,352(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 352, temp.u32);
	// stfs f0,356(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 356, temp.u32);
	// stfs f0,360(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 360, temp.u32);
	// stfs f0,396(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 396, temp.u32);
	// stfs f0,428(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 428, temp.u32);
	// stfs f0,432(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 432, temp.u32);
	// stfs f0,436(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 436, temp.u32);
	// stfs f0,440(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 440, temp.u32);
	// stfs f0,476(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 476, temp.u32);
	// stfs f0,508(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 508, temp.u32);
	// stbu r10,568(r11)
	ea = 568 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8375fbf4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8375FBF4;
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

__attribute__((alias("__imp__sub_8375FCA4"))) PPC_WEAK_FUNC(sub_8375FCA4);
PPC_FUNC_IMPL(__imp__sub_8375FCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8375FCA8"))) PPC_WEAK_FUNC(sub_8375FCA8);
PPC_FUNC_IMPL(__imp__sub_8375FCA8) {
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
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8375ece0
	ctx.lr = 0x8375FCCC;
	sub_8375ECE0(ctx, base);
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,-5184
	ctx.r9.s64 = ctx.r11.s64 + -5184;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8375fcf0
	if (cr6.eq) goto loc_8375FCF0;
	// bl 0x82416268
	ctx.lr = 0x8375FCEC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8375FCF0:
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

__attribute__((alias("__imp__sub_8375FD08"))) PPC_WEAK_FUNC(sub_8375FD08);
PPC_FUNC_IMPL(__imp__sub_8375FD08) {
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
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,17680
	ctx.r4.s64 = 17680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8375FD2C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8375fd48
	if (cr6.eq) goto loc_8375FD48;
	// bl 0x8375fba0
	ctx.lr = 0x8375FD38;
	sub_8375FBA0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8375FD48:
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

__attribute__((alias("__imp__sub_8375FD5C"))) PPC_WEAK_FUNC(sub_8375FD5C);
PPC_FUNC_IMPL(__imp__sub_8375FD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8375FD60"))) PPC_WEAK_FUNC(sub_8375FD60);
PPC_FUNC_IMPL(__imp__sub_8375FD60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8375FD68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-20304
	ctx.r31.s64 = ctx.r11.s64 + -20304;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// bl 0x82535898
	ctx.lr = 0x8375FD88;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375FD8C;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375FDA0;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375FDA4;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375FDB8;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375FDBC;
	sub_82534928(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,12(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8375FDD0;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8375FDD4;
	sub_82534928(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,16(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8375FDE8"))) PPC_WEAK_FUNC(sub_8375FDE8);
PPC_FUNC_IMPL(__imp__sub_8375FDE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8375fdfc
	if (!cr6.eq) goto loc_8375FDFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8375FDFC:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8375FE24"))) PPC_WEAK_FUNC(sub_8375FE24);
PPC_FUNC_IMPL(__imp__sub_8375FE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8375FE28"))) PPC_WEAK_FUNC(sub_8375FE28);
PPC_FUNC_IMPL(__imp__sub_8375FE28) {
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
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8375FE4C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8375fe88
	if (cr6.eq) goto loc_8375FE88;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32213
	ctx.r10.s64 = -2111111168;
	// addi r9,r10,-20208
	ctx.r9.s64 = ctx.r10.s64 + -20208;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
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
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8375FE88:
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

__attribute__((alias("__imp__sub_8375FE9C"))) PPC_WEAK_FUNC(sub_8375FE9C);
PPC_FUNC_IMPL(__imp__sub_8375FE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8375FEA0"))) PPC_WEAK_FUNC(sub_8375FEA0);
PPC_FUNC_IMPL(__imp__sub_8375FEA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r9,r11,-19500
	ctx.r9.s64 = ctx.r11.s64 + -19500;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8375FEC0:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8375fec0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8375FEC0;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8375FEDC:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8375fedc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8375FEDC;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,52
	ctx.r11.s64 = ctx.r3.s64 + 52;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8375FEF8:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8375fef8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8375FEF8;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,76
	ctx.r11.s64 = ctx.r3.s64 + 76;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8375FF14:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8375ff14
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8375FF14;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,100
	ctx.r11.s64 = ctx.r3.s64 + 100;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8375FF30:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8375ff30
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8375FF30;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,124
	ctx.r11.s64 = ctx.r3.s64 + 124;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8375FF4C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8375ff4c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8375FF4C;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,148
	ctx.r11.s64 = ctx.r3.s64 + 148;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8375FF68:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8375ff68
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8375FF68;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,172
	ctx.r11.s64 = ctx.r3.s64 + 172;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8375FF84:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8375ff84
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8375FF84;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,196
	ctx.r11.s64 = ctx.r3.s64 + 196;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8375FFA0:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8375ffa0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8375FFA0;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,220
	ctx.r11.s64 = ctx.r3.s64 + 220;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8375FFBC:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8375ffbc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8375FFBC;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,244
	ctx.r11.s64 = ctx.r3.s64 + 244;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8375FFD8:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8375ffd8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8375FFD8;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,268
	ctx.r11.s64 = ctx.r3.s64 + 268;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8375FFF4:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8375fff4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8375FFF4;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,292
	ctx.r11.s64 = ctx.r3.s64 + 292;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83760010:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83760010
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83760010;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,316
	ctx.r11.s64 = ctx.r3.s64 + 316;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8376002C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8376002c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8376002C;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,340
	ctx.r11.s64 = ctx.r3.s64 + 340;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83760048:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83760048
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83760048;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,364
	ctx.r11.s64 = ctx.r3.s64 + 364;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83760064:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83760064
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83760064;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,388
	ctx.r11.s64 = ctx.r3.s64 + 388;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83760080:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83760080
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83760080;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,412
	ctx.r11.s64 = ctx.r3.s64 + 412;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8376009C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8376009c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8376009C;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,436
	ctx.r11.s64 = ctx.r3.s64 + 436;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_837600B8:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x837600b8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837600B8;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,460
	ctx.r11.s64 = ctx.r3.s64 + 460;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_837600D4:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x837600d4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837600D4;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,484
	ctx.r11.s64 = ctx.r3.s64 + 484;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_837600F0:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x837600f0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837600F0;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,508
	ctx.r11.s64 = ctx.r3.s64 + 508;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8376010C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8376010c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8376010C;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,532
	ctx.r11.s64 = ctx.r3.s64 + 532;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83760128:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83760128
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83760128;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,556
	ctx.r11.s64 = ctx.r3.s64 + 556;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83760144:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83760144
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83760144;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,580
	ctx.r11.s64 = ctx.r3.s64 + 580;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83760160:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83760160
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83760160;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,604
	ctx.r11.s64 = ctx.r3.s64 + 604;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8376017C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8376017c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8376017C;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,628
	ctx.r11.s64 = ctx.r3.s64 + 628;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83760198:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83760198
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83760198;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,652
	ctx.r11.s64 = ctx.r3.s64 + 652;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_837601B4:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x837601b4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837601B4;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,676
	ctx.r11.s64 = ctx.r3.s64 + 676;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_837601D0:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x837601d0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837601D0;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,700
	ctx.r11.s64 = ctx.r3.s64 + 700;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_837601EC:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x837601ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837601EC;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,724
	ctx.r11.s64 = ctx.r3.s64 + 724;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83760208:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83760208
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83760208;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,748
	ctx.r11.s64 = ctx.r3.s64 + 748;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83760224:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83760224
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83760224;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,772
	ctx.r11.s64 = ctx.r3.s64 + 772;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83760240:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83760240
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83760240;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,796
	ctx.r11.s64 = ctx.r3.s64 + 796;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8376025C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8376025c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8376025C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83760268"))) PPC_WEAK_FUNC(sub_83760268);
PPC_FUNC_IMPL(__imp__sub_83760268) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83760270;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r11,-19600
	ctx.r30.s64 = ctx.r11.s64 + -19600;
loc_8376028C:
	// addi r4,r30,-544
	ctx.r4.s64 = ctx.r30.s64 + -544;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83760298;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x837602A0;
	sub_82535890(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837602A4;
	sub_82534770(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(ctx.r29.s32, 6, xer);
	// blt cr6,0x8376028c
	if (cr6.lt) goto loc_8376028C;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r27,24
	ctx.r28.s64 = ctx.r27.s64 + 24;
loc_837602BC:
	// addi r4,r30,-528
	ctx.r4.s64 = ctx.r30.s64 + -528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x837602C8;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x837602D0;
	sub_82535890(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837602D4;
	sub_82534770(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(ctx.r29.s32, 6, xer);
	// blt cr6,0x837602bc
	if (cr6.lt) goto loc_837602BC;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r27,48
	ctx.r28.s64 = ctx.r27.s64 + 48;
loc_837602EC:
	// addi r4,r30,-508
	ctx.r4.s64 = ctx.r30.s64 + -508;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x837602F8;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x83760300;
	sub_82535890(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83760304;
	sub_82534770(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(ctx.r29.s32, 6, xer);
	// blt cr6,0x837602ec
	if (cr6.lt) goto loc_837602EC;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r27,72
	ctx.r28.s64 = ctx.r27.s64 + 72;
loc_8376031C:
	// addi r4,r30,-488
	ctx.r4.s64 = ctx.r30.s64 + -488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83760328;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x83760330;
	sub_82535890(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83760334;
	sub_82534770(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(ctx.r29.s32, 6, xer);
	// blt cr6,0x8376031c
	if (cr6.lt) goto loc_8376031C;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r27,96
	ctx.r28.s64 = ctx.r27.s64 + 96;
loc_8376034C:
	// addi r4,r30,-464
	ctx.r4.s64 = ctx.r30.s64 + -464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83760358;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x83760360;
	sub_82535890(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83760364;
	sub_82534770(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(ctx.r29.s32, 6, xer);
	// blt cr6,0x8376034c
	if (cr6.lt) goto loc_8376034C;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r27,120
	ctx.r28.s64 = ctx.r27.s64 + 120;
loc_8376037C:
	// addi r4,r30,-444
	ctx.r4.s64 = ctx.r30.s64 + -444;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83760388;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x83760390;
	sub_82535890(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83760394;
	sub_82534770(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(ctx.r29.s32, 6, xer);
	// blt cr6,0x8376037c
	if (cr6.lt) goto loc_8376037C;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r27,144
	ctx.r28.s64 = ctx.r27.s64 + 144;
loc_837603AC:
	// addi r4,r30,-424
	ctx.r4.s64 = ctx.r30.s64 + -424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x837603B8;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x837603C0;
	sub_82535890(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837603C4;
	sub_82534770(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(ctx.r29.s32, 6, xer);
	// blt cr6,0x837603ac
	if (cr6.lt) goto loc_837603AC;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r27,168
	ctx.r28.s64 = ctx.r27.s64 + 168;
loc_837603DC:
	// addi r4,r30,-408
	ctx.r4.s64 = ctx.r30.s64 + -408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x837603E8;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x837603F0;
	sub_82535890(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837603F4;
	sub_82534770(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(ctx.r29.s32, 6, xer);
	// blt cr6,0x837603dc
	if (cr6.lt) goto loc_837603DC;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r27,192
	ctx.r28.s64 = ctx.r27.s64 + 192;
loc_8376040C:
	// addi r4,r30,-400
	ctx.r4.s64 = ctx.r30.s64 + -400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83760418;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x83760420;
	sub_82535890(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83760424;
	sub_82534770(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(ctx.r29.s32, 6, xer);
	// blt cr6,0x8376040c
	if (cr6.lt) goto loc_8376040C;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r27,216
	ctx.r28.s64 = ctx.r27.s64 + 216;
loc_8376043C:
	// addi r4,r30,-380
	ctx.r4.s64 = ctx.r30.s64 + -380;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83760448;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x83760450;
	sub_82535890(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83760454;
	sub_82534770(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(ctx.r29.s32, 6, xer);
	// blt cr6,0x8376043c
	if (cr6.lt) goto loc_8376043C;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r27,240
	ctx.r28.s64 = ctx.r27.s64 + 240;
loc_8376046C:
	// addi r4,r30,-364
	ctx.r4.s64 = ctx.r30.s64 + -364;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83760478;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x83760480;
	sub_82535890(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83760484;
	sub_82534770(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(ctx.r29.s32, 6, xer);
	// blt cr6,0x8376046c
	if (cr6.lt) goto loc_8376046C;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r27,264
	ctx.r28.s64 = ctx.r27.s64 + 264;
loc_8376049C:
	// addi r4,r30,-348
	ctx.r4.s64 = ctx.r30.s64 + -348;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x837604A8;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x837604B0;
	sub_82535890(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837604B4;
	sub_82534770(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(ctx.r29.s32, 6, xer);
	// blt cr6,0x8376049c
	if (cr6.lt) goto loc_8376049C;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r27,288
	ctx.r28.s64 = ctx.r27.s64 + 288;
loc_837604CC:
	// addi r4,r30,-332
	ctx.r4.s64 = ctx.r30.s64 + -332;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x837604D8;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x837604E0;
	sub_82535890(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837604E4;
	sub_82534770(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(ctx.r29.s32, 6, xer);
	// blt cr6,0x837604cc
	if (cr6.lt) goto loc_837604CC;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r27,312
	ctx.r28.s64 = ctx.r27.s64 + 312;
loc_837604FC:
	// addi r4,r30,-312
	ctx.r4.s64 = ctx.r30.s64 + -312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83760508;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x83760510;
	sub_82535890(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83760514;
	sub_82534770(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(ctx.r29.s32, 6, xer);
	// blt cr6,0x837604fc
	if (cr6.lt) goto loc_837604FC;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r27,336
	ctx.r28.s64 = ctx.r27.s64 + 336;
loc_8376052C:
	// addi r4,r30,-300
	ctx.r4.s64 = ctx.r30.s64 + -300;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83760538;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x83760540;
	sub_82535890(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83760544;
	sub_82534770(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(ctx.r29.s32, 6, xer);
	// blt cr6,0x8376052c
	if (cr6.lt) goto loc_8376052C;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r27,360
	ctx.r28.s64 = ctx.r27.s64 + 360;
loc_8376055C:
	// addi r4,r30,-292
	ctx.r4.s64 = ctx.r30.s64 + -292;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83760568;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x83760570;
	sub_82535890(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83760574;
	sub_82534928(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfsu f0,4(r28)
	ea = 4 + ctx.r28.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r28.u32 = ea;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(ctx.r29.s32, 6, xer);
	// blt cr6,0x8376055c
	if (cr6.lt) goto loc_8376055C;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r27,384
	ctx.r28.s64 = ctx.r27.s64 + 384;
loc_83760590:
	// addi r4,r30,-276
	ctx.r4.s64 = ctx.r30.s64 + -276;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x8376059C;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x837605A4;
	sub_82535890(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837605A8;
	sub_82534770(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(ctx.r29.s32, 6, xer);
	// blt cr6,0x83760590
	if (cr6.lt) goto loc_83760590;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r27,408
	ctx.r28.s64 = ctx.r27.s64 + 408;
loc_837605C0:
	// addi r4,r30,-264
	ctx.r4.s64 = ctx.r30.s64 + -264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x837605CC;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x837605D4;
	sub_82535890(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837605D8;
	sub_82534770(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(ctx.r29.s32, 6, xer);
	// blt cr6,0x837605c0
	if (cr6.lt) goto loc_837605C0;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r27,432
	ctx.r28.s64 = ctx.r27.s64 + 432;
loc_837605F0:
	// addi r4,r30,-236
	ctx.r4.s64 = ctx.r30.s64 + -236;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x837605FC;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x83760604;
	sub_82535890(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83760608;
	sub_82534770(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(ctx.r29.s32, 6, xer);
	// blt cr6,0x837605f0
	if (cr6.lt) goto loc_837605F0;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r27,456
	ctx.r28.s64 = ctx.r27.s64 + 456;
loc_83760620:
	// addi r4,r30,-212
	ctx.r4.s64 = ctx.r30.s64 + -212;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x8376062C;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x83760634;
	sub_82535890(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83760638;
	sub_82534770(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(ctx.r29.s32, 6, xer);
	// blt cr6,0x83760620
	if (cr6.lt) goto loc_83760620;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r27,480
	ctx.r28.s64 = ctx.r27.s64 + 480;
loc_83760650:
	// addi r4,r30,-204
	ctx.r4.s64 = ctx.r30.s64 + -204;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x8376065C;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x83760664;
	sub_82535890(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83760668;
	sub_82534928(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfsu f0,4(r28)
	ea = 4 + ctx.r28.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r28.u32 = ea;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(ctx.r29.s32, 6, xer);
	// blt cr6,0x83760650
	if (cr6.lt) goto loc_83760650;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r27,504
	ctx.r28.s64 = ctx.r27.s64 + 504;
loc_83760684:
	// addi r4,r30,-188
	ctx.r4.s64 = ctx.r30.s64 + -188;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83760690;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x83760698;
	sub_82535890(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8376069C;
	sub_82534928(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfsu f0,4(r28)
	ea = 4 + ctx.r28.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r28.u32 = ea;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(ctx.r29.s32, 6, xer);
	// blt cr6,0x83760684
	if (cr6.lt) goto loc_83760684;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r27,528
	ctx.r28.s64 = ctx.r27.s64 + 528;
loc_837606B8:
	// addi r4,r30,-164
	ctx.r4.s64 = ctx.r30.s64 + -164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x837606C4;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x837606CC;
	sub_82535890(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837606D0;
	sub_82534770(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(ctx.r29.s32, 6, xer);
	// blt cr6,0x837606b8
	if (cr6.lt) goto loc_837606B8;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r27,552
	ctx.r28.s64 = ctx.r27.s64 + 552;
loc_837606E8:
	// addi r4,r30,-140
	ctx.r4.s64 = ctx.r30.s64 + -140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x837606F4;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x837606FC;
	sub_82535890(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83760700;
	sub_82534770(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(ctx.r29.s32, 6, xer);
	// blt cr6,0x837606e8
	if (cr6.lt) goto loc_837606E8;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r27,576
	ctx.r28.s64 = ctx.r27.s64 + 576;
loc_83760718:
	// addi r4,r30,-124
	ctx.r4.s64 = ctx.r30.s64 + -124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83760724;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x8376072C;
	sub_82535890(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83760730;
	sub_82534770(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(ctx.r29.s32, 6, xer);
	// blt cr6,0x83760718
	if (cr6.lt) goto loc_83760718;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r27,600
	ctx.r28.s64 = ctx.r27.s64 + 600;
loc_83760748:
	// addi r4,r30,-116
	ctx.r4.s64 = ctx.r30.s64 + -116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83760754;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x8376075C;
	sub_82535890(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83760760;
	sub_82534770(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(ctx.r29.s32, 6, xer);
	// blt cr6,0x83760748
	if (cr6.lt) goto loc_83760748;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r27,624
	ctx.r28.s64 = ctx.r27.s64 + 624;
loc_83760778:
	// addi r4,r30,-108
	ctx.r4.s64 = ctx.r30.s64 + -108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83760784;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x8376078C;
	sub_82535890(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83760790;
	sub_82534770(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(ctx.r29.s32, 6, xer);
	// blt cr6,0x83760778
	if (cr6.lt) goto loc_83760778;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r27,648
	ctx.r28.s64 = ctx.r27.s64 + 648;
loc_837607A8:
	// addi r4,r30,-92
	ctx.r4.s64 = ctx.r30.s64 + -92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x837607B4;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x837607BC;
	sub_82535890(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837607C0;
	sub_82534770(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(ctx.r29.s32, 6, xer);
	// blt cr6,0x837607a8
	if (cr6.lt) goto loc_837607A8;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r27,672
	ctx.r28.s64 = ctx.r27.s64 + 672;
loc_837607D8:
	// addi r4,r30,-80
	ctx.r4.s64 = ctx.r30.s64 + -80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x837607E4;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x837607EC;
	sub_82535890(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837607F0;
	sub_82534770(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(ctx.r29.s32, 6, xer);
	// blt cr6,0x837607d8
	if (cr6.lt) goto loc_837607D8;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r27,696
	ctx.r28.s64 = ctx.r27.s64 + 696;
loc_83760808:
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83760814;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x8376081C;
	sub_82535890(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83760820;
	sub_82534770(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(ctx.r29.s32, 6, xer);
	// blt cr6,0x83760808
	if (cr6.lt) goto loc_83760808;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r27,720
	ctx.r28.s64 = ctx.r27.s64 + 720;
loc_83760838:
	// addi r4,r30,-40
	ctx.r4.s64 = ctx.r30.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83760844;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x8376084C;
	sub_82535890(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83760850;
	sub_82534770(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(ctx.r29.s32, 6, xer);
	// blt cr6,0x83760838
	if (cr6.lt) goto loc_83760838;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r27,744
	ctx.r28.s64 = ctx.r27.s64 + 744;
loc_83760868:
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83760874;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x8376087C;
	sub_82535890(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83760880;
	sub_82534770(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(ctx.r29.s32, 6, xer);
	// blt cr6,0x83760868
	if (cr6.lt) goto loc_83760868;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r27,768
	ctx.r28.s64 = ctx.r27.s64 + 768;
loc_83760898:
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x837608A4;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x837608AC;
	sub_82535890(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837608B0;
	sub_82534770(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(ctx.r29.s32, 6, xer);
	// blt cr6,0x83760898
	if (cr6.lt) goto loc_83760898;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r27,792
	ctx.r28.s64 = ctx.r27.s64 + 792;
loc_837608C8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x837608D4;
	sub_82535898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535890
	ctx.lr = 0x837608DC;
	sub_82535890(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837608E0;
	sub_82534770(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(ctx.r29.s32, 6, xer);
	// blt cr6,0x837608c8
	if (cr6.lt) goto loc_837608C8;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837608FC"))) PPC_WEAK_FUNC(sub_837608FC);
PPC_FUNC_IMPL(__imp__sub_837608FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83760900"))) PPC_WEAK_FUNC(sub_83760900);
PPC_FUNC_IMPL(__imp__sub_83760900) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8376092c
	if (!cr6.eq) goto loc_8376092C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8376112c
	goto loc_8376112C;
loc_8376092C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83763830
	ctx.lr = 0x83760938;
	sub_83763830(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// lwz r6,20(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r6,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x83763830
	ctx.lr = 0x83760974;
	sub_83763830(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r5,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r5.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r7,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x83763830
	ctx.lr = 0x837609B0;
	sub_83763830(ctx, base);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r6,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r6.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r5,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r5.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r9,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83763830
	ctx.lr = 0x837609EC;
	sub_83763830(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r7,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r7.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r6,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r6.u32);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r5,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r5.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x83763830
	ctx.lr = 0x83760A28;
	sub_83763830(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r8,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r8.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r7,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r7.u32);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r6,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r6.u32);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r5,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r5.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x83763830
	ctx.lr = 0x83760A64;
	sub_83763830(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r9.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r8,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r8.u32);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r7,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r7.u32);
	// lwz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r6,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r6.u32);
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r5,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r5.u32);
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r3,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r3.u32);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x83763830
	ctx.lr = 0x83760AA0;
	sub_83763830(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r8,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r8.u32);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r7,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r7.u32);
	// lwz r6,20(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r6,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r6.u32);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x83763830
	ctx.lr = 0x83760ADC;
	sub_83763830(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r5,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r5.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r10.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r9,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r9.u32);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r8,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r8.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r7,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r7.u32);
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x83763830
	ctx.lr = 0x83760B18;
	sub_83763830(ctx, base);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r6,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r6.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r9,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r9.u32);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r8,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r8.u32);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x83763830
	ctx.lr = 0x83760B54;
	sub_83763830(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r7,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r7.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r6,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r6.u32);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r5,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r5.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r10,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r10.u32);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r9,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r9.u32);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// bl 0x83763830
	ctx.lr = 0x83760B90;
	sub_83763830(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r8,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r8.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r7,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r7.u32);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r6,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r6.u32);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r5,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r5.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r10,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r10.u32);
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// bl 0x83763830
	ctx.lr = 0x83760BCC;
	sub_83763830(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r9.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r8,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r8.u32);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r7,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r7.u32);
	// lwz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r6,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r6.u32);
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r5,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r5.u32);
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r3,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r3.u32);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// bl 0x83763830
	ctx.lr = 0x83760C08;
	sub_83763830(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r10.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r9.u32);
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r8,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r8.u32);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r7,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r7.u32);
	// lwz r6,20(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r6,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r6.u32);
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x83763830
	ctx.lr = 0x83760C44;
	sub_83763830(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r5,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r5.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r10.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r9,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r9.u32);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r8,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r8.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r7,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r7.u32);
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x83763830
	ctx.lr = 0x83760C80;
	sub_83763830(ctx, base);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r6,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r6.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r5,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r5.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r10,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r10.u32);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r9,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r9.u32);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r8,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r8.u32);
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// bl 0x83763830
	ctx.lr = 0x83760CBC;
	sub_83763830(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f0,364(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 364, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,368(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 368, temp.u32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,372(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 372, temp.u32);
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,376(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 376, temp.u32);
	// lfs f10,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,380(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 380, temp.u32);
	// lfs f9,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,384(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x83763830
	ctx.lr = 0x83760CF8;
	sub_83763830(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r7,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r7.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r6,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r6.u32);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r5,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r5.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r10,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r10.u32);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r9,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r9.u32);
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// bl 0x83763830
	ctx.lr = 0x83760D34;
	sub_83763830(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r8,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r8.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r7,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r7.u32);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r6,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r6.u32);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r5,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r5.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r11.u32);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r10,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r10.u32);
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// bl 0x83763830
	ctx.lr = 0x83760D70;
	sub_83763830(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r9.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r8,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r8.u32);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r7,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r7.u32);
	// lwz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r6,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r6.u32);
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r5,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r5.u32);
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r3,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r3.u32);
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// bl 0x83763830
	ctx.lr = 0x83760DAC;
	sub_83763830(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r10.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r9.u32);
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r8,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r8.u32);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r7,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r7.u32);
	// lwz r6,20(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r6,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r6.u32);
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// bl 0x83763830
	ctx.lr = 0x83760DE8;
	sub_83763830(ctx, base);
	// lfs f8,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f8,484(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 484, temp.u32);
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,488(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 488, temp.u32);
	// lfs f6,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,492(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 492, temp.u32);
	// lfs f5,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,496(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 496, temp.u32);
	// lfs f4,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,500(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 500, temp.u32);
	// lfs f3,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,504(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 504, temp.u32);
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// bl 0x83763830
	ctx.lr = 0x83760E24;
	sub_83763830(ctx, base);
	// lfs f2,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f2,508(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 508, temp.u32);
	// lfs f1,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,512(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 512, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,516(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 516, temp.u32);
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,520(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 520, temp.u32);
	// lfs f12,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,524(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 524, temp.u32);
	// lfs f11,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,528(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 528, temp.u32);
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// bl 0x83763830
	ctx.lr = 0x83760E60;
	sub_83763830(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r5,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r5.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r11.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r10.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r9,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r9.u32);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r8,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r8.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r7,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r7.u32);
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// bl 0x83763830
	ctx.lr = 0x83760E9C;
	sub_83763830(ctx, base);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r6,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r6.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r5,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r5.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r11.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r10,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r10.u32);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r9,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r9.u32);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r8,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r8.u32);
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// bl 0x83763830
	ctx.lr = 0x83760ED8;
	sub_83763830(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r7,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r7.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r6,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r6.u32);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r5,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r5.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r11.u32);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r10,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r10.u32);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r9,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r9.u32);
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// bl 0x83763830
	ctx.lr = 0x83760F14;
	sub_83763830(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r8,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r8.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r7,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r7.u32);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r6,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r6.u32);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r5,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r5.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r11.u32);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r10,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r10.u32);
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x83763830
	ctx.lr = 0x83760F50;
	sub_83763830(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r9.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r8,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r8.u32);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r7,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r7.u32);
	// lwz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r6,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r6.u32);
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r5,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r5.u32);
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r3,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r3.u32);
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// bl 0x83763830
	ctx.lr = 0x83760F8C;
	sub_83763830(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r10.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r9.u32);
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r8,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r8.u32);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r7,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r7.u32);
	// lwz r6,20(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r6,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r6.u32);
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// bl 0x83763830
	ctx.lr = 0x83760FC8;
	sub_83763830(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r5,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r5.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r11.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r10.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r9,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r9.u32);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r8,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r8.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r7,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r7.u32);
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x83763830
	ctx.lr = 0x83761004;
	sub_83763830(ctx, base);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r6,700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 700, ctx.r6.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r5,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r5.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r11.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r10,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r10.u32);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r9,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r9.u32);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r8,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r8.u32);
	// lwz r3,120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// bl 0x83763830
	ctx.lr = 0x83761040;
	sub_83763830(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r7,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r7.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r6,728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 728, ctx.r6.u32);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r5,732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 732, ctx.r5.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r11.u32);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r10,740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 740, ctx.r10.u32);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r9,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r9.u32);
	// lwz r3,124(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// bl 0x83763830
	ctx.lr = 0x8376107C;
	sub_83763830(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r8,748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 748, ctx.r8.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r7,752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 752, ctx.r7.u32);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r6,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r6.u32);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r5,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r5.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r11.u32);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r10,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r10.u32);
	// lwz r3,128(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// bl 0x83763830
	ctx.lr = 0x837610B8;
	sub_83763830(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 772, ctx.r9.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r8,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r8.u32);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r7,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r7.u32);
	// lwz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r6,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r6.u32);
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r5,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r5.u32);
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r3,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r3.u32);
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// bl 0x83763830
	ctx.lr = 0x837610F4;
	sub_83763830(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r8.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r7,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r7.u32);
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r6,812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 812, ctx.r6.u32);
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r5,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r5.u32);
loc_8376112C:
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

__attribute__((alias("__imp__sub_83761144"))) PPC_WEAK_FUNC(sub_83761144);
PPC_FUNC_IMPL(__imp__sub_83761144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83761148"))) PPC_WEAK_FUNC(sub_83761148);
PPC_FUNC_IMPL(__imp__sub_83761148) {
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
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,820
	ctx.r4.s64 = 820;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8376116C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83761188
	if (cr6.eq) goto loc_83761188;
	// bl 0x8375fea0
	ctx.lr = 0x83761178;
	sub_8375FEA0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83761188:
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

__attribute__((alias("__imp__sub_8376119C"))) PPC_WEAK_FUNC(sub_8376119C);
PPC_FUNC_IMPL(__imp__sub_8376119C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837611A0"))) PPC_WEAK_FUNC(sub_837611A0);
PPC_FUNC_IMPL(__imp__sub_837611A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837611A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-19264
	ctx.r31.s64 = ctx.r11.s64 + -19264;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r31,-176
	ctx.r4.s64 = ctx.r31.s64 + -176;
	// bl 0x82535898
	ctx.lr = 0x837611C8;
	sub_82535898(ctx, base);
	// addi r4,r31,-156
	ctx.r4.s64 = ctx.r31.s64 + -156;
	// bl 0x82535898
	ctx.lr = 0x837611D0;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x837611D4;
	sub_82534B10(ctx, base);
	// stb r3,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r3.u8);
	// addi r4,r31,-148
	ctx.r4.s64 = ctx.r31.s64 + -148;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x837611E4;
	sub_82535898(ctx, base);
	// addi r4,r31,-128
	ctx.r4.s64 = ctx.r31.s64 + -128;
	// bl 0x82535898
	ctx.lr = 0x837611EC;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x837611F0;
	sub_82534B10(ctx, base);
	// stb r3,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r3.u8);
	// addi r4,r31,-120
	ctx.r4.s64 = ctx.r31.s64 + -120;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x83761200;
	sub_82535898(ctx, base);
	// addi r4,r31,-100
	ctx.r4.s64 = ctx.r31.s64 + -100;
	// bl 0x82535898
	ctx.lr = 0x83761208;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8376120C;
	sub_82534B10(ctx, base);
	// stb r3,6(r30)
	PPC_STORE_U8(ctx.r30.u32 + 6, ctx.r3.u8);
	// addi r4,r31,-92
	ctx.r4.s64 = ctx.r31.s64 + -92;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8376121C;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83761220;
	sub_82534770(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// addi r4,r31,-56
	ctx.r4.s64 = ctx.r31.s64 + -56;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x83761230;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83761234;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x83761248;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8376124C;
	sub_82534B10(ctx, base);
	// stb r3,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r3.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8376125C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83761260;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,20(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83761274"))) PPC_WEAK_FUNC(sub_83761274);
PPC_FUNC_IMPL(__imp__sub_83761274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83761278"))) PPC_WEAK_FUNC(sub_83761278);
PPC_FUNC_IMPL(__imp__sub_83761278) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x837612a4
	if (!cr6.eq) goto loc_837612A4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x837612f0
	goto loc_837612F0;
loc_837612A4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83763830
	ctx.lr = 0x837612B0;
	sub_83763830(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r9,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r9.u8);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r8,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r8.u8);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lbz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// stb r6,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r6.u8);
	// lfs f13,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
loc_837612F0:
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

__attribute__((alias("__imp__sub_83761308"))) PPC_WEAK_FUNC(sub_83761308);
PPC_FUNC_IMPL(__imp__sub_83761308) {
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
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8376132C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83761378
	if (cr6.eq) goto loc_83761378;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32213
	ctx.r9.s64 = -2111111168;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,-19148
	ctx.r8.s64 = ctx.r9.s64 + -19148;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stb r11,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r11.u8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83761378:
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

__attribute__((alias("__imp__sub_8376138C"))) PPC_WEAK_FUNC(sub_8376138C);
PPC_FUNC_IMPL(__imp__sub_8376138C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83761390"))) PPC_WEAK_FUNC(sub_83761390);
PPC_FUNC_IMPL(__imp__sub_83761390) {
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
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-5184
	ctx.r9.s64 = ctx.r11.s64 + -5184;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x837613c4
	if (cr6.eq) goto loc_837613C4;
	// bl 0x82416268
	ctx.lr = 0x837613C0;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_837613C4:
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

__attribute__((alias("__imp__sub_837613D8"))) PPC_WEAK_FUNC(sub_837613D8);
PPC_FUNC_IMPL(__imp__sub_837613D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32213
	ctx.r9.s64 = -2111111168;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,-16592
	ctx.r8.s64 = ctx.r9.s64 + -16592;
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stb r11,52(r3)
	PPC_STORE_U8(ctx.r3.u32 + 52, ctx.r11.u8);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stb r11,53(r3)
	PPC_STORE_U8(ctx.r3.u32 + 53, ctx.r11.u8);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stb r11,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, ctx.r11.u8);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stb r11,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, ctx.r11.u8);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stb r11,128(r3)
	PPC_STORE_U8(ctx.r3.u32 + 128, ctx.r11.u8);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stb r11,140(r3)
	PPC_STORE_U8(ctx.r3.u32 + 140, ctx.r11.u8);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stb r11,180(r3)
	PPC_STORE_U8(ctx.r3.u32 + 180, ctx.r11.u8);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stb r11,192(r3)
	PPC_STORE_U8(ctx.r3.u32 + 192, ctx.r11.u8);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// stfs f0,132(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stfs f0,136(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// stfs f0,144(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// stfs f0,148(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stfs f0,152(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// stfs f0,156(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// stfs f0,160(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// stfs f0,164(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// stfs f0,168(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// stfs f0,172(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// stfs f0,176(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// stfs f0,184(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// stfs f0,188(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// stfs f0,196(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// stfs f0,200(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// stfs f0,204(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// stfs f0,208(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// stfs f0,212(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 212, temp.u32);
	// stfs f0,216(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 216, temp.u32);
	// stfs f0,220(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// stfs f0,224(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// stfs f0,228(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// stfs f0,232(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 232, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837614E0"))) PPC_WEAK_FUNC(sub_837614E0);
PPC_FUNC_IMPL(__imp__sub_837614E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837614E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-16692
	ctx.r31.s64 = ctx.r11.s64 + -16692;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r31,-2396
	ctx.r4.s64 = ctx.r31.s64 + -2396;
	// bl 0x82535898
	ctx.lr = 0x83761508;
	sub_82535898(ctx, base);
	// addi r4,r31,-2380
	ctx.r4.s64 = ctx.r31.s64 + -2380;
	// bl 0x82535898
	ctx.lr = 0x83761510;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83761514;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-2372
	ctx.r4.s64 = ctx.r31.s64 + -2372;
	// bl 0x82535898
	ctx.lr = 0x83761528;
	sub_82535898(ctx, base);
	// addi r4,r31,-2356
	ctx.r4.s64 = ctx.r31.s64 + -2356;
	// bl 0x82535898
	ctx.lr = 0x83761530;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83761534;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-2348
	ctx.r4.s64 = ctx.r31.s64 + -2348;
	// bl 0x82535898
	ctx.lr = 0x83761548;
	sub_82535898(ctx, base);
	// addi r4,r31,-2332
	ctx.r4.s64 = ctx.r31.s64 + -2332;
	// bl 0x82535898
	ctx.lr = 0x83761550;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x83761554;
	sub_82534B10(ctx, base);
	// stb r3,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-2320
	ctx.r4.s64 = ctx.r31.s64 + -2320;
	// bl 0x82535898
	ctx.lr = 0x83761564;
	sub_82535898(ctx, base);
	// addi r4,r31,-2304
	ctx.r4.s64 = ctx.r31.s64 + -2304;
	// bl 0x82535898
	ctx.lr = 0x8376156C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83761570;
	sub_82534928(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-2296
	ctx.r4.s64 = ctx.r31.s64 + -2296;
	// bl 0x82535898
	ctx.lr = 0x83761584;
	sub_82535898(ctx, base);
	// addi r4,r31,-2276
	ctx.r4.s64 = ctx.r31.s64 + -2276;
	// bl 0x82535898
	ctx.lr = 0x8376158C;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x83761590;
	sub_82534B10(ctx, base);
	// stb r3,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-2264
	ctx.r4.s64 = ctx.r31.s64 + -2264;
	// bl 0x82535898
	ctx.lr = 0x837615A0;
	sub_82535898(ctx, base);
	// addi r4,r31,-2244
	ctx.r4.s64 = ctx.r31.s64 + -2244;
	// bl 0x82535898
	ctx.lr = 0x837615A8;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837615AC;
	sub_82534928(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,24(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-2240
	ctx.r4.s64 = ctx.r31.s64 + -2240;
	// bl 0x82535898
	ctx.lr = 0x837615C0;
	sub_82535898(ctx, base);
	// addi r4,r31,-2220
	ctx.r4.s64 = ctx.r31.s64 + -2220;
	// bl 0x82535898
	ctx.lr = 0x837615C8;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837615CC;
	sub_82534928(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,28(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-2216
	ctx.r4.s64 = ctx.r31.s64 + -2216;
	// bl 0x82535898
	ctx.lr = 0x837615E0;
	sub_82535898(ctx, base);
	// addi r4,r31,-2192
	ctx.r4.s64 = ctx.r31.s64 + -2192;
	// bl 0x82535898
	ctx.lr = 0x837615E8;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x837615EC;
	sub_82534B10(ctx, base);
	// stb r3,32(r30)
	PPC_STORE_U8(ctx.r30.u32 + 32, ctx.r3.u8);
	// addi r4,r31,-2180
	ctx.r4.s64 = ctx.r31.s64 + -2180;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x837615FC;
	sub_82535898(ctx, base);
	// addi r4,r31,-2156
	ctx.r4.s64 = ctx.r31.s64 + -2156;
	// bl 0x82535898
	ctx.lr = 0x83761604;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83761608;
	sub_82534928(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,36(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-2144
	ctx.r4.s64 = ctx.r31.s64 + -2144;
	// bl 0x82535898
	ctx.lr = 0x8376161C;
	sub_82535898(ctx, base);
	// addi r4,r31,-2120
	ctx.r4.s64 = ctx.r31.s64 + -2120;
	// bl 0x82535898
	ctx.lr = 0x83761624;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83761628;
	sub_82534928(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// stfs f8,40(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-2108
	ctx.r4.s64 = ctx.r31.s64 + -2108;
	// bl 0x82535898
	ctx.lr = 0x8376163C;
	sub_82535898(ctx, base);
	// addi r4,r31,-2088
	ctx.r4.s64 = ctx.r31.s64 + -2088;
	// bl 0x82535898
	ctx.lr = 0x83761644;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83761648;
	sub_82534928(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// stfs f7,44(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-2072
	ctx.r4.s64 = ctx.r31.s64 + -2072;
	// bl 0x82535898
	ctx.lr = 0x8376165C;
	sub_82535898(ctx, base);
	// addi r4,r31,-2052
	ctx.r4.s64 = ctx.r31.s64 + -2052;
	// bl 0x82535898
	ctx.lr = 0x83761664;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83761668;
	sub_82534928(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// stfs f6,48(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-2036
	ctx.r4.s64 = ctx.r31.s64 + -2036;
	// bl 0x82535898
	ctx.lr = 0x8376167C;
	sub_82535898(ctx, base);
	// addi r4,r31,-2016
	ctx.r4.s64 = ctx.r31.s64 + -2016;
	// bl 0x82535898
	ctx.lr = 0x83761684;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x83761688;
	sub_82534B10(ctx, base);
	// stb r3,52(r30)
	PPC_STORE_U8(ctx.r30.u32 + 52, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-2004
	ctx.r4.s64 = ctx.r31.s64 + -2004;
	// bl 0x82535898
	ctx.lr = 0x83761698;
	sub_82535898(ctx, base);
	// addi r4,r31,-1984
	ctx.r4.s64 = ctx.r31.s64 + -1984;
	// bl 0x82535898
	ctx.lr = 0x837616A0;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x837616A4;
	sub_82534B10(ctx, base);
	// stb r3,53(r30)
	PPC_STORE_U8(ctx.r30.u32 + 53, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1964
	ctx.r4.s64 = ctx.r31.s64 + -1964;
	// bl 0x82535898
	ctx.lr = 0x837616B4;
	sub_82535898(ctx, base);
	// addi r4,r31,-1944
	ctx.r4.s64 = ctx.r31.s64 + -1944;
	// bl 0x82535898
	ctx.lr = 0x837616BC;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837616C0;
	sub_82534928(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// stfs f5,56(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1932
	ctx.r4.s64 = ctx.r31.s64 + -1932;
	// bl 0x82535898
	ctx.lr = 0x837616D4;
	sub_82535898(ctx, base);
	// addi r4,r31,-1912
	ctx.r4.s64 = ctx.r31.s64 + -1912;
	// bl 0x82535898
	ctx.lr = 0x837616DC;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837616E0;
	sub_82534928(ctx, base);
	// frsp f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// stfs f4,60(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// addi r4,r31,-1892
	ctx.r4.s64 = ctx.r31.s64 + -1892;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x837616F4;
	sub_82535898(ctx, base);
	// addi r4,r31,-1872
	ctx.r4.s64 = ctx.r31.s64 + -1872;
	// bl 0x82535898
	ctx.lr = 0x837616FC;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83761700;
	sub_82534928(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// stfs f3,64(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 64, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1860
	ctx.r4.s64 = ctx.r31.s64 + -1860;
	// bl 0x82535898
	ctx.lr = 0x83761714;
	sub_82535898(ctx, base);
	// addi r4,r31,-1844
	ctx.r4.s64 = ctx.r31.s64 + -1844;
	// bl 0x82535898
	ctx.lr = 0x8376171C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83761720;
	sub_82534928(ctx, base);
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// stfs f2,68(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1820
	ctx.r4.s64 = ctx.r31.s64 + -1820;
	// bl 0x82535898
	ctx.lr = 0x83761734;
	sub_82535898(ctx, base);
	// addi r4,r31,-1804
	ctx.r4.s64 = ctx.r31.s64 + -1804;
	// bl 0x82535898
	ctx.lr = 0x8376173C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83761740;
	sub_82534928(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// stfs f1,72(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 72, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1780
	ctx.r4.s64 = ctx.r31.s64 + -1780;
	// bl 0x82535898
	ctx.lr = 0x83761754;
	sub_82535898(ctx, base);
	// addi r4,r31,-1764
	ctx.r4.s64 = ctx.r31.s64 + -1764;
	// bl 0x82535898
	ctx.lr = 0x8376175C;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x83761760;
	sub_82534B10(ctx, base);
	// stb r3,76(r30)
	PPC_STORE_U8(ctx.r30.u32 + 76, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1752
	ctx.r4.s64 = ctx.r31.s64 + -1752;
	// bl 0x82535898
	ctx.lr = 0x83761770;
	sub_82535898(ctx, base);
	// addi r4,r31,-1736
	ctx.r4.s64 = ctx.r31.s64 + -1736;
	// bl 0x82535898
	ctx.lr = 0x83761778;
	sub_82535898(ctx, base);
	// addi r4,r31,-1724
	ctx.r4.s64 = ctx.r31.s64 + -1724;
	// bl 0x82535898
	ctx.lr = 0x83761780;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83761784;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,80(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 80, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1712
	ctx.r4.s64 = ctx.r31.s64 + -1712;
	// bl 0x82535898
	ctx.lr = 0x83761798;
	sub_82535898(ctx, base);
	// addi r4,r31,-1696
	ctx.r4.s64 = ctx.r31.s64 + -1696;
	// bl 0x82535898
	ctx.lr = 0x837617A0;
	sub_82535898(ctx, base);
	// addi r4,r31,-1684
	ctx.r4.s64 = ctx.r31.s64 + -1684;
	// bl 0x82535898
	ctx.lr = 0x837617A8;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837617AC;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,84(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 84, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1676
	ctx.r4.s64 = ctx.r31.s64 + -1676;
	// bl 0x82535898
	ctx.lr = 0x837617C0;
	sub_82535898(ctx, base);
	// addi r4,r31,-1660
	ctx.r4.s64 = ctx.r31.s64 + -1660;
	// bl 0x82535898
	ctx.lr = 0x837617C8;
	sub_82535898(ctx, base);
	// addi r4,r31,-1648
	ctx.r4.s64 = ctx.r31.s64 + -1648;
	// bl 0x82535898
	ctx.lr = 0x837617D0;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x837617D4;
	sub_82534B10(ctx, base);
	// stb r3,88(r30)
	PPC_STORE_U8(ctx.r30.u32 + 88, ctx.r3.u8);
	// addi r4,r31,-1636
	ctx.r4.s64 = ctx.r31.s64 + -1636;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x837617E4;
	sub_82535898(ctx, base);
	// addi r4,r31,-1620
	ctx.r4.s64 = ctx.r31.s64 + -1620;
	// bl 0x82535898
	ctx.lr = 0x837617EC;
	sub_82535898(ctx, base);
	// addi r4,r31,-1608
	ctx.r4.s64 = ctx.r31.s64 + -1608;
	// bl 0x82535898
	ctx.lr = 0x837617F4;
	sub_82535898(ctx, base);
	// addi r4,r31,-1596
	ctx.r4.s64 = ctx.r31.s64 + -1596;
	// bl 0x82535898
	ctx.lr = 0x837617FC;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83761800;
	sub_82534928(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,92(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 92, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1592
	ctx.r4.s64 = ctx.r31.s64 + -1592;
	// bl 0x82535898
	ctx.lr = 0x83761814;
	sub_82535898(ctx, base);
	// addi r4,r31,-1576
	ctx.r4.s64 = ctx.r31.s64 + -1576;
	// bl 0x82535898
	ctx.lr = 0x8376181C;
	sub_82535898(ctx, base);
	// addi r4,r31,-1564
	ctx.r4.s64 = ctx.r31.s64 + -1564;
	// bl 0x82535898
	ctx.lr = 0x83761824;
	sub_82535898(ctx, base);
	// addi r4,r31,-1552
	ctx.r4.s64 = ctx.r31.s64 + -1552;
	// bl 0x82535898
	ctx.lr = 0x8376182C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83761830;
	sub_82534928(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,96(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 96, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1544
	ctx.r4.s64 = ctx.r31.s64 + -1544;
	// bl 0x82535898
	ctx.lr = 0x83761844;
	sub_82535898(ctx, base);
	// addi r4,r31,-1528
	ctx.r4.s64 = ctx.r31.s64 + -1528;
	// bl 0x82535898
	ctx.lr = 0x8376184C;
	sub_82535898(ctx, base);
	// addi r4,r31,-1516
	ctx.r4.s64 = ctx.r31.s64 + -1516;
	// bl 0x82535898
	ctx.lr = 0x83761854;
	sub_82535898(ctx, base);
	// addi r4,r31,-1504
	ctx.r4.s64 = ctx.r31.s64 + -1504;
	// bl 0x82535898
	ctx.lr = 0x8376185C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83761860;
	sub_82534928(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,100(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 100, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1496
	ctx.r4.s64 = ctx.r31.s64 + -1496;
	// bl 0x82535898
	ctx.lr = 0x83761874;
	sub_82535898(ctx, base);
	// addi r4,r31,-1480
	ctx.r4.s64 = ctx.r31.s64 + -1480;
	// bl 0x82535898
	ctx.lr = 0x8376187C;
	sub_82535898(ctx, base);
	// addi r4,r31,-1468
	ctx.r4.s64 = ctx.r31.s64 + -1468;
	// bl 0x82535898
	ctx.lr = 0x83761884;
	sub_82535898(ctx, base);
	// addi r4,r31,-1456
	ctx.r4.s64 = ctx.r31.s64 + -1456;
	// bl 0x82535898
	ctx.lr = 0x8376188C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83761890;
	sub_82534928(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,104(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 104, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1452
	ctx.r4.s64 = ctx.r31.s64 + -1452;
	// bl 0x82535898
	ctx.lr = 0x837618A4;
	sub_82535898(ctx, base);
	// addi r4,r31,-1436
	ctx.r4.s64 = ctx.r31.s64 + -1436;
	// bl 0x82535898
	ctx.lr = 0x837618AC;
	sub_82535898(ctx, base);
	// addi r4,r31,-1424
	ctx.r4.s64 = ctx.r31.s64 + -1424;
	// bl 0x82535898
	ctx.lr = 0x837618B4;
	sub_82535898(ctx, base);
	// addi r4,r31,-1412
	ctx.r4.s64 = ctx.r31.s64 + -1412;
	// bl 0x82535898
	ctx.lr = 0x837618BC;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837618C0;
	sub_82534928(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// stfs f8,108(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 108, temp.u32);
	// addi r4,r31,-1404
	ctx.r4.s64 = ctx.r31.s64 + -1404;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x837618D4;
	sub_82535898(ctx, base);
	// addi r4,r31,-1388
	ctx.r4.s64 = ctx.r31.s64 + -1388;
	// bl 0x82535898
	ctx.lr = 0x837618DC;
	sub_82535898(ctx, base);
	// addi r4,r31,-1376
	ctx.r4.s64 = ctx.r31.s64 + -1376;
	// bl 0x82535898
	ctx.lr = 0x837618E4;
	sub_82535898(ctx, base);
	// addi r4,r31,-1364
	ctx.r4.s64 = ctx.r31.s64 + -1364;
	// bl 0x82535898
	ctx.lr = 0x837618EC;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837618F0;
	sub_82534928(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// stfs f7,112(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 112, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1356
	ctx.r4.s64 = ctx.r31.s64 + -1356;
	// bl 0x82535898
	ctx.lr = 0x83761904;
	sub_82535898(ctx, base);
	// addi r4,r31,-1340
	ctx.r4.s64 = ctx.r31.s64 + -1340;
	// bl 0x82535898
	ctx.lr = 0x8376190C;
	sub_82535898(ctx, base);
	// addi r4,r31,-1328
	ctx.r4.s64 = ctx.r31.s64 + -1328;
	// bl 0x82535898
	ctx.lr = 0x83761914;
	sub_82535898(ctx, base);
	// addi r4,r31,-1316
	ctx.r4.s64 = ctx.r31.s64 + -1316;
	// bl 0x82535898
	ctx.lr = 0x8376191C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83761920;
	sub_82534928(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// stfs f6,116(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 116, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1308
	ctx.r4.s64 = ctx.r31.s64 + -1308;
	// bl 0x82535898
	ctx.lr = 0x83761934;
	sub_82535898(ctx, base);
	// addi r4,r31,-1292
	ctx.r4.s64 = ctx.r31.s64 + -1292;
	// bl 0x82535898
	ctx.lr = 0x8376193C;
	sub_82535898(ctx, base);
	// addi r4,r31,-1280
	ctx.r4.s64 = ctx.r31.s64 + -1280;
	// bl 0x82535898
	ctx.lr = 0x83761944;
	sub_82535898(ctx, base);
	// addi r4,r31,-1268
	ctx.r4.s64 = ctx.r31.s64 + -1268;
	// bl 0x82535898
	ctx.lr = 0x8376194C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83761950;
	sub_82534928(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// stfs f5,120(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 120, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1260
	ctx.r4.s64 = ctx.r31.s64 + -1260;
	// bl 0x82535898
	ctx.lr = 0x83761964;
	sub_82535898(ctx, base);
	// addi r4,r31,-1244
	ctx.r4.s64 = ctx.r31.s64 + -1244;
	// bl 0x82535898
	ctx.lr = 0x8376196C;
	sub_82535898(ctx, base);
	// addi r4,r31,-1232
	ctx.r4.s64 = ctx.r31.s64 + -1232;
	// bl 0x82535898
	ctx.lr = 0x83761974;
	sub_82535898(ctx, base);
	// addi r4,r31,-1220
	ctx.r4.s64 = ctx.r31.s64 + -1220;
	// bl 0x82535898
	ctx.lr = 0x8376197C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83761980;
	sub_82534928(ctx, base);
	// frsp f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// stfs f4,124(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 124, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1212
	ctx.r4.s64 = ctx.r31.s64 + -1212;
	// bl 0x82535898
	ctx.lr = 0x83761994;
	sub_82535898(ctx, base);
	// addi r4,r31,-1196
	ctx.r4.s64 = ctx.r31.s64 + -1196;
	// bl 0x82535898
	ctx.lr = 0x8376199C;
	sub_82535898(ctx, base);
	// addi r4,r31,-1184
	ctx.r4.s64 = ctx.r31.s64 + -1184;
	// bl 0x82535898
	ctx.lr = 0x837619A4;
	sub_82535898(ctx, base);
	// addi r4,r31,-1172
	ctx.r4.s64 = ctx.r31.s64 + -1172;
	// bl 0x82535898
	ctx.lr = 0x837619AC;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x837619B0;
	sub_82534B10(ctx, base);
	// stb r3,128(r30)
	PPC_STORE_U8(ctx.r30.u32 + 128, ctx.r3.u8);
	// addi r4,r31,-1160
	ctx.r4.s64 = ctx.r31.s64 + -1160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x837619C0;
	sub_82535898(ctx, base);
	// addi r4,r31,-1144
	ctx.r4.s64 = ctx.r31.s64 + -1144;
	// bl 0x82535898
	ctx.lr = 0x837619C8;
	sub_82535898(ctx, base);
	// addi r4,r31,-1132
	ctx.r4.s64 = ctx.r31.s64 + -1132;
	// bl 0x82535898
	ctx.lr = 0x837619D0;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837619D4;
	sub_82534928(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// stfs f3,132(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 132, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1120
	ctx.r4.s64 = ctx.r31.s64 + -1120;
	// bl 0x82535898
	ctx.lr = 0x837619E8;
	sub_82535898(ctx, base);
	// addi r4,r31,-1104
	ctx.r4.s64 = ctx.r31.s64 + -1104;
	// bl 0x82535898
	ctx.lr = 0x837619F0;
	sub_82535898(ctx, base);
	// addi r4,r31,-1092
	ctx.r4.s64 = ctx.r31.s64 + -1092;
	// bl 0x82535898
	ctx.lr = 0x837619F8;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837619FC;
	sub_82534928(ctx, base);
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// stfs f2,136(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 136, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1084
	ctx.r4.s64 = ctx.r31.s64 + -1084;
	// bl 0x82535898
	ctx.lr = 0x83761A10;
	sub_82535898(ctx, base);
	// addi r4,r31,-1068
	ctx.r4.s64 = ctx.r31.s64 + -1068;
	// bl 0x82535898
	ctx.lr = 0x83761A18;
	sub_82535898(ctx, base);
	// addi r4,r31,-1056
	ctx.r4.s64 = ctx.r31.s64 + -1056;
	// bl 0x82535898
	ctx.lr = 0x83761A20;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x83761A24;
	sub_82534B10(ctx, base);
	// stb r3,140(r30)
	PPC_STORE_U8(ctx.r30.u32 + 140, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1044
	ctx.r4.s64 = ctx.r31.s64 + -1044;
	// bl 0x82535898
	ctx.lr = 0x83761A34;
	sub_82535898(ctx, base);
	// addi r4,r31,-1028
	ctx.r4.s64 = ctx.r31.s64 + -1028;
	// bl 0x82535898
	ctx.lr = 0x83761A3C;
	sub_82535898(ctx, base);
	// addi r4,r31,-1016
	ctx.r4.s64 = ctx.r31.s64 + -1016;
	// bl 0x82535898
	ctx.lr = 0x83761A44;
	sub_82535898(ctx, base);
	// addi r4,r31,-1004
	ctx.r4.s64 = ctx.r31.s64 + -1004;
	// bl 0x82535898
	ctx.lr = 0x83761A4C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83761A50;
	sub_82534928(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// stfs f1,144(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 144, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1000
	ctx.r4.s64 = ctx.r31.s64 + -1000;
	// bl 0x82535898
	ctx.lr = 0x83761A64;
	sub_82535898(ctx, base);
	// addi r4,r31,-984
	ctx.r4.s64 = ctx.r31.s64 + -984;
	// bl 0x82535898
	ctx.lr = 0x83761A6C;
	sub_82535898(ctx, base);
	// addi r4,r31,-972
	ctx.r4.s64 = ctx.r31.s64 + -972;
	// bl 0x82535898
	ctx.lr = 0x83761A74;
	sub_82535898(ctx, base);
	// addi r4,r31,-960
	ctx.r4.s64 = ctx.r31.s64 + -960;
	// bl 0x82535898
	ctx.lr = 0x83761A7C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83761A80;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,148(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 148, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-952
	ctx.r4.s64 = ctx.r31.s64 + -952;
	// bl 0x82535898
	ctx.lr = 0x83761A94;
	sub_82535898(ctx, base);
	// addi r4,r31,-936
	ctx.r4.s64 = ctx.r31.s64 + -936;
	// bl 0x82535898
	ctx.lr = 0x83761A9C;
	sub_82535898(ctx, base);
	// addi r4,r31,-924
	ctx.r4.s64 = ctx.r31.s64 + -924;
	// bl 0x82535898
	ctx.lr = 0x83761AA4;
	sub_82535898(ctx, base);
	// addi r4,r31,-912
	ctx.r4.s64 = ctx.r31.s64 + -912;
	// bl 0x82535898
	ctx.lr = 0x83761AAC;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83761AB0;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,152(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 152, temp.u32);
	// addi r4,r31,-904
	ctx.r4.s64 = ctx.r31.s64 + -904;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x83761AC4;
	sub_82535898(ctx, base);
	// addi r4,r31,-888
	ctx.r4.s64 = ctx.r31.s64 + -888;
	// bl 0x82535898
	ctx.lr = 0x83761ACC;
	sub_82535898(ctx, base);
	// addi r4,r31,-876
	ctx.r4.s64 = ctx.r31.s64 + -876;
	// bl 0x82535898
	ctx.lr = 0x83761AD4;
	sub_82535898(ctx, base);
	// addi r4,r31,-864
	ctx.r4.s64 = ctx.r31.s64 + -864;
	// bl 0x82535898
	ctx.lr = 0x83761ADC;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83761AE0;
	sub_82534928(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,156(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 156, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-860
	ctx.r4.s64 = ctx.r31.s64 + -860;
	// bl 0x82535898
	ctx.lr = 0x83761AF4;
	sub_82535898(ctx, base);
	// addi r4,r31,-844
	ctx.r4.s64 = ctx.r31.s64 + -844;
	// bl 0x82535898
	ctx.lr = 0x83761AFC;
	sub_82535898(ctx, base);
	// addi r4,r31,-832
	ctx.r4.s64 = ctx.r31.s64 + -832;
	// bl 0x82535898
	ctx.lr = 0x83761B04;
	sub_82535898(ctx, base);
	// addi r4,r31,-820
	ctx.r4.s64 = ctx.r31.s64 + -820;
	// bl 0x82535898
	ctx.lr = 0x83761B0C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83761B10;
	sub_82534928(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,160(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 160, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-812
	ctx.r4.s64 = ctx.r31.s64 + -812;
	// bl 0x82535898
	ctx.lr = 0x83761B24;
	sub_82535898(ctx, base);
	// addi r4,r31,-796
	ctx.r4.s64 = ctx.r31.s64 + -796;
	// bl 0x82535898
	ctx.lr = 0x83761B2C;
	sub_82535898(ctx, base);
	// addi r4,r31,-784
	ctx.r4.s64 = ctx.r31.s64 + -784;
	// bl 0x82535898
	ctx.lr = 0x83761B34;
	sub_82535898(ctx, base);
	// addi r4,r31,-772
	ctx.r4.s64 = ctx.r31.s64 + -772;
	// bl 0x82535898
	ctx.lr = 0x83761B3C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83761B40;
	sub_82534928(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,164(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 164, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-764
	ctx.r4.s64 = ctx.r31.s64 + -764;
	// bl 0x82535898
	ctx.lr = 0x83761B54;
	sub_82535898(ctx, base);
	// addi r4,r31,-748
	ctx.r4.s64 = ctx.r31.s64 + -748;
	// bl 0x82535898
	ctx.lr = 0x83761B5C;
	sub_82535898(ctx, base);
	// addi r4,r31,-736
	ctx.r4.s64 = ctx.r31.s64 + -736;
	// bl 0x82535898
	ctx.lr = 0x83761B64;
	sub_82535898(ctx, base);
	// addi r4,r31,-724
	ctx.r4.s64 = ctx.r31.s64 + -724;
	// bl 0x82535898
	ctx.lr = 0x83761B6C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83761B70;
	sub_82534928(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,168(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 168, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-716
	ctx.r4.s64 = ctx.r31.s64 + -716;
	// bl 0x82535898
	ctx.lr = 0x83761B84;
	sub_82535898(ctx, base);
	// addi r4,r31,-700
	ctx.r4.s64 = ctx.r31.s64 + -700;
	// bl 0x82535898
	ctx.lr = 0x83761B8C;
	sub_82535898(ctx, base);
	// addi r4,r31,-688
	ctx.r4.s64 = ctx.r31.s64 + -688;
	// bl 0x82535898
	ctx.lr = 0x83761B94;
	sub_82535898(ctx, base);
	// addi r4,r31,-676
	ctx.r4.s64 = ctx.r31.s64 + -676;
	// bl 0x82535898
	ctx.lr = 0x83761B9C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83761BA0;
	sub_82534928(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// stfs f8,172(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 172, temp.u32);
	// addi r4,r31,-668
	ctx.r4.s64 = ctx.r31.s64 + -668;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x83761BB4;
	sub_82535898(ctx, base);
	// addi r4,r31,-652
	ctx.r4.s64 = ctx.r31.s64 + -652;
	// bl 0x82535898
	ctx.lr = 0x83761BBC;
	sub_82535898(ctx, base);
	// addi r4,r31,-640
	ctx.r4.s64 = ctx.r31.s64 + -640;
	// bl 0x82535898
	ctx.lr = 0x83761BC4;
	sub_82535898(ctx, base);
	// addi r4,r31,-628
	ctx.r4.s64 = ctx.r31.s64 + -628;
	// bl 0x82535898
	ctx.lr = 0x83761BCC;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83761BD0;
	sub_82534928(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// stfs f7,176(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 176, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-620
	ctx.r4.s64 = ctx.r31.s64 + -620;
	// bl 0x82535898
	ctx.lr = 0x83761BE4;
	sub_82535898(ctx, base);
	// addi r4,r31,-604
	ctx.r4.s64 = ctx.r31.s64 + -604;
	// bl 0x82535898
	ctx.lr = 0x83761BEC;
	sub_82535898(ctx, base);
	// addi r4,r31,-592
	ctx.r4.s64 = ctx.r31.s64 + -592;
	// bl 0x82535898
	ctx.lr = 0x83761BF4;
	sub_82535898(ctx, base);
	// addi r4,r31,-580
	ctx.r4.s64 = ctx.r31.s64 + -580;
	// bl 0x82535898
	ctx.lr = 0x83761BFC;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x83761C00;
	sub_82534B10(ctx, base);
	// stb r3,180(r30)
	PPC_STORE_U8(ctx.r30.u32 + 180, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-568
	ctx.r4.s64 = ctx.r31.s64 + -568;
	// bl 0x82535898
	ctx.lr = 0x83761C10;
	sub_82535898(ctx, base);
	// addi r4,r31,-552
	ctx.r4.s64 = ctx.r31.s64 + -552;
	// bl 0x82535898
	ctx.lr = 0x83761C18;
	sub_82535898(ctx, base);
	// addi r4,r31,-540
	ctx.r4.s64 = ctx.r31.s64 + -540;
	// bl 0x82535898
	ctx.lr = 0x83761C20;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83761C24;
	sub_82534928(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// stfs f6,184(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 184, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-528
	ctx.r4.s64 = ctx.r31.s64 + -528;
	// bl 0x82535898
	ctx.lr = 0x83761C38;
	sub_82535898(ctx, base);
	// addi r4,r31,-512
	ctx.r4.s64 = ctx.r31.s64 + -512;
	// bl 0x82535898
	ctx.lr = 0x83761C40;
	sub_82535898(ctx, base);
	// addi r4,r31,-500
	ctx.r4.s64 = ctx.r31.s64 + -500;
	// bl 0x82535898
	ctx.lr = 0x83761C48;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83761C4C;
	sub_82534928(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// stfs f5,188(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 188, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-492
	ctx.r4.s64 = ctx.r31.s64 + -492;
	// bl 0x82535898
	ctx.lr = 0x83761C60;
	sub_82535898(ctx, base);
	// addi r4,r31,-476
	ctx.r4.s64 = ctx.r31.s64 + -476;
	// bl 0x82535898
	ctx.lr = 0x83761C68;
	sub_82535898(ctx, base);
	// addi r4,r31,-464
	ctx.r4.s64 = ctx.r31.s64 + -464;
	// bl 0x82535898
	ctx.lr = 0x83761C70;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x83761C74;
	sub_82534B10(ctx, base);
	// stb r3,192(r30)
	PPC_STORE_U8(ctx.r30.u32 + 192, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-452
	ctx.r4.s64 = ctx.r31.s64 + -452;
	// bl 0x82535898
	ctx.lr = 0x83761C84;
	sub_82535898(ctx, base);
	// addi r4,r31,-436
	ctx.r4.s64 = ctx.r31.s64 + -436;
	// bl 0x82535898
	ctx.lr = 0x83761C8C;
	sub_82535898(ctx, base);
	// addi r4,r31,-424
	ctx.r4.s64 = ctx.r31.s64 + -424;
	// bl 0x82535898
	ctx.lr = 0x83761C94;
	sub_82535898(ctx, base);
	// addi r4,r31,-412
	ctx.r4.s64 = ctx.r31.s64 + -412;
	// bl 0x82535898
	ctx.lr = 0x83761C9C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83761CA0;
	sub_82534928(ctx, base);
	// frsp f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// stfs f4,196(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 196, temp.u32);
	// addi r4,r31,-408
	ctx.r4.s64 = ctx.r31.s64 + -408;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x83761CB4;
	sub_82535898(ctx, base);
	// addi r4,r31,-392
	ctx.r4.s64 = ctx.r31.s64 + -392;
	// bl 0x82535898
	ctx.lr = 0x83761CBC;
	sub_82535898(ctx, base);
	// addi r4,r31,-380
	ctx.r4.s64 = ctx.r31.s64 + -380;
	// bl 0x82535898
	ctx.lr = 0x83761CC4;
	sub_82535898(ctx, base);
	// addi r4,r31,-368
	ctx.r4.s64 = ctx.r31.s64 + -368;
	// bl 0x82535898
	ctx.lr = 0x83761CCC;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83761CD0;
	sub_82534928(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// stfs f3,200(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 200, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-360
	ctx.r4.s64 = ctx.r31.s64 + -360;
	// bl 0x82535898
	ctx.lr = 0x83761CE4;
	sub_82535898(ctx, base);
	// addi r4,r31,-344
	ctx.r4.s64 = ctx.r31.s64 + -344;
	// bl 0x82535898
	ctx.lr = 0x83761CEC;
	sub_82535898(ctx, base);
	// addi r4,r31,-332
	ctx.r4.s64 = ctx.r31.s64 + -332;
	// bl 0x82535898
	ctx.lr = 0x83761CF4;
	sub_82535898(ctx, base);
	// addi r4,r31,-320
	ctx.r4.s64 = ctx.r31.s64 + -320;
	// bl 0x82535898
	ctx.lr = 0x83761CFC;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83761D00;
	sub_82534928(ctx, base);
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// stfs f2,204(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 204, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-312
	ctx.r4.s64 = ctx.r31.s64 + -312;
	// bl 0x82535898
	ctx.lr = 0x83761D14;
	sub_82535898(ctx, base);
	// addi r4,r31,-296
	ctx.r4.s64 = ctx.r31.s64 + -296;
	// bl 0x82535898
	ctx.lr = 0x83761D1C;
	sub_82535898(ctx, base);
	// addi r4,r31,-284
	ctx.r4.s64 = ctx.r31.s64 + -284;
	// bl 0x82535898
	ctx.lr = 0x83761D24;
	sub_82535898(ctx, base);
	// addi r4,r31,-272
	ctx.r4.s64 = ctx.r31.s64 + -272;
	// bl 0x82535898
	ctx.lr = 0x83761D2C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83761D30;
	sub_82534928(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// stfs f1,208(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 208, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-268
	ctx.r4.s64 = ctx.r31.s64 + -268;
	// bl 0x82535898
	ctx.lr = 0x83761D44;
	sub_82535898(ctx, base);
	// addi r4,r31,-252
	ctx.r4.s64 = ctx.r31.s64 + -252;
	// bl 0x82535898
	ctx.lr = 0x83761D4C;
	sub_82535898(ctx, base);
	// addi r4,r31,-240
	ctx.r4.s64 = ctx.r31.s64 + -240;
	// bl 0x82535898
	ctx.lr = 0x83761D54;
	sub_82535898(ctx, base);
	// addi r4,r31,-228
	ctx.r4.s64 = ctx.r31.s64 + -228;
	// bl 0x82535898
	ctx.lr = 0x83761D5C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83761D60;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,212(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 212, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-220
	ctx.r4.s64 = ctx.r31.s64 + -220;
	// bl 0x82535898
	ctx.lr = 0x83761D74;
	sub_82535898(ctx, base);
	// addi r4,r31,-204
	ctx.r4.s64 = ctx.r31.s64 + -204;
	// bl 0x82535898
	ctx.lr = 0x83761D7C;
	sub_82535898(ctx, base);
	// addi r4,r31,-192
	ctx.r4.s64 = ctx.r31.s64 + -192;
	// bl 0x82535898
	ctx.lr = 0x83761D84;
	sub_82535898(ctx, base);
	// addi r4,r31,-180
	ctx.r4.s64 = ctx.r31.s64 + -180;
	// bl 0x82535898
	ctx.lr = 0x83761D8C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83761D90;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,216(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 216, temp.u32);
	// addi r4,r31,-172
	ctx.r4.s64 = ctx.r31.s64 + -172;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x83761DA4;
	sub_82535898(ctx, base);
	// addi r4,r31,-156
	ctx.r4.s64 = ctx.r31.s64 + -156;
	// bl 0x82535898
	ctx.lr = 0x83761DAC;
	sub_82535898(ctx, base);
	// addi r4,r31,-144
	ctx.r4.s64 = ctx.r31.s64 + -144;
	// bl 0x82535898
	ctx.lr = 0x83761DB4;
	sub_82535898(ctx, base);
	// addi r4,r31,-132
	ctx.r4.s64 = ctx.r31.s64 + -132;
	// bl 0x82535898
	ctx.lr = 0x83761DBC;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83761DC0;
	sub_82534928(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,220(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 220, temp.u32);
	// addi r4,r31,-124
	ctx.r4.s64 = ctx.r31.s64 + -124;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x83761DD4;
	sub_82535898(ctx, base);
	// addi r4,r31,-108
	ctx.r4.s64 = ctx.r31.s64 + -108;
	// bl 0x82535898
	ctx.lr = 0x83761DDC;
	sub_82535898(ctx, base);
	// addi r4,r31,-96
	ctx.r4.s64 = ctx.r31.s64 + -96;
	// bl 0x82535898
	ctx.lr = 0x83761DE4;
	sub_82535898(ctx, base);
	// addi r4,r31,-84
	ctx.r4.s64 = ctx.r31.s64 + -84;
	// bl 0x82535898
	ctx.lr = 0x83761DEC;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83761DF0;
	sub_82534928(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,224(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 224, temp.u32);
	// addi r4,r31,-76
	ctx.r4.s64 = ctx.r31.s64 + -76;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x83761E04;
	sub_82535898(ctx, base);
	// addi r4,r31,-60
	ctx.r4.s64 = ctx.r31.s64 + -60;
	// bl 0x82535898
	ctx.lr = 0x83761E0C;
	sub_82535898(ctx, base);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// bl 0x82535898
	ctx.lr = 0x83761E14;
	sub_82535898(ctx, base);
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// bl 0x82535898
	ctx.lr = 0x83761E1C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83761E20;
	sub_82534928(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,228(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 228, temp.u32);
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x83761E34;
	sub_82535898(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// bl 0x82535898
	ctx.lr = 0x83761E3C;
	sub_82535898(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83761E44;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83761E48;
	sub_82534928(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,232(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 232, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83761E5C"))) PPC_WEAK_FUNC(sub_83761E5C);
PPC_FUNC_IMPL(__imp__sub_83761E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83761E60"))) PPC_WEAK_FUNC(sub_83761E60);
PPC_FUNC_IMPL(__imp__sub_83761E60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83761E68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83761e88
	if (!cr6.eq) goto loc_83761E88;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83761E88:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83763830
	ctx.lr = 0x83761E94;
	sub_83763830(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x83763830
	ctx.lr = 0x83761EC0;
	sub_83763830(ctx, base);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r10,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r10.u8);
	// lfs f11,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,24(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,28(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x83763830
	ctx.lr = 0x83761EE4;
	sub_83763830(ctx, base);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r9,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r9.u8);
	// lfs f9,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,36(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,40(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83763830
	ctx.lr = 0x83761F08;
	sub_83763830(ctx, base);
	// lfs f7,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f7,44(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f6,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,48(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lbz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// stb r8,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r8.u8);
	// lbz r7,9(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// stb r7,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r7.u8);
	// lfs f5,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,56(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f4,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,60(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f3,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,64(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x83763830
	ctx.lr = 0x83761F4C;
	sub_83763830(ctx, base);
	// lfs f2,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f2,68(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lfs f1,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,72(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lbz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// stb r6,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r6.u8);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83763830
	ctx.lr = 0x83761F74;
	sub_83763830(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lbz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// stb r5,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r5.u8);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83763830
	ctx.lr = 0x83761F98;
	sub_83763830(ctx, base);
	// lfs f12,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f12,92(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,96(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,100(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// lfs f9,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,104(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// lfs f8,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,108(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// lfs f7,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,112(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// lfs f6,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,116(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// lfs f5,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,120(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// lfs f4,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,124(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// lbz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 36);
	// stb r3,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r3.u8);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x83763830
	ctx.lr = 0x83761FF4;
	sub_83763830(ctx, base);
	// lfs f3,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f3,132(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// lfs f2,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,136(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// stb r11,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r11.u8);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83763830
	ctx.lr = 0x83762018;
	sub_83763830(ctx, base);
	// lfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f1,144(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,152(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,156(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// lfs f11,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,160(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// lfs f10,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,164(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// lfs f9,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,168(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// lfs f8,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,172(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// lfs f7,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,176(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// lbz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 36);
	// stb r10,180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 180, ctx.r10.u8);
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x83763830
	ctx.lr = 0x83762074;
	sub_83763830(ctx, base);
	// lfs f6,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f6,184(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lfs f5,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,188(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// lbz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// stb r9,192(r31)
	PPC_STORE_U8(ctx.r31.u32 + 192, ctx.r9.u8);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83763830
	ctx.lr = 0x8376209C;
	sub_83763830(ctx, base);
	// lfs f4,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,196(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// lfs f3,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,200(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// lfs f2,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,204(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 204, temp.u32);
	// lfs f1,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,208(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// lfs f0,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,212(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// lfs f13,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,216(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// lfs f12,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,220(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
	// lfs f11,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,224(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
	// lfs f10,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f10,228(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 228, temp.u32);
	// lfs f9,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,232(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837620F8"))) PPC_WEAK_FUNC(sub_837620F8);
PPC_FUNC_IMPL(__imp__sub_837620F8) {
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
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,236
	ctx.r4.s64 = 236;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8376211C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83762138
	if (cr6.eq) goto loc_83762138;
	// bl 0x837613d8
	ctx.lr = 0x83762128;
	sub_837613D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83762138:
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

__attribute__((alias("__imp__sub_8376214C"))) PPC_WEAK_FUNC(sub_8376214C);
PPC_FUNC_IMPL(__imp__sub_8376214C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83762150"))) PPC_WEAK_FUNC(sub_83762150);
PPC_FUNC_IMPL(__imp__sub_83762150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32213
	ctx.r9.s64 = -2111111168;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,-15296
	ctx.r8.s64 = ctx.r9.s64 + -15296;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r11.u8);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stb r11,22(r3)
	PPC_STORE_U8(ctx.r3.u32 + 22, ctx.r11.u8);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stb r11,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, ctx.r11.u8);
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// stb r11,60(r3)
	PPC_STORE_U8(ctx.r3.u32 + 60, ctx.r11.u8);
	// stfs f0,132(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stb r11,80(r3)
	PPC_STORE_U8(ctx.r3.u32 + 80, ctx.r11.u8);
	// stfs f0,136(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stb r11,128(r3)
	PPC_STORE_U8(ctx.r3.u32 + 128, ctx.r11.u8);
	// stb r11,129(r3)
	PPC_STORE_U8(ctx.r3.u32 + 129, ctx.r11.u8);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// stb r11,144(r3)
	PPC_STORE_U8(ctx.r3.u32 + 144, ctx.r11.u8);
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// stw r11,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83762210"))) PPC_WEAK_FUNC(sub_83762210);
PPC_FUNC_IMPL(__imp__sub_83762210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83762218;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-15388
	ctx.r31.s64 = ctx.r11.s64 + -15388;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r31,-1140
	ctx.r4.s64 = ctx.r31.s64 + -1140;
	// bl 0x82535898
	ctx.lr = 0x83762238;
	sub_82535898(ctx, base);
	// addi r4,r31,-1132
	ctx.r4.s64 = ctx.r31.s64 + -1132;
	// bl 0x82535898
	ctx.lr = 0x83762240;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x83762244;
	sub_82534B10(ctx, base);
	// stb r3,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1124
	ctx.r4.s64 = ctx.r31.s64 + -1124;
	// bl 0x82535898
	ctx.lr = 0x83762254;
	sub_82535898(ctx, base);
	// addi r4,r31,-1116
	ctx.r4.s64 = ctx.r31.s64 + -1116;
	// bl 0x82535898
	ctx.lr = 0x8376225C;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83762260;
	sub_82534770(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1104
	ctx.r4.s64 = ctx.r31.s64 + -1104;
	// bl 0x82535898
	ctx.lr = 0x83762270;
	sub_82535898(ctx, base);
	// addi r4,r31,-1096
	ctx.r4.s64 = ctx.r31.s64 + -1096;
	// bl 0x82535898
	ctx.lr = 0x83762278;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8376227C;
	sub_82534770(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1084
	ctx.r4.s64 = ctx.r31.s64 + -1084;
	// bl 0x82535898
	ctx.lr = 0x8376228C;
	sub_82535898(ctx, base);
	// addi r4,r31,-1076
	ctx.r4.s64 = ctx.r31.s64 + -1076;
	// bl 0x82535898
	ctx.lr = 0x83762294;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83762298;
	sub_82534770(ctx, base);
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1064
	ctx.r4.s64 = ctx.r31.s64 + -1064;
	// bl 0x82535898
	ctx.lr = 0x837622A8;
	sub_82535898(ctx, base);
	// addi r4,r31,-1056
	ctx.r4.s64 = ctx.r31.s64 + -1056;
	// bl 0x82535898
	ctx.lr = 0x837622B0;
	sub_82535898(ctx, base);
	// addi r4,r31,-1044
	ctx.r4.s64 = ctx.r31.s64 + -1044;
	// bl 0x82535898
	ctx.lr = 0x837622B8;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x837622BC;
	sub_82534B10(ctx, base);
	// stb r3,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1036
	ctx.r4.s64 = ctx.r31.s64 + -1036;
	// bl 0x82535898
	ctx.lr = 0x837622CC;
	sub_82535898(ctx, base);
	// addi r4,r31,-1028
	ctx.r4.s64 = ctx.r31.s64 + -1028;
	// bl 0x82535898
	ctx.lr = 0x837622D4;
	sub_82535898(ctx, base);
	// addi r4,r31,-1016
	ctx.r4.s64 = ctx.r31.s64 + -1016;
	// bl 0x82535898
	ctx.lr = 0x837622DC;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x837622E0;
	sub_82534B10(ctx, base);
	// stb r3,21(r30)
	PPC_STORE_U8(ctx.r30.u32 + 21, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-1004
	ctx.r4.s64 = ctx.r31.s64 + -1004;
	// bl 0x82535898
	ctx.lr = 0x837622F0;
	sub_82535898(ctx, base);
	// addi r4,r31,-996
	ctx.r4.s64 = ctx.r31.s64 + -996;
	// bl 0x82535898
	ctx.lr = 0x837622F8;
	sub_82535898(ctx, base);
	// addi r4,r31,-984
	ctx.r4.s64 = ctx.r31.s64 + -984;
	// bl 0x82535898
	ctx.lr = 0x83762300;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x83762304;
	sub_82534B10(ctx, base);
	// stb r3,22(r30)
	PPC_STORE_U8(ctx.r30.u32 + 22, ctx.r3.u8);
	// addi r4,r31,-976
	ctx.r4.s64 = ctx.r31.s64 + -976;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x83762314;
	sub_82535898(ctx, base);
	// addi r4,r31,-968
	ctx.r4.s64 = ctx.r31.s64 + -968;
	// bl 0x82535898
	ctx.lr = 0x8376231C;
	sub_82535898(ctx, base);
	// addi r4,r31,-956
	ctx.r4.s64 = ctx.r31.s64 + -956;
	// bl 0x82535898
	ctx.lr = 0x83762324;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83762328;
	sub_82534770(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-936
	ctx.r4.s64 = ctx.r31.s64 + -936;
	// bl 0x82535898
	ctx.lr = 0x83762338;
	sub_82535898(ctx, base);
	// addi r4,r31,-928
	ctx.r4.s64 = ctx.r31.s64 + -928;
	// bl 0x82535898
	ctx.lr = 0x83762340;
	sub_82535898(ctx, base);
	// addi r4,r31,-916
	ctx.r4.s64 = ctx.r31.s64 + -916;
	// bl 0x82535898
	ctx.lr = 0x83762348;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x8376234C;
	sub_82534770(ctx, base);
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-900
	ctx.r4.s64 = ctx.r31.s64 + -900;
	// bl 0x82535898
	ctx.lr = 0x8376235C;
	sub_82535898(ctx, base);
	// addi r4,r31,-892
	ctx.r4.s64 = ctx.r31.s64 + -892;
	// bl 0x82535898
	ctx.lr = 0x83762364;
	sub_82535898(ctx, base);
	// addi r4,r31,-880
	ctx.r4.s64 = ctx.r31.s64 + -880;
	// bl 0x82535898
	ctx.lr = 0x8376236C;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83762370;
	sub_82534770(ctx, base);
	// stw r3,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-860
	ctx.r4.s64 = ctx.r31.s64 + -860;
	// bl 0x82535898
	ctx.lr = 0x83762380;
	sub_82535898(ctx, base);
	// addi r4,r31,-852
	ctx.r4.s64 = ctx.r31.s64 + -852;
	// bl 0x82535898
	ctx.lr = 0x83762388;
	sub_82535898(ctx, base);
	// addi r4,r31,-840
	ctx.r4.s64 = ctx.r31.s64 + -840;
	// bl 0x82535898
	ctx.lr = 0x83762390;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83762394;
	sub_82534770(ctx, base);
	// stw r3,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-820
	ctx.r4.s64 = ctx.r31.s64 + -820;
	// bl 0x82535898
	ctx.lr = 0x837623A4;
	sub_82535898(ctx, base);
	// addi r4,r31,-812
	ctx.r4.s64 = ctx.r31.s64 + -812;
	// bl 0x82535898
	ctx.lr = 0x837623AC;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837623B0;
	sub_82534770(ctx, base);
	// stw r3,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-804
	ctx.r4.s64 = ctx.r31.s64 + -804;
	// bl 0x82535898
	ctx.lr = 0x837623C0;
	sub_82535898(ctx, base);
	// addi r4,r31,-796
	ctx.r4.s64 = ctx.r31.s64 + -796;
	// bl 0x82535898
	ctx.lr = 0x837623C8;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837623CC;
	sub_82534770(ctx, base);
	// stw r3,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-784
	ctx.r4.s64 = ctx.r31.s64 + -784;
	// bl 0x82535898
	ctx.lr = 0x837623DC;
	sub_82535898(ctx, base);
	// addi r4,r31,-776
	ctx.r4.s64 = ctx.r31.s64 + -776;
	// bl 0x82535898
	ctx.lr = 0x837623E4;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x837623E8;
	sub_82534B10(ctx, base);
	// stb r3,48(r30)
	PPC_STORE_U8(ctx.r30.u32 + 48, ctx.r3.u8);
	// addi r4,r31,-768
	ctx.r4.s64 = ctx.r31.s64 + -768;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x837623F8;
	sub_82535898(ctx, base);
	// addi r4,r31,-760
	ctx.r4.s64 = ctx.r31.s64 + -760;
	// bl 0x82535898
	ctx.lr = 0x83762400;
	sub_82535898(ctx, base);
	// addi r4,r31,-748
	ctx.r4.s64 = ctx.r31.s64 + -748;
	// bl 0x82535898
	ctx.lr = 0x83762408;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8376240C;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,52(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-736
	ctx.r4.s64 = ctx.r31.s64 + -736;
	// bl 0x82535898
	ctx.lr = 0x83762420;
	sub_82535898(ctx, base);
	// addi r4,r31,-728
	ctx.r4.s64 = ctx.r31.s64 + -728;
	// bl 0x82535898
	ctx.lr = 0x83762428;
	sub_82535898(ctx, base);
	// addi r4,r31,-716
	ctx.r4.s64 = ctx.r31.s64 + -716;
	// bl 0x82535898
	ctx.lr = 0x83762430;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83762434;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,56(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-708
	ctx.r4.s64 = ctx.r31.s64 + -708;
	// bl 0x82535898
	ctx.lr = 0x83762448;
	sub_82535898(ctx, base);
	// addi r4,r31,-700
	ctx.r4.s64 = ctx.r31.s64 + -700;
	// bl 0x82535898
	ctx.lr = 0x83762450;
	sub_82535898(ctx, base);
	// addi r4,r31,-688
	ctx.r4.s64 = ctx.r31.s64 + -688;
	// bl 0x82535898
	ctx.lr = 0x83762458;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8376245C;
	sub_82534B10(ctx, base);
	// stb r3,60(r30)
	PPC_STORE_U8(ctx.r30.u32 + 60, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-680
	ctx.r4.s64 = ctx.r31.s64 + -680;
	// bl 0x82535898
	ctx.lr = 0x8376246C;
	sub_82535898(ctx, base);
	// addi r4,r31,-672
	ctx.r4.s64 = ctx.r31.s64 + -672;
	// bl 0x82535898
	ctx.lr = 0x83762474;
	sub_82535898(ctx, base);
	// addi r4,r31,-660
	ctx.r4.s64 = ctx.r31.s64 + -660;
	// bl 0x82535898
	ctx.lr = 0x8376247C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83762480;
	sub_82534928(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,64(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 64, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-652
	ctx.r4.s64 = ctx.r31.s64 + -652;
	// bl 0x82535898
	ctx.lr = 0x83762494;
	sub_82535898(ctx, base);
	// addi r4,r31,-644
	ctx.r4.s64 = ctx.r31.s64 + -644;
	// bl 0x82535898
	ctx.lr = 0x8376249C;
	sub_82535898(ctx, base);
	// addi r4,r31,-632
	ctx.r4.s64 = ctx.r31.s64 + -632;
	// bl 0x82535898
	ctx.lr = 0x837624A4;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837624A8;
	sub_82534928(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,68(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-624
	ctx.r4.s64 = ctx.r31.s64 + -624;
	// bl 0x82535898
	ctx.lr = 0x837624BC;
	sub_82535898(ctx, base);
	// addi r4,r31,-616
	ctx.r4.s64 = ctx.r31.s64 + -616;
	// bl 0x82535898
	ctx.lr = 0x837624C4;
	sub_82535898(ctx, base);
	// addi r4,r31,-604
	ctx.r4.s64 = ctx.r31.s64 + -604;
	// bl 0x82535898
	ctx.lr = 0x837624CC;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837624D0;
	sub_82534928(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,72(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 72, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-592
	ctx.r4.s64 = ctx.r31.s64 + -592;
	// bl 0x82535898
	ctx.lr = 0x837624E4;
	sub_82535898(ctx, base);
	// addi r4,r31,-584
	ctx.r4.s64 = ctx.r31.s64 + -584;
	// bl 0x82535898
	ctx.lr = 0x837624EC;
	sub_82535898(ctx, base);
	// addi r4,r31,-572
	ctx.r4.s64 = ctx.r31.s64 + -572;
	// bl 0x82535898
	ctx.lr = 0x837624F4;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837624F8;
	sub_82534928(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,76(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 76, temp.u32);
	// addi r4,r31,-564
	ctx.r4.s64 = ctx.r31.s64 + -564;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8376250C;
	sub_82535898(ctx, base);
	// addi r4,r31,-556
	ctx.r4.s64 = ctx.r31.s64 + -556;
	// bl 0x82535898
	ctx.lr = 0x83762514;
	sub_82535898(ctx, base);
	// addi r4,r31,-544
	ctx.r4.s64 = ctx.r31.s64 + -544;
	// bl 0x82535898
	ctx.lr = 0x8376251C;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x83762520;
	sub_82534B10(ctx, base);
	// stb r3,80(r30)
	PPC_STORE_U8(ctx.r30.u32 + 80, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-536
	ctx.r4.s64 = ctx.r31.s64 + -536;
	// bl 0x82535898
	ctx.lr = 0x83762530;
	sub_82535898(ctx, base);
	// addi r4,r31,-528
	ctx.r4.s64 = ctx.r31.s64 + -528;
	// bl 0x82535898
	ctx.lr = 0x83762538;
	sub_82535898(ctx, base);
	// addi r4,r31,-516
	ctx.r4.s64 = ctx.r31.s64 + -516;
	// bl 0x82535898
	ctx.lr = 0x83762540;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83762544;
	sub_82534770(ctx, base);
	// stw r3,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-504
	ctx.r4.s64 = ctx.r31.s64 + -504;
	// bl 0x82535898
	ctx.lr = 0x83762554;
	sub_82535898(ctx, base);
	// addi r4,r31,-496
	ctx.r4.s64 = ctx.r31.s64 + -496;
	// bl 0x82535898
	ctx.lr = 0x8376255C;
	sub_82535898(ctx, base);
	// addi r4,r31,-484
	ctx.r4.s64 = ctx.r31.s64 + -484;
	// bl 0x82535898
	ctx.lr = 0x83762564;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83762568;
	sub_82534770(ctx, base);
	// stw r3,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-468
	ctx.r4.s64 = ctx.r31.s64 + -468;
	// bl 0x82535898
	ctx.lr = 0x83762578;
	sub_82535898(ctx, base);
	// addi r4,r31,-460
	ctx.r4.s64 = ctx.r31.s64 + -460;
	// bl 0x82535898
	ctx.lr = 0x83762580;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83762584;
	sub_82534770(ctx, base);
	// stw r3,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-448
	ctx.r4.s64 = ctx.r31.s64 + -448;
	// bl 0x82535898
	ctx.lr = 0x83762594;
	sub_82535898(ctx, base);
	// addi r4,r31,-440
	ctx.r4.s64 = ctx.r31.s64 + -440;
	// bl 0x82535898
	ctx.lr = 0x8376259C;
	sub_82535898(ctx, base);
	// addi r4,r31,-424
	ctx.r4.s64 = ctx.r31.s64 + -424;
	// bl 0x82535898
	ctx.lr = 0x837625A4;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837625A8;
	sub_82534928(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// stfs f8,96(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 96, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-420
	ctx.r4.s64 = ctx.r31.s64 + -420;
	// bl 0x82535898
	ctx.lr = 0x837625BC;
	sub_82535898(ctx, base);
	// addi r4,r31,-412
	ctx.r4.s64 = ctx.r31.s64 + -412;
	// bl 0x82535898
	ctx.lr = 0x837625C4;
	sub_82535898(ctx, base);
	// addi r4,r31,-396
	ctx.r4.s64 = ctx.r31.s64 + -396;
	// bl 0x82535898
	ctx.lr = 0x837625CC;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837625D0;
	sub_82534928(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// stfs f7,100(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 100, temp.u32);
	// addi r4,r31,-392
	ctx.r4.s64 = ctx.r31.s64 + -392;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x837625E4;
	sub_82535898(ctx, base);
	// addi r4,r31,-384
	ctx.r4.s64 = ctx.r31.s64 + -384;
	// bl 0x82535898
	ctx.lr = 0x837625EC;
	sub_82535898(ctx, base);
	// addi r4,r31,-368
	ctx.r4.s64 = ctx.r31.s64 + -368;
	// bl 0x82535898
	ctx.lr = 0x837625F4;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837625F8;
	sub_82534928(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// stfs f6,104(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 104, temp.u32);
	// addi r4,r31,-364
	ctx.r4.s64 = ctx.r31.s64 + -364;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8376260C;
	sub_82535898(ctx, base);
	// addi r4,r31,-356
	ctx.r4.s64 = ctx.r31.s64 + -356;
	// bl 0x82535898
	ctx.lr = 0x83762614;
	sub_82535898(ctx, base);
	// addi r4,r31,-340
	ctx.r4.s64 = ctx.r31.s64 + -340;
	// bl 0x82535898
	ctx.lr = 0x8376261C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83762620;
	sub_82534928(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// stfs f5,108(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 108, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-336
	ctx.r4.s64 = ctx.r31.s64 + -336;
	// bl 0x82535898
	ctx.lr = 0x83762634;
	sub_82535898(ctx, base);
	// addi r4,r31,-328
	ctx.r4.s64 = ctx.r31.s64 + -328;
	// bl 0x82535898
	ctx.lr = 0x8376263C;
	sub_82535898(ctx, base);
	// addi r4,r31,-312
	ctx.r4.s64 = ctx.r31.s64 + -312;
	// bl 0x82535898
	ctx.lr = 0x83762644;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83762648;
	sub_82534928(ctx, base);
	// frsp f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// stfs f4,112(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 112, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-308
	ctx.r4.s64 = ctx.r31.s64 + -308;
	// bl 0x82535898
	ctx.lr = 0x8376265C;
	sub_82535898(ctx, base);
	// addi r4,r31,-300
	ctx.r4.s64 = ctx.r31.s64 + -300;
	// bl 0x82535898
	ctx.lr = 0x83762664;
	sub_82535898(ctx, base);
	// addi r4,r31,-284
	ctx.r4.s64 = ctx.r31.s64 + -284;
	// bl 0x82535898
	ctx.lr = 0x8376266C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83762670;
	sub_82534928(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// stfs f3,116(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 116, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-280
	ctx.r4.s64 = ctx.r31.s64 + -280;
	// bl 0x82535898
	ctx.lr = 0x83762684;
	sub_82535898(ctx, base);
	// addi r4,r31,-272
	ctx.r4.s64 = ctx.r31.s64 + -272;
	// bl 0x82535898
	ctx.lr = 0x8376268C;
	sub_82535898(ctx, base);
	// addi r4,r31,-256
	ctx.r4.s64 = ctx.r31.s64 + -256;
	// bl 0x82535898
	ctx.lr = 0x83762694;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83762698;
	sub_82534928(ctx, base);
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// stfs f2,120(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 120, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-248
	ctx.r4.s64 = ctx.r31.s64 + -248;
	// bl 0x82535898
	ctx.lr = 0x837626AC;
	sub_82535898(ctx, base);
	// addi r4,r31,-240
	ctx.r4.s64 = ctx.r31.s64 + -240;
	// bl 0x82535898
	ctx.lr = 0x837626B4;
	sub_82535898(ctx, base);
	// addi r4,r31,-224
	ctx.r4.s64 = ctx.r31.s64 + -224;
	// bl 0x82535898
	ctx.lr = 0x837626BC;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837626C0;
	sub_82534928(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// stfs f1,124(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 124, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,-216
	ctx.r4.s64 = ctx.r31.s64 + -216;
	// bl 0x82535898
	ctx.lr = 0x837626D4;
	sub_82535898(ctx, base);
	// addi r4,r31,-208
	ctx.r4.s64 = ctx.r31.s64 + -208;
	// bl 0x82535898
	ctx.lr = 0x837626DC;
	sub_82535898(ctx, base);
	// addi r4,r31,-192
	ctx.r4.s64 = ctx.r31.s64 + -192;
	// bl 0x82535898
	ctx.lr = 0x837626E4;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x837626E8;
	sub_82534B10(ctx, base);
	// stb r3,128(r30)
	PPC_STORE_U8(ctx.r30.u32 + 128, ctx.r3.u8);
	// addi r4,r31,-176
	ctx.r4.s64 = ctx.r31.s64 + -176;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x837626F8;
	sub_82535898(ctx, base);
	// addi r4,r31,-168
	ctx.r4.s64 = ctx.r31.s64 + -168;
	// bl 0x82535898
	ctx.lr = 0x83762700;
	sub_82535898(ctx, base);
	// addi r4,r31,-152
	ctx.r4.s64 = ctx.r31.s64 + -152;
	// bl 0x82535898
	ctx.lr = 0x83762708;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8376270C;
	sub_82534B10(ctx, base);
	// stb r3,129(r30)
	PPC_STORE_U8(ctx.r30.u32 + 129, ctx.r3.u8);
	// addi r4,r31,-136
	ctx.r4.s64 = ctx.r31.s64 + -136;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8376271C;
	sub_82535898(ctx, base);
	// addi r4,r31,-128
	ctx.r4.s64 = ctx.r31.s64 + -128;
	// bl 0x82535898
	ctx.lr = 0x83762724;
	sub_82535898(ctx, base);
	// addi r4,r31,-112
	ctx.r4.s64 = ctx.r31.s64 + -112;
	// bl 0x82535898
	ctx.lr = 0x8376272C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83762730;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,132(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 132, temp.u32);
	// addi r4,r31,-96
	ctx.r4.s64 = ctx.r31.s64 + -96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x83762744;
	sub_82535898(ctx, base);
	// addi r4,r31,-88
	ctx.r4.s64 = ctx.r31.s64 + -88;
	// bl 0x82535898
	ctx.lr = 0x8376274C;
	sub_82535898(ctx, base);
	// addi r4,r31,-72
	ctx.r4.s64 = ctx.r31.s64 + -72;
	// bl 0x82535898
	ctx.lr = 0x83762754;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83762758;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,136(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 136, temp.u32);
	// addi r4,r31,-60
	ctx.r4.s64 = ctx.r31.s64 + -60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x8376276C;
	sub_82535898(ctx, base);
	// addi r4,r31,-52
	ctx.r4.s64 = ctx.r31.s64 + -52;
	// bl 0x82535898
	ctx.lr = 0x83762774;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83762778;
	sub_82534770(ctx, base);
	// stw r3,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r3.u32);
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x83762788;
	sub_82535898(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// bl 0x82535898
	ctx.lr = 0x83762790;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x83762794;
	sub_82534B10(ctx, base);
	// stb r3,144(r30)
	PPC_STORE_U8(ctx.r30.u32 + 144, ctx.r3.u8);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x837627A4;
	sub_82535898(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// bl 0x82535898
	ctx.lr = 0x837627AC;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837627B0;
	sub_82534770(ctx, base);
	// stw r3,148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 148, ctx.r3.u32);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x837627C0;
	sub_82535898(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x837627C8;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x837627CC;
	sub_82534770(ctx, base);
	// stw r3,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837627DC"))) PPC_WEAK_FUNC(sub_837627DC);
PPC_FUNC_IMPL(__imp__sub_837627DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837627E0"))) PPC_WEAK_FUNC(sub_837627E0);
PPC_FUNC_IMPL(__imp__sub_837627E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837627E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83762808
	if (!cr6.eq) goto loc_83762808;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83762808:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83763830
	ctx.lr = 0x83762814;
	sub_83763830(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x83763830
	ctx.lr = 0x83762844;
	sub_83763830(ctx, base);
	// lbz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r7,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r7.u8);
	// lbz r6,1(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// stb r6,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r6.u8);
	// lbz r5,2(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// stb r5,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r5.u8);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// lwz r7,20(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// lwz r6,24(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// stw r6,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r6.u32);
	// lbz r5,28(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 28);
	// stb r5,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r5.u8);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x83763830
	ctx.lr = 0x837628A0;
	sub_83763830(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83763830
	ctx.lr = 0x837628B0;
	sub_83763830(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,56(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lbz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// stb r3,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r3.u8);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x83763830
	ctx.lr = 0x837628D4;
	sub_83763830(ctx, base);
	// lfs f12,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f12,64(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,68(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,72(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lfs f9,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,76(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lbz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r8,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r8.u32);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x83763830
	ctx.lr = 0x83762920;
	sub_83763830(ctx, base);
	// lfs f8,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f8,96(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,100(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x83763830
	ctx.lr = 0x8376293C;
	sub_83763830(ctx, base);
	// lfs f6,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f6,104(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// lfs f5,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,108(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x83763830
	ctx.lr = 0x83762958;
	sub_83763830(ctx, base);
	// lfs f4,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,112(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f3,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,116(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x83763830
	ctx.lr = 0x83762974;
	sub_83763830(ctx, base);
	// lfs f2,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f2,120(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// lfs f1,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,124(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// lbz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// stb r7,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r7.u8);
	// lbz r6,9(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// stb r6,129(r31)
	PPC_STORE_U8(ctx.r31.u32 + 129, ctx.r6.u8);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,136(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// lwz r5,28(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// stw r5,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r5.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x83763830
	ctx.lr = 0x837629B8;
	sub_83763830(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// stb r11,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r11.u8);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r9,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837629E0"))) PPC_WEAK_FUNC(sub_837629E0);
PPC_FUNC_IMPL(__imp__sub_837629E0) {
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
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,156
	ctx.r4.s64 = 156;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83762A04;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83762a20
	if (cr6.eq) goto loc_83762A20;
	// bl 0x83762150
	ctx.lr = 0x83762A10;
	sub_83762150(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83762A20:
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

__attribute__((alias("__imp__sub_83762A34"))) PPC_WEAK_FUNC(sub_83762A34);
PPC_FUNC_IMPL(__imp__sub_83762A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83762A38"))) PPC_WEAK_FUNC(sub_83762A38);
PPC_FUNC_IMPL(__imp__sub_83762A38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32213
	ctx.r8.s64 = -2111111168;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r8,-13844
	ctx.r7.s64 = ctx.r8.s64 + -13844;
	// addi r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 + 24;
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// addi r10,r3,44
	ctx.r10.s64 = ctx.r3.s64 + 44;
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// addi r10,r3,76
	ctx.r10.s64 = ctx.r3.s64 + 76;
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// addi r10,r3,212
	ctx.r10.s64 = ctx.r3.s64 + 212;
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// addi r9,r3,108
	ctx.r9.s64 = ctx.r3.s64 + 108;
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// addi r8,r3,132
	ctx.r8.s64 = ctx.r3.s64 + 132;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// addi r10,r3,232
	ctx.r10.s64 = ctx.r3.s64 + 232;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// stfs f0,152(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// stfs f0,156(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// stfs f0,160(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// stfs f0,164(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// stfs f0,168(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// stfs f0,172(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// stfs f0,176(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// stfs f0,180(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// stfs f0,184(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// stfs f0,188(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// stfs f0,192(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// stfs f0,196(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// stfs f0,200(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// stfs f0,204(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// stfs f0,208(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// stw r11,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r11.u32);
	// stw r11,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r11.u32);
	// stw r11,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r11.u32);
	// stw r11,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r11.u32);
	// stw r11,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
	// stw r11,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r11.u32);
	// stw r11,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r11.u32);
	// stw r11,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r11.u32);
	// stw r11,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r11.u32);
	// stw r11,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r11.u32);
	// stw r11,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r11.u32);
	// stw r11,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r11.u32);
	// addi r10,r3,252
	ctx.r10.s64 = ctx.r3.s64 + 252;
	// stw r11,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r11.u32);
	// addi r10,r3,272
	ctx.r10.s64 = ctx.r3.s64 + 272;
	// stw r11,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, ctx.r11.u32);
	// addi r10,r3,312
	ctx.r10.s64 = ctx.r3.s64 + 312;
	// stw r11,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r11.u32);
	// stw r11,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r11.u32);
	// addi r10,r3,380
	ctx.r10.s64 = ctx.r3.s64 + 380;
	// stw r11,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r11.u32);
	// stw r11,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r11.u32);
	// stw r11,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, ctx.r11.u32);
	// stw r11,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, ctx.r11.u32);
	// stfs f0,292(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 292, temp.u32);
	// stfs f0,296(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 296, temp.u32);
	// stfs f0,300(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 300, temp.u32);
	// stfs f0,304(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 304, temp.u32);
	// stfs f0,308(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 308, temp.u32);
	// stw r11,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r11.u32);
	// stw r11,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r11.u32);
	// stw r11,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r11.u32);
	// stw r11,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r11.u32);
	// stw r11,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r11.u32);
	// stfs f0,332(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 332, temp.u32);
	// stw r11,360(r3)
	PPC_STORE_U32(ctx.r3.u32 + 360, ctx.r11.u32);
	// stfs f0,336(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 336, temp.u32);
	// stfs f0,340(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 340, temp.u32);
	// stfs f0,344(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 344, temp.u32);
	// stfs f0,348(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 348, temp.u32);
	// stfs f0,352(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 352, temp.u32);
	// stfs f0,356(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 356, temp.u32);
	// stfs f0,364(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 364, temp.u32);
	// stfs f0,368(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 368, temp.u32);
	// stfs f0,372(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 372, temp.u32);
	// stfs f0,376(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 376, temp.u32);
	// stw r11,380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 380, ctx.r11.u32);
	// stw r11,384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 384, ctx.r11.u32);
	// stw r11,388(r3)
	PPC_STORE_U32(ctx.r3.u32 + 388, ctx.r11.u32);
	// stw r11,392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 392, ctx.r11.u32);
	// stw r11,396(r3)
	PPC_STORE_U32(ctx.r3.u32 + 396, ctx.r11.u32);
	// stfs f0,400(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 400, temp.u32);
	// stb r11,416(r3)
	PPC_STORE_U8(ctx.r3.u32 + 416, ctx.r11.u8);
	// stfs f0,404(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 404, temp.u32);
	// stb r11,417(r3)
	PPC_STORE_U8(ctx.r3.u32 + 417, ctx.r11.u8);
	// stfs f0,408(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 408, temp.u32);
	// stfs f0,412(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 412, temp.u32);
	// stfs f0,420(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 420, temp.u32);
	// stfs f0,424(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 424, temp.u32);
	// stfs f0,428(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 428, temp.u32);
	// stfs f0,432(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 432, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83762C34"))) PPC_WEAK_FUNC(sub_83762C34);
PPC_FUNC_IMPL(__imp__sub_83762C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83762C38"))) PPC_WEAK_FUNC(sub_83762C38);
PPC_FUNC_IMPL(__imp__sub_83762C38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83762C40;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,-13948
	ctx.r30.s64 = ctx.r11.s64 + -13948;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r30,-1284
	ctx.r4.s64 = ctx.r30.s64 + -1284;
	// bl 0x82535898
	ctx.lr = 0x83762C60;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83762C64;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r30,-1268
	ctx.r4.s64 = ctx.r30.s64 + -1268;
	// bl 0x82535898
	ctx.lr = 0x83762C78;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83762C7C;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,8(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r30,-1244
	ctx.r4.s64 = ctx.r30.s64 + -1244;
	// bl 0x82535898
	ctx.lr = 0x83762C90;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83762C94;
	sub_82534928(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,12(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r30,-1228
	ctx.r4.s64 = ctx.r30.s64 + -1228;
	// bl 0x82535898
	ctx.lr = 0x83762CA8;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83762CAC;
	sub_82534928(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,16(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 16, temp.u32);
	// addi r4,r30,-1208
	ctx.r4.s64 = ctx.r30.s64 + -1208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83762CC0;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83762CC4;
	sub_82534928(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,20(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 20, temp.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r29,20
	ctx.r27.s64 = ctx.r29.s64 + 20;
loc_83762CD4:
	// addi r4,r30,-1188
	ctx.r4.s64 = ctx.r30.s64 + -1188;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83762CE0;
	sub_82535898(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82535890
	ctx.lr = 0x83762CE8;
	sub_82535890(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83762CEC;
	sub_82534928(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfsu f0,4(r27)
	ea = 4 + ctx.r27.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r27.u32 = ea;
	// cmpwi cr6,r28,5
	cr6.compare<int32_t>(ctx.r28.s32, 5, xer);
	// blt cr6,0x83762cd4
	if (cr6.lt) goto loc_83762CD4;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r29,40
	ctx.r27.s64 = ctx.r29.s64 + 40;
loc_83762D08:
	// addi r4,r30,-1164
	ctx.r4.s64 = ctx.r30.s64 + -1164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83762D14;
	sub_82535898(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82535890
	ctx.lr = 0x83762D1C;
	sub_82535890(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83762D20;
	sub_82534928(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfsu f0,4(r27)
	ea = 4 + ctx.r27.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r27.u32 = ea;
	// cmpwi cr6,r28,5
	cr6.compare<int32_t>(ctx.r28.s32, 5, xer);
	// blt cr6,0x83762d08
	if (cr6.lt) goto loc_83762D08;
	// addi r4,r30,-1136
	ctx.r4.s64 = ctx.r30.s64 + -1136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83762D40;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83762D44;
	sub_82534770(ctx, base);
	// stw r3,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r3.u32);
	// addi r4,r30,-1108
	ctx.r4.s64 = ctx.r30.s64 + -1108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83762D54;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83762D58;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,68(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 68, temp.u32);
	// addi r4,r30,-1084
	ctx.r4.s64 = ctx.r30.s64 + -1084;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83762D6C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83762D70;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,72(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 72, temp.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r29,72
	ctx.r27.s64 = ctx.r29.s64 + 72;
loc_83762D80:
	// addi r4,r30,-1060
	ctx.r4.s64 = ctx.r30.s64 + -1060;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83762D8C;
	sub_82535898(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82535890
	ctx.lr = 0x83762D94;
	sub_82535890(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83762D98;
	sub_82534928(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfsu f0,4(r27)
	ea = 4 + ctx.r27.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r27.u32 = ea;
	// cmpwi cr6,r28,5
	cr6.compare<int32_t>(ctx.r28.s32, 5, xer);
	// blt cr6,0x83762d80
	if (cr6.lt) goto loc_83762D80;
	// addi r4,r30,-1048
	ctx.r4.s64 = ctx.r30.s64 + -1048;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83762DB8;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83762DBC;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,96(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 96, temp.u32);
	// addi r4,r30,-1032
	ctx.r4.s64 = ctx.r30.s64 + -1032;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83762DD0;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83762DD4;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,100(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 100, temp.u32);
	// addi r4,r30,-1008
	ctx.r4.s64 = ctx.r30.s64 + -1008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83762DE8;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83762DEC;
	sub_82534928(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,104(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 104, temp.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r29,104
	ctx.r27.s64 = ctx.r29.s64 + 104;
loc_83762DFC:
	// addi r4,r30,-984
	ctx.r4.s64 = ctx.r30.s64 + -984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83762E08;
	sub_82535898(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82535890
	ctx.lr = 0x83762E10;
	sub_82535890(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83762E14;
	sub_82534928(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfsu f0,4(r27)
	ea = 4 + ctx.r27.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r27.u32 = ea;
	// cmpwi cr6,r28,5
	cr6.compare<int32_t>(ctx.r28.s32, 5, xer);
	// blt cr6,0x83762dfc
	if (cr6.lt) goto loc_83762DFC;
	// addi r4,r30,-956
	ctx.r4.s64 = ctx.r30.s64 + -956;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83762E34;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83762E38;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,128(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 128, temp.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r29,128
	ctx.r27.s64 = ctx.r29.s64 + 128;
loc_83762E48:
	// addi r4,r30,-932
	ctx.r4.s64 = ctx.r30.s64 + -932;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83762E54;
	sub_82535898(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82535890
	ctx.lr = 0x83762E5C;
	sub_82535890(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83762E60;
	sub_82534928(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfsu f0,4(r27)
	ea = 4 + ctx.r27.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r27.u32 = ea;
	// cmpwi cr6,r28,5
	cr6.compare<int32_t>(ctx.r28.s32, 5, xer);
	// blt cr6,0x83762e48
	if (cr6.lt) goto loc_83762E48;
	// addi r4,r30,-908
	ctx.r4.s64 = ctx.r30.s64 + -908;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83762E80;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83762E84;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,152(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 152, temp.u32);
	// addi r4,r30,-884
	ctx.r4.s64 = ctx.r30.s64 + -884;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83762E98;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83762E9C;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,156(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 156, temp.u32);
	// addi r4,r30,-856
	ctx.r4.s64 = ctx.r30.s64 + -856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83762EB0;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83762EB4;
	sub_82534928(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,160(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 160, temp.u32);
	// addi r4,r30,-828
	ctx.r4.s64 = ctx.r30.s64 + -828;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83762EC8;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83762ECC;
	sub_82534928(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,164(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 164, temp.u32);
	// addi r4,r30,-800
	ctx.r4.s64 = ctx.r30.s64 + -800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83762EE0;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83762EE4;
	sub_82534928(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,168(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 168, temp.u32);
	// addi r4,r30,-772
	ctx.r4.s64 = ctx.r30.s64 + -772;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83762EF8;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83762EFC;
	sub_82534928(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,172(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 172, temp.u32);
	// addi r4,r30,-764
	ctx.r4.s64 = ctx.r30.s64 + -764;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83762F10;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83762F14;
	sub_82534928(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// stfs f8,176(r29)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r29.u32 + 176, temp.u32);
	// addi r4,r30,-740
	ctx.r4.s64 = ctx.r30.s64 + -740;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83762F28;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83762F2C;
	sub_82534928(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// stfs f7,180(r29)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r29.u32 + 180, temp.u32);
	// addi r4,r30,-720
	ctx.r4.s64 = ctx.r30.s64 + -720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83762F40;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83762F44;
	sub_82534928(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// stfs f6,184(r29)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r29.u32 + 184, temp.u32);
	// addi r4,r30,-696
	ctx.r4.s64 = ctx.r30.s64 + -696;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83762F58;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83762F5C;
	sub_82534928(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// stfs f5,188(r29)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r29.u32 + 188, temp.u32);
	// addi r4,r30,-672
	ctx.r4.s64 = ctx.r30.s64 + -672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83762F70;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83762F74;
	sub_82534928(ctx, base);
	// frsp f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// stfs f4,192(r29)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r29.u32 + 192, temp.u32);
	// addi r4,r30,-644
	ctx.r4.s64 = ctx.r30.s64 + -644;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83762F88;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83762F8C;
	sub_82534928(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// stfs f3,196(r29)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r29.u32 + 196, temp.u32);
	// addi r4,r30,-628
	ctx.r4.s64 = ctx.r30.s64 + -628;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83762FA0;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83762FA4;
	sub_82534928(ctx, base);
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// stfs f2,200(r29)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r29.u32 + 200, temp.u32);
	// addi r4,r30,-612
	ctx.r4.s64 = ctx.r30.s64 + -612;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83762FB8;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83762FBC;
	sub_82534928(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// stfs f1,204(r29)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 204, temp.u32);
	// addi r4,r30,-596
	ctx.r4.s64 = ctx.r30.s64 + -596;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83762FD0;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83762FD4;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,208(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 208, temp.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r29,208
	ctx.r27.s64 = ctx.r29.s64 + 208;
loc_83762FE4:
	// addi r4,r30,-580
	ctx.r4.s64 = ctx.r30.s64 + -580;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83762FF0;
	sub_82535898(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82535890
	ctx.lr = 0x83762FF8;
	sub_82535890(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83762FFC;
	sub_82534928(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfsu f0,4(r27)
	ea = 4 + ctx.r27.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r27.u32 = ea;
	// cmpwi cr6,r28,5
	cr6.compare<int32_t>(ctx.r28.s32, 5, xer);
	// blt cr6,0x83762fe4
	if (cr6.lt) goto loc_83762FE4;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r29,228
	ctx.r27.s64 = ctx.r29.s64 + 228;
loc_83763018:
	// addi r4,r30,-560
	ctx.r4.s64 = ctx.r30.s64 + -560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83763024;
	sub_82535898(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82535890
	ctx.lr = 0x8376302C;
	sub_82535890(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83763030;
	sub_82534928(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfsu f0,4(r27)
	ea = 4 + ctx.r27.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r27.u32 = ea;
	// cmpwi cr6,r28,5
	cr6.compare<int32_t>(ctx.r28.s32, 5, xer);
	// blt cr6,0x83763018
	if (cr6.lt) goto loc_83763018;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r29,248
	ctx.r27.s64 = ctx.r29.s64 + 248;
loc_8376304C:
	// addi r4,r30,-540
	ctx.r4.s64 = ctx.r30.s64 + -540;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83763058;
	sub_82535898(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82535890
	ctx.lr = 0x83763060;
	sub_82535890(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83763064;
	sub_82534928(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfsu f0,4(r27)
	ea = 4 + ctx.r27.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r27.u32 = ea;
	// cmpwi cr6,r28,5
	cr6.compare<int32_t>(ctx.r28.s32, 5, xer);
	// blt cr6,0x8376304c
	if (cr6.lt) goto loc_8376304C;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r29,268
	ctx.r27.s64 = ctx.r29.s64 + 268;
loc_83763080:
	// addi r4,r30,-516
	ctx.r4.s64 = ctx.r30.s64 + -516;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x8376308C;
	sub_82535898(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82535890
	ctx.lr = 0x83763094;
	sub_82535890(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83763098;
	sub_82534928(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfsu f0,4(r27)
	ea = 4 + ctx.r27.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r27.u32 = ea;
	// cmpwi cr6,r28,5
	cr6.compare<int32_t>(ctx.r28.s32, 5, xer);
	// blt cr6,0x83763080
	if (cr6.lt) goto loc_83763080;
	// addi r4,r30,-492
	ctx.r4.s64 = ctx.r30.s64 + -492;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x837630B8;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837630BC;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,292(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 292, temp.u32);
	// addi r4,r30,-472
	ctx.r4.s64 = ctx.r30.s64 + -472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x837630D0;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837630D4;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,296(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 296, temp.u32);
	// addi r4,r30,-456
	ctx.r4.s64 = ctx.r30.s64 + -456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x837630E8;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837630EC;
	sub_82534928(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,300(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 300, temp.u32);
	// addi r4,r30,-432
	ctx.r4.s64 = ctx.r30.s64 + -432;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83763100;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83763104;
	sub_82534928(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,304(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 304, temp.u32);
	// addi r4,r30,-416
	ctx.r4.s64 = ctx.r30.s64 + -416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83763118;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8376311C;
	sub_82534928(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,308(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 308, temp.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r29,308
	ctx.r27.s64 = ctx.r29.s64 + 308;
loc_8376312C:
	// addi r4,r30,-404
	ctx.r4.s64 = ctx.r30.s64 + -404;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83763138;
	sub_82535898(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82535890
	ctx.lr = 0x83763140;
	sub_82535890(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83763144;
	sub_82534928(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfsu f0,4(r27)
	ea = 4 + ctx.r27.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r27.u32 = ea;
	// cmpwi cr6,r28,5
	cr6.compare<int32_t>(ctx.r28.s32, 5, xer);
	// blt cr6,0x8376312c
	if (cr6.lt) goto loc_8376312C;
	// addi r4,r30,-388
	ctx.r4.s64 = ctx.r30.s64 + -388;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83763164;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83763168;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,332(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 332, temp.u32);
	// addi r4,r30,-372
	ctx.r4.s64 = ctx.r30.s64 + -372;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x8376317C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83763180;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,336(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 336, temp.u32);
	// addi r4,r30,-360
	ctx.r4.s64 = ctx.r30.s64 + -360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83763194;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83763198;
	sub_82534928(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,340(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 340, temp.u32);
	// addi r4,r30,-348
	ctx.r4.s64 = ctx.r30.s64 + -348;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x837631AC;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837631B0;
	sub_82534928(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,344(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 344, temp.u32);
	// addi r4,r30,-336
	ctx.r4.s64 = ctx.r30.s64 + -336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x837631C4;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837631C8;
	sub_82534928(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,348(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 348, temp.u32);
	// addi r4,r30,-324
	ctx.r4.s64 = ctx.r30.s64 + -324;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x837631DC;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837631E0;
	sub_82534928(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,352(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 352, temp.u32);
	// addi r4,r30,-300
	ctx.r4.s64 = ctx.r30.s64 + -300;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x837631F4;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837631F8;
	sub_82534928(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// stfs f8,356(r29)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r29.u32 + 356, temp.u32);
	// addi r4,r30,-276
	ctx.r4.s64 = ctx.r30.s64 + -276;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x8376320C;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x83763210;
	sub_82534770(ctx, base);
	// stw r3,360(r29)
	PPC_STORE_U32(ctx.r29.u32 + 360, ctx.r3.u32);
	// addi r4,r30,-260
	ctx.r4.s64 = ctx.r30.s64 + -260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83763220;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83763224;
	sub_82534928(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// stfs f7,364(r29)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r29.u32 + 364, temp.u32);
	// addi r4,r30,-252
	ctx.r4.s64 = ctx.r30.s64 + -252;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83763238;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8376323C;
	sub_82534928(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// stfs f6,368(r29)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r29.u32 + 368, temp.u32);
	// addi r4,r30,-236
	ctx.r4.s64 = ctx.r30.s64 + -236;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83763250;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83763254;
	sub_82534928(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// stfs f5,372(r29)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r29.u32 + 372, temp.u32);
	// addi r4,r30,-216
	ctx.r4.s64 = ctx.r30.s64 + -216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83763268;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x8376326C;
	sub_82534928(ctx, base);
	// frsp f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// stfs f4,376(r29)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r29.u32 + 376, temp.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r29,376
	ctx.r27.s64 = ctx.r29.s64 + 376;
loc_8376327C:
	// addi r4,r30,-196
	ctx.r4.s64 = ctx.r30.s64 + -196;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83763288;
	sub_82535898(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82535890
	ctx.lr = 0x83763290;
	sub_82535890(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83763294;
	sub_82534928(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfsu f0,4(r27)
	ea = 4 + ctx.r27.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r27.u32 = ea;
	// cmpwi cr6,r28,5
	cr6.compare<int32_t>(ctx.r28.s32, 5, xer);
	// blt cr6,0x8376327c
	if (cr6.lt) goto loc_8376327C;
	// addi r4,r30,-176
	ctx.r4.s64 = ctx.r30.s64 + -176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x837632B4;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837632B8;
	sub_82534928(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,400(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 400, temp.u32);
	// addi r4,r30,-156
	ctx.r4.s64 = ctx.r30.s64 + -156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x837632CC;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837632D0;
	sub_82534928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,404(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 404, temp.u32);
	// addi r4,r30,-132
	ctx.r4.s64 = ctx.r30.s64 + -132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x837632E4;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x837632E8;
	sub_82534928(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,408(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 408, temp.u32);
	// addi r4,r30,-108
	ctx.r4.s64 = ctx.r30.s64 + -108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x837632FC;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83763300;
	sub_82534928(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,412(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 412, temp.u32);
	// addi r4,r30,-80
	ctx.r4.s64 = ctx.r30.s64 + -80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83763314;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x83763318;
	sub_82534B10(ctx, base);
	// stb r3,416(r29)
	PPC_STORE_U8(ctx.r29.u32 + 416, ctx.r3.u8);
	// addi r4,r30,-64
	ctx.r4.s64 = ctx.r30.s64 + -64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83763328;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x8376332C;
	sub_82534B10(ctx, base);
	// stb r3,417(r29)
	PPC_STORE_U8(ctx.r29.u32 + 417, ctx.r3.u8);
	// addi r4,r30,-52
	ctx.r4.s64 = ctx.r30.s64 + -52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x8376333C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83763340;
	sub_82534928(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,420(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 420, temp.u32);
	// addi r4,r30,-40
	ctx.r4.s64 = ctx.r30.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83763354;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83763358;
	sub_82534928(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,424(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 424, temp.u32);
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x8376336C;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83763370;
	sub_82534928(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// stfs f8,428(r29)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r29.u32 + 428, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x83763384;
	sub_82535898(ctx, base);
	// bl 0x82534928
	ctx.lr = 0x83763388;
	sub_82534928(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// stfs f7,432(r29)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r29.u32 + 432, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8376339C"))) PPC_WEAK_FUNC(sub_8376339C);
PPC_FUNC_IMPL(__imp__sub_8376339C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837633A0"))) PPC_WEAK_FUNC(sub_837633A0);
PPC_FUNC_IMPL(__imp__sub_837633A0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x837633cc
	if (!cr6.eq) goto loc_837633CC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x837637bc
	goto loc_837637BC;
loc_837633CC:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f11,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f10,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,20(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x83763830
	ctx.lr = 0x83763400;
	sub_83763830(ctx, base);
	// lfs f9,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f9,24(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,28(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,32(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f6,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,36(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f5,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,40(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x83763830
	ctx.lr = 0x83763434;
	sub_83763830(ctx, base);
	// lfs f4,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f4,44(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f3,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,48(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f2,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,52(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f1,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,56(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f0,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// lfs f13,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f12,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,72(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// bl 0x83763830
	ctx.lr = 0x83763480;
	sub_83763830(ctx, base);
	// lfs f11,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f11,76(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,80(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,84(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lfs f8,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,88(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// lfs f7,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,92(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// lfs f6,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,96(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// lfs f5,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,100(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// lfs f4,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,104(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x83763830
	ctx.lr = 0x837634CC;
	sub_83763830(ctx, base);
	// lfs f3,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f3,108(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// lfs f2,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,112(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// lfs f1,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,116(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,124(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// lfs f12,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,128(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x83763830
	ctx.lr = 0x83763508;
	sub_83763830(ctx, base);
	// lfs f11,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f11,132(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,136(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,140(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// lfs f8,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,144(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// lfs f7,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,148(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// lfs f6,68(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,152(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// lfs f5,72(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,156(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// lfs f4,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,160(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// lfs f3,80(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,164(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// lfs f2,84(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,168(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// lfs f1,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,172(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// lfs f0,92(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,176(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// lfs f13,96(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,180(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// lfs f12,100(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,184(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// lfs f11,104(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,188(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// lfs f10,108(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,192(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// lfs f9,112(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,196(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// lfs f8,116(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,200(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// lfs f7,120(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,204(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 204, temp.u32);
	// lfs f6,124(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,208(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// lwz r3,128(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// bl 0x83763830
	ctx.lr = 0x837635B4;
	sub_83763830(ctx, base);
	// lfs f5,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f5,212(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// lfs f4,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,216(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// lfs f3,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,220(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
	// lfs f2,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,224(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
	// lfs f1,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,228(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 228, temp.u32);
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// bl 0x83763830
	ctx.lr = 0x837635E8;
	sub_83763830(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f0,232(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,236(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,240(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,244(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// lfs f10,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,248(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// bl 0x83763830
	ctx.lr = 0x8376361C;
	sub_83763830(ctx, base);
	// lfs f9,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f9,252(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,256(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,260(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// lfs f6,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,264(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// lfs f5,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,268(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// lwz r3,140(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// bl 0x83763830
	ctx.lr = 0x83763650;
	sub_83763830(ctx, base);
	// lfs f4,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,272(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f3,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,276(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// lfs f2,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,280(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// lfs f1,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,284(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// lfs f0,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,288(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// lfs f13,144(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,292(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 292, temp.u32);
	// lfs f12,148(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,296(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// lfs f11,152(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,300(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 300, temp.u32);
	// lfs f10,156(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,304(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// lfs f9,160(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,308(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// lwz r3,164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// bl 0x83763830
	ctx.lr = 0x837636AC;
	sub_83763830(ctx, base);
	// lfs f8,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f8,312(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,316(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 316, temp.u32);
	// lfs f6,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,320(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 320, temp.u32);
	// lfs f5,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,324(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
	// lfs f4,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,328(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 328, temp.u32);
	// lfs f3,168(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,332(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 332, temp.u32);
	// lfs f2,172(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,336(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 336, temp.u32);
	// lfs f1,176(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,340(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 340, temp.u32);
	// lfs f0,180(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,344(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// lfs f13,184(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,348(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 348, temp.u32);
	// lfs f12,188(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,352(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// lfs f11,192(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,356(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 356, temp.u32);
	// lwz r10,196(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// stw r10,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r10.u32);
	// lfs f10,200(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,364(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 364, temp.u32);
	// lfs f9,204(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,368(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 368, temp.u32);
	// lfs f8,208(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,372(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 372, temp.u32);
	// lfs f7,212(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,376(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 376, temp.u32);
	// lwz r3,216(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// bl 0x83763830
	ctx.lr = 0x83763740;
	sub_83763830(ctx, base);
	// lfs f6,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,380(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 380, temp.u32);
	// lfs f5,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,384(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
	// lfs f4,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,388(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 388, temp.u32);
	// lfs f3,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,392(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 392, temp.u32);
	// lfs f2,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f2,396(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 396, temp.u32);
	// lfs f1,220(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,400(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// lfs f0,224(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,404(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// lfs f13,228(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,408(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 408, temp.u32);
	// lfs f12,232(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,412(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 412, temp.u32);
	// lbz r9,236(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 236);
	// stb r9,416(r31)
	PPC_STORE_U8(ctx.r31.u32 + 416, ctx.r9.u8);
	// lbz r8,237(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 237);
	// stb r8,417(r31)
	PPC_STORE_U8(ctx.r31.u32 + 417, ctx.r8.u8);
	// lfs f11,240(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,420(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
	// lfs f10,244(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,424(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 424, temp.u32);
	// lfs f9,248(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,428(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 428, temp.u32);
	// lfs f8,252(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,432(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 432, temp.u32);
loc_837637BC:
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

__attribute__((alias("__imp__sub_837637D4"))) PPC_WEAK_FUNC(sub_837637D4);
PPC_FUNC_IMPL(__imp__sub_837637D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837637D8"))) PPC_WEAK_FUNC(sub_837637D8);
PPC_FUNC_IMPL(__imp__sub_837637D8) {
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
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,436
	ctx.r4.s64 = 436;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837637FC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83763818
	if (cr6.eq) goto loc_83763818;
	// bl 0x83762a38
	ctx.lr = 0x83763808;
	sub_83762A38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83763818:
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

__attribute__((alias("__imp__sub_8376382C"))) PPC_WEAK_FUNC(sub_8376382C);
PPC_FUNC_IMPL(__imp__sub_8376382C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83763830"))) PPC_WEAK_FUNC(sub_83763830);
PPC_FUNC_IMPL(__imp__sub_83763830) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8376383c
	if (!cr6.eq) goto loc_8376383C;
	// blr 
	return;
loc_8376383C:
	// add r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 + ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83763844"))) PPC_WEAK_FUNC(sub_83763844);
PPC_FUNC_IMPL(__imp__sub_83763844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83763848"))) PPC_WEAK_FUNC(sub_83763848);
PPC_FUNC_IMPL(__imp__sub_83763848) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8306e850
	ctx.lr = 0x83763864;
	sub_8306E850(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83763884
	if (!cr6.eq) goto loc_83763884;
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
loc_83763884:
	// li r5,628
	ctx.r5.s64 = 628;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x83763890;
	sub_831CE980(ctx, base);
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

__attribute__((alias("__imp__sub_837638A8"))) PPC_WEAK_FUNC(sub_837638A8);
PPC_FUNC_IMPL(__imp__sub_837638A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837638B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8306e520
	ctx.lr = 0x837638C8;
	sub_8306E520(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837638f8
	if (!cr6.eq) goto loc_837638F8;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,30436(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30436);
	// bl 0x8306e520
	ctx.lr = 0x837638E4;
	sub_8306E520(ctx, base);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837638f8
	if (!cr6.eq) goto loc_837638F8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837638F8:
	// li r5,480
	ctx.r5.s64 = 480;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x83763904;
	sub_831CE980(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8376392c
	if (cr6.eq) goto loc_8376392C;
	// bl 0x8306e8d8
	ctx.lr = 0x83763920;
	sub_8306E8D8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8376392C:
	// bl 0x8306df38
	ctx.lr = 0x83763930;
	sub_8306DF38(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8376393C"))) PPC_WEAK_FUNC(sub_8376393C);
PPC_FUNC_IMPL(__imp__sub_8376393C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83763940"))) PPC_WEAK_FUNC(sub_83763940);
PPC_FUNC_IMPL(__imp__sub_83763940) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83763948;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8306e5a8
	ctx.lr = 0x83763960;
	sub_8306E5A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8376398c
	if (!cr6.eq) goto loc_8376398C;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,30452(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 30452);
	// bl 0x8306e5a8
	ctx.lr = 0x83763978;
	sub_8306E5A8(ctx, base);
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8376398c
	if (!cr6.eq) goto loc_8376398C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8376398C:
	// li r5,88
	ctx.r5.s64 = 88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x83763998;
	sub_831CE980(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x837639c4
	if (cr6.eq) goto loc_837639C4;
	// bl 0x8306e8d8
	ctx.lr = 0x837639B8;
	sub_8306E8D8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837639C4:
	// bl 0x8306df38
	ctx.lr = 0x837639C8;
	sub_8306DF38(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837639D4"))) PPC_WEAK_FUNC(sub_837639D4);
PPC_FUNC_IMPL(__imp__sub_837639D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837639D8"))) PPC_WEAK_FUNC(sub_837639D8);
PPC_FUNC_IMPL(__imp__sub_837639D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837639E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8306e850
	ctx.lr = 0x837639F8;
	sub_8306E850(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83763a24
	if (!cr6.eq) goto loc_83763A24;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,30436(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30436);
	// bl 0x8306e850
	ctx.lr = 0x83763A10;
	sub_8306E850(ctx, base);
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83763a24
	if (!cr6.eq) goto loc_83763A24;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83763A24:
	// li r5,628
	ctx.r5.s64 = 628;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x83763A30;
	sub_831CE980(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x83763a5c
	if (cr6.eq) goto loc_83763A5C;
	// bl 0x8306e8d8
	ctx.lr = 0x83763A50;
	sub_8306E8D8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83763A5C:
	// bl 0x8306df38
	ctx.lr = 0x83763A60;
	sub_8306DF38(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83763A6C"))) PPC_WEAK_FUNC(sub_83763A6C);
PPC_FUNC_IMPL(__imp__sub_83763A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83763A70"))) PPC_WEAK_FUNC(sub_83763A70);
PPC_FUNC_IMPL(__imp__sub_83763A70) {
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
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-13216
	ctx.r9.s64 = ctx.r11.s64 + -13216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83763aa4
	if (cr6.eq) goto loc_83763AA4;
	// bl 0x82416268
	ctx.lr = 0x83763AA0;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83763AA4:
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

__attribute__((alias("__imp__sub_83763AB8"))) PPC_WEAK_FUNC(sub_83763AB8);
PPC_FUNC_IMPL(__imp__sub_83763AB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8306e2a0
	ctx.lr = 0x83763AE0;
	sub_8306E2A0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83763AF8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// subfc r8,r3,r30
	xer.ca = ctx.r30.u32 >= ctx.r3.u32;
	ctx.r8.s64 = ctx.r30.s64 - ctx.r3.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r6,31
	ctx.r3.u64 = ctx.r6.u32 & 0x1;
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

__attribute__((alias("__imp__sub_83763B1C"))) PPC_WEAK_FUNC(sub_83763B1C);
PPC_FUNC_IMPL(__imp__sub_83763B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83763B20"))) PPC_WEAK_FUNC(sub_83763B20);
PPC_FUNC_IMPL(__imp__sub_83763B20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83763B28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83763b4c
	if (!cr6.eq) goto loc_83763B4C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83763B4C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8306e850
	ctx.lr = 0x83763B54;
	sub_8306E850(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83763b68
	if (!cr6.eq) goto loc_83763B68;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x83763b78
	goto loc_83763B78;
loc_83763B68:
	// li r5,628
	ctx.r5.s64 = 628;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x83763B74;
	sub_831CE980(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
loc_83763B78:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83774348
	ctx.lr = 0x83763B88;
	sub_83774348(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83763B90"))) PPC_WEAK_FUNC(sub_83763B90);
PPC_FUNC_IMPL(__imp__sub_83763B90) {
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
	// bl 0x831156e8
	ctx.lr = 0x83763BA4;
	sub_831156E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83763c40
	if (cr6.eq) goto loc_83763C40;
	// bl 0x83115808
	ctx.lr = 0x83763BB4;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83763c40
	if (cr6.eq) goto loc_83763C40;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83763be4
	if (cr6.eq) goto loc_83763BE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83115808
	ctx.lr = 0x83763BD4;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x83763be8
	if (!cr6.eq) goto loc_83763BE8;
loc_83763BE4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83763BE8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83763c40
	if (cr6.eq) goto loc_83763C40;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83763c18
	if (cr6.eq) goto loc_83763C18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83115808
	ctx.lr = 0x83763C08;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x83763c1c
	if (!cr6.eq) goto loc_83763C1C;
loc_83763C18:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83763C1C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r8,r31
	ctx.r3.u64 = ctx.r8.u64 & ctx.r31.u64;
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
loc_83763C40:
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

__attribute__((alias("__imp__sub_83763C58"))) PPC_WEAK_FUNC(sub_83763C58);
PPC_FUNC_IMPL(__imp__sub_83763C58) {
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
	// bl 0x835242a0
	ctx.lr = 0x83763C78;
	sub_835242A0(ctx, base);
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-13132
	ctx.r10.s64 = ctx.r11.s64 + -13132;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83763CA4"))) PPC_WEAK_FUNC(sub_83763CA4);
PPC_FUNC_IMPL(__imp__sub_83763CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83763CA8"))) PPC_WEAK_FUNC(sub_83763CA8);
PPC_FUNC_IMPL(__imp__sub_83763CA8) {
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
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-13132
	ctx.r10.s64 = ctx.r11.s64 + -13132;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83524210
	ctx.lr = 0x83763CD4;
	sub_83524210(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83763cf4
	if (cr6.eq) goto loc_83763CF4;
	// bl 0x82595188
	ctx.lr = 0x83763CE4;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83763CF4;
	sub_825952B8(ctx, base);
loc_83763CF4:
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

__attribute__((alias("__imp__sub_83763D10"))) PPC_WEAK_FUNC(sub_83763D10);
PPC_FUNC_IMPL(__imp__sub_83763D10) {
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
	// bl 0x835242a0
	ctx.lr = 0x83763D30;
	sub_835242A0(ctx, base);
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-13120
	ctx.r10.s64 = ctx.r11.s64 + -13120;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83763D5C"))) PPC_WEAK_FUNC(sub_83763D5C);
PPC_FUNC_IMPL(__imp__sub_83763D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83763D60"))) PPC_WEAK_FUNC(sub_83763D60);
PPC_FUNC_IMPL(__imp__sub_83763D60) {
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
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-13120
	ctx.r10.s64 = ctx.r11.s64 + -13120;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83524210
	ctx.lr = 0x83763D8C;
	sub_83524210(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83763dac
	if (cr6.eq) goto loc_83763DAC;
	// bl 0x82595188
	ctx.lr = 0x83763D9C;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83763DAC;
	sub_825952B8(ctx, base);
loc_83763DAC:
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

__attribute__((alias("__imp__sub_83763DC8"))) PPC_WEAK_FUNC(sub_83763DC8);
PPC_FUNC_IMPL(__imp__sub_83763DC8) {
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
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-13108
	ctx.r10.s64 = ctx.r11.s64 + -13108;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83524210
	ctx.lr = 0x83763DF4;
	sub_83524210(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83763e14
	if (cr6.eq) goto loc_83763E14;
	// bl 0x82595188
	ctx.lr = 0x83763E04;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83763E14;
	sub_825952B8(ctx, base);
loc_83763E14:
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

__attribute__((alias("__imp__sub_83763E30"))) PPC_WEAK_FUNC(sub_83763E30);
PPC_FUNC_IMPL(__imp__sub_83763E30) {
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
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// blt cr6,0x83763e64
	if (cr6.lt) goto loc_83763E64;
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// ori r10,r11,159
	ctx.r10.u64 = ctx.r11.u64 | 159;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// ble cr6,0x83763e68
	if (!cr6.gt) goto loc_83763E68;
loc_83763E64:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83763E68:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83763e8c
	if (!cr6.eq) goto loc_83763E8C;
	// bl 0x8311c6c8
	ctx.lr = 0x83763E78;
	sub_8311C6C8(ctx, base);
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// ori r10,r11,160
	ctx.r10.u64 = ctx.r11.u64 | 160;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// blt cr6,0x83763e90
	if (cr6.lt) goto loc_83763E90;
loc_83763E8C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83763E90:
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
}

__attribute__((alias("__imp__sub_83763EA4"))) PPC_WEAK_FUNC(sub_83763EA4);
PPC_FUNC_IMPL(__imp__sub_83763EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83763EA8"))) PPC_WEAK_FUNC(sub_83763EA8);
PPC_FUNC_IMPL(__imp__sub_83763EA8) {
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
	// lis r31,-31743
	ctx.r31.s64 = -2080309248;
	// lwz r3,-21400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -21400);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83763ee0
	if (cr6.eq) goto loc_83763EE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83763ED8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-21400(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21400, ctx.r11.u32);
loc_83763EE0:
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

__attribute__((alias("__imp__sub_83763EF4"))) PPC_WEAK_FUNC(sub_83763EF4);
PPC_FUNC_IMPL(__imp__sub_83763EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83763EF8"))) PPC_WEAK_FUNC(sub_83763EF8);
PPC_FUNC_IMPL(__imp__sub_83763EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,-21400(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21400);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83763F04"))) PPC_WEAK_FUNC(sub_83763F04);
PPC_FUNC_IMPL(__imp__sub_83763F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83763F08"))) PPC_WEAK_FUNC(sub_83763F08);
PPC_FUNC_IMPL(__imp__sub_83763F08) {
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
	// lwz r3,156(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83763f84
	if (!cr6.eq) goto loc_83763F84;
	// li r11,43
	ctx.r11.s64 = 43;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,76
	ctx.r4.s64 = 76;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83763F40;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83763f54
	if (cr6.eq) goto loc_83763F54;
	// bl 0x8377fc98
	ctx.lr = 0x83763F4C;
	sub_8377FC98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83763f58
	goto loc_83763F58;
loc_83763F54:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83763F58:
	// stw r4,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83763f6c
	if (cr6.eq) goto loc_83763F6C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x83763F6C;
	sub_83103100(ctx, base);
loc_83763F6C:
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
loc_83763F84:
	// bl 0x8377efd0
	ctx.lr = 0x83763F88;
	sub_8377EFD0(ctx, base);
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

__attribute__((alias("__imp__sub_83763F9C"))) PPC_WEAK_FUNC(sub_83763F9C);
PPC_FUNC_IMPL(__imp__sub_83763F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83763FA0"))) PPC_WEAK_FUNC(sub_83763FA0);
PPC_FUNC_IMPL(__imp__sub_83763FA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83763FA8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r29,-21400(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21400);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83763ffc
	if (cr6.eq) goto loc_83763FFC;
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// lis r31,16
	ctx.r31.s64 = 1048576;
	// li r28,0
	ctx.r28.s64 = 0;
	// ori r27,r11,159
	ctx.r27.u64 = ctx.r11.u64 | 159;
loc_83763FD0:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// sth r28,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r28.u16);
	// ld r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,72(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// bl 0x8306ef60
	ctx.lr = 0x83763FE8;
	sub_8306EF60(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83764014
	if (cr6.eq) goto loc_83764014;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// ble cr6,0x83763fd0
	if (!cr6.gt) goto loc_83763FD0;
loc_83763FFC:
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ld r11,30388(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 30388);
	// std r11,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r11.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83764014:
	// std r30,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r30.u64);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83764024"))) PPC_WEAK_FUNC(sub_83764024);
PPC_FUNC_IMPL(__imp__sub_83764024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83764028"))) PPC_WEAK_FUNC(sub_83764028);
PPC_FUNC_IMPL(__imp__sub_83764028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r11,r11,65523
	ctx.r11.u64 = ctx.r11.u64 | 65523;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83764038"))) PPC_WEAK_FUNC(sub_83764038);
PPC_FUNC_IMPL(__imp__sub_83764038) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83764040;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r28,-21400(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21400);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8376408c
	if (cr6.eq) goto loc_8376408C;
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// lis r31,16
	ctx.r31.s64 = 1048576;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r30,r11,159
	ctx.r30.u64 = ctx.r11.u64 | 159;
loc_83764064:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// sth r29,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r29.u16);
	// lwz r3,72(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8306ef60
	ctx.lr = 0x83764078;
	sub_8306EF60(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83764098
	if (cr6.eq) goto loc_83764098;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// ble cr6,0x83764064
	if (!cr6.gt) goto loc_83764064;
loc_8376408C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83764098:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837640A4"))) PPC_WEAK_FUNC(sub_837640A4);
PPC_FUNC_IMPL(__imp__sub_837640A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837640A8"))) PPC_WEAK_FUNC(sub_837640A8);
PPC_FUNC_IMPL(__imp__sub_837640A8) {
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
	// lwz r31,72(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x837640d4
	if (!cr6.eq) goto loc_837640D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83764104
	goto loc_83764104;
loc_837640D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83763ab8
	ctx.lr = 0x837640DC;
	sub_83763AB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83764100
	if (!cr6.eq) goto loc_83764100;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8306ef60
	ctx.lr = 0x837640F4;
	sub_8306EF60(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x83764104
	if (cr6.eq) goto loc_83764104;
loc_83764100:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83764104:
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

__attribute__((alias("__imp__sub_8376411C"))) PPC_WEAK_FUNC(sub_8376411C);
PPC_FUNC_IMPL(__imp__sub_8376411C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83764120"))) PPC_WEAK_FUNC(sub_83764120);
PPC_FUNC_IMPL(__imp__sub_83764120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// rlwinm r10,r5,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r11,r6,25
	ctx.r11.u64 = ctx.r6.u32 & 0x7F;
	// clrlwi r9,r7,25
	ctx.r9.u64 = ctx.r7.u32 & 0x7F;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r6,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0xFFFFFF80;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83764148"))) PPC_WEAK_FUNC(sub_83764148);
PPC_FUNC_IMPL(__imp__sub_83764148) {
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
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83764180
	if (cr6.eq) goto loc_83764180;
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
loc_83764180:
	// li r11,43
	ctx.r11.s64 = 43;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,136
	ctx.r4.s64 = 136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83764198;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837641ac
	if (cr6.eq) goto loc_837641AC;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x83770b50
	ctx.lr = 0x837641A8;
	sub_83770B50(ctx, base);
	// b 0x837641b0
	goto loc_837641B0;
loc_837641AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837641B0:
	// stw r3,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_837641CC"))) PPC_WEAK_FUNC(sub_837641CC);
PPC_FUNC_IMPL(__imp__sub_837641CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837641D0"))) PPC_WEAK_FUNC(sub_837641D0);
PPC_FUNC_IMPL(__imp__sub_837641D0) {
	PPC_FUNC_PROLOGUE();
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r3,368(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 368);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837641DC"))) PPC_WEAK_FUNC(sub_837641DC);
PPC_FUNC_IMPL(__imp__sub_837641DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837641E0"))) PPC_WEAK_FUNC(sub_837641E0);
PPC_FUNC_IMPL(__imp__sub_837641E0) {
	PPC_FUNC_PROLOGUE();
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// stb r5,368(r11)
	PPC_STORE_U8(ctx.r11.u32 + 368, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837641EC"))) PPC_WEAK_FUNC(sub_837641EC);
PPC_FUNC_IMPL(__imp__sub_837641EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837641F0"))) PPC_WEAK_FUNC(sub_837641F0);
PPC_FUNC_IMPL(__imp__sub_837641F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r3,368
	ctx.r10.s64 = ctx.r3.s64 + 368;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83764204:
	// stbx r8,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x83764204
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83764204;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83764214"))) PPC_WEAK_FUNC(sub_83764214);
PPC_FUNC_IMPL(__imp__sub_83764214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83764218"))) PPC_WEAK_FUNC(sub_83764218);
PPC_FUNC_IMPL(__imp__sub_83764218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r3,370
	ctx.r10.s64 = ctx.r3.s64 + 370;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8376422C:
	// stbx r8,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8376422c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8376422C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8376423C"))) PPC_WEAK_FUNC(sub_8376423C);
PPC_FUNC_IMPL(__imp__sub_8376423C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83764240"))) PPC_WEAK_FUNC(sub_83764240);
PPC_FUNC_IMPL(__imp__sub_83764240) {
	PPC_FUNC_PROLOGUE();
	// stw r4,372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 372, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83764248"))) PPC_WEAK_FUNC(sub_83764248);
PPC_FUNC_IMPL(__imp__sub_83764248) {
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
	// lwz r11,244(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376429c
	if (!cr6.eq) goto loc_8376429C;
	// li r11,43
	ctx.r11.s64 = 43;
	// lis r4,4
	ctx.r4.s64 = 262144;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,129
	ctx.r4.u64 = ctx.r4.u64 | 129;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83764284;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83764294
	if (cr6.eq) goto loc_83764294;
	// bl 0x839f75d8
	ctx.lr = 0x83764290;
	sub_839F75D8(ctx, base);
	// b 0x83764298
	goto loc_83764298;
loc_83764294:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83764298:
	// stw r3,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r3.u32);
loc_8376429C:
	// lwz r3,244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
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

__attribute__((alias("__imp__sub_837642B4"))) PPC_WEAK_FUNC(sub_837642B4);
PPC_FUNC_IMPL(__imp__sub_837642B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837642B8"))) PPC_WEAK_FUNC(sub_837642B8);
PPC_FUNC_IMPL(__imp__sub_837642B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,400
	ctx.r3.s64 = 400;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837642C0"))) PPC_WEAK_FUNC(sub_837642C0);
PPC_FUNC_IMPL(__imp__sub_837642C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,324(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x83780240
	sub_83780240(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837642D0"))) PPC_WEAK_FUNC(sub_837642D0);
PPC_FUNC_IMPL(__imp__sub_837642D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837642D4"))) PPC_WEAK_FUNC(sub_837642D4);
PPC_FUNC_IMPL(__imp__sub_837642D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837642D8"))) PPC_WEAK_FUNC(sub_837642D8);
PPC_FUNC_IMPL(__imp__sub_837642D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837642ec
	if (!cr6.eq) goto loc_837642EC;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_837642EC:
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837642FC"))) PPC_WEAK_FUNC(sub_837642FC);
PPC_FUNC_IMPL(__imp__sub_837642FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83764300"))) PPC_WEAK_FUNC(sub_83764300);
PPC_FUNC_IMPL(__imp__sub_83764300) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,212(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x83764320
	if (!cr6.eq) goto loc_83764320;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 212, ctx.r10.u32);
	// blr 
	return;
loc_83764320:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83764328"))) PPC_WEAK_FUNC(sub_83764328);
PPC_FUNC_IMPL(__imp__sub_83764328) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,212(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x83764348
	if (!cr6.eq) goto loc_83764348;
	// li r10,6
	ctx.r10.s64 = 6;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 212, ctx.r10.u32);
	// blr 
	return;
loc_83764348:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83764350"))) PPC_WEAK_FUNC(sub_83764350);
PPC_FUNC_IMPL(__imp__sub_83764350) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,212(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x83764374
	if (!cr6.eq) goto loc_83764374;
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r4,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 212, ctx.r10.u32);
	// blr 
	return;
loc_83764374:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8376437C"))) PPC_WEAK_FUNC(sub_8376437C);
PPC_FUNC_IMPL(__imp__sub_8376437C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83764380"))) PPC_WEAK_FUNC(sub_83764380);
PPC_FUNC_IMPL(__imp__sub_83764380) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,212(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x837643a8
	if (!cr6.eq) goto loc_837643A8;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 252, ctx.r9.u32);
	// blr 
	return;
loc_837643A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837643B0"))) PPC_WEAK_FUNC(sub_837643B0);
PPC_FUNC_IMPL(__imp__sub_837643B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r3,3
	ctx.r8.s64 = ctx.r3.s64 + 3;
	// addi r7,r3,2
	ctx.r7.s64 = ctx.r3.s64 + 2;
	// addi r6,r3,1
	ctx.r6.s64 = ctx.r3.s64 + 1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lis r4,4
	ctx.r4.s64 = 262144;
loc_837643C8:
	// li r5,512
	ctx.r5.s64 = 512;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
loc_837643D4:
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stbx r11,r8,r5
	PPC_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r11.u8);
	// stbx r11,r7,r5
	PPC_STORE_U8(ctx.r7.u32 + ctx.r5.u32, ctx.r11.u8);
	// stbx r11,r6,r5
	PPC_STORE_U8(ctx.r6.u32 + ctx.r5.u32, ctx.r11.u8);
	// stbx r11,r5,r3
	PPC_STORE_U8(ctx.r5.u32 + ctx.r3.u32, ctx.r11.u8);
	// bdnz 0x837643d4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837643D4;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// blt cr6,0x837643c8
	if (cr6.lt) goto loc_837643C8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83764404"))) PPC_WEAK_FUNC(sub_83764404);
PPC_FUNC_IMPL(__imp__sub_83764404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83764408"))) PPC_WEAK_FUNC(sub_83764408);
PPC_FUNC_IMPL(__imp__sub_83764408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83764410;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830706a8
	ctx.lr = 0x8376442C;
	sub_830706A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83764444
	if (!cr6.eq) goto loc_83764444;
loc_83764438:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83764444:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83764438
	if (cr6.eq) goto loc_83764438;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x83764464;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8376446C"))) PPC_WEAK_FUNC(sub_8376446C);
PPC_FUNC_IMPL(__imp__sub_8376446C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83764470"))) PPC_WEAK_FUNC(sub_83764470);
PPC_FUNC_IMPL(__imp__sub_83764470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83764478;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8306c890
	ctx.lr = 0x83764494;
	sub_8306C890(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837644ac
	if (!cr6.eq) goto loc_837644AC;
loc_837644A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837644AC:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837644a0
	if (cr6.eq) goto loc_837644A0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x837644CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837644D4"))) PPC_WEAK_FUNC(sub_837644D4);
PPC_FUNC_IMPL(__imp__sub_837644D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837644D8"))) PPC_WEAK_FUNC(sub_837644D8);
PPC_FUNC_IMPL(__imp__sub_837644D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837644E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830708d8
	ctx.lr = 0x837644FC;
	sub_830708D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83764514
	if (!cr6.eq) goto loc_83764514;
loc_83764508:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83764514:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83764508
	if (cr6.eq) goto loc_83764508;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x83764534;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8376453C"))) PPC_WEAK_FUNC(sub_8376453C);
PPC_FUNC_IMPL(__imp__sub_8376453C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83764540"))) PPC_WEAK_FUNC(sub_83764540);
PPC_FUNC_IMPL(__imp__sub_83764540) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r5,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r5.u32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83572958
	ctx.lr = 0x83764568;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837645c4
	if (cr6.eq) goto loc_837645C4;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837645c4
	if (cr6.eq) goto loc_837645C4;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x837645c4
	if (cr6.lt) goto loc_837645C4;
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x837645c4
	if (cr6.gt) goto loc_837645C4;
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x837645B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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
loc_837645C4:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_837645DC"))) PPC_WEAK_FUNC(sub_837645DC);
PPC_FUNC_IMPL(__imp__sub_837645DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837645E0"))) PPC_WEAK_FUNC(sub_837645E0);
PPC_FUNC_IMPL(__imp__sub_837645E0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
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
	// bl 0x83070638
	ctx.lr = 0x83764608;
	sub_83070638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376461c
	if (cr6.eq) goto loc_8376461C;
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// b 0x83764664
	goto loc_83764664;
loc_8376461C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83572958
	ctx.lr = 0x8376462C;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83764640
	if (cr6.eq) goto loc_83764640;
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// b 0x83764664
	goto loc_83764664;
loc_83764640:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830706a8
	ctx.lr = 0x83764650;
	sub_830706A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
loc_83764664:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8376467C"))) PPC_WEAK_FUNC(sub_8376467C);
PPC_FUNC_IMPL(__imp__sub_8376467C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83764680"))) PPC_WEAK_FUNC(sub_83764680);
PPC_FUNC_IMPL(__imp__sub_83764680) {
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
	// bl 0x83572958
	ctx.lr = 0x837646A8;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837646bc
	if (cr6.eq) goto loc_837646BC;
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// b 0x837646e0
	goto loc_837646E0;
loc_837646BC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830706a8
	ctx.lr = 0x837646CC;
	sub_830706A8(ctx, base);
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
loc_837646E0:
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

__attribute__((alias("__imp__sub_837646F8"))) PPC_WEAK_FUNC(sub_837646F8);
PPC_FUNC_IMPL(__imp__sub_837646F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// bge cr6,0x83764768
	if (!cr6.lt) goto loc_83764768;
loc_83764710:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// lwz r8,16(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// bge cr6,0x83764768
	if (!cr6.lt) goto loc_83764768;
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// add r31,r9,r3
	ctx.r31.u64 = ctx.r9.u64 + ctx.r3.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// srawi r11,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 1;
	// stwx r8,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r8.u32);
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// blt cr6,0x83764710
	if (cr6.lt) goto loc_83764710;
loc_83764768:
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r8,4(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83764788"))) PPC_WEAK_FUNC(sub_83764788);
PPC_FUNC_IMPL(__imp__sub_83764788) {
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
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837647B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837647e0
	if (cr6.eq) goto loc_837647E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837647D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82a7dee0
	ctx.lr = 0x837647DC;
	sub_82A7DEE0(ctx, base);
	// b 0x837647e4
	goto loc_837647E4;
loc_837647E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837647E4:
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

